FallarborTown_Mart_MapScripts::
	.byte 0

FallarborTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart FallarborTown_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
FallarborTown_Mart_Pokemart:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	pokemartlistend

FallarborTown_Mart_EventScript_Woman::
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
	end

FallarborTown_Mart_EventScript_PokefanM::
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
	end

FallarborTown_Mart_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_Mart_Text_DecidingSkittyEvolve:
	.string "Ich habe lange überlegt, ob sich mein\n"
	.string "ENECO entwickeln soll oder nicht.\p"
	.string "Ich müsste nur diesen MONDSTEIN ein-\n"
	.string "setzen, aber das ist eine schwere\l"
	.string "Entscheidung…\p"
	.string "Würde es sich entwickeln, wäre es viel\n"
	.string "stärker.\p"
	.string "Aber es würde auch anders aussehen.$"

FallarborTown_Mart_Text_Skitty:
	.string "ENECO: Miyao?$"

FallarborTown_Mart_Text_SellNuggetIFound:
	.string "Ich habe hier ein NUGGET gefunden…\n"
	.string "Das werde ich wohl verkaufen. Was soll\l"
	.string "ich sonst damit machen?$"

