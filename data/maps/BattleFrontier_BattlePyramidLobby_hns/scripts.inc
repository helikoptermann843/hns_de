BattleFrontier_BattlePyramidLobby_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidLobby_OnFrame_hns
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeLobby_OnWarp
	.byte 0

@ Unused. Pyramid uses Dome's OnWarp (presumably by mistake). Their effects are identical
BattleFrontier_BattlePyramidLobby_OnWarp_hns:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePyramidLobby_EventScript_TurnPlayerNorth_hns
	.2byte 0

BattleFrontier_BattlePyramidLobby_EventScript_TurnPlayerNorth_hns:
	setvar VAR_TEMP_1, 1
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattlePyramidLobby_OnFrame_hns:
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePyramidLobby_EventScript_GetChallengeStatus_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramidLobby_EventScript_QuitWithoutSaving_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidLobby_EventScript_ResumeChallenge_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePyramidLobby_EventScript_LostChallenge_hns
	.2byte 0

BattleFrontier_BattlePyramidLobby_EventScript_GetChallengeStatus_hns::
	frontier_getstatus
	end

BattleFrontier_BattlePyramidLobby_EventScript_QuitWithoutSaving_hns::
	lockall
	message BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag_hns
	waitmessage
	playse SE_EXP_MAX
	waitse
	closemessage
	pyramid_set PYRAMID_DATA_WIN_STREAK, 0
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, FALSE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge_hns::
	lockall
	frontier_isbrain
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_DefeatedKing_hns
	msgbox BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveBattlePoints_hns

BattleFrontier_BattlePyramidLobby_EventScript_DefeatedKing_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing_hns, MSGBOX_DEFAULT
BattleFrontier_BattlePyramidLobby_EventScript_GiveBattlePoints_hns::
	special DoBattlePyramidMonsHaveHeldItem
	call_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag_hns
	clearflag FLAG_STORING_ITEMS_IN_PYRAMID_BAG
	frontier_checkairshow
	special LoadPlayerParty
	pyramid_clearhelditems
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	message BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept_hns
	waitmessage
	playse SE_EXP_MAX
	waitse
	msgbox BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints_hns, MSGBOX_DEFAULT
	frontier_givepoints
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
	message BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait_hns
	waitmessage
	pyramid_setprize
	pyramid_save 0
	playse SE_SAVE
	waitse
	msgbox BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge_hns, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_LostChallenge_hns::
	frontier_checkairshow
	special LoadPlayerParty
	pyramid_clearhelditems
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	lockall
	message BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag_hns
	waitmessage
	playse SE_EXP_MAX
	waitse
	message BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait_hns
	waitmessage
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, FALSE
	pyramid_save 0
	playse SE_SAVE
	waitse
	msgbox BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge_hns, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_ResumeChallenge_hns::
	goto BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge_hns

BattleFrontier_BattlePyramidLobby_EventScript_Attendant_hns::
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PYRAMID
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	special SavePlayerParty
	msgbox BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid_hns, MSGBOX_DEFAULT
BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_hns::
	message BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge_hns
	waitmessage
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_hns
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_ExplainChallenge_hns
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge_hns
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge_hns

BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_hns::
	message BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode_hns
	waitmessage
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
	switch VAR_RESULT
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge_hns
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge_hns
	frontier_checkineligible
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_hns
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
	msgbox BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons_hns, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	call BattleFrontier_EventScript_GetLvlMode
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
	special ChoosePartyForBattleFrontier
	waitstate
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge_hns
	msgbox BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge_hns, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge_hns
	case YES, BattleFrontier_BattlePyramidLobby_EventScript_SaveBeforeChallenge_hns
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge_hns

