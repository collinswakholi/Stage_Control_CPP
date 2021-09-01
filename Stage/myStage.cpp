// # include <iostream>
// # include <windows.h>
// # include <tuple>
// # include <list>
// # include <array>
// # include <vector>
// # include <string>
// # include <filesystem>
// # include <charconv>
#pragma warning(disable : 4996)
# include "myStage.h"


using namespace std;

// // Import Thorlabs dependencies
// #include "Thorlabs.MotionControl.IntegratedStepperMotors.h"

// // Import prior sceintific dependencies
// # include "Prior_stage/stdafx.h"
// # include "Prior_stage/PriorScientificSDK.h"

// // Import Marzhauser dependencies
// # include "Marzhauser_stage/Tango.h"

myStage::myStage(void){}; // constructor


//CTango stageObject_M;
//myStage::stageObject_M = new CTango();

//My Data structures
struct myData {
    char stage_name, msg, model, Dll_ver;
    int SsesID, Port, err_code, n_stages,Thor_sel,step;
    vector<char *> serialNos;
    std::tuple<int, int, int> ports{2,8,7};
    std::tuple<int, int, int> Dpos = {0,0,0}; // real units (mm, mm/s, mm/s2 or um for microstage)
    std::tuple<double, double, double> Rpos = {0,0,0};
    int Dvel,Daccn = 0;
    double Rvel,Raccn = 0;
    bool IsConn, IsBus = false;
    string serial;
};

struct OutThor { // struct for collecting connected thorlabs stage serials
    vector<char *> all_serialNos;
    vector<char *> Desc;
    short n;
};

void myStage::getThorStages(OutThor *Out_Thor){ // get serial numbers list for LTS devices that are connected
    char desc[65];

    if (TLI_BuildDeviceList() == 0){ // put this in a separate function
                Out_Thor->n = TLI_GetDeviceListSize(); // get device list size
                char serialNos[100];
                TLI_GetDeviceListByTypeExt(serialNos,100,45); // get LTS serial numbers

                // output list of matching devices
                {
                    char* searchContext = nullptr;
                    char* p = strtok_s(serialNos, ",", &searchContext);

                    while (p != nullptr) {
                        TLI_DeviceInfo deviceInfo; // get device info from device
                        TLI_GetDeviceInfo(p, &deviceInfo);// get strings from device info structure
                        char desc[65];
                        strncpy_s(desc, deviceInfo.description, 64);
                        desc[64] = '\0';

                        char serialNo[9];
                        
                        strncpy_s(serialNo, deviceInfo.serialNo, 8);
                        serialNo[8] = '\0';

                        // append 
                        Out_Thor->all_serialNos.back() = serialNo;
                        Out_Thor->Desc.back() = desc;
                        // output
                        p = strtok_s(nullptr, ",", &searchContext);
                    }
                }
    }
}

string myStage::selectThor (vector<char *> serialNos, int Thor_sel){ // Selec which thor labs stage to connect to
    string serial;
    serial = *serialNos[Thor_sel];
    return serial; 
};

void myStage::getStage(myData *Data){ // set stage name
    
    Data->n_stages = 1;
    
    OutThor Out_Thor; // a struct containing serial numbers list for LTS devices that are connected

    switch (Data->stage_name){

        case 'Thor':
            Data->Port = std::get<0>(Data->ports); 
            getThorStages(&Out_Thor);// check for stage info, serials, number, etc...
            Data->serialNos = Out_Thor.all_serialNos;
            Data->serial = selectThor(Data->serialNos, Data->Thor_sel);
            Data->model = *Out_Thor.Desc[Data->Thor_sel];
            Data->n_stages = Out_Thor.n;
            Data->SsesID = 0;
            Data->err_code = 0;
            break;

        case 'Prio':
            Data->Port = std::get<1>(Data->ports);

            // check
            Data->err_code = PriorScientificSDK_Version(&Data->Dll_ver); // DLL version
            int Inits = PriorScientificSDK_Initialise(); // initialize dll api, to configure internal data structures
            Data->SsesID =  PriorScientificSDK_OpenNewSession(); // creates session/instance of stage

            char pr_serial[64];
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, "controller.serialnumber.get", pr_serial);
            Data->serial = pr_serial;
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, "controller.model.get", &Data->model);
            
            break;

        case 'Marz':
            
            Data->Port = std::get<2>(Data->ports);

            try {

                Data->SsesID = 1;
                char mz_serial[64];
                // get name, dll_version
                stageObject_M->GetDLLVersionString(&Data->Dll_ver, 5); // get dll version string
                stageObject_M->EnableCommandRetry(TRUE); // enables/disables repeated sending of commands in case of errors
                stageObject_M->GetSerialNr(mz_serial, 512); // get stage serial number
                stageObject_M->GetError(&Data->err_code); // retrives error code
                //Data->model = 'Marzhauser_stage';
                Data->serial = mz_serial;
            }
            catch (...) {
                Data->SsesID = 0;
                stageObject_M->GetError(&Data->err_code);// retrieves error code
                Data->msg = sprintf(&Data->msg, "Could NOT connect to Stage, check documentaion for error code %d", Data->err_code);
            };
            
            break;

        default:
            Data->Port = NULL;
            Data->n_stages = 0;
            Data->SsesID = -1;
    }
}

