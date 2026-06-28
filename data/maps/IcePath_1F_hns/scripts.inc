IcePath_1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IcePath_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

IcePath_1F_OnTransition: 
	callnative SetTimeBasedEncounters
	end

IcePath_1F_EventScript_Item_PpUp::
	finditem ITEM_PP_UP
	end
IcePath_1F_EventScript_Item_Protein::
	finditem ITEM_PROTEIN
	end
IcePath_1F_EventScript_Item_HM_Waterfall::
	finditem ITEM_HM_WATERFALL
	end

IcePath_1F_EventScript_KimonoGirl::
	lock
	playbgm MUS_HG_KIMONO_GIRL, TRUE
	goto_if_eq VAR_FACING, DIR_SOUTH, IcePath_1F_EventScript_KimonoGirlPushPrompt
	msgbox IcePath_1F_Text_Stuck1, MSGBOX_DEFAULT
	closemessage
	fadedefaultbgm
	release
	end

IcePath_1F_Trigger_KimonoGirl::
	lock
	msgbox IcePath_1F_Text_Leave, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	release
	end

IcePath_1F_EventScript_KimonoGirlPushPrompt::
	msgbox IcePath_1F_Text_Stuck2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, IcePath_1F_EventScript_KimonoGirlRefused
IcePath_1F_EventScript_KimonoGirlPush::
	msgbox IcePath_1F_Text_Shove, MSGBOX_AUTOCLOSE
	closemessage
	playse SE_LEDGE
	applymovement OBJ_EVENT_ID_PLAYER, IcePath_Movement_PlayerJump
	waitmovement 0
	waitse
	playse SE_M_ICY_WIND
	applymovement LOCALID_ICEPATH1_KIMONO, IcePath_Movement_KimonoSlide
	waitmovement 0
	msgbox IcePath_1F_Text_Thanks, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ICEPATH1_KIMONO, IcePath_Movement_KimonoLeave
	waitmovement LOCALID_ICEPATH1_KIMONO
	setflag FLAG_HIDE_ICE_PATH_KIMONO
	removeobject LOCALID_ICEPATH1_KIMONO
	playse SE_EXIT
	fadedefaultbgm
	setvar VAR_ICE_PATH_STATE, 1
	release
	end

IcePath_1F_EventScript_KimonoGirlRefused::
	msgbox IcePath_1F_Text_Cruel, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, IcePath_1F_EventScript_KimonoGirlPush
	goto_if_eq VAR_RESULT, FALSE, IcePath_1F_EventScript_KimonoGirlRefused

IcePath_Movement_PlayerJump:
	jump_in_place_down
	step_end

IcePath_Movement_KimonoSlide:
	slide_down
	slide_down
	slide_down
	slide_down
	walk_in_place_fast_down
	face_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	step_end

IcePath_Movement_KimonoLeave:
	walk_down
	walk_down
	walk_down
	step_end

IcePath_1F_Text_Leave:
	.string "KIMONO GIRL: .....................$"

IcePath_1F_Text_Stuck1:
	.string "Oje... Bist du das, {PLAYER}?\n"
	.string "Wie überraschend, dich zu sehen!\p"
	.string "Ehrlich gesagt... meine Sandalen\n"
	.string "sind auf dem Eis festgefroren,\n"
	.string "ich stecke fest.\p"
	.string "Mit anderen Worten: Flip-Flops\n"
	.string "festgefroren am Boden.\p"
	.string "Hehe.\p"
	.string "Aber es ist ernst.\p"
	.string "Könntest du mich am Rücken\n"
	.string "anschubsen?$"

IcePath_1F_Text_Stuck2:
	.string "Oje... Bist du das, {PLAYER}?\n"
	.string "Wie überraschend, dich zu sehen!\p"
	.string "Ehrlich gesagt... meine Sandalen\n"
	.string "sind auf dem Eis festgefroren,\n"
	.string "ich stecke fest.\p"
	.string "Mit anderen Worten: Flip-Flops\n"
	.string "schnellgefroren am Boden.\p"
	.string "Hehe.\p"
	.string "Aber es ist ernst.\n"
	.string "Willst du mich am Rücken\l"
	.string "anschubsen?$"

IcePath_1F_Text_Shove:
	.string "....SCHUBS!....$"

IcePath_1F_Text_Cruel:
	.string "Sei nicht so gemein.\n"
	.string "Du wirst mich am Rücken\l"
	.string "anschubsen, oder?$"

IcePath_1F_Text_Thanks:
	.string "Du bist wirklich nett.\n"
	.string "Vielen Dank!$"
