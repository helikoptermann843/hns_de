CeruleanCity_House5_Frlg_MapScripts::
	.byte 0

CeruleanCity_House5_EventScript_BerryPowderMan::
	lock
	faceplayer
	goto_if_set FLAG_GOT_POWDER_JAR, CeruleanCity_House5_EventScript_AskToExchangePowder
	msgbox CeruleanCity_House1_Text_AnyInterestInBerries, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CeruleanCity_House5_EventScript_NoInterestInBerries
	goto_if_unset FLAG_SYS_GOT_BERRY_POUCH, CeruleanCity_House5_EventScript_NoBerries
	msgbox CeruleanCity_House1_Text_HaveJustTheThing
	setflag FLAG_GOT_POWDER_JAR
	giveitem ITEM_POWDER_JAR
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
	msgbox CeruleanCity_House1_Text_GoCrushBerriesAtDirectCorner
	release
	end

CeruleanCity_House5_EventScript_NoBerries::
	msgbox CeruleanCity_House1_Text_WhyMustYouLieNoBerries
	release
	end

CeruleanCity_House5_EventScript_NoInterestInBerries::
	msgbox CeruleanCity_House1_Text_TakeInterestInAllSortsOfThings
	release
	end

CeruleanCity_House5_EventScript_AskToExchangePowder::
	special DisplayBerryPowderVendorMenu
	msgbox CeruleanCity_House1_Text_HaveYouBroughtBerryPowder
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
	end

CeruleanCity_House5_EventScript_ChooseExchangeItem::
	message CeruleanCity_House5_Text_ExchangeWithWhat
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CeruleanCity_House5_EventScript_EnergyPowder
	case 1, CeruleanCity_House5_EventScript_EnergyRoot
	case 2, CeruleanCity_House5_EventScript_HealPowder
	case 3, CeruleanCity_House5_EventScript_RevivalHerb
	case 4, CeruleanCity_House5_EventScript_Protein
	case 5, CeruleanCity_House5_EventScript_Iron
	case 6, CeruleanCity_House5_EventScript_Carbos
	case 7, CeruleanCity_House5_EventScript_Calcium
	case 8, CeruleanCity_House5_EventScript_Zinc
	case 9, CeruleanCity_House5_EventScript_HPUp
	case 10, CeruleanCity_House5_EventScript_PPUp
	case 11, CeruleanCity_House5_EventScript_ExitMenu
	case 127, CeruleanCity_House5_EventScript_ExitMenu
	end

CeruleanCity_House5_EventScript_EnergyPowder::
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
	setvar VAR_0x8009, 50
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end

CeruleanCity_House5_EventScript_EnergyRoot::
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
	setvar VAR_0x8009, 80
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end

CeruleanCity_House5_EventScript_HealPowder::
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
	setvar VAR_0x8008, ITEM_HEAL_POWDER
	setvar VAR_0x8009, 50
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end

CeruleanCity_House5_EventScript_RevivalHerb::
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
	setvar VAR_0x8009, 300
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end

CeruleanCity_House5_EventScript_Protein::
	bufferitemname STR_VAR_1, ITEM_PROTEIN
	setvar VAR_0x8008, ITEM_PROTEIN
	setvar VAR_0x8009, 1000
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end

CeruleanCity_House5_EventScript_Iron::
	bufferitemname STR_VAR_1, ITEM_IRON
	setvar VAR_0x8008, ITEM_IRON
	setvar VAR_0x8009, 1000
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end

CeruleanCity_House5_EventScript_Carbos::
	bufferitemname STR_VAR_1, ITEM_CARBOS
	setvar VAR_0x8008, ITEM_CARBOS
	setvar VAR_0x8009, 1000
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end

CeruleanCity_House5_EventScript_Calcium::
	bufferitemname STR_VAR_1, ITEM_CALCIUM
	setvar VAR_0x8008, ITEM_CALCIUM
	setvar VAR_0x8009, 1000
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end

CeruleanCity_House5_EventScript_Zinc::
	bufferitemname STR_VAR_1, ITEM_ZINC
	setvar VAR_0x8008, ITEM_ZINC
	setvar VAR_0x8009, 1000
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end

CeruleanCity_House5_EventScript_HPUp::
	bufferitemname STR_VAR_1, ITEM_HP_UP
	setvar VAR_0x8008, ITEM_HP_UP
	setvar VAR_0x8009, 1000
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end

CeruleanCity_House5_EventScript_PPUp::
	bufferitemname STR_VAR_1, ITEM_PP_UP
	setvar VAR_0x8008, ITEM_PP_UP
	setvar VAR_0x8009, 3000
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end

CeruleanCity_House5_EventScript_ExitMenu::
	msgbox CeruleanCity_House1_Text_SeeMeIfYoudLikeToTradePowder
	special RemoveBerryPowderVendorMenu
	release
	end

