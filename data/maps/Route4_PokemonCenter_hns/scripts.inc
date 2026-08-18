Route4_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_PokemonCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Route4_PokemonCenter_OnTransition::
	setflag FLAG_VISITED_ROUTE4
	setrespawn HEAL_LOCATION_ROUTE4_HNS
	end
