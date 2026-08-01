BattleFrontier_BattleDomeLobby_hns_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleDomeLobby_OnResume_hns
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomeLobby_OnFrame_hns
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeLobby_OnWarp_hns
	.byte 0

BattleFrontier_BattleDomeLobby_OnResume_hns:
	dome_initresultstree
	end

BattleFrontier_BattleDomeLobby_OnWarp_hns:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomeLobby_EventScript_TurnPlayerNorth_hns
	.2byte 0

BattleFrontier_BattleDomeLobby_EventScript_TurnPlayerNorth_hns::
	setvar VAR_TEMP_1, 1
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattleDomeLobby_OnFrame_hns:
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleDomeLobby_EventScript_GetChallengeStatus_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleDomeLobby_EventScript_QuitWithoutSaving_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleDomeLobby_EventScript_ResumeChallenge_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleDomeLobby_EventScript_WonChallenge_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleDomeLobby_EventScript_LostChallenge_hns
	.2byte 0

BattleFrontier_BattleDomeLobby_EventScript_GetChallengeStatus_hns::
	frontier_getstatus
	end

BattleFrontier_BattleDomeLobby_EventScript_QuitWithoutSaving_hns::
	lockall
	msgbox BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting_hns, MSGBOX_DEFAULT
	closemessage
	dome_set DOME_DATA_WIN_STREAK, 0
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, FALSE
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattleDomeLobby_EventScript_WonChallenge_hns::
	call BattleFrontier_EventScript_IncrementWinStreak
	lockall
	frontier_isbrain
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleDomeLobby_EventScript_DefeatedAce_hns
	msgbox BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_GiveBattlePoints_hns

BattleFrontier_BattleDomeLobby_EventScript_DefeatedAce_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker_hns, MSGBOX_DEFAULT
BattleFrontier_BattleDomeLobby_EventScript_GiveBattlePoints_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints_hns, MSGBOX_DEFAULT
	frontier_givepoints
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
	message BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved_hns
	waitmessage
	special LoadPlayerParty
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	frontier_checkairshow
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
	dome_set DOME_DATA_HAS_WON_CHALLENGE, TRUE
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, TRUE
	special LoadPlayerParty
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	goto BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_hns

BattleFrontier_BattleDomeLobby_EventScript_LostChallenge_hns::
	lockall
	msgbox BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying_hns, MSGBOX_DEFAULT
	message BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved_hns
	waitmessage
	special LoadPlayerParty
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	frontier_checkairshow
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, FALSE
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
	special LoadPlayerParty
	special HealPlayerParty
	callnative UpdateFollowingPokemon
BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_hns::
	dome_save 0
	playse SE_SAVE
	waitse
	call BattleFrontier_EventScript_GetCantRecordBattle
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleDomeLobby_EventScript_EndChallenge_hns
	message BattleFrontier_BattleDomeLobby_Text_RecordLastMatch_hns
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	switch VAR_RESULT
	case 1, BattleFrontier_BattleDomeLobby_EventScript_EndChallenge_hns
	case 0, BattleFrontier_BattleDomeLobby_EventScript_RecordBattle_hns
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_EndChallenge_hns

BattleFrontier_BattleDomeLobby_EventScript_RecordBattle_hns::
	call BattleFrontier_EventScript_SaveBattle
BattleFrontier_BattleDomeLobby_EventScript_EndChallenge_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain_hns, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattleDomeLobby_EventScript_ResumeChallenge_hns::
	lockall
	msgbox BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou_hns, MSGBOX_DEFAULT
	message BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge_hns2_hns
	waitmessage
	dome_save CHALLENGE_STATUS_SAVING
	playse SE_SAVE
	waitse
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	goto BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge_hns

BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendant_hns::
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_hns
	end

BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendant_hns::
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_hns
	end

BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_hns::
	special SavePlayerParty
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_WelcomeSingles_hns
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_WelcomeDoubles_hns
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_hns::
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_TakeSinglesChallenge_hns
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_TakeDoublesChallenge_hns
	waitmessage
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_hns
	case 1, BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_hns
	case 2, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge_hns
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge_hns

BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_hns::
	message BattleFrontier_BattleDomeLobby_Text_WhichLevelMode_hns
	waitmessage
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
	switch VAR_RESULT
	case FRONTIER_LVL_TENT, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge_hns
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge_hns
	frontier_checkineligible
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons_hns
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
	msgbox BattleFrontier_BattleDomeLobby_Text_SelectThreeMons_hns, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	call BattleFrontier_EventScript_GetLvlMode
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
	special ChoosePartyForBattleFrontier
	waitstate
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge_hns
	msgbox BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge_hns, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge_hns
	case YES, BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge_hns
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge_hns

BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge_hns::
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
	dome_init
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	special LoadPlayerParty
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge_hnsSaveFailed_hns
	dome_inittrainers
BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge_hns::
	special SavePlayerParty
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	dome_settrainers
	msgbox BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome_hns, MSGBOX_DEFAULT
	closemessage
	call BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_hns
	special HealPlayerParty
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_CORRIDOR_HNS, 23, 6
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	waitstate
	end

BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_hns::
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_ExplainSinglesChallenge_hns
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_ExplainDoublesChallenge_hns
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_hns

BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons_hns::
	switch VAR_RESULT
	case FRONTIER_LVL_50, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons_hnsLv50_hns
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons_hnsLvOpen_hns

BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons_hnsLv50_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLv50_hns, MSGBOX_DEFAULT
	call BattleFrontier_ShowCaughtBannedSpecies
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge_hns

BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons_hnsLvOpen_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLvOpen_hns, MSGBOX_DEFAULT
	call BattleFrontier_ShowCaughtBannedSpecies
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge_hns

BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge_hnsSaveFailed_hns::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge_hns

BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge_hns::
	special LoadPlayerParty
	callnative UpdateFollowingPokemon
BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain_hns, MSGBOX_DEFAULT
BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge_hns::
	release
	end

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_hns::
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendant_hnsWalkToDoor_hns
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendant_hnsWalkToDoor_hns
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor_hns
	waitmovement 0
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_OpenSinglesDoor_hns
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_OpenDoublesDoor_hns
	waitdooranim
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendant_hnsEnterDoor_hns
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendant_hnsEnterDoor_hns
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_PlayerEnterDoor_hns
	waitmovement 0
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_CloseSinglesDoor_hns
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_CloseDoublesDoor_hns
	waitdooranim
	return

BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendant_hnsWalkToDoor_hns::
	applymovement LOCALID_DOME_ATTENDANT_SINGLES, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor_hns
	return

BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendant_hnsWalkToDoor_hns::
	applymovement LOCALID_DOME_ATTENDANT_DOUBLES, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor_hns
	return

BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendant_hnsEnterDoor_hns::
	applymovement LOCALID_DOME_ATTENDANT_SINGLES, BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor_hns
	return

BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendant_hnsEnterDoor_hns::
	applymovement LOCALID_DOME_ATTENDANT_DOUBLES, BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor_hns
	return

BattleFrontier_BattleDomeLobby_EventScript_WelcomeSingles_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomeLobby_EventScript_WelcomeDoubles_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomeLobby_EventScript_TakeSinglesChallenge_hns::
	message BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge_hns
	return

BattleFrontier_BattleDomeLobby_EventScript_TakeDoublesChallenge_hns::
	message BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge_hns
	return

BattleFrontier_BattleDomeLobby_EventScript_ExplainSinglesChallenge_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomeLobby_EventScript_ExplainDoublesChallenge_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomeLobby_EventScript_OpenSinglesDoor_hns::
	opendoor 5, 4
	return

BattleFrontier_BattleDomeLobby_EventScript_OpenDoublesDoor_hns::
	opendoor 17, 4
	return

BattleFrontier_BattleDomeLobby_EventScript_CloseSinglesDoor_hns::
	closedoor 5, 4
	return

BattleFrontier_BattleDomeLobby_EventScript_CloseDoublesDoor_hns::
	closedoor 17, 4
	return

BattleFrontier_BattleDomeLobby_Movement_WalkToDoor_hns:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor_hns:
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleDomeLobby_Movement_PlayerEnterDoor_hns:
	walk_up
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleDomeLobby_EventScript_ShowSinglesResults_hns::
	lockall
	frontier_results FRONTIER_FACILITY_DOME, FRONTIER_MODE_SINGLES
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattleDomeLobby_EventScript_ShowDoublesResults_hns::
	lockall
	frontier_results FRONTIER_FACILITY_DOME, FRONTIER_MODE_DOUBLES
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_hns::
	dome_get DOME_DATA_PREV_TOURNEY_TYPE
	call_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLv50_hns
	call_if_eq VAR_RESULT, 1, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLv50_hns
	call_if_eq VAR_RESULT, 2, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLvOpen_hns
	call_if_eq VAR_RESULT, 3, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLvOpen_hns
	fadescreen FADE_TO_BLACK
	dome_showprevtourneytree
	waitstate
	end

BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLv50_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50_hns, MSGBOX_SIGN
	return

BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLv50_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50_hns, MSGBOX_SIGN
	return

BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLvOpen_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen_hns, MSGBOX_SIGN
	return

BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLvOpen_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen_hns, MSGBOX_SIGN
	return

BattleFrontier_BattleDomeLobby_EventScript_Man_hnsiac_hns::
	dome_getwinnersname
	msgbox BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough_hns, MSGBOX_NPC
	end

BattleFrontier_BattleDomeLobby_EventScript_Lass_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation_hns, MSGBOX_NPC
	end

BattleFrontier_BattleDomeLobby_EventScript_FatMan_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound_hns, MSGBOX_NPC
	end

BattleFrontier_BattleDomeLobby_EventScript_Man_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully_hns, MSGBOX_NPC
	end

@ A few OutsideWest event scripts are inserted here instead, two of which are unused
BattleFrontier_OutsideWest_EventScript_Man3_hns::
	msgbox BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier_hns, MSGBOX_NPC
	end

@ Unused
BattleFrontier_OutsideWest_EventScript_BattleDomeSign2_hns::
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign2_hns, MSGBOX_NPC
	end

@ Unused
BattleFrontier_OutsideWest_EventScript_UnderConstructionSign_hns::
	msgbox BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction_hns, MSGBOX_NPC
	end

BattleFrontier_BattleDomeLobby_EventScript_RulesBoard_hns::
	lockall
	msgbox BattleFrontier_BattleDomeLobby_Text_RulesAreListed_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_hns::
	message BattleFrontier_BattleDomeLobby_Text_ReadWhichHeading_hns
	waitmessage
	multichoice 17, 4, MULTI_BATTLE_DOME_RULES, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattleDomeLobby_EventScript_RulesMatchup_hns
	case 1, BattleFrontier_BattleDomeLobby_EventScript_RulesTourneyTree_hns
	case 2, BattleFrontier_BattleDomeLobby_EventScript_RulesDoubleKO_hns
	case 3, BattleFrontier_BattleDomeLobby_EventScript_ExitRules_hns
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_ExitRules_hns
	end

BattleFrontier_BattleDomeLobby_EventScript_RulesMatchup_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattleDomeLobby_EventScript_RulesTourneyTree_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattleDomeLobby_EventScript_RulesDoubleKO_hns::
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattleDomeLobby_EventScript_ExitRules_hns::
	releaseall
	end

BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle_hns:
	.string "Hier wird die Strategie der Trainer auf\n"
	.string "die Probe gestellt!\p"
	.string "Willkommen im Kampfstadion!\p"
	.string "Ich erkläre dir das Einzelkampf-\n"
	.string "Turnier.$"

BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge_hns:
	.string "Möchtest du an einem Einzelkampf-\n"
	.string "Turnier teilnehmen?$"

BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain_hns:
	.string "Komm bald wieder!$"

BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge_hns:
	.string "Das Einzelkampf-Turnier wird\n"
	.string "seinem Namen gerecht. Es ist ein Turnier\l"
	.string "bestehend aus Einzelkämpfen.\p"
	.string "Jeder der Trainer nimmt drei Pokémon\n"
	.string "in das Turnier.\p"
	.string "In jedem der Kämpfe muss ein Pokémon\n"
	.string "in Reserve gehalten werden.\p"
	.string "Die anderen beiden Pokémon kämpfen\n"
	.string "zusammen gegen ihre Gegner.\p"
	.string "Schau dir die gegnerischen Pokémon an\n"
	.string "und wähle dann deine zwei eigenen\p"
	.string "Pokémon für den Kampf aus.\n"
	.string "Du gewinnst ein Turnier, indem du vier\p"
	.string "Trainer in Folge besiegst.\n"
	.string "Der Gewinner bekommt Gewinnpunkte.\p"
	.string "Wenn du das Turnier unterbrechen\n"
	.string "willst, musst du das Spiel speichern.\p"
	.string "Wenn du nicht speicherst, wirst du\n"
	.string "disqualifiziert.$"

BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge_hns:
	.string "Bevor du das Kampfstadion betrittst,\n"
	.string "musst du dein Spiel speichern. Okay?$"

