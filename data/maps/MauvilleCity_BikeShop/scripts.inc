MauvilleCity_BikeShop_MapScripts::
	.byte 0

MauvilleCity_BikeShop_EventScript_Rydel::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_BIKE, MauvilleCity_BikeShop_EventScript_AskSwitchBikes
	goto_if_set FLAG_DECLINED_BIKE, MauvilleCity_BikeShop_EventScript_SkipGreeting
	msgbox MauvilleCity_BikeShop_Text_RydelGreeting, MSGBOX_DEFAULT
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_YesFar
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_NotFar
	end

MauvilleCity_BikeShop_EventScript_SkipGreeting::
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_YesFar
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_NotFar
	end

MauvilleCity_BikeShop_EventScript_ChooseBike::
	message MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne
	waitmessage
	multichoice 21, 8, MULTI_BIKE, TRUE
	switch VAR_RESULT
	case 0, MauvilleCity_BikeShop_EventScript_GetMachBike
	case 1, MauvilleCity_BikeShop_EventScript_GetAcroBike
	end

MauvilleCity_BikeShop_EventScript_NotFar::
	setflag FLAG_DECLINED_BIKE
	msgbox MauvilleCity_BikeShop_Text_GuessYouDontNeedBike, MSGBOX_DEFAULT
	release
	end

MauvilleCity_BikeShop_EventScript_YesFar::
	setflag FLAG_RECEIVED_BIKE
	goto MauvilleCity_BikeShop_EventScript_ChooseBike
	end

MauvilleCity_BikeShop_EventScript_GetMachBike::
	msgbox MauvilleCity_BikeShop_Text_ChoseMachBike, MSGBOX_DEFAULT
	giveitem ITEM_MACH_BIKE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
	end

MauvilleCity_BikeShop_EventScript_GetAcroBike::
	msgbox MauvilleCity_BikeShop_Text_ChoseAcroBike, MSGBOX_DEFAULT
	giveitem ITEM_ACRO_BIKE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
	end

MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes::
	msgbox MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes, MSGBOX_DEFAULT
	special SwapRegisteredBike
	release
	end

MauvilleCity_BikeShop_EventScript_AskSwitchBikes::
	msgbox MauvilleCity_BikeShop_Text_WantToSwitchBikes, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_SwitchBikes
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_KeepBike
	end

@ If the player does not have a bike on them Rydel assumes its stored in the PC
MauvilleCity_BikeShop_EventScript_SwitchBikes::
	msgbox MauvilleCity_BikeShop_Text_IllSwitchBikes, MSGBOX_DEFAULT
	checkitem ITEM_ACRO_BIKE
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchAcroForMach
	checkitem ITEM_MACH_BIKE
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchMachForAcro
	msgbox MauvilleCity_BikeShop_Text_OhYourBikeIsInPC, MSGBOX_DEFAULT
	release
	end

MauvilleCity_BikeShop_EventScript_KeepBike::
	msgbox MauvilleCity_BikeShop_Text_HappyYouLikeIt, MSGBOX_DEFAULT
	release
	end

MauvilleCity_BikeShop_EventScript_SwitchAcroForMach::
	incrementgamestat GAME_STAT_TRADED_BIKES
	msgbox MauvilleCity_BikeShop_Text_ExchangedAcroForMach, MSGBOX_DEFAULT
	removeitem ITEM_ACRO_BIKE
	giveitem ITEM_MACH_BIKE
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
	end

MauvilleCity_BikeShop_EventScript_SwitchMachForAcro::
	incrementgamestat GAME_STAT_TRADED_BIKES
	msgbox MauvilleCity_BikeShop_Text_ExchangedMachForAcro, MSGBOX_DEFAULT
	removeitem ITEM_MACH_BIKE
	giveitem ITEM_ACRO_BIKE
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
	end

MauvilleCity_BikeShop_EventScript_Assistant::
	msgbox MauvilleCity_BikeShop_Text_HandbooksAreInBack, MSGBOX_NPC
	end

MauvilleCity_BikeShop_EventScript_MachBikeHandbook::
	message MauvilleCity_BikeShop_Text_MachHandbookWhichPage
	waitmessage
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
	end

MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage::
	multichoice 0, 0, MULTI_MACH_BIKE_INFO, FALSE
	switch VAR_RESULT
	case 0, MauvilleCity_BikeShop_EventScript_HowToRide
	case 1, MauvilleCity_BikeShop_EventScript_HowToTurn
	case 2, MauvilleCity_BikeShop_EventScript_SandySlopes
	case 3, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
	end

