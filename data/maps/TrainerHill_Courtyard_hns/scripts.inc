TrainerHill_Courtyard_hns_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Courtyard_OnTransition
	.byte 0

TrainerHill_Courtyard_OnTransition::
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
	end

TrainerHill_Courtyard_EventScript_BattleTowerSign::
	lock
	msgbox BattleTowerOutsideSignText, MSGBOX_SIGN	
	closemessage	
	release
	end

TrainerHill_Courtyard_EventScript_Tent_Factory::
	lock
	msgbox BattleTower_Battle_Tent_Text_Factory, MSGBOX_SIGN	
	closemessage	
	release
	end

TrainerHill_Courtyard_EventScript_Tent_Palace::
	lock
	msgbox BattleTower_Battle_Tent_Text_Palace, MSGBOX_SIGN	
	closemessage	
	release
	end

TrainerHill_Courtyard_EventScript_Tent_Arena::
	lock
	msgbox BattleTower_Battle_Tent_Text_Arena, MSGBOX_SIGN	
	closemessage	
	release
	end
	
TrainerHill_Courtyard_EventScript_Engineer::
	lock
	faceplayer
	msgbox BattleTowerOutsideText_Closed, MSGBOX_DEFAULT
	closemessage
	release
	end

TrainerHill_Courtyard_EventScript_Youngster::
	lock
	faceplayer
	msgbox BattleTowerOutsideYoungsterText, MSGBOX_DEFAULT
	closemessage
	release
	end

TrainerHill_Courtyard_EventScript_Beauty::
	lock
	faceplayer
	msgbox BattleTowerOutsideBeautyText, MSGBOX_DEFAULT
	closemessage
	release
	end

TrainerHill_Courtyard_EventScript_Sailor::
	lock
	faceplayer
	msgbox BattleTowerOutsideSailorText, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTowerOutsideYoungsterText:
	.string "Wow, der TRAINERBERG ist riesig!\p"
	.string "Dort gibt es sicher viele\n"
	.string "verschiedene POKéMON!$"

BattleTowerOutsideBeautyText:
	.string "In den KAMPFZELTEN darfst du\n"
	.string "nur drei POKéMON einsetzen.\p"
	.string "Es ist schwer, die richtigen\n"
	.string "drei auszuwählen…$"

BattleTowerOutsideSailorText:
	.string "Hehe, ich habe mich von der\n"
	.string "Arbeit davongeschlichen.\p"
	.string "Ich gehe nicht zurück, bevor\n"
	.string "ich gewonnen habe!\p"
	.string "Ich muss den Sieg holen!$"

BattleTowerOutsideSignText:
	.string "{UP_ARROW} EINGANG TRAINERBERG\p"
	.string "Erklimmt die Höhen,\n"
	.string "hitzblütige TRAINER!\p"
	.string "{RIGHT_ARROW} KAMPFZELTE.$"

BattleTower_Battle_Tent_Text_Factory:
	.string "KAMPFZELT: FABRIK\n"
	.string "Finde das ultimative POKéMON!$"

BattleTower_Battle_Tent_Text_Palace:
	.string "KAMPFZELT: PALAST\n"
	.string "Erlebe packende Kämpfe!$"

BattleTower_Battle_Tent_Text_Arena:
	.string "KAMPFZELT: ARENA\n"
	.string "Die stärksten Teams treffen sich!$"

BattleTowerOutsideText_Closed:
	.string "Der TRAINERBERG ist derzeit\n"
	.string "wegen Reparaturen geschlossen.$"


TrainerHill_Courtyard_EventScript_LeftMoveTutor::
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor_hns
	end

TrainerHill_Courtyard_EventScript_RightMoveTutor::
	goto BattleFrontier_Lounge7_EventScript_RightMoveTutor_hns
	end

TrainerHill_Courtyard_EventScript_ElementalMoveTutor::
	goto BattleFrontier_Lounge7_EventScript_ElementalMoveTutor
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_DecorClerk1::
	lock
	faceplayer
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special CreateBPDecorShop1
	waitstate
	release
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_DecorClerk2::
	lock
	faceplayer
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special CreateBPDecorShop2
	waitstate
	release
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_VitaminClerk::
	lock
	faceplayer
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special CreateBPVitaminShop
	waitstate
	release
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_HoldItemClerk::
	lock
	faceplayer
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special CreateBPHoldItemShop
	waitstate
	release
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_HoldItemClerk2::
	lock
	faceplayer
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special CreateBPHoldItemShop2
	waitstate
	release
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_PowerClerk::
	lock
	faceplayer
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special CreateBPPowerShop
	waitstate
	release
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_Man::
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_GoGetYourOwnDoll, MSGBOX_NPC
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_Sailor::
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_ItemsWillGetMonTougher, MSGBOX_NPC
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_PokefanF::
	lock
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_GetYouAnythingYouWant, MSGBOX_DEFAULT
	release
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_RichBoy::
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_WishIHadAllDolls, MSGBOX_NPC
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_Girl::
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_MoreBattlePointsForRecord, MSGBOX_NPC
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_OldWTMan::
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_OldWTMan_Text, MSGBOX_NPC
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_OldWTMan_Text:
	.string "Hallo! Die WUNDERTAUSCH-Stationen\l"
	.string "gibt es jetzt in jedem\l"
	.string "POKéMON-CENTER. Viel Spaß!$"

TrainerHill_Courtyard_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize:
	.string "Willkommen im\n"
	.string "TAUSCH-SERVICE.\p"
	.string "Hier kannst du deine gesammelten\l"
	.string "Kampfpunkte gegen tolle Preise\l"
	.string "eintauschen.\p"
	.string "Bitte wähle einen Preis aus.$"

TrainerHill_Courtyard_ExchangeServiceCorner_Text_WishIHadAllDolls:
	.string "Oh, die sind so süß!\n"
	.string "Ich hätte sie alle gern!\l"
	.string "Niedliche Kissen!\l"
	.string "Große PLÜSCHIS!\l"
	.string "Kleine PLÜSCHIS!\l"
	.string "Ich will sie wirklich alle!$"

TrainerHill_Courtyard_ExchangeServiceCorner_Text_GetYouAnythingYouWant:
	.string "Überlass das nur deiner Mama!\p"
	.string "Für alles, was du möchtest,\n"
	.string "würde ich Berge versetzen,\l"
	.string "mein Schatz!$"

TrainerHill_Courtyard_ExchangeServiceCorner_Text_ItemsWillGetMonTougher:
	.string "Wenn ich diese Items bekomme,\n"
	.string "werden meine POKéMON stärker.\p"
	.string "Darauf kannst du wetten!\n"
	.string "Ganz bestimmt!$"

TrainerHill_Courtyard_ExchangeServiceCorner_Text_GoGetYourOwnDoll:
	.string "Hä?\n"
	.string "Was starrst du denn so?\p"
	.string "Ich mag es nicht, wenn du mein\l"
	.string "Plüschi so anstarrst.\p"
	.string "Wenn du eins willst, hol dir\n"
	.string "doch selbst eins!\p"
	.string "Nicht wahr, SMOOCHUM?$"

TrainerHill_Courtyard_ExchangeServiceCorner_Text_MoreBattlePointsForRecord:
	.string "Wusstest du das?\p"
	.string "Wenn du in den KAMPFANLAGEN\l"
	.string "immer bessere Rekorde schaffst,\p"
	.string "erhältst du nach und nach mehr\n"
	.string "Kampfpunkte.$"
