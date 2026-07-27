BattleFrontier_Lounge3_MapScripts::
	.byte 0

	.set BET_AMOUNT_5,  5
	.set BET_AMOUNT_10, 10
	.set BET_AMOUNT_15, 15

BattleFrontier_Lounge3_EventScript_Gambler::
	lock
	faceplayer
	goto_if_set FLAG_MET_BATTLE_FRONTIER_GAMBLER, BattleFrontier_Lounge3_EventScript_AlreadyMetGambler
	call BattleFrontier_Lounge3_EventScript_CountSilverSymbols
	goto_if_le VAR_0x8004, 2, BattleFrontier_Lounge3_EventScript_NotEnoughSilverSymbols
	setflag FLAG_MET_BATTLE_FRONTIER_GAMBLER
	msgbox BattleFrontier_Lounge3_Text_YouLookToughExplainGambling, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
	end

BattleFrontier_Lounge3_EventScript_AskToEnterChallenge::
	special ShowFrontierGamblerLookingMessage
	waitmessage
	waitbuttonpress
	msgbox BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge3_EventScript_DeclineChallenge
	msgbox BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge3_EventScript_DeclineChallenge
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
	waitmessage
	special ShowBattlePointsWindow
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount
	end

BattleFrontier_Lounge3_EventScript_ChooseBetAmount::
	multichoice 20, 4, MULTI_FRONTIER_GAMBLER_BET, FALSE
	copyvar VAR_FRONTIER_GAMBLER_AMOUNT_BET, VAR_RESULT
	switch VAR_RESULT
	case FRONTIER_GAMBLER_BET_5, BattleFrontier_Lounge3_EventScript_Bet5
	case FRONTIER_GAMBLER_BET_10, BattleFrontier_Lounge3_EventScript_Bet10
	case FRONTIER_GAMBLER_BET_15, BattleFrontier_Lounge3_EventScript_Bet15
	case FRONTIER_GAMBLER_BET_CANCEL, BattleFrontier_Lounge3_EventScript_CancelBet
	case MULTI_B_PRESSED, BattleFrontier_Lounge3_EventScript_CancelBet
	end

BattleFrontier_Lounge3_EventScript_Bet5::
	setvar VAR_0x8008, BET_AMOUNT_5
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
	end

BattleFrontier_Lounge3_EventScript_Bet10::
	setvar VAR_0x8008, BET_AMOUNT_10
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
	end

BattleFrontier_Lounge3_EventScript_Bet15::
	setvar VAR_0x8008, BET_AMOUNT_15
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
	end

BattleFrontier_Lounge3_EventScript_TryPlaceBet::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge3_EventScript_PlaceBet
	msgbox BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints, MSGBOX_DEFAULT
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
	waitmessage
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount
	end

BattleFrontier_Lounge3_EventScript_PlaceBet::
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleFrontier_Lounge3_Text_ThanksOffYouGo, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_FinishBet
	end

BattleFrontier_Lounge3_EventScript_FinishBet::
	special ShowFrontierGamblerGoMessage
	waitmessage
	waitbuttonpress
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_Lounge3_EventScript_CountSilverSymbols::
	setvar VAR_0x8004, 0
	call_if_set FLAG_SYS_TOWER_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	call_if_set FLAG_SYS_DOME_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	call_if_set FLAG_SYS_PALACE_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	call_if_set FLAG_SYS_ARENA_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	call_if_set FLAG_SYS_FACTORY_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	call_if_set FLAG_SYS_PIKE_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	call_if_set FLAG_SYS_PYRAMID_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	return

BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount::
	addvar VAR_0x8004, 1
	return

BattleFrontier_Lounge3_EventScript_NotEnoughSilverSymbols::
	msgbox BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
	end

BattleFrontier_Lounge3_EventScript_AlreadyMetGambler::
	msgbox BattleFrontier_Lounge3_Text_Oh, MSGBOX_DEFAULT
	goto_if_ge VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET, BattleFrontier_Lounge3_EventScript_CheckBetResults
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
	end