BattleFrontier_BattlePyramidLobby_EventScript_SaveBeforeChallenge_hns::
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
	pyramid_init
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, TRUE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	pyramid_seedfloor
	pyramid_settrainers
	special LoadPlayerParty
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge_hnsSaveFailed_hns
BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge_hns::
	special SavePlayerParty
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	msgbox BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid_hns, MSGBOX_DEFAULT
	closemessage
	call BattleFrontier_BattlePyramidLobby_EventScript_WalkToPanelAndReceiveBag_hns
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_RESULT, 0
	special HealPlayerParty
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR_HNS, 1, 1
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	waitstate
	end

BattleFrontier_BattlePyramidLobby_EventScript_ExplainChallenge_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_hns

BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_hns::
	switch VAR_RESULT
	case FRONTIER_LVL_50, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_hnsLv50_hns
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_hnsLvOpen_hns

BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_hnsLv50_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLv50_hns, MSGBOX_DEFAULT
	call BattleFrontier_ShowCaughtBannedSpecies
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsEnd_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge_hns

BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_hnsLvOpen_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLvOpen_hns, MSGBOX_DEFAULT
	call BattleFrontier_ShowCaughtBannedSpecies
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsEnd_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge_hns

BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge_hnsSaveFailed_hns::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	goto BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge_hns

BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge_hns::
	special LoadPlayerParty
	callnative UpdateFollowingPokemon
BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_AwaitFutureChallenge_hns, MSGBOX_DEFAULT
BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge_hns::
	release
	end

BattleFrontier_BattlePyramidLobby_EventScript_HintGiver_hns::
	lockall
	applymovement LOCALID_PYRAMID_LOBBY_HINT_GIVER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait_hns, MSGBOX_DEFAULT
	call BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_hns
	msgbox BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot_hns, MSGBOX_DEFAULT
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_hns::
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
	switch VAR_RESULT
	case FRONTIER_LVL_50, BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_hnsLv50_hns
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_hnsLvOpen_hns
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePyramidLobby_EventScript_NoHint_hns
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_NoHint_hns
	return

@ Shouldnt occur
BattleFrontier_BattlePyramidLobby_EventScript_NoHint_hns::
	return

BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_hnsLv50_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_Aah_hns, MSGBOX_DEFAULT
	pyramid_get PYRAMID_DATA_WIN_STREAK_ACTIVE_50
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_hnsGetLv50Streak_hns
	setvar VAR_RESULT, 0
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_hns
	return

BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_hnsGetLv50Streak_hns::
	pyramid_get PYRAMID_DATA_WIN_STREAK_50
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_hns
	return

BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_hnsLvOpen_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_Aah_hns, MSGBOX_DEFAULT
	pyramid_get PYRAMID_DATA_WIN_STREAK_ACTIVE_OPEN
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_hnsGetLvOpenStreak_hns
	setvar VAR_RESULT, 0
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_hns
	return

BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_hnsGetLvOpenStreak_hns::
	pyramid_get PYRAMID_DATA_WIN_STREAK_OPEN
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_hns
	return

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_hns::
	copyvar VAR_0x8004, VAR_RESULT
	special GetBattlePyramidHint
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_HintParalysis_hns
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_HintPoison_hns
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_HintBurn_hns
	case 3, BattleFrontier_BattlePyramidLobby_EventScript_HintPPWaste_hns
	case 4, BattleFrontier_BattlePyramidLobby_EventScript_HintLevitate_hns
	case 5, BattleFrontier_BattlePyramidLobby_EventScript_HintTrapAbility_hns
	case 6, BattleFrontier_BattlePyramidLobby_EventScript_HintIce_hns
	case 7, BattleFrontier_BattlePyramidLobby_EventScript_HintExplosion_hns
	case 8, BattleFrontier_BattlePyramidLobby_EventScript_HintPsychic_hns
	case 9, BattleFrontier_BattlePyramidLobby_EventScript_HintRock_hns
	case 10, BattleFrontier_BattlePyramidLobby_EventScript_HintFighting_hns
	case 11, BattleFrontier_BattlePyramidLobby_EventScript_HintWeather_hns
	case 12, BattleFrontier_BattlePyramidLobby_EventScript_HintBug_hns
	case 13, BattleFrontier_BattlePyramidLobby_EventScript_HintDark_hns
	case 14, BattleFrontier_BattlePyramidLobby_EventScript_HintWater_hns
	case 15, BattleFrontier_BattlePyramidLobby_EventScript_HintGhost_hns
	case 16, BattleFrontier_BattlePyramidLobby_EventScript_HintSteel_hns
	case 17, BattleFrontier_BattlePyramidLobby_EventScript_HintFlyingDragon_hns
	case 18, BattleFrontier_BattlePyramidLobby_EventScript_HintStoneEvolve_hns
	case 19, BattleFrontier_BattlePyramidLobby_EventScript_HintNormal_hns
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintParalysis_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintParalysis_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintPoison_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPoison_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintBurn_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintBurn_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintPPWaste_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPPWaste_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintLevitate_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintLevitate_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintTrapAbility_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintIce_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintIce_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintExplosion_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintExplosion_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintPsychic_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPsychic_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintRock_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintRock_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintFighting_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintFighting_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintWeather_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintWeather_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintBug_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintBug_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintDark_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintDark_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintWater_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintWater_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintGhost_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintGhost_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintSteel_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintSteel_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintFlyingDragon_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintStoneEvolve_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintNormal_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintNormal_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_ShowResults_hns::
	lockall
	frontier_results FRONTIER_FACILITY_PYRAMID
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_WalkToPanelAndReceiveBag_hns::
	applymovement LOCALID_PYRAMID_LOBBY_ATTENDANT, BattleFrontier_BattlePyramidLobby_Movement_AttendantWalkToPanel_hns
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePyramidLobby_Movement_PlayerWalkToPanel_hns
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping_hns, MSGBOX_DEFAULT
	pyramid_get PYRAMID_DATA_WIN_STREAK
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_ReceiveNewBattleBag_hns
	msgbox BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReceiveBattleBag_hns

BattleFrontier_BattlePyramidLobby_EventScript_ReceiveNewBattleBag_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag_hns, MSGBOX_DEFAULT
BattleFrontier_BattlePyramidLobby_EventScript_ReceiveBattleBag_hns::
	message BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag_hns
	waitmessage
	playse SE_EXP_MAX
	waitse
	msgbox BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PYRAMID_LOBBY_ATTENDANT, BattleFrontier_BattlePyramidLobby_Movement_AttendantMoveAside_hns
	waitmovement 0
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePyramidLobby_Movement_PlayerStepOnPanel_hns
	waitmovement 0
	return

BattleFrontier_BattlePyramidLobby_Movement_AttendantWalkToPanel_hns:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end

BattleFrontier_BattlePyramidLobby_Movement_PlayerWalkToPanel_hns:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BattleFrontier_BattlePyramidLobby_Movement_AttendantMoveAside_hns:
	walk_right
	face_left
	step_end

BattleFrontier_BattlePyramidLobby_Movement_PlayerStepOnPanel_hns:
	walk_up
	walk_up
	step_end

BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake_hns, MSGBOX_DEFAULT
	setflag FLAG_STORING_ITEMS_IN_PYRAMID_BAG
	special TryStoreHeldItemsInPyramidBag
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_HeldItemsStoredInPyramidBag_hns
	message BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep_hns
	waitmessage
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_hns
	end

BattleFrontier_BattlePyramidLobby_EventScript_HeldItemsStoredInPyramidBag_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag_hns, MSGBOX_DEFAULT
	return

@ When exiting Battle Pyramid with a full pyramid bag and held items the player must select to keep/toss party held items and make room for any kept items by tossing from the pyramid bag
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_hns::
	multichoice 17, 6, MULTI_FRONTIER_ITEM_CHOOSE, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromBag_hns
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromParty_hns
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems_hns
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems_hns
	end

BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromBag_hns::
	special ChooseItemsToTossFromPyramidBag
	waitstate
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep_hns
	waitmessage
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_hns
	end

BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromParty_hns::
	special BattlePyramidChooseMonHeldItems
	waitstate
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep_hns
	waitmessage
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_hns
	end

BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems_hns::
	special DoBattlePyramidMonsHaveHeldItem
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_PartyStillHasHeldItems_hns
	return

BattleFrontier_BattlePyramidLobby_EventScript_PartyStillHasHeldItems_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem_hns, MSGBOX_DEFAULT
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep_hns
	waitmessage
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_hns
	end

BattleFrontier_BattlePyramidLobby_EventScript_Woman_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning_hns, MSGBOX_NPC
	end

BattleFrontier_BattlePyramidLobby_EventScript_FatMan_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems_hns, MSGBOX_NPC
	end

BattleFrontier_BattlePyramidLobby_EventScript_RulesBoard_hns::
	lockall
	msgbox BattleFrontier_BattlePyramidLobby_Text_RulesAreListed_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_hns::
	message BattleFrontier_BattlePyramidLobby_Text_ReadWhichHeading_hns
	waitmessage
	multichoice 15, 2, MULTI_BATTLE_PYRAMID_RULES, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_RulesPokemon_hns
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_RulesTrainers_hns
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_RulesMaze_hns
	case 3, BattleFrontier_BattlePyramidLobby_EventScript_RulesBag_hns
	case 4, BattleFrontier_BattlePyramidLobby_EventScript_ExitRules_hns
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_ExitRules_hns
	end

BattleFrontier_BattlePyramidLobby_EventScript_RulesPokemon_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattlePyramidLobby_EventScript_RulesTrainers_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattlePyramidLobby_EventScript_RulesMaze_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattlePyramidLobby_EventScript_RulesBag_hns::
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattlePyramidLobby_EventScript_ExitRules_hns::
	releaseall
	end

BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid_hns:
	.string "Hier wird der Mut der TRAINER\n"
	.string "auf die Probe gestellt!\p"
	.string "Willkommen in der KAMPFPYRAMIDE!\p"
	.string "Ich begleite dich bei deinen\n"
	.string "Herausforderungen.$"

BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge_hns:
	.string "Besitzt du den Mut, dich der Kampf-\n"
	.string "forschung-Herausforderung zu stellen?$"

BattleFrontier_BattlePyramidLobby_Text_AwaitFutureChallenge_hns:
	.string "Wir freuen uns auf deine nächste\n"
	.string "Herausforderung.$"

BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid_hns:
	.string "In der Kampfforschung musst du die\n"
	.string "KAMPFPYRAMIDE erforschen und\l"
	.string "versuchen, bis nach oben zu gelangen.\n"
	.string "\p"
	.string "Kämpfe dich durch sieben Etagen, die\n"
	.string "wie Irrgärten angelegt sind. TRAINER\l"
	.string "und auch wilde POKéMON warten auf\n"
	.string "dich. \p"
	.string "Auf deinem Weg dürfen dich drei\n"
	.string "POKéMON\n"
	.string "begleiten, von denen keines ein Item\l"
	.string "halten darf.\p"
	.string "Für den Aufstieg erhältst du einen\n"
	.string "PYRABEUTEL, in dem du Items verstauen\l"
	.string "kannst.\p"
	.string "Bestehst du die Herausforderung nicht,\n"
	.string "werden dir die Items im PYRABEUTEL\l"
	.string "abgenommen.\p"
	.string "Möchtest du die Herausforderung\n"
	.string "abbrechen, wähle “AUSRUHEN” und\l"
	.string "speichere dann das Spiel.\p"
	.string "Wenn du die Herausforderung ohne\n"
	.string "Speichern abbrichst, wirst du\l"
	.string "disqualifiziert.$"

BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode_hns:
	.string "In der KAMPFPYRAMIDE wird in zwei\n"
	.string "Kategorien gekämpft: Lv. 50 und Offene\l"
	.string "Kämpfe. Wofür entscheidest du dich?$"

BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons_hns:
	.string "Wunderbar! Nun wähle die drei\n"
	.string "POKéMON aus, die dich begleiten\l"
	.string "sollen.$"

BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLvOpen_hns:
	.string "Wir haben da ein kleines Problem…\p"
	.string "Deine drei POKéMON sind nicht\n"
	.string "teilnahmeberechtigt.\p"
	.string "Keines von ihnen darf ein Item\n"
	.string "halten.\p"
	.string "EIer{STR_VAR_1} nicht zugelassen.\p"
	.string "Bitte komm wieder, wenn du so weit\n"
	.string "bist.$"

BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLv50_hns:
	.string "Wir haben da ein kleines Problem…\p"
	.string "Deine drei POKéMON sind nicht\n"
	.string "teilnahmeberechtigt.\p"
	.string "Du brauchst POKéMON von Level 50\n"
	.string "oder weniger.\p"
	.string "Keines von ihnen darf ein Item\n"
	.string "halten.\p"
	.string "EIer{STR_VAR_1} nicht zugelassen.\p"
	.string "Bitte komm wieder, wenn du so weit\n"
	.string "bist.$"

BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsEnd_hns:
	.string "Sobald du fertig bist, bitte\n"
	.string "sprich mit mir.$"

BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge_hns:
	.string "Bevor du die KAMPFPYRAMIDE betrittst,\n"
	.string "musst du dein Spiel speichern. Okay?$"

BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid_hns:
	.string "Sehr gut. Nun werde ich dich zur\n"
	.string "KAMPFPYRAMIDE bringen.$"

BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping_hns:
	.string "Wir werden deinen BEUTEL sicher\n"
	.string "für dich aufbewahren, {PLAYER}.$"

BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag_hns:
	.string "Bitte nimm diesen PYRABEUTEL.$"

BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag_hns:
	.string "Bitte nimm diesen PYRABEUTEL.$"

BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag_hns:
	.string "{PLAYER} tauscht den BEUTEL gegen\n"
	.string "den PYRABEUTEL.$"

BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel_hns:
	.string "Stellst du dich auf diese Bodenplatte,\n"
	.string "gelangst du auf die nächste Ebene der\l"
	.string "KAMPFPYRAMIDE.\p"
	.string "Ich hoffe, du überstehst das Abenteuer\n"
	.string "unbeschadet.$"

BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag_hns:
	.string "Da haben wir aber ein heftiges\n"
	.string "Problem! \p"
	.string "Du hast, bevor du die Herausforderung\n"
	.string "abgebrochen hast, nicht gespeichert.\p"
	.string "Daher wirst du für diese Herausforde-\n"
	.string "rung disqualifiziert. Schade!\p"
	.string "Hier hast du deinen BEUTEL zurück.\p"
	.string "{PLAYER} hat den BEUTEL erhalten.$"

BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid_hns:
	.string "Schön, dich wiederzusehen!\p"
	.string "Du hast die KAMPFPYRAMIDE erobert!\n"
	.string "Hervorragend, hervorragend!$"

BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake_hns:
	.string "Äh, wir haben da ein kleines Problem.\n"
	.string "\p"
	.string "Eines deiner POKéMON hält ein Item.\n"
	.string "Bedauerlicherweise können Items, die\p"
	.string "du in der KAMPFPYRAMIDE erhalten hast,\n"
	.string "nicht behalten werden.$"

BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag_hns:
	.string "Alle Items, die von deinen POKéMON\n"
	.string "gehalten werden, werden im PYRABEUTEL\l"
	.string "verstaut, {PLAYER}.$"

BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep_hns:
	.string "Tut mir Leid, aber in deinem\l"
	.string "PYRABEUTEL\n"
	.string "ist nicht genug Platz für alle Items.\p"
	.string "\p"
	.string "Bitte such dir die Items aus, die du\n"
	.string "mitnehmen möchtest.$"

BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem_hns:
	.string "Eines deiner POKéMON hält immer noch\n"
	.string "ein Item.$"

BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep_hns:
	.string "Bitte such dir die Items aus, die du\n"
	.string "mitnehmen möchtest.$"

