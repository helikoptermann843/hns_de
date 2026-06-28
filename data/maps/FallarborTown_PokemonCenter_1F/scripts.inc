FallarborTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FallarborTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

FallarborTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_FALLARBOR_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

FallarborTown_PokemonCenter_1F_EventScript_Girl::
	msgbox FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown, MSGBOX_NPC
	end

FallarborTown_PokemonCenter_1F_EventScript_ExpertM::
	msgbox FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees, MSGBOX_NPC
	end

FallarborTown_PokemonCenter_1F_EventScript_Lanette::
	lock
	faceplayer
	msgbox FallarborTown_PokemonCenter_1F_Text_LanetteGreeting, MSGBOX_DEFAULT
	closemessage
	switch VAR_FACING
	case DIR_NORTH, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth
	case DIR_WEST, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest
	end

FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth::
	applymovement LOCALID_FALLARBOR_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth
	waitmovement 0
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
	end

FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest::
	applymovement LOCALID_FALLARBOR_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest
	waitmovement 0
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
	end

FallarborTown_PokemonCenter_1F_EventScript_LanetteExited::
	playse SE_SLIDING_DOOR
	removeobject LOCALID_FALLARBOR_LANETTE
	clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
	release
	end

FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth:
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

FallarborTown_PokemonCenter_1F_Text_LanetteGreeting:
	.string "Oh, hallo.\n"
	.string "Wer bist du?\p"
	.string "Du heißt {PLAYER}{KUN}?\n"
	.string "Ich sehe schon, du bist ein TRAINER.\p"
	.string "Und das bedeutet, du nutzt das\n"
	.string "POKéMON-Lagerungs-System, das ich\l"
	.string "entwickelt habe.\p"
	.string "Ich bin durch simple Deduktion zu\n"
	.string "diesem Schluss gekommen.\p"
	.string "Du hast mich angesprochen, weil du\n"
	.string "mit diesem PC arbeiten willst.\p"
	.string "Ach, ich habe mich gar nicht\n"
	.string "vorgestellt. Ich bin LANETTE.\p"
	.string "Ich bin ehrlich erfreut, dich kennen\l"
	.string "zu\n"
	.string "lernen. Und ich freue mich, dass du\p"
	.string "das\l"
	.string "Lagerungs-System benutzt.\p"
	.string "Wenn du magst, besuche mich doch mal.\n"
	.string "Ich wohne an der ROUTE 114.$"

FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown:
	.string "Ich frage mich, wie die POKéMON wohl\n"
	.string "vor langer, langer Zeit aussahen.\p"
	.string "Vielleicht kann mir der FOSSILMANIAC\n"
	.string "am Ortsrand etwas dazu sagen.$"

FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees:
	.string "Auf den Feldern von LAUBWECHSELFELD\n"
	.string "haben wir widerstandsfähige Bäume\p"
	.string "gepflanzt, die auch in der Vulkanasche\n"
	.string "gedeihen.$"