BattleFrontier_Lounge3_EventScript_CheckBetResults::
	goto_if_eq VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET, BattleFrontier_Lounge3_EventScript_ChallengeNotAttempted
	goto_if_eq VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WON, BattleFrontier_Lounge3_EventScript_WonChallenge
	goto BattleFrontier_Lounge3_EventScript_LostChallenge
	end

BattleFrontier_Lounge3_EventScript_WonChallenge::
	msgbox BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints, MSGBOX_DEFAULT
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_5, BattleFrontier_Lounge3_EventScript_RewardBet5
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_10, BattleFrontier_Lounge3_EventScript_RewardBet10
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_15, BattleFrontier_Lounge3_EventScript_RewardBet15
	msgbox BattleFrontier_Lounge3_Text_ObtainedBattlePoints, MSGBOX_GETPOINTS
	special GiveFrontierBattlePoints
	msgbox BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge, MSGBOX_DEFAULT
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
	release
	end

BattleFrontier_Lounge3_EventScript_LostChallenge::
	msgbox BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints, MSGBOX_DEFAULT
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
	release
	end

BattleFrontier_Lounge3_EventScript_RewardBet5::
	buffernumberstring STR_VAR_1, (BET_AMOUNT_5 * 2)
	setvar VAR_0x8004, (BET_AMOUNT_5 * 2)
	return

BattleFrontier_Lounge3_EventScript_RewardBet10::
	buffernumberstring STR_VAR_1, (BET_AMOUNT_10 * 2)
	setvar VAR_0x8004, (BET_AMOUNT_10 * 2)
	return

BattleFrontier_Lounge3_EventScript_RewardBet15::
	buffernumberstring STR_VAR_1, (BET_AMOUNT_15 * 2)
	setvar VAR_0x8004, (BET_AMOUNT_15 * 2)
	return

BattleFrontier_Lounge3_EventScript_ChallengeNotAttempted::
	special ShowFrontierGamblerGoMessage
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge3_EventScript_DeclineChallenge::
	msgbox BattleFrontier_Lounge3_Text_NotInterested, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge3_EventScript_CancelBet::
	special CloseBattlePointsWindow
	goto BattleFrontier_Lounge3_EventScript_DeclineChallenge
	end

BattleFrontier_Lounge3_EventScript_Man::
	msgbox BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges, MSGBOX_NPC
	end

BattleFrontier_Lounge3_EventScript_Woman::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge3_Text_BackedWrongTrainer, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
	end

BattleFrontier_Lounge3_EventScript_PokefanF::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
	end

BattleFrontier_Lounge3_EventScript_FatMan::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge3_Text_TrainerGoodButRattled, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
	end

BattleFrontier_Lounge3_EventScript_FaceOriginalDirection::
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere::
	.string "Was willst du von uns?!?\p"
	.string "Siehst du nicht, dass wir beschäftigt\n"
	.string "sind? Hat das nicht Zeit bis später?$"

BattleFrontier_Lounge3_Text_YouLookToughExplainGambling::
	.string "Oh…\n"
	.string "Du siehst wie ein starker TRAINER aus.\p"
	.string "Hähähä… Pass auf, ich\n"
	.string "mach dir folgenden Vorschlag:\p"
	.string "Wir haben hier eine Gruppe gebildet\n"
	.string "und wir nutzen bei unserem Spiel aus,\l"
	.string "was hier in der KAMPFZONE so\p"
	.string "passiert. Die Regeln sind ganz einfach.\p"
	.string "Als Erstes suchen wir uns hier eine\n"
	.string "Kampfstätte aus.\p"
	.string "Dann bestimmen wir einen TRAINER,\n"
	.string "der die Herausforderung dieser\l"
	.string "Einrichtung annimmt und wetten um\p"
	.string "unsere Gewinnpunkte. Derjenige, der\n"
	.string "auf den besten TRAINER gesetzt hat,\l"
	.string "gewinnt die Gewinnpunkte.\p"
	.string "Hört sich einfach an, nicht wahr?\n"
	.string "Nun, kommen wir zum Punkt…$"

