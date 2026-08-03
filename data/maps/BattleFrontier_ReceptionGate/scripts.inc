BattleFrontier_ReceptionGate_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_ReceptionGate_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_ReceptionGate_OnTransition
	.byte 0

BattleFrontier_ReceptionGate_OnTransition:
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
	end

BattleFrontier_ReceptionGate_OnFrame:
	map_script_2 VAR_HAS_ENTERED_BATTLE_FRONTIER, 0, BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering
	.2byte 0

BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering::
	lockall
	setvar VAR_HAS_ENTERED_BATTLE_FRONTIER, 1
	playse SE_PIN
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_Delay48
	waitmovement 0
	msgbox BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter
	waitmovement 0
	goto BattleFrontier_ReceptionGate_EventScript_ScottScene
	end

BattleFrontier_ReceptionGate_EventScript_ScottScene::
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
	msgbox BattleFrontier_ReceptionGate_Text_IssueFrontierPass, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass
	waitfanfare
	waitmessage
	msgbox BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass, MSGBOX_DEFAULT
	setflag FLAG_SYS_FRONTIER_PASS
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
	msgbox BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame, MSGBOX_DEFAULT
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
	msgbox BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, BattleFrontier_ReceptionGate_Movement_GreeterFaceScott
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerFaceScott
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottEnter
	waitmovement 0
	msgbox BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottExit
	waitmovement 0
	removeobject LOCALID_FRONTIER_RECEPTION_SCOTT
	releaseall
	end

BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter:
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

BattleFrontier_ReceptionGate_Movement_PlayerFaceScott:
	delay_16
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_right
	step_end

@ Unused
BattleFrontier_ReceptionGate_Movement_WalkDown:
	walk_down
	walk_down
	step_end

BattleFrontier_ReceptionGate_Movement_ScottEnter:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	step_end

BattleFrontier_ReceptionGate_Movement_ScottExit:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BattleFrontier_ReceptionGate_Movement_GreeterFaceScott:
	delay_16
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_right
	step_end

BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott:
	delay_16
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

BattleFrontier_ReceptionGate_EventScript_Greeter::
	lock
	faceplayer
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ReceptionGate_EventScript_FacilityGuide::
	lock
	faceplayer
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFacilities, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout::
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich2
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_BF_RECEPTIONIST
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, BattleFrontier_ReceptionGate_EventScript_BattleTower
	case 1, BattleFrontier_ReceptionGate_EventScript_BattleDome
	case 2, BattleFrontier_ReceptionGate_EventScript_BattlePalace
	case 3, BattleFrontier_ReceptionGate_EventScript_BattleArena
	case 4, BattleFrontier_ReceptionGate_EventScript_BattleFactory
	case 5, BattleFrontier_ReceptionGate_EventScript_BattlePike
	case 6, BattleFrontier_ReceptionGate_EventScript_BattlePyramid
	case 7, BattleFrontier_ReceptionGate_EventScript_RankingHall
	case 8, BattleFrontier_ReceptionGate_EventScript_ExchangeCorner
	case 9, BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide
	end

BattleFrontier_ReceptionGate_EventScript_BattleTower::
	msgbox BattleFrontier_ReceptionGate_Text_BattleTowerInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_BattleDome::
	msgbox BattleFrontier_ReceptionGate_Text_BattleDomeInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_BattlePalace::
	msgbox BattleFrontier_ReceptionGate_Text_BattlePalaceInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_BattleArena::
	msgbox BattleFrontier_ReceptionGate_Text_BattleArenaInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_BattleFactory::
	msgbox BattleFrontier_ReceptionGate_Text_BattleFactoryInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_BattlePike::
	msgbox BattleFrontier_ReceptionGate_Text_BattlePikeInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_BattlePyramid::
	msgbox BattleFrontier_ReceptionGate_Text_BattlePyramidInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_RankingHall::
	msgbox BattleFrontier_ReceptionGate_Text_RankingHallInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ExchangeCorner::
	msgbox BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide::
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ReceptionGate_EventScript_RulesGuide::
	lock
	faceplayer
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToRules, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout::
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhat
	waitmessage
	multichoice 15, 0, MULTI_FRONTIER_RULES, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_ReceptionGate_EventScript_LevelMode
	case 1, BattleFrontier_ReceptionGate_EventScript_Level50
	case 2, BattleFrontier_ReceptionGate_EventScript_OpenLevel
	case 3, BattleFrontier_ReceptionGate_EventScript_MonEntry
	case 4, BattleFrontier_ReceptionGate_EventScript_HoldItems
	case 5, BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide
	end

