CinnabarIsland_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

CinnabarIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND
	end

CinnabarIsland_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

CinnabarIsland_PokemonCenter_1F_EventScript_Gentleman::
	msgbox CinnabarIsland_PokemonCenter_1F_Text_VisitUnionRoom, MSGBOX_NPC
	end

CinnabarIsland_PokemonCenter_1F_EventScript_CooltrainerF::
	msgbox CinnabarIsland_PokemonCenter_1F_Text_CinnabarGymLocked, MSGBOX_NPC
	end

CinnabarIsland_PokemonCenter_1F_EventScript_Youngster::
	msgbox CinnabarIsland_PokemonCenter_1F_Text_EvolutionCanWaitForNewMoves, MSGBOX_NPC
	end

CinnabarIsland_PokemonCenter_1F_EventScript_Bill::
	lock
	faceplayer
	msgbox CinnabarIsland_PokemonCenter_1F_Text_ReadyToSailToOneIsland, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonCenter_1F_EventScript_NotReadyToSail
	msgbox CinnabarIsland_PokemonCenter_1F_Text_LetsGo
	closemessage
	playbgm MUS_FOLLOW_ME, 1
	savebgm MUS_FOLLOW_ME
	setflag FLAG_DONT_TRANSITION_MUSIC
	setflag FLAG_HIDE_CINNABAR_POKECENTER_BILL
	delay 20
	call_if_eq VAR_FACING, DIR_SOUTH, CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillSouth
	call_if_eq VAR_FACING, DIR_EAST, CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillEast
	call_if_eq VAR_FACING, DIR_WEST, CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillWest
	removeobject LOCALID_CINNABAR_POKEMON_CENTER_BILL
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1
	clearflag FLAG_HIDE_CINNABAR_BILL
	warp MAP_CINNABAR_ISLAND, 14, 11
	waitstate
	release
	end

CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillSouth::
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExit
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitSouth
	waitmovement 0
	return

CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillEast::
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExitEast
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitEast
	waitmovement 0
	return

CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillWest::
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExit
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitWest
	waitmovement 0
	return

CinnabarIsland_PokemonCenter_1F_EventScript_NotReadyToSail::
	msgbox CinnabarIsland_PokemonCenter_1F_Text_OhNotDoneYet
	release
	end

CinnabarIsland_PokemonCenter_1F_Movement_BillExit::
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	delay_8
	set_invisible
	step_end

CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitSouth::
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	delay_16
	walk_down
	step_end

CinnabarIsland_PokemonCenter_1F_Movement_BillExitEast::
	walk_up
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	delay_8
	set_invisible
	step_end

CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitEast::
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	delay_8
	walk_down
	delay_8
	set_invisible
	step_end

CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitWest::
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	delay_16
	walk_down
	step_end

CinnabarIsland_PokemonCenter_1F_Text_CinnabarGymLocked::
	.string "Ich wollte die Arena der\n"
	.string "Zinnoberinsel besuchen,\l"
	.string "aber die Türen sind verschlossen.\l"
	.string "Es muss irgendwo einen\l"
	.string "Schlüssel geben.\p"
	.string "Vielleicht in dieser abgebrannten\n"
	.string "Villa?\p"
	.string "Der Freund des Arenaleiters\n"
	.string "hat dort gewohnt.$"

CinnabarIsland_PokemonCenter_1F_Text_VisitUnionRoom::
	.string "Hast du viele Freunde?\p"
	.string "Sich mit seinen nahen Freunden\n"
	.string "via Link-Kabel treffen macht\l"
	.string "Spaß!\l"
	.string "Aber warst du schon im\l"
	.string "Konnex-Klub?\p"
	.string "Wer weiß, vielleicht schließt du\n"
	.string "dort neue Freundschaften?\p"
	.string "Ich denke ein Besuch im\n"
	.string "Konnex-Klub ist seine\l"
	.string "Zeit wert.$"

CinnabarIsland_PokemonCenter_1F_Text_EvolutionCanWaitForNewMoves::
	.string "Brichst du ihre Entwicklung ab,\n"
	.string "dann können deine Pokémon\l"
	.string "dennoch weitere Attacken lernen.\p"
	.string "Die weitere Entwicklung kann warten,\n"
	.string "bis sie neue Attacken gelernt\l"
	.string "haben!$"

CinnabarIsland_PokemonCenter_1F_Text_ReadyToSailToOneIsland::
	.string "Bill: Du hast mich warten lassen!\n"
	.string "Bist du bereit, nach Eiland Eins\l"
	.string "aufzubrechen?$"

CinnabarIsland_PokemonCenter_1F_Text_OhNotDoneYet::
	.string "Oh, du bist noch nicht bereit?$"

CinnabarIsland_PokemonCenter_1F_Text_LetsGo::
	.string "Nun gut!\n"
	.string "Leinen los!$"

