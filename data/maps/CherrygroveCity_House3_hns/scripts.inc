CherrygroveCity_House3_hns_MapScripts::
	.byte 0

CherrygroveCity_House3_EventScript_Boy::
	lock
	faceplayer
	msgbox CherrygroveCity_EvolutionHouse_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

CherrygroveCity_House3_EventScript_Girl::
	lock
	faceplayer
	msgbox CherrygroveCity_EvolutionHouse_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

CherrygroveCity_EvolutionHouse_Text_Youngster:
	.string "Pokémon sammeln Erfahrung im\n"
	.string "Kampf und ändern ihre Form.$"

CherrygroveCity_EvolutionHouse_Text_Lass:
	.string "Pokémon verändern sich?\p"
	.string "Ich wäre schockiert, wenn\n"
	.string "das plötzlich passieren würde!$"
