BattleFrontier_BattlePikeLobby_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeLobby_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeLobby_OnWarp
	.byte 0

BattleFrontier_BattlePikeLobby_OnFrame:
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePikeLobby_EventScript_GetChallengeStatus
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePikeLobby_EventScript_QuitWithoutSaving
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePikeLobby_EventScript_WonChallenge
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePikeLobby_EventScript_LostChallenge
	.2byte 0

BattleFrontier_BattlePikeLobby_OnWarp:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePikeLobby_EventScript_TurnPlayerNorth
	.2byte 0

BattleFrontier_BattlePikeLobby_EventScript_TurnPlayerNorth::
	setvar VAR_TEMP_1, 1
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattlePikeLobby_EventScript_GetChallengeStatus::
	frontier_getstatus
	end

BattleFrontier_BattlePikeLobby_EventScript_QuitWithoutSaving::
	special HealPlayerParty
	pike_resethelditems
	lockall
	msgbox BattleFrontier_BattlePikeLobby_Text_FailedToSaveBeforeQuitting, MSGBOX_DEFAULT
	closemessage
	pike_set PIKE_DATA_WIN_STREAK, 0
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, FALSE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattlePikeLobby_EventScript_WonChallenge::
	lockall
	frontier_isbrain
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePikeLobby_EventScript_DefeatedQueen
	msgbox BattleFrontier_BattlePikeLobby_Text_PossessLuckInAbundance, MSGBOX_DEFAULT
	waitmessage
	goto BattleFrontier_BattlePikeLobby_EventScript_GiveBattlePoints

BattleFrontier_BattlePikeLobby_EventScript_DefeatedQueen::
	msgbox BattleFrontier_BattlePikeLobby_Text_SnatchedVictoryFromQueen, MSGBOX_DEFAULT
	waitmessage
BattleFrontier_BattlePikeLobby_EventScript_GiveBattlePoints::
	msgbox BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints, MSGBOX_DEFAULT
	frontier_givepoints
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
	frontier_checkairshow
	pike_get PIKE_DATA_TOTAL_STREAKS
	addvar VAR_RESULT, 1
	pike_set PIKE_DATA_TOTAL_STREAKS, VAR_RESULT
	special LoadPlayerParty
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	pike_resethelditems
	message BattleFrontier_BattlePikeLobby_Text_ShallRecordResults
	waitmessage
	pike_save 0
	playse SE_SAVE
	waitse
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattlePikeLobby_EventScript_LostChallenge::
	lockall
	message BattleFrontier_BattlePikeLobby_Text_ChallengeEndedRecordResults
	waitmessage
	frontier_checkairshow
	frontier_set FRONTIER_DATA_BATTLE_NUM, 0
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, FALSE
	special LoadPlayerParty
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	pike_resethelditems
	pike_save 0
	playse SE_SAVE
	waitse
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattlePikeLobby_EventScript_Attendant::
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PIKE
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	special SavePlayerParty
	msgbox BattleFrontier_BattlePikeLobby_Text_WelcomeToBattlePike, MSGBOX_DEFAULT
BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge::
	message BattleFrontier_BattlePikeLobby_Text_TakeChallenge
	waitmessage
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge
	case 1, BattleFrontier_BattlePikeLobby_EventScript_ExplainChallenge
	case 2, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge

BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge::
	message BattleFrontier_BattlePikeLobby_Text_WhichChallengeMode
	waitmessage
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
	switch VAR_RESULT
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
	frontier_checkineligible
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMons
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
	msgbox BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	call BattleFrontier_EventScript_GetLvlMode
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
	special ChoosePartyForBattleFrontier
	waitstate
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
	msgbox BattleFrontier_BattlePikeLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
	case YES, BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge

BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge::
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	setvar VAR_TEMP_1, 0
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
	pike_init
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, TRUE
	pike_savehelditems
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	special LoadPlayerParty
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	pike_savehelditems
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePikeLobby_EventScript_CancelChallengeSaveFailed
	special SavePlayerParty
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	msgbox BattleFrontier_BattlePikeLobby_Text_StepThisWay, MSGBOX_DEFAULT
	closemessage
	frontier_settrainers
	call BattleFrontier_BattlePikeLobby_EventScript_WalkToCorridor
	special HealPlayerParty
	call BattleFrontier_BattlePike_EventScript_CloseCurtain
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PIKE_CORRIDOR, 6, 7
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	waitstate
	end

BattleFrontier_BattlePikeLobby_EventScript_ExplainChallenge::
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainBattlePike, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge

BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMons::
	switch VAR_RESULT
	case FRONTIER_LVL_50, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLv50
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLvOpen

BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLv50::
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
	call BattleFrontier_ShowCaughtBannedSpecies
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge

BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLvOpen::
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
	call BattleFrontier_ShowCaughtBannedSpecies
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge

BattleFrontier_BattlePikeLobby_EventScript_CancelChallengeSaveFailed::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	goto BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge

BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge::
	special LoadPlayerParty
	callnative UpdateFollowingPokemon
BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge::
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge::
	release
	end

BattleFrontier_BattlePikeLobby_EventScript_ShowResults::
	lockall
	frontier_results FRONTIER_FACILITY_PIKE
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattlePikeLobby_EventScript_WalkToCorridor::
	applymovement LOCALID_PIKE_LOBBY_ATTENDANT, BattleFrontier_BattlePikeLobby_Movement_AttendantWalkToCorridor
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeLobby_Movement_PlayerWalkToCorridor
	waitmovement 0
	return

BattleFrontier_BattlePikeLobby_Movement_PlayerWalkToCorridor:
	walk_up
BattleFrontier_BattlePikeLobby_Movement_AttendantWalkToCorridor:
	walk_up
	walk_up
	set_invisible
	step_end

BattleFrontier_BattlePikeLobby_EventScript_Hiker::
	msgbox BattleFrontier_BattlePikeLobby_Text_OneRoomAwayFromGoal, MSGBOX_NPC
	end

BattleFrontier_BattlePikeLobby_EventScript_Twin::
	msgbox BattleFrontier_BattlePikeLobby_Text_NeverHadToBattleTrainer, MSGBOX_NPC
	end

BattleFrontier_BattlePikeLobby_EventScript_Beauty::
	msgbox BattleFrontier_BattlePikeLobby_Text_ThinkAbilitiesUsefulHere, MSGBOX_NPC
	end

BattleFrontier_BattlePikeLobby_EventScript_RulesBoard::
	lockall
	msgbox BattleFrontier_BattlePikeLobby_Text_RulesAreListed, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard::
	message BattleFrontier_BattlePikeLobby_Text_ReadWhichHeading
	waitmessage
	multichoice 16, 4, MULTI_BATTLE_PIKE_RULES, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePikeLobby_EventScript_RulesPokenavBag
	case 1, BattleFrontier_BattlePikeLobby_EventScript_RulesHeldItems
	case 2, BattleFrontier_BattlePikeLobby_EventScript_RulesMonOrder
	case 3, BattleFrontier_BattlePikeLobby_EventScript_ExitRules
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_ExitRules
	end

BattleFrontier_BattlePikeLobby_EventScript_RulesPokenavBag::
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainPokenavBagRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePikeLobby_EventScript_RulesHeldItems::
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainHeldItemRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePikeLobby_EventScript_RulesMonOrder::
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainMonOrderRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePikeLobby_EventScript_ExitRules::
	releaseall
	end

BattleFrontier_BattlePike_EventScript_CloseCurtain::
	playse SE_PIKE_CURTAIN_CLOSE
	special CloseBattlePikeCurtain
	waitstate
	waitse
	return

BattleFrontier_BattlePikeLobby_Text_WelcomeToBattlePike:
	.string "Hier wird das Glück der TRAINER\n"
	.string "auf die Probe gestellt…\p"
	.string "Willkommen bei der KAMPFIPITIS…\p"
	.string "Ich begleite dich zur KAMPFIPITIS…$"

