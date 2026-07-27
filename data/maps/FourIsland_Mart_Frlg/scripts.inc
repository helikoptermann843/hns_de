FourIsland_Mart_Frlg_MapScripts::
	.byte 0

FourIsland_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart FourIsland_Mart_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
FourIsland_Mart_Items::
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_MAX_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
	release
	end

FourIsland_Mart_EventScript_Camper::
	msgbox FourIsland_Mart_Text_IcefallCaveIsFrigid, MSGBOX_NPC
	end

FourIsland_Mart_Text_LoreleiGrewUpOnThisIsland::
	.string "Ein wunderbarer, starker TRAINER\n"
	.string "ist hier aufgewachsen.\p"
	.string "Ich wette, du kennst sie auch. Es\n"
	.string "ist LORELEI von den TOP VIER.\p"
	.string "Als LORELEI noch klein war, habe\n"
	.string "ich ihr viel über POKéMON\l"
	.string "beigebracht!$"

FourIsland_Mart_Text_IcefallCaveIsFrigid::
	.string "SEVII EILAND liegt in \n"
	.string "warmen Gefilden.\p"
	.string "Aber es gibt eine Ausnahme, die\n"
	.string "du kennen solltest.\p"
	.string "Die EISKASKADENHÖHLE ist\n"
	.string "aufgrund der POKéMON,\l"
	.string "die dort leben, kalt.$"

