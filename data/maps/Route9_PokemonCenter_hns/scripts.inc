Route9_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Route9_PokemonCenter_EventScript_Engineer1::
	msgbox Route9_PokemonCenter_Text_Engineer1, MSGBOX_NPC
	end

Route9_PokemonCenter_EventScript_Engineer2::
	msgbox Route9_PokemonCenter_Text_Engineer2, MSGBOX_NPC
	end

Route9_PokemonCenter_Text_Engineer1:
	.string "Manchmal kommen wir Ingenieure\n"
	.string "hierher, um eine Pause zu machen\n"
	.string "oder um dem CHEF zu entkommen.\p"
	.string "Der Typ ist verrückt.$"

Route9_PokemonCenter_Text_Engineer2:
	.string "Das Kraftwerk ist sehr abgelegen,\n"
	.string "darum reise ich weit für die Arbeit.$"