void myStage::connectStage(myData *Data){ // connects stage, returns serial, id, stage object, error, index
    //stageObject_M = new CTango();
    char buf[50];
    switch (Data->stage_name){
        case 'Thor':
            char testSerialNo[16];
            strcpy(testSerialNo, Data->serial.c_str());
            try{
                if(ISC_Open(testSerialNo) == 0){ // if we can open the specified stage
                    ISC_StartPolling(testSerialNo, 200); // start polling stage at 200 ms intervals
                    Sleep(2000); // wait 2 seconds for stage to connect

                    // reset stage to default
                    ISC_ResetStageToDefaults(testSerialNo);

                    // go home
                    goHome(Data);
                }
                //Data->msg = *testSerialNo+ ', '+Data->model+' is successfully connected';
                Data->msg = sprintf(buf, "%s, %s is successfully connected", testSerialNo, Data->model);
            }
            catch(...){
                //Data->msg = *testSerialNo+ ', '+Data->model+' Failed to connect';
                Data->msg = sprintf(buf, "%s, Failed to connect'", testSerialNo);
            }
        break;

        case 'Prio':
        int correct = 1;
        char res[64];
        char my_cmd[64],my_cmd2[64];
        sprintf(my_cmd,"controller.connect COM%d",Data->Port);
        sprintf(my_cmd2,"controller.stage.correction.enabled.set %d", correct);
        char testSerialNo[16];
        strcpy(testSerialNo, Data->serial.c_str());
            try{
                Data->err_code = PriorScientificSDK_cmd(Data->SsesID, my_cmd, res); // Connect --> return error code should be "0"
                PriorScientificSDK_cmd(Data->SsesID, "controller.stage.servo.xy.enabled.set 1", res); // enable servo

                try {
                    PriorScientificSDK_cmd(Data->SsesID, "controller.stage.encoder.xy.enabled.set 0", res); // enable Encoder
                }
                catch (...) {
                    //Data->msg = 'Encoder disable NOT applicable';
                    Data->msg = sprintf(buf,"Encoder disable NOT applicable");
                }

                PriorScientificSDK_cmd(Data->SsesID, my_cmd2,res); // set stage correction on
                //Data->msg = *testSerialNo+ ', '+Data->model+' is successfully connected';
                Data->msg = sprintf(buf, "%s, %s is successfully connected", testSerialNo, Data->model);

                // go home
                goHome(Data);
            }
            catch(...){
                //Data->msg = *testSerialNo+ ', '+Data->model+' Failed to connect';
                
                Data->msg = sprintf(buf, "%s, Failed to connect'", testSerialNo);
            }

        break;

        case 'Marz':
            try{
                char comPort;
                char str[5];
                comPort = 'COM'+ sprintf(str, "%d", Data->Port);
                int interType = 1; // interface type is always 1 for RS232, PCI and USB
                int baudRate = 57600;
                stageObject_M->ConnectSimple(interType, &comPort, baudRate, TRUE); // Connect to Tango 

                // calibrate stage
                int xflag, yflag;
                xflag = 0;
                yflag = 1;
                stageObject_M->CalibrateEx(xflag); // calibrate x axis
                stageObject_M->CalibrateEx(yflag); // calibrate y axis

                // set stage units to um
                int x_units, y_units, z_units = 1;
                stageObject_M->SetDimensions(x_units, y_units, z_units,1);
                stageObject_M->SetTVROutResolution(5,5,4,3); // set resolution to 10nm in X and Y, 0.1um in z and 1um in r axis

                // enable limit switch
                stageObject_M->SetSwitchActive(7,7,7,0);

                // go home
                goHome(Data);

                // enable joystick and handwheel
                enableJoystick(Data,1);

                // Data->msg = Data->model+' is successfully connected';
                Data->msg = sprintf(buf, "%s, %s is successfully connected", testSerialNo, Data->model);
            }
            catch(...){
                Data->msg = sprintf(buf, "%s, Failed to connect'", testSerialNo);
            }

        break;

        default:

        break;
    }
    // return {msg, err_code};
};

