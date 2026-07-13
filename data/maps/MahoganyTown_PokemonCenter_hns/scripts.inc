MahoganyTown_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MahoganyTown_PokemonCenter_OnTransition
	.byte 0

MahoganyTown_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_MAHOGANY_TOWN_HNS
	end

MahoganyTown_PokemonCenter_EventScript_Hiker::
	msgbox MahoganyTown_PokemonCenter_Text_PokefanM, MSGBOX_NPC
	end
	
MahoganyTown_PokemonCenter_EventScript_Boy::
	msgbox MahoganyTown_PokemonCenter_Text_Youngster, MSGBOX_NPC
	end

MahoganyTown_PokemonCenter_EventScript_Girl::
	msgbox MahoganyTown_PokemonCenter_Text_CooltrainerF, MSGBOX_NPC
	end

MahoganyTown_PokemonCenter_Text_PokefanM:
	.string "Wie? TEAM ROCKET ist wieder da?\p"
	.string "Ich sah einige Männer in\n"
	.string "Schwarz am SEE DES ZORNS…$"

MahoganyTown_PokemonCenter_Text_Youngster:
	.string "Ich verhindere, dass sich\n"
	.string "meine Pokémon zu rasch\l"
	.string "entwickeln.\p"
	.string "Ich bringe ihnen verschiedene\n"
	.string "Attacken bei, bevor ich\l"
	.string "sie sich entwickeln lasse.$"

MahoganyTown_PokemonCenter_Text_CooltrainerF:
	.string "Pokémon werden stärker, wenn sie\n"
	.string "sich entwickeln. Aber sie erlernen\l"
	.string "neue Attacken auch langsamer.$"
