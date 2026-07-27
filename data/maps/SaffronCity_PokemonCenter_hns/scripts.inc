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
	.string "Wie sehen eigentlich die\n"
	.string "Pokémon-Center in Johto aus?\p"
	.string "…Oh, aha. Sie unterscheiden sich also\n"
	.string "nicht so sehr von denen in Kanto…\p"
	.string "Dann sage ich meinem Kumpel aus Johto,\n"
	.string "dass er ein MARILL fangen und es mit\l"
	.string "mir tauschen soll!$"

SaffronCity_PokemonCenter1F_Text_Fisher:
	.string "Ich bin gerade durch den Felstunnel\n"
	.string "gekommen. In der Umgebung vom\l"
	.string "Kraftwerk war irgendetwas im Gange…$"

SaffronCity_PokemonCenter1F_Text_Fisher_ReturnedPart:
	.string "Die Höhlen stürzen leicht ein.\p"
	.string "In letzter Zeit sind einige Höhlen\n"
	.string "verschwunden. Wie\l"
	.string "die Höhle vor AZURIA CITY.\p"
	.string "Für einen Profi-\n"
	.string "WANDERER ist das Grundwissen.$"

SaffronCity_PokemonCenter1F_Text_Youngster:
	.string "Saffronia City ist berühmt für die\n"
	.string "Zentrale der Silph Co. und den\l"
	.string "Magnetzug-Bahnhof!$"
