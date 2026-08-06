CeruleanCity_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

CeruleanCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_CERULEAN_CITY
	end

CeruleanCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

CeruleanCity_PokemonCenter_1F_EventScript_Gentleman::
	msgbox CeruleanCity_PokemonCenter_1F_Text_EveryoneCallsBillPokemaniac, MSGBOX_NPC
	end

CeruleanCity_PokemonCenter_1F_EventScript_Rocker::
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons, MSGBOX_NPC
	end

CeruleanCity_PokemonCenter_1F_EventScript_Youngster::
	lock
	faceplayer
	famechecker FAMECHECKER_BILL, 1
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons
	release
	end

CeruleanCity_PokemonCenter_1F_EventScript_Lass::
	msgbox CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs, MSGBOX_NPC
	end

CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons::
	.string "Dieser Bill!\p"
	.string "Ich hörte, für seltene Pokémon\n"
	.string "würde er alles tun!$"

CeruleanCity_PokemonCenter_1F_Text_EveryoneCallsBillPokemaniac::
	.string "Hat man dir schon von Bill\n"
	.string "erzählt?\p"
	.string "Jeder nennt ihn den Pokémaniac!\p"
	.string "Aber ich glaube, die Leute sind\n"
	.string "bloß neidisch auf Bill.\p"
	.string "Wer würde denn nicht mit seinen\n"
	.string "Pokémon prahlen?$"

CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons::
	.string "Bill besitzt viele Pokémon!\p"
	.string "Er hat einige sehr seltene in\n"
	.string "seiner Sammlung!$"

CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs::
	.string "Warum gehst du nicht nach oben und\n"
	.string "tauschst Pokémon mit deinen\l"
	.string "Freunden?\l"
	.string "Dadurch erhöht sich die Vielfalt\l"
	.string "deiner Pokémon.\p"
	.string "Der Level der Pokémon, die du\n"
	.string "durch Tausch erhältst, steigt\l"
	.string "schnell.$"

