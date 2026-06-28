AzaleaTown_Gym_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AzaleaTown_Gym_OnTransition
	.byte 0

AzaleaTown_Gym_OnTransition::
	setflag FLAG_HIDE_AZALEA_ARIADOS_LEFT
	setflag FLAG_HIDE_AZALEA_ARIADOS_MID
	setflag FLAG_HIDE_AZALEA_ARIADOS_RIGHT
	end

@ 1-8->5,  5-9->1
AzaleaTown_Gym_EventScript_Trigger_1::
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	clearflag FLAG_HIDE_AZALEA_ARIADOS_LEFT
	addobject LOCALID_AZALEA_ARIADOS_LEFT1
	SetObjectSubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS, 0
	applymovement LOCALID_AZALEA_ARIADOS_LEFT1, AzaleaTown_Gym_Movement_Ariados_Down
	waitmovement 0
	turnobject LOCALID_AZALEA_ARIADOS_LEFT1, DIR_NORTH
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpUp1
	playse SE_LEDGE
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_LEFT1, AzaleaTown_Gym_Movement_Ariados_Up
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Up
	waitmovement 0
	waitmovement 0
	@turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	applymovement LOCALID_AZALEA_ARIADOS_LEFT1, AzaleaTown_Gym_Movement_Ariados_Right
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Right
	waitmovement 0
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	applymovement LOCALID_AZALEA_ARIADOS_LEFT1, AzaleaTown_Gym_Movement_Ariados_Up
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Up
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpUp1
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_LEFT1, AzaleaTown_Gym_Movement_Ariados_Down
	waitmovement 0
	setflag FLAG_HIDE_AZALEA_ARIADOS_LEFT
	removeobject LOCALID_AZALEA_ARIADOS_LEFT1
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS
	release
	end

AzaleaTown_Gym_EventScript_Trigger_5::
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	clearflag FLAG_HIDE_AZALEA_ARIADOS_MID
	addobject LOCALID_AZALEA_ARIADOS_MID1
	SetObjectSubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS, 0
	applymovement LOCALID_AZALEA_ARIADOS_MID1, AzaleaTown_Gym_Movement_Ariados_Up
	waitmovement 0
	turnobject LOCALID_AZALEA_ARIADOS_MID1, DIR_SOUTH
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpDown1
	playse SE_LEDGE
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_MID1, AzaleaTown_Gym_Movement_Ariados_Down
	delay 3
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Down
	waitmovement 0
	waitmovement 0
	@turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	applymovement LOCALID_AZALEA_ARIADOS_MID1, AzaleaTown_Gym_Movement_Ariados_Left
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Left
	waitmovement 0
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	applymovement LOCALID_AZALEA_ARIADOS_MID1, AzaleaTown_Gym_Movement_Ariados_Down
	delay 3
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpDown1
	playse SE_LEDGE
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_MID1, AzaleaTown_Gym_Movement_Ariados_Up
	waitmovement 0
	setflag FLAG_HIDE_AZALEA_ARIADOS_MID
	removeobject LOCALID_AZALEA_ARIADOS_MID1
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS
	release
	end

@ 2-9->6,  6-10->2
AzaleaTown_Gym_EventScript_Trigger_2::
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	clearflag FLAG_HIDE_AZALEA_ARIADOS_MID
	addobject LOCALID_AZALEA_ARIADOS_MID1
	SetObjectSubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS, 0
	applymovement LOCALID_AZALEA_ARIADOS_MID1, AzaleaTown_Gym_Movement_Ariados_Down
	waitmovement 0
	turnobject LOCALID_AZALEA_ARIADOS_MID1, DIR_NORTH
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpUp1
	playse SE_LEDGE
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_MID1, AzaleaTown_Gym_Movement_Ariados_Up
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Up
	waitmovement 0
	waitmovement 0
	@turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	applymovement LOCALID_AZALEA_ARIADOS_MID1, AzaleaTown_Gym_Movement_Ariados_Right
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Right
	waitmovement 0
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	applymovement LOCALID_AZALEA_ARIADOS_MID1, AzaleaTown_Gym_Movement_Ariados_Up
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Up
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpUp1
	playse SE_LEDGE
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_MID1, AzaleaTown_Gym_Movement_Ariados_Down
	waitmovement 0
	setflag FLAG_HIDE_AZALEA_ARIADOS_MID
	removeobject LOCALID_AZALEA_ARIADOS_MID1
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS
	release
	end

