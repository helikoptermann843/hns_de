TohjoFalls_GiovanniRoom_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TohjoFalls_GiovanniRoom_OnTransition
	.byte 0

TohjoFalls_GiovanniRoom_OnTransition::
	specialvar VAR_RESULT, CheckCelebi
	goto_if_eq VAR_RESULT, TRUE, TohjoFalls_GiovanniRoom_SetScene
	setvar VAR_TOHJO_FALLS_GIOVANNI_STATE, 0
	end

TohjoFalls_GiovanniRoom_SetScene::
	setflag FLAG_HIDE_TOHJO_GIOVANNI
	goto_if_ne VAR_TOHJO_FALLS_GIOVANNI_STATE, 0, TohjoFalls_GiovanniRoom_DoNothing
	setvar VAR_TOHJO_FALLS_GIOVANNI_STATE, 1
	end

TohjoFalls_GiovanniRoom_DoNothing::
	end

TohjoFalls_GiovanniRoom_EventScript_Radio::
	msgbox TohjoFalls_GiovanniRoom_Text_RadioObject, MSGBOX_SIGN
	end

TohjoFalls_GiovanniRoom_Text_RadioObject::
	.string "A radio...\n"
	.string "The battery is dead...$"

TohjoFalls_GiovanniRoom_CancelScene::
	setvar VAR_TOHJO_FALLS_GIOVANNI_STATE, 0
	end

TohjoFalls_EventScript_GiovanniSceneRight::
	specialvar VAR_RESULT, CheckCelebi
	goto_if_eq VAR_RESULT, FALSE, TohjoFalls_GiovanniRoom_CancelScene
	lock
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	goto TohjoFalls_EventScript_GiovanniScene

TohjoFalls_EventScript_GiovanniSceneLeft::
	specialvar VAR_RESULT, CheckCelebi
	goto_if_eq VAR_RESULT, FALSE, TohjoFalls_GiovanniRoom_CancelScene
	lock
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	goto TohjoFalls_EventScript_GiovanniScene

TohjoFalls_EventScript_GiovanniScene::
	specialvar VAR_RESULT, CheckCelebi
	goto_if_eq VAR_RESULT, FALSE, TohjoFalls_GiovanniRoom_CancelScene
	lock
	applymovement2 OBJ_EVENT_ID_FOLLOWER, TohjoFalls_Movement_CelebiBegin
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	waitmovement 0
	playse SE_PIN
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	delay 60
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	delay 20
	playse SE_PIN
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	delay 60
	applymovement2 OBJ_EVENT_ID_FOLLOWER, TohjoFalls_Movement_CelebiSpin
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
	fadescreen FADE_TO_WHITE
	playse SE_M_TELEPORT
	waitse
	delay 60
	playse SE_M_TELEPORT
	waitse
	clearflag FLAG_HIDE_TOHJO_GIOVANNI
	addobject LOCALID_TOHJOFALLS_GIOVANNI
	waitse
	playbgm MUS_HG_RADIO_ROCKET, TRUE
	fadescreen FADE_FROM_WHITE
	delay 50
	turnobject  OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox TohjoFalls_GiovanniRoom_Text_Radio, MSGBOX_DEFAULT
	closemessage
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	applymovement2 OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp1
	waitmovement 0
	waitmovement OBJ_EVENT_ID_FOLLOWER
	playse SE_PIN
	applymovement2 LOCALID_TOHJOFALLS_GIOVANNI, Common_Movement_ExclamationMark
	delay 60
	turnobject LOCALID_TOHJOFALLS_GIOVANNI, DIR_SOUTH
	msgbox TohjoFalls_GiovanniRoom_Text_GiovanniIntro, MSGBOX_DEFAULT
	applymovement2 LOCALID_TOHJOFALLS_GIOVANNI, Common_Movement_WalkDown1
	waitmovement 0
	msgbox TohjoFalls_GiovanniRoom_Text_GiovanniBeforeBattle, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GIOVANNI_HNS, TohjoFalls_GiovanniRoom_Text_GiovanniDefeat
	playbgm MUS_HG_RADIO_ROCKET, TRUE
	applymovement2 LOCALID_TOHJOFALLS_GIOVANNI, TohjoFalls_Movement_GiovanniTakenAback
	waitmovement 0
	msgbox TohjoFalls_GiovanniRoom_Text_GiovanniAfter, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_TOHJOFALLS_GIOVANNI, TohjoFalls_Movement_GiovanniLeave
	waitmovement 0 
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_TOHJOFALLS_GIOVANNI
	playse SE_EXIT
	fadescreen FADE_FROM_BLACK
	delay 30

	applymovement2 OBJ_EVENT_ID_FOLLOWER, TohjoFalls_Movement_CelebiBegin
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	waitmovement 0
	playse SE_PIN
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	delay 60
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	delay 20
	playse SE_PIN
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	delay 60
	applymovement2 OBJ_EVENT_ID_FOLLOWER, TohjoFalls_Movement_CelebiSpin
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
	fadescreen FADE_TO_WHITE
	playse SE_M_TELEPORT
	waitse
	delay 60
	playse SE_M_TELEPORT
	waitse
	fadedefaultbgm
	fadescreen FADE_FROM_WHITE
	setvar VAR_TOHJO_FALLS_GIOVANNI_STATE, 2
	release
	end