BattleFrontier_ReceptionGate_EventScript_LevelMode::
	msgbox BattleFrontier_ReceptionGate_Text_LevelModeInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_Level50::
	msgbox BattleFrontier_ReceptionGate_Text_Level50Info, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_OpenLevel::
	msgbox BattleFrontier_ReceptionGate_Text_OpenLevelInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_MonEntry::
	msgbox BattleFrontier_ReceptionGate_Text_MonEntryInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_HoldItems::
	msgbox BattleFrontier_ReceptionGate_Text_HoldItemsInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide::
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ReceptionGate_EventScript_FrontierPassGuide::
	lock
	faceplayer
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout::
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich1
	waitmessage
	multichoice 16, 4, MULTI_FRONTIER_PASS_INFO, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_ReceptionGate_EventScript_Symbols
	case 1, BattleFrontier_ReceptionGate_EventScript_RecordBattle
	case 2, BattleFrontier_ReceptionGate_EventScript_BattlePoints
	case 3, BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide
	end

BattleFrontier_ReceptionGate_EventScript_Symbols::
	msgbox BattleFrontier_ReceptionGate_Text_SymbolsInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_RecordBattle::
	msgbox BattleFrontier_ReceptionGate_Text_RecordedBattleInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_BattlePoints::
	msgbox BattleFrontier_ReceptionGate_Text_BattlePointsInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide::
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay:
	.string "Bist du zum ersten Mal hier?\n"
	.string "Komm bitte hier entlang.$"

BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier:
	.string "Der ultimative Ort für ultimative\n"
	.string "Kämpfe! Willkommen in der\l"
	.string "Kampfzone!$"

BattleFrontier_ReceptionGate_Text_IssueFrontierPass:
	.string "Jeder, der zum ersten Mal hier ist,\n"
	.string "bekommt einen Kampfzonenpass von uns.\n"
	.string "\p"
	.string "Damit kannst du alle Einrichtungen der\n"
	.string "Kampfzone besuchen.\p"
	.string "Hier, bitte schön!$"

BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass:
	.string "{PLAYER} erhält den Kampfzonenpass.$"

BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass:
	.string "{PLAYER} steckt den Trainerpass\n"
	.string "zum Kampfzonenpass.$"

BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier:
	.string "Wir hoffen, dir gefällt, was die Kampf-\n"
	.string "Zone zu bieten hat.$"

BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame:
	.string "???: Oh, wenn das nicht {PLAYER}{KUN}\n"
	.string "ist!\l"
	.string "Du bist also doch gekommen! Schön!$"

BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay:
	.string "Tutor: Oh! Herr Scott!\n"
	.string "Einen schönen guten Tag, der Herr!$"

BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere:
	.string "Scott: Es ist großartig, dich hier\n"
	.string "zu sehen!\p"
	.string "Ich hoffe, du hast ein bisschen Zeit\n"
	.string "mitgebracht, um dir hier alles\l"
	.string "anzusehen?!?\p"
	.string "Und natürlich hoffe ich auch, dass\n"
	.string "du die Reinheit unserer Kämpfe hier\l"
	.string "genießen wirst!\p"
	.string "Ich wohne hier auf dem Gelände,\n"
	.string "also komm mich doch mal besuchen!$"

BattleFrontier_ReceptionGate_Text_YourGuideToFacilities:
	.string "Ich begleite dich durch die\n"
	.string "Einrichtungen der Kampfzone.$"

BattleFrontier_ReceptionGate_Text_LearnAboutWhich2:
	.string "Was möchtest du gerne wissen?$"

