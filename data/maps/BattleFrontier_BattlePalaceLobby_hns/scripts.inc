BattleFrontier_BattlePalaceLobby_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePalaceLobby_OnFrame_hns
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePalaceLobby_OnWarp_hns
	.byte 0

BattleFrontier_BattlePalaceLobby_OnWarp_hns:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePalaceLobby_EventScript_TurnPlayerNorth_hns
	.2byte 0

BattleFrontier_BattlePalaceLobby_EventScript_TurnPlayerNorth_hns::
	setvar VAR_TEMP_1, 1
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattlePalaceLobby_OnFrame_hns:
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePalaceLobby_EventScript_GetChallengeStatus_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePalaceLobby_EventScript_QuitWithoutSaving_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePalaceLobby_EventScript_ResumeChallenge_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePalaceLobby_EventScript_LostChallenge_hns
	.2byte 0

BattleFrontier_BattlePalaceLobby_EventScript_GetChallengeStatus_hns::
	frontier_getstatus
	end

BattleFrontier_BattlePalaceLobby_EventScript_QuitWithoutSaving_hns::
	lockall
	msgbox BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge_hns, MSGBOX_DEFAULT
	closemessage
	palace_set PALACE_DATA_WIN_STREAK, 0
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, FALSE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge_hns::
	lockall
	frontier_isbrain
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_DefeatedMaven_hns
	msgbox BattleFrontier_BattlePalaceLobby_Text_FirmTrueBondsFor7WinStreak_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_GiveBattlePoints_hns

BattleFrontier_BattlePalaceLobby_EventScript_DefeatedMaven_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_ToDefeatMavenAnd7Trainers_hns, MSGBOX_DEFAULT
BattleFrontier_BattlePalaceLobby_EventScript_GiveBattlePoints_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_PresentYouWithBattlePoints_hns, MSGBOX_DEFAULT
	frontier_givepoints
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
	message BattleFrontier_BattlePalaceLobby_Text_FeatWillBeRecorded_hns
	waitmessage
	call BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge_hns
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified_hns, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattlePalaceLobby_EventScript_LostChallenge_hns::
	lockall
	message BattleFrontier_BattlePalaceLobby_Text_ResultsWillBeRecorded_hns
	waitmessage
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, FALSE
	call BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge_hns
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified_hns, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge_hns::
	frontier_checkairshow
	special LoadPlayerParty
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	palace_save 0
	playse SE_SAVE
	waitse
	call BattleFrontier_EventScript_GetCantRecordBattle
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge_hns
	message BattleFrontier_BattlePalaceLobby_Text_LikeToRecordMatch_hns
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	switch VAR_RESULT
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge_hns
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_RecordMatch_hns
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge_hns

BattleFrontier_BattlePalaceLobby_EventScript_RecordMatch_hns::
	call BattleFrontier_EventScript_SaveBattle
BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge_hns::
	return

BattleFrontier_BattlePalaceLobby_EventScript_ResumeChallenge_hns::
	lockall
	msgbox BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting_hns, MSGBOX_DEFAULT
	message BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge_hns
	waitmessage
	palace_save CHALLENGE_STATUS_SAVING
	playse SE_SAVE
	waitse
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	goto BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_hns

BattleFrontier_BattlePalaceLobby_EventScript_SinglesAttendant_hns::
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant_hns
	end

BattleFrontier_BattlePalaceLobby_EventScript_DoublesAttendant_hns::
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant_hns
	end

BattleFrontier_BattlePalaceLobby_EventScript_Attendant_hns::
	palace_get PALACE_DATA_PRIZE
	goto_if_ne VAR_RESULT, ITEM_NONE, BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge_hns
	special SavePlayerParty
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForSingleBattle_hns
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForDoubleBattle_hns
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_hns::
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeSingleBattleChallenge_hns
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeDoubleBattleChallenge_hns
	waitmessage
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_hns
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge_hns
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge_hns
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge_hns

BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_hns::
	message BattleFrontier_BattlePalaceLobby_Text_WhichChallenge_hns
	waitmessage
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
	switch VAR_RESULT
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge_hns
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge_hns
	frontier_checkineligible
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons_hns
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
	msgbox BattleFrontier_BattlePalaceLobby_Text_NowSelectThreeMons_hns, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	call BattleFrontier_EventScript_GetLvlMode
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
	special ChoosePartyForBattleFrontier
	waitstate
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge_hns
	msgbox BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge_hns2_hns, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge_hns
	case YES, BattleFrontier_BattlePalaceLobby_EventScript_SaveBeforeChallenge_hns
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge_hns

BattleFrontier_BattlePalaceLobby_EventScript_SaveBeforeChallenge_hns::
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
	palace_init
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, TRUE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	special LoadPlayerParty
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge_hnsSaveFailed_hns
BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_hns::
	special SavePlayerParty
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	msgbox BattleFrontier_BattlePalaceLobby_Text_FollowMe_hns, MSGBOX_DEFAULT
	closemessage
	call BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_hns
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR_HNS, 8, 13
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	waitstate
	end

BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge_hns::
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_ExplainDoublesChallenge_hns
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainSingleBattleChallenge_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_hns

BattleFrontier_BattlePalaceLobby_EventScript_ExplainDoublesChallenge_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainDoubleBattleChallenge_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_hns

BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons_hns::
	switch VAR_RESULT
	case FRONTIER_LVL_50, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons_hnsLv50_hns
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons_hnsLvOpen_hns

BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons_hnsLv50_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLv50_hns, MSGBOX_DEFAULT
	call BattleFrontier_ShowCaughtBannedSpecies
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsEnd_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge_hns

BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons_hnsLvOpen_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLvOpen_hns, MSGBOX_DEFAULT
	call BattleFrontier_ShowCaughtBannedSpecies
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsEnd_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge_hns

BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge_hnsSaveFailed_hns::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	goto BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge_hns

BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge_hns::
	special LoadPlayerParty
	callnative LoadPlayerParty
BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified_hns, MSGBOX_DEFAULT
BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge_hns::
	release
	end

BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForSingleBattle_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_WelcomeForSingleBattle_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForDoubleBattle_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_WelcomeForDoubleBattle_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePalaceLobby_EventScript_AskTakeSingleBattleChallenge_hns::
	message BattleFrontier_BattlePalaceLobby_Text_TakeSingleBattleChallenge_hns
	return

BattleFrontier_BattlePalaceLobby_EventScript_AskTakeDoubleBattleChallenge_hns::
	message BattleFrontier_BattlePalaceLobby_Text_TakeDoubleBattleChallenge_hns
	return

BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_hns::
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_TalkedToSinglesAttendant_hns
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_TalkedToDoublesAttendant_hns
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor_hns
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor_hns
	waitmovement 0
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_OpenSinglesHallDoor_hns
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_OpenDoublesHallDoor_hns
	waitdooranim
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_Movement_AttendantEnterDoor_hns
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceLobby_Movement_PlayerEnterDoor_hns
	waitmovement 0
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_CloseSinglesHallDoor_hns
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_CloseDoublesHallDoor_hns
	waitdooranim
	return

BattleFrontier_BattlePalaceLobby_EventScript_TalkedToSinglesAttendant_hns::
	setvar VAR_LAST_TALKED, LOCALID_PALACE_ATTENDANT_SINGLES
	return

BattleFrontier_BattlePalaceLobby_EventScript_TalkedToDoublesAttendant_hns::
	setvar VAR_LAST_TALKED, LOCALID_PALACE_ATTENDANT_DOUBLES
	return

BattleFrontier_BattlePalaceLobby_EventScript_OpenSinglesHallDoor_hns::
	opendoor 5, 4
	return

BattleFrontier_BattlePalaceLobby_EventScript_OpenDoublesHallDoor_hns::
	opendoor 19, 4
	return

BattleFrontier_BattlePalaceLobby_EventScript_CloseSinglesHallDoor_hns::
	closedoor 5, 4
	return

BattleFrontier_BattlePalaceLobby_EventScript_CloseDoublesHallDoor_hns::
	closedoor 19, 4
	return

BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor_hns:
	walk_up
	step_end

BattleFrontier_BattlePalaceLobby_Movement_AttendantEnterDoor_hns:
	walk_up
	set_invisible
	step_end

