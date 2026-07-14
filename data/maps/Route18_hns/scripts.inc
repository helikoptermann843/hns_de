Route18_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route18_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route18_EventScript_Trigger_HideKecleon0::
	setvar VAR_TEMP_0, 1
	setflag FLAG_TEMP_1
	removeobject LOCALID_ROUTE18_KECLEON0
	end

Route18_EventScript_Trigger_HideKecleon1::
	setvar VAR_TEMP_1, 1
	setflag FLAG_TEMP_2
	removeobject LOCALID_ROUTE18_KECLEON1
	end

Route18_EventScript_Boris::
	trainerbattle_single TRAINER_BORIS_HNS, Route18_Text_BirdKeeperBorisSeen, Route18_Text_BirdKeeperBorisBeaten
	msgbox Route18_Text_BirdKeeperBorisAfterBattle, MSGBOX_AUTOCLOSE
	end

Route18_EventScript_Bob::
	trainerbattle_single TRAINER_BOB_HNS, Route18_Text_BirdKeeperBobSeen, Route18_Text_BirdKeeperBobBeaten
	msgbox Route18_Text_BirdKeeperBobAfterBattle, MSGBOX_AUTOCLOSE
	end

Route18_EventScript_Sign::
	msgbox Route18_Text_Sign, MSGBOX_SIGN
	end

Route18_Text_BirdKeeperBorisSeen:
	.string "Wenn du nach Pokémon suchst,\n"
	.string "musst du ins hohe Gras gehen.$"

Route18_Text_BirdKeeperBorisBeaten:
	.string "Yippi!$"

Route18_Text_BirdKeeperBorisAfterBattle:
	.string "Da du so stark\n"
	.string "bist, muss es Spaß machen, gegen dich\l"
	.string "zu kämpfen.$"

Route18_Text_BirdKeeperBobSeen:
	.string "Der RADWEG ist\n"
	.string "eine schnelle Abkürzung nach PRISMANIA\l"
	.string "CITY.$"

Route18_Text_BirdKeeperBobBeaten:
	.string "…Uff!$"

Route18_Text_BirdKeeperBobAfterBattle:
	.string "Wenn du kein FAHRRAD hast,\n"
	.string "darfst du die\l"
	.string "Abkürzung nicht benutzen.$"

Route18_Text_Sign:
	.string "ROUTE 18\p"
	.string "PRISMANIA CITY - FUCHSANIA CITY$"
