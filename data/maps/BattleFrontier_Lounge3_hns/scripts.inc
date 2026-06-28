BattleFrontier_Lounge3_hns_MapScripts::
	.byte 0

	.set BET_AMOUNT_5,  5
	.set BET_AMOUNT_10, 10
	.set BET_AMOUNT_15, 15

BattleFrontier_Lounge3_EventScript_Gambler_hns::
	lock
	faceplayer
	goto_if_set FLAG_MET_BATTLE_FRONTIER_GAMBLER, BattleFrontier_Lounge3_EventScript_AlreadyMetGambler_hns
	call BattleFrontier_Lounge3_EventScript_CountSilverSymbols_hns
	goto_if_le VAR_0x8004, 2, BattleFrontier_Lounge3_EventScript_NotEnoughSilverSymbols_hns
	setflag FLAG_MET_BATTLE_FRONTIER_GAMBLER
	msgbox BattleFrontier_Lounge3_Text_YouLookToughExplainGambling_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_hns
	end

BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_hns::
	special ShowFrontierGamblerLookingMessage
	waitmessage
	waitbuttonpress
	msgbox BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe_hns, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge3_EventScript_DeclineChallenge_hns
	msgbox BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints_hns, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge3_EventScript_DeclineChallenge_hns
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot_hns
	waitmessage
	special ShowBattlePointsWindow
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount_hns
	end

BattleFrontier_Lounge3_EventScript_ChooseBetAmount_hns::
	multichoice 20, 4, MULTI_FRONTIER_GAMBLER_BET, FALSE
	copyvar VAR_FRONTIER_GAMBLER_AMOUNT_BET, VAR_RESULT
	switch VAR_RESULT
	case FRONTIER_GAMBLER_BET_5, BattleFrontier_Lounge3_EventScript_Bet5_hns
	case FRONTIER_GAMBLER_BET_10, BattleFrontier_Lounge3_EventScript_Bet10_hns
	case FRONTIER_GAMBLER_BET_15, BattleFrontier_Lounge3_EventScript_Bet15_hns
	case FRONTIER_GAMBLER_BET_CANCEL, BattleFrontier_Lounge3_EventScript_CancelBet_hns
	case MULTI_B_PRESSED, BattleFrontier_Lounge3_EventScript_CancelBet_hns
	end

BattleFrontier_Lounge3_EventScript_Bet5_hns::
	setvar VAR_0x8008, BET_AMOUNT_5
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet_hns
	end

BattleFrontier_Lounge3_EventScript_Bet10_hns::
	setvar VAR_0x8008, BET_AMOUNT_10
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet_hns
	end

BattleFrontier_Lounge3_EventScript_Bet15_hns::
	setvar VAR_0x8008, BET_AMOUNT_15
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet_hns
	end

BattleFrontier_Lounge3_EventScript_TryPlaceBet_hns::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge3_EventScript_PlaceBet_hns
	msgbox BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints_hns, MSGBOX_DEFAULT
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot_hns
	waitmessage
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount_hns
	end

BattleFrontier_Lounge3_EventScript_PlaceBet_hns::
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleFrontier_Lounge3_Text_ThanksOffYouGo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_FinishBet_hns
	end

BattleFrontier_Lounge3_EventScript_FinishBet_hns::
	special ShowFrontierGamblerGoMessage
	waitmessage
	waitbuttonpress
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_Lounge3_EventScript_CountSilverSymbols_hns::
	setvar VAR_0x8004, 0
	call_if_set FLAG_SYS_TOWER_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount_hns
	call_if_set FLAG_SYS_DOME_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount_hns
	call_if_set FLAG_SYS_PALACE_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount_hns
	call_if_set FLAG_SYS_ARENA_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount_hns
	call_if_set FLAG_SYS_FACTORY_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount_hns
	call_if_set FLAG_SYS_PIKE_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount_hns
	call_if_set FLAG_SYS_PYRAMID_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount_hns
	return

BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount_hns::
	addvar VAR_0x8004, 1
	return