BattleFrontier_ReceptionGate_Text_BattleTowerInfo:
	.string "Der riesige Turm ist das Symbol der\n"
	.string "Kampfzone.\p"
	.string "Es gibt vier verschiedene Arten von\n"
	.string "Kampfräumen - für Einzel-, Doppel-,\l"
	.string "Multi- und Link-Multikämpfe.$"

BattleFrontier_ReceptionGate_Text_BattleDomeInfo:
	.string "Das Kampfstadion hat die Form eines\n"
	.string "gewaltigen Eis.\p"
	.string "Hier werden so genannte Kampfturniere\n"
	.string "abgehalten.\p"
	.string "Diese können in Einzel- oder Doppel-\n"
	.string "kämpfen ausgefochten werden.$"

BattleFrontier_ReceptionGate_Text_BattlePalaceInfo:
	.string "Der Kampfpalast ist das rote Gebäude,\n"
	.string "ganz rechts in der Kampfzone.\p"
	.string "Hier gibt es zwei Kampfhallen: Eine\n"
	.string "für Einzel- und eine für Doppelkämpfe.$"

BattleFrontier_ReceptionGate_Text_BattleArenaInfo:
	.string "Das einem Dojo nachempfundene Gebäude\n"
	.string "ist der Kampfring, er ist in der\l"
	.string "Mitte rechts zu finden.\p"
	.string "Hier findet das K.O.-Teamturnier\n"
	.string "statt.$"

BattleFrontier_ReceptionGate_Text_BattleFactoryInfo:
	.string "Uns am nächsten ist das große Gebäude\n"
	.string "der Kampffabrik.\p"
	.string "Hier findet der so genannte Wechsel-\n"
	.string "kampf statt.\p"
	.string "Auch hier kannst du in Einzel- oder\n"
	.string "Doppelkämpfen antreten.$"

BattleFrontier_ReceptionGate_Text_BattlePikeInfo:
	.string "Das Gebäude, das wie ein Pokémon\n"
	.string "aussieht, ist die Kampfipitis - in der\l"
	.string "Mitte links.\p"
	.string "Hier findet man die Kampfbahnen.$"

BattleFrontier_ReceptionGate_Text_BattlePyramidInfo:
	.string "Die Kampfpyramide ist eine riesen-\n"
	.string "große Pyramide.\p"
	.string "Hier finden die so genannten Kampf-\n"
	.string "forschungen statt.$"

BattleFrontier_ReceptionGate_Text_RankingHallInfo:
	.string "Die Ergebnishalle befindet sich in der\n"
	.string "Nähe des Duellturms.\p"
	.string "Hier kannst du dir die Rekorde\n"
	.string "der Trainer anschauen, die sich den\l"
	.string "Herausforderungen der Kampfzone\l"
	.string "gestellt haben.$"

BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo:
	.string "Die Tauschecke befindet\n"
	.string "sich in der Nähe des Duellturms.\p"
	.string "Hier kannst du Gewinnpunkte, die du in\n"
	.string "der Kampfzone erhalten hast,\l"
	.string "gegen tolle Preise eintauschen.$"

BattleFrontier_ReceptionGate_Text_YourGuideToRules:
	.string "Ich erkläre dir die Basisregeln, die\n"
	.string "für\n"
	.string "alle Herausforderungen der Kampfzone\l"
	.string "gelten.$"

BattleFrontier_ReceptionGate_Text_LearnAboutWhat:
	.string "Was möchtest du gerne wissen?$"

BattleFrontier_ReceptionGate_Text_LevelModeInfo:
	.string "Alle Herausforderungen der Kampfzone\n"
	.string "haben zwei Kategorien:\l"
	.string "Level 50 und Offene Kämpfe.$"