@ Unused
BattleFrontier_BattlePyramidLobby_Text_ReturnedEverythingMonsHeld_hns:
	.string "{PLAYER} returned everything that\n"
	.string "the POKéMON held.$"

BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept_hns:
	.string "Dein PYRABEUTEL wird hier von uns\n"
	.string "aufbewahrt. Wenn du das nächste Mal\p"
	.string "antrittst, bekommst du ihn wieder.\n"
	.string "{PLAYER} tauscht den PYRABEUTEL gegen\l"
	.string "den BEUTEL ein.$"

BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait_hns:
	.string "Dein Erfolg wird gespeichert.\n"
	.string "Bitte warten.$"

@ Unused
BattleFrontier_BattlePyramidLobby_Text_ForConqueringPyramidTakeThis_hns:
	.string "As a memento for conquering\n"
	.string "the BATTLE PYRAMID, please take this.$"

@ Unused
BattleFrontier_BattlePyramidLobby_Text_ReceivedPrizeItem_hns:
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

@ Unused
BattleFrontier_BattlePyramidLobby_Text_BagIsFull_hns:
	.string "…Ah… Your BAG appears to be filled.\p"
	.string "Please return after you’ve organized\n"
	.string "your BAG’s contents.$"

BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag_hns:
	.string "Das muss für dich enttäuschend sein…\p"
	.string "Hier ist dein BEUTEL.\p"
	.string "{PLAYER} bekommt den BEUTEL zurück.$"

BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge_hns:
	.string "Wir freuen uns auf deine nächste\n"
	.string "Herausforderung.$"

@ Unused
BattleFrontier_BattlePyramidLobby_Text_HereIsPrize_hns:
	.string "We have been looking forward to\n"
	.string "your arrival!\p"
	.string "Here is your prize for conquering\n"
	.string "the PYRAMID.$"

BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait_hns:
	.string "Willkommen…\n"
	.string "Ich freue mich darauf, dir zu\n"
	.string "erklären, \p"
	.string "welche Schwierigkeiten dich in der\n"
	.string "KAMPFPYRAMIDE erwarten…$"

BattleFrontier_BattlePyramidLobby_Text_Aah_hns:
	.string "… … … … …\n"
	.string "…\l"
	.string "… … … … …\l"
	.string "…\p"
	.string "… … … … …\n"
	.string "…\l"
	.string "Aaah!$"

BattleFrontier_BattlePyramidLobby_Text_HintParalysis_hns:
	.string "Ich sehe einen Funkenflug…\p"
	.string "Und in diesem sehe ich deine POKéMON\n"
	.string "gegen Paralyse ankämpfen…$"

BattleFrontier_BattlePyramidLobby_Text_HintPoison_hns:
	.string "Ich sehe Gift…\p"
	.string "Und ich sehe, wie deine POKéMON unter\n"
	.string "der Wirkung des Gifts leiden…$"

BattleFrontier_BattlePyramidLobby_Text_HintBurn_hns:
	.string "Ich sehe helle, rote Flammen…\p"
	.string "Und ich sehe, wie deine POKéMON sich\n"
	.string "gegen Verbrennungen wehren…$"

BattleFrontier_BattlePyramidLobby_Text_HintPPWaste_hns:
	.string "Ich spüre den enormen Druck\n"
	.string "aufgestauter Wut…\p"
	.string "Es ist ein Fluch…\p"
	.string "Und ich sehe, wie deinen POKéMON KP\n"
	.string "entzogen werden und sie keine Kraft\l"
	.string "haben, VERZWEIFLER anzuwenden…$"

BattleFrontier_BattlePyramidLobby_Text_HintLevitate_hns:
	.string "Ich sehe schwebende POKéMON…\p"
	.string "Und ich sehe deine POKéMON, die\n"
	.string "frustriert wirkungslose BODEN-\l"
	.string "Attacken anwenden…$"

BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility_hns:
	.string "Ich sehe Energie vom Grund aufsteigen…\n"
	.string "\p"
	.string "Und ich sehe deine POKéMON in der\n"
	.string "Umklammerung dieser Energie…$"

BattleFrontier_BattlePyramidLobby_Text_HintIce_hns:
	.string "Ich sehe POKéMON und die Kälte des\n"
	.string "Eises…\p"
	.string "Und ich sehe, wie deine POKéMON sich\n"
	.string "gegen die Kälte der Attacken wehren…$"

BattleFrontier_BattlePyramidLobby_Text_HintExplosion_hns:
	.string "Ich sehe einen Orkan von Attacken, die\n"
	.string "den Anwender gefährden…\p"
	.string "Und ich sehe deine POKéMON, die\n"
	.string "ihm zum Opfer fallen…$"

BattleFrontier_BattlePyramidLobby_Text_HintPsychic_hns:
	.string "Ich sehe PSYCHO-POKéMON…\p"
	.string "Und ich sehe deine POKéMON, die unter\n"
	.string "den PSYCHO-Attacken leiden…$"

BattleFrontier_BattlePyramidLobby_Text_HintRock_hns:
	.string "Ich sehe GESTEIN-POKéMON…\p"
	.string "Und ich sehe deine POKéMON, die unter\n"
	.string "den GESTEIN-Attacken leiden…$"

BattleFrontier_BattlePyramidLobby_Text_HintFighting_hns:
	.string "Ich sehe KAMPF-POKéMON…\p"
	.string "Und ich sehe deine POKéMON, die unter\n"
	.string "den KAMPF-Attacken leiden…$"

BattleFrontier_BattlePyramidLobby_Text_HintWeather_hns:
	.string "REGENTANZ… SONNENTAG…\n"
	.string "SANDSTURM… HAGELSTURM…\p"
	.string "Ich sehe POKéMON, die mit dem Wetter\n"
	.string "stärker werden…\p"
	.string "Ich sehe deine POKéMON, verwirrt durch\n"
	.string "die verschiedenen Attacken-Arten…$"

BattleFrontier_BattlePyramidLobby_Text_HintBug_hns:
	.string "Ich sehe KÄFER-POKéMON…\p"
	.string "Und ich sehe deine POKéMON, die unter\n"
	.string "verschiedenen Attacken leiden…$"

BattleFrontier_BattlePyramidLobby_Text_HintDark_hns:
	.string "Ich sehe UNLICHT-POKéMON…\p"
	.string "Und ich sehe deine POKéMON, die unter\n"
	.string "UNLICHT-Attacken leiden…$"

BattleFrontier_BattlePyramidLobby_Text_HintWater_hns:
	.string "Ich sehe WASSER-POKéMON…\p"
	.string "Und ich sehe deine POKéMON, die unter\n"
	.string "WASSER-Attacken leiden…$"

BattleFrontier_BattlePyramidLobby_Text_HintGhost_hns:
	.string "Ich sehe GEIST-POKéMON…\p"
	.string "Und ich sehe deine POKéMON, die unter\n"
	.string "GEIST-Attacken leiden…$"

BattleFrontier_BattlePyramidLobby_Text_HintSteel_hns:
	.string "Ich sehe STAHL-POKéMON…\p"
	.string "Und ich sehe deine POKéMON, die unter\n"
	.string "enorm starken Attacken leiden…$"

BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon_hns:
	.string "Ich sehe fliegende POKéMON…\p"
	.string "Und ich sehe deine POKéMON, die unter\n"
	.string "enorm starken Attacken leiden…$"

BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve_hns:
	.string "Ich sehe die, die durch die Kraft von\n"
	.string "Steinen entwickelt wurden…\p"
	.string "Ich spüre Feuer, Wasser und\n"
	.string "Elektrizität…\p"
	.string "Und ich sehe deine POKéMON, wie sie\n"
	.string "unter diesen Kräften leiden…$"

