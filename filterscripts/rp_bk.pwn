// This is a comment
// uncomment the line below if you want to write a filterscript
//#define FILTERSCRIPT

#include <a_samp>
#define COLOR_RED 0xFF0000FF
new entrance;
new ext;
new water1;
new water2;
new water3;
new water4;
new gate1;
new gate2;
new gate3;
new IsInWash[ MAX_PLAYERS ];

public OnFilterScriptInit()
{
	// gates
	ext = CreateObject(2885,2446.50000000,-1460.59997559,29.70000076,0.00000000,0.00000000,270.00000000); //gatelaatste
	entrance = CreateObject(2885,2499.50000000,-1460.00000000,29.70000076,0.00000000,0.00000000,89.99450684); //gateeerste
	gate3 = CreateObject(968,2539.89990234,-1475.59997559,24.39999962,0.00000000,270.00000000,269.99975586); //oranje3open
	gate2 = CreateObject(968,2540.10009766,-1459.30004883,24.39999962,0.00000000,90.00000000,269.99636841); //oranje2open
	gate1 = CreateObject(968,2523.39990234,-1493.50000000,23.89999962,0.00000000,270.00000000,0.00000000); //oranje1open
	// objects
	CreateObject(16003,2502.39990234,-1465.59997559,23.89999962,0.00000000,0.00000000,0.00000000); //object(drvin_ticket) (1)
	CreateObject(8843,2483.10009766,-1460.90002441,23.10000038,0.00000000,0.00000000,88.00000000); //object(arrows01_lvs) (1)
	CreateObject(8041,2540.39990234,-1467.50000000,28.79999924,0.00000000,0.00000000,0.00000000); //object(apbarriergate06_lvs) (1)
	CreateObject(7073,2516.50000000,-1474.00000000,41.29999924,0.00000000,0.00000000,0.00000000); //object(vegascowboy1) (1)
	CreateObject(18285,2517.80004883,-1461.69995117,23.10000038,0.00000000,0.00000000,10.00000000); //object(cw_trucklines) (1)
	CreateObject(966,2523.50000000,-1493.50000000,23.00000000,0.00000000,0.00000000,0.00000000); //object(bar_gatebar01) (1)
	CreateObject(8843,2520.10009766,-1484.50000000,23.00000000,0.00000000,0.00000000,0.00000000); //object(arrows01_lvs) (2)
	CreateObject(4100,2472.60009766,-1465.19995117,29.29999924,0.00000000,0.00000000,320.00000000); //object(meshfence1_lan) (1)
	CreateObject(4100,2474.39990234,-1454.59997559,29.29999924,0.00000000,0.00000000,319.99877930); //object(meshfence1_lan) (2)
	CreateObject(7311,2461.50000000,-1460.90002441,25.20000076,0.00000000,0.00000000,0.00000000); //object(vgsn_carwash) (1)
	CreateObject(972,2473.60009766,-1465.59997559,26.29999924,4.99996948,270.00000000,272.00000000); //object(tunnelentrance) (1)
	CreateObject(972,2473.10009766,-1461.69995117,26.29999924,4.99877930,270.00000000,271.99951172); //object(tunnelentrance) (2)
	CreateObject(1337,2504.89990234,-1464.59997559,23.70000076,0.00000000,0.00000000,182.00000000); //object(binnt07_la) (1)
	CreateObject(1337,2542.39990234,-1467.80004883,23.70000076,0.00000000,0.00000000,85.99951172); //object(binnt07_la) (2)
	CreateObject(1337,2542.39990234,-1467.00000000,23.70000076,0.00000000,0.00000000,85.99548340); //object(binnt07_la) (3)
	CreateObject(1676,2525.39990234,-1459.19995117,24.50000000,0.00000000,0.00000000,270.00000000); //object(washgaspump) (1)
	CreateObject(1676,2520.19995117,-1459.40002441,24.50000000,0.00000000,0.00000000,269.99951172); //object(washgaspump) (2)
	CreateObject(1676,2530.19995117,-1459.40002441,24.50000000,0.00000000,0.00000000,269.99951172); //object(washgaspump) (3)
	CreateObject(970,2537.19995117,-1467.40002441,23.60000038,0.00000000,0.00000000,0.00000000); //object(fencesmallb) (1)
	CreateObject(970,2526.89990234,-1467.40002441,23.50000000,0.00000000,0.00000000,0.00000000); //object(fencesmallb) (2)
	CreateObject(970,2533.09960938,-1467.39941406,23.50000000,0.00000000,0.00000000,0.00000000); //object(fencesmallb) (3)
	CreateObject(970,2529.50000000,-1467.39941406,23.50000000,0.00000000,0.00000000,0.00000000); //object(fencesmallb) (4)
	CreateObject(970,2518.19995117,-1465.80004883,23.50000000,0.00000000,0.00000000,308.00000000); //object(fencesmallb) (5)
	CreateObject(970,2521.50000000,-1467.39941406,23.50000000,0.00000000,0.00000000,0.00000000); //object(fencesmallb) (6)
	CreateObject(970,2516.69995117,-1463.90002441,23.50000000,0.00000000,0.00000000,307.99621582); //object(fencesmallb) (7)
	CreateObject(970,2515.30004883,-1460.19995117,23.50000000,0.00000000,0.00000000,271.99621582); //object(fencesmallb) (8)
	CreateObject(970,2515.19995117,-1456.50000000,23.50000000,0.00000000,0.00000000,271.99401855); //object(fencesmallb) (9)
	CreateObject(970,2525.00000000,-1459.30004883,23.50000000,0.00000000,0.00000000,270.00000000); //object(fencesmallb) (10)
	CreateObject(970,2519.69995117,-1459.50000000,23.50000000,0.00000000,0.00000000,269.99450684); //object(fencesmallb) (11)
	CreateObject(970,2520.79980469,-1459.50000000,23.50000000,0.00000000,0.00000000,269.99450684); //object(fencesmallb) (12)
	CreateObject(970,2529.80004883,-1459.19995117,23.50000000,0.00000000,0.00000000,269.99450684); //object(fencesmallb) (13)
	CreateObject(970,2525.89941406,-1459.39941406,23.50000000,0.00000000,0.00000000,269.99450684); //object(fencesmallb) (14)
	CreateObject(970,2530.80004883,-1459.19995117,23.50000000,0.00000000,0.00000000,269.99450684); //object(fencesmallb) (15)
	CreateObject(970,2538.39990234,-1475.50000000,23.60000038,0.00000000,0.00000000,338.00000000); //object(fencesmallb) (16)
	CreateObject(970,2530.80004883,-1472.90002441,23.50000000,0.00000000,0.00000000,349.99987793); //object(fencesmallb) (17)
	CreateObject(970,2534.69921875,-1474.00000000,23.60000038,0.00000000,0.00000000,337.99987793); //object(fencesmallb) (18)
	CreateObject(970,2526.80004883,-1472.50000000,23.50000000,0.00000000,0.00000000,359.99694824); //object(fencesmallb) (19)
	CreateObject(970,2524.69995117,-1472.50000000,23.50000000,0.00000000,0.00000000,359.99450684); //object(fencesmallb) (20)
	CreateObject(970,2522.60009766,-1474.50000000,23.50000000,0.00000000,0.00000000,89.99450684); //object(fencesmallb) (21)
	CreateObject(970,2517.30004883,-1474.19995117,23.60000038,0.00000000,0.00000000,89.99450684); //object(fencesmallb) (22)
	CreateObject(970,2515.69995117,-1470.90002441,23.60000038,0.00000000,0.00000000,141.99450684); //object(fencesmallb) (23)
	CreateObject(970,2512.80004883,-1468.59997559,23.60000038,0.00000000,0.00000000,141.99276733); //object(fencesmallb) (24)
	CreateObject(970,2509.30004883,-1466.50000000,23.60000038,0.00000000,0.00000000,155.99279785); //object(fencesmallb) (25)
	CreateObject(970,2505.30004883,-1465.69995117,23.60000038,0.00000000,0.00000000,181.98937988); //object(fencesmallb) (26)
	Create3DTextLabel("Type /washcar to wash your car!", 0x008080FF,2502.39990234,-1465.59997559,23.89999962,40.0,0);
	return true;
}
public OnFilterScriptExit()
{
	return 1;
}