BattleFrontier_Lounge3_Text_ChallengeBattleTowerSingle::
	.string "Ich suche einen TRAINER, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "EINZELKÄMPFE im DUELLTURM\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein TRAINER\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattleTowerDouble::
	.string "Ich suche einen TRAINER, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "DOPPELKÄMPFE im DUELLTURM\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein TRAINER\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattleTowerMulti::
	.string "Ich suche einen TRAINER, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "MULTIKÄMPFE im DUELLTURM\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein TRAINER\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattleDomeSingle::
	.string "Ich suche einen TRAINER, der bereit\n"
	.string "ist, sich der Herausforderung eines\p"
	.string "EINZELKAMPF-Turniers des\n"
	.string "KAMPFSTADIONs zu stellen.\p"
	.string "Aber bisher ist mir noch kein TRAINER\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattleDomeDouble::
	.string "Ich suche einen TRAINER, der bereit\n"
	.string "ist, sich der Herausforderung eines\p"
	.string "DOPPELKAMPF-Turniers des\n"
	.string "KAMPFSTADIONs zu stellen.\p"
	.string "Aber bisher ist mir noch kein TRAINER\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattleFactorySingle::
	.string "Ich suche einen TRAINER, der bereit\n"
	.string "ist, sich der Herausforderung des\p"
	.string "Einzel-Wechselkampf-Turniers der\n"
	.string "KAMPFFABRIK zu stellen.\p"
	.string "Aber bisher ist mir noch kein TRAINER\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattleFactoryDouble::
	.string "Ich suche einen TRAINER, der bereit\n"
	.string "ist, sich der Herausforderung des\p"
	.string "Doppel-Wechselkampf-Turniers der\n"
	.string "KAMPFFABRIK zu stellen.\p"
	.string "Aber bisher ist mir noch kein TRAINER\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePalaceSingle::
	.string "Ich suche einen TRAINER, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "EINZELKAMPF-Hallen des KAMPFPALASTes\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein TRAINER\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePalaceDouble::
	.string "Ich suche einen TRAINER, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "DOPPELKAMPF-Hallen des KAMPFPALASTes\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein TRAINER\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattleArena::
	.string "Ich suche einen TRAINER, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "K.O.-Teamturniere des KAMPFRINGs\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein TRAINER\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePike::
	.string "Ich suche einen TRAINER, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "Kampfbahn der KAMPFIPITIS\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein TRAINER\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePyramid::
	.string "Ich suche einen TRAINER, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "Kampfforschung der KAMPFPYRAMIDE\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein TRAINER\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"

BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe::
	.string "Ich achte darauf, dass auch du einen\n"
	.string "Vorteil daraus ziehen kannst. Also, wie\l"
	.string "sieht es aus? Kämpfst du für mich?$"

BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints::
	.string "Sehr schön! Perfekt!\n"
	.string "Äh… Wie wäre es, wenn du mir einige\l"
	.string "deiner Gewinnpunkte als Einsatz gibst?\p"
	.string "Vertrau mir! Es soll dein Schaden\n"
	.string "nicht sein!$"

BattleFrontier_Lounge3_Text_HowMuchCanYouSpot::
	.string "Sehr gut! Sehr gut!\n"
	.string "Und wie hoch ist dein Einsatz?$"

BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints::
	.string "Oh, nein, nein, nein!\n"
	.string "Du hast nicht genug Gewinnpunkte!\p"
	.string "Ich wünschte, du würdest hier nicht\n"
	.string "den Affen machen und die Zeit anderer\l"
	.string "Leute vergeuden!$"

BattleFrontier_Lounge3_Text_ThanksOffYouGo::
	.string "Hähähä! Vielen Dank!\n"
	.string "Und los geht’s!$"