void myStage::goHome(myData *Data){ // move stage home
    char buf[50];
    switch(Data->stage_name){
        case 'Thor':
            char testSerialNo[16];
            strcpy(testSerialNo, Data->serial.c_str());

            ISC_ClearMessageQueue(testSerialNo);
            ISC_Home(testSerialNo);

            // wait for completion
            WORD messageType;
            WORD messageId;
            DWORD messageData;
            ISC_WaitForMessage(testSerialNo, &messageType, &messageId, &messageData);
            while(messageType != 2 || messageId != 0)
            {
                ISC_WaitForMessage(testSerialNo, &messageType, &messageId, &messageData);
            }
            Data->err_code = 0;
            //Data->msg = *testSerialNo+' Homed succefully';
            Data->msg = sprintf(buf, "%s, Homed succefully", testSerialNo);
            break;

        case 'Prio':
            char res[64];
            
            // PriorScientificSDK_cmd(SsesID, "controller.stage.fitted.get", res);
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, "controller.shuttle.goto-home", res);

            // err_code = 0;
            if (Data->err_code == 0){
                //Data->msg = 'Prior stage homed succefully';  
                Data->msg = sprintf(buf, "Prior stage Homed succefully");
            }
            break;

        case 'Marz':
            // calibrate stage move stage to [0,0] position
            int xflag, yflag;
            xflag = 0;
            yflag = 1;
            stageObject_M->CalibrateEx(xflag); // calibrate x axis
            stageObject_M->CalibrateEx(yflag); // calibrate y axis
            Data->err_code = 0;
            //Data->msg = 'Marz stage homed succefully';
            Data->msg = sprintf(buf, "Marzhauser stage Homed succefully");
            break;
    }

    // return {msg,err_code};
};

