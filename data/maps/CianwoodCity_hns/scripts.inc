CianwoodCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CianwoodCity_EventScript_CityEnter
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CianwoodCity_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, CianwoodCity_EventScript_InitializeSuicune
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

CianwoodCity_RemoveEusine::
	setflag FLAG_HIDE_CIANWOOD_EUSINE
	end

CianwoodCity_OnFrame::
	map_script_2 VAR_GETFLY, 1, CianwoodCity_EventScript_Flytrigger
	.2byte 0

CianwoodCity_EventScript_CityEnter::
	setflag FLAG_VISITED_CIANWOOD_CITY
	callnative SetTimeBasedEncounters
	goto_if_ge VAR_OLIVINE_CITY_STATE, 5, OlivineCity_MapScript_ClearWeather
	end

CianwoodCity_EventScript_InitializeSuicune::
	goto_if_ge VAR_SUICUNE_ENCOUNTERS, 2, CianwoodCity_EventScript_InitializeNothing
	clearflag FLAG_HIDE_CIANWOOD_SUICUNE
	setflag FLAG_HIDE_CIANWOOD_EUSINE
	setvar VAR_TEMP_0, 1
	end

CianwoodCity_EventScript_InitializeNothing::
	setvar VAR_TEMP_0, 1
	end

CianwoodCity_EventScript_Flytrigger::
	lock
	playse SE_PIN
	applymovement LOCALID_CIANWOOD_CHUCKSWIFE, Common_Movement_ExclamationMark
	delay 55
	waitmovement LOCALID_CIANWOOD_CHUCKSWIFE
	applymovement LOCALID_CIANWOOD_CHUCKSWIFE, CianwoodCity_Movement_ChucksWife
	waitmovement 0
	msgbox CianwoodCity_Text_ChucksWifeGiveHM, MSGBOX_DEFAULT
	giveitem ITEM_HM_FLY
	msgbox CianwoodCity_Text_ChucksWifeFlySpeech, MSGBOX_DEFAULT
	closemessage
	setvar VAR_GETFLY, 2
	goto_if_eq VAR_TRIGGER_ELM_ROCKET_CALL, 1, Mahoganytown_EventScript_RocketTrigger
	release
	end

CianwoodCity_Movement_ChucksWife:
	walk_left
	walk_left
	walk_up
	walk_left
	face_up
	step_end

CianwoodCity_EventScript_Test::
	lock
	random 2
	call_if_eq VAR_RESULT, 1, EventScript_RockSmashHeartscale
	release
	end

CianwoodCity_EventScript_ChucksWife::
	lock
	faceplayer
	checkitem ITEM_HM_FLY
	goto_if_eq VAR_RESULT, TRUE, CianwoodCity_EventScript_ChucksWifeAlreadyHasFly
	msgbox CianwoodCity_Text_ChucksWifeEasierToFly, MSGBOX_DEFAULT
	goto_if_set FLAG_BADGE05_GET, CianwoodCity_EventScript_ChucksWifeGiveFly
	msgbox CianwoodCity_Text_ChucksWifeBeatChuck, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_EventScript_ChucksWifeGiveFly::
	msgbox CianwoodCity_Text_ChucksWifeGiveHM, MSGBOX_DEFAULT
	giveitem ITEM_HM_FLY
	msgbox CianwoodCity_Text_ChucksWifeFlySpeech, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_EventScript_ChucksWifeAlreadyHasFly::
	msgbox CianwoodCity_Text_ChucksWifeChubby, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_ChucksWifeEasierToFly:
	.string "Du hast auf dem Weg hierher doch\n"
	.string "bestimmt das Meer überquert, oder?\p"
	.string "Würde eines deiner Pokémon die\n"
	.string "Attacke Fliegen beherrschen, hättest\l"
	.string "du dir den ganzen Ärger sparen können!$"

CianwoodCity_Text_ChucksWifeBeatChuck:
	.string "Aber dafür hättest du natürlich auch\n"
	.string "den passenden Orden gebraucht!\l"
	.string "Komm wieder, wenn du den Arenaleiter\l"
	.string "dieser Stadt besiegt hast!\l"
	.string "Dann bekommst du etwas von mir!$"

