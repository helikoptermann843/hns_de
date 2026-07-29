CherrygroveCity_Mart_hns_MapScripts::
	.byte 0

Cherrygrove_Pokemart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_ge VAR_NEWBARK_TOWN_STATE, 5, Cherrygrove_Pokemart_EventScript_Clerk2
	pokemart Cherrygrove_Pokemart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

Cherrygrove_Pokemart_EventScript_Youngster::
	lock
	faceplayer
	msgbox Cherrygrove_Pokemart_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

Cherrygrove_Pokemart_EventScript_Bugcatcher::
	lock
	faceplayer
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 5, Cherrygrove_Pokemart_EventScript_Bugcatcher2
	msgbox Cherrygrove_Pokemart_Text_CooltrainerM, MSGBOX_DEFAULT
	closemessage
	release
	end

Cherrygrove_Pokemart_EventScript_Bugcatcher2::
	msgbox Cherrygrove_Pokemart_Text_CooltrainerM_PokeBallsInStock, MSGBOX_DEFAULT
	closemessage
	release
	end

Cherrygrove_Pokemart_EventScript_Clerk2::
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 3
Cherrygrove_Pokemart_Pokemart:
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_NONE
	release
	end

Cherrygrove_Pokemart_Text_CooltrainerM:
	.string "Die Pokébälle sind leider ausverkauft.\n"
	.string "Wann wohl die neue Lieferung kommt?$"

Cherrygrove_Pokemart_Text_CooltrainerM_PokeBallsInStock:
	.string "Die neue Lieferung Pokébälle ist da!\n"
	.string "Jetzt kann ich wieder nach Herzenslust\l"
	.string "auf Pokémon-Jagd gehen!$"

Cherrygrove_Pokemart_Text_Youngster:
	.string "Als ich durch das hohe Gras spaziert\n"
	.string "bin, wurde mein Pokémon von einem\l"
	.string "Käfer-Pokémon vergiftet!\p"
	.string "Auf dem Weg zurück ist es dann immer\n"
	.string "schwächer geworden.\p"
	.string "Du solltest ständig ein Gegengift mit dir\n"
	.string "führen!$"
