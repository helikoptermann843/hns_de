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
	.string "OLIVIANA CITY-CAFE nebenan ist sehr\n"
	.string "großzügig.\p"
	.string "Er hat meinem Pokémon STÄRKE\p"
	.string "beigebracht. Jetzt\n"
	.string "kann es Felsen bewegen.$"

OlivineCity_Text_PokecenterTeacher:
	.string "Da gibt es jeman-\n"
	.string "den in ANEMONIA CITY jenseits des\n"
	.string "Meeres.\p"
	.string "Ich habe gehört,\n"
	.string "wie er mit seinen seltenen Pokémon\l"
	.string "angegeben hat.$"
