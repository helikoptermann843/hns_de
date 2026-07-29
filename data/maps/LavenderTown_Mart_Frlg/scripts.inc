LavenderTown_Mart_Frlg_MapScripts::
	.byte 0

LavenderTown_Mart_EventScript_BaldingMan::
	msgbox LavenderTown_Mart_Text_SearchingForStatRaiseItems, MSGBOX_NPC
	end

LavenderTown_Mart_EventScript_Rocker::
	msgbox LavenderTown_Mart_Text_DidYouBuyRevives, MSGBOX_NPC
	end

LavenderTown_Mart_EventScript_Youngster::
	msgbox LavenderTown_Mart_Text_TrainerDuosCanChallengeYou, MSGBOX_NPC
	end

LavenderTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LavenderTown_Mart_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
LavenderTown_Mart_Items::
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE
	release
	end

LavenderTown_Mart_Text_SearchingForStatRaiseItems::
	.string "Ich suche nach Items, die die\n"
	.string "Fähigkeiten meiner Pokémon während\l"
	.string "eines Kampfes verbessern!\p"
	.string "Zum Beispiel X-Angriff, X-Abwehr,\n"
	.string "X-Tempo und X-Spezial.\p"
	.string "Weißt du, wo ich sie kaufen kann?$"

LavenderTown_Mart_Text_DidYouBuyRevives::
	.string "Der Vorsitzende redet sehr gerne\n"
	.string "über Pokémon!$"

LavenderTown_Mart_Text_TrainerDuosCanChallengeYou::
	.string "Der Vorsitzende redet sehr gerne\n"
	.string "über Pokémon!\p"
	.string "Aber die Person, die von den\n"
	.string "Pokémon am meisten\l"
	.string "geliebt wird, ist Sarah!$"

LavenderTown_Mart_Text_SoldNuggetFromMountainsFor5000::
	.string "この　あいだ　やまおくで\n"
	.string "きんのたまを　ひろい　ましてね！\p"
	.string "つかえない　しなもの　ですが\n"
	.string "うったら　なんと　5000¥でした$"
