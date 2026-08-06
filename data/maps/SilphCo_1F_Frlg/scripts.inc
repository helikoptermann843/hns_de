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
	.string "Willkommen!\p"
	.string "Der Präsident befindet sich im 10.\n"
	.string "Stock im Konferenzraum!$"

SilphCo_1F_Text_FloorSign::
	.string "Silph Co. Hauptsitz\n"
	.string "EG$"

