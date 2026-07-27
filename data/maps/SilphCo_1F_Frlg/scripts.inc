SilphCo_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_1F_OnTransition
	.byte 0

SilphCo_1F_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SILPH_CO_1F
	end

SilphCo_1F_EventScript_Receptionist::
	msgbox SilphCo_1F_Text_WelcomePresidentInBoardroom, MSGBOX_NPC
	end

SilphCo_1F_EventScript_FloorSign::
	msgbox SilphCo_1F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_1F_Text_WelcomePresidentInBoardroom::
	.string "Es ist gleich da drüben!\p"
	.string "Man muss zwar Eintritt bezahlen,\n"
	.string "aber das ist es wert!$"

SilphCo_1F_Text_FloorSign::
	.string "Waren die Fossilien vom MONDBERG\n"
	.string "nicht einmalig?$"

