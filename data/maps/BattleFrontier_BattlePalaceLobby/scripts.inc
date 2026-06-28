BattleFrontier_BattlePalaceLobby_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePalaceLobby_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePalaceLobby_OnWarp
	.byte 0

BattleFrontier_BattlePalaceLobby_OnWarp:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePalaceLobby_EventScript_TurnPlayerNorth
	.2byte 0

BattleFrontier_BattlePalaceLobby_EventScript_TurnPlayerNorth::
	setvar VAR_TEMP_1, 1
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattlePalaceLobby_OnFrame:
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePalaceLobby_EventScript_GetChallengeStatus
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePalaceLobby_EventScript_QuitWithoutSaving
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePalaceLobby_EventScript_ResumeChallenge
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePalaceLobby_EventScript_LostChallenge
	.2byte 0

BattleFrontier_BattlePalaceLobby_EventScript_GetChallengeStatus::
	frontier_getstatus
	end

BattleFrontier_BattlePalaceLobby_EventScript_QuitWithoutSaving::
	lockall
	msgbox BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge, MSGBOX_DEFAULT
	closemessage
	palace_set PALACE_DATA_WIN_STREAK, 0
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, FALSE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge::
	lockall
	frontier_isbrain
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_DefeatedMaven
	msgbox BattleFrontier_BattlePalaceLobby_Text_FirmTrueBondsFor7WinStreak, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_GiveBattlePoints

BattleFrontier_BattlePalaceLobby_EventScript_DefeatedMaven::
	msgbox BattleFrontier_BattlePalaceLobby_Text_ToDefeatMavenAnd7Trainers, MSGBOX_DEFAULT
BattleFrontier_BattlePalaceLobby_EventScript_GiveBattlePoints::
	msgbox BattleFrontier_BattlePalaceLobby_Text_PresentYouWithBattlePoints, MSGBOX_DEFAULT
	frontier_givepoints
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
	message BattleFrontier_BattlePalaceLobby_Text_FeatWillBeRecorded
	waitmessage
	call BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattlePalaceLobby_EventScript_LostChallenge::
	lockall
	message BattleFrontier_BattlePalaceLobby_Text_ResultsWillBeRecorded
	waitmessage
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, FALSE
	call BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge::
	frontier_checkairshow
	special LoadPlayerParty
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	palace_save 0
	playse SE_SAVE
	waitse
	call BattleFrontier_EventScript_GetCantRecordBattle
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
	message BattleFrontier_BattlePalaceLobby_Text_LikeToRecordMatch
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	switch VAR_RESULT
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_RecordMatch
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge

BattleFrontier_BattlePalaceLobby_EventScript_RecordMatch::
	call BattleFrontier_EventScript_SaveBattle
BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge::
	return

BattleFrontier_BattlePalaceLobby_EventScript_ResumeChallenge::
	lockall
	msgbox BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting, MSGBOX_DEFAULT
	message BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge
	waitmessage
	palace_save CHALLENGE_STATUS_SAVING
	playse SE_SAVE
	waitse
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	goto BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge

BattleFrontier_BattlePalaceLobby_EventScript_SinglesAttendant::
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant
	end

BattleFrontier_BattlePalaceLobby_EventScript_DoublesAttendant::
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant
	end

BattleFrontier_BattlePalaceLobby_EventScript_Attendant::
	palace_get PALACE_DATA_PRIZE
	goto_if_ne VAR_RESULT, ITEM_NONE, BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge
	special SavePlayerParty
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForSingleBattle
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForDoubleBattle
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge::
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeSingleBattleChallenge
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeDoubleBattleChallenge
	waitmessage
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge

BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge::
	message BattleFrontier_BattlePalaceLobby_Text_WhichChallenge
	waitmessage
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
	switch VAR_RESULT
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
	frontier_checkineligible
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
	msgbox BattleFrontier_BattlePalaceLobby_Text_NowSelectThreeMons, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	call BattleFrontier_EventScript_GetLvlMode
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
	special ChoosePartyForBattleFrontier
	waitstate
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
	msgbox BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge2, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
	case YES, BattleFrontier_BattlePalaceLobby_EventScript_SaveBeforeChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge

