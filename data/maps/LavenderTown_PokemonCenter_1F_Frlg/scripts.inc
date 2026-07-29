LavenderTown_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LavenderTown_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_LAVENDER_TOWN
	end

LavenderTown_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

LavenderTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox LavenderTown_PokemonCenter_1F_Text_RocketsDoAnythingForMoney, MSGBOX_NPC
	end

LavenderTown_PokemonCenter_1F_EventScript_Lass::
	msgbox LavenderTown_PokemonCenter_1F_Text_CubonesMotherKilledByRockets, MSGBOX_NPC
	end

LavenderTown_PokemonCenter_1F_EventScript_Youngster::
	msgbox LavenderTown_PokemonCenter_1F_Text_PeoplePayForCuboneSkulls, MSGBOX_NPC
	end

LavenderTown_PokemonCenter_1F_Text_RocketsDoAnythingForMoney::
	.string "Das Team Rocket würde für Gold\n"
	.string "alles tun!$"

LavenderTown_PokemonCenter_1F_Text_CubonesMotherKilledByRockets::
	.string "Ich sah, wie die Mutter eines\n"
	.string "jungen Tragosso vergeblich\l"
	.string "versuchte, dem Team Rocket zu\l"
	.string "entkommen!$"

LavenderTown_PokemonCenter_1F_Text_PeoplePayForCuboneSkulls::
	.string "Tragosso tragen Schädelmasken!\p"
	.string "Man zahlt für sie eine Menge Geld!$"