MauvilleCity_BikeShop_EventScript_HowToRide::
	message MauvilleCity_BikeShop_Text_HowToRideMachBike
	waitmessage
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
	end

MauvilleCity_BikeShop_EventScript_HowToTurn::
	message MauvilleCity_BikeShop_Text_HowToTurnMachBike
	waitmessage
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
	end

MauvilleCity_BikeShop_EventScript_SandySlopes::
	message MauvilleCity_BikeShop_Text_SandySlopes
	waitmessage
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
	end

MauvilleCity_BikeShop_EventScript_ExitMachHandbook::
	release
	end

MauvilleCity_BikeShop_EventScript_AcroBikeHandbook::
	message MauvilleCity_BikeShop_Text_AcroHandbookWhichPage
	waitmessage
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
	end

MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage::
	multichoice 0, 0, MULTI_ACRO_BIKE_INFO, FALSE
	switch VAR_RESULT
	case 0, MauvilleCity_BikeShop_EventScript_Wheelies
	case 1, MauvilleCity_BikeShop_EventScript_BunnyHops
	case 2, MauvilleCity_BikeShop_EventScript_Jumps
	case 3, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
	end

MauvilleCity_BikeShop_EventScript_Wheelies::
	message MauvilleCity_BikeShop_Text_Wheelies
	waitmessage
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
	end

MauvilleCity_BikeShop_EventScript_BunnyHops::
	message MauvilleCity_BikeShop_Text_BunnyHops
	waitmessage
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
	end

MauvilleCity_BikeShop_EventScript_Jumps::
	message MauvilleCity_BikeShop_Text_Jumps
	waitmessage
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
	end

MauvilleCity_BikeShop_EventScript_ExitAcroHandbook::
	release
	end

MauvilleCity_BikeShop_Text_RydelGreeting:
	.string "Nun, was haben wir denn hier?\n"
	.string "Einen höchst energetischen Kunden!\p"
	.string "Ich? Du kannst RADLA zu mir sagen.\n"
	.string "Ich bin der Besitzer des\l"
	.string "Fahrrad-Shops.$"

MauvilleCity_BikeShop_Text_DidYouComeFromFarAway:
	.string "RADLA: Deine TURBOTRETER…\n"
	.string "Die sehen ja wirklich schmuddelig aus…\n"
	.string "\p"
	.string "Kommst du von weit her?$"

MauvilleCity_BikeShop_Text_GuessYouDontNeedBike:
	.string "RADLA: Stimmt das wirklich?\p"
	.string "Dann kannst du, glaube ich, keines\n"
	.string "meiner Fahrräder gebrauchen.$"

MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne:
	.string "RADLA: Hm, hm… … … … …\n"
	.string "… … … … … … … …\p"
	.string "Du kommst den ganzen Weg von\n"
	.string "WURZELHEIM her?\p"
	.string "Meine Güte!\n"
	.string "Das ist unwahrscheinlich weit weg!\p"
	.string "Wenn du eines meiner RÄDer\n"
	.string "hättest, könntest du leicht überall\n"
	.string "hin\l"
	.string "und den Wind in den Haaren spüren!\p"
	.string "Ich sag dir was!\n"
	.string "Ich werde dir ein RAD geben!\p"
	.string "Oh, eine Sekunde!\p"
	.string "Ich sollte dir sagen, dass es zwei\n"
	.string "verschiedene RÄDer gibt!\p"
	.string "Das EILRAD und das KUNSTRAD!\p"
	.string "EILRÄDer für Leute, die den Wind in\n"
	.string "den Haaren spüren wollen!\p"
	.string "KUNSTRÄDer für Leute, die die\n"
	.string "Techniken des Radfahrens\l"
	.string "beherrschen wollen!\p"
	.string "Da ich ein richtig weiches Herz habe,\n"
	.string "darfst du dir eines aussuchen!\p"
	.string "Welches möchtest du haben?$"

MauvilleCity_BikeShop_Text_ChoseMachBike:
	.string "{PLAYER} wählt das EILRAD.$"

MauvilleCity_BikeShop_Text_ChoseAcroBike:
	.string "{PLAYER} wählt das KUNSTRAD.$"

MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes:
	.string "RADLA: Wenn du die RÄDer tauschen\n"
	.string "möchtest, komm einfach wieder vorbei!$"

MauvilleCity_BikeShop_Text_WantToSwitchBikes:
	.string "RADLA: Oh. Du möchtest die RÄDer\n"
	.string "tauschen?$"

MauvilleCity_BikeShop_Text_IllSwitchBikes:
	.string "RADLA: Kein Problem!\n"
	.string "Ich tausche die RÄDer für dich aus!$"

