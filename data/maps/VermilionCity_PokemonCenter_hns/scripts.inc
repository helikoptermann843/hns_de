VermilionCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_PokemonCenter_OnTransition
	.byte 0

VermilionCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_VERMILION_CITY_HNS
	end

VermilionPokeCenter_EventScript_FishingGuru::
	goto_if_set FLAG_HIDE_VERMILION_SNORLAX, VermilionPokeCenter_EventScript_FishingGuru2
	msgbox VermilionCity_PokemonCenter1F_Text_FishingGuru, MSGBOX_NPC
	end

VermilionPokeCenter_EventScript_FishingGuru2::
	msgbox VermilionCity_PokemonCenter1F_Text_FishingGuru_FoughtSnorlax, MSGBOX_NPC
	end

VermilionPokeCenter_EventScript_Sailor::
	msgbox VermilionCity_PokemonCenter1F_Text_Sailor, MSGBOX_NPC
	end

VermilionPokeCenter_EventScript_Bugcatcher::
	msgbox VermilionCity_PokemonCenter1F_Text_BugCatcher, MSGBOX_NPC
	end

VermilionCity_PokemonCenter1F_Text_FishingGuru:
	.string "Vor DIGDAs\n"
	.string "HÖHLE liegt ein schlafendes.\p"
	.string "Pokémon Das wäre eine\n"
	.string "fantastische Gelegenheit, es zu\p"
	.string "fangen! Aber wie weckt man es auf?$"

VermilionCity_PokemonCenter1F_Text_FishingGuru_FoughtSnorlax:
	.string "Vor DIGDAs HÖHLE lag ein\p"
	.string "schlafendes Pokémon.\p"
	.string "Aber jetzt scheint\n"
	.string "es verschwunden zu sein.$"

VermilionCity_PokemonCenter1F_Text_Sailor:
	.string "Auf dem SCHNELLBOOT findet man\p"
	.string "viele Trainer,\n"
	.string "gegen die man kämpfen kann.$"

VermilionCity_PokemonCenter1F_Text_BugCatcher:
	.string "Ach? Du hast da\n"
	.string "einige ORDEN, die ich noch nie gesehen\n"
	.string "habe.\p"
	.string "Ah, jetzt begreife ich es. Du hast\p"
	.string "sie in JOHTO erhalten.$"