BattleFrontier_BattlePikeLobby_Text_TakeChallenge:
	.string "Möchtest du gerne an der Kampfbahn-\n"
	.string "Herausforderung teilnehmen?$"

BattleFrontier_BattlePikeLobby_Text_ExplainBattlePike:
	.string "Wir bieten hier eine besondere Heraus-\n"
	.string "forderung an: Die Kampfbahn!\p"
	.string "Die Regeln sind wirklich sehr einfach…\n"
	.string "\p"
	.string "Wähle einen von drei möglichen Wegen\n"
	.string "und schlag dich zu deinem Ziel durch,\l"
	.string "das am Ende der KAMPFIPITIS liegt…\p"
	.string "Das, was dir auf deinem Weg an Heraus-\n"
	.string "forderungen begegnet, hängt allein\l"
	.string "von deinem Glück ab…\p"
	.string "Erreichst du dein Ziel, erhältst du\n"
	.string "Gewinnpunkte.\p"
	.string "Wenn du die Herausforderung abbrechen\n"
	.string "möchtest, wende dich bitte an unser \l"
	.string "Personal in den Räumen am Weg.\p"
	.string "Wenn du nicht speicherst, bevor du\n"
	.string "die Herausforderung unterbrichst,\l"
	.string "wirst du disqualifiziert.$"

BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou:
	.string "Wir freuen uns auf deine nächste\n"
	.string "Herausforderung.$"

BattleFrontier_BattlePikeLobby_Text_WhichChallengeMode:
	.string "Du kannst zwischen zwei Kategorien\n"
	.string "wählen: Level 50 und Offene Kämpfe.\l"
	.string "Welcher Weg ist richtig für dich?$"

BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLv50:
	.string "Ich bitte vielmals um Entschuldigung,\n"
	.string "aber…\p"
	.string "Deine POKéMON sind nicht\n"
	.string "teilnahmeberechtigt.\p"
	.string "Du brauchst drei verschiedene\n"
	.string "POKéMON von Level 50 oder weniger.\p"
	.string "Jedes muss außerdem ein anderes Item\n"
	.string "halten.\p"
	.string "EIer{STR_VAR_1} nicht zugelassen.\p"
	.string "Bitte komm wieder, wenn du so weit\n"
	.string "bist…$"

BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsEnd:

BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLvOpen:
	.string "Ich bitte vielmals um Entschuldigung,\n"
	.string "aber…\p"
	.string "Deine POKéMON sind nicht\n"
	.string "teilnahmeberechtigt.\p"
	.string "Du brauchst drei verschiedene\n"
	.string "POKéMON.\p"
	.string "Jedes muss außerdem ein anderes Item\n"
	.string "halten.\p"
	.string "EIer{STR_VAR_1} nicht zugelassen.\p"
	.string "Bitte komm wieder, wenn du so weit\n"
	.string "bist…$"

BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons:
	.string "Bitte wähle 3 POKéMON, mit denen du\n"
	.string "dich\l"
	.string "der Herausforderung stellen möchtest.$"

BattleFrontier_BattlePikeLobby_Text_SaveBeforeChallenge:
	.string "Bevor du dich der Herausforderung\n"
	.string "stellst, muss ich dein Spiel\n"
	.string "speichern.\l"
	.string "Bist du damit einverstanden?$"

BattleFrontier_BattlePikeLobby_Text_StepThisWay:
	.string "Bitte hier entlang.$"

BattleFrontier_BattlePikeLobby_Text_ChallengeEndedRecordResults:
	.string "Deine Herausforderung endet hier…\p"
	.string "Dein Erfolg wird gespeichert.\n"
	.string "Bitte warten…$"

BattleFrontier_BattlePikeLobby_Text_PossessLuckInAbundance:
	.string "Du hast die Herausforderung\n"
	.string "gemeistert…\p"
	.string "Ich muss schon sagen…\n"
	.string "Du hattest Glück im Übermaß…$"

