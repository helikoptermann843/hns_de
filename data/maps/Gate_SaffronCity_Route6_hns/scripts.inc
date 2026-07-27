Gate_SaffronCity_Route6_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_OnFrame
	.byte 0

Gate_SaffronCity_Route6_EventScript_Guard::
	goto_if_eq VAR_TEMP_0, 1, Gate_SaffronCity_Route6_EventScript_Guard2
	msgbox Route6_Text_SaffronGuardWelcome, MSGBOX_NPC
	setvar VAR_TEMP_0, 1
	end
Gate_SaffronCity_Route6_EventScript_Guard2::
	msgbox Route6_Text_SaffronGuardMagnetTrain, MSGBOX_NPC
	end

Route6_Text_SaffronGuardWelcome:
	.string "Willkommen in Saffronia City,\n"
	.string "der Heimat des Magnetzugs!\p"
	.string "…Das sage ich sonst immer, aber\n"
	.string "der Magnetzug fährt gerade nicht.\p"
	.string "Die Stromzufuhr ist unterbrochen,\n"
	.string "weil es im Kraftwerk einen\l"
	.string "Unfall gab.$"

Route6_Text_SaffronGuardMagnetTrain:
	.string "Der Magnetzug ist und bleibt das\n"
	.string "Aushängeschild von Saffronia City!$"
