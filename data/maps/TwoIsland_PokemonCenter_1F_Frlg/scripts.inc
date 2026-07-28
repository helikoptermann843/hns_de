TwoIsland_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

TwoIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_TWO_ISLAND
	end

TwoIsland_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

TwoIsland_PokemonCenter_1F_EventScript_GBAKid::
	msgbox TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner, MSGBOX_NPC
	end

TwoIsland_PokemonCenter_1F_EventScript_BugCatcher::
	msgbox TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape, MSGBOX_NPC
	end

TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner::
	.string "Es ist {PLAYER}!\n"
	.string "Es ist {PLAYER}!\p"
	.string "Ich möchte eines Tages wie\n"
	.string "{PLAYER} sein!$"

TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape::
	.string "Keiner ist mehr ein Fan von\n"
	.string "{PLAYER}…\p"
	.string "Das heißt aber auch, dass ich\n"
	.string "{PLAYER} für mich alleine habe!\p"
	.string "Yo! Los!\n"
	.string "Mein Ein und Alles, {PLAYER}!$"