BattleFrontier_Lounge3_EventScript_NotEnoughSilverSymbols_hns::
	msgbox BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection_hns
	end

BattleFrontier_Lounge3_EventScript_AlreadyMetGambler_hns::
	msgbox BattleFrontier_Lounge3_Text_Oh_hns, MSGBOX_DEFAULT
	goto_if_ge VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET, BattleFrontier_Lounge3_EventScript_CheckBetResults_hns
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_hns
	end

BattleFrontier_Lounge3_EventScript_CheckBetResults_hns::
	goto_if_eq VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET, BattleFrontier_Lounge3_EventScript_ChallengeNotAttempted_hns
	goto_if_eq VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WON, BattleFrontier_Lounge3_EventScript_WonChallenge_hns
	goto BattleFrontier_Lounge3_EventScript_LostChallenge_hns
	end

BattleFrontier_Lounge3_EventScript_WonChallenge_hns::
	msgbox BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints_hns, MSGBOX_DEFAULT
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_5, BattleFrontier_Lounge3_EventScript_RewardBet5_hns
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_10, BattleFrontier_Lounge3_EventScript_RewardBet10_hns
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_15, BattleFrontier_Lounge3_EventScript_RewardBet15_hns
	msgbox BattleFrontier_Lounge3_Text_ObtainedBattlePoints_hns, MSGBOX_GETPOINTS
	special GiveFrontierBattlePoints
	msgbox BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge_hns, MSGBOX_DEFAULT
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
	release
	end

BattleFrontier_Lounge3_EventScript_LostChallenge_hns::
	msgbox BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints_hns, MSGBOX_DEFAULT
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
	release
	end

BattleFrontier_Lounge3_EventScript_RewardBet5_hns::
	buffernumberstring STR_VAR_1, (BET_AMOUNT_5 * 2)
	setvar VAR_0x8004, (BET_AMOUNT_5 * 2)
	return

BattleFrontier_Lounge3_EventScript_RewardBet10_hns::
	buffernumberstring STR_VAR_1, (BET_AMOUNT_10 * 2)
	setvar VAR_0x8004, (BET_AMOUNT_10 * 2)
	return

BattleFrontier_Lounge3_EventScript_RewardBet15_hns::
	buffernumberstring STR_VAR_1, (BET_AMOUNT_15 * 2)
	setvar VAR_0x8004, (BET_AMOUNT_15 * 2)
	return

BattleFrontier_Lounge3_EventScript_ChallengeNotAttempted_hns::
	special ShowFrontierGamblerGoMessage
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge3_EventScript_DeclineChallenge_hns::
	msgbox BattleFrontier_Lounge3_Text_NotInterested_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge3_EventScript_CancelBet_hns::
	special CloseBattlePointsWindow
	goto BattleFrontier_Lounge3_EventScript_DeclineChallenge_hns
	end

BattleFrontier_Lounge3_EventScript_Man_hns::
	msgbox BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges_hns, MSGBOX_NPC
	end

BattleFrontier_Lounge3_EventScript_Woman_hns::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge3_Text_BackedWrongTrainer_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection_hns
	end

BattleFrontier_Lounge3_EventScript_PokefanF_hns::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection_hns
	end

BattleFrontier_Lounge3_EventScript_FatMan_hns::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge3_Text_TrainerGoodButRattled_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection_hns
	end

BattleFrontier_Lounge3_EventScript_FaceOriginalDirection_hns::
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere_hns::
	.string "…Was willst du?\p"
	.string "Siehst du nicht, dass wir gerade\n"
	.string "beschäftigt sind?\l"
	.string "Kann das nicht warten?$"

