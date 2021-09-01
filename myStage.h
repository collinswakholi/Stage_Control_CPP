# include <iostream>
# include <windows.h>
# include <tuple>
# include <list>
# include <array>
# include <vector>
# include <string>
# include <filesystem>
# include <charconv>
# include <stdlib.h>
# include <conio.h>


// Import Thorlabs dependencies
#include <Thorlabs.MotionControl.IntegratedStepperMotors.h>
#include <exception> 

// Import prior sceintific dependencies
// # include "Prior_stage/stdafx.h"
// # include "Prior_stage/PriorScientificSDK.h"

# include <stdafx.h>
# include <PriorScientificSDK.h>

// Import Marzhauser dependencies
// # include "Marzhauser_stage/Tango.h"
# include <Tango.h>

#ifndef MYSTAGE_H
#define MYSTAGE_H

using namespace std;

class myStage {  // The class
    private:
        CTango *stageObject_M;
        PriorScientificSDK *stageObject_P; // for prior

    public: /* other initializations */ // Access specifier
        char stage_name[4];
        std::tuple<int, int, int> ports{2,8,7};
        int Thor_sel = 0;
        
        // PriorScientificSDK *stageObject_P; // for prior
        // CTango *stageObject_M; // for marzhauser

        // consstructor and destructor
         myStage(); // constructor
         ~myStage(); // destructor

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

    void getThorStages(OutThor *Out_Thor);

    string selectThor (vector<char *> serialNos, int Thor_sel); // Selec which thor labs stage to connect to
     
    void getStage(myData *Data); // set stage name

    void connectStage(myData *Data); // connects stage, returns serial, id, stage object, error, index

    void goHome(myData *Data); // move stage home

    void getAllParams(myData *Data); // get all parameters (step, position, velocity, acceleration)

    void disconnectStage(myData *Data); // disconnect stage

    void setAllParams(myData *Data); // set all parameters (step, position, velocity, acceleration)
    
    void getStep(myData *Data); // get stage step size
    
    void setStep(myData *Data); // set stage step size

    void getVelParams(myData *Data); // get velocity parameters (vel and acc)

    void setVelParams(myData *Data); // get velocity parameters

    void moveAbs(myData *Data); // move stage to Absolute position

    void getPos(myData *Data); // get current stage position
    
    void stopMotion(myData *Data);

    void isBusy(myData *Data); // is stage moving

    void getLastError(myData *Data); // get last error

    void enableJoystick(myData *Data, int state); //enable / disable joystick
};

#endif