void myStage::getAllParams(myData *Data){ // get all parameters (step, position, velocity, acceleration)

    switch(Data->stage_name){
        case 'Thor':
            char testSerialNo[16];
            strcpy(testSerialNo, Data->serial.c_str());
            int vel_d, acc_d, pos_d;
            double vel_r, acc_r,pos_r;

            ISC_ClearMessageQueue(testSerialNo);

            //get velocity and acceleration
            ISC_GetVelParams(testSerialNo,&vel_d,&acc_d); // both in device units

            //get position
            pos_d = ISC_GetPosition(testSerialNo); // in device unit

            // convert from device units to real units
            ISC_GetRealValueFromDeviceUnit(testSerialNo,pos_d,&pos_r,0);
            ISC_GetRealValueFromDeviceUnit(testSerialNo,vel_d,&vel_r,1);
            ISC_GetRealValueFromDeviceUnit(testSerialNo,acc_d,&acc_r,2);
            // 
            Data->Dpos = {pos_d,NULL,NULL};
            Data->Dvel = vel_d;
            Data->Daccn = acc_d;

            Data->Rpos = {pos_r,NULL,NULL};
            Data->Rvel = vel_r;
            Data->Raccn = acc_r;

            Data->err_code = 0;
            Data->msg = 'Done';
            break;

        case 'Prio':
            // get current position (x,y in um)
            char pos[64];
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, "controller.stage.position.get", pos); // return error code should be "0"

            // find x, y values assign them to res variables
            char* chars_array = strtok(pos, ",");
            int i = 1;
            while (chars_array != NULL) {
                chars_array = strtok (NULL, ",");

                if (i == 1) {std::get<0>(Data->Rpos) = atoi(chars_array);}
                else if (i == 2) {std::get<1>(Data->Rpos) = atoi(chars_array);}

                i++;
            }

            // get current velocity (in um/s)
            char vel[64];
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, "controller.stage.speed.get", vel);

            Data->Rvel = atoi(vel);

            // get current acceleration
            char acc[64];
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, "controller.stage.acc.get", acc);

            Data->Raccn = atoi(acc);

            // device units
            Data->Dpos = {static_cast<int>(std::get<0>(Data->Rpos)),static_cast<int>(std::get<1>(Data->Rpos)),static_cast<int>(std::get<2>(Data->Rpos))};
            Data->Dvel = static_cast<int>(Data->Rvel);
            Data->Daccn = static_cast<int>(Data->Raccn);

            Data->msg = 'Done'; 
            break;

        case 'Marz':
            double posX,posY,posZ, posA;
            double velX,velY,velZ, velA;
            double accX,accY,accZ, accA;

            // get velocity and acceleration
            stageObject_M->GetVel(&velX,&velY,&velZ,&velA);
            stageObject_M->GetAccel(&accX,&accY,&accZ,&accA);

            // get position in x, y and z coordinates
            stageObject_M->GetPos(&posX,&posY,&posZ,&posA);

            Data->Rpos = {posX,posY,posZ};
            Data->Dpos = {static_cast<int>(posX),static_cast<int>(posY),static_cast<int>(posZ)};

            Data->Raccn = accX; // only one velocity and acceleration are returned
            Data->Rvel = velX;

            Data->Daccn = static_cast<int>(Data->Raccn);
            Data->Dvel = static_cast<int>(Data->Rvel);

            Data->err_code = 0;
            Data->msg = 'Done';
            break;
    };
};

void myStage::disconnectStage(myData *Data){ // disconnect stage
    char buf[50];
    switch(Data->stage_name){
        case 'Thor':
            char testSerialNo[16];
            strcpy(testSerialNo, Data->serial.c_str());

            ISC_ClearMessageQueue(testSerialNo);
            ISC_StopImmediate(testSerialNo);//stop motion
            ISC_StopPolling(testSerialNo);// stop stage polling
            ISC_Close(testSerialNo); // close stage object
            Data->err_code = 0;
            //Data->msg = *testSerialNo;+' Disconnected Successfully';
            Data->msg = sprintf(buf, "%s, Disconnected Successfully", testSerialNo);
        break;

        case 'Prio':
            char res[64];

            // stop all motion smoothly
            myStage::stopMotion(Data);

            //turn off servo and encoder
            PriorScientificSDK_cmd(Data->SsesID, "controller.stage.servo.xy.enabled.set 0", res);

            try {
                PriorScientificSDK_cmd(Data->SsesID, "controller.stage.encoder.xy.enabled.set 0", res);
            }
            catch (...) {
                //Data->msg = 'Encoder disable NOT applicable';
                Data->msg = sprintf(buf, "Encoder disable NOT applicable");
            }
            

            // enable joystick
            enableJoystick(Data, 1);

            // disconnect controller
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, "controller.disconnect", res);
            Data->err_code = PriorScientificSDK_CloseSession(Data->SsesID);

            //Data->msg = 'Prior stage Disconnected Successfully'; 
            Data->msg = sprintf(buf, "Prior stage Disconnected Successfully");
            break;

        case 'Marz':
            // stop all motion 
            stageObject_M->StopAxes();
            // enable joystic and handwheel
            enableJoystick(Data, 1);
            // disconect stage and tango from dll
            stageObject_M->Disconnect();
            // Free LSID
            // no need

            Data->err_code = 0;
            //Data->msg = 'Marzhauser stage Disconnected Successfully';
            Data->msg = sprintf(buf, "Marzhauser stage Disconnected Successfully");
            break;
    }
}