BattleFrontier_Lounge3_Text_GetToBattleTowerSingle::
	.string "Beeil dich! Stell dich in den\n"
	.string "EINZELKÄMPFEN des DUELLTURMs!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleTowerDouble::
	.string "Beeil dich! Geh in die Räume für die\n"
	.string "DOPPELKÄMPFE des DUELLTURMs!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleTowerMulti::
	.string "Beeil dich! Geh in die MULTIKAMPF-\n"
	.string "Räume des DUELLTURMs!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleDomeSingle::
	.string "Beeil dich! Geh zum EINZELKAMPF-\n"
	.string "Turnier des KAMPFSTADIONs!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleDomeDouble::
	.string "Beeil dich! Geh zum DOPPELKAMPF-\n"
	.string "Turnier des KAMPFSTADIONs!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleFactorySingle::
	.string "Beeil dich! Geh zum Einzel-Wechsel-\n"
	.string "kampf-Turnier der KAMPFFABRIK!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleFactoryDouble::
	.string "Beeil dich! Geh zum Doppel-Wechsel-\n"
	.string "kampf-Turnier der KAMPFFABRIK!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattlePalaceSingle::
	.string "Beeil dich! Geh zu den EINZELKAMPF-\n"
	.string "Hallen des KAMPFPALASTes!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattlePalaceDouble::
	.string "Beeil dich! Geh zu den DOPPELKAMPF-\n"
	.string "Hallen des KAMPFPALASTes!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattleArena::
	.string "Beeil dich! Geh zum K.O.-Teamturnier\n"
	.string "des KAMPFRINGs!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattlePike::
	.string "Beeil dich! Geh zur Kampfbahn\n"
	.string "der KAMPFIPITIS!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_GetToBattlePyramid::
	.string "Beeil dich! Geh zur Kampfforschung\n"
	.string "der KAMPFPYRAMIDE!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"

BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints::
	.string "Oh, du bist es…\n"
	.string "Netter Versuch…\p"
	.string "Ich enttäusch dich nur ungern, aber\n"
	.string "ich kann dir deine Gewinnpunkte nicht\l"
	.string "zurückgeben…\p"
	.string "Ich denke, wir sollten dies als Ansporn\n"
	.string "nehmen, uns in Zukunft mehr\l"
	.string "anzustrengen.$"

BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints::
	.string "Oh, ja!\n"
	.string "Da kommt der Champ!\p"
	.string "Ich wusste, du würdest es schaffen!\n"
	.string "Ich wusste es!\l"
	.string "Wir beide sind Gewinnertypen!\p"
	.string "Hier sind deine Gewinnpunkte - und\n"
	.string "ein kleiner Gewinn für mich!$"

BattleFrontier_Lounge3_Text_ObtainedBattlePoints::
	.string "{PLAYER} erhält {STR_VAR_1} Gewinnpunkt(e).$"

BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge::
	.string "Wenn es dich wieder nach einer Heraus-\n"
	.string "forderung dürstet, denk an mich!$"

BattleFrontier_Lounge3_Text_NotInterested::
	.string "Kein Interesse? Ich hätte nicht\n"
	.string "gedacht, dass du so ein Angsthase bist.$"

BattleFrontier_Lounge3_Text_Oh::
	.string "Oh…$"

BattleFrontier_Lounge3_Text_BackedWrongTrainer::
	.string "Ich habe schon wieder den falschen\n"
	.string "TRAINER unterstützt!\p"
	.string "Vielleicht sollte ich es mal mit Kämpfen\n"
	.string "versuchen, so wie jeder andere auch?$"

BattleFrontier_Lounge3_Text_TrainerGoodButRattled::
	.string "Dieser TRAINER…\p"
	.string "Er ist gut, aber er verliert in Kämpfen\n"
	.string "schnell die Fassung und verliert dann\l"
	.string "im KAMPFSTADION…$"

BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne::
	.string "Kicher, kicher! Ich erkenne\n"
	.string "einen Sieger, wenn ich ihn sehe!$"

BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges::
	.string "Diese TRAINER…\n"
	.string "Was machen die da? Sie sollten\l"
	.string "sich lieber Herausforderungen stellen!$"
