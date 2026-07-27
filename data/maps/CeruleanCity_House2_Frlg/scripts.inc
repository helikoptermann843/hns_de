CeruleanCity_House2_Frlg_MapScripts::
	.byte 0

CeruleanCity_House2_EventScript_Hiker::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TM28_FROM_ROCKET, CeruleanCity_House2_EventScript_HikerGotTM28
	msgbox CeruleanCity_House2_Text_RocketsStoleTMForDig
	release
	end

CeruleanCity_House2_EventScript_HikerGotTM28::
	msgbox CeruleanCity_House2_Text_TeachDiglettDigWithoutTM
	release
	end

CeruleanCity_House2_EventScript_Lass::
	msgbox CeruleanCity_House2_Text_TeamRocketTryingToDigIntoNoGood, MSGBOX_NPC
	end

CeruleanCity_House2_EventScript_WallHole::
	msgbox CeruleanCity_House2_Text_TeamRocketLeftWayOut, MSGBOX_SIGN
	end

CeruleanCity_House2_Text_RocketsStoleTMForDig::
	.string "Dieses gemeine TEAM ROCKET!\p"
	.string "Hör dir an, was sie wieder\n"
	.string "verbrochen haben!\p"
	.string "Sie haben den SCHAUFLER gestohlen,\n"
	.string "eine TM, mit der POKéMON Löcher\l"
	.string "graben können!\p"
	.string "Der SCHAUFLER war sündhaft teuer!$"

CeruleanCity_House2_Text_TeachDiglettDigWithoutTM::
	.string "Was weg ist, ist weg!\p"
	.string "Ich werde DIGDA beibringen, ohne\n"
	.string "den SCHAUFLER zu graben!$"

CeruleanCity_House2_Text_TeamRocketTryingToDigIntoNoGood::
	.string "Das TEAM ROCKET braucht den\n"
	.string "SCHAUFLER sicher für irgendeine\l"
	.string "Schandtat!$"

CeruleanCity_House2_Text_TeamRocketLeftWayOut::
	.string "Das TEAM ROCKET hat Spuren\n"
	.string "hinterlassen!$"