void myStage::stopMotion(myData *Data){ // suspend all stage movements
    
    char buf[50];
    switch(Data->stage_name){
        case 'Thor':
            char testSerialNo[16];
            strcpy(testSerialNo, Data->serial.c_str());
            
            ISC_ClearMessageQueue(testSerialNo);
            ISC_StopImmediate(testSerialNo);//stop motion
            Data->err_code = 0;
            //Data->msg = 'Stage stopped';
            Data->msg = sprintf(buf, "Stage Stopped Successfully");
            break;

        case 'Prio':
            char res[64];
            // stop all motion smoothly
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, "controller.stop.smoothly", res);
            //Data->msg = 'Stage stopped'; 
            Data->msg = sprintf(buf, "Stage Stopped Successfully");
            break;

        case 'Marz':

            stageObject_M->StopAxes();
            Data->err_code = 0;
            //Data->msg = 'Stage stopped';
            Data->msg = sprintf(buf, "Stage Stopped Successfully");
            break;
    }
};

void myStage::setAllParams(myData *Data){ // set all parameters (step, position, velocity, acceleration)
    
    switch(Data->stage_name){
        case 'Thor':
            int vel_d, acc_d, pos_d;
            double vel_r, acc_r, pos_r;

            char testSerialNo[16];
            strcpy(testSerialNo, Data->serial.c_str());
            
            vel_r = Data->Rvel;
            acc_r = Data->Raccn;
            pos_r = std::get<0>(Data->Rpos);

            // convert real units to device units
            ISC_GetDeviceUnitFromRealValue(testSerialNo,vel_r,&vel_d,1); // velocity
            ISC_GetDeviceUnitFromRealValue(testSerialNo,acc_r,&acc_d,2); // acceleration
            ISC_GetDeviceUnitFromRealValue(testSerialNo,pos_r,&pos_d,0); // position

            // set acceleration and velocity
            ISC_ClearMessageQueue(testSerialNo);
            ISC_SetVelParams(testSerialNo, acc_d, vel_d);

            // set new position
            ISC_MoveToPosition(testSerialNo, pos_d);

            Data->Dpos = {pos_d,NULL,NULL};
            Data->Dvel = vel_d;
            Data->Daccn = acc_d;

            Data->Rpos = {pos_r,NULL,NULL};
            Data->Rvel = vel_r;
            Data->Raccn = acc_r;

            Data->err_code = 0;
            Data->msg = 'Done'; 
            break;

        case 'Prio':
            char res[64];
            char my_cmd1[64], my_cmd2[64], my_cmd3[64];
            sprintf(my_cmd1,"controller.stage.acc.set %d",Data->Raccn);
            sprintf(my_cmd2,"controller.stage.speed.set %d",Data->Rvel);
            sprintf(my_cmd3,"controller.stage.goto-position %d %d",std::get<0>(Data->Rpos),std::get<1>(Data->Rpos));

            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, my_cmd1, res);
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, my_cmd2, res);
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, my_cmd3, res);

            Data->Dpos = Data->Rpos;
            Data->Dvel = Data->Rvel;
            Data->Daccn = Data->Raccn;

            Data->msg = 'Done'; 
            break;

        case 'Marz':
            double vel = Data->Rvel;
            double acc = Data->Raccn;
            double posX, posY,posZ,posA;

            posX = std::get<0>(Data->Rpos);
            posY = std::get<1>(Data->Rpos);
            posZ = std::get<2>(Data->Rpos);
            posA = 0;

            enableJoystick(Data,0);

            // set velocity and acceleration
            stageObject_M->SetVel(vel,vel,vel,0);
            stageObject_M->SetAccel(acc,acc,acc,0);

            // move to absolute position
            stageObject_M->SetPos(posX,posY,posZ,posA);

            // assignments
            Data->Rpos = {posX,posY,posZ};
            Data->Dpos = {static_cast<int>(posX),static_cast<int>(posY),static_cast<int>(posZ)};

            Data->Raccn = acc; // only one velocity and acceleration are returned
            Data->Rvel = vel;

            Data->Daccn = static_cast<int>(Data->Raccn);
            Data->Dvel = static_cast<int>(Data->Rvel);

            enableJoystick(Data,1);

            Data->err_code = 0;
            Data->msg = 'Done'; 
            break;
    }
}

