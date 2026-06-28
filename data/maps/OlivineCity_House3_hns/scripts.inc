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
	.string "OLIVIANA liegt am Meer!\p"
	.string "Und wo es Meer gibt,\n"
	.string "da gibt es auch Fische!\p"
	.string "Ich angle hier seit 30 Jahren.\p"
	.string "Willst du ans Meer gehen\n"
	.string "und dein Anglerglück versuchen?$"

OlivineCity_Text_GiveGoodRod:
	.string "Ah, haha! Ein neuer Angler\n"
	.string "ist in Arbeit!$"

OlivineCity_Text_GaveGoodRod:
	.string "Fische gibt's nicht nur im Meer,\p"
	.string "sondern überall, wo Wasser ist.\p"
	.string "Übrigens zeigt dein POKéDEX\n"
	.string "die Fischgruppen der Pokémon.\p"
	.string "An verschiedenen Orten gibt es\n"
	.string "ähnliche Fischarten.$"

OlivineCity_Text_DontWantGoodRod:
	.string "Wie bitte? Du angelst nicht!?\n"
	.string "Das ist unbegreiflich!$"

OlivineCity_Text_HaveGoodRod:
	.string "Na, wie läuft's?\n"
	.string "Hast du den großen Fang gemacht?$"
