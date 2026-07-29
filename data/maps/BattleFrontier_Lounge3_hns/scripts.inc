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
	.string "Was willst du von uns?!?\p"
	.string "Siehst du nicht, dass wir beschäftigt\n"
	.string "sind? Hat das nicht Zeit bis später?$"

BattleFrontier_Lounge3_Text_YouLookToughExplainGambling_hns::
	.string "Oh…\n"
	.string "Du siehst wie ein starker Trainer aus.\p"
	.string "Hähähä… Pass auf, ich\n"
	.string "mach dir folgenden Vorschlag:\p"
	.string "Wir haben hier eine Gruppe gebildet\n"
	.string "und wir nutzen bei unserem Spiel aus,\l"
	.string "was hier in der Kampfzone so\p"
	.string "passiert. Die Regeln sind ganz einfach.\p"
	.string "Als Erstes suchen wir uns hier eine\n"
	.string "Kampfstätte aus.\p"
	.string "Dann bestimmen wir einen Trainer,\n"
	.string "der die Herausforderung dieser\l"
	.string "Einrichtung annimmt und wetten um\p"
	.string "unsere Gewinnpunkte. Derjenige, der\n"
	.string "auf den besten Trainer gesetzt hat,\l"
	.string "gewinnt die Gewinnpunkte.\p"
	.string "Hört sich einfach an, nicht wahr?\n"
	.string "Nun, kommen wir zum Punkt…$"

BattleFrontier_Lounge3_Text_ChallengeBattleTowerSingle_hns::
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "Einzelkämpfe im Duellturm\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattleTowerDouble_hns::
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "Doppelkämpfe im Duellturm\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattleTowerMulti_hns::
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "Multikämpfe im Duellturm\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattleDomeSingle_hns::
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung eines\p"
	.string "Einzelkampf-Turniers des\n"
	.string "Kampfstadions zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattleDomeDouble_hns::
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung eines\p"
	.string "Doppelkampf-Turniers des\n"
	.string "Kampfstadions zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattleFactorySingle_hns::
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung des\p"
	.string "Einzel-Wechselkampf-Turniers der\n"
	.string "Kampffabrik zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattleFactoryDouble_hns::
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung des\p"
	.string "Doppel-Wechselkampf-Turniers der\n"
	.string "Kampffabrik zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePalaceSingle_hns::
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "Einzelkampf-Hallen des Kampfpalastes\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePalaceDouble_hns::
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "Doppelkampf-Hallen des Kampfpalastes\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattleArena_hns::
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "K.O.-Teamturniere des Kampfrings\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePike_hns::
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "Kampfbahn der Kampfipitis\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePyramid_hns::
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "Kampfforschung der Kampfpyramide\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe_hns::
	.string "Ich achte darauf, dass auch du einen\n"
	.string "Vorteil daraus ziehen kannst. Also, wie\l"
	.string "sieht es aus? Kämpfst du für mich?$"

BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints_hns::
	.string "Sehr schön! Perfekt!\n"
	.string "Äh… Wie wäre es, wenn du mir einige\l"
	.string "deiner Gewinnpunkte als Einsatz gibst?\p"
	.string "Vertrau mir! Es soll dein Schaden\n"
	.string "nicht sein!$"

BattleFrontier_Lounge3_Text_HowMuchCanYouSpot_hns::
	.string "Sehr gut! Sehr gut!\n"
	.string "Und wie hoch ist dein Einsatz?$"

BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints_hns::
	.string "Oh, nein, nein, nein!\n"
	.string "Du hast nicht genug Gewinnpunkte!\p"
	.string "Ich wünschte, du würdest hier nicht\n"
	.string "den Affen machen und die Zeit anderer\l"
	.string "Leute vergeuden!$"

BattleFrontier_Lounge3_Text_ThanksOffYouGo_hns::
	.string "Hähähä! Vielen Dank!\n"
	.string "Und los geht’s!$"

