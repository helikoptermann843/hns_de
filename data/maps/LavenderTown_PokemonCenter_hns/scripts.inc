LavenderTown_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_PokemonCenter_OnTransition
	.byte 0

LavenderTown_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_LAVENDER_TOWN_HNS
	end

LavenderTown_PokemonCenter_EventScript_Gent::
	msgbox LavenderTown_PokemonCenter1F_Text_Gentleman, MSGBOX_NPC
	end

LavenderTown_PokemonCenter_EventScript_Teacher::
	msgbox LavenderTown_PokemonCenter1F_Text_Teacher, MSGBOX_NPC
	end

LavenderTown_PokemonCenter_EventScript_Youngster::
	goto_if_set FLAG_RETURNED_MACHINE_PART, LavenderTown_PokemonCenter_EventScript_YoungsterReturnedMachinePart
	msgbox LavenderTown_PokemonCenter1F_Text_Youngster, MSGBOX_NPC
	end

LavenderTown_PokemonCenter_EventScript_YoungsterReturnedMachinePart::
	msgbox LavenderTown_PokemonCenter1F_Text_Youngster_ReturnedMachinePart, MSGBOX_NPC
	end

LavenderTown_PokemonCenter1F_Text_Gentleman:
	.string "Im Norden von LAVANDIA ist der\n"
	.string "FELSTUNNEL. Er führt zum KRAFTWERK.$"

LavenderTown_PokemonCenter1F_Text_Teacher:
	.string "Es gibt eine\n"
	.string "Musiksendung im Radio, die Melodien\l"
	.string "auf der - FLÖTE sendet.\p"
	.string "Ach ja? Ah, dein\n"
	.string "Radio braucht ein ZUSATZSET, damit du\l"
	.string "das empfangen kannst.$"

LavenderTown_PokemonCenter1F_Text_Youngster:
	.string "Wenn das KRAFTWERK\n"
	.string "nicht funktioniert, läuft der\l"
	.string "MAGNETZUG auch nicht…\p"
	.string "Das bedeutet, dass\n"
	.string "auch die RADIOSTATION nicht\l"
	.string "auf Sendung gehen kann…$"

LavenderTown_PokemonCenter1F_Text_Youngster_ReturnedMachinePart:
	.string "Der INTENDANT der\n"
	.string "RADIOSTATION war hoch erfreut.\p"
	.string "Er sagte, sie seien wieder auf\n"
	.string "Sendung, weil das\l"
	.string "KRAFTWERK wieder einwandfrei arbeite.$"
