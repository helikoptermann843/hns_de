BattleFrontier_ReceptionGate_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_ReceptionGate_OnFrame_hns
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_ReceptionGate_OnTransition_hns
	.byte 0

BattleFrontier_ReceptionGate_OnTransition_hns:
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
	end

BattleFrontier_ReceptionGate_OnFrame_hns:
	map_script_2 VAR_HAS_ENTERED_BATTLE_FRONTIER, 0, BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering_hns
	.2byte 0

BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering_hns::
	lockall
	setvar VAR_HAS_ENTERED_BATTLE_FRONTIER, 1
	playse SE_PIN
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_Delay48
	waitmovement 0
	msgbox BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter_hns
	waitmovement 0
	goto BattleFrontier_ReceptionGate_EventScript_ScottScene_hns
	end

BattleFrontier_ReceptionGate_EventScript_ScottScene_hns::
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier_hns, MSGBOX_DEFAULT
	msgbox BattleFrontier_ReceptionGate_Text_IssueFrontierPass_hns, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass_hns
	waitfanfare
	waitmessage
	msgbox BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass_hns, MSGBOX_DEFAULT
	setflag FLAG_SYS_FRONTIER_PASS
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier_hns, MSGBOX_DEFAULT
	msgbox BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, Common_Movement_ExclamationMark
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, BattleFrontier_ReceptionGate_Movement_GreeterFaceScott_hns
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott_hns
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerFaceScott_hns
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottEnter_hns
	waitmovement 0
	msgbox BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottExit_hns
	waitmovement 0
	removeobject LOCALID_FRONTIER_RECEPTION_SCOTT
	releaseall
	end

BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter_hns:
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

BattleFrontier_ReceptionGate_Movement_PlayerFaceScott_hns:
	delay_16
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_right
	step_end

@ Unused
BattleFrontier_ReceptionGate_Movement_WalkDown_hns:
	walk_down
	walk_down
	step_end

BattleFrontier_ReceptionGate_Movement_ScottEnter_hns:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	step_end

BattleFrontier_ReceptionGate_Movement_ScottExit_hns:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BattleFrontier_ReceptionGate_Movement_GreeterFaceScott_hns:
	delay_16
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_right
	step_end

BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott_hns:
	delay_16
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

BattleFrontier_ReceptionGate_EventScript_Greeter_hns::
	lock
	faceplayer
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier_hns, MSGBOX_DEFAULT
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ReceptionGate_EventScript_FacilityGuide_hns::
	lock
	faceplayer
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFacilities_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_hns::
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich2_hns
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_BF_RECEPTIONIST
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, BattleFrontier_ReceptionGate_EventScript_BattleTower_hns
	case 1, BattleFrontier_ReceptionGate_EventScript_BattleDome_hns
	case 2, BattleFrontier_ReceptionGate_EventScript_BattlePalace_hns
	case 3, BattleFrontier_ReceptionGate_EventScript_BattleArena_hns
	case 4, BattleFrontier_ReceptionGate_EventScript_BattleFactory_hns
	case 5, BattleFrontier_ReceptionGate_EventScript_BattlePike_hns
	case 6, BattleFrontier_ReceptionGate_EventScript_BattlePyramid_hns
	case 7, BattleFrontier_ReceptionGate_EventScript_RankingHall_hns
	case 8, BattleFrontier_ReceptionGate_EventScript_ExchangeCorner_hns
	case 9, BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide_hns
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide_hns
	end

BattleFrontier_ReceptionGate_EventScript_BattleTower_hns::
	msgbox BattleFrontier_ReceptionGate_Text_BattleTowerInfo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_BattleDome_hns::
	msgbox BattleFrontier_ReceptionGate_Text_BattleDomeInfo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_BattlePalace_hns::
	msgbox BattleFrontier_ReceptionGate_Text_BattlePalaceInfo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_BattleArena_hns::
	msgbox BattleFrontier_ReceptionGate_Text_BattleArenaInfo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_BattleFactory_hns::
	msgbox BattleFrontier_ReceptionGate_Text_BattleFactoryInfo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_BattlePike_hns::
	msgbox BattleFrontier_ReceptionGate_Text_BattlePikeInfo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_BattlePyramid_hns::
	msgbox BattleFrontier_ReceptionGate_Text_BattlePyramidInfo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_RankingHall_hns::
	msgbox BattleFrontier_ReceptionGate_Text_RankingHallInfo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_ExchangeCorner_hns::
	msgbox BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide_hns::
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ReceptionGate_EventScript_RulesGuide_hns::
	lock
	faceplayer
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToRules_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_hns::
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhat_hns
	waitmessage
	multichoice 15, 0, MULTI_FRONTIER_RULES, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_ReceptionGate_EventScript_LevelMode_hns
	case 1, BattleFrontier_ReceptionGate_EventScript_Level50_hns
	case 2, BattleFrontier_ReceptionGate_EventScript_OpenLevel_hns
	case 3, BattleFrontier_ReceptionGate_EventScript_MonEntry_hns
	case 4, BattleFrontier_ReceptionGate_EventScript_HoldItems_hns
	case 5, BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide_hns
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide_hns
	end