BattleFrontier_BattlePalaceLobby_Movement_PlayerEnterDoor_hns:
	walk_up
	walk_up
	set_invisible
	step_end

BattleFrontier_BattlePalaceLobby_EventScript_ShowSinglesResults_hns::
	lockall
	frontier_results FRONTIER_FACILITY_PALACE, FRONTIER_MODE_SINGLES
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattlePalaceLobby_EventScript_ShowDoublesResults_hns::
	lockall
	frontier_results FRONTIER_FACILITY_PALACE, FRONTIER_MODE_DOUBLES
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattlePalaceLobby_EventScript_BlackBelt_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_LadyCanTellWhatMonsThink_hns, MSGBOX_NPC
	end

BattleFrontier_BattlePalaceLobby_EventScript_Man_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_NatureAndMovesKeyHere_hns, MSGBOX_NPC
	end

BattleFrontier_BattlePalaceLobby_EventScript_Beauty_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_MonDocileButTransforms_hns, MSGBOX_NPC
	end

BattleFrontier_BattlePalaceLobby_EventScript_Man_hnsiac_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_WhatNatureFavorsChippingAway_hns, MSGBOX_NPC
	end

BattleFrontier_BattlePalaceLobby_EventScript_RulesBoard_hns::
	lockall
	msgbox BattleFrontier_BattlePalaceLobby_Text_RulesAreListed_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_hns::
	message BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading_hns
	waitmessage
	multichoice 16, 0, MULTI_BATTLE_PALACE_RULES, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_RulesBasics_hns
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_RulesNature_hns
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_RulesMoves_hns
	case 3, BattleFrontier_BattlePalaceLobby_EventScript_RulesUnderpowered_hns
	case 4, BattleFrontier_BattlePalaceLobby_EventScript_RulesWhenInDanger_hns
	case 5, BattleFrontier_BattlePalaceLobby_EventScript_ExitRules_hns
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_ExitRules_hns
	end

BattleFrontier_BattlePalaceLobby_EventScript_RulesBasics_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattlePalaceLobby_EventScript_RulesNature_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattlePalaceLobby_EventScript_RulesMoves_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattlePalaceLobby_EventScript_RulesUnderpowered_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattlePalaceLobby_EventScript_RulesWhenInDanger_hns::
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattlePalaceLobby_EventScript_ExitRules_hns::
	releaseall
	end

BattleFrontier_BattlePalaceLobby_Text_WelcomeForSingleBattle_hns:
	.string "Hier wird das Herz der TRAINER\n"
	.string "auf die Probe gestellt!\p"
	.string "Willkommen im KAMPFPALAST!\p"
	.string "Ich nehme Herausforderungen für die\n"
	.string "EINZELKAMPF-Hallen entgegen!$"

BattleFrontier_BattlePalaceLobby_Text_TakeSingleBattleChallenge_hns:
	.string "Möchtest du dich der Herausforderung\n"
	.string "der EINZELKAMPF-Hallen stellen?$"

BattleFrontier_BattlePalaceLobby_Text_ExplainSingleBattleChallenge_hns:
	.string "Im KAMPFPALAST gibt es verschiedene\n"
	.string "EINZELKAMPF-Hallen für\l"
	.string "EINZELKÄMPFE.\p"
	.string "Die EINZELKÄMPFE verlaufen auf die\n"
	.string "übliche Weise. Es gibt eine entschei-\l"
	.string "dende Regel, die es zu beachten\n"
	.string "gilt!!! \p"
	.string "TRAINER dürfen ihre POKéMON lediglich\n"
	.string "in den Kampf rufen und zurückziehen.\p"
	.string "Ansonsten dürfen sie ihren POKéMON\n"
	.string "keinerlei Anweisungen geben!\p"
	.string "Die POKéMON sollen sich ihrem Wesen\n"
	.string "entsprechend verhalten und eigen-\p"
	.string "ständig kämpfen! Vertrau deinen\n"
	.string "POKéMON und achte auf sie.\p"
	.string "Schaffst du es, sieben TRAINER in\n"
	.string "Folge\n"
	.string "zu besiegen, erhältst du von uns\l"
	.string "Gewinnpunkte.\p"
	.string "Willst du die Herausforderung ab-\n"
	.string "brechen, musst du dein Spiel\n"
	.string "speichern. \p"
	.string "Andernfalls wirst du bei Abbruch\n"
	.string "disqualifiziert.$"

BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified_hns:
	.string "Stärke dein Herz und deine POKéMON und\n"
	.string "komm dann wieder.$"

BattleFrontier_BattlePalaceLobby_Text_WhichChallenge_hns:
	.string "Es gibt zwei KAMPFHALLEN:\n"
	.string "Für Level 50 und Offene Kämpfe.\l"
	.string "Wofür entscheidest du dich?$"

BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLv50_hns:
	.string "Entschuldigung!\p"
	.string "Aber deine POKéMON sind nicht\n"
	.string "teilnahmeberechtigt.\p"
	.string "Du brauchst drei verschiedene\n"
	.string "POKéMON von Level 50 oder weniger.\p"
	.string "Jedes muss außerdem ein anderes Item\n"
	.string "halten.\p"
	.string "EIer{STR_VAR_1} nicht zugelassen.\p"
	.string "Bitte komm wieder, wenn du bereit\n"
	.string "bist.$"

BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsEnd_hns:
	.string "Komm wieder wenn du\n"
	.string "vorbereitet bist.$"

BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLvOpen_hns:
	.string "Entschuldigung!\p"
	.string "Aber deine POKéMON sind nicht\n"
	.string "teilnahmeberechtigt.\p"
	.string "Du brauchst drei verschiedene\n"
	.string "POKéMON.\p"
	.string "Jedes muss außerdem ein anderes Item\n"
	.string "halten.\p"
	.string "EIer{STR_VAR_1} nicht zugelassen.\p"
	.string "Bitte komm wieder, wenn du bereit\n"
	.string "bist.$"

BattleFrontier_BattlePalaceLobby_Text_NowSelectThreeMons_hns:
	.string "Gut. Nun wähle deine drei POKéMON aus.$"

BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge_hns2_hns:
	.string "Bevor du die KAMPFHALLE betrittst,\n"
	.string "musst du dein Spiel speichern. Okay?$"

BattleFrontier_BattlePalaceLobby_Text_FollowMe_hns:
	.string "Gut. Dann folge mir.$"

BattleFrontier_BattlePalaceLobby_Text_ResultsWillBeRecorded_hns:
	.string "Ich fühle mich geehrt, dass ich deine\n"
	.string "POKéMON sehen durfte.\p"
	.string "Dein Erfolg wird gespeichert.\n"
	.string "Bitte warte einen Moment.$"

BattleFrontier_BattlePalaceLobby_Text_FirmTrueBondsFor7WinStreak_hns:
	.string "Sieben Siege in Folge…\p"
	.string "Das Band zwischen deinem Herzen und\n"
	.string "deinen POKéMON scheint stark zu sein.$"

BattleFrontier_BattlePalaceLobby_Text_FeatWillBeRecorded_hns:
	.string "Dein Erfolg wird gespeichert.\n"
	.string "Bitte warte einen Moment.$"

@ Unused
BattleFrontier_BattlePalaceLobby_Text_BattlePointsFor7WinStreak_hns:
	.string "For the feat of your 7-win streak,\n"
	.string "we present you with Battle Point(s).$"

BattleFrontier_BattlePalaceLobby_Text_NoSpaceForPrize_hns:
	.string "Du hast keinen Platz für den Preis?\p"
	.string "Räum deinen BEUTEL auf und komm\n"
	.string "dann wieder.$"

BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting_hns:
	.string "Wir haben auf dich gewartet…$"

BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge_hns:
	.string "Bevor du die KAMPFHALLE betrittst,\n"
	.string "musst du dein Spiel speichern.$"

BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge_hns:
	.string "Seufz…\p"
	.string "Du hast, bevor du die Herausforderung\n"
	.string "abgebrochen hast, nicht gespeichert.\p"
	.string "Daher wirst du für diese Herausforde-\n"
	.string "rung disqualifiziert. Schade!$"

@ Unused
BattleFrontier_BattlePalaceLobby_Text_ReceivedPrize_hns:
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