BattleFrontier_BattlePalaceLobby_EventScript_SaveBeforeChallenge::
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
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallengeSaveFailed
BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge::
	special SavePlayerParty
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	msgbox BattleFrontier_BattlePalaceLobby_Text_FollowMe, MSGBOX_DEFAULT
	closemessage
	call BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR, 8, 13
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	waitstate
	end

BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge::
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_ExplainDoublesChallenge
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainSingleBattleChallenge, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge

BattleFrontier_BattlePalaceLobby_EventScript_ExplainDoublesChallenge::
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainDoubleBattleChallenge, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge

BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons::
	switch VAR_RESULT
	case FRONTIER_LVL_50, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLv50
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLvOpen

BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLv50::
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
	call BattleFrontier_ShowCaughtBannedSpecies
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge

BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLvOpen::
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
	call BattleFrontier_ShowCaughtBannedSpecies
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge

BattleFrontier_BattlePalaceLobby_EventScript_CancelChallengeSaveFailed::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	goto BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge

BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge::
	special LoadPlayerParty
	callnative LoadPlayerParty
BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge::
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge::
	release
	end

BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForSingleBattle::
	msgbox BattleFrontier_BattlePalaceLobby_Text_WelcomeForSingleBattle, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForDoubleBattle::
	msgbox BattleFrontier_BattlePalaceLobby_Text_WelcomeForDoubleBattle, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePalaceLobby_EventScript_AskTakeSingleBattleChallenge::
	message BattleFrontier_BattlePalaceLobby_Text_TakeSingleBattleChallenge
	return

BattleFrontier_BattlePalaceLobby_EventScript_AskTakeDoubleBattleChallenge::
	message BattleFrontier_BattlePalaceLobby_Text_TakeDoubleBattleChallenge
	return

BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor::
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_TalkedToSinglesAttendant
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_TalkedToDoublesAttendant
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor
	waitmovement 0
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_OpenSinglesHallDoor
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_OpenDoublesHallDoor
	waitdooranim
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_Movement_AttendantEnterDoor
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceLobby_Movement_PlayerEnterDoor
	waitmovement 0
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_CloseSinglesHallDoor
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_CloseDoublesHallDoor
	waitdooranim
	return

BattleFrontier_BattlePalaceLobby_EventScript_TalkedToSinglesAttendant::
	setvar VAR_LAST_TALKED, LOCALID_PALACE_ATTENDANT_SINGLES
	return

BattleFrontier_BattlePalaceLobby_EventScript_TalkedToDoublesAttendant::
	setvar VAR_LAST_TALKED, LOCALID_PALACE_ATTENDANT_DOUBLES
	return

BattleFrontier_BattlePalaceLobby_EventScript_OpenSinglesHallDoor::
	opendoor 5, 4
	return

BattleFrontier_BattlePalaceLobby_EventScript_OpenDoublesHallDoor::
	opendoor 19, 4
	return

BattleFrontier_BattlePalaceLobby_EventScript_CloseSinglesHallDoor::
	closedoor 5, 4
	return

BattleFrontier_BattlePalaceLobby_EventScript_CloseDoublesHallDoor::
	closedoor 19, 4
	return

BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor:
	walk_up
	step_end

BattleFrontier_BattlePalaceLobby_Movement_AttendantEnterDoor:
	walk_up
	set_invisible
	step_end

BattleFrontier_BattlePalaceLobby_Movement_PlayerEnterDoor:
	walk_up
	walk_up
	set_invisible
	step_end

BattleFrontier_BattlePalaceLobby_EventScript_ShowSinglesResults::
	lockall
	frontier_results FRONTIER_FACILITY_PALACE, FRONTIER_MODE_SINGLES
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattlePalaceLobby_EventScript_ShowDoublesResults::
	lockall
	frontier_results FRONTIER_FACILITY_PALACE, FRONTIER_MODE_DOUBLES
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattlePalaceLobby_EventScript_BlackBelt::
	msgbox BattleFrontier_BattlePalaceLobby_Text_LadyCanTellWhatMonsThink, MSGBOX_NPC
	end

BattleFrontier_BattlePalaceLobby_EventScript_Man::
	msgbox BattleFrontier_BattlePalaceLobby_Text_NatureAndMovesKeyHere, MSGBOX_NPC
	end