BattleFrontier_BattleDomeLobby_Text_WhichLevelMode_hns:
	.string "Jedes Turnier bietet zwei Kategorien\n"
	.string "an: Level 50 und Offene Kämpfe.\l"
	.string "Wofür entscheidest du dich?$"

BattleFrontier_BattleDomeLobby_Text_SelectThreeMons_hns:
	.string "Bitte wähle drei Pokémon aus, die\n"
	.string "antreten sollen.$"

BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLvOpen_hns:
	.string "Entschuldigung!\p"
	.string "Du hast nicht 3 geeignete Pokémon.\p"
	.string "Sie dürfen auch nicht dasselbe\n"
	.string "Item halten.\p"
	.string "Eier{STR_VAR_1}.$"

BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd_hns:
	.string "Komm wieder, wenn du bereit bist.$"

BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLv50_hns:
	.string "Entschuldigung!\p"
	.string "Du hast nicht 3 geeignete Pokémon.\p"
	.string "Du brauchst 3 verschiedene Pokémon\n"
	.string "auf Level 50 oder niedriger.\p"
	.string "Sie dürfen auch nicht dasselbe\n"
	.string "Item halten.\p"
	.string "Eier{STR_VAR_1}.$"

BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome_hns:
	.string "Ich werde dir jetzt das Kampfstadion\n"
	.string "zeigen.$"

BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting_hns:
	.string "Entschuldigung!\p"
	.string "Du hast, bevor du die Herausforderung\n"
	.string "abgebrochen hast, nicht gespeichert.\p"
	.string "Daher wirst du für diese Herausforde-\n"
	.string "rung disqualifiziert. Schade!$"

BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney_hns:
	.string "Herzlichen Glückwunsch! Du hast\n"
	.string "das Turnier gewonnen!$"

@ Unused
BattleFrontier_BattleDomeLobby_Text_HereIsYourPrize_hns:
	.string "Bitte, hier ist dein Preis für deinen\n"
	.string "Sieg im Turnier des Kampfstadions.$"

@ Used by Verdanturf Tent
BattleFrontier_BattleDomeLobby_Text_ReceivedPrize_hns:
	.string "{PLAYER} gewinnt\n"
	.string "{STR_VAR_1}.$"

@ Unused
BattleFrontier_BattleDomeLobby_Text_BagFullMakeRoom_hns:
	.string "Oh, dein Beutel ist voll.\p"
	.string "Bitte schaffe Platz in deinem Beutel\n"
	.string "und komm dann zu mir.$"

BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying_hns:
	.string "Vielen Dank für die Teilnahme!$"

BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved_hns:
	.string "Dein Erfolg wird gespeichert.\n"
	.string "Bitte warten…$"

BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou_hns:
	.string "Wir haben schon auf dich gewartet!$"

BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge_hns2_hns:
	.string "Vor dem Betreten der Kampfkuppel\n"
	.string "wird gespeichert. Einverstanden?$"

BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle_hns:
	.string "Hier wird die Strategie der Trainer auf\n"
	.string "die Probe gestellt!\p"
	.string "Willkommen im Kampfstadion!\p"
	.string "Ich erkläre dir das Doppelkampf-\n"
	.string "Turnier.$"

BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge_hns:
	.string "Möchtest du an einem Doppelkampf-\n"
	.string "Turnier teilnehmen?$"

BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge_hns:
	.string "Das Doppelkampf-Turnier wird\n"
	.string "seinem Namen gerecht. Es ist ein Turnier\l"
	.string "bestehend aus Doppelkämpfen.\p"
	.string "Jeder der Trainer nimmt drei Pokémon\n"
	.string "in das Turnier.\p"
	.string "In jedem der Kämpfe muss ein Pokémon\n"
	.string "in Reserve gehalten werden.\p"
	.string "Die anderen beiden Pokémon kämpfen\n"
	.string "zusammen gegen ihre Gegner.\p"
	.string "Schau dir die gegnerischen Pokémon an\n"
	.string "und wähle dann deine zwei eigenen\p"
	.string "Pokémon für den Kampf aus.\n"
	.string "Du gewinnst ein Turnier, indem du vier\p"
	.string "Trainer in Folge besiegst.\n"
	.string "Der Gewinner bekommt Gewinnpunkte.\p"
	.string "Wenn du das Turnier unterbrechen\n"
	.string "willst, musst du das Spiel speichern.\p"
	.string "Wenn du nicht speicherst, wirst du\n"
	.string "disqualifiziert.$"

BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50_hns:
	.string "Dies sind die Ergebnisse des letzten\n"
	.string "Level 50 Einzelkampf-Turniers.$"

BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50_hns:
	.string "Dies sind die Ergebnisse des letzten\n"
	.string "Level 50 Doppelkampf-Turniers.$"

BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen_hns:
	.string "Die Ergebnisse des letzten Einzel-\n"
	.string "Kampf-Turniers der Offenen Kämpfe.$"

BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen_hns:
	.string "Die Ergebnisse des letzten Doppel-\n"
	.string "Kampf-Turniers der Offenen Kämpfe.$"

BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough_hns:
	.string "Hast du es gesehen?\n"
	.string "Ich meine, das letzte Kampfturnier?\p"
	.string "Der Gewinner, {STR_VAR_1}, war wirklich\n"
	.string "äußerst stark.\p"
	.string "Du solltest dir die Ergebnisse mal an-\n"
	.string "schauen, auf dem Monitor neben dem PC.$"

BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier_hns:
	.string "Die Kampfzone… Ich habe lange\n"
	.string "von einem Ort wie diesem geträumt…$"

@ Functionally unused
BattleFrontier_OutsideWest_Text_BattleDomeSign2_hns:
	.string "Das Kampfstadion\n"
	.string "Werde der unschlagbare Kampfstar!$"

@ Functionally unused
BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction_hns:
	.string "????????\n"
	.string "Im Aufbau$"

BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation_hns:
	.string "Gewinnt ein Trainer mehrere Turniere in\n"
	.string "Folge im Kampfstadion, wird er schnell\l"
	.string "ein Star.\p"
	.string "Der Ruf des Kampfstadions zieht\n"
	.string "starke Trainer an.\p"
	.string "Zum wahren Superstar wird der Trainer,\n"
	.string "der immer wieder Turniere gewinnt.$"

BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound_hns:
	.string "Ich habe hier gleich beim ersten Mal\n"
	.string "einen absoluten Favoriten getroffen.\p"
	.string "Natürlich hat er mich in Grund und\n"
	.string "Boden gerammt…$"

BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully_hns:
	.string "Hätte ich dieses Pokémon in Reserve\n"
	.string "gehabt, hätte ich gewonnen.\p"
	.string "Schau dir die gegnerischen Pokémon\n"
	.string "gut an, bevor du deine eigenen Pokémon\l"
	.string "für den Kampf auswählst.$"

BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker_hns:
	.string "Herzlichen Glückwunsch!\p"
	.string "Du hast den Stadionstar besiegt und\n"
	.string "das Turnier gewonnen!$"

BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints_hns:
	.string "In Anerkennung deiner phänomenalen\n"
	.string "Strategie - welche eine Frage der\p"
	.string "Schönheit ist - geben wir dir diese\n"
	.string "Gewinnpunkte.$"

BattleFrontier_BattleDomeLobby_Text_RecordLastMatch_hns:
	.string "Möchtest du deine Aufzeichnung des\n"
	.string "letzten Kampfstadion-Kampfes in\l"
	.string "deinen Kampfzonenpass aufnehmen?$"

BattleFrontier_BattleDomeLobby_Text_RulesAreListed_hns:
	.string "Die Regeln des Turniers hängen\n"
	.string "öffentlich aus.$"

BattleFrontier_BattleDomeLobby_Text_ReadWhichHeading_hns:
	.string "Wähle bitte ein Themengebiet aus.$"

BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules_hns:
	.string "Die Reihenfolge der Gegner basiert auf\n"
	.string "der Stärke der Pokémon eines Trainers.\l"
	.string "Hierbei wird vermieden, dass die\p"
	.string "stärksten Trainer gleich zu Anfang\n"
	.string "aufeinander treffen.$"

BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree_hns:
	.string "Die Turnier-Tabelle, oder wie wir sie\n"
	.string "nennen, die “Tafel”, hängt im Warte-\l"
	.string "zimmer für jeden Interessierten aus.\p"
	.string "Hier sind verschiedene Daten\n"
	.string "verzeichnet.\p"
	.string "Man findet hier die letzten Turnier-\n"
	.string "ergebnisse, Informationen zu den\l"
	.string "Pokémon der einzelnen Trainer\l"
	.string "sowie zum Kampfstil der Trainer.$"

BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules_hns:
	.string "Im Falle eines doppelten K.O.s - wenn\n"
	.string "die beiden gegnerischen Pokémon\l"
	.string "zeitgleich besiegt werden - wird ein\l"
	.string "Referee den Kampf beurteilen.$"