MauvilleCity_BikeShop_Text_ExchangedMachForAcro:
	.string "{PLAYER} bekommt für das EILRAD ein\n"
	.string "KUNSTRAD.$"

MauvilleCity_BikeShop_Text_ExchangedAcroForMach:
	.string "{PLAYER} bekommt für das KUNSTRAD ein\n"
	.string "EILRAD.$"

MauvilleCity_BikeShop_Text_HappyYouLikeIt:
	.string "RADLA: Wunderbar!\n"
	.string "Ich freue mich, dass es dir gefällt!$"

MauvilleCity_BikeShop_Text_OhYourBikeIsInPC:
	.string "Oh? Was ist mit dem RAD geschehen,\n"
	.string "das ich dir gegeben habe?\p"
	.string "Ach so, du hast es in deinem PC\n"
	.string "gelagert.\p"
	.string "Nun, hol es heraus, und ich werde es\n"
	.string "mit\n"
	.string "Freuden gegen ein anderes tauschen!\p"
	.string "Möge der Wind dir stets im Rücken sein\n"
	.string "bei deinem Abenteuer!$"

MauvilleCity_BikeShop_Text_HandbooksAreInBack:
	.string "Ich lerne etwas über RÄDER,\n"
	.string "während ich hier arbeite.\p"
	.string "Wenn du eine Anleitung brauchst, wie\n"
	.string "man RAD fährt - da vorne findest du\l"
	.string "einige Handbücher.$"

MauvilleCity_BikeShop_Text_MachHandbookWhichPage:
	.string "Ein Handbuch zum EILRAD.\p"
	.string "Welche Seite möchtest du lesen?$"

MauvilleCity_BikeShop_Text_HowToRideMachBike:
	.string "Mit Hilfe des + Steuerkreuzes lässt\n"
	.string "sich das RAD lenken.\p"
	.string "Es wird immer schneller, wenn es\n"
	.string "einmal fährt.\p"
	.string "Lass das Steuerkreuz los, um das\n"
	.string "RAD anzuhalten.\p"
	.string "Eine andere Seite lesen?$"

MauvilleCity_BikeShop_Text_HowToTurnMachBike:
	.string "Ein EILRAD ist sehr schnell und kann\n"
	.string "nicht schnell gestoppt werden.\p"
	.string "Das Kurvenfahren ist sehr schwierig.\p"
	.string "Lasse das + Steuerkreuz kurz los und\n"
	.string "bremse, bevor du an eine Kurve kommst.\n"
	.string "\p"
	.string "Eine andere Seite lesen?$"

MauvilleCity_BikeShop_Text_SandySlopes:
	.string "In der ganzen HOENN-Region gibt es\n"
	.string "sandige Gefälle.\p"
	.string "Der lose Sand erlaubt es nicht, diese\n"
	.string "Gefälle normal zu erklettern.\p"
	.string "Aber mit einem EILRAD können auch\n"
	.string "diese Gefälle gemeistert werden.\p"
	.string "Eine andere Seite lesen?$"

MauvilleCity_BikeShop_Text_AcroHandbookWhichPage:
	.string "Ein Handbuch zum KUNSTRAD.\p"
	.string "Welche Seite möchtest du lesen?$"

MauvilleCity_BikeShop_Text_Wheelies:
	.string "Drücke während des Fahrens den\n"
	.string "B-Knopf, um das Vorderrad anzuheben.\p"
	.string "Ist das Vorderrad angehoben, können\n"
	.string "mithilfe des Steuerkreuzes Sprünge\l"
	.string "ausgeführt werden.\p"
	.string "Diese Technik nennt sich Wheelie.\p"
	.string "Eine andere Seite lesen?$"

MauvilleCity_BikeShop_Text_BunnyHops:
	.string "Wird der B-Knopf gedrückt, kann auf\n"
	.string "der Stelle gehüpft werden.\p"
	.string "Diese Technik nennt sich Hoppeln.\p"
	.string "Dabei kann gleichzeitig gefahren\n"
	.string "werden.\p"
	.string "Eine andere Seite lesen?$"

MauvilleCity_BikeShop_Text_Jumps:
	.string "Drücke gleichzeitig den B-Knopf und\n"
	.string "das Steuerkreuz, um zu springen.\p"
	.string "Drücke das + Steuerkreuz seitlich, um\n"
	.string "einen seitlichen Sprung auszuführen.\p"
	.string "Drücke es nach hinten, um die Richtung\n"
	.string "zu ändern.\p"
	.string "Eine andere Seite lesen?$"

