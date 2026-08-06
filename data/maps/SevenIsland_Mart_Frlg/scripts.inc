SevenIsland_Mart_Frlg_MapScripts::
	.byte 0

SevenIsland_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SevenIsland_Mart_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
SevenIsland_Mart_Items::
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_MAX_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
	release
	end

SevenIsland_Mart_EventScript_Lass::
	msgbox SevenIsland_Mart_Text_MonHavePersonalitiesOfTheirOwn, MSGBOX_NPC
	end

SevenIsland_Mart_EventScript_Hiker::
	msgbox SevenIsland_Mart_Text_PreparationsCompleteForRuins, MSGBOX_NPC
	end

SevenIsland_Mart_EventScript_Fisher::
	msgbox SevenIsland_Mart_Text_NeedToFishOnSevenIsland, MSGBOX_NPC
	end

SevenIsland_Mart_Text_MonHavePersonalitiesOfTheirOwn::
	.string "Pokémon haben genau wie\n"
	.string "Menschen ihre eigene Persönlichkeit.\p"
	.string "Mein Pikachu hat ein Hastiges\n"
	.string "Wesen, also ist es ein schnelles\l"
	.string "Pokémon.$"

SevenIsland_Mart_Text_PreparationsCompleteForRuins::
	.string "Gut, die Vorbereitungen sind\n"
	.string "abgeschlossen. Ich kann die\l"
	.string "Ruinen nun erforschen.$"

SevenIsland_Mart_Text_NeedToFishOnSevenIsland::
	.string "Ahh, ich habe endlich meinen\n"
	.string "Kaffee bekommen!\p"
	.string "Aber er war zu stark. Jetzt habe\n"
	.string "ich Kopfschmerzen…\p"
	.string "Hilft dir mein Lehrkanal?$"

