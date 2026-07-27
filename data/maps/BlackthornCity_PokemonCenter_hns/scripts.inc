BlackthornCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, BlackthornCity_PokemonCenter_OnTransition
	.byte 0

BlackthornCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_BLACKTHORN_CITY_HNS
	end

BlackthornCity_PokemonCenter_EventScript_Gent::
	msgbox BlackthornCity_PokemonCenter1FGentlemanText, MSGBOX_NPC
	end

BlackthornCity_PokemonCenter_EventScript_Twin::
	msgbox BlackthornCity_PokemonCenter1FTwinText, MSGBOX_NPC
	end

BlackthornCity_PokemonCenter1FGentlemanText:
	.string "Tief im Inneren des fernen Indigo\n"
	.string "Plateaus befindet sich die Pokémon Liga.\p"
	.string "Die fähigsten Trainer des ganzen Landes\n"
	.string "kommen dort zusammen!$"

BlackthornCity_PokemonCenter1FTwinText:
	.string "Es gibt da eine ganz bestimmte Attacke,\n"
	.string "die ich meinem Pokémon unbedingt\l"
	.string "beibringen möchte. Also suchte ich den\l"
	.string "Attacken-Verlerner auf und habe es\l"
	.string "eine VM-Attacke vergessen lassen.$"