AzaleaTown_Gym_EventScript_Trigger_6::
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	clearflag FLAG_HIDE_AZALEA_ARIADOS_RIGHT
	addobject LOCALID_AZALEA_ARIADOS_RIGHT1
	SetObjectSubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS, 0
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT1, AzaleaTown_Gym_Movement_Ariados_Up
	waitmovement 0
	turnobject LOCALID_AZALEA_ARIADOS_RIGHT1, DIR_SOUTH
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpDown1
	playse SE_LEDGE
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT1, AzaleaTown_Gym_Movement_Ariados_Down
	delay 3
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Down
	waitmovement 0
	waitmovement 0
	@turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT1, AzaleaTown_Gym_Movement_Ariados_Left
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Left
	waitmovement 0
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT1, AzaleaTown_Gym_Movement_Ariados_Down
	delay 3
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpDown1
	playse SE_LEDGE
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT1, AzaleaTown_Gym_Movement_Ariados_Up
	waitmovement 0
	setflag FLAG_HIDE_AZALEA_ARIADOS_RIGHT
	removeobject LOCALID_AZALEA_ARIADOS_RIGHT1
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS
	release
	end

@ 3-10->4,  4-8->3
AzaleaTown_Gym_EventScript_Trigger_3::
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	clearflag FLAG_HIDE_AZALEA_ARIADOS_RIGHT
	addobject LOCALID_AZALEA_ARIADOS_RIGHT1
	SetObjectSubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS, 0
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT1, AzaleaTown_Gym_Movement_Ariados_Down
	waitmovement 0
	turnobject LOCALID_AZALEA_ARIADOS_RIGHT1, DIR_NORTH
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpUp1
	playse SE_LEDGE
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT1, AzaleaTown_Gym_Movement_Ariados_Up
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Up
	waitmovement 0
	waitmovement 0
	@turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT1, AzaleaTown_Gym_Movement_Ariados_Left
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Left
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT1, AzaleaTown_Gym_Movement_Ariados_Left
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Left
	waitmovement 0
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT1, AzaleaTown_Gym_Movement_Ariados_Up
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Up
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpUp1
	playse SE_LEDGE
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT1, AzaleaTown_Gym_Movement_Ariados_Down
	waitmovement 0
	setflag FLAG_HIDE_AZALEA_ARIADOS_RIGHT
	removeobject LOCALID_AZALEA_ARIADOS_RIGHT1
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS
	release
	end

AzaleaTown_Gym_EventScript_Trigger_4::
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	clearflag FLAG_HIDE_AZALEA_ARIADOS_LEFT
	addobject LOCALID_AZALEA_ARIADOS_LEFT1
	SetObjectSubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS, 0
	applymovement LOCALID_AZALEA_ARIADOS_LEFT1, AzaleaTown_Gym_Movement_Ariados_Up
	waitmovement 0
	turnobject LOCALID_AZALEA_ARIADOS_LEFT1, DIR_SOUTH
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpDown1
	playse SE_LEDGE
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_LEFT1, AzaleaTown_Gym_Movement_Ariados_Down
	delay 3
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Down
	waitmovement 0
	waitmovement 0
	@turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	applymovement LOCALID_AZALEA_ARIADOS_LEFT1, AzaleaTown_Gym_Movement_Ariados_Right
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Right
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_LEFT1, AzaleaTown_Gym_Movement_Ariados_Right
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Right
	waitmovement 0
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	applymovement LOCALID_AZALEA_ARIADOS_LEFT1, AzaleaTown_Gym_Movement_Ariados_Down
	delay 3
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpDown1
	playse SE_LEDGE
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_LEFT1, AzaleaTown_Gym_Movement_Ariados_Up
	waitmovement 0
	setflag FLAG_HIDE_AZALEA_ARIADOS_LEFT
	removeobject LOCALID_AZALEA_ARIADOS_LEFT1
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS
	release
	end

