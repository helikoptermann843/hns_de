BurnedTower_1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, BurnedTower_1F_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BurnedTower_1F_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, BurnedTower_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

BurnedTower_1F_OnTransition: 
	callnative SetTimeBasedEncounters
	end

BurnedTower_1F_OnLoad::
	goto_if_ge VAR_ECRUTEAK_CITY_STATE, 4, BurnedTower_1F_MapScript_CreateHole
	end

BurnedTower_1F_MapScript_CreateHole::
	setmetatile 16, 12, 0x37E, FALSE
	end

BurnedTower_1F_OnFrame::
	map_script_2 VAR_ECRUTEAK_CITY_STATE, 1, BurnedTower_1F_EventScript_MeetEusine
	.2byte 0

BurnedTower_1F_EventScript_MeetEusine::
	lock
	playse SE_PIN
	applymovement LOCALID_BURNED_TOWER_EUSINE, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_BURNED_TOWER_EUSINE, BurnedTower_Movement_Eusine1
	waitmovement 0
	msgbox BurnedTower_1FEusineIntroText, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BURNED_TOWER_EUSINE, BurnedTower_Movement_Eusine2
	waitmovement 0
	setvar VAR_ECRUTEAK_CITY_STATE, 2
	release
	end

BurnedTower_Movement_Eusine1:
	walk_down
	walk_down
	step_end

BurnedTower_Movement_Eusine2:
	walk_up
	walk_up
	step_end


BurnedTower_1FEusineIntroText:
	.string "EUSIN: Mein Name ist Eusin.\p"
	.string "Ich bin auf der Spur eines\n"
	.string "POKéMON namens Suicune.\p"
	.string "Und du bist...?\p"
	.string "{PLAYER}? Schön dich kennenzulernen!\p"
	.string "Ich habe gehört, Suicune könnte\n"
	.string "in dieser Turmruine sein,\l"
	.string "also kam ich her.\p"
	.string "Aber wo genau könnte es sein?$"

BurnedTower_1F_EventScript_Item_HpUp::
	finditem ITEM_HP_UP
	end

BurnedTower_1F_EventScript_Item_Ether::
	finditem ITEM_ETHER
	end

BurnedTower_1F_EventScript_Eusine::
	lock
	faceplayer
	msgbox BurnedTower_1FEusineText, MSGBOX_DEFAULT
	closemessage
	release
	end

BurnedTower_1F_EventScript_Morty::
	lock
	faceplayer
	msgbox BurnedTower_1FMortyText, MSGBOX_DEFAULT
	closemessage
	release
	end

BurnedTower_1FEusineText:
	.string "EUSINE: Ich habe gehört,\n"
	.string "Suicune könnte in dieser\l"
	.string "Turmruine sein, also kam ich her\p"
	.string "Aber wo genau könnte es sein?$"

BurnedTower_1FMortyText:
	.string "JENS: Der ARENALEITER von\n"
	.string "TEAK-CITY, muss die sogenannten\l"
	.string "Legendären POKéMON\p"
	.string "SUICUNE, ENTEI und RAIKOU studieren.\p"
	.string "EUSIN ist gekommen, also habe\n"
	.string "ich beschlossen, den Turm\l"
	.string "mit ihm zu untersuchen.$"

BurnedTower_1F_EventScript_Silver::
	lock
	playse SE_PIN
	applymovement LOCALID_BURNED_TOWER_SILVER, Common_Movement_ExclamationMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight1
	applymovement LOCALID_BURNED_TOWER_SILVER, Common_Movement_WalkLeft1
	waitmovement 0
	waitmovement 0
	msgbox BurnedTowerSilver_BeforeText, MSGBOX_DEFAULT
	call_if_eq VAR_STARTER_MON, 0, BurnedTower_1F_Silver_Battle_Cyndaquil
	call_if_eq VAR_STARTER_MON, 1, BurnedTower_1F_Silver_Battle_Totodile
	call_if_eq VAR_STARTER_MON, 2, BurnedTower_1F_Silver_Battle_Chikorita
	playbgm MUS_HG_RIVAL_EXIT, TRUE
	msgbox BurnedTowerSilver_AfterText1, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 20  @ num shakes
	setvar VAR_0x8007, 6  @ shake delay
	special ShakeCamera
	waitstate
	playse SE_CLICK
	setmetatile 16, 12, 0x37E, FALSE
	special DrawWholeMapView
	waitse
	delay 60
	special SpawnCameraObject
	removeobject OBJ_EVENT_ID_PLAYER
	playse SE_FALL
	delay 60
	msgbox BurnedTowerSilver_AfterText2, MSGBOX_AUTOCLOSE
	waitmessage
	warphole MAP_BURNED_TOWER_B1F_HNS
	setvar VAR_ECRUTEAK_CITY_STATE, 3
	waitstate
	release
	end

