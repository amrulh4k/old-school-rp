/*

		   Copyright [2011] [Anthony_prince aka Archer]

		   Licensed under the Apache License, Version 2.0 (the "License");
		   you may not use this file except in compliance with the License.
		   You may obtain a copy of the License at

		       http://www.apache.org/licenses/LICENSE-2.0

		   Unless required by applicable law or agreed to in writing, software
		   distributed under the License is distributed on an "AS IS" BASIS,
		   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
		   See the License for the specific language governing permissions and
		   limitations under the License.

*/

//===================Includes===================================================
#include <a_samp>
#include <YSI\y_ini> // thanks to Y_Less
//===================Macros=====================================================
#define isnull(%1) ((%1[0] == 0) || (%1[0] == 1 && %1[1] == 0)) //Thanks to Slice
//===================Config=====================================================
#define PrintCount // Disable this if you dont wan't to print.
#define Path "LoadData.ini"
#define ServerName "This is my server" // This string will show when the countdown finishes
#define ServerPassword false // This will lock your server until the countdown finishes [true to enable | false to disable]
#define PasswordName "countdown"
//==================Strings=====================================================
//Please don't touch this if you're newbie
new SrvName[] = ServerName;
#if ServerPassword == true
	new SrvPass[] = PasswordName; // Put your password here
#endif
#if ServerPassword == false
	#undef PasswordName
    new SrvPass[] = " "; // Prevent the error that SrvPass is not defined
#endif
new GeneralString[32+26+24];
// I use "+" beacuse in this way i remember how many strings are here [CountDown, CountDownStop, RconPassword format]
//==================CountDown Settings==========================================
new CountDown,
	_days=1,
	_hours=0,
	_minutes=1,
	_seconds=10
; // Set the time to CountDown

//==================Callbacks===================================================
forward OpenCountDown();
//==============================================================================

public OnFilterScriptInit()
{
	print(" CountDown FilterScript Loaded" );
	if(!isnull(SrvPass) || ServerPassword == true) {
		format(GeneralString, sizeof(GeneralString), "password %s", SrvPass);
		SendRconCommand(GeneralString);
	}
	else {
	    SendRconCommand("password 0");
	}
	CountDown=SetTimer("OpenCountDown",1000,true);
	return 1;
}

public OnFilterScriptExit()
{
	print(" CountDown FilterScript UnLoaded ");
	return 1;
}

public OpenCountDown()
{
    if(fexist(Path)) INI_ParseFile(Path, "%s", .bFileFirst = true);
	_seconds--;
	switch(_seconds)
	{
		case -1:
		_seconds = 59,
		_minutes--;
	}
	switch(_minutes)
	{
	    case -1:
		_minutes = 59,
		_hours--;
	}
	switch(_hours)
	{
	    case -1:
	    _hours = 23,
		_days--;
	}
	SaveData();
	format(GeneralString, sizeof(GeneralString), "hostname Opens In %01dd:%02dh:%02dm:%02ds",_days,_hours,_minutes,_seconds);
	SendRconCommand(GeneralString);
	#if defined PrintCount
	    printf(GeneralString);
	#endif
	if(!_days&&!_hours&&!_minutes&&!_seconds) CountDownStop();
}

stock SaveData()
{
	new INI:File = INI_Open(Path);
	//INI_SetTag(File,"CountDown");
	INI_WriteInt(File, "Days", _days);
	INI_WriteInt(File, "Hours", _hours);
	INI_WriteInt(File, "Minutes", _minutes);
	INI_WriteInt(File, "Seconds", _seconds);
	INI_Close(File);
	return 1;
}

forward LoadData(name[], value[]);
public LoadData(name[],value[])
{
    INI_Int("Days", _days);
    INI_Int("Hours", _hours);
    INI_Int("Minutes", _minutes);
    INI_Int("Seconds", _seconds);
	return 1;
}

stock CountDownStop()
{
	format(GeneralString, sizeof(GeneralString), "hostname %s ", SrvName); // Here will show your Original Server Name after the count.
	SendRconCommand(GeneralString); // Send the RCON command
	SendRconCommand("password 0");  // This will open the server
	print(" Server Opened " ); // I use print instead of a string as above i prefer to have less lag.
	KillTimer(CountDown); // Stops the timer
	fremove(Path);
}
