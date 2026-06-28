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
	.string "Willkommen in\n"
	.string "SAFFRONIA CITY, der Heimat des\n"
	.string "MAGNETZUGs!\p"
	.string "…Das sage ich sonst immer, aber\p"
	.string "der MAGNETZUG fährt momentan nicht.\p"
	.string "Die Stromzufuhr ist unterbrochen,\p"
	.string "weil es im KRAFTWERK ein\p"
	.string "Problem gibt.$"

Route6_Text_SaffronGuardMagnetTrain:
	.string "Der MAGNETZUG ist das Aushängeschild\p"
	.string "von SAFFRONIA CITY.$"
