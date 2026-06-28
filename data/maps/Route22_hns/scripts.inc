Route22_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route22_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route22_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route22_EventScript_Sign::
	msgbox Route22_Text_VictoryRoadEntranceSign, MSGBOX_NPC
	end

Route22_Text_VictoryRoadEntranceSign:
	.string "Pokémon LIGA\p"
	.string "SIEGESSTRASSE EINGANG$"

Route22_EventScript_ResetActivation::
	setvar VAR_TEMP_0, 0
	end

Route22_EventScript_DoNothing::
	setvar VAR_TEMP_0, 1
	end

Route22_EventScript_TriggerBottom::
	goto_if_ne VAR_ROUTE22_GIOVANNI_STATE, 0, Route22_EventScript_DoNothing
	specialvar VAR_RESULT, CheckCelebi
	goto_if_eq VAR_RESULT, FALSE, Route22_EventScript_DoNothing
	goto Route22_EventScript_Scene
	
Route22_EventScript_TriggerTop::
	goto_if_ne VAR_ROUTE22_GIOVANNI_STATE, 0, Route22_EventScript_DoNothing
	specialvar VAR_RESULT, CheckCelebi
	goto_if_eq VAR_RESULT, FALSE, Route22_EventScript_DoNothing
	goto Route22_EventScript_Scene

Route22_EventScript_TriggerMid::
	goto_if_ne VAR_ROUTE22_GIOVANNI_STATE, 0, Route22_EventScript_DoNothing
	specialvar VAR_RESULT, CheckCelebi
	goto_if_eq VAR_RESULT, FALSE, Route22_EventScript_DoNothing
	goto Route22_EventScript_Scene

Route22_EventScript_Scene::
	lock
	applymovement2 OBJ_EVENT_ID_FOLLOWER, Route22_Movement_CelebiBegin
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	waitmovement 0
	playse SE_PIN
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	delay 60
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	playse SE_PIN
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	delay 60
	applymovement2 OBJ_EVENT_ID_FOLLOWER, Route22_Movement_CelebiSpin1
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitmovement 0
	fadescreenswapbuffers FADE_TO_WHITE
	playse SE_M_TELEPORT
	waitse
	delay 60
	playse SE_M_TELEPORT
	waitse
	clearflag FLAG_HIDE_ROUTE22_GIOVANNI_SILVER
	addobject LOCALID_ROUTE22_GIOVANNI
	addobject LOCALID_ROUTE22_SILVER
	waitse
	playbgm MUS_RG_ROUTE3, TRUE
	fadescreenswapbuffers FADE_FROM_WHITE
	delay 50
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	special SpawnCameraObject
	applymovement2 OBJ_EVENT_ID_CAMERA, Route22_Movement_CameraPanLeft
	waitmovement 0
	delay 30
	applymovement2 LOCALID_ROUTE22_SILVER, Common_Movement_WalkLeft1
	waitmovement 0
	msgbox Route22_Text_Silver1, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement2 LOCALID_ROUTE22_GIOVANNI, Route22_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox Route22_Text_Giovanni1, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement2 LOCALID_ROUTE22_SILVER, Route22_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox Route22_Text_Silver2, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement2 LOCALID_ROUTE22_GIOVANNI, Route22_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox Route22_Text_Giovanni2, MSGBOX_DEFAULT
	closemessage
	delay 10
	applymovement2 LOCALID_ROUTE22_SILVER, Common_Movement_WalkLeft1
	waitmovement 0
	msgbox Route22_Text_Silver3, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement2 LOCALID_ROUTE22_GIOVANNI, Route22_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox Route22_Text_Giovanni3, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement2 LOCALID_ROUTE22_GIOVANNI, Route22_Movement_GiovanniLeave
	waitmovement 0
	msgbox Route22_Text_Silver4, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement2 LOCALID_ROUTE22_SILVER, Common_Movement_WalkLeft1
	waitmovement 0
	msgbox Route22_Text_Silver5, MSGBOX_DEFAULT
	closemessage
	delay 20
	playbgm MUS_HG_ENCOUNTER_RIVAL, TRUE
	applymovement2 LOCALID_ROUTE22_SILVER, Route22_Movement_SilverStartLeave
	applymovement2 OBJ_EVENT_ID_CAMERA, Route22_Movement_CameraPanRight
	waitmovement LOCALID_ROUTE22_SILVER
	waitmovement OBJ_EVENT_ID_CAMERA
	special RemoveCameraObject
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	playse SE_PIN
	applymovement2 LOCALID_ROUTE22_SILVER, Common_Movement_ExclamationMark
	delay 60
	msgbox Route22_Text_Silver6, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_ROUTE22_SILVER, Common_Movement_WalkRight1
	applymovement2 OBJ_EVENT_ID_PLAYER, Route22_Movement_PlayerPushed
	applymovement2 OBJ_EVENT_ID_FOLLOWER, Route22_Movement_CelebiPush
	playse SE_LEDGE
	waitmovement LOCALID_ROUTE22_SILVER
	waitmovement OBJ_EVENT_ID_PLAYER
	waitmovement OBJ_EVENT_ID_FOLLOWER
	waitse
	applymovement2 LOCALID_ROUTE22_SILVER, Route22_Movement_SilverFinishLeave
	waitmovement 0
	setflag FLAG_HIDE_ROUTE22_GIOVANNI_SILVER
	removeobject LOCALID_ROUTE22_SILVER
	removeobject LOCALID_ROUTE22_GIOVANNI

	applymovement2 OBJ_EVENT_ID_FOLLOWER, Route22_Movement_CelebiBegin
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	waitmovement 0
	playse SE_PIN
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	delay 60
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	delay 20
	playse SE_PIN
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	delay 60
	applymovement2 OBJ_EVENT_ID_FOLLOWER, Route22_Movement_CelebiSpin1
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	@playse SE_M_PETAL_DANCE
	@delay 10
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitmovement 0
	fadescreenswapbuffers FADE_TO_WHITE
	playse SE_M_TELEPORT
	waitse
	delay 60
	playse SE_M_TELEPORT
	waitse
	fadedefaultbgm
	fadescreenswapbuffers FADE_FROM_WHITE
	setvar VAR_ROUTE22_GIOVANNI_STATE, 2
	setvar VAR_TEMP_0, 2
	release
	end



