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
	.string "Computerbasiertes Pokémon-Lagerungs-\n"
	.string "System…\p"
	.string "Wer auch immer dies entwickelt hat,\n"
	.string "muss ein wahrer Zauberer sein!$"

PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP:
	.string "Als mein Pokémon eine Sinelbeere\n"
	.string "aß, wurden seine KP aufgefüllt!$"

PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon:
	.string "Es gibt viele Typen von Pokémon.\p"
	.string "Jeder Typ hat seine Stärken und\n"
	.string "Schwächen gegenüber anderen Typen.\p"
	.string "Je nach Typ des Pokémon kann der\n"
	.string "Kampf leicht oder schwer sein.$"

PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType:
	.string "Dein Geckarbor ist beispielsweise ein\n"
	.string "Pflanzen-Typ.\p"
	.string "Es ist stark gegenüber dem Wasser-\n"
	.string "und Boden-Typ.\p"
	.string "Aber es ist schwach gegenüber den\n"
	.string "Feuer-Pokémon.$"

PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType:
	.string "Dein Flemmli ist beispielsweise ein\n"
	.string "Feuer-Typ.\p"
	.string "Es ist stark gegenüber dem Pflanzen-\n"
	.string "und Käfer-Typ.\p"
	.string "Aber es ist schwach gegenüber den\n"
	.string "Wasser-Pokémon.$"

PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType:
	.string "Dein Hydropi ist beispielsweise ein\n"
	.string "Wasser-Typ.\p"
	.string "Es ist stark gegenüber dem Feuer-Typ.\p"
	.string "Aber es ist schwach gegenüber den\n"
	.string "Pflanzen- und Elektro-Pokémon.$"

