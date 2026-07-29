OlivineCity_House3_hns_MapScripts::
	.byte 0

OlivineCityHouse3_EventScriptFishingGuru::
	lock
	faceplayer
	checkitem ITEM_GOOD_ROD
	goto_if_eq VAR_RESULT, TRUE, OlivineCityHouse3_EventScriptFishingGuru2
	msgbox OlivineCity_Text_OfferGoodRod, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, OlivineCityHouse3_EventScriptFishingGuruRefused
	msgbox OlivineCity_Text_GiveGoodRod, MSGBOX_DEFAULT
	giveitem ITEM_GOOD_ROD
	msgbox OlivineCity_Text_GaveGoodRod, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCityHouse3_EventScriptFishingGuru2::
	msgbox OlivineCity_Text_HaveGoodRod, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCityHouse3_EventScriptFishingGuruRefused::
	msgbox OlivineCity_Text_DontWantGoodRod, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Text_OfferGoodRod:
	.string "Oliviana City ist berühmt für ihre\n"
	.string "malerische Lage am Meer!\p"
	.string "Und wo Meer ist, kann man auch angeln!\n"
	.string "Ich fische hier schon seit 30 Jahren.\p"
	.string "Hast du nicht auch Lust, zum Meer\n"
	.string "zu gehen und eine Runde zu angeln?$"

OlivineCity_Text_GiveGoodRod:
	.string "Hahaha! Und wieder ist die Welt\n"
	.string "um einen Angler reicher!$"

OlivineCity_Text_GaveGoodRod:
	.string "Fische gibt's nicht nur im Meer,\n"
	.string "sondern überall, wo Wasser ist.\p"
	.string "Übrigens zeigt dein Pokédex\n"
	.string "die Fischgruppen der Pokémon.\p"
	.string "An verschiedenen Orten gibt es\n"
	.string "ähnliche Fischarten.$"

OlivineCity_Text_DontWantGoodRod:
	.string "Waaas?!? Du willst nicht fischen?!?\n"
	.string "Unfassbar!$"

OlivineCity_Text_HaveGoodRod:
	.string "Na, wie läuft's?\n"
	.string "Hast du den großen Fang gemacht?$"