@ 7-11->10,  10-11->7
AzaleaTown_Gym_EventScript_Trigger_7::
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	clearflag FLAG_HIDE_AZALEA_ARIADOS_LEFT
	addobject LOCALID_AZALEA_ARIADOS_LEFT2
	SetObjectSubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS, 0
	applymovement LOCALID_AZALEA_ARIADOS_LEFT2, AzaleaTown_Gym_Movement_Ariados_Down
	waitmovement 0
	turnobject LOCALID_AZALEA_ARIADOS_LEFT2, DIR_NORTH
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpUp1
	playse SE_LEDGE
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_LEFT2, AzaleaTown_Gym_Movement_Ariados_Up
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Up
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_LEFT2, AzaleaTown_Gym_Movement_Ariados_Up
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Up
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpUp1
	playse SE_LEDGE
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_LEFT2, AzaleaTown_Gym_Movement_Ariados_Down
	waitmovement 0
	setflag FLAG_HIDE_AZALEA_ARIADOS_LEFT
	removeobject LOCALID_AZALEA_ARIADOS_LEFT2
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS
	release
	end

AzaleaTown_Gym_EventScript_Trigger_10::
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	clearflag FLAG_HIDE_AZALEA_ARIADOS_LEFT
	addobject LOCALID_AZALEA_ARIADOS_LEFT2
	SetObjectSubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS, 0
	applymovement LOCALID_AZALEA_ARIADOS_LEFT2, AzaleaTown_Gym_Movement_Ariados_Up
	waitmovement 0
	turnobject LOCALID_AZALEA_ARIADOS_LEFT2, DIR_SOUTH
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpDown1
	playse SE_LEDGE
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_LEFT2, AzaleaTown_Gym_Movement_Ariados_Down
	delay 3
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Down
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_LEFT2, AzaleaTown_Gym_Movement_Ariados_Down
	delay 3
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpDown1
	playse SE_LEDGE
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_LEFT2, AzaleaTown_Gym_Movement_Ariados_Up
	waitmovement 0
	setflag FLAG_HIDE_AZALEA_ARIADOS_LEFT
	removeobject LOCALID_AZALEA_ARIADOS_LEFT2
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS
	release
	end


@ 8-12->12,  12-13->8
AzaleaTown_Gym_EventScript_Trigger_8::
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	clearflag FLAG_HIDE_AZALEA_ARIADOS_MID
	addobject LOCALID_AZALEA_ARIADOS_MID2
	SetObjectSubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS, 0
	applymovement LOCALID_AZALEA_ARIADOS_MID2, AzaleaTown_Gym_Movement_Ariados_Down
	waitmovement 0
	turnobject LOCALID_AZALEA_ARIADOS_MID2, DIR_NORTH
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpUp1
	playse SE_LEDGE
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_MID2, AzaleaTown_Gym_Movement_Ariados_Up
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Up
	waitmovement 0
	waitmovement 0
	@turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	applymovement LOCALID_AZALEA_ARIADOS_MID2, AzaleaTown_Gym_Movement_Ariados_Right
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Right
	waitmovement 0
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	applymovement LOCALID_AZALEA_ARIADOS_MID2, AzaleaTown_Gym_Movement_Ariados_Up
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Up
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpUp1
	playse SE_LEDGE
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_MID2, AzaleaTown_Gym_Movement_Ariados_Down
	waitmovement 0
	setflag FLAG_HIDE_AZALEA_ARIADOS_MID
	removeobject LOCALID_AZALEA_ARIADOS_MID2
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS
	release
	end

