PetalburgCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PetalburgCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_PETALBURG_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_PETALBURG_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
	msgbox PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem, MSGBOX_NPC
	end

PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
	end

PetalburgCity_PokemonCenter_1F_EventScript_Woman::
	lock
	faceplayer
	msgbox PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon, MSGBOX_DEFAULT
	specialvar VAR_RESULT, IsStarterInParty
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo::
	call_if_eq VAR_STARTER_MON, 0, PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType
	call_if_eq VAR_STARTER_MON, 1, PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType
	call_if_eq VAR_STARTER_MON, 2, PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType::
	msgbox PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType, MSGBOX_DEFAULT
	return

PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType::
	msgbox PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType, MSGBOX_DEFAULT
	return

PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType::
	msgbox PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType, MSGBOX_DEFAULT
	return

PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem:
	.string "Computerbasiertes POKéMON-Lagerungs-\n"
	.string "System…\p"
	.string "Wer auch immer dies entwickelt hat,\n"
	.string "muss ein wahrer Zauberer sein!$"

PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP:
	.string "Als mein POKéMON eine SINELBEERE\n"
	.string "aß, wurden seine KP aufgefüllt!$"

PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon:
	.string "Es gibt viele Typen von POKéMON.\p"
	.string "Jeder Typ hat seine Stärken und\n"
	.string "Schwächen gegenüber anderen Typen.\p"
	.string "Je nach Typ des POKéMON kann der\n"
	.string "Kampf leicht oder schwer sein.$"

PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType:
	.string "Dein GECKARBOR ist beispielsweise ein\n"
	.string "PFLANZEN-Typ.\p"
	.string "Es ist stark gegenüber dem WASSER-\n"
	.string "und BODEN-Typ.\p"
	.string "Aber es ist schwach gegenüber den\n"
	.string "FEUER-POKéMON.$"

PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType:
	.string "Dein FLEMMLI ist beispielsweise ein\n"
	.string "FEUER-Typ.\p"
	.string "Es ist stark gegenüber dem PFLANZEN-\n"
	.string "und KÄFER-Typ.\p"
	.string "Aber es ist schwach gegenüber den\n"
	.string "WASSER-POKéMON.$"

PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType:
	.string "Dein HYDROPI ist beispielsweise ein\n"
	.string "WASSER-Typ.\p"
	.string "Es ist stark gegenüber dem FEUER-Typ.\n"
	.string "\p"
	.string "Aber es ist schwach gegenüber den\n"
	.string "PFLANZEN- und ELEKTRO-POKéMON.$"