void myStage::getStep(myData *Data){ // get stage step size
    char buf[50];
    switch(Data->stage_name){
        case 'Thor':
            char testSerialNo[16];
            strcpy(testSerialNo, Data->serial.c_str());

            int step_d;
            double step_r;
            
            ISC_ClearMessageQueue(testSerialNo);

            step_d = ISC_GetJogStepSize(testSerialNo);

            ISC_GetRealValueFromDeviceUnit(testSerialNo,step_d,&step_r,0);

            Data->step = step_r;

            Data->err_code = 0;
            Data->msg = 'Done';
            break;

        case 'Prio':
            char res[64];
            // get step size
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, "controller.stage.ss.get", res);
            Data->step = atoi(res); // OR // sscanf(res,"%d",&Data->step);
            sprintf(&Data->msg,"Step size = %d",Data->step); 
            break;

        case 'Marz':
            double step_x, step_y, step_z, step_a;
            stageObject_M->GetControllerSteps(&step_x, &step_y, &step_z,&step_a);

            Data->step = step_x;
            Data->err_code = 0;
            Data->msg = 'Done';
            break;
    }
};

void myStage::setStep(myData *Data){ // set stage step size

    switch(Data->stage_name){
        case 'Thor' :
            char testSerialNo[16];
            strcpy(testSerialNo, Data->serial.c_str());

            int step_d;
            double step_r;
            
            step_r = Data->step;

            ISC_GetDeviceUnitFromRealValue(testSerialNo,step_r,&step_d,0);
            ISC_ClearMessageQueue(testSerialNo);

            ISC_SetJogStepSize(testSerialNo,step_d);

            Data->err_code = 0;
            Data->msg = 'Done';
            break;

        case 'Prio' :
            char res[64];
            char my_cmd[64];
            sprintf(my_cmd,"controller.connect %d",Data->step);
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, my_cmd, res);

            Data->msg = 'Done';
            break;

        case 'Marz' :
            double stepp;
            stepp = Data->step; 
            stageObject_M->SetControllerSteps(stepp, stepp, stepp,0);

            Data->step = stepp;

            Data->err_code = 0;
            Data->msg = 'Done';
            break;
    }
};

void myStage::getVelParams(myData *Data){ // get velocity parameters (vel and acc)
    
    switch(Data->stage_name){
        case 'Thor':
            char testSerialNo[16];
            strcpy(testSerialNo, Data->serial.c_str());
            int vel_d, acc_d;
            double vel_r, acc_r;

            ISC_ClearMessageQueue(testSerialNo);

            //get velocity and acceleration
            ISC_GetVelParams(testSerialNo,&vel_d,&acc_d); // both in device units

            // convert from device units to real units
            ISC_GetRealValueFromDeviceUnit(testSerialNo,vel_d,&vel_r,1);
            ISC_GetRealValueFromDeviceUnit(testSerialNo,acc_d,&acc_r,2);
            
            Data->Dvel = vel_d;
            Data->Daccn = acc_d;

            Data->Rvel = vel_r;
            Data->Raccn = acc_r;

            Data->err_code = 0;
            Data->msg = 'Done';
        break;

        case 'Prio':
            // get current velocity (in um/s)
            char vel[64];
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, "controller.stage.speed.get", vel);

            Data->Rvel = atoi(vel);

            // get current acceleration
            char acc[64];
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, "controller.stage.acc.get", acc);
            Data->Raccn = atoi(acc);

            Data->Dvel = Data->Rvel;
            Data->Daccn = Data->Raccn;

            Data->msg = 'Done'; 
        break;

        case 'Marz':
            double velX,velY,velZ, velA;
            double accX,accY,accZ, accA;

            // get velocity and acceleration
            stageObject_M->GetVel(&velX,&velY,&velZ,&velA);
            stageObject_M->GetAccel(&accX,&accY,&accZ,&accA);

            Data->Raccn = accX; // only one velocity and acceleration are returned
            Data->Rvel = velX;

            Data->Daccn = static_cast<int>(Data->Raccn);
            Data->Dvel = static_cast<int>(Data->Rvel);
            Data->err_code = 0;
            Data->msg = 'Done'; 
        break;
    }
};

