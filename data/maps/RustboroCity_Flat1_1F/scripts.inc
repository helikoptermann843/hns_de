RustboroCity_Flat1_1F_MapScripts::
	.byte 0

RustboroCity_Flat1_1F_EventScript_Man::
	msgbox RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility, MSGBOX_NPC
	end

RustboroCity_Flat1_1F_EventScript_Woman::
	msgbox RustboroCity_Flat1_1F_Text_PokemonStrange, MSGBOX_NPC
	end

RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility:
	.string "Jedes POKéMON besitzt eine spezielle\n"
	.string "Begabung, die es einsetzen kann.$"

RustboroCity_Flat1_1F_Text_PokemonStrange:
	.string "POKéMON sind sehr seltsame Geschöpfe.$"

