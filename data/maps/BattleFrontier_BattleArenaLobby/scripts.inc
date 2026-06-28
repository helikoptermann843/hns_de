BattleFrontier_BattleArenaLobby_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaLobby_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleArenaLobby_OnWarp
	.byte 0

BattleFrontier_BattleArenaLobby_OnWarp:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth
	.2byte 0

BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth::
	setvar VAR_TEMP_1, 1
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattleArenaLobby_OnFrame:
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleArenaLobby_EventScript_WonChallenge
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleArenaLobby_EventScript_LostChallenge
	.2byte 0

BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus::
	frontier_getstatus
	end

BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving::
	lockall
	msgbox BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown, MSGBOX_DEFAULT
	closemessage
	arena_set ARENA_DATA_WIN_STREAK, 0
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattleArenaLobby_EventScript_WonChallenge::
	lockall
	frontier_isbrain
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints

BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon::
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon, MSGBOX_DEFAULT
BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints::
	msgbox BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints, MSGBOX_DEFAULT
	frontier_givepoints
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
	message BattleFrontier_BattleArenaLobby_Text_RecordAchievement
	waitmessage
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattleArenaLobby_EventScript_LostChallenge::
	lockall
	message BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave
	waitmessage
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge::
	frontier_checkairshow
	special LoadPlayerParty
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	arena_save 0
	playse SE_SAVE
	waitse
	call BattleFrontier_EventScript_GetCantRecordBattle
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
	message BattleFrontier_BattleArenaLobby_Text_RecordLastMatch
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	switch VAR_RESULT
	case 1, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
	case 0, BattleFrontier_BattleArenaLobby_EventScript_RecordMatch
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge

BattleFrontier_BattleArenaLobby_EventScript_RecordMatch::
	call BattleFrontier_EventScript_SaveBattle
BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge::
	return

BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge::
	lockall
	message BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame
	waitmessage
	arena_save CHALLENGE_STATUS_SAVING
	playse SE_SAVE
	waitse
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge

BattleFrontier_BattleArenaLobby_EventScript_Attendant::
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_ARENA
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	special SavePlayerParty
	msgbox BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena, MSGBOX_DEFAULT
BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge::
	message BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge
	waitmessage
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge
	case 1, BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge
	case 2, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge::
	message BattleFrontier_BattleArenaLobby_Text_WhichLevelMode
	waitmessage
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
	switch VAR_RESULT
	case FRONTIER_LVL_TENT, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
	frontier_checkineligible
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
	msgbox BattleFrontier_BattleArenaLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	call BattleFrontier_EventScript_GetLvlMode
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
	special ChoosePartyForBattleFrontier
	waitstate
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
	msgbox BattleFrontier_BattleArenaLobby_Text_OkayToSave, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
	case YES, BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge

BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge::
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
	arena_init
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, TRUE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	special LoadPlayerParty
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge::
	special SavePlayerParty
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	msgbox BattleFrontier_BattleArenaLobby_Text_GuideYouToArena, MSGBOX_DEFAULT
	closemessage
	frontier_get FRONTIER_DATA_LVL_MODE
	call_if_eq VAR_RESULT, FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50
	call_if_eq VAR_RESULT, FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_CORRIDOR, 9, 13
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	waitstate
	end

BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainChallenge, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge

BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons::
	switch VAR_RESULT
	case FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen

BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50::
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
	call BattleFrontier_ShowCaughtBannedSpecies
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge

BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen::
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
	call BattleFrontier_ShowCaughtBannedSpecies
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge

BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge

BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge::
	special LoadPlayerParty
	callnative UpdateFollowingPokemon
BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge::
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge, MSGBOX_DEFAULT
BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge::
	release
	end

BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50::
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor
	waitmovement 0
	opendoor 2, 2
	waitdooranim
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
	waitmovement 0
	closedoor 2, 2
	waitdooranim
	return

BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor:
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor:
	walk_up
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen::
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor
	waitmovement 0
	opendoor 11, 2
	waitdooranim
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
	waitmovement 0
	closedoor 11, 2
	waitdooranim
	return

BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor:
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

BattleFrontier_BattleArenaLobby_EventScript_ShowResults::
	lockall
	frontier_results FRONTIER_FACILITY_ARENA
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattleArenaLobby_EventScript_Youngster::
	msgbox BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack, MSGBOX_NPC
	end

BattleFrontier_BattleArenaLobby_EventScript_Man::
	msgbox BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked, MSGBOX_NPC
	end

BattleFrontier_BattleArenaLobby_EventScript_Camper::
	msgbox BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw, MSGBOX_NPC
	end

BattleFrontier_BattleArenaLobby_EventScript_Woman::
	msgbox BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant, MSGBOX_NPC
	end

