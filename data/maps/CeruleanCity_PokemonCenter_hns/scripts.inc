CeruleanCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_PokemonCenter_OnTransition
	.byte 0

CeruleanCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_CERULEAN_CITY_HNS
	end

CeruleanCity_PokemonCenter_EventScript_Nerd::
	msgbox CeruleanCity_PokemonCenter1F_Text_SuperNerd, MSGBOX_NPC
	end

CeruleanCity_PokemonCenter_EventScript_Guy::
	msgbox CeruleanCity_PokemonCenter1F_Text_GymGuide, MSGBOX_NPC
	end

CeruleanCity_PokemonCenter1F_Text_SuperNerd:
	.string "Für Kämpfe benutze ich lieber\n"
	.string "Pokémon, die ich trainiert habe,\p"
	.string "auch wenn sie schwächer sind als\n"
	.string "manche neu gefangenen Pokémon.$"

CeruleanCity_PokemonCenter1F_Text_GymGuide:
	.string "Der Magnetzug fährt über 500 km/h.\n"
	.string "Er verbindet KANTO und JOHTO in\n"
	.string "Blitzgeschwindigkeit.\p"
	.string "So wird JOHTO wirklich zugänglich.$"
