SaffronCity_PokemonCenter_hns_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonCenter_OnTransition
	.byte 0

SaffronCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_SAFFRON_CITY_HNS
	end

SaffronCity_PokemonCenter_EventScript_Teacher::
	msgbox SaffronCity_PokemonCenter1F_Text_Teacher, MSGBOX_NPC	
	end

SaffronCity_PokemonCenter_EventScript_Fisher::
	goto_if_set FLAG_RETURNED_MACHINE_PART, SaffronCity_PokemonCenter_EventScript_FisherReturnedMachinePart
	msgbox SaffronCity_PokemonCenter1F_Text_Fisher, MSGBOX_NPC	
	end
SaffronCity_PokemonCenter_EventScript_FisherReturnedMachinePart::
	msgbox SaffronCity_PokemonCenter1F_Text_Fisher_ReturnedPart, MSGBOX_NPC
	end

SaffronCity_PokemonCenter_EventScript_Youngster::
	msgbox SaffronCity_PokemonCenter1F_Text_Youngster, MSGBOX_NPC
	end

SaffronCity_PokemonCenter1F_Text_Teacher:
	.string "Wie sehen die\n"
	.string "Pokémon-CENTER in JOHTO aus?\p"
	.string "…Oh, aha. Sie unterscheiden sich\p"
	.string "kaum von denen in KANTO.\p"
	.string "Ich kann also nach\n"
	.string "JOHTO gehen, ohne mich zu sorgen!$"

SaffronCity_PokemonCenter1F_Text_Fisher:
	.string "Ich bin gerade\n"
	.string "durch den FELSTUNNEL gekommen.\p"
	.string "Da war irgendetwas\n"
	.string "im Gange beim KRAFTWERK.$"

SaffronCity_PokemonCenter1F_Text_Fisher_ReturnedPart:
	.string "Die Höhlen stürzen leicht ein.\p"
	.string "In letzter Zeit sind einige Höhlen\p"
	.string "verschwunden. Wie\n"
	.string "die Höhle vor AZURIA CITY.\p"
	.string "Für einen Profi-\n"
	.string "WANDERER ist das Grundwissen.$"

SaffronCity_PokemonCenter1F_Text_Youngster:
	.string "Die ZENTRALE von SILPH CO. und der\p"
	.string "MAGNETZUG-BAHNHOF sind sehenswürdige\p"
	.string "Orte in SAFFRONIA CITY.$"