BattleFrontier_BattleArenaLobby_EventScript_RulesBoard::
	lockall
	msgbox BattleFrontier_BattleArenaLobby_Text_RulesAreListed, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard::
	message BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading
	waitmessage
	multichoice 17, 2, MULTI_BATTLE_ARENA_RULES, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattleArenaLobby_EventScript_BattleRules
	case 1, BattleFrontier_BattleArenaLobby_EventScript_MindRules
	case 2, BattleFrontier_BattleArenaLobby_EventScript_SkillRules
	case 3, BattleFrontier_BattleArenaLobby_EventScript_BodyRules
	case 4, BattleFrontier_BattleArenaLobby_EventScript_ExitRules
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_ExitRules
	end

BattleFrontier_BattleArenaLobby_EventScript_BattleRules::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleArenaLobby_EventScript_MindRules::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainMindRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleArenaLobby_EventScript_SkillRules::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleArenaLobby_EventScript_BodyRules::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleArenaLobby_EventScript_ExitRules::
	releaseall
	end

BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena:
	.string "Hier wird der Kampfgeist der TRAINER\n"
	.string "auf die Probe gestellt!\p"
	.string "Willkommen im KAMPFRING!\p"
	.string "Ich begleite dich beim\n"
	.string "K.O.-Teamturnier!$"

BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge:
	.string "Möchtest du dich der Herausforderung\n"
	.string "des KAMPFRINGs stellen?$"

BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge:
	.string "Wir freuen uns auf deine nächste\n"
	.string "Herausforderung.$"

BattleFrontier_BattleArenaLobby_Text_ExplainChallenge:
	.string "Im KAMPFRING fechten\n"
	.string "wir K.O.-Teamturniere aus.\p"
	.string "Jeder Teilnehmer nimmt drei POKéMON\n"
	.string "mit in den Wettkampf.\p"
	.string "Die POKéMON müssen in der Reihenfolge\n"
	.string "platziert werden, in der sie kämpfen\p"
	.string "sollen. In dieser Folge kämpfen sie\n"
	.string "dann nacheinander.\p"
	.string "Sobald ein POKéMON in den Kampf\n"
	.string "gerufen wurde, muss es kämpfen, bis\n"
	.string "der \p"
	.string "Kampf entschieden ist. Sollte ein\n"
	.string "Kampf\n"
	.string "unentschieden enden, wird der Kampf\p"
	.string "beurteilt und der Sieger bestimmt.\n"
	.string "Möchtest du den Wettkampf unter-\p"
	.string "brechen, speichere bitte dein Spiel.\n"
	.string "Ohne Speichern kannst du den Wett-\p"
	.string "kampf später nicht fortsetzen.\p"
	.string "Besiegst du sieben TRAINER in Folge,\n"
	.string "erhältst du Gewinnpunkte.$"

BattleFrontier_BattleArenaLobby_Text_OkayToSave:
	.string "Bevor du den KAMPFRING betrittst,\n"
	.string "musst du dein Spiel speichern. Okay?$"

BattleFrontier_BattleArenaLobby_Text_WhichLevelMode:
	.string "Im KAMPFRING wird in zwei\n"
	.string "Kategorien gekämpft: Lv. 50 und Offene\l"
	.string "Kämpfe. Wofür entscheidest du dich?$"

BattleFrontier_BattleArenaLobby_Text_SelectThreeMons:
	.string "Bitte wähle drei POKéMON aus, die\n"
	.string "antreten sollen.$"

BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen:
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

BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd:

BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50:
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

BattleFrontier_BattleArenaLobby_Text_GuideYouToArena:
	.string "Ich werde dich nun in den KAMPFRING\n"
	.string "begleiten.$"

BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown:
	.string "Entschuldigung!\p"
	.string "Du hast, bevor du die Herausforderung\n"
	.string "abgebrochen hast, nicht gespeichert.\p"
	.string "Daher wirst du für diese Herausforde-\n"
	.string "rung disqualifiziert. Schade! Du hast\n"
	.string "\p"
	.string "natürlich die Möglichkeit, dich einer\n"
	.string "neuen Herausforderung zu stellen.$"

BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins:
	.string "Herzlichen Glückwunsch! Du hast sieben\n"
	.string "TRAINER in Folge besiegt!$"

BattleFrontier_BattleArenaLobby_Text_RecordAchievement:
	.string "Dein Erfolg wird gespeichert.\n"
	.string "Bitte warten.$"

@ Unused
BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize:
	.string "In commemoration of your 7-win streak,\n"
	.string "we present you with this prize.$"

@ Unused
BattleFrontier_BattleArenaLobby_Text_ReceivedPrize:
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

@ Unused
BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize:
	.string "Oh? Your BAG seems to be full.\p"
	.string "I urge you to clear space and\n"
	.string "return for your prize.$"

BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave:
	.string "Vielen Dank für die Teilnahme!\p"
	.string "Das Spiel wird gespeichert.\n"
	.string "Bitte warten.$"

BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2:
	.string "Wir freuen uns auf deine nächste\n"
	.string "Herausforderung.$"

BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame:
	.string "Wir haben schon auf dich gewartet!\p"
	.string "Bevor du den KAMPFRING betrittst,\n"
	.string "musst du dein Spiel speichern. Okay?$"

