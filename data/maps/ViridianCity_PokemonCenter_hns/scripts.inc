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
	.string "Wo um Himmels Willen ist der\p"
	.string "ARENALEITER von\n"
	.string "VERTANIA? Ich will ihn herausfordern.$"

ViridianCity_PokemonCenter_Text_1FCooltrainerM_BlueReturned:
	.string "In der PKMN-ARENA\n"
	.string "von VERTANIA gibt es keine TRAINER.\p"
	.string "Der ARENALEITER vertritt den\p"
	.string "Grundsatz, auch\n"
	.string "ohne die Hilfe von Untergebenen\l"
	.string "gewinnen zu können.$"

ViridianCity_PokemonCenter_Text_1FCooltrainerF:
	.string "Ich habe gehört,\n"
	.string "dass die PKMNARENA auf der\n"
	.string "ZINNOBERINSEL verschwunden ist.\p"
	.string "Ich frage mich,\n"
	.string "was aus PYRO, dem ARENALEITER geworden\l"
	.string "ist.$"

ViridianCity_PokemonCenter_Text_1FBugCatcher:
	.string "Mein großer Traum\n"
	.string "ist es, ARENALEITER zu werden.$"