BattleFrontier_Lounge3_Text_YouLookToughExplainGambling_hns::
	.string "…Hm?\n"
	.string "Du siehst mir wie ein starker TRAINER\l"
	.string "aus.\p"
	.string "Heheh…\n"
	.string "Hör mal, ich hab einen Vorschlag.\p"
	.string "Wir haben hier eine kleine Gruppe\n"
	.string "und spielen ein Spiel rund um die\l"
	.string "KAMPFGRENZE.\p"
	.string "Die Regeln sind ganz einfach.\p"
	.string "Zuerst wählen wir eine der\n"
	.string "Einrichtungen der KAMPFGRENZE.\p"
	.string "Dann setzt jeder auf einen anderen\n"
	.string "TRAINER, der diese Herausforderung\l"
	.string "annimmt, und wettet mit Kampfpunkten.\p"
	.string "Wer auf den TRAINER mit dem besten\n"
	.string "Ergebnis gesetzt hat, gewinnt alle\l"
	.string "Kampfpunkte im Topf.\p"
	.string "Klingt einfach, oder?\n"
	.string "Also jedenfalls…$"

BattleFrontier_Lounge3_Text_ChallengeBattleTowerSingle_hns::
	.string "Ich suche einen TRAINER, der die\n"
	.string "EINZELKAMPF-Räume des DUELLTURMs\l"
	.string "herausfordern wird.\p"
	.string "Aber bisher hab ich keinen TRAINER\n"
	.string "mit dem gewissen Siegerqualitäten\l"
	.string "gesehen.$"

BattleFrontier_Lounge3_Text_ChallengeBattleTowerDouble_hns::
	.string "Ich suche einen TRAINER, der die\n"
	.string "DOPPELKAMPF-Räume des DUELLTURMs\l"
	.string "herausfordern wird.\p"
	.string "Aber bisher hab ich keinen TRAINER\n"
	.string "mit den gewissen Siegerqualitäten\l"
	.string "gesehen.$"

BattleFrontier_Lounge3_Text_ChallengeBattleTowerMulti_hns::
	.string "Ich suche einen TRAINER, der die\n"
	.string "MULTIKAMPF-Räume des DUELLTURMs\l"
	.string "herausfordern wird.\p"
	.string "Aber bisher hab ich keinen TRAINER\n"
	.string "mit den gewissen Siegerqualitäten\l"
	.string "gesehen.$"

BattleFrontier_Lounge3_Text_ChallengeBattleDomeSingle_hns::
	.string "Ich suche einen TRAINER, der am\n"
	.string "EINZELKAMPF-Turnier der\l"
	.string "KAMPFKUPPEL teilnehmen wird.\p"
	.string "Aber bisher hab ich keinen TRAINER\n"
	.string "mit den gewissen Siegerqualitäten\l"
	.string "gesehen.$"

BattleFrontier_Lounge3_Text_ChallengeBattleDomeDouble_hns::
	.string "Ich suche einen TRAINER, der am\n"
	.string "DOPPELKAMPF-Turnier der\l"
	.string "KAMPFKUPPEL teilnehmen wird.\p"
	.string "Aber bisher hab ich keinen TRAINER\n"
	.string "mit den gewissen Siegerqualitäten\l"
	.string "gesehen.$"

BattleFrontier_Lounge3_Text_ChallengeBattleFactorySingle_hns::
	.string "Ich suche einen TRAINER, der am\n"
	.string "Tausch-Einzel-Turnier der\l"
	.string "KAMPFFABRIK teilnehmen wird.\p"
	.string "Aber bisher hab ich keinen TRAINER\n"
	.string "mit den gewissen Siegerqualitäten\l"
	.string "gesehen.$"

BattleFrontier_Lounge3_Text_ChallengeBattleFactoryDouble_hns::
	.string "Ich suche einen TRAINER, der am\n"
	.string "Tausch-Doppel-Turnier der\l"
	.string "KAMPFFABRIK teilnehmen wird.\p"
	.string "Aber bisher hab ich keinen TRAINER\n"
	.string "mit den gewissen Siegerqualitäten\l"
	.string "gesehen.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePalaceSingle_hns::
	.string "Ich suche einen TRAINER, der die\n"
	.string "EINZELKAMPF-Hallen des\l"
	.string "KAMPFPALASTES herausfordern wird.\p"
	.string "Aber bisher hab ich keinen TRAINER\n"
	.string "mit den gewissen Siegerqualitäten\l"
	.string "gesehen.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePalaceDouble_hns::
	.string "Ich suche einen TRAINER, der die\n"
	.string "DOPPELKAMPF-Hallen des\l"
	.string "KAMPFPALASTES herausfordern wird.\p"
	.string "Aber bisher hab ich keinen TRAINER\n"
	.string "mit den gewissen Siegerqualitäten\l"
	.string "gesehen.$"