BattleFrontier_BattleArenaLobby_Text_RecordLastMatch:
	.string "Soll ich den KAMPFRING-Kampf\n"
	.string "in deinen KAMPFZONENPASS eintragen?$"

BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack:
	.string "Ich habe aufgrund der REFEREE-\n"
	.string "Entscheidung verloren…\p"
	.string "Ich hätte nicht nur defensive Attacken\n"
	.string "verwenden dürfen, sondern auch\p"
	.string "angreifen müssen.$"

BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked:
	.string "Ich habe durch die richtige\n"
	.string "Entscheidung des REFEREEs gewonnen!\p"
	.string "Kontinuierliche Treffer auf das gegne-\n"
	.string "rische POKéMON haben sich ausgezahlt.$"

BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw:
	.string "Unser Kampf wurde als Unentschieden\n"
	.string "gewertet.\p"
	.string "Als die Zeit abgelaufen war, hatten\n"
	.string "meine und die gegnerischen POKéMON\l"
	.string "die gleiche Anzahl KP übrig.$"

BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant:
	.string "Im KAMPFRING ist die Reihenfolge\n"
	.string "der POKéMON entscheidend.\p"
	.string "Hat dein erstes POKéMON bestimmte\n"
	.string "Nachteile aufgrund seiner Element-\l"
	.string "klasse, sollte dein zweites POKéMON\l"
	.string "diese Nachteile ausgleichen.\p"
	.string "Ich denke, so stellt man ein hervor-\n"
	.string "ragendes Team zusammen.$"

BattleFrontier_BattleArenaLobby_Text_RulesAreListed:
	.string "Die K.O.-Teamturnier-Regeln sind hier\n"
	.string "aufgeführt.$"

BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading:
	.string "Wähle bitte ein Themengebiet aus.$"

BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules:
	.string "Das K.O.-Teamturnier hat bestimmte\n"
	.string "Regeln, die du beachten musst.\p"
	.string "Erstens: Ein Kampf dauert drei Runden.\n"
	.string "Wenn nach drei Runden kein Sieger\p"
	.string "feststeht, wird eine richterliche\n"
	.string "Entscheidung getroffen. Der REFEREE\p"
	.string "wird den Sieger bestimmen, indem er\n"
	.string "die Art des Kampfes beurteilt. Ein\n"
	.string "PKMN \p"
	.string "kann nicht ausgetauscht werden, bevor\n"
	.string "der Kampf entschieden ist.$"

BattleFrontier_BattleArenaLobby_Text_ExplainMindRules:
	.string "Der erste Faktor bei der Beurteilung\n"
	.string "ist der “Verstand”. Hier wird\n"
	.string "beurteilt,\l"
	.string "wie aggressiv die Kämpfer waren.\p"
	.string "Die Beurteilung richtet sich danach,\n"
	.string "wie\n"
	.string "oft der TRAINER offensive Attacken\l"
	.string "eingesetzt hat.$"

BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules:
	.string "Der zweite Faktor ist das\n"
	.string "“Geschick”. Hier wird beurteilt, wie\l"
	.string "effektiv Attacken eingesetzt wurden.\p"
	.string "War eine Attacke erfolgreich, geht die\n"
	.string "Bewertung der Fähigkeiten nach oben.\p"
	.string "Schlug eine Attacke fehl, geht die\n"
	.string "Bewertung nach unten.\p"
	.string "Handelt es sich um eine offensive\n"
	.string "Attacke, geht die Beurteilung nach\l"
	.string "oben, wenn sie “sehr effektiv” war.\l"
	.string "Sie geht nach unten, wenn sie “nicht\p"
	.string "sehr effektiv war”. Für Attacken wie\n"
	.string "SCHUTZSCHILD oder SCANNER gibt es\l"
	.string "keine höhere Bewertung.\p"
	.string "Setzt der Gegner SCHUTZSCHILD oder\n"
	.string "SCANNER ein und die Attacke deines\l"
	.string "PKMN scheitert, wird die Beurteilung\l"
	.string "nicht nach unten gehen.$"

BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules:
	.string "Der dritte Faktor bei der Beurteilung\n"
	.string "ist der “Körper”. Die am\l"
	.string "Ende verbleibenden KP sind ausschlag-\n"
	.string "\p"
	.string "gebend. Die Anzahl der KP, mit der ein\n"
	.string "PKMN in den Kampf geht, wird mit der\l"
	.string "am Ende des Kampfes verglichen.$"

BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon:
	.string "Ein Sieg über den RINGMEISTER und ein\n"
	.string "siebenfacher Sieg über sieben TRAINER!\n"
	.string "\p"
	.string "Wir gratulieren dir zu deiner\n"
	.string "herausragenden Leistung!$"

BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints:
	.string "Geschätzter Herausforderer! In Aner-\n"
	.string "kennung deines unermüdlichen Geistes\l"
	.string "überreichen wir dir Gewinnpunkte.$"
