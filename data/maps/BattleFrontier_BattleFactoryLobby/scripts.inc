BattleFrontier_BattleFactoryLobby_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleFactoryLobby_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleFactoryLobby_OnWarp
	.byte 0

BattleFrontier_BattleFactoryLobby_OnWarp:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth
	.2byte 0

BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth::
	setvar VAR_TEMP_1, 1
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattleFactoryLobby_OnFrame:
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge
	.2byte 0

BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus::
	frontier_getstatus
	end

BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving::
	lockall
	msgbox BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
	closemessage
	factory_setswapped
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS, 0
	factory_set FACTORY_DATA_WIN_STREAK, 0
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge::
	lockall
	frontier_isbrain
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleFactoryLobby_EventScript_DefeatedFactoryHead
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins, MSGBOX_DEFAULT
	waitmessage
	goto BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints

BattleFrontier_BattleFactoryLobby_EventScript_DefeatedFactoryHead::
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead, MSGBOX_DEFAULT
	waitmessage
BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints::
	msgbox BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints, MSGBOX_DEFAULT
	frontier_givepoints
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
	message BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave
	waitmessage
	frontier_checkairshow
	special LoadPlayerParty
	callnative UpdateFollowingPokemon
	factory_save 0
	playse SE_SAVE
	waitse
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle
	end

BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge::
	lockall
	message BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults
	waitmessage
	frontier_checkairshow
	special LoadPlayerParty
	callnative UpdateFollowingPokemon
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
	factory_save 0
	playse SE_SAVE
	waitse

BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle::
	call BattleFrontier_EventScript_GetCantRecordBattle
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
	message BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	switch VAR_RESULT
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_RecordBattle
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle

BattleFrontier_BattleFactoryLobby_EventScript_RecordBattle::
	call BattleFrontier_EventScript_SaveBattle
BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle::
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge::
	lockall
	message BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume
	waitmessage
	factory_save CHALLENGE_STATUS_SAVING
	playse SE_SAVE
	waitse
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	setvar VAR_0x8006, 2
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge

BattleFrontier_BattleFactoryLobby_EventScript_SinglesAttendant::
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
	end

BattleFrontier_BattleFactoryLobby_EventScript_DoublesAttendant::
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
	end

BattleFrontier_BattleFactoryLobby_EventScript_Attendant::
	special SavePlayerParty
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForSingleBattle
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForDoubleBattle
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge::
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_TakeSinglesChallenge
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_TakeDoublesChallenge
	waitmessage
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge
	case 2, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge

BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge::
	message BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode
	waitmessage
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
	switch VAR_RESULT
	case FRONTIER_LVL_TENT, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
	msgbox BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge
	case YES, BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge

BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge::
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	factory_init
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, TRUE
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallengeSaveFailed
	setvar VAR_0x8006, 0
BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge::
	special SavePlayerParty
	msgbox BattleFrontier_BattleFactoryLobby_Text_StepThisWay, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_TalkedToSinglesAttendant
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_TalkedToDoublesAttendant
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleFactoryLobby_Movement_AttendantEnterDoor
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryLobby_Movement_PlayerEnterDoor
	waitmovement 0
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_PRE_BATTLE_ROOM, 8, 13
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	waitstate
	end

BattleFrontier_BattleFactoryLobby_EventScript_TalkedToSinglesAttendant::
	setvar VAR_LAST_TALKED, LOCALID_FACTORY_ATTENDANT_SINGLES
	return

BattleFrontier_BattleFactoryLobby_EventScript_TalkedToDoublesAttendant::
	setvar VAR_LAST_TALKED, LOCALID_FACTORY_ATTENDANT_DOUBLES
	return

BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge::
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_ExplainSinglesChallenge
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_ExplainDoublesChallenge
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge

BattleFrontier_BattleFactoryLobby_EventScript_CancelChallengeSaveFailed::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge

BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge::
	special LoadPlayerParty
	callnative UpdateFollowingPokemon
BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge::
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleFactoryLobby_Movement_AttendantEnterDoor:
	walk_up
	walk_up
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleFactoryLobby_Movement_PlayerEnterDoor:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForSingleBattle::
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle, MSGBOX_DEFAULT
	return

BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForDoubleBattle::
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle, MSGBOX_DEFAULT
	return

BattleFrontier_BattleFactoryLobby_EventScript_TakeSinglesChallenge::
	message BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge
	return

BattleFrontier_BattleFactoryLobby_EventScript_TakeDoublesChallenge::
	message BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge
	return

BattleFrontier_BattleFactoryLobby_EventScript_ExplainSinglesChallenge::
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
	return

BattleFrontier_BattleFactoryLobby_EventScript_ExplainDoublesChallenge::
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
	return

BattleFrontier_BattleFactoryLobby_EventScript_ShowSinglesResults::
	lockall
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_SINGLES
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattleFactoryLobby_EventScript_ShowDoublesResults::
	lockall
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_DOUBLES
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattleFactoryLobby_EventScript_Woman::
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves, MSGBOX_NPC
	end

BattleFrontier_BattleFactoryLobby_EventScript_Camper::
	msgbox BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon, MSGBOX_NPC
	end

BattleFrontier_BattleFactoryLobby_EventScript_Picnicker::
	lock
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleFactoryLobby_EventScript_FatMan::
	msgbox BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints, MSGBOX_NPC
	end

BattleFrontier_BattleFactoryLobby_EventScript_RulesBoard::
	lockall
	msgbox BattleFrontier_BattleFactoryLobby_Text_RulesAreListed, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard::
	message BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading
	waitmessage
	multichoice 17, 0, MULTI_BATTLE_FACTORY_RULES, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_RulesBasics
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapPartner
	case 2, BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNumber
	case 3, BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNotes
	case 4, BattleFrontier_BattleFactoryLobby_EventScript_RulesOpenLv
	case 5, BattleFrontier_BattleFactoryLobby_EventScript_ExitRules
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_ExitRules
	end

BattleFrontier_BattleFactoryLobby_EventScript_RulesBasics::
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapPartner::
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNumber::
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNotes::
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleFactoryLobby_EventScript_RulesOpenLv::
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleFactoryLobby_EventScript_ExitRules::
	releaseall
	end

BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle:
	.string "Hier wird die Intelligenz der TRAINER\n"
	.string "auf die Probe gestellt!\p"
	.string "Willkommen in der KAMPFFABRIK!\p"
	.string "Ich begleite dich beim Einzel-Wechsel-\n"
	.string "kampf-Turnier!$"

BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge:
	.string "Möchtest du dich der Herausforderung\n"
	.string "des Einzel-Wechselkampfs stellen?$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge:
	.string "Im Einzel-Wechselkampf-Turnier\n"
	.string "werden EINZELKÄMPFE mit\l"
	.string "Leih-POKéMON ausgetragen.\p"
	.string "Zunächst suchst du dir drei Leih-\n"
	.string "POKéMON aus.\p"
	.string "Danach stellst du dich mit diesen\n"
	.string "deinem Herausforderer.\p"
	.string "Gewinnst du, darfst du eines deiner\n"
	.string "Leih-POKéMON austauschen.\p"
	.string "Wiederhole diese Schritte - wenn du\n"
	.string "sieben Mal in Folge gewinnst, erhältst\l"
	.string "du Gewinnpunkte.\p"
	.string "Wenn du die Herausforderung unter-\n"
	.string "brechen willst, speichere dein Spiel.\n"
	.string "\p"
	.string "Speicherst du nicht, wirst du\n"
	.string "disqualifiziert.$"

BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit:
	.string "Wir freuen uns auf deine nächste\n"
	.string "Herausforderung.$"

BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode:
	.string "An welcher Stufe möchtest du teil-\n"
	.string "nehmen? Level 50 oder Offene Kämpfe?$"

BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge:
	.string "Bevor du dich der Herausforderung\n"
	.string "stellst, muss ich dein Spiel\l"
	.string "speichern.$"

@ Unused
BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping:
	.string "Okay, I will hold your POKéMON for\n"
	.string "safekeeping while you compete.$"

BattleFrontier_BattleFactoryLobby_Text_StepThisWay:
	.string "Bitte hier entlang.$"

BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults:
	.string "Vielen Dank für deine Teilnahme!\p"
	.string "Ich gebe dir nun deine POKéMON\n"
	.string "zurück.\p"
	.string "Ich werde deinen Erfolg speichern.\n"
	.string "Bitte warte einen Moment.$"

@ Unused
BattleFrontier_BattleFactoryLobby_Text_ReturnMons:
	.string "I will return your POKéMON in exchange\n"
	.string "for our rental POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins:
	.string "Herzlichen Glückwunsch! Du hast sieben\n"
	.string "Wechselkämpfe gewonnen!$"

@ Unused
BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak:
	.string "In recognition of your 7-win streak,\n"
	.string "we award you these Battle Point(s).$"

@ Unused
BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints:
	.string "Oh, oh, oh!\p"
	.string "Your Battle Points are maxed.\p"
	.string "Please come back after using\n"
	.string "some Battle Points.$"

BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume:
	.string "Wir haben schon auf dich gewartet!\p"
	.string "Bevor du dich der Herausforderung\n"
	.string "stellst, muss ich dein Spiel\l"
	.string "speichern.$"

BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting:
	.string "Entschuldigung!\p"
	.string "Du hast, bevor du die Herausforderung\n"
	.string "abgebrochen hast, nicht gespeichert.\p"
	.string "Daher wirst du für diese Herausforde-\n"
	.string "rung disqualifiziert. Schade!$"

@ Unused
BattleFrontier_BattleFactoryLobby_Text_WellReturnMons:
	.string "We’ll return your personal POKéMON.$"

@ Unused
BattleFrontier_BattleFactoryLobby_Text_ReceivedPrizeItem:
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle:
	.string "Hier wird die Intelligenz der TRAINER\n"
	.string "auf die Probe gestellt!\p"
	.string "Willkommen in der KAMPFFABRIK!\p"
	.string "Ich begleite dich beim Doppel-Wechsel-\n"
	.string "kampf-Turnier!$"

BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge:
	.string "Möchtest du am Doppel-Wechselkampf\n"
	.string "teilnehmen?$"

BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge:
	.string "Im Doppel-Wechselkampf-Turnier\n"
	.string "werden DOPPELKÄMPFE mit\l"
	.string "Leih-POKéMON ausgetragen.\p"
	.string "Zunächst suchst du dir drei Leih-\n"
	.string "POKéMON aus.\p"
	.string "Danach stellst du dich mit diesen\n"
	.string "deinen Herausforderern.\p"
	.string "Gewinnst du, darfst du eines deiner\n"
	.string "Leih-POKéMON austauschen.\p"
	.string "Wiederhole diese Schritte - wenn du\n"
	.string "sieben Mal in Folge gewinnst, erhältst\l"
	.string "du Gewinnpunkte.\p"
	.string "Wenn du die Herausforderung unter-\n"
	.string "brechen willst, speichere dein Spiel.\n"
	.string "\p"
	.string "Speicherst du nicht, wirst du\n"
	.string "disqualifiziert.$"

BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead:
	.string "Glückwunsch! Du hast den FABRIKLEITER\n"
	.string "besiegt und sechs Kämpfe\l"
	.string "in Folge gewonnen!$"

BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints:
	.string "In Anerkennung deines reichen Wissens\n"
	.string "und deiner Intelligenz geben wir dir\l"
	.string "diese Gewinnpunkte.$"

BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave:
	.string "Ich gebe dir nun deine POKéMON\n"
	.string "zurück.\p"
	.string "Ich werde deinen Erfolg speichern.\n"
	.string "Bitte warte einen Moment.$"

BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch:
	.string "Möchtest du den letzten KAMPFFABRIK-\n"
	.string "Kampf auf deinem KAMPFZONEN-\l"
	.string "PASS eintragen lassen?$"

BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves:
	.string "Hallo! Du da! Dich meine ich!\p"
	.string "Du denkst bestimmt, die Kämpfe hier\n"
	.string "sind einfach, da man keine eigenen\l"
	.string "POKéMON mitbringen muss, was?\p"
	.string "Ich wäre an deiner Stelle nicht so\n"
	.string "überzeugt davon.\p"
	.string "Wenn du keine Ahnung von POKéMON\n"
	.string "und ihren Attacken hast, dann wirst du\l"
	.string "keinen leichten Stand haben!$"

BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon:
	.string "Ich habe mich auf ein schwaches\n"
	.string "POKéMON verlassen… Ich dachte,\p"
	.string "es wäre eine gute Entscheidung… \n"
	.string "Sie haben uns platt gemacht… $"

BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons:
	.string "Die Dinge laufen überhaupt nicht so,\n"
	.string "wie ich es mir vorgestellt habe!\p"
	.string "Du musst in einem Kampf unbedingt die\n"
	.string "gegnerischen POKéMON prüfen, damit\l"
	.string "du siehst, was dich erwartet.$"

BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints:
	.string "Wusstest du, dass die Angestellten dir\n"
	.string "Tipps über deinen nächsten Gegner\p"
	.string "geben? Nun, ich bin erwachsen und\l"
	.string "nicht\n"
	.string "gerade blöd, aber manchmal verstehe\p"
	.string "ich \p"
	.string "sie nicht. Überhaupt nicht…$"

@ Unused
BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried:
	.string "Like, I’m really tough, but I get\n"
	.string "bored\n"
	.string "really easily, so I just kept swapping\l"
	.string "and battling over and over.\p"
	.string "So anyway, when I kept entering\n"
	.string "Battle Swap events, I noticed they\l"
	.string "varied the rental POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_RulesAreListed:
	.string "Die Regeln des Wechselkampfes hängen\n"
	.string "öffentlich aus.$"

BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading:
	.string "Wähle bitte ein Themengebiet aus.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules:
	.string "In einem Wechselkampf kannst du\n"
	.string "nur drei POKéMON einsetzen.\p"
	.string "Egal, ob du diese ausleihst oder\n"
	.string "tauschst, dein Team darf nicht aus\p"
	.string "zwei oder mehr POKéMON der gleichen\n"
	.string "Art bestehen.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules:
	.string "Du kannst mit einem TRAINER nur dann\n"
	.string "POKéMON tauschen, wenn du diesen\p"
	.string "besiegt hast. Und nur mit diesem\n"
	.string "TRAINER ist ein Tausch möglich.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules:
	.string "Nach jedem gewonnenen Kampf kannst\n"
	.string "du ein POKéMON mit dem besiegten\l"
	.string "TRAINER tauschen.\p"
	.string "Mit dem siebten TRAINER kannst du\n"
	.string "allerdings kein POKéMON tauschen.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules:
	.string "Bei dem POKéMON-Tausch sind zwei\n"
	.string "Dinge zu beachten:\p"
	.string "Du kannst den Status des POKéMON,\n"
	.string "welches du haben möchtest, nicht\l"
	.string "überprüfen.\p"
	.string "Deine POKéMON stehen in der\n"
	.string "Reihenfolge, in der du sie ausgeliehen\l"
	.string "hast.\p"
	.string "Diese Reihenfolge ändert sich auch\n"
	.string "durch den Tausch nicht.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules:
	.string "In den Offenen Kämpfen stehen die\n"
	.string "Leih-POKéMON und die der gegnerischen\l"
	.string "TRAINER auf Level 100.$"
