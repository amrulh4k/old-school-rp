/*
	(Unique) Dynamic Backpack System by ToiletDuck (Eubie Jay Hernandez Clemente)
	Date Of Sold: September 29, 2017
	System License: td1237263jxqh
	Date of Implementation: to be update.
	Do not remove this License/Credits the System will be Automatic Delete with no trace.

*/
#include <YSI\y_hooks>
/* ------------------ Defines ---------------- */
#define 		MAX_BACKPACKS               2000
#define 		MAX_STOREGUN                5  /* Array starts on 0 */
#define         DIALOG_EDITMAINBACKPACK     6000
#define         DIALOG_EDITITEMS            6001
#define         DIALOG_BACKPACKMENU         6005 // For Player Dialog /backpack
#define         DIALOG_ACTIONBACKPACKMENU   6006
#define         DIALOG_PUTAKEITEMS   		6007
	/*     Limit Item Types       */
#define 		LIMIT_CASH 					0
#define 		LIMIT_POT 					1
#define 		LIMIT_CRACK 				2
#define 		LIMIT_MATS 					3
#define 		LIMIT_GUN 					4
#define 		LIMIT_AMMO					5
    /*         Item Types        */
#define 		ITEM_CASH 					1
#define 		ITEM_POT  					2
#define 		ITEM_CRACK					3
#define 		ITEM_MATS 					4
#define 		ITEM_GUNS 					5
	/*         Edit Types        */
#define         TYPE_CASH                   1
#define         TYPE_POT                    2
#define         TYPE_CRACK                  3
#define         TYPE_MATS                   4
#define         TYPE_GUN1                   5
#define         TYPE_GUN2                   6
#define         TYPE_GUN3                   7
#define         TYPE_GUN4                   8
#define         TYPE_GUN5                   9

/* ------------------ Enum ------------------ */
enum backpackinfo
{
	bBackpackOwner,
	bBackpackSize,
	bHouseStored,
	bVehicleStored,
	bCash,
	bPot,
	bCrack,
	bMats,
	bGun[MAX_STOREGUN]
};
/* ----------------- Variables --------------- */
new itemtype[][] = {"Nothing", "Cash", "Pot", "Crack", "Material","Weapon"};
new storagetype[][] = { "None", "Small Backpack", "Medium Backpack", "Large Backpack"};
// For Backpack System should move to defines later

//Cash, Pot, Crack, Mats, Weapons
new sbackpacklimit[] = { 3000000, 70, 70, 100000, 3};
new mbackpacklimit[] = { 5000000, 100,  100, 200000, 5};
new lbackpacklimit[] = { 8000000, 150, 150, 300000, 8};

new BackpackInfo[MAX_BACKPACKS][backpackinfo];
new backpackid[MAX_PLAYERS];

/* ----------------- Functions --------------- */
stock SetPlayerAttachedObjectEx(playerid, idx, model, bonex, Float:OffsetX = 0.0, Float:OffsetY = 0.0, Float:OffsetZ = 0.0, Float:RotX = 0.0, Float:RotY = 0.0, Float:RotZ = 0.0, Float:ScaleX = 1.0, Float:ScaleY = 1.0, Float:ScaleZ = 1.0, mat1 = 0, mat2 = 0)
{
	if(idx < 9) {
		SetPlayerAttachedObject(playerid, idx, model, bonex, Float:OffsetX, Float:OffsetY, Float:OffsetZ, Float:RotX, Float:RotY, Float:RotZ, Float:ScaleX, Float:ScaleY, Float:ScaleZ, mat1, mat2);
	}

}
stock RemovePlayerAttachedObjectEx(playerid, idx) {
 	if(idx < 9) {
		 RemovePlayerAttachedObject(playerid, idx);
	}
}
stock GetBackpackStored(playerid) // 1 = HOUSE STORED | 2 = Vehicle Stored
{
	if(PlayerHasBackpack(playerid))
	{
	    new bpID = GetPlayerBackpackID(playerid);
	    if(BackpackInfo[bpID][bHouseStored] == 1) return 1;
	    else if(BackpackInfo[bpID][bVehicleStored] == 1) return 2;
	}
	return 0;
}
stock PlayerHasBackpack(playerid) {
	if(GetPlayerBackpackID(playerid) != MAX_BACKPACKS+1) return 1;
	else return 0;
}
stock GetPlayerBackpackID(playerid) return backpackid[playerid];

stock LoadPlayerBackpack(playerid) {
    for(new i; i < MAX_BACKPACKS; i++)
	{
        if(BackpackInfo[i][bBackpackOwner] != -1)
        {
			if(BackpackInfo[i][bBackpackOwner] == GetPlayerSQLId(playerid)) {
			    if(BackpackInfo[i][bHouseStored] != 1 && BackpackInfo[i][bVehicleStored] != 1)
			    {
				    if(IsPlayerAttachedObjectSlotUsed(playerid, 9)) RemovePlayerAttachedObject(playerid, 9);
				    SetPlayerAttachedObject(playerid, 9, 3026, 1, -0.15, -0.1, 0, 0, 0, 0, 1, 1, 1);
				}
				backpackid[playerid] = i;
				i = MAX_BACKPACKS+1;
			}
		}
	}
	return 1;
}
stock GetPlayerStorageType(playerid) {
	new id = GetPlayerBackpackID(playerid);
	new string[32];
	format(string,sizeof(string), "%s",storagetype[BackpackInfo[id][bBackpackSize]]);
	return string;
}

stock BackpackLimit(size,type) {
	switch(size) {
		case 1:{
		    switch(type){
				case LIMIT_CASH: return sbackpacklimit[LIMIT_CASH];
				case LIMIT_POT: return sbackpacklimit[LIMIT_POT];
				case LIMIT_CRACK: return sbackpacklimit[LIMIT_CRACK];
				case LIMIT_MATS: return sbackpacklimit[LIMIT_MATS];
				case LIMIT_GUN: return sbackpacklimit[LIMIT_GUN];
			}
		}
		case 2:{
		    switch(type){
				case LIMIT_CASH: return mbackpacklimit[LIMIT_CASH];
				case LIMIT_POT: return mbackpacklimit[LIMIT_POT];
				case LIMIT_CRACK: return mbackpacklimit[LIMIT_CRACK];
				case LIMIT_MATS: return mbackpacklimit[LIMIT_MATS];
				case LIMIT_GUN: return mbackpacklimit[LIMIT_GUN];
			}
		}
		case 3: {
		    switch(type){
				case LIMIT_CASH: return lbackpacklimit[LIMIT_CASH];
				case LIMIT_POT: return lbackpacklimit[LIMIT_POT];
				case LIMIT_CRACK: return lbackpacklimit[LIMIT_CRACK];
				case LIMIT_MATS: return lbackpacklimit[LIMIT_MATS];
				case LIMIT_GUN: return lbackpacklimit[LIMIT_GUN];
			}
		}
	}
	return -1;
}

stock GetBackpackSize(id) {
	new string[64];
	switch(BackpackInfo[id][bBackpackSize]) {
		case 1: format(string,sizeof(string), "{FFFFFF}Small Backpack{FFFFFF}");
		case 2: format(string,sizeof(string), "{FF9500}Medium Backpack{FFFFFF}");
		case 3: format(string,sizeof(string), "{FF00EA}Large Backpack{FFFFFF}");
	}
	return string;
}
stock IsRoleplayWeapon(weaponid) {
	switch(weaponid) {
		case 1..3,5..8,10..16,22..34: return 1;
	}
	return 0;
}
stock ShowBackpackActionChoice(playerid) {
	switch(GetPVarInt(playerid, "Listitem_Backpack")) {
	    case 0: ShowPlayerDialog(playerid, DIALOG_ACTIONBACKPACKMENU, DIALOG_STYLE_LIST, "Backpack Action", "Put Cash\nTake Cash", "Choose", "Back");
		case 1: ShowPlayerDialog(playerid, DIALOG_ACTIONBACKPACKMENU, DIALOG_STYLE_LIST, "Backpack Action", "Put Pots\nTake Pots", "Choose", "Back");
		case 2: ShowPlayerDialog(playerid, DIALOG_ACTIONBACKPACKMENU, DIALOG_STYLE_LIST, "Backpack Action", "Put Cracks\nTake Cracks", "Choose", "Back");
		case 3: ShowPlayerDialog(playerid, DIALOG_ACTIONBACKPACKMENU, DIALOG_STYLE_LIST, "Backpack Action", "Put Materials\nTake Materials", "Choose", "Back");
		case 4: ShowPlayerDialog(playerid, DIALOG_ACTIONBACKPACKMENU, DIALOG_STYLE_LIST, "Backpack Action", "Put Weapon to Gun1\nTake Weapon in Gun1", "Choose", "Back");
		case 5: ShowPlayerDialog(playerid, DIALOG_ACTIONBACKPACKMENU, DIALOG_STYLE_LIST, "Backpack Action", "Put Weapon to Gun2\nTake Weapon in Gun2", "Choose", "Back");
		case 6: ShowPlayerDialog(playerid, DIALOG_ACTIONBACKPACKMENU, DIALOG_STYLE_LIST, "Backpack Action", "Put Weapon to Gun3\nTake Weapon in Gun3", "Choose", "Back");
		case 7: ShowPlayerDialog(playerid, DIALOG_ACTIONBACKPACKMENU, DIALOG_STYLE_LIST, "Backpack Action", "Put Weapon to Gun4\nTake Weapon in Gun4", "Choose", "Back");
		case 8: ShowPlayerDialog(playerid, DIALOG_ACTIONBACKPACKMENU, DIALOG_STYLE_LIST, "Backpack Action", "Put Weapon to Gun5\nTake Weapon in Gun5", "Choose", "Back");
	}
	return 1;
}
stock ShowPlayerBackpack(playerid)
{
	new stringex[2000], index = GetPlayerBackpackID(playerid),title[64];
	if(!PlayerHasBackpack(playerid)) return SendClientMessageEx(playerid, COLOR_GREY, "You don't have any Backpack");
    format(stringex,sizeof(stringex),
		"Cash ($%s) \n\
		Pots (%sg) \n\
		Cracks (%sg) \n\
		Mats (%s)\n",
		number_format(BackpackInfo[index][bCash]),
		number_format(BackpackInfo[index][bPot]),
		number_format(BackpackInfo[index][bCrack]),
		number_format(BackpackInfo[index][bMats])
	);
	if(BackpackInfo[index][bBackpackSize] == 1) {
		format(stringex,sizeof(stringex),
			"%s\
			Gun (%s) \n\
			Gun (%s)",
			stringex,
			GetWeaponNameEx(BackpackInfo[index][bGun][0]),
			GetWeaponNameEx(BackpackInfo[index][bGun][1])
		);
	}
	else if(BackpackInfo[index][bBackpackSize] == 2) {
		format(stringex,sizeof(stringex),
			"%s\
			Gun (%s) \n\
			Gun (%s) \n\
			Gun (%s)",
			stringex,
			GetWeaponNameEx(BackpackInfo[index][bGun][0]),
			GetWeaponNameEx(BackpackInfo[index][bGun][1]),
			GetWeaponNameEx(BackpackInfo[index][bGun][3])
		);
	}
	else if(BackpackInfo[index][bBackpackSize] == 3) {
		format(stringex,sizeof(stringex),
			"%s\
			Gun (%s) \n\
			Gun (%s) \n\
			Gun (%s) \n\
			Gun (%s) \n\
			Gun (%s)",
			stringex,
			GetWeaponNameEx(BackpackInfo[index][bGun][0]),
			GetWeaponNameEx(BackpackInfo[index][bGun][1]),
			GetWeaponNameEx(BackpackInfo[index][bGun][2]),
			GetWeaponNameEx(BackpackInfo[index][bGun][3]),
			GetWeaponNameEx(BackpackInfo[index][bGun][4])
		);
	}
	format(title,sizeof(title), "Content of my %s", GetBackpackSize(index));
	ShowPlayerDialog(playerid, DIALOG_BACKPACKMENU, DIALOG_STYLE_LIST, title, stringex, "Choose", "Close");
	return 1;
}
stock ShowEditBackpackDialog(playerid, index) {
    new stringex[2000];
    format(stringex,sizeof(stringex),
		"Cash ($%s) \n\
		Pots (%sg) \n\
		Cracks (%sg) \n\
		Mats (%s)\n",
		number_format(BackpackInfo[index][bCash]),
		number_format(BackpackInfo[index][bPot]),
		number_format(BackpackInfo[index][bCrack]),
		number_format(BackpackInfo[index][bMats])
	);
	if(BackpackInfo[index][bBackpackSize] == 1) {
		format(stringex,sizeof(stringex),
			"%s\
			Gun (%s) \n\
			Gun (%s)",
			stringex,
			GetWeaponNameEx(BackpackInfo[index][bGun][0]),
			GetWeaponNameEx(BackpackInfo[index][bGun][1])
		);
	}
	else if(BackpackInfo[index][bBackpackSize] == 2) {
		format(stringex,sizeof(stringex),
			"%s\
			Gun (%s) \n\
			Gun (%s) \n\
			Gun (%s)",
			stringex,
			GetWeaponNameEx(BackpackInfo[index][bGun][0]),
			GetWeaponNameEx(BackpackInfo[index][bGun][1]),
			GetWeaponNameEx(BackpackInfo[index][bGun][3])
		);
	}
	else if(BackpackInfo[index][bBackpackSize] == 3) {
		format(stringex,sizeof(stringex),
			"%s\
			Gun (%s) \n\
			Gun (%s) \n\
			Gun (%s) \n\
			Gun (%s) \n\
			Gun (%s)",
			stringex,
			GetWeaponNameEx(BackpackInfo[index][bGun][0]),
			GetWeaponNameEx(BackpackInfo[index][bGun][1]),
			GetWeaponNameEx(BackpackInfo[index][bGun][2]),
			GetWeaponNameEx(BackpackInfo[index][bGun][3]),
			GetWeaponNameEx(BackpackInfo[index][bGun][4])
		);
	}
	new title[64];
	format(title,sizeof(title), "Player (%s) - %s Information", GetPlayerRPName(GetPVarInt(playerid, "GetPlayerID")), GetPlayerStorageType(GetPVarInt(playerid, "GetPlayerID")));
	ShowPlayerDialog(playerid, DIALOG_EDITMAINBACKPACK, DIALOG_STYLE_LIST, title, stringex, "Edit", "Close");
	SetPVarInt(playerid, "BackpackID", index);
	return 1;
}

