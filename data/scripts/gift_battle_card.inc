MysteryGiftScript_BattleCard::
	setvaddress MysteryGiftScript_BattleCard
	vgoto_if_set FLAG_MYSTERY_GIFT_DONE, MysteryGiftScript_BattleCardInfo
	setorcopyvar VAR_RESULT, GET_CARD_BATTLES_WON
	specialvar VAR_0x8008, GetMysteryGiftCardStat
	vgoto_if_ne VAR_0x8008, REQUIRED_CARD_BATTLES, MysteryGiftScript_BattleCardInfo
	lock
	faceplayer
	vmessage sText_MysteryGiftBattleCountCard_WonPrize
	waitmessage
	waitbuttonpress
	giveitem ITEM_POTION
	release
	setflag FLAG_MYSTERY_GIFT_DONE
	end

MysteryGiftScript_BattleCardInfo:
	lock
	faceplayer
	vmessage sText_MysteryGiftBattleCountCard
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftBattleCountCard:
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast.\p"
	.string "Auf deiner KAMPFKARTE\n"
	.string "wird deine Kampfstatistik gegen\l"
	.string "TRAINER mit derselben KARTE\l"
	.string "festgehalten.\l"
	.string "Suche TRAINER mit derselben KARTE\l"
	.string "und kämpfe gegen sie.\p"
	.string "Du kannst den Gesamtstand in den\n"
	.string "NACHRICHTEN erfahren.\p"
	.string "Probiere es doch einfach!$"

sText_MysteryGiftBattleCountCard_WonPrize:
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast.\p"
	.string "Glückwunsch!\p"
	.string "Du erhältst einen Preis\n"
	.string "für drei gewonnene Kämpfe.\p"
	.string "Hoffentlich inspiriert dich das,\n"
	.string "weiter zu kämpfen.$"
