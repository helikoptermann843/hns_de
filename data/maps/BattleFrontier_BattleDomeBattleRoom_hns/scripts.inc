@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_DOME_PLAYER).
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_1.
@ The graphics of the opponent are represented with VAR_OBJ_GFX_ID_0, which will ultimately be set by dome_setopponentgfx.

.set NO_DRAW,       0
.set DRAW_TRAINER,  1
.set DRAW_TUCKER,   2

BattleFrontier_BattleDomeBattleRoom_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleDomeBattleRoom_OnTransition_hns
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomeBattleRoom_OnFrame_hns
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeBattleRoom_OnWarp_hns
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleDomeBattleRoom_OnResume_hns
	.byte 0

BattleFrontier_BattleDomeBattleRoom_OnTransition_hns:
	setflag FLAG_TEMP_HIDE_FOLLOWER
	dome_setopponentgfx
	frontier_get FRONTIER_DATA_BATTLE_NUM
	copyvar VAR_TEMP_F, VAR_RESULT
	call_if_eq VAR_RESULT, DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos_hns
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_hns
	end

BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_hns::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_hnsMale_hns
	goto_if_eq VAR_RESULT, FEMALE, BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_hnsFemale_hns
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_hnsMale_hns::
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_GOLD_NORMAL_HNS
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_hnsFemale_hns::
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_KRIS_NORMAL_HNS
	return

BattleFrontier_BattleDomeBattleRoom_OnFrame_hns:
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_hns
	.2byte 0

BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_hns::
	lockall
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum_hns
	call_if_eq VAR_RESULT, DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat_hns
	applymovement LOCALID_DOME_ANNOUNCER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hns
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome_hns, MSGBOX_DEFAULT
	closemessage
	showobjectat LOCALID_DOME_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM_HNS
	goto_if_ne VAR_TEMP_F, DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnter_hns
	goto_if_ne VAR_TEMP_E, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnter_hnsForTucker_hns
BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnter_hns::
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnter_hns
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_hns

BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnter_hnsForTucker_hns::
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnter_hnsForTucker_hns
BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_hns::
	playse SE_M_ENCORE2
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround_hns
	waitmovement 0
	goto_if_ne VAR_TEMP_F, DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_hns
	goto_if_ne VAR_TEMP_E, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_hns
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_hns::
	dome_getopponentname
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward_hns
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_OpponentStepForward_hns
	waitmovement 0
	tower_getopponentintro 0
	msgbox gStringVar4, MSGBOX_DEFAULT
	closemessage
	dome_initopponentparty
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoDomeBattle_hns
	setvar VAR_TEMP_2, NO_DRAW
	switch VAR_RESULT
	case B_OUTCOME_WON, BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_hns
	case B_OUTCOME_LOST, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_hns
	case B_OUTCOME_FORFEITED, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_hns
	setvar VAR_TEMP_2, DRAW_TRAINER
BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_hns::
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait_hns, MSGBOX_DEFAULT
	closemessage
	playse SE_M_ENCORE2
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround_hns
	delay 60
	applymovement LOCALID_DOME_REFEREE, BattleFrontier_BattleDomeBattleRoom_Movement_RefereeEnter_hns
	waitmovement 0
	applymovement LOCALID_DOME_ANNOUNCER, BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerFaceLeft_hns
	waitmovement 0
	delay 180
	applymovement LOCALID_DOME_REFEREE, BattleFrontier_BattleDomeBattleRoom_Movement_RefereeExit_hns
	waitmovement 0
	goto_if_eq VAR_TEMP_2, DRAW_TUCKER, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_hns @ Tucker always wins on a draw
	dome_compareseeds
	switch VAR_RESULT
	case 1, BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_hns
BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_hns::
	applymovement LOCALID_DOME_ANNOUNCER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	dome_getopponentname
	call_if_eq VAR_TEMP_2, NO_DRAW, BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWon_hns
	call_if_eq VAR_TEMP_2, DRAW_TRAINER, BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWon_hnsDraw_hns
	call_if_eq VAR_TEMP_2, DRAW_TUCKER, BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerWonDraw_hns
	playse SE_M_ENCORE2
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround_hns
	delay 60