BattleFrontier_ReceptionGate_EventScript_LevelMode_hns::
	msgbox BattleFrontier_ReceptionGate_Text_LevelModeInfo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_Level50_hns::
	msgbox BattleFrontier_ReceptionGate_Text_Level50Info_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_OpenLevel_hns::
	msgbox BattleFrontier_ReceptionGate_Text_OpenLevelInfo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_MonEntry_hns::
	msgbox BattleFrontier_ReceptionGate_Text_MonEntryInfo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_HoldItems_hns::
	msgbox BattleFrontier_ReceptionGate_Text_HoldItemsInfo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide_hns::
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ReceptionGate_EventScript_FrontierPassGuide_hns::
	lock
	faceplayer
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_hns::
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich1_hns
	waitmessage
	multichoice 16, 4, MULTI_FRONTIER_PASS_INFO, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_ReceptionGate_EventScript_Symbols_hns
	case 1, BattleFrontier_ReceptionGate_EventScript_RecordBattle_hns
	case 2, BattleFrontier_ReceptionGate_EventScript_BattlePoints_hns
	case 3, BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide_hns
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide_hns
	end

BattleFrontier_ReceptionGate_EventScript_Symbols_hns::
	msgbox BattleFrontier_ReceptionGate_Text_SymbolsInfo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_RecordBattle_hns::
	msgbox BattleFrontier_ReceptionGate_Text_RecordedBattleInfo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_BattlePoints_hns::
	msgbox BattleFrontier_ReceptionGate_Text_BattlePointsInfo_hns, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_hns
	end

BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide_hns::
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay_hns:
	.string "Bist du zum ersten Mal hier?\n"
	.string "Komm bitte hier entlang.$"

BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier_hns:
	.string "Der ultimative Ort für ultimative\n"
	.string "Kämpfe! Willkommen in der\l"
	.string "KAMPFZONE!$"

BattleFrontier_ReceptionGate_Text_IssueFrontierPass_hns:
	.string "Jeder, der zum ersten Mal hier ist,\n"
	.string "bekommt einen KAMPFZONENPASS von uns.\n"
	.string "\p"
	.string "Damit kannst du alle Einrichtungen der\n"
	.string "KAMPFZONE besuchen.\p"
	.string "Hier, bitte schön!$"

BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass_hns:
	.string "{PLAYER} erhält den KAMPFZONENPASS.$"

BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass_hns:
	.string "{PLAYER} steckt den TRAINERPASS\n"
	.string "zum KAMPFZONENPASS.$"

BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier_hns:
	.string "Wir hoffen, dir gefällt, was die\n"
	.string "KAMPF- ZONE zu bieten hat.$"

BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame_hns:
	.string "???: Oh, wenn das nicht {PLAYER}{KUN}\n"
	.string "ist!\l"
	.string "Du bist also doch gekommen! Schön!$"

BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay_hns:
	.string "TUTOR: Oh! Herr SCOTT!\n"
	.string "Einen schönen guten Tag, der Herr!$"

BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere_hns:
	.string "SCOTT: Es ist großartig, dich hier\n"
	.string "zu sehen!\p"
	.string "Ich hoffe, du hast ein bisschen Zeit\n"
	.string "mitgebracht, um dir hier alles\l"
	.string "anzusehen?!?\p"
	.string "Und natürlich hoffe ich auch, dass\n"
	.string "du die Reinheit unserer Kämpfe hier\l"
	.string "genießen wirst!\p"
	.string "Ich wohne hier auf dem Gelände,\n"
	.string "also komm mich doch mal besuchen!$"

