//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~

#include 																																	    "a_samp"
#include 																																	     "fixes"
#include 																																	  "pawn.cmd"

//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~

main()
	print("\nScript loaded\n");

new Text:wrongcmdTD[8],
	Tajmer[MAX_PLAYERS],
	kurac[MAX_PLAYERS] = 0;

#define 																	time 																	2*3

//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~//~~

public OnGameModeInit()
{
	wrongcmdTD[0] = TextDrawCreate(192.666610, 371.191223, "box");
	TextDrawLetterSize(wrongcmdTD[0], 0.000000, 1.599999);
	TextDrawTextSize(wrongcmdTD[0], 346.000000, 0.000000);
	TextDrawAlignment(wrongcmdTD[0], 1);
	TextDrawColor(wrongcmdTD[0], -1);
	TextDrawUseBox(wrongcmdTD[0], 1);
	TextDrawBoxColor(wrongcmdTD[0], 629837136);
	TextDrawSetShadow(wrongcmdTD[0], 0);
	TextDrawSetOutline(wrongcmdTD[0], 0);
	TextDrawBackgroundColor(wrongcmdTD[0], 255);
	TextDrawFont(wrongcmdTD[0], 1);
	TextDrawSetProportional(wrongcmdTD[0], 1);
	TextDrawSetShadow(wrongcmdTD[0], 0);

	wrongcmdTD[1] = TextDrawCreate(193.110977, 370.693450, "box");
	TextDrawLetterSize(wrongcmdTD[1], 0.000000, 1.733332);
	TextDrawTextSize(wrongcmdTD[1], 136.000000, 0.000000);
	TextDrawAlignment(wrongcmdTD[1], 1);
	TextDrawColor(wrongcmdTD[1], -1);
	TextDrawUseBox(wrongcmdTD[1], 1);
	TextDrawBoxColor(wrongcmdTD[1], 153);
	TextDrawSetShadow(wrongcmdTD[1], 0);
	TextDrawSetOutline(wrongcmdTD[1], 0);
	TextDrawBackgroundColor(wrongcmdTD[1], 255);
	TextDrawFont(wrongcmdTD[1], 1);
	TextDrawSetProportional(wrongcmdTD[1], 1);
	TextDrawSetShadow(wrongcmdTD[1], 0);

	wrongcmdTD[2] = TextDrawCreate(139.777786, 370.195617, "box");
	TextDrawLetterSize(wrongcmdTD[2], 0.000000, -0.266666);
	TextDrawTextSize(wrongcmdTD[2], 346.000000, 0.000000);
	TextDrawAlignment(wrongcmdTD[2], 1);
	TextDrawColor(wrongcmdTD[2], -1);
	TextDrawUseBox(wrongcmdTD[2], 1);
	TextDrawBoxColor(wrongcmdTD[2], 255);
	TextDrawSetShadow(wrongcmdTD[2], 0);
	TextDrawSetOutline(wrongcmdTD[2], 0);
	TextDrawBackgroundColor(wrongcmdTD[2], 255);
	TextDrawFont(wrongcmdTD[2], 1);
	TextDrawSetProportional(wrongcmdTD[2], 1);
	TextDrawSetShadow(wrongcmdTD[2], 0);

	wrongcmdTD[3] = TextDrawCreate(140.666671, 390.106628, "box");
	TextDrawLetterSize(wrongcmdTD[3], 0.000000, -0.577777);
	TextDrawTextSize(wrongcmdTD[3], 346.000000, 0.000000);
	TextDrawAlignment(wrongcmdTD[3], 1);
	TextDrawColor(wrongcmdTD[3], -1);
	TextDrawUseBox(wrongcmdTD[3], 1);
	TextDrawBoxColor(wrongcmdTD[3], 255);
	TextDrawSetShadow(wrongcmdTD[3], 0);
	TextDrawSetOutline(wrongcmdTD[3], 0);
	TextDrawBackgroundColor(wrongcmdTD[3], 255);
	TextDrawFont(wrongcmdTD[3], 1);
	TextDrawSetProportional(wrongcmdTD[3], 1);
	TextDrawSetShadow(wrongcmdTD[3], 0);

	wrongcmdTD[4] = TextDrawCreate(145.111190, 364.222106, ".______.");
	TextDrawLetterSize(wrongcmdTD[4], 0.319555, 1.420799);
	TextDrawAlignment(wrongcmdTD[4], 1);
	TextDrawColor(wrongcmdTD[4], 629837311);
	TextDrawSetShadow(wrongcmdTD[4], 0);
	TextDrawSetOutline(wrongcmdTD[4], 1);
	TextDrawBackgroundColor(wrongcmdTD[4], 255);
	TextDrawFont(wrongcmdTD[4], 1);
	TextDrawSetProportional(wrongcmdTD[4], 1);
	TextDrawSetShadow(wrongcmdTD[4], 0);

	wrongcmdTD[5] = TextDrawCreate(148.666732, 368.702148, ".______.");
	TextDrawLetterSize(wrongcmdTD[5], 0.319555, 1.420799);
	TextDrawAlignment(wrongcmdTD[5], 1);
	TextDrawColor(wrongcmdTD[5], 629837311);
	TextDrawSetShadow(wrongcmdTD[5], 0);
	TextDrawSetOutline(wrongcmdTD[5], 1);
	TextDrawBackgroundColor(wrongcmdTD[5], 255);
	TextDrawFont(wrongcmdTD[5], 1);
	TextDrawSetProportional(wrongcmdTD[5], 1);
	TextDrawSetShadow(wrongcmdTD[5], 0);

	wrongcmdTD[6] = TextDrawCreate(203.777862, 374.675628, "SERVER_UNKNOWN_COMMAND");
	TextDrawLetterSize(wrongcmdTD[6], 0.179555, 0.848355);
	TextDrawAlignment(wrongcmdTD[6], 1);
	TextDrawColor(wrongcmdTD[6], 629837311);
	TextDrawSetShadow(wrongcmdTD[6], 0);
	TextDrawSetOutline(wrongcmdTD[6], 1);
	TextDrawBackgroundColor(wrongcmdTD[6], 255);
	TextDrawFont(wrongcmdTD[6], 1);
	TextDrawSetProportional(wrongcmdTD[6], 1);
	TextDrawSetShadow(wrongcmdTD[6], 0);

	wrongcmdTD[7] = TextDrawCreate(145.555633, 372.186553, ".______.");
	TextDrawLetterSize(wrongcmdTD[7], 0.319555, 1.420799);
	TextDrawAlignment(wrongcmdTD[7], 1);
	TextDrawColor(wrongcmdTD[7], 629837311);
	TextDrawSetShadow(wrongcmdTD[7], 0);
	TextDrawSetOutline(wrongcmdTD[7], 1);
	TextDrawBackgroundColor(wrongcmdTD[7], 255);
	TextDrawFont(wrongcmdTD[7], 1);
	TextDrawSetProportional(wrongcmdTD[7], 1);
	TextDrawSetShadow(wrongcmdTD[7], 0);
	return 1;
}