BattleFrontier_BattlePalaceLobby_Text_LadyCanTellWhatMonsThink_hns:
	.string "Für so einen kräftigen Burschen wie\n"
	.string "mich sind kräftige POKéMON das Wahre!\n"
	.string "\p"
	.string "Angriff ist die beste Verteidigung!\n"
	.string "Eine rücksichtslose Attacke das Beste!\n"
	.string "\p"
	.string "Aber darüber wollte ich jetzt\n"
	.string "eigentlich gar nicht reden.\p"
	.string "Manchmal kommt hier eine niedliche\n"
	.string "Lady vorbei.\p"
	.string "Sie sagt, sie kann erkennen, was\n"
	.string "POKéMON denken.\p"
	.string "Ich kenn mich damit nicht aus, aber\l"
	.string "ich\n"
	.string "weiß, dass die Lady verdammt süß ist.\p"
	.string "\p"
	.string "Was?!?\n"
	.string "Warum schaust du mich so komisch an?$"

BattleFrontier_BattlePalaceLobby_Text_NatureAndMovesKeyHere_hns:
	.string "Hmm…\p"
	.string "Das Wesen der POKéMON und die\n"
	.string "Attacken, die sie gelernt haben,\l"
	.string "scheinen der Schlüssel zu sein.\p"
	.string "Um es deutlicher zu machen: Die\n"
	.string "Attacken sollten zum Wesen der\l"
	.string "POKéMON passen.\p"
	.string "Wenn dein POKéMON Schwierigkeiten\n"
	.string "hat und nicht alles gibt, dann\n"
	.string "solltest\l"
	.string "du prüfen, wie gut seine Attacken zu\l"
	.string "seinem Wesen passen.$"

BattleFrontier_BattlePalaceLobby_Text_MonDocileButTransforms_hns:
	.string "Mein POKéMON ist sehr sanftmütig.\p"
	.string "Aber wenn ich es in eine KAMPFHALLE\n"
	.string "mitnehme, scheint es sich manchmal\l"
	.string "ganz merkwürdig zu verändern!\p"
	.string "Es wirkt dann regelrecht\n"
	.string "einschüchternd! Richtig schockierend!$"

BattleFrontier_BattlePalaceLobby_Text_WhatNatureFavorsChippingAway_hns:
	.string "Ich frage mich, welches Wesen ein\n"
	.string "POKéMON hat, das seine Gegner schwächt\l"
	.string "und dann langsam zur Strecke bringt.\p"
	.string "Ich würde mich echt wundern, wenn es\n"
	.string "dann ein LASCHes Wesen hätte.\p"
	.string "Nee, bestimmt nicht!$"

BattleFrontier_BattlePalaceLobby_Text_WelcomeForDoubleBattle_hns:
	.string "Hier wird das Herz der TRAINER\n"
	.string "auf die Probe gestellt!\p"
	.string "Willkommen im KAMPFPALAST!\p"
	.string "Ich nehme Herausforderungen für die\n"
	.string "DOPPELKAMPF-Hallen entgegen!$"

BattleFrontier_BattlePalaceLobby_Text_TakeDoubleBattleChallenge_hns:
	.string "Möchtest du dich der Herausforderung\n"
	.string "der DOPPELKAMPF-Hallen stellen?$"

BattleFrontier_BattlePalaceLobby_Text_ExplainDoubleBattleChallenge_hns:
	.string "Im KAMPFPALAST gibt es verschiedene\n"
	.string "DOPPELKAMPF-Hallen für\l"
	.string "DOPPELKÄMPFE.\p"
	.string "Die DOPPELKÄMPFE verlaufen auf die\n"
	.string "übliche Weise. Es gibt eine entschei-\l"
	.string "dende Regel, die es zu beachten\n"
	.string "gilt!!! \p"
	.string "TRAINER dürfen ihre POKéMON lediglich\n"
	.string "in den Kampf rufen und zurückziehen.\p"
	.string "Ansonsten dürfen sie ihren POKéMON\n"
	.string "keinerlei Anweisungen geben!\p"
	.string "Die POKéMON sollen sich ihrem Wesen\n"
	.string "entsprechend verhalten und eigen-\p"
	.string "ständig kämpfen! Vertrau deinen\n"
	.string "POKéMON und achte auf sie.\p"
	.string "Schaffst du es, sieben TRAINER in\n"
	.string "Folge\n"
	.string "zu besiegen, erhältst du von uns\l"
	.string "Gewinnpunkte.\p"
	.string "Willst du die Herausforderung ab-\n"
	.string "brechen, musst du dein Spiel\n"
	.string "speichern. \p"
	.string "Andernfalls wirst du bei Abbruch\n"
	.string "disqualifiziert.$"

