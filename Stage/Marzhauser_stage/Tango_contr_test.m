% script for connecting to and controlling Marzhauser stage with desktop
% TANGO
clear; clc;

lib_name = 'Tango_DLL';

%% initializations
LSID    = int32(0); % Tango connection ID given when calling CreateLSID()
status  = int32(0); % general return value of every DLL function (0 indicates no error)
pt.cstrPtr = libpointer('cstring', blanks(64)); % general pupose cstring poiner
pt.dxPtr   = libpointer('doublePtr',0); % general purpose double pointer for axes (x,y,z,a)
pt.dyPtr   = libpointer('doublePtr',0);
pt.dzPtr   = libpointer('doublePtr',0);
pt.daPtr   = libpointer('doublePtr',0);
pt.ixPtr   = libpointer('int32Ptr',0); % general purpose integer pointer for axes (x,y,z,a)
pt.iyPtr   = libpointer('int32Ptr',0);
pt.izPtr   = libpointer('int32Ptr',0);
pt.iaPtr   = libpointer('int32Ptr',0);

pt.delay   = libpointer('int32Ptr',0);

%% load Library files
% check if library is loaded
if libisloaded(lib_name)
    calllib(lib_name,'LSX_Disconnect',LSID); % disconnect tango
    calllib(lib_name,'LSX_FreeLSID',LSID);% free obj from memory
    unloadlibrary(lib_name)
end

% load library
if ~libisloaded(lib_name)
    loadlibrary(lib_name, 'Tango_DLL.h')

    % display all available DLL functions in MATLAB Command Window
    funx = libfunctions(lib_name,'-full');
end

%% find unique ID of attached Tango controller, find DLL version
% The Tango DLL allows access up to 8 different Tango controllers
% command DLL to return unique ID for any Tango connection
% make sure to disconnect and free the given ID before leaving the App 
pt.idPtr = libpointer('int32Ptr',0);
str = "LSX_CreateLSID()  => ";
status = calllib(lib_name,'LSX_CreateLSID',pt.idPtr);
if (status > 0)
    str = str + "Error = " + status;
else
    LSID = pt.idPtr.Value;
    str = str + "ID = " + LSID;
end
disp(str)

 % get DLL version
ver = "GetDLLVersionString => ";
[status, pt.cstrPtr] = calllib(lib_name,'LSX_GetDLLVersionString',LSID,pt.cstrPtr,50);            
if (status > 0)
    ver = ver + "Error = " + status;
else
    ver = ver + pt.cstrPtr;
end
disp(ver)

%% connect to tango

% autodetect connect to the first available USB Tango
% in this case there ist no need to specify correct baud rate
% this example is using ifctyp=-1 to autodetect any USB Tango connection

% ifctyp = -1;
% port = '';% for auto port selection

ifctyp = 1;
port = 'COM6';% for manual port selection

% connect to a communication port
connect_str = "ConnectSimple(" + port + ") => ";
status = calllib(lib_name,'LSX_ConnectSimple',LSID, ifctyp, port, 57600, 0);
if (status > 0)
    connect_str = connect_str + "Error = " + status;
else
    connect_str = connect_str + "OK";
end
disp(connect_str)


% get Tango version
TV_str = "GetTangoVersion     => ";
[status, pt.cstrPtr] = calllib(lib_name,'LSX_GetTangoVersion', LSID, pt.cstrPtr,50);            
if (status > 0)
    TV_str = TV_str + "Error = " + status;
else
    TV_str = TV_str + pt.cstrPtr;
end
disp(TV_str)


% get Tango Serial Number
TS_str = "GetSerialNr         => ";
[status,pt.cstrPtr] = calllib(lib_name,'LSX_GetSerialNr',LSID,pt.cstrPtr,50);            
if (status > 0)
    TS_str = TS_str + "Error = " + status;
else
    TS_str = TS_str + pt.cstrPtr;
end
disp(TS_str)


% read Tango error (if any. zero = OK = no error)
pt.errPtr = libpointer('int32Ptr',0);
Er_str = "GetError()          => ";
status = calllib(lib_name,'LSX_GetError',LSID,pt.errPtr);
if (status > 0)
    Er_str = Er_str + " DLL Error = " + status;
else
    TangoError = pt.errPtr.Value;
    if (TangoError == 0)
        Er_str = Er_str + " no error";
    else
        Er_str = Er_str + " err = " + TangoError;
    end
end

disp(Er_str)

%% Reset software to starting conditions

% Software is reset to starting condition (reboot).

Reset_str = "Software Reset => ";
status = calllib(lib_name,'LSX_SoftwareReset',LSID);
if (status > 0)
    Reset_str = Reset_str + "Error = " + status;
else
    Reset_str = Reset_str + " Done...";
end
disp(Reset_str);

%% calibrate 
% All enabled axes will be calibrated.
% Axes are driven towards smaller position values until reaching the cal limit switch and
% then driven with reduced speed in opposite direction until limit switch is no longer active.
% If a position offset is configured, the axis continues traveling for that distance.
% Then the zero point is set.