BattleFrontier_BattlePalaceLobby_EventScript_Beauty::
	msgbox BattleFrontier_BattlePalaceLobby_Text_MonDocileButTransforms, MSGBOX_NPC
	end

BattleFrontier_BattlePalaceLobby_EventScript_Maniac::
	msgbox BattleFrontier_BattlePalaceLobby_Text_WhatNatureFavorsChippingAway, MSGBOX_NPC
	end

BattleFrontier_BattlePalaceLobby_EventScript_RulesBoard::
	lockall
	msgbox BattleFrontier_BattlePalaceLobby_Text_RulesAreListed, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard::
	message BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading
	waitmessage
	multichoice 16, 0, MULTI_BATTLE_PALACE_RULES, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_RulesBasics
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_RulesNature
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_RulesMoves
	case 3, BattleFrontier_BattlePalaceLobby_EventScript_RulesUnderpowered
	case 4, BattleFrontier_BattlePalaceLobby_EventScript_RulesWhenInDanger
	case 5, BattleFrontier_BattlePalaceLobby_EventScript_ExitRules
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_ExitRules
	end

BattleFrontier_BattlePalaceLobby_EventScript_RulesBasics::
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePalaceLobby_EventScript_RulesNature::
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePalaceLobby_EventScript_RulesMoves::
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePalaceLobby_EventScript_RulesUnderpowered::
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePalaceLobby_EventScript_RulesWhenInDanger::
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePalaceLobby_EventScript_ExitRules::
	releaseall
	end

BattleFrontier_BattlePalaceLobby_Text_WelcomeForSingleBattle:
	.string "Hier wird das Herz der TRAINER\n"
	.string "auf die Probe gestellt!\p"
	.string "Willkommen im KAMPFPALAST!\p"
	.string "Ich nehme Herausforderungen für die\n"
	.string "EINZELKAMPF-Hallen entgegen!$"

BattleFrontier_BattlePalaceLobby_Text_TakeSingleBattleChallenge:
	.string "Möchtest du dich der Herausforderung\n"
	.string "der EINZELKAMPF-Hallen stellen?$"

BattleFrontier_BattlePalaceLobby_Text_ExplainSingleBattleChallenge:
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

BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified:
	.string "Stärke dein Herz und deine POKéMON und\n"
	.string "komm dann wieder.$"

BattleFrontier_BattlePalaceLobby_Text_WhichChallenge:
	.string "Es gibt zwei KAMPFHALLEN:\n"
	.string "Für Level 50 und Offene Kämpfe.\l"
	.string "Wofür entscheidest du dich?$"

BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLv50:
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

BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsEnd:

BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLvOpen:
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

BattleFrontier_BattlePalaceLobby_Text_NowSelectThreeMons:
	.string "Gut. Nun wähle deine drei POKéMON aus.$"

BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge2:
	.string "Bevor du die KAMPFHALLE betrittst,\n"
	.string "musst du dein Spiel speichern. Okay?$"

BattleFrontier_BattlePalaceLobby_Text_FollowMe:
	.string "Gut. Dann folge mir.$"

BattleFrontier_BattlePalaceLobby_Text_ResultsWillBeRecorded:
	.string "Ich fühle mich geehrt, dass ich deine\n"
	.string "POKéMON sehen durfte.\p"
	.string "Dein Erfolg wird gespeichert.\n"
	.string "Bitte warte einen Moment.$"

BattleFrontier_BattlePalaceLobby_Text_FirmTrueBondsFor7WinStreak:
	.string "Sieben Siege in Folge…\p"
	.string "Das Band zwischen deinem Herzen und\n"
	.string "deinen POKéMON scheint stark zu sein.$"

BattleFrontier_BattlePalaceLobby_Text_FeatWillBeRecorded:
	.string "Dein Erfolg wird gespeichert.\n"
	.string "Bitte warte einen Moment.$"

@ Unused
BattleFrontier_BattlePalaceLobby_Text_BattlePointsFor7WinStreak:
	.string "For the feat of your 7-win streak,\n"
	.string "we present you with Battle Point(s).$"

BattleFrontier_BattlePalaceLobby_Text_NoSpaceForPrize:
	.string "Du hast keinen Platz für den Preis?\p"
	.string "Räum deinen BEUTEL auf und komm\n"
	.string "dann wieder.$"

BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting:
	.string "Wir haben auf dich gewartet…$"

BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge:
	.string "Bevor du die KAMPFHALLE betrittst,\n"
	.string "musst du dein Spiel speichern.$"

BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge:
	.string "Seufz…\p"
	.string "Du hast, bevor du die Herausforderung\n"
	.string "abgebrochen hast, nicht gespeichert.\p"
	.string "Daher wirst du für diese Herausforde-\n"
	.string "rung disqualifiziert. Schade!$"

@ Unused
BattleFrontier_BattlePalaceLobby_Text_ReceivedPrize:
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

BattleFrontier_BattlePalaceLobby_Text_LadyCanTellWhatMonsThink:
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

BattleFrontier_BattlePalaceLobby_Text_NatureAndMovesKeyHere:
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

BattleFrontier_BattlePalaceLobby_Text_MonDocileButTransforms:
	.string "Mein POKéMON ist sehr sanftmütig.\p"
	.string "Aber wenn ich es in eine KAMPFHALLE\n"
	.string "mitnehme, scheint es sich manchmal\l"
	.string "ganz merkwürdig zu verändern!\p"
	.string "Es wirkt dann regelrecht\n"
	.string "einschüchternd! Richtig schockierend!$"

BattleFrontier_BattlePalaceLobby_Text_WhatNatureFavorsChippingAway:
	.string "Ich frage mich, welches Wesen ein\n"
	.string "POKéMON hat, das seine Gegner schwächt\l"
	.string "und dann langsam zur Strecke bringt.\p"
	.string "Ich würde mich echt wundern, wenn es\n"
	.string "dann ein LASCHes Wesen hätte.\p"
	.string "Nee, bestimmt nicht!$"

BattleFrontier_BattlePalaceLobby_Text_WelcomeForDoubleBattle:
	.string "Hier wird das Herz der TRAINER\n"
	.string "auf die Probe gestellt!\p"
	.string "Willkommen im KAMPFPALAST!\p"
	.string "Ich nehme Herausforderungen für die\n"
	.string "DOPPELKAMPF-Hallen entgegen!$"

BattleFrontier_BattlePalaceLobby_Text_TakeDoubleBattleChallenge:
	.string "Möchtest du dich der Herausforderung\n"
	.string "der DOPPELKAMPF-Hallen stellen?$"

BattleFrontier_BattlePalaceLobby_Text_ExplainDoubleBattleChallenge:
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

BattleFrontier_BattlePalaceLobby_Text_ToDefeatMavenAnd7Trainers:
	.string "Um den PALASTREGENTen und sechs\n"
	.string "TRAINER in Folge zu besiegen…$"

BattleFrontier_BattlePalaceLobby_Text_PresentYouWithBattlePoints:
	.string "In Anerkennung des Bandes zwischen dir\n"
	.string "und deinen POKéMON geben wir dir\l"
	.string "Gewinnpunkte.$"

BattleFrontier_BattlePalaceLobby_Text_LikeToRecordMatch:
	.string "Möchtest du deinen letzten KAMPF-\n"
	.string "PALAST-Kampf in deinen\l"
	.string "KAMPFZONENPASS eintragen?$"

BattleFrontier_BattlePalaceLobby_Text_RulesAreListed:
	.string "Die Regeln der KAMPFHALLE hängen\n"
	.string "öffentlich aus.$"

BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading:
	.string "Wähle bitte ein Themengebiet aus.$"

BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics:
	.string "Hier müssen die POKéMON selbständig\n"
	.string "handeln und kämpfen.\p"
	.string "Anders als wilde POKéMON reagieren\n"
	.string "POKéMON, die mit Menschen zusammen-\l"
	.string "leben, abhängig von ihrem Wesen.$"

BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature:
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

BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves:
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

BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered:
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

BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger:
	.string "Abhängig von seinem Wesen, wird ein\n"
	.string "POKéMON vielleicht auch Attacken ein-\l"
	.string "setzen, die seinem Wesen\n"
	.string "widersprechen. \p"
	.string "Benimmt es sich in bestimmten\n"
	.string "Situationen merkwürdig, beobachte es\l"
	.string "genau.$"

