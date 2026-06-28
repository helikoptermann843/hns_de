Route7_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route7_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route7_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route7_EventScript_Sign::
	msgbox Route7_Text_UndergroundPathSign, MSGBOX_SIGN
	end

Route7_EventScript_Door::
	msgbox Route7_Text_LockedDoor, MSGBOX_SIGN
	end

Route7_Text_UndergroundPathSign:
	.string "Was steht auf dem Flugblatt?\p"
	.string "…Ruppige Trainer tragen auf dem\p"
	.string "TUNNELPFAD Kämpfe aus.\p"
	.string "Da sich die Beschwerden der Anwohner\l"
	.string "häuften,\n"
	.string "wurde der TUNNELPFAD auf unbestimmte\p"
	.string "Zeit geschlossen.\p"
	.string "ORDNUNGSAMT VON PRISMANIA CITY$"

Route7_Text_LockedDoor:
	.string "Es ist verriegelt…$"