public OnPlayerConnect(playerid)
{
//	SendClientMessage(playerid, COLOR_RED, "This server uses the Lux CarWash system by [drifters]niels aka niels44");
   	SetPlayerMapIcon(playerid, 18,2455.2258,-1461.0040,24.0000, 55, 0, MAPICON_LOCAL);
	return 1;
}
public OnPlayerCommandText(playerid, cmdtext[])
{
	if( !strcmp( "/washcar", cmdtext, true, 8 ) )
	{
		if( !IsPlayerInAnyVehicle( playerid ) )
  		return SendClientMessage( playerid, COLOR_RED, "ERROR: you are not in a Vehicle!" );
    	if(IsPlayerInRangeOfPoint(playerid, 10.0, 2499.50000000,-1460.00000000,29.70000076))
     	{
		    GivePlayerMoney( playerid, -40 );

		    SendClientMessage( playerid, COLOR_RED, "you have paid $40 to wash your car" );
		    SendClientMessage( playerid, COLOR_RED, "now drive in the red marker to wash your car" );
		    MoveObject( entrance, 2496.30004883,-1460.40002441,29.70000076, 1.0, 291.99462891,0.00000000,89.99450684 );
		    SetTimer( "CloseEntrance", 5000, 0 );
		    SetPlayerCheckpoint( playerid, 2455.2258, -1461.0040, 24.0000, 3.0 );
	    	return 1;
		}
		else if(!IsPlayerInRangeOfPoint(playerid, 10.0, 2499.50000000,-1460.00000000,29.70000076)) return SendClientMessage(playerid, COLOR_RED, "ERROR: you are not at a CarWash!");
	}
	return 0;
}
forward CloseEntrance();
public CloseEntrance()
{
    MoveObject( entrance, 2499.50000000, -1460.00000000, 29.70000076, 1.0, 0.00000000, 0.00000000, 89.99450684 );

    return 1;
}
public OnPlayerEnterCheckpoint(playerid)
{
	water1 = CreateObject(2780,2459.69995117,-1457.30004883,23.10000038,0.00000000,0.00000000,0.00000000); //watersmoke
	water2 = CreateObject(2780,2461.00000000,-1464.80004883,23.00000000,0.00000000,0.00000000,186.00000000); //watersmoke
	water3 = CreateObject(2780,2452.50000000,-1464.00000000,23.00000000,0.00000000,0.00000000,185.99853516); //watersmoke
	water4 = CreateObject(2780,2454.10009766,-1458.30004883,23.00000000,0.00000000,0.00000000,185.99853516); //watersmoke
	SendClientMessage(playerid, COLOR_RED, "Please Wait while we wash your car...");
	TogglePlayerControllable(playerid, 0);
	SetPlayerCameraLookAt(playerid, 2445.7043,-1460.9468,24.0000);
	SetPlayerCameraPos(playerid, 2471.6687,-1460.2609,24.0000);
	IsInWash[ playerid ] = 1;
	SetTimer("OpenExt", 7000, 0);
	return 1;
}