BattleFrontier_Lounge3_Text_GetToBattleTowerSingle_hns::
	.string "Beeil dich! Stell dich in den\n"
	.string "Einzelkämpfen des Duellturms!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleTowerDouble_hns::
	.string "Beeil dich! Geh in die Räume für die\n"
	.string "Doppelkämpfe des Duellturms!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleTowerMulti_hns::
	.string "Beeil dich! Geh in die Multikampf-\n"
	.string "Räume des Duellturms!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleDomeSingle_hns::
	.string "Beeil dich! Geh zum Einzelkampf-\n"
	.string "Turnier des Kampfstadions!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleDomeDouble_hns::
	.string "Beeil dich! Geh zum Doppelkampf-\n"
	.string "Turnier des Kampfstadions!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleFactorySingle_hns::
	.string "Beeil dich! Geh zum Einzel-Wechsel-\n"
	.string "kampf-Turnier der Kampffabrik!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleFactoryDouble_hns::
	.string "Beeil dich! Geh zum Doppel-Wechsel-\n"
	.string "kampf-Turnier der Kampffabrik!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattlePalaceSingle_hns::
	.string "Beeil dich! Geh zu den Einzelkampf-\n"
	.string "Hallen des Kampfpalastes!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattlePalaceDouble_hns::
	.string "Beeil dich! Geh zu den Doppelkampf-\n"
	.string "Hallen des Kampfpalastes!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleArena_hns::
	.string "Beeil dich! Geh zum K.O.-Teamturnier\n"
	.string "des Kampfrings!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattlePike_hns::
	.string "Beeil dich! Geh zur Kampfbahn\n"
	.string "der Kampfipitis!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattlePyramid_hns::
	.string "Beeil dich! Geh zur Kampfforschung\n"
	.string "der Kampfpyramide!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints_hns::
	.string "Oh, du bist es…\n"
	.string "Netter Versuch…\p"
	.string "Ich enttäusch dich nur ungern, aber\n"
	.string "ich kann dir deine Gewinnpunkte nicht\l"
	.string "zurückgeben…\p"
	.string "Ich denke, wir sollten dies als Ansporn\n"
	.string "nehmen, uns in Zukunft mehr\l"
	.string "anzustrengen.$"

BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints_hns::
	.string "Oh, ja!\n"
	.string "Da kommt der Champ!\p"
	.string "Ich wusste, du würdest es schaffen!\n"
	.string "Ich wusste es!\l"
	.string "Wir beide sind Gewinnertypen!\p"
	.string "Hier sind deine Gewinnpunkte - und\n"
	.string "ein kleiner Gewinn für mich!$"

BattleFrontier_Lounge3_Text_ObtainedBattlePoints_hns::
	.string "{PLAYER} erhält {STR_VAR_1} Gewinnpunkt(e).$"

BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge_hns::
	.string "Wenn es dich wieder nach einer Heraus-\n"
	.string "forderung dürstet, denk an mich!$"

BattleFrontier_Lounge3_Text_NotInterested_hns::
	.string "Kein Interesse? Ich hätte nicht\n"
	.string "gedacht, dass du so ein Angsthase bist.$"

BattleFrontier_Lounge3_Text_Oh_hns::
	.string "Oh…$"

BattleFrontier_Lounge3_Text_BackedWrongTrainer_hns::
	.string "Ich habe schon wieder den falschen\n"
	.string "Trainer unterstützt!\p"
	.string "Vielleicht sollte ich es mal mit Kämpfen\n"
	.string "versuchen, so wie jeder andere auch?$"

BattleFrontier_Lounge3_Text_TrainerGoodButRattled_hns::
	.string "Dieser Trainer…\p"
	.string "Er ist gut, aber er verliert in Kämpfen\n"
	.string "schnell die Fassung und verliert dann\l"
	.string "im Kampfstadion…$"

BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne_hns::
	.string "Kicher, kicher! Ich erkenne\n"
	.string "einen Sieger, wenn ich ihn sehe!$"

BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges_hns::
	.string "Diese Trainer…\n"
	.string "Was machen die da? Sie sollten\l"
	.string "sich lieber Herausforderungen stellen!$"