void myStage::setVelParams(myData *Data){ // get velocity parameters
    switch(Data->stage_name){

        case 'Thor':
            int vel_d, acc_d;
            double vel_r, acc_r;

            char testSerialNo[16];
            strcpy(testSerialNo, Data->serial.c_str());
            
            vel_r = Data->Rvel;
            acc_r = Data->Raccn;
            // convert real units to device units
            ISC_GetDeviceUnitFromRealValue(testSerialNo,vel_r,&vel_d,1); // velocity
            ISC_GetDeviceUnitFromRealValue(testSerialNo,acc_r,&acc_d,2); // acceleration

            // set acceleration and velocity
            ISC_ClearMessageQueue(testSerialNo);
            ISC_SetVelParams(testSerialNo, acc_d, vel_d);

            Data->Dvel = vel_d;
            Data->Daccn = acc_d;

            Data->Rvel = vel_r;
            Data->Raccn = acc_r;

            Data->err_code = 0;
            Data->msg = 'Done';  
        break;

        case 'Prio':
            char res[64];
            char my_cmd1[64], my_cmd2[64];
            sprintf(my_cmd1,"controller.stage.acc.set %d",Data->Raccn);
            sprintf(my_cmd2,"controller.stage.speed.set %d",Data->Rvel);

            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, my_cmd1, res);
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, my_cmd2, res);

            Data->Dvel = Data->Rvel;
            Data->Daccn = Data->Raccn;

            Data->msg = 'Done'; 
        break;

        case 'Marz':
            double vel,acc;

            vel = Data->Rvel;
            acc = Data->Raccn;

            // set velocity and acceleration
            stageObject_M->SetVel(vel,vel,vel,0);
            stageObject_M->SetAccel(acc,acc,acc,0);

            // assignments
            Data->Rvel = vel;
            Data->Raccn = acc;

            Data->Daccn = static_cast<int>(Data->Raccn);
            Data->Dvel = static_cast<int>(Data->Rvel);

            Data->err_code = 0;
            Data->msg = 'Done'; 
        break;
    }
};

void myStage::moveAbs(myData *Data){ // move stage to Absolute position
    switch(Data->stage_name){
        case 'Thor':
            char testSerialNo[16];
            strcpy(testSerialNo, Data->serial.c_str());
            int pos_d;
            double pos_r;

            pos_r = std::get<0>(Data->Rpos);

            // convert real to device units
            ISC_GetDeviceUnitFromRealValue(testSerialNo,pos_r,&pos_d,0);

            ISC_ClearMessageQueue(testSerialNo);

            // move ABS to
            ISC_MoveToPosition(testSerialNo,pos_d);

            Data->Rpos = {pos_r,NULL,NULL};
            Data->Dpos = {pos_d,NULL,NULL};

            Data->err_code = 0;
            Data->msg = 'Done'; 
        break;

        case 'Prio':
            char res[64];
            char my_cmd1[64];
            sprintf(my_cmd1,"controller.stage.goto-position %d %d",std::get<0>(Data->Rpos),std::get<1>(Data->Rpos));
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, my_cmd1, res);

            Data->Dpos = Data->Rpos;

            Data->msg = 'Done';  
        break;

        case 'Marz':
            double posX, posY,posZ,posA;

            posX = std::get<0>(Data->Rpos);
            posY = std::get<1>(Data->Rpos);
            posZ = std::get<2>(Data->Rpos);
            posA = 0;

            enableJoystick(Data,0);

            // move to absolute position
            stageObject_M->MoveAbs(posX,posY,posZ,posA,true);

            // assignments
            Data->Rpos = {posX,posY,posZ};
            Data->Dpos = {static_cast<int>(posX),static_cast<int>(posY),static_cast<int>(posZ)};

            enableJoystick(Data,1);

            Data->err_code = 0;
            Data->msg = 'Done'; 
        break;
    }
};

