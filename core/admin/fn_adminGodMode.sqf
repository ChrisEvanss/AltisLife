#include "..\..\script_macros.hpp"
	
if (FETCH_CONST(life_adminlevel) < 4) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};

closeDialog 0;

if (life_god) then {
    life_god = false;
    titleText [localize "STR_ANOTF_godModeOff","PLAIN"]; titleFadeOut 2;
    player allowDamage true;
	player setUnitLoadout old_gear;
	[0,format ["Admin %1 is back in roleplay",profileName]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
	
} else {
    life_god = true;
    titleText [localize "STR_ANOTF_godModeOn","PLAIN"]; titleFadeOut 2;
    player allowDamage false;
	old_gear = getUnitLoadout player;
    removeUniform player;
    removeHeadgear player;
    removeVest player;
    removeGoggles player;
    removeBackpack player;
    removeallWeapons player;
    removeallAssignedItems player;
	player addHeadgear "H_PilotHelmetFighter_B";
	switch(FETCH_CONST(life_adminlevel)) do {

	    case 1: {
        player forceAddUniform "U_I_Protagonist_VR";
		player addItem "itemGPS";
		player assignItem "itemGPS";
        };
	
        case 2: {
        player forceAddUniform "U_I_Protagonist_VR";
		player addItem "itemGPS";
		player assignItem "itemGPS";
        };

        case 3: {
        player forceAddUniform "U_B_Protagonist_VR";
		player addItem "itemGPS";
		player assignItem "itemGPS";
        };
	
        case 4: {
        player forceAddUniform "U_O_Protagonist_VR";
		player addItem "itemGPS";
		player assignItem "itemGPS";
        };
		
        case 5: {
        player forceAddUniform "U_O_Protagonist_VR";
		player addItem "itemGPS";
		player assignItem "itemGPS";
        };
    };
	[0,format ["Admin %1 is out of roleplay",profileName]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
};