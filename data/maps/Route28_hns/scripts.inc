Route28_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route28_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route28_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route28_EventScript_Sign::
	msgbox Route28_Text_Sign, MSGBOX_SIGN
	end

Route28_EventScript_Item_Flamethrower::
    finditem ITEM_TM_FLAMETHROWER
    end

Route28_Text_Sign:
	.string "Route 28$"

Route28_EventScript_Trigger_Scientist::
	lock
	clearflag FLAG_HIDE_ROUTE28_SCIENTIST
	addobject LOCALID_ROUTE28_SCIENTIST
	special SpawnCameraObject
	applymovement2 OBJ_EVENT_ID_CAMERA, Route28_Movement_CameraPanDown
	waitmovement OBJ_EVENT_ID_CAMERA
	playse SE_POKENAV_CALL
	waitse
	msgbox Route28_Text_Scientist, MSGBOX_DEFAULT
	playse SE_POKENAV_HANG_UP
	msgbox Route28_Text_Scientist2, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_ROUTE28_SCIENTIST, Route28_Movement_ScientistLeave
	waitmovement LOCALID_ROUTE28_SCIENTIST
	applymovement2 OBJ_EVENT_ID_CAMERA, Route28_Movement_CameraPanUp
	waitmovement OBJ_EVENT_ID_CAMERA
	special RemoveCameraObject
	setvar VAR_ROUTE28_SCIENTIST, 2
	setflag FLAG_HIDE_ROUTE28_SCIENTIST
	removeobject LOCALID_ROUTE28_SCIENTIST
	release
	end

Route28_Movement_CameraPanDown:
	walk_down
	walk_down
	walk_down
	walk_diag_southwest
	walk_diag_southwest
	step_end

Route28_Movement_CameraPanUp:
	walk_diag_northeast
	walk_diag_northeast
	walk_up
	walk_up
	walk_up
	step_end

Route28_Movement_ScientistLeave:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route28_Text_Scientist:
	.string "Hiho, Boss.\p"
	.string "Ja, Ich fand einige Artefakte,\n"
	.string "aber keine Spur von der Azurflöte.\p"
	.string "Vielleicht ist sie im Berg, aber\n"
	.string "die wilden Pokémon sind stark,\l"
	.string "und mein Team braucht eine Pause...\p"
	.string "..................\p"
	.string "Es bricht ab...\l"
	.string "Boss....?\p"
	.string "Ich gehe ins Pokémon-Center.\p"
	.string "Ich rufe an, wenn ich die Flöte finde.$"

Route28_Text_Scientist2:
	.string ".......KLICK\p"
	.string "Das Signal in SINJOH ist schlecht...$"

