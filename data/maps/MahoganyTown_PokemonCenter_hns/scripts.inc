MahoganyTown_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MahoganyTown_PokemonCenter_OnTransition
	.byte 0

MahoganyTown_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_MAHOGANY_TOWN_HNS
	end

MahoganyTown_PokemonCenter_EventScript_Hiker::
	msgbox MahoganyTown_PokemonCenter_Text_PokefanM, MSGBOX_NPC
	end

MahoganyTown_PokemonCenter_EventScript_Boy::
	msgbox MahoganyTown_PokemonCenter_Text_Youngster, MSGBOX_NPC
	end

MahoganyTown_PokemonCenter_EventScript_Girl::
	msgbox MahoganyTown_PokemonCenter_Text_CooltrainerF, MSGBOX_NPC
	end

MahoganyTown_PokemonCenter_Text_PokefanM:
	.string "Wie? Team Rocket ist wieder da?\p"
	.string "Ich sah einige Männer in\n"
	.string "Schwarz am See des Zorns…$"

MahoganyTown_PokemonCenter_Text_Youngster:
	.string "Ich benutze den Entwicklungsstopp,\n"
	.string "damit sich meine Pokémon nicht zu rasch\l"
	.string "entwickeln, denn dann würden sie nur\l"
	.string "noch sehr langsam neue Attacken\l"
	.string "erlernen.$"

MahoganyTown_PokemonCenter_Text_CooltrainerF:
	.string "Wenn Pokémon sich entwickeln, werden\n"
	.string "sie zwar stärker, aber dafür brauchen\l"
	.string "sie auch länger, um neue Attacken zu\l"
	.string "erlernen.$"