void myStage::getPos(myData *Data){ // get current stage position
    switch(Data->stage_name){
        case 'Thor':
            char testSerialNo[16];
            strcpy(testSerialNo, Data->serial.c_str());
            int pos_d;
            double pos_r;
            
            ISC_ClearMessageQueue(testSerialNo);

            pos_d = ISC_GetPosition(testSerialNo);

            ISC_GetRealValueFromDeviceUnit(testSerialNo,pos_d,&pos_r,0);

            Data->Rpos = {pos_r,NULL,NULL};
            Data->Dpos = {pos_d,NULL,NULL};

            Data->err_code = 0;
            Data->msg = 'Done'; 
        break;

        case 'Prio':
            // get current position (x,y in um)
            char pos[64];
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, "controller.stage.position.get", pos); // return error code should be "0"

            // find x, y values assign them to res variables
            char* chars_array = strtok(pos, ",");
            int i = 1;
            while (chars_array != NULL) {
                chars_array = strtok (NULL, ",");

                if (i == 1) {std::get<0>(Data->Rpos) = atoi(chars_array);}
                else if (i == 2) {std::get<1>(Data->Rpos) = atoi(chars_array);}

                i++;
            }

            Data->Dpos = Data->Rpos;
            Data->msg = 'Done'; 
        break;

        case 'Marz':
            double posX, posY,posZ,posA;

            // move to absolute position
            stageObject_M->GetPos(&posX,&posY,&posZ,&posA);

            // assignments
            Data->Rpos = {posX,posY,posZ};
            Data->Dpos = {static_cast<int>(posX),static_cast<int>(posY),static_cast<int>(posZ)};

            Data->err_code = 0;
            Data->msg = 'Done'; 
        break;
    }
};

void myStage::isBusy(myData *Data){ // is stage moving
    switch(Data->stage_name){
        case 'Thor':
            char testSerialNo[16];
            strcpy(testSerialNo, Data->serial.c_str());

            WORD messageType;
            WORD messageId;
            DWORD messageData;

            Data->IsBus = false;
            ISC_WaitForMessage(testSerialNo, &messageType, &messageId, &messageData);
            if(messageType != 2 || messageId != 0)
            {
                Data->IsBus = true;
            }

            Data->err_code = 0;
            Data->msg = 'Done';
        break;

        case 'Prio':
            char buzi[64];
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, "controller.stage.busy.get", buzi);
            int choice = atoi(buzi);
            if (choice==0){
                Data->IsBus = false;
            }
            else {
                Data->IsBus = true;
            };
            Data->msg = 'Done'; 
        break;

        case 'Marz':
            char status;
            string str_status;
            stageObject_M->GetStatusAxis(&status,16);

            str_status = status; 

            if (str_status.find('@')){
                Data->IsBus = false;
            }
            else{
                Data->IsBus = true;
            }

            Data->err_code = 0;
            Data->msg = status;
        break;
    }
};

void myStage::getLastError(myData *Data){ // get last error
    switch(Data->stage_name){
        case 'Thor':

            char testSerialNo[16];
            strcpy(testSerialNo, Data->serial.c_str());
            WORD messageType;
            WORD messageId;
            DWORD messageData;

            ISC_WaitForMessage(testSerialNo, &messageType, &messageId, &messageData);

            Data->err_code = 0;
            sprintf(&Data->msg, "%s -> %s",messageId, messageType); 
        break;

        case 'Prio':
            char err[64];
            Data->err_code = PriorScientificSDK_cmd(Data->SsesID, "controller.lasterror.get", err);
            Data->msg = *err; 
        break;

        case 'Marz':
            int err_code;
            stageObject_M->GetError(&err_code);
            Data->err_code = err_code;
            Data->msg = 'Done';
        break;
    }
};

void myStage::enableJoystick(myData *Data, int state){ //enable / disable joystick

    switch(Data->stage_name){
        
        case 'Prio':
            char res[64];
            if (state == 1){
                Data->err_code = PriorScientificSDK_cmd(Data->SsesID, "controller.stage.joyxyz.on", res);
            }
            else {
                Data->err_code = PriorScientificSDK_cmd(Data->SsesID, "controller.stage.joyxyz.off", res);
            };
            
            Data->msg = 'Done'; 
        break;

        case 'Marz':
            if (state == 1){
                stageObject_M->SetJoystickOn(true,true); // joystick, for moving stage in x,y direction
                stageObject_M->SetHandWheelOn(true,true); // handwheel, for moving stage in z direction
            }
            else {
                stageObject_M->SetJoystickOff();
                stageObject_M->SetHandWheelOff();
            };
            Data->err_code = 0;
            Data->msg = 'Done';
        break;
    }
};


myStage::~myStage() //class destructor
{
};

