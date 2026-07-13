OlivineCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OlivineCity_PokemonCenter_OnTransition
	.byte 0

OlivineCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_OLIVINE_CITY_HNS
	end

OlivineCity_EventScript_Fisher::
	lock
	faceplayer
	msgbox OlivineCity_Text_PokecenterFisher, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_Teacher::
	lock
	faceplayer
	msgbox OlivineCity_Text_PokecenterTeacher, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Text_PokecenterFisher:
	.string "Der MATROSE im\n"
	.string "OLIVIANA CITY-CAFE nebenan\l"
	.string "ist sehr großzügig.\p"
	.string "Er hat meinem Pokémon STÄRKE\n"
	.string "beigebracht. Jetzt\l"
	.string "kann es Felsen bewegen.$"

OlivineCity_Text_PokecenterTeacher:
	.string "Da gibt es jemanden in\n"
	.string "ANEMONIA CITY jenseits des\l"
	.string "Meeres.\p"
	.string "Ich habe gehört, wie er mit\n"
	.string "seinen seltenen Pokémon\l"
	.string "angegeben hat.$"