CeruleanCity_House5_EventScript_ExchangePowderForItem::
	msgbox CeruleanCity_House1_Text_YoullExchangeBerryPowderForItem, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CeruleanCity_House5_EventScript_ChooseExchangeItem
	copyvar VAR_0x8004, VAR_0x8009
	specialvar VAR_RESULT, HasEnoughBerryPowder
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House5_EventScript_NotEnoughBerryPowder
	giveitem VAR_0x8008
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House5_EventScript_BagIsFull
	copyvar VAR_0x8004, VAR_0x8009
	special TakeBerryPowder
	special PrintPlayerBerryPowderAmount
	msgbox CeruleanCity_House1_Text_TradeMoreBerryPowder, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CeruleanCity_House5_EventScript_ChooseExchangeItem
	msgbox CeruleanCity_House1_Text_HopeToSeeYouAgain
	special RemoveBerryPowderVendorMenu
	release
	end

CeruleanCity_House5_EventScript_BagIsFull::
	msgbox gText_TheBagIsFull
	special RemoveBerryPowderVendorMenu
	release
	end

CeruleanCity_House5_EventScript_NotEnoughBerryPowder::
	msgbox CeruleanCity_House1_Text_DontHaveEnoughBerryPowder
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
	end

CeruleanCity_House5_EventScript_BerryCrushRankings::
	lockall
	special ShowBerryCrushRankings
	waitstate
	releaseall
	end

CeruleanCity_House1_Text_AnyInterestInBerries::
	.string "Ich stelle eine Vielzahl\n"
	.string "Medikamente aus Beerenpuder\l"
	.string "her.\l"
	.string "Mit gutem Beerenpuder kann\l"
	.string "ich jedes Medikament herstellen!\p"
	.string "Hast du Interesse an Beeren?$"

CeruleanCity_House1_Text_HaveJustTheThing::
	.string "Schön! Dann habe ich genau\n"
	.string "das Richtige für dich!$"

CeruleanCity_House1_Text_GoCrushBerriesAtDirectCorner::
	.string "Im Pokémon-Center gibt es im\n"
	.string "oberen Stockwerk beim\l"
	.string "Direktklub etwas Neues.\l"
	.string "Der Drahtlose GBA-Adapter zum\l"
	.string "Beeren mahlen wurde\l"
	.string "eingerichtet.\l"
	.string "Da kommst du ins Spiel.\p"
	.string "Du bist der Einzige, den ich\n"
	.string "um diesen Gefallen bitten kann.\p"
	.string "Kannst du mit dieser Maschine\n"
	.string "Beerenpuder für mich\l"
	.string "herstellen?\l"
	.string "Sie steht im Direktklub des\l"
	.string "Pokémon-Centers.\p"
	.string "Ich werde Medizin herstellen,\n"
	.string "wenn du mir Beerenpuder\l"
	.string "bringst.\l"
	.string "Mahle Beeren und bring mir\l"
	.string "Beerenpuder.$"

CeruleanCity_House1_Text_WhyMustYouLieNoBerries::
	.string "Warum lügst du mich an?\p"
	.string "Wie viele Beeren hast du?\n"
	.string "Keine einzige!$"

CeruleanCity_House1_Text_TakeInterestInAllSortsOfThings::
	.string "Du interessierst dich nicht für\n"
	.string "Beeren?\l"
	.string "Auch als Kind sollte man sich\l"
	.string "für alle möglichen Dinge\l"
	.string "interessieren.$"

CeruleanCity_House1_Text_HaveYouBroughtBerryPowder::
	.string "Ähm! Hast du mir Beerenpuder\n"
	.string "gebracht?$"

CeruleanCity_House5_Text_ExchangeWithWhat::
	.string "With what would you like to \n"
	.string "exchange it?$"

CeruleanCity_House1_Text_YoullExchangeBerryPowderForItem::
	.string "Gut, ich gebe dir {STR_VAR_1} im\n"
	.string "Austausch für deinen\l"
	.string "Beerenpuder!$"

CeruleanCity_House1_Text_DontHaveEnoughBerryPowder::
	.string "Hm? Du hast nicht genügend\n"
	.string "Beerenpuder!$"

CeruleanCity_House1_Text_TradeMoreBerryPowder::
	.string "Das ist wirklich erstklassiger\n"
	.string "Beerenpuder! Daraus lässt\l"
	.string "sich gute Medizin herstellen.\l"
	.string "Möchtest du noch mehr\l"
	.string "Beerenpuder tauschen?$"

CeruleanCity_House1_Text_HopeToSeeYouAgain::
	.string "Das ist in Ordnung!\n"
	.string "Ich hoffe, wir sehen uns!$"

CeruleanCity_House1_Text_SeeMeIfYoudLikeToTradePowder::
	.string "Komm einfach vorbei, wenn du\n"
	.string "Beerenpuder tauschen möchtest!$"

