VictoryRoadKanto_1F_hns_MapScripts::
	.byte 0

VictoryRoadKanto_1F_EventScript_Item_RareCandy::
	finditem ITEM_RARE_CANDY
	end
VictoryRoadKanto_1F_EventScript_Item_MaxEther::
	finditem ITEM_MAX_ETHER
	end
VictoryRoadKanto_EventScript_Item_Dark_Pulse::
    finditem ITEM_TM_DARK_PULSE
    end

VictoryRoadKanto_1F_Trigger::
	lock
	playbgm MUS_HG_ENCOUNTER_RIVAL, TRUE
	delay 5
	playse SE_PIN
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	delay 60
	addobject LOCALID_VICTORYROAD_SILVER
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 27, VictoryRoadKanto_1F_EventScript_SilverEnterLeft
	call_if_eq VAR_TEMP_0, 28, VictoryRoadKanto_1F_EventScript_SilverEnterMid
	call_if_eq VAR_TEMP_0, 29, VictoryRoadKanto_1F_EventScript_SilverEnterRight
	msgbox VictoryRoad_Text_RivalBefore, MSGBOX_DEFAULT
	call_if_eq VAR_STARTER_MON, 0, VictoryRoadKanto_1F_Silver_Battle_Cyndaquil
	call_if_eq VAR_STARTER_MON, 1, VictoryRoadKanto_1F_Silver_Battle_Totodile
	call_if_eq VAR_STARTER_MON, 2, VictoryRoadKanto_1F_Silver_Battle_Chikorita
	playbgm MUS_HG_RIVAL_EXIT, TRUE
	msgbox VictoryRoad_Text_RivalAfter, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_VICTORYROAD_SILVER, VictoryRoadKanto_1F_Movement_SilverLeave
	waitmovement 0
	removeobject LOCALID_VICTORYROAD_SILVER
	fadedefaultbgm
	release
	setvar VAR_ROUTE27_STATE, 3
	end

VictoryRoadKanto_1F_EventScript_SilverEnterLeft::
	applymovement2 LOCALID_VICTORYROAD_SILVER, VictoryRoadKanto_1F_Movement_SilverEnterLeft
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	applymovement2 OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp1
	waitmovement LOCALID_VICTORYROAD_SILVER
	return

VictoryRoadKanto_1F_EventScript_SilverEnterMid::
	applymovement2 LOCALID_VICTORYROAD_SILVER, VictoryRoadKanto_1F_Movement_SilverEnterMid
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	applymovement2 OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp1
	waitmovement LOCALID_VICTORYROAD_SILVER
	return

VictoryRoadKanto_1F_EventScript_SilverEnterRight::
	applymovement2 LOCALID_VICTORYROAD_SILVER, VictoryRoadKanto_1F_Movement_SilverEnterRight
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	applymovement2 OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp1
	waitmovement LOCALID_VICTORYROAD_SILVER
	return


VictoryRoadKanto_1F_Silver_Battle_Cyndaquil::
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_5_HNS, VictoryRoad_Text_RivalDefeat
	return

VictoryRoadKanto_1F_Silver_Battle_Totodile::
	trainerbattle_no_intro TRAINER_RIVAL_TOTODILE_5_HNS, VictoryRoad_Text_RivalDefeat
	return

VictoryRoadKanto_1F_Silver_Battle_Chikorita::
	trainerbattle_no_intro TRAINER_RIVAL_CHIKORITA_5_HNS, VictoryRoad_Text_RivalDefeat
	return

VictoryRoadKanto_1F_Movement_SilverEnterLeft:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end
VictoryRoadKanto_1F_Movement_SilverEnterMid:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end
VictoryRoadKanto_1F_Movement_SilverEnterRight:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end
VictoryRoadKanto_1F_Movement_SilverLeave:
	walk_down
	walk_down
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

VictoryRoad_Text_RivalBefore:
	.string "Moment.\p"
	.string "…Wirst du das Abenteuer der\n"
	.string "Pokémon LIGA bestreiten?\p"
	.string "…Bring mich nicht zum Lachen.\p"
	.string "Du bist viel schwächer als ich.\p"
	.string "Ich bin nicht mehr so wie früher.\p"
	.string "Nun habe ich die besten und\n"
	.string "stärksten Pokémon.\p"
	.string "Ich bin unschlagbar!\p"
	.string "{PLAYER}! Ich fordere dich heraus!$"

VictoryRoad_Text_RivalDefeat:
	.string "…Ich konnte nicht gewinnen…\p"
	.string "Ich habe alles gegeben…\p"
	.string "Was du besitzt und was mir fehlt…\p"
	.string "Langsam begreife ich, was der\n"
	.string "Drachenmeister zu mir sagte…$"

VictoryRoad_Text_RivalAfter:
	.string "…Ich habe nicht aufgegeben,\n"
	.string "der weltbeste Trainer zu\l"
	.string "werden…\p"
	.string "Ich werde herausfinden, warum\n"
	.string "ich nicht gewinnen kann\l"
	.string "und dann werde ich stärker…\p"
	.string "Wenn ich soweit bin,\n"
	.string "fordere ich dich heraus.\p"
	.string "Dann werde ich dir die Leviten lesen.\p"
	.string "…Humpf! Halte bis dahin durch.$"