AzaleaTown_Gym_EventScript_Trigger_12::
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	clearflag FLAG_HIDE_AZALEA_ARIADOS_RIGHT
	addobject LOCALID_AZALEA_ARIADOS_RIGHT2
	SetObjectSubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS, 0
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT2, AzaleaTown_Gym_Movement_Ariados_Up
	waitmovement 0
	turnobject LOCALID_AZALEA_ARIADOS_RIGHT2, DIR_SOUTH
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpDown1
	playse SE_LEDGE
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT2, AzaleaTown_Gym_Movement_Ariados_Down
	delay 3
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Down
	waitmovement 0
	waitmovement 0
	@turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT2, AzaleaTown_Gym_Movement_Ariados_Left
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Left
	waitmovement 0
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT2, AzaleaTown_Gym_Movement_Ariados_Down
	delay 3
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpDown1
	playse SE_LEDGE
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT2, AzaleaTown_Gym_Movement_Ariados_Up
	waitmovement 0
	setflag FLAG_HIDE_AZALEA_ARIADOS_RIGHT
	removeobject LOCALID_AZALEA_ARIADOS_RIGHT2
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS
	release
	end

@ 9-13->11,  11-12->9
AzaleaTown_Gym_EventScript_Trigger_9::
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	clearflag FLAG_HIDE_AZALEA_ARIADOS_RIGHT
	addobject LOCALID_AZALEA_ARIADOS_RIGHT2
	SetObjectSubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS, 0
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT2, AzaleaTown_Gym_Movement_Ariados_Down
	waitmovement 0
	turnobject LOCALID_AZALEA_ARIADOS_RIGHT2, DIR_NORTH
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpUp1
	playse SE_LEDGE
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT2, AzaleaTown_Gym_Movement_Ariados_Up
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Up
	waitmovement 0
	waitmovement 0
	@turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT2, AzaleaTown_Gym_Movement_Ariados_Left
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Left
	waitmovement 0
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT2, AzaleaTown_Gym_Movement_Ariados_Up
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Up
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpUp1
	playse SE_LEDGE
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_RIGHT2, AzaleaTown_Gym_Movement_Ariados_Down
	waitmovement 0
	setflag FLAG_HIDE_AZALEA_ARIADOS_RIGHT
	removeobject LOCALID_AZALEA_ARIADOS_RIGHT2
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS
	release
	end

AzaleaTown_Gym_EventScript_Trigger_11::
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	clearflag FLAG_HIDE_AZALEA_ARIADOS_MID
	addobject LOCALID_AZALEA_ARIADOS_MID2
	SetObjectSubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS, 0
	applymovement LOCALID_AZALEA_ARIADOS_MID2, AzaleaTown_Gym_Movement_Ariados_Up
	waitmovement 0
	turnobject LOCALID_AZALEA_ARIADOS_MID2, DIR_SOUTH
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpDown1
	playse SE_LEDGE
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_MID2, AzaleaTown_Gym_Movement_Ariados_Down
	delay 3
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Down
	waitmovement 0
	waitmovement 0
	@turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	applymovement LOCALID_AZALEA_ARIADOS_MID2, AzaleaTown_Gym_Movement_Ariados_Right
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Right
	waitmovement 0
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	applymovement LOCALID_AZALEA_ARIADOS_MID2, AzaleaTown_Gym_Movement_Ariados_Down
	delay 3
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Gym_Movement_Player_Down
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpDown1
	playse SE_LEDGE
	waitmovement 0
	applymovement LOCALID_AZALEA_ARIADOS_MID2, AzaleaTown_Gym_Movement_Ariados_Up
	waitmovement 0
	setflag FLAG_HIDE_AZALEA_ARIADOS_MID
	removeobject LOCALID_AZALEA_ARIADOS_MID2
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_AZALEA_TOWN_GYM_HNS
	release
	end

AzaleaTown_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_BADGE02_GET, AzaleaTown_Gym_EventScript_GymGuy2
	msgbox AzaleaTown_Gym_Text_GymGuide, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_Gym_EventScript_GymGuy2::
	msgbox AzaleaTown_Gym_Text_GymGuideWin, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_Gym_EventScript_Al::
	trainerbattle_single TRAINER_AL_HNS, AzaleaTown_Gym_Text_BugCatcherAlSeen, AzaleaTown_Gym_Text_BugCatcherAlBeaten
	msgbox AzaleaTown_Gym_Text_BugCatcherAlAfter, MSGBOX_AUTOCLOSE
	end