BattleFrontier_Lounge3_Text_ChallengeBattleArena_hns::
	.string "Ich suche einen TRAINER, der am\n"
	.string "K.O.-Turnier der KAMPFARENA\l"
	.string "teilnehmen wird.\p"
	.string "Aber bisher hab ich keinen TRAINER\n"
	.string "mit den gewissen Siegerqualitäten\l"
	.string "gesehen.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePike_hns::
	.string "Ich suche einen TRAINER, der an der\n"
	.string "Kampfwahl der KAMPFPIKE\l"
	.string "teilnehmen wird.\p"
	.string "Aber bisher hab ich keinen TRAINER\n"
	.string "mit den gewissen Siegerqualitäten\l"
	.string "gesehen.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePyramid_hns::
	.string "Ich suche einen TRAINER, der am\n"
	.string "Kampfquests der KAMPFPYRAMIDE\l"
	.string "teilnehmen wird.\p"
	.string "Aber bisher hab ich keinen TRAINER\n"
	.string "mit den gewissen Siegerqualitäten\l"
	.string "gesehen.$"

BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe_hns::
	.string "Ich sorge dafür, dass auch du\n"
	.string "profitierst.\l"
	.string "Also, was sagst du?\l"
	.string "Nimmst du das für mich teil?$"

BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints_hns::
	.string "Perfekt.\n"
	.string "Also, äh… Wie wär's, wenn du mir\l"
	.string "ein paar Kampfpunkte leihst?\p"
	.string "Vertrau mir, ich zeig meine\n"
	.string "Dankbarkeit danach.$"

BattleFrontier_Lounge3_Text_HowMuchCanYouSpot_hns::
	.string "Super, super!\n"
	.string "Also, wie viel kannst du mir leihen?$"

BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints_hns::
	.string "Oh nein, nein, nein!\n"
	.string "Du hast nicht genug Kampfpunkte!\p"
	.string "Ich wünschte, du würdest nicht\n"
	.string "die Zeit aller verschwenden!$"

BattleFrontier_Lounge3_Text_ThanksOffYouGo_hns::
	.string "Heheh! Vielen Dank!\n"
	.string "Also, auf geht's!$"

