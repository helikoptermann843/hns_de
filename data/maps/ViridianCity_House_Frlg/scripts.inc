ViridianCity_House_Frlg_MapScripts::
	.byte 0

ViridianCity_House_EventScript_BaldingMan::
	msgbox ViridianCity_House_Text_NicknamingIsFun, MSGBOX_NPC
	end

ViridianCity_House_EventScript_LittleGirl::
	msgbox ViridianCity_House_Text_MyDaddyLovesMonsToo, MSGBOX_NPC
	end

ViridianCity_House_EventScript_Speary::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SPEAROW, CRY_MODE_NORMAL
	msgbox ViridianCity_House_Text_Speary
	waitmoncry
	release
	end

ViridianCity_House_EventScript_NicknameSign::
	msgbox ViridianCity_House_Text_SpearowNameSpeary, MSGBOX_SIGN
	end

ViridianCity_House_Text_NicknamingIsFun::
	.string "Es macht Spaß, sich Spitznamen\n"
	.string "auszudenken. Aber es erfordert viel\l"
	.string "Einfallsreichtum!\p"
	.string "Einfache Namen kann man sich\n"
	.string "leichter merken!$"

ViridianCity_House_Text_MyDaddyLovesMonsToo::
	.string "Mein Papa mag POKéMON auch sehr\n"
	.string "gerne!$"

ViridianCity_House_Text_Speary::
	.string "WILLI: Habi! HABITAK!$"

ViridianCity_House_Text_SpearowNameSpeary::
	.string "HABITAK\n"
	.string "Spitzname: WILLI$"