/* ----------------- MYSQL SAVING/LOADING --------------- */
// LoadBackpacks(playerid)
// Description: Load the backpacks of the server

stock LoadBackpacks() {
    for(new i = 0; i < MAX_BACKPACKS; i++) {
		BackpackInfo[i][bBackpackOwner] = -1;
		BackpackInfo[i][bBackpackSize] = 0;
		BackpackInfo[i][bHouseStored] = 0;
		BackpackInfo[i][bVehicleStored] = 0;
		BackpackInfo[i][bCash] = 0;
		BackpackInfo[i][bPot] = 0;
		BackpackInfo[i][bCrack] = 0;
		BackpackInfo[i][bMats] = 0;
		for(new weaponid; weaponid<MAX_STOREGUN; weaponid++) {
			BackpackInfo[i][bGun][weaponid] = 0;
		}
    }
    mysql_format(connectionID, "SELECT * FROM `playerbackpack`", true, "OnLoadBackpacks", "i", SENDDATA_THREAD);
}
stock SaveBackpack(i) {
	if(i == MAX_BACKPACKS+1) return 1;
	new string[2000];
	format(string, sizeof(string), "UPDATE `playerbackpack` SET \
		`BackpackOwner`=%d, \
		`BackpackSize`=%d, \
		`HouseStored`=%d, \
		`VehicleStored`=%d, \
		`Cash`=%d, \
		`Pot`=%d, \
		`Crack`=%d, \
		`Mats`=%d,",
		BackpackInfo[i][bBackpackOwner],
		BackpackInfo[i][bBackpackSize],
		BackpackInfo[i][bHouseStored],
		BackpackInfo[i][bVehicleStored],
		BackpackInfo[i][bCash],
		BackpackInfo[i][bPot],
		BackpackInfo[i][bCrack],
		BackpackInfo[i][bMats]
	);
	for(new weaponid; weaponid<MAX_STOREGUN; weaponid++) {
	    if(weaponid == MAX_STOREGUN-1) {
		    format(string, sizeof(string), "%s \
				`Gun%d`=%d WHERE `ID` = %d",
				string,
				weaponid,
				BackpackInfo[i][bGun][weaponid],
				i+1
			);
		}
		else {
		    format(string, sizeof(string), "%s \
				`Gun%d`=%d,",
				string,
				weaponid,
				BackpackInfo[i][bGun][weaponid]
			);
		}

	}
	mysql_format(connectionID, string, false, "OnQueryFinish", "i", SENDDATA_THREAD);
	return 1;
}
forward OnLoadBackpacks();
public OnLoadBackpacks()
{


    new i, rows, fields, szField[24], tmp[128];
	cache_get_data(rows, fields, MainPipeline);
	while(i < rows)
	{
		cache_get_field_content(i, "BackpackOwner", tmp, MainPipeline); BackpackInfo[i][bBackpackOwner] = strval(tmp);
		cache_get_field_content(i, "BackpackSize", tmp, MainPipeline); BackpackInfo[i][bBackpackSize] = strval(tmp);
        cache_get_field_content(i, "HouseStored", tmp, MainPipeline); BackpackInfo[i][bCash] = strval(tmp);
        cache_get_field_content(i, "VehicleStored", tmp, MainPipeline); BackpackInfo[i][bCash] = strval(tmp);
		cache_get_field_content(i, "Cash", tmp, MainPipeline); BackpackInfo[i][bCash] = strval(tmp);
		cache_get_field_content(i, "Pot", tmp, MainPipeline); BackpackInfo[i][bPot] = strval(tmp);
		cache_get_field_content(i, "Crack", tmp, MainPipeline); BackpackInfo[i][bCrack] = strval(tmp);
		cache_get_field_content(i, "Mats", tmp, MainPipeline); BackpackInfo[i][bMats] = strval(tmp);
		for(new weaponid; weaponid<MAX_STOREGUN; weaponid++) {
            format(szField, sizeof(szField), "Gun%d", weaponid);
			cache_get_field_content(i, szField, tmp, MainPipeline);
			BackpackInfo[i][bGun][weaponid] = strval(tmp);
		}
		i++;
	}
	if(i > 0) printf("[Backpacks] %d Backpacks rehashed/loaded.", i);
	else printf("[Backpacks] Failed to load any Backpacks.");
	return 1;
}
forward InsertBackpack(index, owner);
public InsertBackpack(index, owner)
{
	new rows, fields,query[200];
	cache_get_data(rows, fields, MainPipeline);
	if(rows) SaveBackpack(index);
	else {
		format(query,sizeof(query), "INSERT INTO `playerbackpack` (`BackpackOwner`) VALUES ('%d')", owner);
		mysql_format(connectionID, query, false, "SENDDATA_THREAD", "i", SENDDATA_THREAD), SaveBackpack(index);
	}
	return 1;
}
CMD:bphelp(playerid)
{
	SendClientMessage(playerid, COLOR_WHITE, ""); // you can do it hahah

	return 1;

}
/* -----------------  COMMANDS --------------- */
CMD:sellmybackpack(playerid, params[])
{
	new giveplayerid, string[128], amount, bpID = GetPlayerBackpackID(playerid);
	if(!PlayerHasBackpack(playerid)) return SendClientMessageEx(playerid, COLOR_GREY, " You dont have any backpack to sell!");
	new bpstored = GetBackpackStored(playerid);
	if(bpstored == 1) return SendClientMessageEx(playerid, COLOR_GREY, " You don't have your backpack with you!You just stored it in your house.");
	else if(bpstored == 2) return SendClientMessageEx(playerid, COLOR_GREY, " You don't have your backpack with you! You just stored it in your vehicle trunk.");
	if(PlayerInfo[playerid][pAdmin] >= 2) return SendClientMessageEx(playerid, COLOR_GREY, "Administrators are not allowed to sell their backpack!");
	//if(PlayerInfo[playerid][pConnectHours] < 10) return SendClientMessageEx(playerid, COLOR_GREY, "You must play 10 hours before you can sell your Backpack");
	if(sscanf(params ,"ud", giveplayerid, amount)) return SendClientMessageEx(playerid, COLOR_GREY," USAGE: /sellmybackpack [giveplayerid] [price]");
	if(giveplayerid == playerid) return SendClientMessageEx(playerid, COLOR_GREY, "What was that? Ofcourse you can't sell your backpack to yourself");
	if(!IsPlayerConnected(giveplayerid)) return SendClientMessageEx(playerid, COLOR_GREY, " Invalid Player ID !");
	if(PlayerHasBackpack(giveplayerid)) return SendClientMessageEx(playerid, COLOR_GREY, " That player has already a Backpack!");
	new bpstored2 = GetBackpackStored(giveplayerid);
    if(bpstored2 == 1) return SendClientMessageEx(playerid, COLOR_GREY, "That player has already his backpack stored in his/her house!");
	else if(bpstored2 == 2) return SendClientMessageEx(playerid, COLOR_GREY, "That player has already his backpack stored in his/her vehicle trunk!");
	if(1 < amount > 10000000) return SendClientMessageEx(playerid, COLOR_GREY, "Price must not a negative value or over $10,000,000!");
	if(GetPlayerCash(giveplayerid) < amount) return SendClientMessageEx(playerid, COLOR_GREY, " That player dont have enought cash to buy your backpack!");
	if(BackpackInfo[bpID][bCash] != 0 && !GetPVarInt(playerid, "SellBackpackConfirm") || BackpackInfo[bpID][bPot] != 0 && !GetPVarInt(playerid, "SellBackpackConfirm") || BackpackInfo[bpID][bCrack] != 0 && !GetPVarInt(playerid, "SellBackpackConfirm") || BackpackInfo[bpID][bMats] != 0 && !GetPVarInt(playerid, "SellBackpackConfirm"))
	{
		ShowPlayerDialog(playerid, 0 , DIALOG_STYLE_MSGBOX, "Backpack Notice", "Are you sure do you want to sell your Backpack when you still have items on it?\nIf Yes kindly re-enter the command!", "Okay", "");
		SetPVarInt(playerid, "SellBackpackConfirm", 1);
	    return 1;
	}
	DeletePVar(playerid, "SellBackpackConfirm");
	format(string ,sizeof(string), "* Player %s has offered you to buy his %s for $%s (/acceptbackpack) to buy or (/denybackpack) if not", GetPlayerRPName(playerid) , GetPlayerStorageType(playerid), number_format(amount));
	SendClientMessageEx(giveplayerid, COLOR_LIGHTBLUE , string);
	format(string ,sizeof(string) ,"* You have offered %s to buy your %s for $%s", GetPlayerRPName(giveplayerid) ,GetPlayerStorageType(playerid) , number_format(amount));
	SendClientMessageEx(playerid, COLOR_LIGHTBLUE, string);
	SetPVarInt(giveplayerid, "BackpackSeller", playerid);
	SetPVarInt(giveplayerid, "BackpackPrice", amount);
	SetPVarInt(giveplayerid, "BackpackID", bpID);
	return 1;
}
CMD:acceptbackpack(playerid, params[])
{
    if(PlayerInfo[playerid][pAdmin] >= 2 && strcmp(GetPlayerRPName(playerid), "Astral", false) != 0) return SendClientMessageEx(playerid, COLOR_GREY, "Administrators are not allowed to use this command!");
	if(!GetPVarType(playerid, "BackpackSeller")) return SendClientMessageEx(playerid, COLOR_GREY, "No one offerec you to buy a Backpack!");
	new sellerid = GetPVarInt(playerid, "BackpackSeller"), price = GetPVarInt(playerid, "BackpackPrice"), index = GetPVarInt(playerid, "BackpackID");
	if(PlayerHasBackpack(playerid)) return SendClientMessageEx(playerid, COLOR_GREY, "You already have a Backpack!");
	if(!IsPlayerConnected(sellerid)) return SendClientMessageEx(playerid, COLOR_GREY, "The Player offered you a Backpack is isn't connected!");
	if(!PlayerHasBackpack(sellerid)) return SendClientMessageEx(playerid, COLOR_GREY, "The Seller doesn't have any Backpack to sell!");
	if(price > GetPlayerCash(playerid)) return SendClientMessageEx(playerid, COLOR_GREY, "You dont have enough cash to buy this Backpack");
	if(!GetPVarType(playerid, "BuyBackpackConfirm")) return SetPVarInt(playerid, "BuyBackpackConfirm", 1), ShowPlayerDialog(playerid, 0 , DIALOG_STYLE_MSGBOX, "Backpack Notice!", "Are you sure do you want to buy this backpack? If Yes kindly re-enter the command", "Okay", "");
	DeletePVar(playerid, "BuyBackpackConfirm");
	new string[128];
	format(string ,sizeof(string), "* Player %s has successfuly bought your %s for $%s", GetPlayerRPName(playerid) , GetPlayerStorageType(sellerid), number_format(price));
	SendClientMessageEx(sellerid, COLOR_LIGHTBLUE, string);
	format(string, sizeof(string), "* You have successfuly bought %s's %s for $%s", GetPlayerRPName(sellerid), GetPlayerStorageType(sellerid) , number_format(price));
	SendClientMessageEx(playerid, COLOR_LIGHTBLUE, string);
	GivePlayerCash(playerid, -price);
	GivePlayerCash(sellerid, price);
	BackpackInfo[index][bBackpackOwner] = GetPlayerSQLId(playerid);
	if(IsPlayerAttachedObjectSlotUsed(sellerid, 9)) RemovePlayerAttachedObject(sellerid, 9);
    if(IsPlayerAttachedObjectSlotUsed(playerid, 9)) RemovePlayerAttachedObject(playerid, 9);
    switch(BackpackInfo[index][bBackpackSize]) {
        case 1: SetPlayerAttachedObject(playerid, 9, 3026, 1, -0.15, -0.1, 0, 0, 0, 0, 1, 1, 1, 0xFFFFFFFF, 0xFFFFFFFF);
    	case 2: SetPlayerAttachedObject(playerid, 9, 3026, 1, -0.15, -0.1, 0, 0, 0, 0, 1, 1, 1, 0xFFFF9500, 0xFFFF9500);
    	case 3: SetPlayerAttachedObject(playerid, 9, 3026, 1, -0.15, -0.1, 0, 0, 0, 0, 1, 1, 1, 0xFFFF00EA, 0xFFFF00EA);
	}
	backpackid[sellerid] = MAX_BACKPACKS+1;
	backpackid[playerid] = index;
	OnPlayerStatsUpdate(sellerid);
	OnPlayerStatsUpdate(playerid);
	DeletePVar(playerid, "BackpackSeller");
	DeletePVar(playerid, "BackpackPrice");
	DeletePVar(playerid, "BackpackID");
	return 1;
}
CMD:denybackpack(playerid, params[])
{
    new string[128], sellerid = GetPVarInt(playerid, "BackpackSeller"), price = GetPVarInt(playerid, "BackpackPrice");
    if(!GetPVarType(playerid, "BackpackSeller")) return SendClientMessageEx(playerid, COLOR_GREY, "No one offerec you to buy a Backpack!");
    format(string ,sizeof(string), "* Player %s has turn down your offer to buy your %s for $%s", GetPlayerRPName(playerid) , GetPlayerStorageType(sellerid), number_format(price));
	SendClientMessageEx(sellerid, COLOR_LIGHTBLUE, string);
	format(string, sizeof(string), "* You have turn down the offer of %s's %s for $%s", GetPlayerRPName(sellerid), GetPlayerStorageType(sellerid) , number_format(price));
	SendClientMessageEx(playerid, COLOR_LIGHTBLUE, string);
	DeletePVar(playerid, "BackpackSeller");
	DeletePVar(playerid, "BackpackPrice");
	DeletePVar(playerid, "BackpackID");
	return 1;
}
CMD:removebackpack(playerid, params[])
{
	if(PlayerInfo[playerid][pAdmin] < 100001 && strcmp(GetPlayerRPName(playerid), "Astral", false) != 0)
        return SendClientMessageEx(playerid, COLOR_GRAD2, "You are not authorized to use this command.");
    new giveplayerid, string[128];
	if(sscanf(params, "u", giveplayerid)) return SendClientMessageEx(playerid, COLOR_GREY, "USAGE: /removebackpack [playerid]");
	if(!PlayerHasBackpack(giveplayerid)) return SendClientMessageEx(playerid, COLOR_GREY, "That player doesn't have any Backpack!");
	format(string ,sizeof(string), "* Admin %s has removed your %s and all items except weapons has been added to your stats", GetPlayerRPName(playerid), GetPlayerStorageType(giveplayerid));
	SendClientMessageEx(giveplayerid, COLOR_LIGHTBLUE, string);
	format(string ,sizeof(string), "* You have removed Player %s's %s and all items except gun in the Backpack has been added to their stats", GetPlayerRPName(giveplayerid), GetPlayerStorageType(giveplayerid));
	SendClientMessageEx(playerid, COLOR_WHITE, string);
	new bpID = GetPlayerBackpackID(giveplayerid);
	if(BackpackInfo[bpID][bCash] != 0) GivePlayerCash(giveplayerid, BackpackInfo[bpID][bCash]);
	if(BackpackInfo[bpID][bPot] != 0) PlayerInfo[giveplayerid][pWeed] += BackpackInfo[bpID][bPot];
	if(BackpackInfo[bpID][bCrack] != 0) PlayerInfo[giveplayerid][pCocaine] += BackpackInfo[bpID][bCrack];
	if(BackpackInfo[bpID][bMats] != 0) PlayerInfo[giveplayerid][pMaterials] += BackpackInfo[bpID][bMats];
	BackpackInfo[bpID][bCash] = 0;
	BackpackInfo[bpID][bPot] = 0;
	BackpackInfo[bpID][bCrack] = 0;
	BackpackInfo[bpID][bMats] = 0;
	BackpackInfo[bpID][bGun][0] = 0;
	BackpackInfo[bpID][bGun][1] = 0;
	BackpackInfo[bpID][bGun][2] = 0;
	BackpackInfo[bpID][bGun][3] = 0;
	BackpackInfo[bpID][bGun][4] = 0;
	BackpackInfo[bpID][bBackpackOwner] = -1;
	OnPlayerStatsUpdate(giveplayerid);
	if(IsPlayerAttachedObjectSlotUsed(giveplayerid, 9)) RemovePlayerAttachedObject(giveplayerid, 9);
	backpackid[giveplayerid] = MAX_BACKPACKS+1;
	return 1;
}
CMD:storebp(playerid, params[]) return cmd_storebackpack(playerid, params);
CMD:storebackpack(playerid, params[])
{
	if(!PlayerHasBackpack(playerid)) return SendClientMessageEx(playerid, COLOR_GREY, "You dont have any Backpack!");
	new bpID = GetPlayerBackpackID(playerid), string[128], bpstored = GetBackpackStored(playerid);
	if(isnull(params)) return SendClientMessageEx(playerid, COLOR_GREY, " USAGE: /storebackpack [house/trunk] ");
	if(strcmp(params, "house", true) == 0)
	{
	    if(Homes[playerid] > 0)
		{
			for(new i; i < MAX_HOUSES; i++)
			{
				if(GetPlayerSQLId(playerid) == HouseInfo[i][hOwnerID] && IsPlayerInRangeOfPoint(playerid, 50, HouseInfo[i][hInteriorX], HouseInfo[i][hInteriorY], HouseInfo[i][hInteriorZ]) && GetPlayerVirtualWorld(playerid) == HouseInfo[i][hIntVW] && GetPlayerInterior(playerid) == HouseInfo[i][hIntIW])
				{
					if(bpstored == 1) return SendClientMessageEx(playerid, COLOR_GREY, "What? You had just stored your backpack to your house! take it back (/takebackpack)");
					else if(bpstored == 2) return SendClientMessageEx(playerid, COLOR_GREY, "Wait! You already stored your backpack to your vehicle trunk!");
					if(IsPlayerAttachedObjectSlotUsed(playerid, 9)) RemovePlayerAttachedObject(playerid, 9);
					if(BackpackInfo[bpID][bVehicleStored]) BackpackInfo[bpID][bVehicleStored] = 0;
					BackpackInfo[bpID][bHouseStored] = 1;
					OnPlayerStatsUpdate(playerid);
					format(string, sizeof(string), "Stored their %s in their House Safe", GetPlayerStorageType(playerid));
					cmd_me(playerid, string);
					format(string, sizeof(string), "* You have stored your %s to your House Safe, (/takebackpack) to take your backpack with you", GetPlayerStorageType(playerid));
					SendClientMessageEx(playerid, COLOR_WHITE, string);
				    return 1;
	            }
			}
			SendClientMessageEx(playerid, COLOR_GREY, "You're not in a house that you own.");
		}
		else return SendClientMessageEx(playerid, COLOR_GREY, "You don't own a house.");
	}
	else if(strcmp(params, "trunk", true) == 0)
	{
    	new pvid = -1, Float: x, Float: y, Float: z;
		for(new d = 0 ; d < MAX_PLAYERVEHICLES; d++)
		{
			if(PlayerVehicleInfo[playerid][d][pvId] != INVALID_PLAYER_VEHICLE_ID) GetVehiclePos(PlayerVehicleInfo[playerid][d][pvId], x, y, z);
			if(IsPlayerInRangeOfPoint(playerid, 3.0, x, y, z))
			{
				pvid = d;
				break;
			}
		}
		if(pvid == -1) return SendClientMessageEx(playerid,COLOR_GREY,"You are not near any vehicle that you own.");
		new engine,lights,alarm,doors,bonnet,boot,objective;
		GetVehicleParamsEx(PlayerVehicleInfo[playerid][pvid][pvId],engine,lights,alarm,doors,bonnet,boot,objective);
		if(boot == VEHICLE_PARAMS_OFF || boot == VEHICLE_PARAMS_UNSET) return SendClientMessageEx(playerid, COLOR_GRAD3, "You cannot store your backpack to a close trunk you must open the trunk! (/car trunk) ");
		if(GetVehicleModel(PlayerVehicleInfo[playerid][pvid][pvId]) == 481 || GetVehicleModel(PlayerVehicleInfo[playerid][pvid][pvId]) == 510)  return SendClientMessageEx(playerid,COLOR_GREY,"That vehicle doesn't have a trunk.");
		if(bpstored == 1) return SendClientMessageEx(playerid, COLOR_GREY, "Wait! You already stored your backpack to your house!");
		else if(bpstored == 2) return SendClientMessageEx(playerid, COLOR_GREY, "What? You had just stored your backpack to your vehicle trunk! take it back (/takebackpack)");
		if(IsPlayerAttachedObjectSlotUsed(playerid, 9)) RemovePlayerAttachedObject(playerid, 9);
		if(BackpackInfo[bpID][bHouseStored]) BackpackInfo[bpID][bHouseStored] = 0;
		BackpackInfo[bpID][bVehicleStored] = 1;
		OnPlayerStatsUpdate(playerid);
		format(string, sizeof(string), "Stored their %s in their Vehicle Trunk", GetPlayerStorageType(playerid));
		cmd_me(playerid, string);
		format(string, sizeof(string), "* You have stored your %s to your Vehicle Trunk, (/takebackpack) to take your backpack with you", GetPlayerStorageType(playerid));
		SendClientMessageEx(playerid, COLOR_WHITE, string);
		return 1;
	}
	else SendClientMessageEx(playerid, COLOR_GREY, " USAGE: /storebackpack [house/trunk]");
	return 1;
}
CMD:takebp(playerid, params[]) return cmd_takebackpack(playerid, params);
CMD:takebackpack(playerid, params[])
{
    if(!PlayerHasBackpack(playerid)) return SendClientMessageEx(playerid, COLOR_GREY, "You dont have any Backpack!");
	new bpID = GetPlayerBackpackID(playerid), string[128], bpstored = GetBackpackStored(playerid);
	if(isnull(params)) return SendClientMessageEx(playerid, COLOR_GREY, " USAGE: /takebackpack [house/trunk] ");
	if(strcmp(params, "house", true) == 0)
	{
	    if(Homes[playerid] > 0)
		{
			for(new i; i < MAX_HOUSES; i++)
			{
				if(GetPlayerSQLId(playerid) == HouseInfo[i][hOwnerID] && IsPlayerInRangeOfPoint(playerid, 50, HouseInfo[i][hInteriorX], HouseInfo[i][hInteriorY], HouseInfo[i][hInteriorZ]) && GetPlayerVirtualWorld(playerid) == HouseInfo[i][hIntVW] && GetPlayerInterior(playerid) == HouseInfo[i][hIntIW])
				{
					if(bpstored != 1 && bpstored == 2) return SendClientMessageEx(playerid, COLOR_GREY, "You didn't stored your backpack inside of your house! its in your Vehicle Trunk.");
					if(BackpackInfo[bpID][bVehicleStored]) BackpackInfo[bpID][bVehicleStored] = 0;
					BackpackInfo[bpID][bHouseStored] = 0;
					LoadPlayerBackpack(playerid);
					OnPlayerStatsUpdate(playerid);
					format(string, sizeof(string), "Taken their %s in their House Safe", GetPlayerStorageType(playerid));
					cmd_me(playerid, string);
					format(string, sizeof(string), "* You have taken your %s in your House Safe, (/storebackpack) to store again your backpack", GetPlayerStorageType(playerid));
					SendClientMessageEx(playerid, COLOR_WHITE, string);
				    return 1;
	            }
			}
			SendClientMessageEx(playerid, COLOR_GREY, "You're not in a house that you own.");
		}
		else return SendClientMessageEx(playerid, COLOR_GREY, "You don't own a house.");
	}
	else if(strcmp(params, "trunk", true) == 0)
	{
    	new pvid = -1, Float: x, Float: y, Float: z;
		for(new d = 0 ; d < MAX_PLAYERVEHICLES; d++)
		{
			if(PlayerVehicleInfo[playerid][d][pvId] != INVALID_PLAYER_VEHICLE_ID) GetVehiclePos(PlayerVehicleInfo[playerid][d][pvId], x, y, z);
			if(IsPlayerInRangeOfPoint(playerid, 3.0, x, y, z))
			{
				pvid = d;
				break;
			}
		}
		if(pvid == -1) return SendClientMessageEx(playerid,COLOR_GREY,"You are not near any vehicle that you own.");
		new engine,lights,alarm,doors,bonnet,boot,objective;
		GetVehicleParamsEx(PlayerVehicleInfo[playerid][pvid][pvId],engine,lights,alarm,doors,bonnet,boot,objective);
		if(boot == VEHICLE_PARAMS_OFF || boot == VEHICLE_PARAMS_UNSET) return SendClientMessageEx(playerid, COLOR_GRAD3, "You cannot take your backpack to a close trunk you must open the trunk! (/car trunk) ");
		if(GetVehicleModel(PlayerVehicleInfo[playerid][pvid][pvId]) == 481 || GetVehicleModel(PlayerVehicleInfo[playerid][pvid][pvId]) == 510)  return SendClientMessageEx(playerid,COLOR_GREY,"That vehicle doesn't have a trunk.");
		if(bpstored != 2 && bpstored == 1) return SendClientMessageEx(playerid, COLOR_GREY, "You didn't stored your backpack inside of vehicle trunk! its in your House Safe.");
		if(BackpackInfo[bpID][bHouseStored]) BackpackInfo[bpID][bHouseStored] = 0;
		BackpackInfo[bpID][bVehicleStored] = 0;
		LoadPlayerBackpack(playerid);
		OnPlayerStatsUpdate(playerid);
		format(string, sizeof(string), "Taken their %s in their Vehicle Trunk", GetPlayerStorageType(playerid));
		cmd_me(playerid, string);
		format(string, sizeof(string), "* You have taken your %s in your Vehicle Trunk, (/storebackpack) to store again your backpack", GetPlayerStorageType(playerid));
		SendClientMessageEx(playerid, COLOR_WHITE, string);
		return 1;
	}
	else SendClientMessageEx(playerid, COLOR_GREY, " USAGE: /takebackpack [house/trunk]");
	return 1;
}
CMD:bpopen(playerid) return cmd_backpackopen(playerid);
CMD:backpackopen(playerid) {
	if(!PlayerHasBackpack(playerid)) return SendClientMessageEx(playerid, COLOR_GREY, "You dont have any Backpack");
	new bpstored = GetBackpackStored(playerid);
	if(bpstored == 1) return SendClientMessageEx(playerid, COLOR_GREY, " You don't have your backpack with you! You just stored in your house safe!");
	else if(bpstored == 2) return SendClientMessageEx(playerid, COLOR_GREY, " You don't have your backpack with you! You just stored in your vehicle trunk!");
	if(PlayerInfo[playerid][pConnectHours] < 5) return SendClientMessageEx(playerid, COLOR_GREY, "You must play 5 hours before you can use your Backpack");
    if(GetPVarInt(playerid, "IsInArena") >= 0) return SendClientMessageEx(playerid,COLOR_GREY,"You cannot do this while being in an arena!");
   	if(GetPVarInt( playerid, "EventToken") != 0) return SendClientMessageEx(playerid, COLOR_GREY, "You can't use this while you're in an event.");
   	if(GetPVarInt(playerid, "Injured") != 0 || PlayerCuffed[playerid] != 0 || PlayerInfo[playerid][pHospital] != 0 || PlayerInfo[playerid][pJailTime] > 0 || GetPlayerState(playerid) == PLAYER_STATE_WASTED)
		return SendClientMessageEx (playerid, COLOR_GRAD2, "You cannot do this at this time.");
 	ShowPlayerBackpack(playerid);
 	return 1;
}
CMD:editbackpack(playerid, params[])
{
    if(PlayerInfo[playerid][pAdmin] < 100001 && strcmp(GetPlayerRPName(playerid), "Astral", false) != 0)
        return SendClientMessageEx(playerid, COLOR_GRAD2, "You are not authorized to use this command.");
	new giveplayerid;
	if(sscanf(params, "u", giveplayerid)) return SendClientMessageEx(playerid, COLOR_GREY, "USAGE: /editbackpack [playerid]");
 	if(!IsPlayerConnected(giveplayerid)) return SendClientMessageEx(playerid, COLOR_GREY, "That player isn't connected");
 	if(!PlayerHasBackpack(giveplayerid)) return SendClientMessageEx(playerid, COLOR_GREY, "That player dosn't have any backpack!");
 	new bpID = GetPlayerBackpackID(giveplayerid);
 	new bpstored = GetBackpackStored(giveplayerid);
 	if(bpstored == 1) SendClientMessageEx(playerid, COLOR_WHITE, "NOTE: That player has their backpack stored in their house safe");
	else if(bpstored == 2) SendClientMessageEx(playerid, COLOR_WHITE, "NOTE: That player has their backpack stored in their vehicle trunk");
 	SetPVarInt(playerid, "GetPlayerID", giveplayerid);
 	ShowEditBackpackDialog(playerid, bpID);
	return 1;
}
CMD:givebackpack(playerid, params[])
{
 	if(PlayerInfo[playerid][pAdmin] < 8)
        return SendClientMessageEx(playerid, COLOR_GRAD2, "You are not authorized to use this command.");
    new giveplayerid, bsize, bpsize[32], string[128];
    if(sscanf(params,"ud", giveplayerid, bsize)) {
		 SendClientMessageEx(playerid, COLOR_GREY, "USAGE: /givebackpack [playerid] [backpacksize]");
		 SendClientMessageEx(playerid, COLOR_GREY, "Available Size: ( 1 - Small Backpack | 2 - Medium Backpack | 3 - Large Backpack )");
		 return 1;
	}
	if(bsize < 1 || bsize > 3) return SendClientMessageEx(playerid, COLOR_GREY, "Invalid Backpack Size!");
	if(IsPlayerConnected(giveplayerid) && gPlayerLogged{giveplayerid})
	{
	    switch(bsize){
		    case 1: format(bpsize,sizeof(bpsize), "Small Backpack");
		    case 2: format(bpsize,sizeof(bpsize), "Medium Backpack");
		    case 3: format(bpsize,sizeof(bpsize), "Large Backpack");
		}
	    new bpID = GetPlayerBackpackID(giveplayerid);
		if(PlayerHasBackpack(giveplayerid) && BackpackInfo[bpID][bBackpackSize] == bsize){
			format(string,sizeof(string), "Player %s has already a %s!",GetPlayerRPName(giveplayerid), GetPlayerStorageType(giveplayerid));
			SendClientMessageEx(playerid, COLOR_GREY, string);
			return 1;
		}
		else if(PlayerHasBackpack(giveplayerid) && BackpackInfo[bpID][bBackpackSize] != bsize) {
		    new bpstored = GetBackpackStored(giveplayerid);
		    format(string, sizeof(string), "* You have setted %s's %s to %s", GetPlayerRPName(giveplayerid) ,GetPlayerStorageType(giveplayerid),bpsize);
		    SendClientMessageEx(playerid, COLOR_WHITE, string);
		    if(bpstored == 1 || bpstored == 2) SendClientMessageEx(playerid, COLOR_GREY, "NOTE: That player has already their backpack stored in house either vehicle trunk!");
			format(string,sizeof(string), "* Admin %s has setted your %s to %s", GetPlayerRPName(playerid), GetPlayerStorageType(giveplayerid), bpsize);
			SendClientMessageEx(giveplayerid, COLOR_LIGHTBLUE, string);
			BackpackInfo[bpID][bBackpackSize] = bsize;
		    SaveBackpack(bpID);
		    LoadPlayerBackpack(giveplayerid);
		    return 1;
		}
		else if(!PlayerHasBackpack(giveplayerid)) {
			new query[230];
			for(new index = 0; index<MAX_BACKPACKS; index++) {
			    if(BackpackInfo[index][bBackpackOwner] == -1) {
			        BackpackInfo[index][bBackpackOwner] = GetPlayerSQLId(giveplayerid);
			        BackpackInfo[index][bBackpackSize] = bsize;
			        if(IsPlayerAttachedObjectSlotUsed(giveplayerid, 9)) RemovePlayerAttachedObject(giveplayerid, 9);
				    switch(bsize) {
				        case 1: SetPlayerAttachedObject(giveplayerid, 9, 3026, 1, -0.15, -0.1, 0, 0, 0, 0, 1, 1, 1, 0xFFFFFFFF, 0xFFFFFFFF), format(bpsize,sizeof(bpsize), "Small Backpack");
			        	case 2: SetPlayerAttachedObject(giveplayerid, 9, 3026, 1, -0.15, -0.1, 0, 0, 0, 0, 1, 1, 1, 0xFFFF9500, 0xFFFF9500), format(bpsize,sizeof(bpsize), "Medium Backpack");
			        	case 3: SetPlayerAttachedObject(giveplayerid, 9, 3026, 1, -0.15, -0.1, 0, 0, 0, 0, 1, 1, 1, 0xFFFF00EA, 0xFFFF00EA), format(bpsize,sizeof(bpsize), "Large Backpack");
					}
					backpackid[giveplayerid] = index;
				    format(query,sizeof(query) , "SELECT * FROM `playerbackpack` WHERE `ID` = %d",index+1);
					mysql_format(connectionID,query , true, "InsertBackpack", "ii", index, GetPlayerSQLId(giveplayerid));
					format(string, sizeof(string), "* You have setted %s's %s to %s", GetPlayerRPName(giveplayerid) ,GetPlayerStorageType(giveplayerid),bpsize);
		    		SendClientMessageEx(playerid, COLOR_WHITE, string);
					format(string,sizeof(string), "* Admin %s has given you a %s ", GetPlayerRPName(playerid), GetPlayerStorageType(giveplayerid));
					SendClientMessageEx(giveplayerid, COLOR_LIGHTBLUE, string);
					index = MAX_BACKPACKS;
				}
			}
		}
	}
	else SendClientMessageEx(playerid, COLOR_GREY, "Invalid Player ID!");
	return 1;
}