BattleFrontier_BattlePalaceLobby_Text_ToDefeatMavenAnd7Trainers_hns:
	.string "Um den PALASTREGENTen und sechs\n"
	.string "TRAINER in Folge zu besiegen…$"

BattleFrontier_BattlePalaceLobby_Text_PresentYouWithBattlePoints_hns:
	.string "In Anerkennung des Bandes zwischen dir\n"
	.string "und deinen POKéMON geben wir dir\l"
	.string "Gewinnpunkte.$"

BattleFrontier_BattlePalaceLobby_Text_LikeToRecordMatch_hns:
	.string "Möchtest du deinen letzten KAMPF-\n"
	.string "PALAST-Kampf in deinen\l"
	.string "KAMPFZONENPASS eintragen?$"

BattleFrontier_BattlePalaceLobby_Text_RulesAreListed_hns:
	.string "Die Regeln der KAMPFHALLE hängen\n"
	.string "öffentlich aus.$"

BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading_hns:
	.string "Wähle bitte ein Themengebiet aus.$"

BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics_hns:
	.string "Hier müssen die POKéMON selbständig\n"
	.string "handeln und kämpfen.\p"
	.string "Anders als wilde POKéMON reagieren\n"
	.string "POKéMON, die mit Menschen zusammen-\l"
	.string "leben, abhängig von ihrem Wesen.$"

BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature_hns:
	.string "Je nach Wesenheit wird ein POKéMON\n"
	.string "eventuell angreifen, egal, was\n"
	.string "passiert. \p"
	.string "Ein anderes wird sich vielleicht\n"
	.string "seinem\n"
	.string "Wesen entsprechend unter allen\p"
	.string "Umständen schützen wollen. Ein anderes\n"
	.string "irritiert oder verwirrt seinen Gegner.\n"
	.string "\p"
	.string "Abhängig von seinem Wesen wird ein\n"
	.string "POKéMON Lieblingsattacken haben, die\l"
	.string "es hervorragend beherrscht.\p"
	.string "Auf der anderen Seite wird es Attacken\n"
	.string "kennen, die es nicht mag und die ihm\l"
	.string "Schwierigkeiten machen.$"

BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves_hns:
	.string "Es gibt offensive Attacken, die dem\n"
	.string "Gegner Schaden zufügen.\p"
	.string "Es gibt defensive Attacken, die auf\n"
	.string "gegnerische Attacken vorbereiten oder\l"
	.string "aber KP wiederherstellen können.\p"
	.string "Und es gibt Attacken, die den Gegner\n"
	.string "schwächen, indem sie Statusprobleme\l"
	.string "verursachen, wie Vergiftungen oder\l"
	.string "Paralyse.\p"
	.string "POKéMON werden diese 3 Kategorien mit\n"
	.string "Sicherheit im Kampf in Betracht\l"
	.string "ziehen!$"

BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered_hns:
	.string "Gibt ein TRAINER seinem POKéMON keine\n"
	.string "Anweisungen, wird es vielleicht nicht\n"
	.string "in\l"
	.string "der Lage sein, bestimmte Attacken\p"
	.string "einzusetzen. Ein POKéMON hat\n"
	.string "Schwierigkeiten mit Attacken, die es\l"
	.string "nicht mag.\p"
	.string "Kennt ein POKéMON nur Attacken, die\n"
	.string "seinem Wesen widersprechen, so kann es\l"
	.string "nicht immer sein ganzes Können zeigen.$"

BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger_hns:
	.string "Abhängig von seinem Wesen, wird ein\n"
	.string "POKéMON vielleicht auch Attacken ein-\l"
	.string "setzen, die seinem Wesen\n"
	.string "widersprechen. \p"
	.string "Benimmt es sich in bestimmten\n"
	.string "Situationen merkwürdig, beobachte es\l"
	.string "genau.$"

