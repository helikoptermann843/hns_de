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
	.string "musst du ins hohe Gras gehen.\l"
	.string "Der Rest ergibt sich von allein!$"

Route18_Text_BirdKeeperBorisBeaten:
	.string "Yippi!$"

Route18_Text_BirdKeeperBorisAfterBattle:
	.string "Wenn man so stark ist wie du,\n"
	.string "macht das Kämpfen sicher Spaß.$"

Route18_Text_BirdKeeperBobSeen:
	.string "Der Radweg ist eine Abkürzung\n"
	.string "nach Prismania City.$"

Route18_Text_BirdKeeperBobBeaten:
	.string "…Uff!$"

Route18_Text_BirdKeeperBobAfterBattle:
	.string "Um die Abkürzung zu nehmen, musst\n"
	.string "du dir schon ein Fahrrad besorgen!$"

Route18_Text_Sign:
	.string "Route 18\p"
	.string "Prismania City - Fuchsania City$"
