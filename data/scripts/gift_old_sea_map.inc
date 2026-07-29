MysteryGiftScript_OldSeaMap::
	setvaddress MysteryGiftScript_OldSeaMap
	lock
	faceplayer
	vgoto_if_set FLAG_RECEIVED_OLD_SEA_MAP, OldSeaMap_Obtained
	vgoto_if_set FLAG_CAUGHT_MEW, OldSeaMap_Obtained
	checkitem ITEM_OLD_SEA_MAP
	vgoto_if_eq VAR_RESULT, TRUE, OldSeaMap_Obtained
	vmessage sText_MysteryGiftOldSeaMapForYou
	waitmessage
	waitbuttonpress
	checkitemspace ITEM_OLD_SEA_MAP
	vgoto_if_eq VAR_RESULT, FALSE, OldSeaMap_NoBagSpace
	giveitem ITEM_OLD_SEA_MAP
	setflag FLAG_ENABLE_SHIP_FARAWAY_ISLAND
	setflag FLAG_RECEIVED_OLD_SEA_MAP
	vmessage sText_MysteryGiftOldSeaMapUseAtPort
	waitmessage
	waitbuttonpress
	release
	end

OldSeaMap_NoBagSpace:
	vmessage sText_MysteryGiftOldSeaMapBagFull
	waitmessage
	waitbuttonpress
	release
	end

OldSeaMap_Obtained:
	vmessage sText_MysteryGiftOldSeaMapThankYou
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftOldSeaMapForYou:
	.string "Danke, dass du das Geheim-\n"
	.string "geschehen benutzt hast.\p"
	.string "Du musst {PLAYER} sein.\n"
	.string "Hier ist eine alte Karte für dich!$"

sText_MysteryGiftOldSeaMapUseAtPort:
	.string "Du kannst sie am Hafen von\n"
	.string "Seegrasulb City einsetzen.\p"
	.string "Warum probierst du es nicht\n"
	.string "einfach aus?$"

sText_MysteryGiftOldSeaMapThankYou:
	.string "Danke, dass du das Geheim-\n"
	.string "geschehen benutzt hast!$"

sText_MysteryGiftOldSeaMapBagFull:
	.string "Oh, es tut mir Leid, {PLAYER}! Die\n"
	.string "Basis-Item-Tasche in deinem\l"
	.string "Beutel ist voll.\l"
	.string "Lagere etwas auf deinem PC und\l"
	.string "komme anschließend zurück.$"
