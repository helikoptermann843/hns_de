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
	.string "Egal wie schwach sie auch sein mögen,\n"
	.string "ich kämpfe lieber mit Pokémon, die ich\l"
	.string "über lange Zeit selbst trainiert habe\l"
	.string "als mit solchen, die ich gerade erst\l"
	.string "gefangen habe!$"

CeruleanCity_PokemonCenter1F_Text_GymGuide:
	.string "Der Magnetzug reist mit einer\n"
	.string "Geschwindigkeit von 550 km/h in\l"
	.string "null Komma nichts zwischen Kanto\l"
	.string "und Johto hin und her.\p"
	.string "So kommt man jederzeit ohne\n"
	.string "Probleme nach Johto.$"
