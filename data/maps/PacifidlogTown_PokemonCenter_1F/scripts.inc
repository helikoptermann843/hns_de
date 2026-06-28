PacifidlogTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PacifidlogTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_PACIFIDLOG_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Girl::
	msgbox PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Woman::
	msgbox PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_EventScript_OldMan::
	msgbox PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard:
	.string "Welche Farbe hat dein TRAINERPASS?\n"
	.string "Meiner ist kupferrot.$"

PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola:
	.string "FLOSSBRUNN schwimmt auf einer\n"
	.string "Kolonie von CORASONN.\p"
	.string "Glaubst du mir das?$"

PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats:
	.string "Man sagt, die Vorfahren der Menschen\n"
	.string "in FLOSSBRUNN wurden an Bord von\l"
	.string "Schiffen geboren, lebten und starben\l"
	.string "auch dort.\p"
	.string "Diese Lebensart ist verständlich, denn\n"
	.string "sie waren auf der Suche nach etwas.$"