Cal_str = "Calibration   => ";
status = calllib(lib_name,'LSX_Calibrate',LSID);
disp("Please wait...") 
if (status > 0)
    Cal_str = Cal_str + "Error = " + status;
else
    Cal_str = Cal_str + "Done";
end
disp(Cal_str) 

% get limit
% Provides soft travel range limits.
Lim_str = "Stage limit     => ";
pt.max = libpointer('doublePtr',0);
pt.min = libpointer('doublePtr',0);

[statusx, pt.Xmin, pt.Xmax] = calllib(lib_name,...
    'LSX_GetLimit',LSID, 1, pt.min, pt.max);
[statusy, pt.Ymin, pt.Ymax] = calllib(lib_name,...
    'LSX_GetLimit',LSID, 2, pt.min, pt.max);
[statusz, pt.Zmin, pt.Zmax] = calllib(lib_name,...
    'LSX_GetLimit',LSID, 3, pt.min, pt.max);
if (statusx > 0)&&(statusy > 0)&&(statusz > 0)
    Lim_str = Lim_str + "Error = " + statusx;
else
    xLim_str = Lim_str + "X = [" + pt.Xmin + " "  +pt.Xmax +"]";
    yLim_str = Lim_str + "Y = [" + pt.Ymin + " "  +pt.Ymax +"]";
    zLim_str = Lim_str + "Z = [" + pt.Zmin + " "  +pt.Zmax +"]";
    Lim_str = [xLim_str;yLim_str;zLim_str];
end
disp(Lim_str)

%% Get/Set Delay
% Retrieves time delay (wait time) until a commanded move is executed.
Delay_str = "Get Delay     => ";
[status, pt.delay] = calllib(lib_name,'LSX_GetDelay',LSID, pt.delay);
if (status > 0)
    Delay_str = Delay_str + "Error = " + status;
else
    Delay_str = Delay_str + pt.delay +"ms";
end
disp(Delay_str) 


% Sets the time for which move commands are delayed.
% Before each positioning the controller waits for this period of time delay.
Delay = 0;

Delay_str = "Set Delay     => ";
status = calllib(lib_name,'LSX_SetDelay',LSID, Delay);
if (status > 0)
    Delay_str = Delay_str + "Error = " + status;
else
    Delay_str = Delay_str + Delay +"ms";
end
disp(Delay_str)


%% Get/ Set step distance for LSX_MoveRelShort

% get previous step distance
% Retrieve distance values last used for LSX_MoveRelShort.
step_str = "Get Step     => ";
[status, pt.dxPtr, pt.dyPtr, pt.dzPtr, pt.daPtr] = calllib(lib_name,'LSX_GetDistance',LSID, pt.dxPtr, pt.dyPtr, pt.dzPtr, pt.daPtr);
if (status > 0)
    step_str = step_str + "Error = " + status;
else
    step_str = step_str + pt.dxPtr + " "  + pt.dyPtr + " "  + pt.dzPtr + " "  + pt.daPtr;
end
disp(step_str)


% Set step distance
% Sets distance parameters for command LSX_MoveRelShort.
% This enables very fast equal distance relative positioning without the need of
% communication overhead.

dx = 0;
dy = 0;
dz = 0;
step_str = "Set Step     => ";
status = calllib(lib_name,'LSX_SetDistance',LSID, dx, dy, dz, 0);
if (status > 0)
    step_str = step_str + "Error = " + status;
else
    step_str = step_str + dx + " "  + dy + " "  + dz;
end
disp(step_str) 

%% Read stage position, velocity and acceration

% read actual axes position
Pos_str = "GetPos [dim]        => ";
[status, pt.dxPtr, pt.dyPtr, pt.dzPtr, pt.daPtr] = calllib(...
    lib_name,'LSX_GetPos',LSID, pt.dxPtr, pt.dyPtr, pt.dzPtr, pt.daPtr);
if (status > 0)
    Pos_str = Pos_str + "Error = " + status;
else
    Pos_str = Pos_str + pt.dxPtr + " "  + pt.dyPtr + " "  + pt.dzPtr + " "  + pt.daPtr;
end

disp(Pos_str)

% read stage velocity 
% Retrieves velocity of all axes.
Vel_str = "Get Velocity [dim]        => ";
[status, pt.dxPtr, pt.dyPtr, pt.dzPtr, pt.daPtr] = calllib(...
    lib_name,'LSX_GetVel',LSID, pt.dxPtr, pt.dyPtr, pt.dzPtr, pt.daPtr);
if (status > 0)
    Vel_str = Vel_str + "Error = " + status;
else
    Vel_str = Vel_str + pt.dxPtr + " "  + pt.dyPtr + " "  + pt.dzPtr + " "  + pt.daPtr + " r/sec";
end

disp(Vel_str)

% read stage velocity 
% Retrieves velocity of all axes.
Acc_str = "Get Acceleration [dim]        => ";
[status, pt.dxPtr, pt.dyPtr, pt.dzPtr, pt.daPtr] = calllib(...
    lib_name,'LSX_GetAccel',LSID, pt.dxPtr, pt.dyPtr, pt.dzPtr, pt.daPtr);
