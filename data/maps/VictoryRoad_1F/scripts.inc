VictoryRoad_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
	.byte 0

VictoryRoad_1F_OnTransition:
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 1, VictoryRoad_1F_EventScript_SetEntranceWallyPos1
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 2, VictoryRoad_1F_EventScript_SetEntranceWallyPos2
	end

VictoryRoad_1F_EventScript_SetEntranceWallyPos1::
	setobjectxyperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, 2, 24
	setobjectmovementtype LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, MOVEMENT_TYPE_FACE_DOWN
	return

VictoryRoad_1F_EventScript_SetEntranceWallyPos2::
	setobjectxyperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, 3, 24
	setobjectmovementtype LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, MOVEMENT_TYPE_FACE_DOWN
	return

VictoryRoad_1F_EventScript_WallyBattleTrigger1::
	lockall
	setvar VAR_0x8008, 1
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_Movement_WallyApproachPlayer1
	waitmovement 0
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
	end

VictoryRoad_1F_EventScript_WallyBattleTrigger2::
	lockall
	setvar VAR_0x8008, 2
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_Movement_WallyApproachPlayer2
	waitmovement 0
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
	end

VictoryRoad_1F_EventScript_WallyEntranceBattle::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_WALLY_VR_1, VictoryRoad_1F_Text_WallyEntranceDefeat
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
	copyobjectxytoperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
	releaseall
	end

VictoryRoad_1F_Movement_WallyApproachPlayer1:
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
	walk_up
	step_end

VictoryRoad_1F_Movement_WallyApproachPlayer2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

@ This Wally appears near the entrance once his battle is triggered and remains there until the Hall of Fame is entered
VictoryRoad_1F_EventScript_EntranceWally::
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
	end

@ This Wally appears and remains at the exit after the Hall of Fame is entered
VictoryRoad_1F_EventScript_ExitWally::
	trainerbattle_single TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, VictoryRoad_1F_EventScript_RematchWally
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_RematchWally::
	trainerbattle_rematch TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Edgar::
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Albert::
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Hope::
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Quincy::
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Katelynn::
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore:
	.string "HEIKO: Hallo, {PLAYER}!\p"
	.string "Du bist bestimmt überrascht, mich hier\n"
	.string "zu treffen!\p"
	.string "Ich habe es bis hierher geschafft und\n"
	.string "das verdanke ich dir!\p"
	.string "{PLAYER}, meine Niederlage gegen dich\n"
	.string "hat mich viel stärker gemacht!\p"
	.string "Ich werde nie wieder verlieren!\p"
	.string "Ich werde gewinnen! Für die POKéMON,\n"
	.string "die mir Mut und Kraft gegeben haben!\p"
	.string "Okay… Jetzt komme ich!$"

VictoryRoad_1F_Text_WallyEntranceDefeat:
	.string "Wow! {PLAYER}, du wirst immer stärker!$"

VictoryRoad_1F_Text_WallyPostEntranceBattle:
	.string "HEIKO: Ich konnte dich heute nicht be-\n"
	.string "siegen, aber eines Tages werde ich es\l"
	.string "mit dir aufnehmen!$"

VictoryRoad_1F_Text_WallyIntro:
	.string "HEIKO: Hallo, {PLAYER}!\p"
	.string "Ich bin viel stärker geworden! Das\n"
	.string "möchte ich dir zeigen, {PLAYER}!\p"
	.string "Okay… Jetzt komme ich!$"

VictoryRoad_1F_Text_WallyDefeat:
	.string "Wow!\n"
	.string "{PLAYER}, du bist immer noch zu stark!$"

VictoryRoad_1F_Text_WallyPostBattle:
	.string "HEIKO: Ich konnte dich wieder nicht\n"
	.string "besiegen… Aber eines Tages, {PLAYER},\l"
	.string "eines Tages…\p"
	.string "Da werde ich sogar die POKéMON LIGA\n"
	.string "herausfordern!$"

VictoryRoad_1F_Text_EdgarIntro:
	.string "Ich habe es innerhalb kürzester Zeit\n"
	.string "bis hierher geschafft, aber das letzte\l"
	.string "Stück zieht sich wie Kaugummi…$"

VictoryRoad_1F_Text_EdgarDefeat:
	.string "Hier enden meine Träume…$"

VictoryRoad_1F_Text_EdgarPostBattle:
	.string "Du bist weit gekommen. Lasse nicht\n"
	.string "nach\n"
	.string "und versuche, der CHAMP zu werden!\l"
	.string "Wenn einer das kann, dann du!$"

VictoryRoad_1F_Text_AlbertIntro:
	.string "Ich bin nicht hierher gekommen, um zu\n"
	.string "verlieren. Diese Option existiert\l"
	.string "nicht!$"

VictoryRoad_1F_Text_AlbertDefeat:
	.string "Unmöglich… Ich habe verloren???$"

VictoryRoad_1F_Text_AlbertPostBattle:
	.string "Ich habe hier verloren…\p"
	.string "Das heißt, mir fehlt noch eine Menge,\n"
	.string "um CHAMP werden zu können.$"

VictoryRoad_1F_Text_HopeIntro:
	.string "Diese unendliche, raue Straße wird\n"
	.string "ihrem Namen - SIEG - gerecht.$"

VictoryRoad_1F_Text_HopeDefeat:
	.string "Dein Kampfstil ist fantastisch…$"

VictoryRoad_1F_Text_HopePostBattle:
	.string "Du hast wirklich das Potenzial, der\n"
	.string "CHAMP zu werden.$"

VictoryRoad_1F_Text_QuincyIntro:
	.string "Was ist das? Die SIEGESSTRASSE?\n"
	.string "Wenn du gewinnst, verrat ich es dir.$"

VictoryRoad_1F_Text_QuincyDefeat:
	.string "Okay! Gut gemacht!$"

VictoryRoad_1F_Text_QuincyPostBattle:
	.string "Hier sicher durchzukommen, das ist der\n"
	.string "letzte Test für einen TRAINER, der\l"
	.string "CHAMP werden will.\p"
	.string "Daher nennt man sie SIEGESSTRASSE.$"

VictoryRoad_1F_Text_KatelynnIntro:
	.string "Ich habe jemandem, der so weit\n"
	.string "gekommen ist, nichts zu sagen. Los!$"

VictoryRoad_1F_Text_KatelynnDefeat:
	.string "Was für eine Blamage…$"

VictoryRoad_1F_Text_KatelynnPostBattle:
	.string "Hmpf, geh einfach geradeaus weiter.\n"
	.string "Mir doch egal…$"
