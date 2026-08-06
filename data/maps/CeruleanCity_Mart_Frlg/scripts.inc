CeruleanCity_Mart_Frlg_MapScripts::
	.byte 0

CeruleanCity_Mart_EventScript_Youngster::
	msgbox CeruleanCity_Mart_Text_RepelWorksOnWeakMons, MSGBOX_NPC
	end

CeruleanCity_Mart_EventScript_Woman::
	msgbox CeruleanCity_Mart_Text_DoYouKnowAboutRareCandy, MSGBOX_NPC
	end

CeruleanCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CeruleanCity_Mart_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
CeruleanCity_Mart_Items::
	.2byte ITEM_POKE_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_NONE
	release
	end

CeruleanCity_Mart_Text_RepelWorksOnWeakMons::
	.string "Schutz hält nicht nur Käfer fern,\n"
	.string "sondern wirkt auch auf schwache\l"
	.string "Pokémon.\p"
	.string "Stell dein stärkstes Pokémon an den\n"
	.string "Anfang deines Teams.\p"
	.string "Ist das erste Pokémon stark,\n"
	.string "wirkt Schutz umso besser.$"

CeruleanCity_Mart_Text_DoYouKnowAboutRareCandy::
	.string "Besitzt du Sonderbonbons?\p"
	.string "Gibt man einem Pokémon ein solches\n"
	.string "Bonbon, dann erreicht es den\l"
	.string "nächsten Level!$"

