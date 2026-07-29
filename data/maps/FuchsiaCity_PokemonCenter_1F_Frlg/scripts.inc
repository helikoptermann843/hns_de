FuchsiaCity_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FuchsiaCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_FUCHSIA_CITY
	end

FuchsiaCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

FuchsiaCity_PokemonCenter_1F_EventScript_Man::
	msgbox FuchsiaCity_PokemonCenter_1F_Text_CantBecomeGoodTrainerWithOneMon, MSGBOX_NPC
	end

FuchsiaCity_PokemonCenter_1F_EventScript_CooltrainerF::
	msgbox FuchsiaCity_PokemonCenter_1F_Text_PokemonLeagueWestOfViridian, MSGBOX_NPC
	end

FuchsiaCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox FuchsiaCity_PokemonCenter_1F_Text_VisitSafariZoneForPokedex, MSGBOX_NPC
	end

FuchsiaCity_PokemonCenter_1F_Text_CantBecomeGoodTrainerWithOneMon::
	.string "Man kann nicht mit nur einem starken\n"
	.string "Pokémon gewinnen!\p"
	.string "Es ist mühsam, doch alle Pokémon\n"
	.string "sollten ungefähr den gleichen Level\l"
	.string "haben.$"

FuchsiaCity_PokemonCenter_1F_Text_PokemonLeagueWestOfViridian::
	.string "Westlich von Vertania City liegt\n"
	.string "ein Pfad.\p"
	.string "Er führt zum Hauptquartier der\n"
	.string "Pokémon Liga, der höchsten Instanz\l"
	.string "für Trainer.$"

FuchsiaCity_PokemonCenter_1F_Text_VisitSafariZoneForPokedex::
	.string "Du studierst die Pokémon?\n"
	.string "Dann gehe in die Safari-Zone.\p"
	.string "Dort gibt es viele seltene Pokémon.$"