forward OpenExt(playerid);
public OpenExt(playerid)
{
	if(IsInWash[ playerid ] == 1)
	{
		MoveObject(ext, 2451.00000000,-1460.59997559,29.70000076, 1.0, 280.00000000,0.00000000,270.00000000);
		SetTimer("CloseExt", 13000, 0);
		SetPlayerPos(playerid, 2439.4900,-1460.9352,24.0000);
		SetPlayerFacingAngle(playerid, 267.6727);
		TogglePlayerControllable(playerid, 1);
		DisablePlayerCheckpoint(playerid);
		SetCameraBehindPlayer(playerid);
		DestroyObject(water1);
		DestroyObject(water2);
		DestroyObject(water3);
		DestroyObject(water4);
		IsInWash[ playerid ] = 0;
		new VehicleID = GetPlayerVehicleID(playerid);
		RepairVehicle(VehicleID);
		return 1;
	}
	return 1;
}
forward CloseExt(playerid);
public CloseExt(playerid)
{
	MoveObject(ext, 2446.50000000,-1460.59997559,29.70000076, 1.0, 0.00000000,0.00000000,270.00000000);
	return 1;
}


public OnPlayerUpdate(playerid)
{
	if(IsPlayerInRangeOfPoint(playerid, 10.0, 2523.39990234,-1493.50000000,23.89999962))
	{
	MoveObject(gate1, 2523.60009766,-1493.50000000,23.89999962, 1.0, 0.00000000,348.00000000,0.00000000);
	SetTimer("CloseGate1", 5000, 1);
	return 1;
	}
	if(IsPlayerInRangeOfPoint(playerid, 10.0, 2540.10009766,-1459.30004883,24.39999962))
	{
	MoveObject(gate2, 2540.10009766,-1459.09997559,24.39999962, 1.0, 0.00000000,8.00000000,269.99645996);
	SetTimer("CloseGate2", 5000, 1);
	return 1;
	}
	if(IsPlayerInRangeOfPoint(playerid, 10.0, 2539.89990234,-1475.59997559,24.39999962))
	{
	MoveObject(gate3, 2539.89990234,-1475.80004883,24.39999962, 1.0, 0.00000000,345.99987793,269.99981689);
	SetTimer("CloseGate3", 5000, 1);
	return 1;
	}
	return 1;
}
forward CloseGate3();
public CloseGate3()
{
    MoveObject(gate3, 2539.89990234,-1475.59997559,24.39999962, 1.0, 0.00000000,270.00000000,269.99975586);
    return 1;
}
forward CloseGate2();
public CloseGate2()
{
	MoveObject(gate2, 2540.10009766,-1459.30004883,24.39999962, 1.0 ,0.00000000,90.00000000,269.99636841);
	return 1;
}
forward CloseGate1();
public CloseGate1()
{
	MoveObject(gate1, 2523.39990234,-1493.50000000,23.89999962, 1.0, 0.00000000,270.00000000,0.00000000);
	return 1;
}