BattleFrontier_BattlePikeLobby_Text_ShallRecordResults:
	.string "Dein Erfolg wird gespeichert.\n"
	.string "Bitte warten…$"

@ Unused
BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints2:
	.string "To commemorate your completion of\n"
	.string "the Battle Choice challenge, we award\l"
	.string "you these Battle Point(s)…$"

@ Unused
BattleFrontier_BattlePikeLobby_Text_ReachedBattlePointLimit:
	.string "You appear to have reached the limit\n"
	.string "for Battle Points…\p"
	.string "Please exchange some Battle Points\n"
	.string "for prizes, then return…$"

BattleFrontier_BattlePikeLobby_Text_FailedToSaveBeforeQuitting:
	.string "Ich bitte vielmals um Entschuldigung,\n"
	.string "aber…\p"
	.string "Du hast, bevor du die Herausforderung\n"
	.string "abgebrochen hast, nicht gespeichert.\p"
	.string "Daher wirst du für diese Herausforde-\n"
	.string "rung disqualifiziert. Tut mir Leid!$"

BattleFrontier_BattlePikeLobby_Text_SnatchedVictoryFromQueen:
	.string "Herzlichen Glückwunsch!\p"
	.string "Du hast dir von der PFIPITISTIN den\n"
	.string "Sieg geholt und die Herausforderung\l"
	.string "gemeistert!$"

BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints:
	.string "In Anerkennung deines unglaublichen\n"
	.string "Glücks erhältst du Gewinnpunkte.$"

BattleFrontier_BattlePikeLobby_Text_OneRoomAwayFromGoal:
	.string "Argh! Ich habe meine Chance vertan!\n"
	.string "Ich war nur noch einen Raum vom Ziel\p"
	.string "entfernt! Du musst hier auf Gift, Eis\n"
	.string "und andere gemeine Dinge achten!$"

BattleFrontier_BattlePikeLobby_Text_NeverHadToBattleTrainer:
	.string "Ich habe die Herausforderung bereits\n"
	.string "zum 10. Mal gemeistert, trotzdem\p"
	.string "habe ich noch nie gegen einen\n"
	.string "TRAINER gekämpft.$"

BattleFrontier_BattlePikeLobby_Text_ThinkAbilitiesUsefulHere:
	.string "Überleg mal!\p"
	.string "Meinst du nicht auch, dass die\n"
	.string "besonderen Fähigkeiten der POKéMON\l"
	.string "hier sehr nützlich sein können?$"

@ Unused
BattleFrontier_BattlePikeLobby_Text_TrainersWhicheverPathIChoose:
	.string "What is this weird place?\n"
	.string "I can’t figure it out at all!\p"
	.string "I’ve taken the challenge a bunch\n"
	.string "of times, but all I ever do is run\n"
	.string "into\l"
	.string "TRAINERS whichever path I choose.$"

BattleFrontier_BattlePikeLobby_Text_RulesAreListed:
	.string "Die Regeln der Kampfbahn hängen\n"
	.string "öffentlich aus.$"

BattleFrontier_BattlePikeLobby_Text_ReadWhichHeading:
	.string "Wähle bitte ein Themengebiet aus.$"

BattleFrontier_BattlePikeLobby_Text_ExplainPokenavBagRules:
	.string "BEUTEL und POKéNAV dürfen nicht\n"
	.string "auf die Kampfbahn mitgenommen werden.$"

BattleFrontier_BattlePikeLobby_Text_ExplainHeldItemRules:
	.string "Auf der Kampfbahn ist jede\n"
	.string "BEERE und jedes Kraut nur einmal\l"
	.string "wirksam.$"

BattleFrontier_BattlePikeLobby_Text_ExplainMonOrderRules:
	.string "Auf der Kampfbahn kann die\n"
	.string "Reihenfolge der POKéMON nicht\l"
	.string "verändert werden.\p"
	.string "Du musst die Reihenfolge festlegen,\n"
	.string "bevor du die Herausforderung annimmst.$"