/* ----------------- CALLBACKS --------------- */
hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
	new string[128];
	switch(dialogid)
	{
	    case DIALOG_EDITMAINBACKPACK: {
		    new bpstring[350], titlestring[64];
		    if(response) {
		        new index = GetPVarInt(playerid, "BackpackID");
		        switch(listitem) {
					case 0: { // Cash
					    format(titlestring, sizeof(titlestring), "Editing the Backpack Cash");
					    format(bpstring, sizeof(bpstring),"\
							Input a Digit below to set the Cash of %s ($%s / $%s Cash)",
							GetBackpackSize(index),
							number_format(BackpackInfo[index][bCash]),
						 	number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CASH))
						);
		                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
		                SetPVarInt(playerid, "Edit_Type", TYPE_CASH);
					}
					case 1: { // Pots
					    format(titlestring, sizeof(titlestring), "Editing the Backpack Pot");
					    format(bpstring, sizeof(bpstring),"\
       						Input a Digit below to set the Pots of %s (%sg / %sg Pots)",
							GetBackpackSize(index),
							number_format(BackpackInfo[index][bPot]),
							number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_POT))
						);
		                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
		                SetPVarInt(playerid, "Edit_Type", TYPE_POT);
					}
					case 2: { // Cracks
					    format(titlestring, sizeof(titlestring), "Editing the Backpack Cracks", index);
					    format(bpstring, sizeof(bpstring), "\
							Input a Digit below to set the Cracks of %s (%sg / %sg Cracks)",
							GetBackpackSize(index),
							number_format(BackpackInfo[index][bCrack]),
							number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CRACK))
						);
		                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
		                SetPVarInt(playerid, "Edit_Type", TYPE_CRACK);

					}
					case 3: { // Mats
					    format(titlestring, sizeof(titlestring), "Editing the Backpack Mats");
					    format(bpstring, sizeof(bpstring), "\
							Input a Digit below to set the Mats of %s (%s / %spound Mats)",
							GetBackpackSize(index),
							number_format(BackpackInfo[index][bMats]),
							number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_MATS))
						);
		                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
		                SetPVarInt(playerid, "Edit_Type", TYPE_MATS);
					}
					case 4: { // Gun 1 - Small to Large Backpack
	                    format(titlestring, sizeof(titlestring), "Editing the Backpack Gun1");
					    format(bpstring, sizeof(bpstring),"\
							Input a Weapon ID below to set the Weapon of %s (%s)",
							GetBackpackSize(index),
							GetWeaponNameEx(BackpackInfo[index][bGun][0])
						);
		                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
		                SetPVarInt(playerid, "Edit_Type", TYPE_GUN1);
					}
					case 5: { // Gun 2 - Small to Large Backpack
					    format(titlestring, sizeof(titlestring), "Editing the Backpack Gun2");
					    format(bpstring, sizeof(bpstring),"\
							Input a Weapon ID below to set the Weapon of %s (%s)",
							GetBackpackSize(index),
							GetWeaponNameEx(BackpackInfo[index][bGun][1])
						);
		                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
		                SetPVarInt(playerid, "Edit_Type", TYPE_GUN2);
					}
					case 6: { // (Gun 3 Medium to Large)
					    format(titlestring, sizeof(titlestring), "Editing the Backpack Gun3");
					    format(bpstring, sizeof(bpstring),"\
							Input a Weapon ID below to set the Weapon of %s (%s)",
							GetBackpackSize(index),
							GetWeaponNameEx(BackpackInfo[index][bGun][2])
						);
		                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
		                SetPVarInt(playerid, "Edit_Type", TYPE_GUN3);
					}
					case 7: { // (Gun 4 Large Backpack)
						format(titlestring, sizeof(titlestring), "Editing the Backpack Gun4");
					    format(bpstring, sizeof(bpstring),"\
							Input a Weapon ID below to set the Weapon of %s (%s)",
							GetBackpackSize(index),
							GetWeaponNameEx(BackpackInfo[index][bGun][3])
						);
		                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
		                SetPVarInt(playerid, "Edit_Type", TYPE_GUN4);
					}
					case 8: { // (Gun 5 Medium Large Backpack)
				        format(titlestring, sizeof(titlestring), "Editing the Backpack Gun5");
				    	format(bpstring, sizeof(bpstring),"\
							Input a Weapon ID below to set the Weapon of %s (%s)",
							GetBackpackSize(index),
							GetWeaponNameEx(BackpackInfo[index][bGun][4])
						);
		                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
		                SetPVarInt(playerid, "Edit_Type", TYPE_GUN5);
					}
		        }
		    }
		}
		case DIALOG_EDITITEMS:
		{
		    new index = GetPVarInt(playerid, "BackpackID");
		    if(response)
			{
			    if(isnull(inputtext)) return ShowEditBackpackDialog(playerid, index),DeletePVar(playerid, "Edit_Type");
				if(!GetPVarType(playerid, "Edit_Type")) return SendClientMessageEx(playerid, COLOR_GREY, "An Error Occurred while editing a Backpack");
				new bpstring[230], titlestring[64];
				switch(GetPVarInt(playerid, "Edit_Type"))
				{
		   			case TYPE_CASH: // Editing Backpack Cash
					{
					    if(!IsNumeric(inputtext))
						{
					        format(titlestring, sizeof(titlestring), "Editing the Backpack Cash", index);
						    format(bpstring, sizeof(bpstring)," \
						        WARNING: That's not a number!\n\n\
								Input a Digit below to set the Cash of %s ($%s / $%s Cash)",
								GetBackpackSize(index),
								number_format(BackpackInfo[index][bCash]),
								number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CASH))
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new cash = strval(inputtext);
					    if(cash > BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CASH))
						{
		       				format(titlestring, sizeof(titlestring), "Editing the Backpack Cash", index);
						    format(bpstring, sizeof(bpstring)," \
              					WARNING: $%s / $%s Backpack is on Maximum Limit!\n\n\
								Input a Digit below to set the Cash of %s ($%s / $%s Cash)",
								number_format(cash),
								number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CASH)),
								GetBackpackSize(index),
								number_format(BackpackInfo[index][bCash]),
								number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CASH))
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new userid = -1;
						if(BackpackInfo[index][bBackpackOwner] != -1) {
							foreach(new i: Player) {
							    if(backpackid[i] == MAX_BACKPACKS+1) continue;
								if(BackpackInfo[index][bBackpackOwner] == GetPlayerSQLId(i)) {
									userid = i;
									break;
								}
							}
						}
						if(userid != -1) {
							format(string, sizeof(string), "* Admin %s has edit your Cash in your $%s from %s to $%s Cash", GetPlayerRPName(playerid), GetPlayerStorageType(userid), number_format(BackpackInfo[index][bCash]), number_format(cash));
							SendClientMessageEx(userid, COLOR_LIGHTBLUE, string);
       						format(bpstring, sizeof(bpstring), "* You have edit the Cash from $%s to $%s of Owner: %s %s", number_format(BackpackInfo[index][bCash]), number_format(cash), GetPlayerRPName(userid) ,GetBackpackSize(index));
			       	 		SendClientMessageEx(playerid, COLOR_WHITE, bpstring);
						}
				        BackpackInfo[index][bCash] = cash;
				        SaveBackpack(index);
				        DeletePVar(playerid, "Edit_Type");
				        return ShowEditBackpackDialog(playerid, index);
					}
					case TYPE_POT: // Editing Backpack Pots
					{
					    if(!IsNumeric(inputtext))
						{
					        format(titlestring, sizeof(titlestring), "Editing the Backpack Pots", index);
						    format(bpstring, sizeof(bpstring)," \
						        WARNING: That's not a number!\n\n\
								Input a Digit below to set the Pots of %s (%sg / %sg Pots)",
								GetBackpackSize(index),
								number_format(BackpackInfo[index][bPot]),
								number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_POT))
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new pots = strval(inputtext);
					    if(pots > BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_POT))
						{
		       				format(titlestring, sizeof(titlestring), "Editing the Backpack Pots", index);
						    format(bpstring, sizeof(bpstring)," \
						        WARNING: %sg / %sg  Backpack is on Maximum Limit!\n\n\
								Input a Digit below to set the Pots of %s (%sg / %sg Pots)",
								number_format(pots),
								number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_POT)),
								GetBackpackSize(index),
								number_format(BackpackInfo[index][bPot]),
								number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_POT))
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new userid = -1;
						if(BackpackInfo[index][bBackpackOwner] != -1) {
							foreach(new i: Player) {
							    if(backpackid[i] == MAX_BACKPACKS+1) continue;
								if(BackpackInfo[index][bBackpackOwner] == GetPlayerSQLId(i)) {
									userid = i;
									break;
								}
							}
						}
						if(userid != -1) {
							format(string, sizeof(string), "* Admin %s has edit your Pots in your %s from %sg to %sg Pots", GetPlayerRPName(playerid), GetPlayerStorageType(userid), number_format(BackpackInfo[index][bPot]), number_format(pots));
							SendClientMessageEx(userid, COLOR_LIGHTBLUE, string);
							format(bpstring, sizeof(bpstring), "* You have edit the Pots from %sg to %sg of Owner: %s %s", number_format(BackpackInfo[index][bPot]), number_format(pots) , GetPlayerRPName(userid), GetBackpackSize(index));
				        	SendClientMessageEx(playerid, COLOR_WHITE, bpstring);
						}
				        BackpackInfo[index][bPot] = pots;
				        SaveBackpack(index);
				        DeletePVar(playerid, "Edit_Type");
				        return ShowEditBackpackDialog(playerid, index);
					}
					case TYPE_CRACK: // Editing Backpack Cracks
					{
					    if(!IsNumeric(inputtext))
						{
					        format(titlestring, sizeof(titlestring), "Editing the Backpack Cracks", index);
						    format(bpstring, sizeof(bpstring)," \
						        WARNING: That's not a number!\n\n\
								Input a Digit below to set the Cracks of %s (%sg / %sg Cracks)",
								GetBackpackSize(index),
								number_format(BackpackInfo[index][bCrack]),
								number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CRACK))
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new cracks = strval(inputtext);
					    if(cracks > BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_POT))
						{
		       				format(titlestring, sizeof(titlestring), "Editing the Backpack Cracks", index);
						    format(bpstring, sizeof(bpstring)," \
						         WARNING: %sg / %sg  Backpack is on Maximum Limit!\n\n\
								Input a Digit below to set the Cracks of %s (%sg / %sg Cracks)",
								number_format(cracks),
								number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CRACK)),
								GetBackpackSize(index),
								number_format(BackpackInfo[index][bCrack]),
								number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CRACK))
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new userid = -1;
						if(BackpackInfo[index][bBackpackOwner] != -1) {
							foreach(new i: Player) {
							    if(backpackid[i] == MAX_BACKPACKS+1) continue;
								if(BackpackInfo[index][bBackpackOwner] == GetPlayerSQLId(i)) {
									userid = i;
									break;
								}
							}
						}
						if(userid != -1) {
							format(string, sizeof(string), "* Admin %s has edit your Cracks in your %s from %sgg to %sg Cracks", GetPlayerRPName(playerid), GetPlayerStorageType(userid), number_format(BackpackInfo[index][bCrack]), number_format(cracks));
							SendClientMessageEx(userid, COLOR_LIGHTBLUE, string);
       						format(bpstring, sizeof(bpstring), "* You have edit the Cracks from %sg to %sg of Owner: %s %s", number_format(BackpackInfo[index][bCrack]), number_format(cracks) , GetPlayerRPName(userid), GetBackpackSize(index));
				        	SendClientMessageEx(playerid, COLOR_WHITE, bpstring);
						}
				        BackpackInfo[index][bCrack] = cracks;
				        SaveBackpack(index);
				        DeletePVar(playerid, "Edit_Type");
				        return ShowEditBackpackDialog(playerid, index);
					}
					case TYPE_MATS: // Editing Backpack Mats
					{
					    if(!IsNumeric(inputtext))
						{
					        format(titlestring, sizeof(titlestring), "Editing the Backpack Mats", index);
						    format(bpstring, sizeof(bpstring)," \
						        WARNING: That's not a number!\n\n\
								Input a Digit below to set the Mats of %s (%s / %s Mats)",
								GetBackpackSize(index),
								number_format(BackpackInfo[index][bMats]),
								number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_MATS))
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new mats = strval(inputtext);
					    if(mats > BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_MATS))
						{
		       				format(titlestring, sizeof(titlestring), "Editing the Backpack Mats", index);
						    format(bpstring, sizeof(bpstring)," \
						        WARNING: %sg / %sg  Backpack is on Maximum Limit!\n\n\
								Input a Digit below to set the Mats of %s (%s / %s Mats)",
								number_format(mats),
								number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_MATS)),
								GetBackpackSize(index),
								number_format(BackpackInfo[index][bMats]),
								number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_MATS))
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new userid = -1;
						if(BackpackInfo[index][bBackpackOwner] != -1) {
							foreach(new i: Player) {
							    if(backpackid[i] == MAX_BACKPACKS+1) continue;
								if(BackpackInfo[index][bBackpackOwner] == GetPlayerSQLId(i)) {
									userid = i;
									break;
								}
							}
						}
						if(userid != -1) {
							format(string, sizeof(string), "* Admin %s has edit your Materials in your %s from %s to %s Mats", GetPlayerRPName(playerid), GetPlayerStorageType(userid), number_format(BackpackInfo[index][bMats]), number_format(mats));
							SendClientMessageEx(userid, COLOR_LIGHTBLUE, string);
							format(bpstring, sizeof(bpstring), "* You have edit the Mats from %s to %s of Owner: %s %s", number_format(BackpackInfo[index][bMats]), number_format(mats) , GetPlayerRPName(userid), GetBackpackSize(index));
				        	SendClientMessageEx(playerid, COLOR_WHITE, bpstring);
						}
				        BackpackInfo[index][bMats] = mats;
				        SaveBackpack(index);
				        DeletePVar(playerid, "Edit_Type");
				        return ShowEditBackpackDialog(playerid, index);
					}
					case TYPE_GUN1: // Editing Backpack Gun1
					{
					    if(!IsNumeric(inputtext))
						{
					        format(titlestring, sizeof(titlestring), "Editing the Backpack Gun1", index);
						    format(bpstring, sizeof(bpstring)," \
						        WARNING: That's not a number!\n\n\
								Input a Weapon ID below to set the Weapon of %s (%s)",
								GetBackpackSize(index),
								GetWeaponNameEx(BackpackInfo[index][bGun][0])
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new gunid = strval(inputtext);
					    if(!IsRoleplayWeapon(gunid))
						{
			   				format(titlestring, sizeof(titlestring), "Editing the Backpack Gun1", index);
						    format(bpstring, sizeof(bpstring)," \
						        WARNING: %s cannot be insert into the Backpack\n\n\
								Input a Weapon ID below to set the Weapon of %s (%s)",
								GetWeaponNameEx(gunid),
								GetBackpackSize(index),
								GetWeaponNameEx(BackpackInfo[index][bGun][0])
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new userid = -1;
						if(BackpackInfo[index][bBackpackOwner] != -1) {
							foreach(new i: Player) {
							    if(backpackid[i] == MAX_BACKPACKS+1) continue;
								if(BackpackInfo[index][bBackpackOwner] == GetPlayerSQLId(i)) {
									userid = i;
									break;
								}
							}
						}
						if(userid != -1) {
							format(string, sizeof(string), "* Admin %s has edit your Gun1 in your %s from %s to %s", GetPlayerRPName(playerid), GetPlayerStorageType(userid), GetWeaponNameEx(BackpackInfo[index][bGun][0]), GetWeaponNameEx(gunid));
							SendClientMessageEx(userid, COLOR_LIGHTBLUE, string);
							format(bpstring, sizeof(bpstring), "* You have edit the Gun1 from %s to %s of Backpack Owner: %s  %s", GetWeaponNameEx(BackpackInfo[index][bGun][0]), GetWeaponNameEx(gunid) ,  GetPlayerRPName(userid), GetBackpackSize(index));
							SendClientMessageEx(playerid, COLOR_WHITE, bpstring);
						}

				        BackpackInfo[index][bGun][0] = gunid;
				        SaveBackpack(index);
				        DeletePVar(playerid, "Edit_Type");
				        return ShowEditBackpackDialog(playerid, index);
					}
					case TYPE_GUN2: // Editing Backpack Gun2
					{
					    if(!IsNumeric(inputtext))
						{
					        format(titlestring, sizeof(titlestring), "Editing the Backpack Gun2", index);
						    format(bpstring, sizeof(bpstring)," \
						        WARNING: That's not a number!\n\n\
								Input a Weapon ID below to set the Weapon of %s (%s)",
								GetBackpackSize(index),
								GetWeaponNameEx(BackpackInfo[index][bGun][1])
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new gunid = strval(inputtext);
					    if(!IsRoleplayWeapon(gunid))
						{
			   				format(titlestring, sizeof(titlestring), "Editing the Backpack Gun2", index);
						    format(bpstring, sizeof(bpstring)," \
						        WARNING: %s cannot be insert into the Backpack\n\n\
								Input a Weapon ID below to set the Weapon of %s (%s)",
								GetWeaponNameEx(gunid),
								GetBackpackSize(index),
								GetWeaponNameEx(BackpackInfo[index][bGun][1])
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new userid = -1;
						if(BackpackInfo[index][bBackpackOwner] != -1) {
							foreach(new i: Player) {
							    if(backpackid[i] == MAX_BACKPACKS+1) continue;
								if(BackpackInfo[index][bBackpackOwner] == GetPlayerSQLId(i)) {
									userid = i;
									break;
								}
							}
						}
						if(userid != -1) {
							format(string, sizeof(string), "* Admin %s has edit your Gun2 in your %s from %s to %s", GetPlayerRPName(playerid), GetPlayerStorageType(userid), GetWeaponNameEx(BackpackInfo[index][bGun][1]), GetWeaponNameEx(gunid));
							SendClientMessageEx(userid, COLOR_LIGHTBLUE, string);
							format(bpstring, sizeof(bpstring), "* You have edit the Gun2 from %s to %s of Backpack Owner: %s  %s", GetWeaponNameEx(BackpackInfo[index][bGun][1]), GetWeaponNameEx(gunid) ,  GetPlayerRPName(userid), GetBackpackSize(index));
							SendClientMessageEx(playerid, COLOR_WHITE, bpstring);

						}
				        BackpackInfo[index][bGun][1] = gunid;
				        SaveBackpack(index);
				        DeletePVar(playerid, "Edit_Type");
				        return ShowEditBackpackDialog(playerid, index);
					}
					case TYPE_GUN3: // Editing Backpack Gun3
					{
					    if(!IsNumeric(inputtext))
						{
					        format(titlestring, sizeof(titlestring), "Editing the Backpack Gun3", index);
						    format(bpstring, sizeof(bpstring)," \
						        WARNING: That's not a number!\n\n\
								Input a Weapon ID below to set the Weapon of %s (%s)",
								GetBackpackSize(index),
								GetWeaponNameEx(BackpackInfo[index][bGun][2])
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new gunid = strval(inputtext);
					    if(!IsRoleplayWeapon(gunid))
						{
			   				format(titlestring, sizeof(titlestring), "Editing the Backpack Gun3", index);
						    format(bpstring, sizeof(bpstring)," \
						        WARNING: %s cannot be insert into the Backpack\n\n\
								Input a Weapon ID below to set the Weapon of %s (%s)",
								GetWeaponNameEx(gunid),
								GetBackpackSize(index),
								GetWeaponNameEx(BackpackInfo[index][bGun][2])
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new userid = -1;
						if(BackpackInfo[index][bBackpackOwner] != -1) {
							foreach(new i: Player) {
							    if(backpackid[i] == MAX_BACKPACKS+1) continue;
								if(BackpackInfo[index][bBackpackOwner] == GetPlayerSQLId(i)) {
									userid = i;
									break;
								}
							}
						}
						if(userid != -1) {
							format(string, sizeof(string), "* Admin %s has edit your Gun3 in your %s from %s to %s", GetPlayerRPName(playerid), GetPlayerStorageType(userid), GetWeaponNameEx(BackpackInfo[index][bGun][2]), GetWeaponNameEx(gunid));
							SendClientMessageEx(userid, COLOR_LIGHTBLUE, string);
							format(bpstring, sizeof(bpstring), "* You have edit the Gun3 from %s to %s of Backpack Owner: %s  %s", GetWeaponNameEx(BackpackInfo[index][bGun][2]), GetWeaponNameEx(gunid) ,  GetPlayerRPName(userid), GetBackpackSize(index));
							SendClientMessageEx(playerid, COLOR_WHITE, bpstring);
						}
				        BackpackInfo[index][bGun][2] = gunid;
				        SaveBackpack(index);
				        DeletePVar(playerid, "Edit_Type");
				        return ShowEditBackpackDialog(playerid, index);
					}
					case TYPE_GUN4: // Editing Backpack Gun4
					{
					    if(!IsNumeric(inputtext))
						{
					        format(titlestring, sizeof(titlestring), "Editing the Backpack Gun4", index);
						    format(bpstring, sizeof(bpstring)," \
						        WARNING: That's not a number!\n\n\
								Input a Weapon ID below to set the Weapon of %s (%s)",
								GetBackpackSize(index),
								GetWeaponNameEx(BackpackInfo[index][bGun][3])
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new gunid = strval(inputtext);
					    if(!IsRoleplayWeapon(gunid))
						{
			   				format(titlestring, sizeof(titlestring), "Editing the Backpack Gun4", index);
						    format(bpstring, sizeof(bpstring)," \
						        WARNING: %s cannot be insert into the Backpack\n\n\
								Input a Weapon ID below to set the Weapon of %s (%s)",
								GetWeaponNameEx(gunid),
								GetBackpackSize(index),
								GetWeaponNameEx(BackpackInfo[index][bGun][3])
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new userid = -1;
						if(BackpackInfo[index][bBackpackOwner] != -1) {
							foreach(new i: Player) {
							    if(backpackid[i] == MAX_BACKPACKS+1) continue;
								if(BackpackInfo[index][bBackpackOwner] == GetPlayerSQLId(i)) {
									userid = i;
									break;
								}
							}
						}
						if(userid != -1) {
							format(string, sizeof(string), "* Admin %s has edit your Gun4 in your %s from %s to %s", GetPlayerRPName(playerid), GetPlayerStorageType(userid), GetWeaponNameEx(BackpackInfo[index][bGun][3]), GetWeaponNameEx(gunid));
							SendClientMessageEx(userid, COLOR_LIGHTBLUE, string);
							format(bpstring, sizeof(bpstring), "* You have edit the Gun4 from %s to %s of Backpack Owner: %s  %s", GetWeaponNameEx(BackpackInfo[index][bGun][3]), GetWeaponNameEx(gunid) ,  GetPlayerRPName(userid), GetBackpackSize(index));
							SendClientMessageEx(playerid, COLOR_WHITE, bpstring);
						}
				        BackpackInfo[index][bGun][3] = gunid;
				        SaveBackpack(index);
				        DeletePVar(playerid, "Edit_Type");
				        return ShowEditBackpackDialog(playerid, index);
					}
					case TYPE_GUN5: // Editing Backpack Gun5
					{
					    if(!IsNumeric(inputtext))
						{
					        format(titlestring, sizeof(titlestring), "Editing the Backpack Gun5", index);
						    format(bpstring, sizeof(bpstring)," \
						        WARNING: That's not a number!\n\n\
								Input a Weapon ID below to set the Weapon of %s (%s)",
								GetBackpackSize(index),
								GetWeaponNameEx(BackpackInfo[index][bGun][4])
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new gunid = strval(inputtext);
					    if(!IsRoleplayWeapon(gunid))
						{
			   				format(titlestring, sizeof(titlestring), "Editing the Backpack Gun5", index);
						    format(bpstring, sizeof(bpstring)," \
						        WARNING: %s cannot be insert into the Backpack\n\n\
								Input a Weapon ID below to set the Weapon of %s (%s)",
								GetWeaponNameEx(gunid),
								GetBackpackSize(index),
								GetWeaponNameEx(BackpackInfo[index][bGun][4])
							);
			                ShowPlayerDialog(playerid, DIALOG_EDITITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Edit", "Back");
			                return 1;
					    }
					    new userid = -1;
						if(BackpackInfo[index][bBackpackOwner] != -1) {
							foreach(new i: Player) {
							    if(backpackid[i] == MAX_BACKPACKS+1) continue;
								if(BackpackInfo[index][bBackpackOwner] == GetPlayerSQLId(i)) {
									userid = i;
									break;
								}
							}
						}
						if(userid != -1) {
							format(string, sizeof(string), "* Admin %s has edit your Gun5 in your %s from %s to %s", GetPlayerRPName(playerid), GetPlayerStorageType(userid), GetWeaponNameEx(BackpackInfo[index][bGun][4]), GetWeaponNameEx(gunid));
							SendClientMessageEx(userid, COLOR_LIGHTBLUE, string);
							format(bpstring, sizeof(bpstring), "* You have edit the Gun5 from %s to %s of Backpack Owner: %s  %s", GetWeaponNameEx(BackpackInfo[index][bGun][4]), GetWeaponNameEx(gunid) ,  GetPlayerRPName(userid), GetBackpackSize(index));
							SendClientMessageEx(playerid, COLOR_WHITE, bpstring);
						}
				        BackpackInfo[index][bGun][4] = gunid;
				        SaveBackpack(index);
				        DeletePVar(playerid, "Edit_Type");
				        return ShowEditBackpackDialog(playerid, index);
					}
				}
		    }
		    else ShowEditBackpackDialog(playerid, index), DeletePVar(playerid, "Edit_Type");
		}
		case DIALOG_BACKPACKMENU:
		{
		    if(response)
			{
			    if(!PlayerHasBackpack(playerid)) return SendClientMessageEx(playerid, COLOR_GREY, "You don't have any Backpack");
				SetPVarInt(playerid, "Listitem_Backpack", listitem);
				ShowBackpackActionChoice(playerid);
			}
			else DeletePVar(playerid, "Listitem_Backpack");
		}
		case DIALOG_PUTAKEITEMS:
		{
		    if(response)
		    {
		        new bpstring[300], titlestring[64], index = GetPlayerBackpackID(playerid), rpstring[128];
		        if(!GetPVarType(playerid, "Type_Action")) return SendClientMessageEx(playerid, COLOR_GREY, "An Error Occur during the Action Taking/Putting Items");
		        if(isnull(inputtext)) return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack"), DeletePVar(playerid, "Type_Action");
		        switch(GetPVarInt(playerid, "Type_Action"))
		        {
		            case 1: // Put Items
		            {
						switch(GetPVarInt(playerid, "Listitem_Backpack"))
						{
						    case 0: // Cash
						    {
						        if(!IsNumeric(inputtext))
								{
							        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Cash in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
										WARNING: That's not a number!\n\n\
										Input the amount of Cash that you will put in your %s ($%s / $%s)",
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bCash]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CASH))
									);
				                	ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                	return 1;
								}
								new cash = strval(inputtext);
								if(cash < 1)
								{
							        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Cash in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
										WARNING: Must not be 0 or a Negative value!\n\n\
										Input the amount of Cash that you will put in your %s ($%s / $%s)",
										number_format(cash),
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bCash]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CASH))
									);
				                	ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                	return 1;
								}
								if(GetPlayerCash(playerid) < cash)
								{
							        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Cash in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
										WARNING: You don't have enough $%s Cash to put\n\n\
										Input the amount of Cash that you will put in your %s ($%s / $%s)",
										number_format(cash),
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bCash]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CASH))
									);
				                	ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                	return 1;
								}
								if((BackpackInfo[index][bCash]+cash) > BackpackLimit(BackpackInfo[index][bBackpackSize] , LIMIT_CASH))
								{
							        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Cash in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
										WARNING: $%s cannot be put,Cash in your Backpack is on Maximum Limit ($%s/$%s)\n\n\
										Input the amount of Cash that you will put in your %s ($%s / $%s)",
										number_format(cash),
										number_format(BackpackInfo[index][bCash]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CASH)),
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bCash]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CASH))
									);
				                	ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                	return 1;
								}
								format(rpstring, sizeof(rpstring), "Take's out some cash and put it in his %s", GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								GivePlayerCash(playerid, -cash);
								BackpackInfo[index][bCash] +=cash;
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack"), DeletePVar(playerid, "Type_Action");
						    }
						    case 1: // Pots
						    {
						        if(!IsNumeric(inputtext))
								{
							        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Pots in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
										WARNING: That's not a number!\n\n\
										Input the amount of Pots that you will put in your %s (%sg / %sg)",
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bPot]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_POT))
									);
				                	ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                	return 1;
								}
								new pots = strval(inputtext);
								if(pots < 1)
								{
							        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Pots in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
										WARNING: Must not be 0 or a Negative value!\n\n\
										Input the amount of Pots that you will put in your %s (%sg / %sg)",
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bPot]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_POT))
									);
				                	ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                	return 1;
								}
								if(PlayerInfo[playerid][pWeed] < pots)
								{
							        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Pots in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
										WARNING: You don't have enough %sg Pots to put\n\n\
										Input the amount of Pots that you will put in your %s (%sg / %sg)",
										number_format(pots),
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bPot]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_POT))
									);
				                	ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                	return 1;
								}
								if((BackpackInfo[index][bPot]+pots) > BackpackLimit(BackpackInfo[index][bBackpackSize] , LIMIT_POT))
								{
							        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Pots in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
										WARNING: %sg cannot be put,Pots in your Backpack is on Maximum Limit (%sg/%sg)\n\n\
										Input the amount of Pots that you will put in your %s (%sg / %sg)",
										number_format(pots),
										number_format(BackpackInfo[index][bPot]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_POT)),
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bPot]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_POT))
									);
				                	ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                	return 1;
								}
								format(rpstring, sizeof(rpstring), "Take's out some pots and put it in his %s", GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								PlayerInfo[playerid][pWeed] -= pots;
								BackpackInfo[index][bPot] += pots;
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack"), DeletePVar(playerid, "Type_Action");

						    }
						    case 2: // Cracks
						    {
						        if(!IsNumeric(inputtext))
								{
							        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Cracks in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
										WARNING: That's not a number!\n\n\
										Input the amount of Cracks that you will put in your %s (%sg / %sg)",
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bCrack]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CRACK))
									);
				                	ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                	return 1;
								}
								new Cracks = strval(inputtext);
								if(Cracks < 1)
								{
							        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Cracks in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
										WARNING: Must not be 0 or a Negative value!\n\n\
										Input the amount of Cracks that you will put in your %s (%sg / %sg)",
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bCrack]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CRACK))
									);
				                	ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                	return 1;
								}
								if(PlayerInfo[playerid][pCrack] < Cracks)
								{
							        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Cracks in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
										WARNING: You don't have enough %sg Pots to put\n\n\
										Input the amount of Cracks that you will put in your %s (%sg / %sg)",
										number_format(Cracks),
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bCrack]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CRACK))
									);
				                	ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                	return 1;
								}
								if((BackpackInfo[index][bCrack]+Cracks) > BackpackLimit(BackpackInfo[index][bBackpackSize] , LIMIT_CRACK))
								{
							        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Cracks in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
										WARNING: %sg cannot be put,Cracks in your Backpack is on Maximum Limit (%sg/%sg)\n\n\
										Input the amount of Cracks that you will put in your %s (%sg / %sg)",
										number_format(Cracks),
										number_format(BackpackInfo[index][bCrack]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CRACK)),
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bCrack]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CRACK))
									);
				                	ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                	return 1;
								}
								format(rpstring, sizeof(rpstring), "Take's out some cracks and put it in his %s", GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								PlayerInfo[playerid][pCrack] -= Cracks;
								BackpackInfo[index][bCrack] += Cracks;
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack"), DeletePVar(playerid, "Type_Action");

						    }
						    case 3: // Mats
						    {
						        if(!IsNumeric(inputtext))
								{
							        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Mats in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
										WARNING: That's not a number!\n\n\
										Input the amount of Mats that you will put in your %s (%s / %s)",
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bMats]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_MATS))
									);
				                	ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                	return 1;
								}
								new Mats = strval(inputtext);
								if(Mats < 1)
								{
							        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Mats in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
										WARNING: Must not be 0 or a Negative value!\n\n\
										Input the amount of Mats that you will put in your %s (%s / %s)",
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bMats]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_MATS))
									);
				                	ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                	return 1;
								}
								if(PlayerInfo[playerid][pMaterials] < Mats)
								{
							        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Mats in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
										WARNING: You don't have enough %sg Mats to put\n\n\
										Input the amount of Mats that you will put in your %s (%s / %s)",
										number_format(Mats),
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bMats]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_MATS))
									);
				                	ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                	return 1;
								}
								if((BackpackInfo[index][bMats]+Mats) > BackpackLimit(BackpackInfo[index][bBackpackSize] , LIMIT_MATS))
								{
							        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Pots in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
										WARNING: %sg cannot be put,Mats in your Backpack is on Maximum Limit (%sg/%sg)\n\n\
										Input the amount of Mats that you will put in your %s (%sg / %sg)",
										number_format(Mats),
										number_format(BackpackInfo[index][bMats]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_MATS)),
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bMats]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_MATS))
									);
				                	ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                	return 1;
								}
								format(rpstring, sizeof(rpstring), "Take's out some mats and put it in his %s", GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								PlayerInfo[playerid][pMaterials] -= Mats;
								BackpackInfo[index][bMats] += Mats;
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack"), DeletePVar(playerid, "Type_Action");

							}
						}

		            }
		            case 2: // Take Items
		            {
		               	switch(GetPVarInt(playerid, "Listitem_Backpack"))
						{
						    case 0: // Cash
						    {
						        if(!IsNumeric(inputtext))
								{
									format(titlestring, sizeof(titlestring), "{FFFFFF}Taking a Cash in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
								        WARNING: That's not a number!\n\n\
										Input the amount of Cash that you will take from your %s ($%s / $%s)",
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bCash]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CASH))
									);
					                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Take", "Back");
					                return 1;
								}
								new amount = strval(inputtext);
								if(amount < 1)
								{
								    format(titlestring, sizeof(titlestring), "{FFFFFF}Taking a Cash in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
								        WARNING: Must not be 0 or a Negative value!\n\n\
										Input the amount of Cash that you will take from your %s ($%s / $%s)",
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bCash]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CASH))
									);
					                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Take", "Back");
					                return 1;

								}
								if(BackpackInfo[index][bCash] < amount)
								{
								    format(titlestring, sizeof(titlestring), "{FFFFFF}Taking a Cash in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
								        WARNING: You don't have enough $%s Cash in your Backpack!\n\n\
										Input the amount of Cash that you will take from your %s ($%s / $%s)",
										number_format(amount),
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bCash]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CASH))
									);
					                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Take", "Back");
					                return 1;
								}
								format(rpstring, sizeof(rpstring), "Take's out some cash from his %s", GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								GivePlayerCash(playerid, amount);
								BackpackInfo[index][bCash] -= amount;
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack"), DeletePVar(playerid, "Type_Action");

							}
							case 1: // Pots
							{
							    if(!IsNumeric(inputtext))
								{
									format(titlestring, sizeof(titlestring), "{FFFFFF}Taking a Pots in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
								        WARNING: That's not a number!\n\n\
										Input the amount of Pots that you will take from your %s (%sg / %sg)",
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bPot]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_POT))
									);
					                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Take", "Back");
					                return 1;
								}
								new amount = strval(inputtext);
								if(amount < 1)
								{
								    format(titlestring, sizeof(titlestring), "{FFFFFF}Taking a Pots in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
								        WARNING: Must not be 0 or a Negative value!\n\n\
										Input the amount of Pots that you will take from your %s (%sg / %sg)",
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bPot]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_POT))
									);
					                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Take", "Back");
					                return 1;

								}
								if(BackpackInfo[index][bPot] < amount)
								{
								    format(titlestring, sizeof(titlestring), "{FFFFFF}Taking a Pots in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
								        WARNING: You don't have enough %sg Pots in your Backpack!\n\n\
										Input the amount of Pots that you will take from your %s (%sg / %sg)",
										number_format(amount),
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bPot]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_POT))
									);
					                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Take", "Back");
					                return 1;
								}
							    format(rpstring, sizeof(rpstring), "Take's out some pots from his %s", GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								PlayerInfo[playerid][pWeed] += amount;
								BackpackInfo[index][bPot] -= amount;
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack"), DeletePVar(playerid, "Type_Action");
							}
							case 2: // Cracks
							{
							    if(!IsNumeric(inputtext))
								{
									format(titlestring, sizeof(titlestring), "{FFFFFF}Taking a Cracks in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
								        WARNING: That's not a number!\n\n\
										Input the amount of Cracks that you will take from your %s (%sg / %sg)",
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bCrack]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CRACK))
									);
					                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Take", "Back");
					                return 1;
								}
								new amount = strval(inputtext);
								if(amount < 1)
								{
								    format(titlestring, sizeof(titlestring), "{FFFFFF}Taking a Cracks in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
								        WARNING: Must not be 0 or a Negative value!\n\n\
										Input the amount of Cracks that you will take from your %s (%sg / %sg)",
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bCrack]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CRACK))
									);
					                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Take", "Back");
					                return 1;

								}
								if(BackpackInfo[index][bCrack] < amount)
								{
								    format(titlestring, sizeof(titlestring), "{FFFFFF}Taking a Cracks in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
								        WARNING: You don't have enough %sg Pots in your Backpack!\n\n\
										Input the amount of Cracks that you will take from your %s (%sg / %sg)",
										number_format(amount),
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bCrack]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CRACK))
									);
					                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Take", "Back");
					                return 1;
								}
							    format(rpstring, sizeof(rpstring), "Take's out some cracks from his %s", GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								PlayerInfo[playerid][pCrack] += amount;
								BackpackInfo[index][bCrack] -= amount;
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack"), DeletePVar(playerid, "Type_Action");
							}
							case 3: // Mats
							{
							    if(!IsNumeric(inputtext))
								{
									format(titlestring, sizeof(titlestring), "{FFFFFF}Taking a Mats in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
								        WARNING: That's not a number!\n\n\
										Input the amount of Mats that you will take from your %s (%s / %s)",
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bMats]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_MATS))
									);
					                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Take", "Back");
					                return 1;
								}
								new amount = strval(inputtext);
								if(amount < 1)
								{
								    format(titlestring, sizeof(titlestring), "{FFFFFF}Taking a Mats in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
								        WARNING: Must not be 0 or a Negative value!\n\n\
										Input the amount of Mats that you will take from your %s (%s / %s)",
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bMats]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_MATS))
									);
					                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Take", "Back");
					                return 1;

								}
								if(BackpackInfo[index][bMats] < amount)
								{
								    format(titlestring, sizeof(titlestring), "{FFFFFF}Taking a Mats in your %s", GetBackpackSize(index));
								    format(bpstring, sizeof(bpstring)," \
								        WARNING: You don't have enough %sg Pots in your Backpack!\n\n\
										Input the amount of Mats that you will take from your %s (%s / %s)",
										number_format(amount),
										GetBackpackSize(index),
										number_format(BackpackInfo[index][bMats]),
										number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_MATS))
									);
					                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Take", "Back");
					                return 1;
								}
							    format(rpstring, sizeof(rpstring), "Take's out some mats from his %s", GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								PlayerInfo[playerid][pMaterials] += amount;
								BackpackInfo[index][bMats] -= amount;
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack"), DeletePVar(playerid, "Type_Action");
							}
						}
		            }
		        }
		    }
		    else ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack"), DeletePVar(playerid, "Type_Action");
		}
		case DIALOG_ACTIONBACKPACKMENU:
		{
			if(response)
			{
			    new bpstring[230], titlestring[64], index = GetPlayerBackpackID(playerid), rpstring[128];
			    switch(listitem)
				{
			    	case 0: { // Put Items into Backpack
						switch(GetPVarInt(playerid, "Listitem_Backpack")) {
						    case 0: {
						        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Cash in your %s", GetBackpackSize(index));
							    format(bpstring, sizeof(bpstring)," \
									Input the amount of Cash that you will put in your %s ($%s / $%s)",
									GetBackpackSize(index),
									number_format(BackpackInfo[index][bCash]),
									number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CASH))
								);
				                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                SetPVarInt(playerid, "Type_Action", 1);
						    }
						    case 1: {
						        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Pots in your %s", GetBackpackSize(index));
							    format(bpstring, sizeof(bpstring)," \
									Input the amount of Pots that you will put in your %s (%sg / %sg)",
									GetBackpackSize(index),
									number_format(BackpackInfo[index][bPot]),
									number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_POT))
								);
				                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                SetPVarInt(playerid, "Type_Action", 1);
						    }
						    case 2: {
						        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Cracks in your %s", GetBackpackSize(index));
							    format(bpstring, sizeof(bpstring)," \
									Input the amount of Cracks that you will put in your %s (%sg / %sg)",
									GetBackpackSize(index),
									number_format(BackpackInfo[index][bCrack]),
									number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CRACK))
								);
				                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                SetPVarInt(playerid, "Type_Action", 1);
						    }
						    case 3: {
						        format(titlestring, sizeof(titlestring), "{FFFFFF}Putting a Mats in your %s", GetBackpackSize(index));
							    format(bpstring, sizeof(bpstring)," \
									Input the amount of Materials that you will put in your %s (%s / %s)",
									GetBackpackSize(index),
									number_format(BackpackInfo[index][bMats]),
									number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_MATS))
								);
				                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Put", "Back");
				                SetPVarInt(playerid, "Type_Action", 1);
						    }
						    case 4: {
								new gunid = GetPlayerWeapon(playerid);
								if(!gunid) return SendClientMessageEx(playerid, COLOR_GREY, "You don't have any Gun Equipped"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								if(!IsRoleplayWeapon(gunid)) return SendClientMessageEx(playerid, COLOR_GREY, "You cannot put this kind of Weapon in your Backpack"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								////if(PlayerInfo[playerid][pAGuns][GetWeaponSlot(gunid)] == gunid) return SendClientMessageEx(playerid, COLOR_GREY, "You cannot put Admin Weapons in the Backpack!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								if(BackpackInfo[index][bGun][0] != 0) return SendClientMessageEx(playerid, COLOR_GREY, "There is already weapon in this Slot!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								format(rpstring, sizeof(rpstring), "Put his %s into their %s", GetWeaponNameEx(gunid),GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								BackpackInfo[index][bGun][0] = gunid;
								RemovePlayerWeapon(playerid, gunid);
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
						    }
							case 5: {
								new gunid = GetPlayerWeapon(playerid);
								if(!gunid) return SendClientMessageEx(playerid, COLOR_GREY, "You don't have any Gun Equipped"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								if(!IsRoleplayWeapon(gunid)) return SendClientMessageEx(playerid, COLOR_GREY, "You cannot put this kind of Weapon in your Backpack"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								//if(PlayerInfo[playerid][pAGuns][GetWeaponSlot(gunid)] == gunid) return SendClientMessageEx(playerid, COLOR_GREY, "You cannot put Admin Weapons in the Backpack!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								if(BackpackInfo[index][bGun][1] != 0) return SendClientMessageEx(playerid, COLOR_GREY, "There is already weapon in this Slot!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								format(rpstring, sizeof(rpstring), "Put his %s into their %s", GetWeaponNameEx(gunid),GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								BackpackInfo[index][bGun][1] = gunid;
								RemovePlayerWeapon(playerid, gunid);
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
						    }
						    case 6: {
								new gunid = GetPlayerWeapon(playerid);
								if(!gunid) return SendClientMessageEx(playerid, COLOR_GREY, "You don't have any Gun Equipped"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								if(!IsRoleplayWeapon(gunid)) return SendClientMessageEx(playerid, COLOR_GREY, "You cannot put this kind of Weapon in your Backpack"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								//if(PlayerInfo[playerid][pAGuns][GetWeaponSlot(gunid)] == gunid) return SendClientMessageEx(playerid, COLOR_GREY, "You cannot put Admin Weapons in the Backpack!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								if(BackpackInfo[index][bGun][2] != 0) return SendClientMessageEx(playerid, COLOR_GREY, "There is already weapon in this Slot!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								format(rpstring, sizeof(rpstring), "Put his %s into their %s", GetWeaponNameEx(gunid),GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								BackpackInfo[index][bGun][2] = gunid;
								RemovePlayerWeapon(playerid, gunid);
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
						    }
						    case 7: {
								new gunid = GetPlayerWeapon(playerid);
								if(!gunid) return SendClientMessageEx(playerid, COLOR_GREY, "You don't have any Gun Equipped"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								if(!IsRoleplayWeapon(gunid)) return SendClientMessageEx(playerid, COLOR_GREY, "You cannot put this kind of Weapon in your Backpack"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								//if(PlayerInfo[playerid][pAGuns][GetWeaponSlot(gunid)] == gunid) return SendClientMessageEx(playerid, COLOR_GREY, "You cannot put Admin Weapons in the Backpack!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								if(BackpackInfo[index][bGun][3] != 0) return SendClientMessageEx(playerid, COLOR_GREY, "There is already weapon in this Slot!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								format(rpstring, sizeof(rpstring), "Put his %s into their %s", GetWeaponNameEx(gunid),GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								BackpackInfo[index][bGun][3] = gunid;
								RemovePlayerWeapon(playerid, gunid);
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
						    }
						    case 8: {
								new gunid = GetPlayerWeapon(playerid);
								if(!gunid) return SendClientMessageEx(playerid, COLOR_GREY, "You don't have any Gun Equipped"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								if(!IsRoleplayWeapon(gunid)) return SendClientMessageEx(playerid, COLOR_GREY, "You cannot put this kind of Weapon in your Backpack"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								//if(PlayerInfo[playerid][pAGuns][GetWeaponSlot(gunid)] == gunid) return SendClientMessageEx(playerid, COLOR_GREY, "You cannot put Admin Weapons in the Backpack!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								if(BackpackInfo[index][bGun][4] != 0) return SendClientMessageEx(playerid, COLOR_GREY, "There is already weapon in this Slot!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								format(rpstring, sizeof(rpstring), "Put his %s into their %s", GetWeaponNameEx(gunid),GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								BackpackInfo[index][bGun][4] = gunid;
								RemovePlayerWeapon(playerid, gunid);
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
						    }
						}
					}
					case 1: { // Take Items from the Backpack
					    switch(GetPVarInt(playerid, "Listitem_Backpack")) {
						    case 0: {
						        format(titlestring, sizeof(titlestring), "{FFFFFF}Taking a Cash in your %s", GetBackpackSize(index));
							    format(bpstring, sizeof(bpstring)," \
									Input the amount of Cash that you will take from your %s ($%s / $%s)",
									GetBackpackSize(index),
									number_format(BackpackInfo[index][bCash]),
									number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CASH))
								);
				                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Take", "Back");
				                SetPVarInt(playerid, "Type_Action", 2);
						    }
						    case 1: {
						        format(titlestring, sizeof(titlestring), "{FFFFFF}Taking a Pots in your %s", GetBackpackSize(index));
							    format(bpstring, sizeof(bpstring)," \
									Input the amount of Pots that you will put from your %s (%sg / %sg)",
									GetBackpackSize(index),
									number_format(BackpackInfo[index][bPot]),
									number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_POT))
								);
				                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Take", "Back");
				                SetPVarInt(playerid, "Type_Action", 2);
						    }
						    case 2: {
						        format(titlestring, sizeof(titlestring), "{FFFFFF}Taking a Cracks in your %s", GetBackpackSize(index));
							    format(bpstring, sizeof(bpstring)," \
									Input the amount of Cracks that you will put from your %s (%sg / %sg)",
									GetBackpackSize(index),
									number_format(BackpackInfo[index][bCrack]),
									number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_CRACK))
								);
				                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Take", "Back");
				                SetPVarInt(playerid, "Type_Action", 2);
						    }
						    case 3: {
						        format(titlestring, sizeof(titlestring), "{FFFFFF}Taking a Mats in your %s", GetBackpackSize(index));
							    format(bpstring, sizeof(bpstring)," \
									Input the amount of Materials that you will put from your %s (%s / %s)",
									GetBackpackSize(index),
									number_format(BackpackInfo[index][bMats]),
									number_format(BackpackLimit(BackpackInfo[index][bBackpackSize], LIMIT_MATS))
								);
				                ShowPlayerDialog(playerid, DIALOG_PUTAKEITEMS, DIALOG_STYLE_INPUT, titlestring, bpstring, "Take", "Back");
				                SetPVarInt(playerid, "Type_Action", 2);
						    }
						    case 4: {
						        new gunid = BackpackInfo[index][bGun][0];
						        if(!gunid) return SendClientMessageEx(playerid, COLOR_GREY, "You dont have any Weapon in this Slot!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
						        if(PlayerInfo[playerid][pWeapons][GetWeaponSlot(gunid)] == gunid) return  SendClientMessageEx(playerid, COLOR_GREY, "You already have this weapon in your hand!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								format(rpstring, sizeof(rpstring), "Take his %s from their %s", GetWeaponNameEx(gunid),GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								GivePlayerWeaponEx(playerid, gunid, 60000);
								BackpackInfo[index][bGun][0] = 0;
								OnPlayerStatsUpdate(playerid);
							 	ShowPlayerBackpack(playerid);
							  	DeletePVar(playerid, "Listitem_Backpack");
							  	return 1;
						    }
							case 5: {
						        new gunid = BackpackInfo[index][bGun][1];
						        if(!gunid) return SendClientMessageEx(playerid, COLOR_GREY, "You dont have any Weapon in this Slot!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
						        if(PlayerInfo[playerid][pWeapons][GetWeaponSlot(gunid)] == gunid) return  SendClientMessageEx(playerid, COLOR_GREY, "You already have this weapon in your hand!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								format(rpstring, sizeof(rpstring), "Take his %s from their %s", GetWeaponNameEx(gunid),GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								GivePlayerWeaponEx(playerid, gunid, 60000);
								BackpackInfo[index][bGun][1] = 0;
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
						    }
						    case 6: {
						        new gunid = BackpackInfo[index][bGun][2];
						        if(!gunid) return SendClientMessageEx(playerid, COLOR_GREY, "You dont have any Weapon in this Slot!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
						        if(PlayerInfo[playerid][pWeapons][GetWeaponSlot(gunid)] == gunid) return  SendClientMessageEx(playerid, COLOR_GREY, "You already have this weapon in your hand!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								format(rpstring, sizeof(rpstring), "Take his %s from their %s", GetWeaponNameEx(gunid),GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								GivePlayerWeaponEx(playerid, gunid, 60000);
								BackpackInfo[index][bGun][2] = 0;
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
						    }
						    case 7: {
						        new gunid = BackpackInfo[index][bGun][3];
						        if(!gunid) return SendClientMessageEx(playerid, COLOR_GREY, "You dont have any Weapon in this Slot!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
						        if(PlayerInfo[playerid][pWeapons][GetWeaponSlot(gunid)] == gunid) return  SendClientMessageEx(playerid, COLOR_GREY, "You already have this weapon in your hand!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								format(rpstring, sizeof(rpstring), "Take his %s from their %s", GetWeaponNameEx(gunid),GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								GivePlayerWeaponEx(playerid, gunid, 60000);
								BackpackInfo[index][bGun][3] = 0;
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
						    }
						    case 8: {
						        new gunid = BackpackInfo[index][bGun][4];
						        if(!gunid) return SendClientMessageEx(playerid, COLOR_GREY, "You dont have any Weapon in this Slot!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
						        if(PlayerInfo[playerid][pWeapons][GetWeaponSlot(gunid)] == gunid) return  SendClientMessageEx(playerid, COLOR_GREY, "You already have this weapon in your hand!"), ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
								format(rpstring, sizeof(rpstring), "Take his %s from their %s", GetWeaponNameEx(gunid),GetPlayerStorageType(playerid));
								cmd_me(playerid, rpstring);
								GivePlayerWeaponEx(playerid, gunid, 60000);
								BackpackInfo[index][bGun][4] = 0;
								OnPlayerStatsUpdate(playerid);
								return ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
						    }
						}
					}
				}
			}
			else  ShowPlayerBackpack(playerid), DeletePVar(playerid, "Listitem_Backpack");
		}
	}
	return 1;
}

hook OnPlayerConnect(playerid)
{
    backpackid[playerid] = MAX_BACKPACKS+1;
	return 1;
}