BattleFrontier_BattlePyramidLobby_Text_HintNormal_hns:
	.string "Ich sehe NORMAL-POKéMON…\p"
	.string "Und ich sehe deine POKéMON, die unter\n"
	.string "enorm starken Attacken leiden…$"

BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot_hns:
	.string "Ob du meinem Orakel Glauben schenkst\n"
	.string "oder nicht, liegt allein bei dir…\p"
	.string "Die Zukunft lässt sich stets ändern…\n"
	.string "Ich wünsche dir einen sicheren Weg…$"

BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning_hns:
	.string "Wusstest du das nicht?\p"
	.string "Wenn du schnell rennst, werden TRAINER\n"
	.string "auf dich aufmerksam und fordern dich\p"
	.string "heraus. Wenn du ihnen aus dem Weg\n"
	.string "gehen\n"
	.string "willst, schau ihnen nicht in die Augen\l"
	.string "und schleich an ihnen vorbei.$"

BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems_hns:
	.string "Aaaaaaaaaaaarghuaaaaaaargh!\p"
	.string "Ich hatte so viele Items, und nun\n"
	.string "habe ich alle verloren, weil ich\n"
	.string "verloren\l"
	.string "habe!\p"
	.string "Aaaaaaaaaaaarghuaaaaaaargh!$"

BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing_hns:
	.string "Willkommen zurück!\n"
	.string "Dir ist das Undenkbare gelungen!\p"
	.string "Du hast den PYRAKÖNIG besiegt\n"
	.string "und die KAMPFPYRAMIDE erobert!$"

BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints_hns:
	.string "Junger Forschergeist!\n"
	.string "In Anerkennung deines Mutes\l"
	.string "geben wir dir Gewinnpunkte.$"

BattleFrontier_BattlePyramidLobby_Text_RulesAreListed_hns:
	.string "Die Regeln der Kampfforschung hängen\n"
	.string "öffentlich aus.$"

BattleFrontier_BattlePyramidLobby_Text_ReadWhichHeading_hns:
	.string "Wähle bitte ein Themengebiet aus.$"

BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules_hns:
	.string "Wurde die KAMPFPYRAMIDE erobert,\n"
	.string "werden die wilden POKéMON in ihr\l"
	.string "gegen andere ausgetauscht.\p"
	.string "Untersuche, beobachte und erfahre,\n"
	.string "welche wilden POKéMON auf dich warten.$"

BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules_hns:
	.string "Im Inneren der KAMPFPYRAMIDE liegen\n"
	.string "TRAINER auf der Lauer und warten\l"
	.string "auf dich.\p"
	.string "Auf jeder Ebene können sich bis zu\n"
	.string "acht TRAINER befinden.\p"
	.string "Besiegst du einen von ihnen, bekommst\n"
	.string "du wertvolle Hinweise mit auf den Weg.$"

BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules_hns:
	.string "Die Labyrinthe in der KAMPFPYRAMIDE\n"
	.string "ändern sich ständig. Jedes Mal, wenn\p"
	.string "du sie erneut betrittst, sehen sie\n"
	.string "anders aus.\l"
	.string "Die Beleuchtung ist spärlich, daher\n"
	.string "sei \p"
	.string "vorsichtig. Hast du ein wildes PKMN\n"
	.string "oder\l"
	.string "einen TRAINER besiegt, wird es heller.$"

BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules_hns:
	.string "Wenn du in der KAMPFPYRAMIDE\n"
	.string "unterwegs bist, dient der PYRABEUTEL\l"
	.string "dir als BEUTEL.\p"
	.string "Es gibt zwei verschiedene PYRABEUTEL:\n"
	.string "Einen für das Abenteuer Level 50 und\l"
	.string "einen für das Abenteuer Offene Kämpfe.\n"
	.string "\p"
	.string "In ihnen kannst du 10 Items in einer\n"
	.string "maximalen Anzahl von 99 Stück pro\l"
	.string "Item verstauen.\p"
	.string "Scheiterst du, ist der Inhalt des\n"
	.string "PYRABEUTELs verloren.$"