AzaleaTown_Gym_EventScript_Josh::
	trainerbattle_single TRAINER_JOSH_HNS, AzaleaTown_Gym_Text_BugCatcherJoshSeen, AzaleaTown_Gym_Text_BugCatcherJoshBeaten
	msgbox AzaleaTown_Gym_Text_BugCatcherJoshAfter, MSGBOX_AUTOCLOSE
	end

AzaleaTown_Gym_EventScript_Benny::
	trainerbattle_single TRAINER_BENNY_HNS, AzaleaTown_Gym_Text_BugCatcherBennySeen, AzaleaTown_Gym_Text_BugCatcherBennyBeaten
	msgbox AzaleaTown_Gym_Text_BugCatcherBennyAfter, MSGBOX_AUTOCLOSE
	end

AzaleaTown_Gym_EventScript_Amy::
	trainerbattle_double TRAINER_AMY_AND_MAY_HNS, AzaleaTown_Gym_Text_TwinsAmyMay1Seen, AzaleaTown_Gym_Text_TwinsAmyMay1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox AzaleaTown_Gym_Text_TwinsAmyMay1After, MSGBOX_DEFAULT
	release
	end
	
AzaleaTown_Gym_EventScript_May::
	trainerbattle_double TRAINER_AMY_AND_MAY_HNS, AzaleaTown_Gym_Text_TwinsAmyMay2Seen, AzaleaTown_Gym_Text_TwinsAmyMay2Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox AzaleaTown_Gym_Text_TwinsAmyMay2After, MSGBOX_DEFAULT
	release
	end

AzaleaTown_Gym_EventScript_Bugsy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_AZALEA_TOWN_GYM, AzaleaTown_Gym_EventScript_Bugsy_Defeated
	msgbox AzaleaTown_Gym_Text_BugsyIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BUGSY_1_HNS, AzaleaTown_Gym_Text_BugsyBeaten
	message AzaleaTown_Gym_Text_ReceivedHiveBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox AzaleaTown_Gym_Text_HiveBadgeSpeech, MSGBOX_DEFAULT
	setflag FLAG_BADGE02_GET
	setflag FLAG_DEFEATED_AZALEA_TOWN_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 2
	call Common_EventScript_SetGymTrainers_hns
	giveitem ITEM_TM_U_TURN
	msgbox AzaleaTown_Gym_Text_FuryCutterSpeech, MSGBOX_DEFAULT
	setvar VAR_AZALEA_TOWN_STATE, 5
	closemessage
	setflag FLAG_HIDE_AZALEA_TOWN_FARFETCHD
	setflag FLAG_GET_HEADBUTT
	clearflag FLAG_HIDE_ILEX_FOREST_APPRENTICE
	clearflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_1
	release
	end

AzaleaTown_Gym_EventScript_Bugsy_Defeated::
	msgbox AzaleaTown_Gym_Text_BugsyAdvice, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_Gym_Movement_Ariados_Down:
	delay_8
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

AzaleaTown_Gym_Movement_Ariados_Up:
	delay_8
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

AzaleaTown_Gym_Movement_Ariados_Right:
	lock_facing_direction
	delay_8
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	unlock_facing_direction
	step_end

AzaleaTown_Gym_Movement_Ariados_Left:
	lock_facing_direction
	delay_8
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	unlock_facing_direction
	step_end

AzaleaTown_Gym_Movement_Player_Down:
	lock_anim
	delay_8
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	unlock_anim
	unlock_facing_direction
	step_end

AzaleaTown_Gym_Movement_Player_Up:
	lock_anim
	delay_8
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	unlock_anim
	unlock_facing_direction
	step_end

