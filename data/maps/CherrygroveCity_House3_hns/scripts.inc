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
	.string "Pokémon sammeln über Kämpfe Erfahrung\n"
	.string "und verändern schließlich ihre Gestalt.$"

CherrygroveCity_EvolutionHouse_Text_Lass:
	.string "Pokémon verändern sich?\p"
	.string "Ich wäre schockiert, wenn\n"
	.string "das plötzlich passieren würde!$"