BattleFrontier_BattleDomeBattleRoom_EventScript_LostTourney_hns::
	dome_resolvewinners DOME_PLAYER_LOST_MATCH
BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby_hnsLost_hns::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby_hns

BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWon_hns::
	frontier_gettrainername STR_VAR_2
	message BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWon_hnsDraw_hns::
	frontier_gettrainername STR_VAR_1
	message BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerWonDraw_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTucker_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_hns::
	applymovement LOCALID_DOME_ANNOUNCER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	call_if_eq VAR_TEMP_2, NO_DRAW, BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWon_hns
	call_if_eq VAR_TEMP_2, DRAW_TRAINER, BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWon_hnsDraw_hns
	playse SE_M_ENCORE2
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround_hns
	delay 60
	dome_getroundtext
	dome_resolvewinners DOME_PLAYER_WON_MATCH
	frontier_get FRONTIER_DATA_BATTLE_NUM
	addvar VAR_RESULT, 1
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
	switch VAR_RESULT
	case DOME_ROUNDS_COUNT, BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney_hns
	setvar VAR_0x8006, 1
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_PRE_BATTLE_ROOM_HNS, 5, 3
	waitstate

BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney_hns::
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerApproachAudience_hns
	waitmovement 0
	frontier_get FRONTIER_DATA_LVL_MODE
	switch VAR_RESULT
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleDomeBattleRoom_EventScript_WonLvOpenTourney_hns
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_CelebrateWin_hns

BattleFrontier_BattleDomeBattleRoom_EventScript_WonLvOpenTourney_hns::
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp_hns, MSGBOX_DEFAULT
BattleFrontier_BattleDomeBattleRoom_EventScript_CelebrateWin_hns::
	special DoDomeConfetti
	playse SE_M_ENCORE2
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround_hns
	delay 60
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby_hns

BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWon_hns::
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWon_hnsDraw_hns::
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hns::
	dome_get DOME_DATA_ATTEMPTED_CHALLENGE
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsFirstAttempt_hns
	dome_get DOME_DATA_HAS_WON_CHALLENGE
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsNeverWon_hns
	dome_get DOME_DATA_WIN_STREAK_ACTIVE
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsBrokenStreak_hns
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsChampion_hns
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsFirstAttempt_hns::
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum_hns
	switch VAR_RESULT
	case DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsFirstAttempt_hnsRound1_hns
	case DOME_ROUND2, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsFirstAttempt_hnsRound2_hns
	case DOME_SEMIFINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsFirstAttempt_hnsSemifinal_hns
	case DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsFirstAttempt_hnsFinal_hns
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsFirstAttempt_hnsRound1_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsFirstAttempt_hnsRound2_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_RisingStar_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsFirstAttempt_hnsSemifinal_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsFirstAttempt_hnsFinal_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsNeverWon_hns::
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum_hns
	switch VAR_RESULT
	case DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsNeverWon_hnsRound1_hns
	case DOME_ROUND2, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsNeverWon_hnsRound2_hns
	case DOME_SEMIFINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsNeverWon_hnsSemifinal_hns
	case DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsNeverWon_hnsFinal_hns
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsNeverWon_hnsRound1_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsNeverWon_hnsRound2_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsNeverWon_hnsSemifinal_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsNeverWon_hnsFinal_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsChampion_hns::
	goto_if_ne VAR_TEMP_F, DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsChampion_hnsNoTucker_hns
	switch VAR_TEMP_E
	case FRONTIER_BRAIN_SILVER, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsPreTuckerSilver_hns
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsPreTuckerGold_hns
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsPreTuckerSilver_hns
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsPreTuckerGold_hns
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsChampion_hnsNoTucker_hns::
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum_hns
	switch VAR_RESULT
	case DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsChampion_hnsRound1_hns
	case DOME_ROUND2, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsChampion_hnsRound2_hns
	case DOME_SEMIFINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsChampion_hnsSemifinal_hns
	case DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsChampion_hnsFinal_hns
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsChampion_hnsRound1_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsChampion_hnsRound2_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsChampion_hnsSemifinal_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsChampion_hnsFinal_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsPreTuckerSilver_hns::
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsPreTuckerGold_hns::
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched_hns, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsBrokenStreak_hns::
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum_hns
	switch VAR_RESULT
	case DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsBrokenStreak_hnsRound1_hns
	case DOME_ROUND2, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsBrokenStreak_hnsRound2_hns
	case DOME_SEMIFINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsBrokenStreak_hnsSemifinal_hns
	case DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsBrokenStreak_hnsFinal_hns
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsBrokenStreak_hnsRound1_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsBrokenStreak_hnsRound2_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsBrokenStreak_hnsSemifinal_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_hnsBrokenStreak_hnsFinal_hns::
	message BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory_hns
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum_hns::
	frontier_get FRONTIER_DATA_BATTLE_NUM
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_hns::
	switch VAR_TEMP_E
	case FRONTIER_BRAIN_SILVER, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_hnsSilver_hns
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_hnsGold_hns
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_hnsSilver_hns
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_hnsGold_hns

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_hnsSilver_hns::
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_hns

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_hnsGold_hns::
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker_hns, MSGBOX_DEFAULT
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_hns::
	closemessage
	applymovement LOCALID_DOME_AUDIENCE_TWIN, BattleFrontier_BattleDomeBattleRoom_Movement_AudienceTwinJump_hns
	applymovement LOCALID_DOME_ANNOUNCER, BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerMoveForTuckerEntrance_hns
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerEnterAndDance_hns
	playse SE_M_ENCORE2
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround_hns
	waitse
	playse SE_M_ENCORE2
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround_hns
	waitse
	playse SE_M_ENCORE2
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround_hns
	waitse
	playse SE_M_ENCORE2
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround_hns
	waitse
	playse SE_M_ENCORE2
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround_hns
	waitse
	waitmovement 0
	message BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant_hns
	waitmessage
	playse SE_M_ENCORE2
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround_hns
	waitse
	switch VAR_TEMP_E
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro_hns
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_hns
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_hns
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_hns
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro_hns, MSGBOX_DEFAULT
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_hns::
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy_hns, MSGBOX_DEFAULT
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoTuckerBattle_hns
	switch VAR_RESULT
	case B_OUTCOME_LOST, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker_hns
	case B_OUTCOME_FORFEITED, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker_hns
	case B_OUTCOME_DREW, BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerDraw_hns
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer_hns, MSGBOX_DEFAULT
	dome_resolvewinners DOME_PLAYER_WON_MATCH
	frontier_getsymbols
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney_hns
	closemessage
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerApproachPlayer_hns
	waitmovement 0
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass_hns, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_SYMBOL
	message BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol_hns
	waitmessage
	waitfanfare
	frontier_givesymbol
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney_hns

BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro_hns::
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_hns
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro_hns, MSGBOX_DEFAULT
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_hns::
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess_hns, MSGBOX_DEFAULT
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoTuckerBattle_hns
	switch VAR_RESULT
	case B_OUTCOME_LOST, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker_hns
	case B_OUTCOME_FORFEITED, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker_hns
	case B_OUTCOME_DREW, BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerDraw_hns
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer_hns, MSGBOX_DEFAULT
	dome_resolvewinners DOME_PLAYER_WON_MATCH
	frontier_getsymbols
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney_hns
	closemessage
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerApproachPlayer_hns
	waitmovement 0
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed_hns, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_SYMBOL
	message BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine_hns
	waitmessage
	waitfanfare
	frontier_givesymbol
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney_hns

BattleFrontier_BattleDomeBattleRoom_EventScript_DoTuckerBattle_hns::
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTucker_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward_hns2_hns
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerStepForward_hns
	waitmovement 0
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoDomeBattle_hns
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker_hns::
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker_hns, MSGBOX_DEFAULT
	playse SE_M_ENCORE2
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround_hns
	waitse
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostTourney_hns

BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerDraw_hns::
	setvar VAR_TEMP_2, DRAW_TUCKER
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_hns