AzaleaTown_Gym_Movement_Player_Right:
	lock_facing_direction
	lock_anim
	delay_8
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	unlock_anim
	unlock_facing_direction
	step_end

AzaleaTown_Gym_Movement_Player_Left:
	lock_facing_direction
	lock_anim
	delay_8
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	unlock_anim
	unlock_facing_direction
	step_end

AzaleaTown_Gym_EventScript_Statue::
	lock
	goto_if_set FLAG_DEFEATED_AZALEA_TOWN_GYM, AzaleaTown_Gym_EventScript_Statue2
	msgbox AzaleaTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_Gym_EventScript_Statue2::
	msgbox AzaleaTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_Gym_Text_GymStatue:
	.string "Azalea Pokémon Arena$"

AzaleaTown_Gym_Text_GymStatueCertified:
	.string "Azalea City Pokémon Arena\p"
	.string "Kai's zertifizierte Trainer:\n"
	.string "{PLAYER}$"

AzaleaTown_Gym_Text_BugsyIntro:
	.string "Ich bin Kai!\p"
	.string "Ich verliere nie, wenn es\n"
	.string "um Käfer Pokémon geht.\p"
	.string "Meine Forschungen machen mich zu\n"
	.string "einer Autorität auf diesem Gebiet!\p"
	.string "Wusstest du zum Beispiel, dass\n"
	.string "die Attacke Zerschneider\l"
	.string "eigentlich eine Käfer-Attacke ist?\p"
	.string "Lass mich demonstrieren\n"
	.string "was ich gelernt habe!$"

AzaleaTown_Gym_Text_BugsyBeaten:
	.string "Erstaunlich!\n"
	.string "Du bist ein wahrer Pokémonexperte.\p"
	.string "Meine Forschungen sind noch\n"
	.string "nicht abgeschlossen.\p"
	.string "OK, du gewinnst.\n"
	.string "Nimm diesen Orden.$"

AzaleaTown_Gym_Text_ReceivedHiveBadge:
	.string "{PLAYER} erhält Insektenorden.$"

AzaleaTown_Gym_Text_HiveBadgeSpeech:
	.string "Kennst du die Vorteile\n"
	.string "des Insektenordens?\p"
	.string "Wenn du ihn hast, gehorchen Pokémon\n"
	.string "bis Level 30, sogar getauschte.\p"
	.string "Pokémon, die Zerschneider können,\n"
	.string "werden es auch außerhalb des Kampfes\l"
	.string "nutzen können.\p"
	.string "Hier, ich möchte auch, dass du\n"
	.string "dies bekommst.$"

AzaleaTown_Gym_Text_FuryCutterSpeech:
	.string "TM09 enthält Kugelsaat.\p"
	.string "Es schleudert jede Runde zwischen\n"
	.string "2 und 5 Samen hintereinander.\p"
	.string "Auch wenn die Stärke 25 beträgt,\n"
	.string "ist sie in Wirklichkeit zwischen 50\l"
	.string "und 125!\p"
	.string "Ist das nicht großartig?\n"
	.string "Ich habe es entdeckt!$"

AzaleaTown_Gym_Text_BugsyAdvice:
	.string "Käfer-Pokémon sind ein weites Gebiet.\p"
	.string "Es gibt noch viele Geheimnisse\n"
	.string "zu ergründen. Studiere gründlich!$"

AzaleaTown_Gym_Text_BugsyRematch:
	.string "Wow, du bist JOHTO CHAMPION!\p"
	.string "Du hast außerordentliche Fähigkeiten!\p"
	.string "Ich war beschäftigt mit Studien.\p"
	.string "Lass mich dir meine Entdeckungen\n"
	.string "zeigen.\p"
	.string "Bist du bereit zu kämpfen?$"

AzaleaTown_Gym_Text_BugsyRematchDefeat:
	.string "Wow, du bist ein Experte.\n"
	.string "Meine Studien gehen wohl weiter...$"

AzaleaTown_Gym_Text_BugCatcherBennySeen:
	.string "Käfer-Pokémon entwickeln sich jung.\n"
	.string "Sie werden schnell stärker.$"

