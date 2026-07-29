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
	.string "Wenn du den Felstunnel im Norden\n"
	.string "von Lavandia durchquerst, gelangst\l"
	.string "du zum Kraftwerk.$"

LavenderTown_PokemonCenter1F_Text_Teacher:
	.string "Es gibt eine\n"
	.string "Musiksendung im Radio, die Melodien\l"
	.string "auf der - Flöte sendet.\p"
	.string "Ach ja? Ah, dein\n"
	.string "Radio braucht ein Zusatzset, damit du\l"
	.string "das empfangen kannst.$"

LavenderTown_PokemonCenter1F_Text_Youngster:
	.string "Wenn das Kraftwerk ausfällt, läuft\n"
	.string "auch der Magnetzug nicht mehr.\p"
	.string "Die Radiosender können dann auch\n"
	.string "nicht mehr auf Sendung gehen.$"

LavenderTown_PokemonCenter1F_Text_Youngster_ReturnedMachinePart:
	.string "Der Intendant des Radiosenders war\n"
	.string "hocherfreut. Er sagte, sie seien wieder\l"
	.string "auf Sendung, weil das Kraftwerk\l"
	.string "wieder einwandfrei arbeite.$"