BattleFrontier_BattleDomeBattleRoom_EventScript_DoDomeBattle_hns::
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
	special HealPlayerParty
	setvar VAR_TEMP_9, 1
	dofacilitytrainerbattle FACILITY_BATTLE_DOME
	waitstate
	setvar VAR_TEMP_9, 0
	dome_restorehelditems
	special HealPlayerParty
	dome_resetsketch
	return

BattleFrontier_BattleDomeBattleRoom_OnWarp_hns:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_hns
	.2byte 0

BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_hns::
	hideobjectat LOCALID_DOME_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM_HNS
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_hns
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_hns
	setvar VAR_TEMP_1, 1
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisible_hns
	frontier_get FRONTIER_DATA_BATTLE_NUM
	goto_if_ne VAR_RESULT, DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_EndSetUpObjects_hns
	frontier_getbrainstatus
	copyvar VAR_TEMP_E, VAR_RESULT
	goto_if_eq VAR_RESULT, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleDomeBattleRoom_EventScript_EndSetUpObjects_hns
	call BattleFrontier_EventScript_SetBrainObjectGfx
	setobjectxyperm LOCALID_DOME_OPPONENT, 13, 9
	removeobject LOCALID_DOME_OPPONENT
	delay 1
	addobject LOCALID_DOME_OPPONENT
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisible_hnsFacingUp_hns
BattleFrontier_BattleDomeBattleRoom_EventScript_EndSetUpObjects_hns::
	end

BattleFrontier_BattleDomeBattleRoom_OnResume_hns:
	call_if_eq VAR_TEMP_9, 1, BattleFrontier_BattleDomeBattleRoom_EventScript_CallAddAudience_hns
	end

BattleFrontier_BattleDomeBattleRoom_EventScript_CallAddAudience_hns::
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_hns
	return

@ Add audience members to supplement the permanent object event audience
BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_hns::
	call_if_eq VAR_TEMP_F, DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound1Audience_hns
	call_if_eq VAR_TEMP_F, DOME_ROUND2, BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound2Audience_hns
	call_if_eq VAR_TEMP_F, DOME_SEMIFINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AddSemifinalAudience_hns
	call_if_eq VAR_TEMP_F, DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AddFinalAudience_hns
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound1Audience_hns::
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound2Audience_hns::
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 0
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AddSemifinalAudience_hns::
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
	createvobject OBJ_EVENT_GFX_WOMAN_2, 7, 9, 0
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
	createvobject OBJ_EVENT_GFX_LASS, 10, 12, 0
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 0
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 15, 2, 1
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 16, 3, 1
	createvobject OBJ_EVENT_GFX_WOMAN_2, 17, 4, 1
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 9, 1
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 23, 13, 1
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 5, 2
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 6, 2
	createvobject OBJ_EVENT_GFX_WOMAN_5, 31, 8, 2
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AddFinalAudience_hns::
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 0, 2, 0
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
	createvobject OBJ_EVENT_GFX_BEAUTY, 2, 15, 0
	createvobject OBJ_EVENT_GFX_MAN_5, 3, 5, 0
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 5, 7, 0
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
	createvobject OBJ_EVENT_GFX_WOMAN_2, 7, 9, 0
	createvobject OBJ_EVENT_GFX_WOMAN_3, 8, 10, 0
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
	createvobject OBJ_EVENT_GFX_LASS, 10, 12, 0
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
	createvobject OBJ_EVENT_GFX_BEAUTY, 12, 14, 0
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 2
	createvobject OBJ_EVENT_GFX_HIKER, 14, 12, 2
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 15, 2, 1
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 16, 3, 1
	createvobject OBJ_EVENT_GFX_WOMAN_2, 17, 4, 1
	createvobject OBJ_EVENT_GFX_WOMAN_3, 18, 6, 1
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 9, 1
	createvobject OBJ_EVENT_GFX_MAN_2, 21, 10, 1
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 23, 13, 1
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 24, 14, 1
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
	createvobject OBJ_EVENT_GFX_FAT_MAN, 27, 3, 2
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 5, 2
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 6, 2
	createvobject OBJ_EVENT_GFX_WOMAN_5, 31, 8, 2
	return

BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisible_hns:
	set_invisible
	step_end

BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnter_hns:
	set_visible
	delay_16
	walk_up
	walk_up
	walk_up
	walk_right
BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward_hns:
	walk_right
	step_end

BattleFrontier_BattleDomeBattleRoom_Movement_PlayerApproachAudience_hns:
	walk_up
	step_end

@ Identical to Movement_PlayerEnter
BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnter_hnsForTucker_hns:
	set_visible
	delay_16
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward_hns2_hns:
	walk_right
	step_end

BattleFrontier_BattleDomeBattleRoom_Movement_OpponentStepForward_hns:
	walk_left
	step_end

BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisible_hnsFacingUp_hns:
	face_up
	set_invisible
	step_end

BattleFrontier_BattleDomeBattleRoom_Movement_TuckerEnterAndDance_hns:
	set_visible
	walk_up
	walk_up
	walk_up
	face_left
	delay_8
	delay_4
	face_down
	delay_8
	delay_4
	face_right
	delay_8
	delay_4
	face_up
	delay_8
	delay_4
	face_left
	delay_16
	walk_fast_up
	walk_fast_up
	face_left
	delay_8
	delay_4
	face_down
	delay_8
	delay_4
	face_right
	delay_8
	delay_4
	face_up
	delay_8
	delay_4
	face_left
	jump_2_left
	unlock_facing_direction
	face_up
	lock_facing_direction
	jump_2_left
	jump_2_left
	unlock_facing_direction
	face_right
	lock_facing_direction
	jump_2_left
	unlock_facing_direction
	face_down
	delay_2
	face_left
	delay_8
	delay_4
	face_up
	delay_8
	delay_4
	face_right
	delay_8
	delay_4
	face_down
	delay_8
	delay_4
	face_left
	delay_4
	face_up
	delay_4
	face_right
	delay_4
	face_down
	delay_4
	face_left
	delay_2
	face_up
	delay_2
	face_right
	delay_2
	face_down
	delay_2
	face_left
	lock_facing_direction
	walk_right
	walk_slow_right
	walk_right
	walk_slow_right
	unlock_facing_direction
	face_up
	delay_16
	jump_in_place_up
	jump_in_place_up
	delay_16
	walk_right
	walk_right
	walk_right
	jump_in_place_up
	delay_16
	walk_right
	walk_down
	walk_down
	face_left
	delay_2
	face_up
	delay_2
	face_right
	delay_2
	face_down
	delay_2
	face_left
	delay_4
	walk_left
	walk_left
	step_end

BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerMoveForTuckerEntrance_hns:
	delay_16
	delay_16
	walk_left
	walk_left
	walk_in_place_faster_right
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_right
	walk_right
	walk_in_place_faster_down
	step_end

BattleFrontier_BattleDomeBattleRoom_Movement_TuckerStepForward_hns:
	walk_left
	step_end

BattleFrontier_BattleDomeBattleRoom_Movement_TuckerApproachPlayer_hns:
	walk_left
	walk_left
	step_end

BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround_hns::
	turnvobject 0, DIR_EAST
	turnvobject 2, DIR_EAST
	turnvobject 4, DIR_EAST
	turnvobject 6, DIR_EAST
	turnvobject 8, DIR_EAST
	turnvobject 10, DIR_WEST
	turnvobject 12, DIR_WEST
	turnvobject 14, DIR_WEST
	turnvobject 16, DIR_WEST
	turnvobject 18, DIR_WEST
	turnvobject 20, DIR_EAST
	turnvobject 22, DIR_EAST
	turnvobject 24, DIR_EAST
	turnvobject 26, DIR_EAST
	turnvobject 28, DIR_EAST
	turnvobject 30, DIR_EAST
	delay 20
	turnvobject 0, DIR_SOUTH
	turnvobject 2, DIR_SOUTH
	turnvobject 4, DIR_SOUTH
	turnvobject 6, DIR_SOUTH
	turnvobject 8, DIR_SOUTH
	turnvobject 10, DIR_SOUTH
	turnvobject 12, DIR_SOUTH
	turnvobject 14, DIR_SOUTH
	turnvobject 16, DIR_SOUTH
	turnvobject 18, DIR_SOUTH
	turnvobject 20, DIR_SOUTH
	turnvobject 22, DIR_SOUTH
	turnvobject 24, DIR_SOUTH
	turnvobject 26, DIR_SOUTH
	turnvobject 28, DIR_SOUTH
	turnvobject 30, DIR_SOUTH
	delay 20
	turnvobject 1, DIR_EAST
	turnvobject 3, DIR_EAST
	turnvobject 5, DIR_EAST
	turnvobject 7, DIR_EAST
	turnvobject 9, DIR_EAST
	turnvobject 11, DIR_WEST
	turnvobject 13, DIR_WEST
	turnvobject 15, DIR_WEST
	turnvobject 17, DIR_WEST
	turnvobject 19, DIR_WEST
	turnvobject 21, DIR_EAST
	turnvobject 23, DIR_EAST
	turnvobject 25, DIR_EAST
	turnvobject 27, DIR_WEST
	turnvobject 31, DIR_WEST
	delay 20
	turnvobject 1, DIR_SOUTH
	turnvobject 3, DIR_SOUTH
	turnvobject 5, DIR_SOUTH
	turnvobject 7, DIR_SOUTH
	turnvobject 9, DIR_SOUTH
	turnvobject 11, DIR_SOUTH
	turnvobject 13, DIR_SOUTH
	turnvobject 15, DIR_SOUTH
	turnvobject 17, DIR_SOUTH
	turnvobject 19, DIR_SOUTH
	turnvobject 21, DIR_SOUTH
	turnvobject 23, DIR_SOUTH
	turnvobject 25, DIR_SOUTH
	turnvobject 27, DIR_SOUTH
	turnvobject 31, DIR_SOUTH
	delay 20
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby_hns::
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
	goto_if_eq VAR_RESULT, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomePreBattleRoom_EventScript_WarpToLobbyDoubles_hns
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_LOBBY_HNS, 5, 11
	waitstate
	end

BattleFrontier_BattleDomePreBattleRoom_EventScript_WarpToLobbyDoubles_hns::
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_LOBBY_HNS, 17, 11
	waitstate
	end

@ On round 1 there's a 50% chance that a specific audience member will walk to his seat
BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos_hns::
	random 2
	copyvar VAR_TEMP_D, VAR_RESULT
	goto_if_eq VAR_TEMP_D, 0, Common_EventScript_NopReturn
	setobjectxyperm LOCALID_DOME_AUDIENCE_WALKING, 2, 0
	setobjectmovementtype LOCALID_DOME_AUDIENCE_WALKING, MOVEMENT_TYPE_FACE_RIGHT
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat_hns::
	goto_if_eq VAR_TEMP_D, 0, Common_EventScript_NopReturn
	applymovement LOCALID_DOME_AUDIENCE_WALKING, BattleFrontier_BattleDomeBattleRoom_Movement_AudienceMemberWalkToSeat_hns
	return

BattleFrontier_BattleDomeBattleRoom_Movement_AudienceTwinJump_hns:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_8
	disable_jump_landing_ground_effect
	jump_in_place_down
	delay_4
	jump_in_place_down
	enable_jump_landing_ground_effect
	step_end

BattleFrontier_BattleDomeBattleRoom_Movement_AudienceMemberWalkToSeat_hns:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_in_place_faster_down
	step_end

BattleFrontier_BattleDomeBattleRoom_Movement_RefereeEnter_hns:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerFaceLeft_hns:
	walk_in_place_faster_left
	step_end

BattleFrontier_BattleDomeBattleRoom_Movement_RefereeExit_hns:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome_hns:
	.string "{PLAYER} betritt die KAMPFKUPPEL!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer_hns:
	.string "{STR_VAR_1}\n"
	.string "Kampf!\p"
	.string "{PLAYER} gegen {STR_VAR_2}!\p"
	.string "Der Kampf beginnt!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner_hns:
	.string "{PLAYER} gewinnt!\n"
	.string "Herzlichen Glückwunsch!$"

BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner_hns:
	.string "{STR_VAR_2} gewinnt!\n"
	.string "Herzlichen Glückwunsch!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ_hns:
	.string "{PLAYER} ist der Level-50-\n"
	.string "Kampfturnier-Champion!\p"
	.string "Herzlichen Glückwunsch!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp_hns:
	.string "{PLAYER} ist der Offenes-Level-\n"
	.string "Kampfturnier-Champion!\p"
	.string "Herzlichen Glückwunsch!$"

BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait_hns:
	.string "Ein unglaubliches Finale!\n"
	.string "Beide POKÉMON sind besiegt!\p"
	.string "Nach den Regeln des Kampfturniers\n"
	.string "entscheidet nun der SCHIRI.\p"
	.string "Bitte warten, während die\n"
	.string "Bewertung läuft.$"

BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer_hns:
	.string "Die SCHIRIS haben entschieden!\p"
	.string "Der Sieger ist…\n"
	.string "Unglaublich!\l"
	.string "{STR_VAR_1} gewinnt!\l"
	.string "Herzlichen Glückwunsch!$"

BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer_hns:
	.string "Die SCHIRIS haben entschieden!\p"
	.string "Der Sieger ist…\n"
	.string "Unglaublich!\l"
	.string "{PLAYER} gewinnt!\l"
	.string "Herzlichen Glückwunsch!$"

BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope_hns:
	.string "Die große neue Hoffnung!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_RisingStar_hns:
	.string "Der aufgehende Stern!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship_hns:
	.string "Schafft dieser TRAINER den\n"
	.string "Weg zum Titel?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry_hns:
	.string "Gelingt der Titel bereits\n"
	.string "beim ersten Versuch?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged_hns:
	.string "Wird die letzte Niederlage\n"
	.string "heute gerächt?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship_hns:
	.string "Dieser TRAINER brennt für den\n"
	.string "ersten Titelgewinn!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal_hns:
	.string "Ein Sieg hier bringt diesen\n"
	.string "TRAINER ins Finale!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue_hns:
	.string "Geht der lang ersehnte\n"
	.string "Titeltraum endlich in Erfüllung?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion_hns:
	.string "Der unbesiegbare Champion!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer_hns:
	.string "Kann überhaupt jemand diesen\n"
	.string "TRAINER besiegen?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer_hns:
	.string "Existieren Kämpfe nur für\n"
	.string "diesen TRAINER?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle_hns:
	.string "Der amtierende Champion will\n"
	.string "den Titel verteidigen!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned_hns:
	.string "Der frühere Champion\n"
	.string "ist zurück!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned_hns:
	.string "Die frühere Stärke\n"
	.string "ist zurückgekehrt!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals_hns:
	.string "Zieht dieser TRAINER wie\n"
	.string "erwartet ins Finale ein?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory_hns:
	.string "Erlangt der frühere Champion\n"
	.string "seinen Ruhm zurück?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster_hns:
	.string "Spür den Glanz eines wahren\n"
	.string "Meisters!$"

BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker_hns:
	.string "Und nun… Der TRAINER, der\n"
	.string "{PLAYER}s Siegesserie stoppt…\p"
	.string "Ja! Der Einzigartige!\n"
	.string "Der KAMPFKUPPEL-KOMMISSAR!\l"
	.string "Unser KUPPEL-ASS!\l"
	.string "Platz für TUCKER!$"

BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant_hns:
	.string "Zuschauer: TUCKER! TUCKER!\n"
	.string "TUCKER! TUCKER! TUCKER!$"

BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro_hns:
	.string "TUCKER: Ahahah!\p"
	.string "Hörst du das? Die Menge!\n"
	.string "Alle wollen unseren Kampf sehen!\p"
	.string "Ahahah!\p"
	.string "Ich wette, du zitterst vor\n"
	.string "Aufregung, gegen mich zu kämpfen!\p"
	.string "Aber keine Sorge!\p"
	.string "Ich bin der Star der KAMPFKUPPEL!\n"
	.string "Ich, TUCKER das KUPPEL-ASS, hülle\l"
	.string "dich in meinen Glanz!$"

BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy_hns:
	.string "Deine Strategie!\n"
	.string "Zeig mir, was du drauf hast!$"

BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer_hns:
	.string "Unglaublich! Fantastisch!\n"
	.string "{PLAYER} gewinnt!$"

BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker_hns:
	.string "TUCKER gewinnt!\n"
	.string "Das KUPPEL-ASS triumphiert!\p"
	.string "Herzlichen Glückwunsch, TUCKER!$"

BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass_hns:
	.string "TUCKER: Regeln sind Regeln!\n"
	.string "Zeig mir deinen GRENZPASS.$"

BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol_hns:
	.string "Das Taktik-Symbol wurde in den\n"
	.string "GRENZPASS geprägt!$"

BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime_hns:
	.string "… … … … … …\p"
	.string "Ich hab dich unterschätzt.\n"
	.string "Beim nächsten Mal nicht mehr…$"

BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched_hns:
	.string "Kann die Siegesserie ausgebaut\n"
	.string "werden? Das Vertrauen ist da!$"

BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker_hns:
	.string "Meine Damen und Herren!\n"
	.string "Kinder und POKÉMON!\p"
	.string "Endlich!\n"
	.string "Die Legende ist zurückgekehrt!\p"
	.string "Der Name dieser Legende!\n"
	.string "Unser KUPPEL-ASS!\l"
	.string "Es ist TUCKER!$"

BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro_hns:
	.string "TUCKER: Ah…\n"
	.string "Das tosende Brüllen der Menge…\l"
	.string "Ihre Begeisterung wie ein Feuer…\l"
	.string "Was für ein wunderbarer Ort…\p"
	.string "Für sie bin ich das KUPPEL-ASS…\n"
	.string "Ich verkörpere ihre Träume…\l"
	.string "Ich darf nie aus ihrem Blick\l"
	.string "verschwinden…\p"
	.string "Ich muss brennen!\n"
	.string "Heller und strahlender!\l"
	.string "Ich erleuchte alle hier!$"

BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess_hns:
	.string "Ich setze meine gesamte Kraft\n"
	.string "ein! Hier und jetzt!$"

BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed_hns:
	.string "TUCKER: Du bist wirklich fantastisch!\p"
	.string "Noch nie! Wenn ich alles gebe,\n"
	.string "verliere ich nie.\p"
	.string "Ja, wirklich fantastisch!\n"
	.string "Deinen GRENZPASS, bitte?$"

BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine_hns:
	.string "Das Taktik-Symbol erstrahlt\n"
	.string "in goldenem Glanz!$"

BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter_hns:
	.string "Du bist stark, aber vor allem\n"
	.string "hast du einen besonderen Charme!\p"
	.string "In dir sehe ich das Potenzial\n"
	.string "für einen Superstar wie mich.\p"
	.string "Ich freue mich sehr auf unser\n"
	.string "nächstes Aufeinandertreffen!$"

@ Unused
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ_hns2_hns:
	.string "{PLAYER} ist der Level-50-\n"
	.string "Kampfturnier-Champion!\p"
	.string "Herzlichen Glückwunsch!$"

@ Unused
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp_hns2_hns:
	.string "{PLAYER} ist der Offenes-Level-\n"
	.string "Kampfturnier-Champion!\p"
	.string "Herzlichen Glückwunsch!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTucker_hns:
	.string "Das Finale!\p"
	.string "{PLAYER} gegen KUPPEL-ASS TUCKER!\p"
	.string "Der Kampf beginnt!$"

BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTucker_hns:
	.string "Die SCHIRIS haben entschieden!\p"
	.string "Der Sieger ist…\n"
	.string "Unglaublich!\l"
	.string "Unser eigenes KUPPEL-ASS gewinnt!\l"
	.string "Es ist TUCKER!\p"
	.string "Glückwunsch! Danke!\n"
	.string "Ein Hoch auf KUPPEL-ASS TUCKER!$"
