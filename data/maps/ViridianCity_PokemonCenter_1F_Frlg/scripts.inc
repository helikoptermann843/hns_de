ViridianCity_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

ViridianCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_VIRIDIAN_CITY
	end

ViridianCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

ViridianCity_PokemonCenter_1F_EventScript_Boy::
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown, MSGBOX_NPC
	end

ViridianCity_PokemonCenter_1F_EventScript_Gentleman::
	msgbox ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC, MSGBOX_NPC
	end

ViridianCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons, MSGBOX_NPC
	end

ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC::
	.string "Das ist cool!\n"
	.string "Digda hat einen Tunnel gegraben!\p"
	.string "Er führt direkt nach Vertania\n"
	.string "City!$"

ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown::
	.string "Im Felstunnel ist es stockdunkel\n"
	.string "und furchtbar gruselig!\p"
	.string "Wenn nur ein Pokémon mit einem\n"
	.string "Blitz für Licht sorgen könnte...$"

ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons::
	.string "Im Pokémon-Center kannst du müde,\n"
	.string "verletzte und besiegte Pokémon\l"
	.string "heilen!$"

