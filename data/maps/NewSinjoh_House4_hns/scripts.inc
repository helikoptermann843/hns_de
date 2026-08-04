NewSinjoh_House4_hns_MapScripts::
	.byte 0

NewSinjoh_Cafe_Script_Sister::
	lock
	faceplayer
	message NewSinjoh_Cafe_Text_ResturantGreeting
	waitmessage
	pokemart NewSinjoh_Cafe_Pokemart_Resturant
	msgbox NewSinjoh_Cafe_Text_ResturantEnd, MSGBOX_DEFAULT
	release
	end

	.align 2
NewSinjoh_Cafe_Pokemart_Resturant:
	.2byte ITEM_YACHE_BERRY
    .2byte ITEM_LANSAT_BERRY
    .2byte ITEM_ROWAP_BERRY
    .2byte ITEM_BERRY_JUICE
	.2byte ITEM_SODA_POP
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_LEEK
	.2byte ITEM_BIG_ROOT
	.2byte ITEM_NONE
	release
	end

NewSinjoh_Cafe_Text_ResturantGreeting:
	.string "H-hallo! Willkommen in unserem Café!\n"
	.string "Was darf es heute sein?$"

NewSinjoh_Cafe_Text_ResturantEnd:
	.string "Beehre uns bald wieder!$"

NewSinjoh_Cafe_EventScript_BaldingMan::
	msgbox NewSinjoh_Cafe_Text_BaldingMan, MSGBOX_NPC
	end

NewSinjoh_Cafe_Text_BaldingMan:
	.string "Dieses Café wird von einer\n"
	.string "einheimischen Familie geführt,\l"
	.string "solange man denken kann.\p"
	.string "Ihre jüngste Tochter da drüben ist\n"
	.string "es nicht gewohnt, so viele Fremde\l"
	.string "zu bedienen.$"

NewSinjoh_Cafe_EventScript_ScientistF::
	msgbox NewSinjoh_Cafe_Text_ScientistF, MSGBOX_NPC
	end

NewSinjoh_Cafe_Text_ScientistF:
	.string "Dieses Getränk ist so guuu--uut!\n"
	.string "…\p"
	.string "…\p"
	.string "Hahaha\p"
	.string "…$"

NewSinjoh_Cafe_EventScript_ScientistM::
	lock
	faceplayer
	msgbox NewSinjoh_Cafe_Text_ScientistM, MSGBOX_DEFAULT
	closemessage
	release
	end

NewSinjoh_Cafe_Text_ScientistM:
	.string "Bitte verzeih meiner Kollegin…\p"
	.string "Die Getränke hier sind stärker, als\n"
	.string "wir es aus Hoenn gewohnt sind.\p"
	.string "Ich habe sie gewarnt, aber sie\n"
	.string "meinte, sie müsse mal abschalten.\p"
	.string "Diese Forschungsexpedition hat uns\n"
	.string "allen viel abverlangt.$"

NewSinjoh_Cafe_EventScript_Gentleman::
	msgbox NewSinjoh_Cafe_Text_Gentleman, MSGBOX_NPC
	end

NewSinjoh_Cafe_Text_Gentleman:
	.string "Was starrst du so, Kind?\p"
	.string "Es ist nichts dabei, wenn ein Mann\n"
	.string "und sein Pokémon am selben Tisch\l"
	.string "essen.$"

NewSinjoh_EventScript_Scyther::
	lock
	faceplayer
	playmoncry SPECIES_SCYTHER, 0
	msgbox NewSinjoh_Text_Scyther, MSGBOX_DEFAULT
	waitmoncry
    closemessage
	release
	end

NewSinjoh_Text_Scyther:
	.string "Scyyy!$"
