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
	.string "Sie haben keine Pokébälle mehr!\p"
	.string "Wann bekommen sie endlich Nachschub?$"

Cherrygrove_Pokemart_Text_CooltrainerM_PokeBallsInStock:
	.string "Pokébälle sind wieder da!\n"
	.string "Jetzt kann ich Pokémon fangen!$"

Cherrygrove_Pokemart_Text_Youngster:
	.string "Als ich durchs Gras gelaufen bin,\n"
	.string "hat ein Käfer-Pokémon mein Pokémon\l"
	.string "vergiftet!\p"
	.string "Ich bin einfach weitergelaufen, aber\n"
	.string "dann ist mein Pokémon ohnmächtig\l"
	.string "geworden.\p"
	.string "Du solltest immer ein Gegengift\n"
	.string "dabei haben.$"