public OnPlayerCommandPerformed(playerid, cmd[], params[], result, flags)
{
    if(result == -1)
    {
    	if(kurac[playerid] >= 1)
    	{
    		SendClientMessage(playerid, -1, "Ne mozete ponavljati komande dok sistem td greske ne smakne");
    	}
    	else
    	{
	    	TextDrawShowForPlayer(playerid, wrongcmdTD[0]);
	    	TextDrawShowForPlayer(playerid, wrongcmdTD[1]);
	    	TextDrawShowForPlayer(playerid, wrongcmdTD[2]);
	    	TextDrawShowForPlayer(playerid, wrongcmdTD[3]);
	    	TextDrawShowForPlayer(playerid, wrongcmdTD[6]);
	    	Tajmer[playerid] = SetTimerEx("TDShow1", 500, 0, "u", playerid);    		
    	}

        return 0;
    }
    return 1;
}

forward TDShow1(playerid);
public TDShow1(playerid)
{
	if(kurac[playerid] == time)
	{
		TextDrawHideForPlayer(playerid, wrongcmdTD[0]);
		TextDrawHideForPlayer(playerid, wrongcmdTD[1]);
		TextDrawHideForPlayer(playerid, wrongcmdTD[2]);
		TextDrawHideForPlayer(playerid, wrongcmdTD[3]);
		TextDrawHideForPlayer(playerid, wrongcmdTD[4]);
		TextDrawHideForPlayer(playerid, wrongcmdTD[5]);
		TextDrawHideForPlayer(playerid, wrongcmdTD[6]);
		TextDrawHideForPlayer(playerid, wrongcmdTD[7]);
		KillTimer(Tajmer[playerid]);
		kurac[playerid] = 0;
	}
	else
	{
		KillTimer(Tajmer[playerid]);
		TextDrawHideForPlayer(playerid, wrongcmdTD[7]);
		TextDrawShowForPlayer(playerid, wrongcmdTD[4]);
		Tajmer[playerid] = SetTimerEx("TDShow2", 500, 0, "u", playerid);
		kurac[playerid]++; printf("%d a", kurac[playerid]);
	}
	return 1;
}

forward TDShow2(playerid);
public TDShow2(playerid)
{
	KillTimer(Tajmer[playerid]);
	TextDrawHideForPlayer(playerid, wrongcmdTD[4]);
	TextDrawShowForPlayer(playerid, wrongcmdTD[5]);
	Tajmer[playerid] = SetTimerEx("TDShow3", 500, 0, "u", playerid);
	kurac[playerid]++; printf("%d b", kurac[playerid]);
	return 1;
}

forward TDShow3(playerid);
public TDShow3(playerid)
{
	KillTimer(Tajmer[playerid]);
	TextDrawHideForPlayer(playerid, wrongcmdTD[5]);
	TextDrawShowForPlayer(playerid, wrongcmdTD[7]);
	Tajmer[playerid] = SetTimerEx("TDShow1", 500, 0, "u", playerid);
	kurac[playerid]++; printf("%d c", kurac[playerid]);
	return 1;
}
