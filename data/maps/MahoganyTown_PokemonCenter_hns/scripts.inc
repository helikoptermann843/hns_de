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
	.string "Ich sah einige\n"
	.string "Männer in Schwarz am SEE DES ZORNS…$"

MahoganyTown_PokemonCenter_Text_Youngster:
	.string "Ich verhindere,\n"
	.string "dass sich meine Pokémon zu rasch\n"
	.string "entwickeln.\p"
	.string "Ich bringe ihnen\n"
	.string "verschiedene Attacken bei, bevor ich\l"
	.string "sie sich entwickeln lasse.$"

MahoganyTown_PokemonCenter_Text_CooltrainerF:
	.string "Pokémon werden stärker, wenn sie\p"
	.string "sich entwickeln. Aber sie erlernen\p"
	.string "neue Attacken auch langsamer.$"
