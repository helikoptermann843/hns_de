BlackthornCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, BlackthornCity_PokemonCenter_OnTransition
	.byte 0

BlackthornCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_BLACKTHORN_CITY_HNS
	end

BlackthornCity_PokemonCenter_EventScript_Gent::
	msgbox BlackthornCity_PokemonCenter1FGentlemanText, MSGBOX_NPC
	end

BlackthornCity_PokemonCenter_EventScript_Twin::
	msgbox BlackthornCity_PokemonCenter1FTwinText, MSGBOX_NPC
	end

BlackthornCity_PokemonCenter1FGentlemanText:
	.string "Tief im inneren des INDIGO-\n"
	.string "PLATEAU ist die POKéMON-LIGA.\p"
	.string "Die besten Trainer von überall\n"
	.string "her versammeln sich dort.$"

BlackthornCity_PokemonCenter1FTwinText:
	.string "Ich habe meinem POKéMON eine\n"
	.string "VM beigebracht.\p"
	.string "Später ging ich zum Attacken-\n"
	.string "verlerner, um sie vergessen zu lassen.$"