BattleFrontier_ReceptionGate_Text_YourGuideToFacilities_hns:
	.string "Ich begleite dich durch die\n"
	.string "Einrichtungen der KAMPFZONE.$"

BattleFrontier_ReceptionGate_Text_LearnAboutWhich2_hns:
	.string "Was möchtest du gerne wissen?$"

BattleFrontier_ReceptionGate_Text_BattleTowerInfo_hns:
	.string "Der riesige Turm ist das Symbol der\n"
	.string "KAMPFZONE.\p"
	.string "Es gibt vier verschiedene Arten von\n"
	.string "KAMPFRÄUMEN - für EINZEL-, DOPPEL-,\l"
	.string "MULTI- und LINK-MULTIKÄMPFE.$"

BattleFrontier_ReceptionGate_Text_BattleDomeInfo_hns:
	.string "Das KAMPFSTADION hat die Form eines\n"
	.string "gewaltigen Eis.\p"
	.string "Hier werden so genannte Kampfturniere\n"
	.string "abgehalten.\p"
	.string "Diese können in EINZEL- oder DOPPEL-\n"
	.string "KÄMPFEN ausgefochten werden.$"

BattleFrontier_ReceptionGate_Text_BattlePalaceInfo_hns:
	.string "Der KAMPFPALAST ist das rote Gebäude,\n"
	.string "ganz rechts in der KAMPFZONE.\p"
	.string "Hier gibt es zwei KAMPFHALLEn: Eine\n"
	.string "für EINZEL- und eine für DOPPELKÄMPFE.$"

BattleFrontier_ReceptionGate_Text_BattleArenaInfo_hns:
	.string "Das einem Dojo nachempfundene Gebäude\n"
	.string "ist der KAMPFRING, er ist in der\l"
	.string "Mitte rechts zu finden.\p"
	.string "Hier findet das K.O.-Teamturnier\n"
	.string "statt.$"

BattleFrontier_ReceptionGate_Text_BattleFactoryInfo_hns:
	.string "Uns am nächsten ist das große Gebäude\n"
	.string "der KAMPFFABRIK.\p"
	.string "Hier findet der so genannte Wechsel-\n"
	.string "kampf statt.\p"
	.string "Auch hier kannst du in EINZEL- oder\n"
	.string "DOPPELKÄMPFEN antreten.$"

BattleFrontier_ReceptionGate_Text_BattlePikeInfo_hns:
	.string "Das Gebäude, das wie ein POKéMON\n"
	.string "aussieht, ist die KAMPFIPITIS - in der\l"
	.string "Mitte links.\p"
	.string "Hier findet man die Kampfbahnen.$"

BattleFrontier_ReceptionGate_Text_BattlePyramidInfo_hns:
	.string "Die KAMPFPYRAMIDE ist eine riesen-\n"
	.string "große Pyramide.\p"
	.string "Hier finden die so genannten Kampf-\n"
	.string "forschungen statt.$"

BattleFrontier_ReceptionGate_Text_RankingHallInfo_hns:
	.string "Die ERGEBNISHALLE befindet sich in der\n"
	.string "Nähe des DUELLTURMs.\p"
	.string "Hier kannst du dir die Rekorde\n"
	.string "der TRAINER anschauen, die sich den\l"
	.string "Herausforderungen der KAMPFZONE\l"
	.string "gestellt haben.$"

BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo_hns:
	.string "Die TAUSCHECKE befindet\n"
	.string "sich in der Nähe des DUELLTURMs.\p"
	.string "Hier kannst du Gewinnpunkte, die du in\n"
	.string "der KAMPFZONE erhalten hast,\l"
	.string "gegen tolle Preise eintauschen.$"

BattleFrontier_ReceptionGate_Text_YourGuideToRules_hns:
	.string "Ich erkläre dir die Basisregeln, die\n"
	.string "für\n"
	.string "alle Herausforderungen der KAMPFZONE\l"
	.string "gelten.$"

BattleFrontier_ReceptionGate_Text_LearnAboutWhat_hns:
	.string "Was möchtest du gerne wissen?$"

BattleFrontier_ReceptionGate_Text_LevelModeInfo_hns:
	.string "Alle Herausforderungen der KAMPFZONE\n"
	.string "haben zwei Kategorien:\l"
	.string "Level 50 und Offene Kämpfe.$"

