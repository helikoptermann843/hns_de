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
	.string "Die Leute hier wurden beraubt.\p"
	.string "Das TEAM ROCKET steckt hinter dem\n"
	.string "abscheulichen Verbrechen!\p"
	.string "Sogar die POLIZEI ist gegen das\n"
	.string "TEAM ROCKET machtlos!$"

CeruleanCity_PokemonCenter_1F_Text_EveryoneCallsBillPokemaniac::
	.string "Hat man dir schon von BILL\n"
	.string "erzählt?\p"
	.string "Jeder nennt ihn den POKéMANIAC!\p"
	.string "Aber ich glaube, die Leute sind\n"
	.string "bloß neidisch auf BILL.\p"
	.string "Wer würde denn nicht mit seinen\n"
	.string "POKéMON prahlen?$"

CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons::
	.string "BILL besitzt viele POKéMON!\p"
	.string "Er hat einige sehr seltene in\n"
	.string "seiner Sammlung!$"

CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs::
	.string "POKéMON können Büsche mit dem\n"
	.string "ZERSCHNEIDER klein hacken.\p"
	.string "Auch der kleine Baum vor dem\n"
	.string "Geschäft kann entfernt werden.\p"
	.string "Aber es gibt auch einen anderen\n"
	.string "Weg!$"

