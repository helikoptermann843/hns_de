MtSilver_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtSilver_PokemonCenter_OnTransition
	.byte 0

MtSilver_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_MT_SILVER_HNS
	end

MtSilver_PokemonCenter_EventScript_Meara::
	msgbox MtSilver_PokemonCenter_Text_Meara, MSGBOX_NPC
	end

MtSilver_PokemonCenter_Text_Meara:
	.string "Ich bin eine Forscherin aus dem\n"
	.string "MUSEUM von MARMORIA.\p"
	.string "In dieser Gegend wurden ungewöhnlich\n"
	.string "viele Artefakte entdeckt, also bin\l"
	.string "ich hier, um Nachforschungen\p"
	.string "anzustellen.\p"
	.string "Es gibt keine Aufzeichnungen über\n"
	.string "eine Zivilisation um diesen Berg,\l"
	.string "doch die Artefakte sind mit großer\p"
	.string "Sicherheit von Menschen gemacht.\p"
	.string "Es ist wirklich äußerst rätselhaft.$"