BattleFrontier_ReceptionGate_Text_Level50Info_hns:
	.string "Die Level 50-Herausforderungen sind\n"
	.string "offen für POKéMON bis einschließlich\l"
	.string "Level 50.\p"
	.string "Beachte aber, dass kein TRAINER, gegen\n"
	.string "den du antrittst, POKéMON besitzt, die\l"
	.string "unter Level 50 sind!\p"
	.string "Diese Kategorie ist die Eingangsstufe\n"
	.string "für die Kämpfe in der KAMPFZONE.\p"
	.string "Wir hoffen, dass du dich am Anfang\n"
	.string "für diese Stufe entscheiden wirst.$"

BattleFrontier_ReceptionGate_Text_OpenLevelInfo_hns:
	.string "In den Offenen Kämpfen gibt es kein\n"
	.string "Limit für die Level der POKéMON.\p"
	.string "Der Level deiner Gegner wird dem\n"
	.string "Level deiner POKéMON angepasst.\p"
	.string "Trotzdem wird kein TRAINER, gegen den\n"
	.string "du antrittst, ein POKéMON haben, das\l"
	.string "unter Level 60 ist.$"

BattleFrontier_ReceptionGate_Text_MonEntryInfo_hns:
	.string "Praktisch gesehen, kann jede Art von\n"
	.string "POKéMON an jeder Herausforderung\l"
	.string "teilnehmen.\p"
	.string "EIer und bestimmte Arten von POKéMON\n"
	.string "sind dennoch nicht zugelassen.\p"
	.string "Die Anzahl der POKéMON, die du mit in\n"
	.string "den\n"
	.string "Kampf nehmen kannst, variiert von\l"
	.string "Einrichtung zu Einrichtung.\p"
	.string "In allen Einrichtungen gilt aber: Zwei\n"
	.string "oder mehr PKMN der gleichen Art dürfen\l"
	.string "nicht in einen Kampf gebracht werden.$"

BattleFrontier_ReceptionGate_Text_HoldItemsInfo_hns:
	.string "Nimmst du eine Herausforderung der\n"
	.string "KAMPFZONE an, musst du\p"
	.string "darauf achten, dass deine POKéMON\n"
	.string "unterschiedliche Items halten.$"

BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass_hns:
	.string "Ich erkläre dir den KAMPFZONENPASS.$"

BattleFrontier_ReceptionGate_Text_LearnAboutWhich1_hns:
	.string "Was möchtest du wissen?$"

BattleFrontier_ReceptionGate_Text_SymbolsInfo_hns:
	.string "Es gibt sieben Einrichtungen hier in\n"
	.string "der KAMPFZONE.\p"
	.string "TRAINER, die sich durch hervorragendes\n"
	.string "Talent auszeichnen, können als\l"
	.string "Anerkennung SYMBOLE erlangen.\p"
	.string "Um diese Medaillen zu erhalten, müssen\n"
	.string "mehrere TRAINER in Folge besiegt\l"
	.string "werden und manchmal auch bestimmte\p"
	.string "Herausforderungen mehrmals bestritten\n"
	.string "werden. Es ist sicherlich nicht\n"
	.string "einfach,\l"
	.string "hier zu gewinnen. Daher: Viel Glück!$"

BattleFrontier_ReceptionGate_Text_RecordedBattleInfo_hns:
	.string "Du hast die Möglichkeit, einen Kampf\n"
	.string "in\n"
	.string "deinen KAMPFZONENPASS aufnehmen zu\l"
	.string "lassen.\p"
	.string "Vielleicht möchtest du einen Kampf,\n"
	.string "den\n"
	.string "du gegen oder mit Freunden geführt\l"
	.string "hast, dort eintragen lassen.\p"
	.string "Oder du lässt Kämpfe in der KAMPFZONE\n"
	.string "eintragen. Kämpfe der\l"
	.string "KAMPFIPITIS und der KAMPFPYRAMIDE\l"
	.string "werden nicht eingetragen.\p"
	.string "Am Ende eines Kampfes kannst du dich\n"
	.string "entscheiden, ob du ihn eintragen\n"
	.string "lassen\l"
	.string "möchtest oder nicht.$"

BattleFrontier_ReceptionGate_Text_BattlePointsInfo_hns:
	.string "TRAINER, die herausragend in der\n"
	.string "KAMPFZONE gekämpft haben,\l"
	.string "erhalten so genannte Gewinnpunkte.\p"
	.string "Diese kannst du nach Belieben in der\n"
	.string "TAUSCHECKE gegen Preise eintauschen.$"