BattleFrontier_Lounge3_Text_GetToBattleTowerSingle_hns::
	.string "Ab in die EINZELKAMPF-Räume\n"
	.string "des DUELLTURMs!\p"
	.string "Du musst gewinnen!\n"
	.string "Lass dir die Chance nicht entgehen!\l"
	.string "Unsere Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleTowerDouble_hns::
	.string "Ab in die DOPPELKAMPF-Räume\n"
	.string "des DUELLTURMs!\p"
	.string "Du musst gewinnen!\n"
	.string "Lass dir die Chance nicht entgehen!\l"
	.string "Unsere Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleTowerMulti_hns::
	.string "Ab in die MULTIKAMPF-Räume\n"
	.string "des DUELLTURMs!\p"
	.string "Du musst gewinnen!\n"
	.string "Lass dir die Chance nicht entgehen!\l"
	.string "Unsere Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleDomeSingle_hns::
	.string "Ab zum EINZELKAMPF-Turnier\n"
	.string "der KAMPFKUPPEL!\p"
	.string "Du musst gewinnen!\n"
	.string "Lass dir die Chance nicht entgehen!\l"
	.string "Unsere Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleDomeDouble_hns::
	.string "Ab zum DOPPELKAMPF-Turnier\n"
	.string "der KAMPFKUPPEL!\p"
	.string "Du musst gewinnen!\n"
	.string "Lass dir die Chance nicht entgehen!\l"
	.string "Unsere Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleFactorySingle_hns::
	.string "Ab zum Tausch-Einzel-Turnier\n"
	.string "der KAMPFFABRIK!\p"
	.string "Du musst gewinnen!\n"
	.string "Lass dir die Chance nicht entgehen!\l"
	.string "Unsere Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleFactoryDouble_hns::
	.string "Ab zum Tausch-Doppel-Turnier\n"
	.string "der KAMPFFABRIK!\p"
	.string "Du musst gewinnen!\n"
	.string "Lass dir die Chance nicht entgehen!\l"
	.string "Unsere Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattlePalaceSingle_hns::
	.string "Ab in die EINZELKAMPF-Hallen\n"
	.string "des KAMPFPALASTES!\p"
	.string "Du musst gewinnen!\n"
	.string "Lass dir die Chance nicht entgehen!\l"
	.string "Unsere Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattlePalaceDouble_hns::
	.string "Ab in die DOPPELKAMPF-Hallen\n"
	.string "des KAMPFPALASTES!\p"
	.string "Du musst gewinnen!\n"
	.string "Lass dir die Chance nicht entgehen!\l"
	.string "Unsere Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleArena_hns::
	.string "Ab zum K.O.-Turnier\n"
	.string "der KAMPFARENA!\p"
	.string "Du musst gewinnen!\n"
	.string "Lass dir die Chance nicht entgehen!\l"
	.string "Unsere Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattlePike_hns::
	.string "Ab zur Kampfwahl\n"
	.string "der KAMPFPIKE!\p"
	.string "Du musst gewinnen!\n"
	.string "Lass dir die Chance nicht entgehen!\l"
	.string "Unsere Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattlePyramid_hns::
	.string "Ab zum Kampfquest\n"
	.string "der KAMPFPYRAMIDE!\p"
	.string "Du musst gewinnen!\n"
	.string "Lass dir die Chance nicht entgehen!\l"
	.string "Unsere Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints_hns::
	.string "Oh, du bist's…\n"
	.string "Netter Versuch…\p"
	.string "Es tut mir leid, aber ich kann deine\n"
	.string "Kampfpunkte nicht zurückgeben…\p"
	.string "Ich schätze, das motiviert uns,\n"
	.string "beim nächsten Mal härter zu versuchen!$"

BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints_hns::
	.string "Oh ja!\n"
	.string "Hallo, Champion!\p"
	.string "Ich wusste, du kannst das!\n"
	.string "Ich wusste, du würdest das schaffen!\l"
	.string "Wir sind beide große Gewinner!\p"
	.string "Ich gebe dir deine Kampfpunkte\n"
	.string "zurück und natürlich noch etwas\l"
	.string "extra von mir!$"

BattleFrontier_Lounge3_Text_ObtainedBattlePoints_hns::
	.string "{PLAYER} erhält\n"
	.string "{STR_VAR_1} Kampfpunkt(e).$"

BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge_hns::
	.string "Wenn du eine weitere Herausforderung\n"
	.string "annimmst, denk bitte an mich!$"

BattleFrontier_Lounge3_Text_NotInterested_hns::
	.string "Kein Interesse?! Du solltest keine\n"
	.string "Angst davor haben, ein Risiko\l"
	.string "einzugehen!$"

BattleFrontier_Lounge3_Text_Oh_hns::
	.string "Oh…$"

BattleFrontier_Lounge3_Text_BackedWrongTrainer_hns::
	.string "Ich hab wieder auf den falschen\n"
	.string "TRAINER gesetzt!\p"
	.string "Vielleicht sollte ich einfach normal\n"
	.string "kämpfen wie alle anderen…$"

BattleFrontier_Lounge3_Text_TrainerGoodButRattled_hns::
	.string "Dieser TRAINER…\p"
	.string "Er ist gut, aber zu leicht aus der\n"
	.string "Fassung zu bringen für die\l"
	.string "KAMPFKUPPEL…$"

BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne_hns::
	.string "Kicher!\n"
	.string "Ich erkenne einen Gewinner, wenn\l"
	.string "ich einen sehe!$"

BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges_hns::
	.string "Diese TRAINER…\n"
	.string "Was machen die da?\l"
	.string "Die sollten Herausforderungen\l"
	.string "annehmen.$"