AzaleaTown_Gym_Text_BugCatcherBennyBeaten:
	.string "Nur entwickeln reicht nicht!$"

AzaleaTown_Gym_Text_BugCatcherBennyAfter:
	.string "Pokémon werden stärker\n"
	.string "wenn sie sich entwickeln. Wirklich!$"

AzaleaTown_Gym_Text_BugCatcherAlSeen:
	.string "Käfer-Pokémon sind cool und tough!\n"
	.string "Ich beweise es dir!$"

AzaleaTown_Gym_Text_BugCatcherAlBeaten:
	.string "Du hast gezeigt wie tough du bist…$"

AzaleaTown_Gym_Text_BugCatcherAlAfter:
	.string "Sie sind so cool, aber die meisten\n"
	.string "Mädchen mögen keine Käfer-Pokémon.\p"
	.string "Ich weiß nicht warum…$"

AzaleaTown_Gym_Text_BugCatcherJoshSeen:
	.string "Du hast die Flegmon gerettet?\n"
	.string "Oh Mann, du bist stark!\p"
	.string "Aber meine ausgewachsenen Pokémon\n"
	.string "sind auch sehr stark!$"

AzaleaTown_Gym_Text_BugCatcherJoshBeaten:
	.string "Urrgggh!$"

AzaleaTown_Gym_Text_BugCatcherJoshAfter:
	.string "Vielleicht sollte ich sie\n"
	.string "ein wenig besser trainieren…$"

AzaleaTown_Gym_Text_TwinsAmyMay1Seen:
	.string "EVA: Hi! fordest du den Leiter\n"
	.string "heraus? Unmöglich!$"

AzaleaTown_Gym_Text_TwinsAmyMay1Beaten:
	.string "EVA & UTE: Oh, um Himmels\n"
	.string "willen!$"

AzaleaTown_Gym_Text_TwinsAmyMay1After:
	.string "EVA: Du bist stark!\p"
	.string "Aber Kai ist stärker!\n"
	.string "Der Zerschneider seines Sichlor\l"
	.string "trifft fast immer kritisch!$"

AzaleaTown_Gym_Text_TwinsAmyMay2Seen:
	.string "UTE: Du willst den Leiter\n"
	.string "sehen? Viel Glück!\p"
	.string "Kai ist so stark!\n"
	.string "Der Zerschneider seines Sichlor\l"
	.string "trifft fast immer kritisch!$"

AzaleaTown_Gym_Text_TwinsAmyMay2Beaten:
	.string "EVA & UTE: Oh, um\n"
	.string "Himmels willen!$"

AzaleaTown_Gym_Text_TwinsAmyMay2After:
	.string "UTE: Unsere Käfer haben verloren!\n"
	.string "Oh, mann.\p"
	.string "Kai wird nicht verlieren!\p"
	.string "Sein Tannza hat keine Probleme\n"
	.string "mit Gesteins-Pokémon!$"

AzaleaTown_Gym_Text_GymGuide:
	.string "Yo, herausforderer!\p"
	.string "Kai ist jung, aber sein Wissen\n"
	.string "über Käfer-POKéMON ist enorm.\p"
	.string "Es wird nicht einfach werden,\n"
	.string "ohne meine Tipps.\p"
	.string "Mal sehen… sein Tannza\n"
	.string "hat eine Attacke, um seine\l"
	.string "Gesteins-Schwäche auszugleichen.\p"
	.string "Er hat außerdem eine neue Form des\n"
	.string "Zerschneider entwickelt,\l"
	.string "als Käfer-Attacke.\p"
	.string "Oh, vergiss nicht diese\n"
	.string "kritischen Treffer. Viel Glück!$"

AzaleaTown_Gym_Text_GymGuideWin:
	.string "Gut gemacht! Was für ein Kampf\n"
	.string "zweier talentierter junger Trainer.\p"
	.string "Mit Menschen wie dir sieht die\n"
	.string "Zukunft von POKéMON gut aus!$"