CianwoodCity_Text_ChucksWifeGiveHM:
	.string "Du hast den Orden von Anemonia City!\p"
	.string "Gut, dann will ich dir diese VM schenken!$"

CianwoodCity_Text_ChucksWifeFlySpeech:
	.string "Wenn du einem deiner Pokémon die\n"
	.string "Attacke Fliegen beibringst, kannst du\l"
	.string "sofort in jede beliebige Stadt düsen,\l"
	.string "die du bisher besucht hast.$"

CianwoodCity_Text_ChucksWifeChubby:
	.string "Hihihi! Mein Mann versucht, härter zu\n"
	.string "trainieren, weil du ihn besiegt hast.\p"
	.string "Das trifft sich gut, denn er hat in\n"
	.string "letzter Zeit etwas Speck angesetzt!$"

CianwoodCity_EventScript_Youngster::
	lock
	faceplayer
	msgbox CianwoodCity_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_Youngster:
	.string "Wenn eins deiner Pokémon die Attacke\n"
	.string "Fliegen gelernt hat, gelangst du auch\l"
	.string "im Handumdrehen bis nach Oliviana City!$"

CianwoodCity_EventScript_PokefanM::
	lock
	faceplayer
	msgbox CianwoodCity_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_PokefanM:
	.string "Hinter den Felsen nördlich der Stadt\n"
	.string "findest du viele interessante Items!\p"
	.string "Um sie zu finden, musst du lediglich\n"
	.string "einem deiner Pokémon den Befehl geben,\l"
	.string "die Attacke Zertrümmerer einzusetzen!$"

CianwoodCity_EventScript_Lass::
	lock
	faceplayer
	msgbox CianwoodCity_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_Lass:
	.string "Hartwig, der Arenaleiter, steigt gerne\n"
	.string "selbst gegen seine Kampf-Pokémon in\l"
	.string "den Ring, um sie abzuhärten.$"

CianwoodCity_EventScript_SuicuneTrigger::
	lock
	hidefollower 1
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement LOCALID_CIANWOOD_SUICUNE, CianwoodCity_Movement_Suicune1
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	waitmovement 0
	waitmoncry
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement LOCALID_CIANWOOD_SUICUNE, CianwoodCity_Movement_Suicune2
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_CIANWOOD_SUICUNE, CianwoodCity_Movement_Suicune3
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	waitmovement 0
	delay 30
	playbgm MUS_HG_EUSINE, FALSE
	clearflag FLAG_HIDE_CIANWOOD_EUSINE
	addobject LOCALID_CIANWOOD_EUSINE
	applymovement LOCALID_CIANWOOD_EUSINE, CianwoodCity_Movement_Eusine1
	waitmovement 0
	delay 55
	applymovement LOCALID_CIANWOOD_EUSINE, CianwoodCity_Movement_Eusine2
	waitmovement 0
	msgbox CianwoodCity_Text_EusineSuicune, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_EUSINE_HNS, CianwoodCity_Text_EusineBeaten
	playbgm MUS_HG_EUSINE, FALSE
	msgbox CianwoodCity_Text_EusineAfter, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CIANWOOD_EUSINE, CianwoodCity_Movement_Eusine3
	waitmovement 0
	setflag FLAG_HIDE_CIANWOOD_EUSINE
	setflag FLAG_HIDE_CIANWOOD_SUICUNE
	removeobject LOCALID_CIANWOOD_SUICUNE
	removeobject LOCALID_CIANWOOD_EUSINE
	setvar VAR_SUICUNE_ENCOUNTERS, 2
	setvar VAR_CIANWOOD_CITY_STATE, 2
	fadedefaultbgm
	call_if_set FLAG_HIDE_ROUTE42_SUICUNE, CianwoodCity_EventScript_DoneJohtoSuicune
	release
	end

CianwoodCity_EventScript_DoneJohtoSuicune::
	setvar VAR_SUICUNE_ENCOUNTERS, 3
	return

