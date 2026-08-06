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
	.string "Warst du schon in der Spielhalle?\p"
	.string "Du solltest nicht allein dorthin\n"
	.string "gehen! Nimm einen Freund mit!$"

TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape::
	.string "Auf Eiland Zwei leben nicht\n"
	.string "viele Menschen!\p"
	.string "Es gibt da eine alte Dame, die\n"
	.string "draußen am Kap wohnt!\p"
	.string "Sie ist schon immer da gewesen!$"