Route22_Movement_PlayerPushed:
	lock_facing_direction
	jump_up
	unlock_facing_direction
	step_end

Route22_EventScript_PlayerFaceSouth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	return

Route22_EventScript_PlayerFaceWest::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	return
	
Route22_EventScript_PlayerFaceNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return
	
Route22_EventScript_PlayerFaceEast::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	return
	
Route22_Movement_CameraPanLeft:
	walk_up
	walk_left
	walk_left
	step_end

Route22_Movement_CameraPanRight:
	walk_down
	walk_right
	walk_right
	step_end

Route22_Movement_WalkInPlaceLeft:
	walk_in_place_left
	step_end

Route22_Movement_WalkInPlaceRight:
	walk_in_place_right
	step_end

Route22_Movement_GiovanniLeave:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route22_Movement_SilverStartLeave:
	walk_fast_down
	jump_2_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route22_Movement_SilverFinishLeave:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route22_Movement_CelebiBegin:
	jump_in_place_left
	jump_in_place_left
	step_end

Route22_Movement_CelebiSpin1:
	jump_in_place_left
	jump_in_place_left
	jump_in_place_left
	jump_in_place_left
	step_end

Route22_Movement_CelebiPush:
	walk_up
	face_down
	walk_in_place_down
	step_end


Route22_Text_Silver1:
	.string "SILBER: Du hast mir gesagt...\n"
	.string "du wärst der Beste der ganzen Welt!\p"
	.string "Willst du jetzt aufgeben?\p"
	.string "Was wirst du nun tun?$"

Route22_Text_Giovanni1:
	.string "....................\p"
	.string "Giovanni: Man muss eine Niederlage\n"
	.string "akzeptieren, bevor man weitermacht...\n"
	.string "\p"
	.string "Ich werde vorerst allein\n"
	.string "weitermachen... \p"
	.string "Damit ich eines Tages eine noch\n"
	.string "stärkere Organisation formen kann!$"

Route22_Text_Silver2:
	.string "SILBER: Was war denn an dir\n"
	.string "am besten?\p"
	.string "So viele zu versammeln, nur um\n"
	.string "von einem Kind besiegt zu werden!$"

Route22_Text_Giovanni2:
	.string "Giovanni: Das Potenzial vieler zu\n"
	.string "nutzen, so erzeugt man große Kraft...\n"
	.string "\p"
	.string "Das ist der Sinn einer Organisation...\n"
	.string "\p"
	.string "Das ist die Stärke von Organisationen.\n"
	.string "\p"
	.string "Ich habe versagt... das Potenzial\n"
	.string "meiner Untergebenen optimal zu\n"
	.string "nutzen... \p"
	.string "Doch du wirst eines Tages die\n"
	.string "Auferstehung von mir und TEAM ROCKET\l"
	.string "sehen!$"

Route22_Text_Silver3:
	.string "SILBER: Ich verstehe dich nicht!\p"
	.string "Du machst keinen Sinn!$"

Route22_Text_Giovanni3:
	.string ".......................\p"
	.string "Giovanni: Eines Tages wirst du\n"
	.string "verstehen.$"

Route22_Text_Silver4:
	.string "SILBER: Ich will dich nicht\n"
	.string "verstehen!\p"
	.string "Ich werde niemals so werden wie du.\p"
	.string "Feige, wenn du allein bist,\n"
	.string "und ein Tyrann vor anderen Feiglingen!\n"
	.string "\p"
	.string "Ich werde stark!\p"
	.string "Ich werde ein noch stärkerer Mann\n"
	.string "allein durch meine Kraft!$"

Route22_Text_Silver5:
	.string "ALLEIN!$"

Route22_Text_Silver6:
	.string "SILBER: ...Wieso starrst du?$"