CianwoodCity_Movement_Suicune1:
	jump_in_place_right_left
	jump_in_place_right_left
	face_down
	step_end

CianwoodCity_Movement_Suicune2:
	jump_down
	jump_2_down
	jump_right
	face_up
	step_end

CianwoodCity_Movement_Suicune3:
	jump_2_down
	jump_2_right
	jump_2_right
	jump_2_right
	jump_2_right
	jump_2_right
	step_end

CianwoodCity_Movement_Eusine1:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	face_right
	step_end

CianwoodCity_Movement_Eusine2:
	face_up
	walk_up
	walk_up
	step_end

CianwoodCity_Movement_Eusine3:
	face_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

CianwoodCity_Text_EusineSuicune:
	.string "Eusin: Hallo, {PLAYER}!\p"
	.string "Sag mal… war das eben nicht Suicune?\p"
	.string "Ich konnte es nicht richtig erkennen,\n"
	.string "aber für den Hauch einer Sekunde meinte\l"
	.string "ich wirklich, gesehen zu haben, wie da\l"
	.string "Suicune über das Meer gebrettert ist.\p"
	.string "Suicune ist so schön und so stolz…\p"
	.string "Außerdem läuft es mit atemberaubender\n"
	.string "Geschwindigkeit Städte und Straßen ab!\p"
	.string "Es ist einfach ein wundervolles Pokémon.\p"
	.string "Ich würde es nur zu gerne mal aus\n"
	.string "nächster Nähe sehen…\p"
	.string "Los, lass uns kämpfen! Wenn ich dich\n"
	.string "besiege, erkennt mich Suicune vielleicht\l"
	.string "als würdigen Trainer an!\p"
	.string "Komm schon, {PLAYER}!$"

CianwoodCity_Text_EusineBeaten:
	.string "Ich sage es ungern, aber du gewinnst!$"

CianwoodCity_Text_EusineAfter:
	.string "Du bist unglaublich, {PLAYER}!\p"
	.string "Kein Wunder, dass Pokémon sich zu dir\n"
	.string "hingezogen fühlen.\p"
	.string "Jetzt verstehe ich es.\p"
	.string "Ich werde weiter nach Suicune suchen.\p"
	.string "Wir werden uns sicher wiedersehen.\p"
	.string "Bis dann!$"

CianwoodCity_EventScript_CitySign::
	lock
	msgbox CianwoodCity_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end

CianwoodCity_Text_Sign:
	.string "Anemonia City\p"
	.string "Ein Hafen in der rauen See$"

CianwoodCity_EventScript_GymSign::
	lock
	msgbox CianwoodCity_Text_GymSign, MSGBOX_SIGN
	closemessage
	release
	end

CianwoodCity_Text_GymSign:
	.string "Pokémon-Arena von Anemonia City\n"
	.string "Leiter: Hartwig\l"
	.string "Er lässt lieber seine Fäuste für\l"
	.string "sich sprechen!$"

CianwoodCity_EventScript_Pharmacy::
	lock
	msgbox CianwoodCity_Text_PharmacySign, MSGBOX_SIGN
	closemessage
	release
	end

CianwoodCity_Text_PharmacySign:
	.string "Apotheke von Anemonia City\p"
	.string "Seit 500 Jahren im Geschäft.\n"
	.string "Wir haben immer ein offenes Ohr\l"
	.string "für medizinische Fragen aller Art!$"

CianwoodCity_EventScript_CaveSign::
	lock
	msgbox CianwoodCity_Text_Safari, MSGBOX_SIGN
	closemessage
	release
	end

CianwoodCity_EventScript_Engineer::
	lock
	faceplayer
	msgbox CianwoodCity_Text_Engineer, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_Safari:
	.string "Felsschlundhöhle Weg zur Safari-Zone.$"

CianwoodCity_Text_Engineer:
	.string "Hier sind aktuell Bauarbeiten.\n"
	.string "Wir gestalten die neue Safari-Zone,\l"
	.string "du musst noch warten.$"