BattleFrontier_ReceptionGate_Text_Level50Info:
	.string "Die Level 50-Herausforderungen sind\n"
	.string "offen für Pokémon bis einschließlich\l"
	.string "Level 50.\p"
	.string "Beachte aber, dass kein Trainer, gegen\n"
	.string "den du antrittst, Pokémon besitzt, die\l"
	.string "unter Level 50 sind!\p"
	.string "Diese Kategorie ist die Eingangsstufe\n"
	.string "für die Kämpfe in der Kampfzone.\p"
	.string "Wir hoffen, dass du dich am Anfang\n"
	.string "für diese Stufe entscheiden wirst.$"

BattleFrontier_ReceptionGate_Text_OpenLevelInfo:
	.string "In den Offenen Kämpfen gibt es kein\n"
	.string "Limit für die Level der Pokémon.\p"
	.string "Der Level deiner Gegner wird dem\n"
	.string "Level deiner Pokémon angepasst.\p"
	.string "Trotzdem wird kein Trainer, gegen den\n"
	.string "du antrittst, ein Pokémon haben, das\l"
	.string "unter Level 60 ist.$"

BattleFrontier_ReceptionGate_Text_MonEntryInfo:
	.string "Praktisch gesehen, kann jede Art von\n"
	.string "Pokémon an jeder Herausforderung\l"
	.string "teilnehmen.\p"
	.string "Eier und bestimmte Arten von Pokémon\n"
	.string "sind dennoch nicht zugelassen.\p"
	.string "Die Anzahl der Pokémon, die du mit in\n"
	.string "den\n"
	.string "Kampf nehmen kannst, variiert von\l"
	.string "Einrichtung zu Einrichtung.\p"
	.string "In allen Einrichtungen gilt aber: Zwei\n"
	.string "oder mehr Pkmn der gleichen Art dürfen\l"
	.string "nicht in einen Kampf gebracht werden.$"

BattleFrontier_ReceptionGate_Text_HoldItemsInfo:
	.string "Nimmst du eine Herausforderung der\n"
	.string "Kampfzone an, musst du\p"
	.string "darauf achten, dass deine Pokémon\n"
	.string "unterschiedliche Items halten.$"

BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass:
	.string "Ich erkläre dir den Kampfzonenpass.$"

BattleFrontier_ReceptionGate_Text_LearnAboutWhich1:
	.string "Was möchtest du wissen?$"

BattleFrontier_ReceptionGate_Text_SymbolsInfo:
	.string "Es gibt sieben Einrichtungen hier in\n"
	.string "der Kampfzone.\p"
	.string "Trainer, die sich durch hervorragendes\n"
	.string "Talent auszeichnen, können als\l"
	.string "Anerkennung Symbole erlangen.\p"
	.string "Um diese Medaillen zu erhalten, müssen\n"
	.string "mehrere Trainer in Folge besiegt\l"
	.string "werden und manchmal auch bestimmte\p"
	.string "Herausforderungen mehrmals bestritten\n"
	.string "werden. Es ist sicherlich nicht\n"
	.string "einfach,\l"
	.string "hier zu gewinnen. Daher: Viel Glück!$"

BattleFrontier_ReceptionGate_Text_RecordedBattleInfo:
	.string "Du hast die Möglichkeit, einen Kampf\n"
	.string "in\n"
	.string "deinen Kampfzonenpass aufnehmen zu\l"
	.string "lassen.\p"
	.string "Vielleicht möchtest du einen Kampf,\n"
	.string "den\n"
	.string "du gegen oder mit Freunden geführt\l"
	.string "hast, dort eintragen lassen.\p"
	.string "Oder du lässt Kämpfe in der Kampfzone\n"
	.string "eintragen. Kämpfe der\l"
	.string "Kampfipitis und der Kampfpyramide\l"
	.string "werden nicht eingetragen.\p"
	.string "Am Ende eines Kampfes kannst du dich\n"
	.string "entscheiden, ob du ihn eintragen\n"
	.string "lassen\l"
	.string "möchtest oder nicht.$"

BattleFrontier_ReceptionGate_Text_BattlePointsInfo:
	.string "Trainer, die herausragend in der\n"
	.string "Kampfzone gekämpft haben,\l"
	.string "erhalten so genannte Gewinnpunkte.\p"
	.string "Diese kannst du nach Belieben in der\n"
	.string "Tauschecke gegen Preise eintauschen.$"

