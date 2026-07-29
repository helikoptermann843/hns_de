ViridianCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_PokemonCenter_OnTransition
	.byte 0

ViridianCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_VIRIDIAN_CITY_HNS
	end

ViridianCity_PokemonCenter_EventScript_CooltrainerM::
	goto_if_set FLAG_HIDE_CINNABAR_BLUE, VirianCity_EventScript_GymGrampsBlue
	msgbox ViridianCity_PokemonCenter_Text_1FCooltrainerM, MSGBOX_NPC
	end

ViridianCity_PokemonCenter_EventScript_CooltrainerMBlue::
	msgbox ViridianCity_PokemonCenter_Text_1FCooltrainerM_BlueReturned, MSGBOX_NPC
	end

ViridianCity_PokemonCenter_EventScript_CooltrainerF::
	msgbox ViridianCity_PokemonCenter_Text_1FCooltrainerF, MSGBOX_NPC
	end

ViridianCity_PokemonCenter_EventScript_BugCatcher::
	msgbox ViridianCity_PokemonCenter_Text_1FBugCatcher, MSGBOX_NPC
	end

ViridianCity_PokemonCenter_Text_1FCooltrainerM:
	.string "Wo lungert der Arenaleiter von\n"
	.string "Vertania City eigentlich herum?\l"
	.string "Ich wollte ihn doch herausfordern…$"

ViridianCity_PokemonCenter_Text_1FCooltrainerM_BlueReturned:
	.string "In der Pkmn-Arena\n"
	.string "von Vertania gibt es keine Trainer.\p"
	.string "Der Arenaleiter vertritt den\n"
	.string "Grundsatz, auch ohne die\l"
	.string "Hilfe von Untergebenen\l"
	.string "gewinnen zu können.$"

ViridianCity_PokemonCenter_Text_1FCooltrainerF:
	.string "Offensichtlich wurde die Pokémon-Arena\n"
	.string "auf der Zinnoberinsel zerstört.\p"
	.string "Ich frage mich, was wohl aus Pyro,\n"
	.string "dem Arenaleiter, geworden ist.$"

ViridianCity_PokemonCenter_Text_1FBugCatcher:
	.string "Mein großer Traum ist es,\n"
	.string "Arenaleiter zu werden!$"