if (status > 0)
    Acc_str = Acc_str + "Error = " + status;
else
    Acc_str = Acc_str + pt.dxPtr + " "  + pt.dyPtr + " "  + pt.dzPtr + " "  + pt.daPtr + " m/sec2";
end

disp(Acc_str)


%% Set stage position, velocity and acceration

% move Relative
mR_str = "MoveRel(" + LSID + ")          => ";
xx = 0;
yy = 0;
zz = 0;
status = calllib(lib_name,'LSX_MoveRel',LSID, xx, yy, zz, 0, 1);
if (status > 0)
    mR_str = mR_str + "Error = " + status;
else
    mR_str = mR_str + "OK";
end
disp(mR_str);  


% move Absolute
mA_str = "MoveAbs(" + LSID + ")          => ";
xx = 0;
yy = 0;
zz = 0;
status = calllib(lib_name,'LSX_MoveAbs',LSID, xx, yy, zz, 0, 1);
if (status > 0)
    mA_str = mA_str + "Error = " + status;
else
    mA_str = mA_str + "OK";
end
disp(mA_str);  

% Set velocity
Vel_str = "Set Velocity [dim]        => ";
vx = 0.5;
vy = 0.5;
vz = 1;
status = calllib(...
    lib_name,'LSX_SetVel',LSID, vx, vy, vz, 0);
if (status > 0)
    Vel_str = Vel_str + "Error = " + status;
else
    Vel_str = Vel_str + vx + " "  +vy + " "  + vz +  " r/sec";
end

disp(Vel_str)


% Set acceleration
Acc_str = "Set Acceleration [m/sec2]        => ";
ax = 0.2;
ay = 0.2;
az = 0.2;
status = calllib(...
    lib_name,'LSX_SetAccel',LSID, ax, ay, az, 0);
if (status > 0)
    Acc_str = Acc_str + "Error = " + status;
else
    Acc_str = Acc_str + ax + " "  +ay + " "  + az +  " m/sec2";
end

disp(Acc_str)


%% Get other stage variables

 % read axes motor current
MC_str = "GetMotorCurrent [A] => ";
[status, pt.dxPtr, pt.dyPtr, pt.dzPtr, pt.daPtr] = calllib(...
    lib_name,'LSX_GetMotorCurrent',LSID, pt.dxPtr, pt.dyPtr, pt.dzPtr, pt.daPtr);
if (status > 0)
    MC_str = MC_str + "Error=" + status;
else
    MC_str = MC_str + pt.dxPtr + " "  + pt.dyPtr + " "  + pt.dzPtr + " "  + pt.daPtr;
end
disp(MC_str);

% read axes spindle pitch
SP_str = "GetPitch [mm]       => ";
[status, pt.dxPtr, pt.dyPtr, pt.dzPtr, pt.daPtr] = calllib(...
    lib_name,'LSX_GetPitch',LSID, pt.dxPtr, pt.dyPtr, pt.dzPtr, pt.daPtr);
if (status > 0)
    SP_str = SP_str + "Error=" + status;
else
    SP_str = SP_str + pt.dxPtr + ", "  + pt.dyPtr + ", "  + pt.dzPtr + ", "  + pt.daPtr;
end
disp(SP_str);

% set axes spindle pitch 0.001 - 68 [mm]
SP_str = "SetPitch [mm]       => ";
Px = 0.1;
Py = 0.1;
Pz = 0.1;
Pa = 0.0;
status = calllib(lib_name,'LSX_SetPitch',LSID, Px, Py, Pz, Pa);
[~, pt.dxPtr, pt.dyPtr, pt.dzPtr, pt.daPtr] = calllib(...
    lib_name,'LSX_GetPitch',LSID, pt.dxPtr, pt.dyPtr, pt.dzPtr, pt.daPtr);
if (status > 0)
    SP_str = SP_str + "Error=" + status;
else
    SP_str = SP_str + pt.dxPtr + ", "  + pt.dyPtr + ", "  + pt.dzPtr + ", "  + pt.daPtr;
end
disp(SP_str);

%% Disconnect Tango
% check if any axes is active

% abort any motion
% Stops all moving axes.
Ab_str = "Abort(" + LSID + ")       => ";
status = calllib(lib_name,'LSX_StopAxes',LSID);
if (status > 0)
    Ab_str = Ab_str + "Error = " + status;
else
    Ab_str = Ab_str + "OK";
end
disp(Ab_str)

% disconnect communication
D_str = "Disconnect(" + LSID + ")       => ";
status = calllib(lib_name,'LSX_Disconnect',LSID);
if (status > 0)
    D_str = D_str + "Error = " + status;
else
    D_str = D_str + "OK";
end
disp(D_str) 


% free LSID
F_str = "FreeLSID(" + LSID + ")         => ";
status = calllib(lib_name,'LSX_FreeLSID',LSID);
if (status > 0)
    F_str = F_str + "Error = " + status;
else
    F_str = F_str + "OK";
end
disp(F_str)

clear;
clc;
