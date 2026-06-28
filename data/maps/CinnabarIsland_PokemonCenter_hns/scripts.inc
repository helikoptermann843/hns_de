CinnabarIsland_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonCenter_OnTransition
	.byte 0

CinnabarIsland_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND_HNS
	end

CinnabarIsland_PokemonCenter_EventScript_Cooltrainer::
	msgbox CinnabarIsland_PokemonCenter1F_Text_CooltrainerF, MSGBOX_NPC
	end

CinnabarIsland_PokemonCenter_EventScript_Fisher::
	msgbox CinnabarIsland_PokemonCenter1F_Text_Fisher, MSGBOX_NPC
	end

CinnabarIsland_PokemonCenter1F_Text_CooltrainerF:
	.string "Der Arenaleiter der Zinnoberinsel\n"
	.string "Pyro lebt angeblich alleine auf den\l"
	.string "Seeschauminseln in einer Höhle…$"

CinnabarIsland_PokemonCenter1F_Text_Fisher:
	.string "Es ist ein Jahr her,\n"
	.string "seit des Vulkanausbruchs.$"