BurnedTower_1F_Silver_Battle_Cyndaquil::
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_3_HNS, BurnedTowerSilver_WinText
	return

BurnedTower_1F_Silver_Battle_Totodile::
	trainerbattle_no_intro TRAINER_RIVAL_TOTODILE_3_HNS, BurnedTowerSilver_WinText
	return

BurnedTower_1F_Silver_Battle_Chikorita::
	trainerbattle_no_intro TRAINER_RIVAL_CHIKORITA_3_HNS, BurnedTowerSilver_WinText
	return

BurnedTowerSilver_BeforeText:
	.string "..............................\p"
	.string "...Oh, du bist es.\p"
	.string "Ich suchte nach Legendären\n"
	.string "POKéMON die angeblich hier leben.\p"
	.string "Aber hier ist nichts!\p"
	.string "Nichts, was den Aufwand hierher\n"
	.string "zu kommen rechtfertigt, absolut?\l"
	.string "Nichts!\p"
	.string "Das ist alles deine Schuld!$"

BurnedTowerSilver_WinText:
	.string "...Humph!\p"
	.string "Darum hasse ich es,\n"
	.string "gegen Schwächlinge anzutreten.\p"
	.string "Wie armselig.$"

BurnedTowerSilver_AfterText1:
	.string "...Ach, egal.\p"
	.string "Du wärst sowieso nicht fähig,\n"
	.string "ein legendäres POKéMON zu fangen.$"

BurnedTowerSilver_LossText:
	.string "...Humph!\p"
	.string "Ich hasse es, gegen Schwächlinge\n"
	.string "anzutreten. Es ist Zeitverschwendung.$"

BurnedTowerSilver_AfterText2:
	.string "Humph!\p"
	.string "Was hast du dir dabei gedacht,\n"
	.string "einfach in ein Loch zu fallen?\p"
	.string "Du Genie!$"

BurnedTower_1F_EventScript_Nard::
	trainerbattle_single TRAINER_NARD_HNS, BurnedTower_Text_NardSeen, BurnedTower_Text_NardBeaten
	msgbox BurnedTower_Text_NardAfter, MSGBOX_AUTOCLOSE
	end

BurnedTower_1F_EventScript_Richardo::
	trainerbattle_single TRAINER_RICHARDO_HNS, BurnedTower_Text_RichardoSeen, BurnedTower_Text_RichardoBeaten
	msgbox BurnedTower_Text_RichardoAfter, MSGBOX_AUTOCLOSE
	end

BurnedTower_Text_NardSeen:
	.string "Keine Sorge!\p"
	.string "Wir Feuerspucker kennen die wahre\n"
	.string "Stärke von Feuer besser als alle\l"
	.string "anderen!$"
BurnedTower_Text_NardBeaten:
	.string "Danke für den hitzigen Kampf!$"
BurnedTower_Text_NardAfter:
	.string "Der Grund, warum dieser Turm verbrannt\n"
	.string "ist, ist, dass er vom\l"
	.string "Blitz getroffen wurde\p"
	.string "Mein Feuer ist im Vergleich dazu\n"
	.string "winzig...$"

BurnedTower_Text_RichardoSeen:
	.string "Ich übe das Stehlen in der\n"
	.string "Turmruine! Versuch das nicht\l"
	.string "Zuhause!$"
BurnedTower_Text_RichardoBeaten:
	.string "Pfffffffffffffff.$"
BurnedTower_Text_RichardoAfter:
	.string "Vielleicht ist ein Leben als\n"
	.string "Verbrecher doch nichts für mich...$"