TohjoFalls_Movement_CelebiBegin:
	jump_in_place_up
	jump_in_place_up
	step_end

TohjoFalls_Movement_CelebiSpin:
	jump_in_place_up
	jump_in_place_up
	jump_in_place_up
	jump_in_place_up
	step_end

TohjoFalls_Movement_GiovanniTakenAback:
	lock_facing_direction
	walk_slow_up
	unlock_facing_direction
	walk_slow_right
	walk_slow_right
	step_end

TohjoFalls_Movement_GiovanniLeave:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	face_down
	walk_in_place_down
	step_end

TohjoFalls_GiovanniRoom_Text_Radio:
	.string "RADIO: ... ...\n"
	.string "Ahem, wir sind TEAM ROCKET!\p"
	.string "Nach drei Jahren Vorbereitung\n"
	.string "steigen wir wieder aus der Asche!\p"
	.string "Giovanni! Hörst du uns?\p"
	.string "Wir haben es geschafft!\p"
	.string "Wo ist unser Boss?\n"
	.string "Hört er zu?$"

TohjoFalls_GiovanniRoom_Text_GiovanniIntro:
	.string "Giovanni: ...\p"
	.string "Ich weiß nicht, warum du hier\n"
	.string "hergekommen bist.\p"
	.string "Jedenfalls muss ich dich warnen,\n"
	.string "dies ist kein Ort für Kinder wie dich.\p"
	.string "Du hast einen bestimmten Blick.\p"
	.string "Er erinnert mich an das Kind, das\n"
	.string "vor drei Jahren vor mir stand...\p"
	.string "Du hast die gleichen Augen...\p"
	.string "...\p"
	.string "Ich bin auf dem Weg nach Dukatia City,\n"
	.string "um meinem Team beizutreten.\l"
	.string "Willst du mir im Weg stehen?$"

TohjoFalls_GiovanniRoom_Text_GiovanniBeforeBattle:
	.string "Meine alten Gefährten brauchen mich...\n"
	.string "Wir werden den Fehler von vor drei\l"
	.string "Jahren nicht wiederholen!$"

TohjoFalls_GiovanniRoom_Text_GiovanniDefeat:
	.string "Was bist du überhaupt?$"

TohjoFalls_GiovanniRoom_Text_GiovanniAfter:
	.string "Giovanni: Wie ist das möglich...?\n"
	.string "Die letzten drei Jahre waren\l"
	.string "verschwendet...?\p"
	.string "Wie kann ein Kind wie du meinen\n"
	.string "Traum erneut zerstören?\p"
	.string "Der kostbare Traum von TEAM ROCKET\n"
	.string "ist kaum mehr als eine Illusion...$"
