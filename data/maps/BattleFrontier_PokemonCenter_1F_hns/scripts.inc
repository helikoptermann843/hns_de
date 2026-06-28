BattleFrontier_PokemonCenter_1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_PokemonCenter_1F_OnTransition_hns
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

BattleFrontier_PokemonCenter_1F_OnTransition_hns:
	setrespawn HEAL_LOCATION_BATTLE_FRONTIER_OUTSIDE_EAST_HNS
	end

BattleFrontier_PokemonCenter_1F_EventScript_Nurse_hns::
	setvar VAR_0x800B, LOCALID_FRONTIER_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_PokemonCenter_1F_EventScript_SchoolKid_hns::
	msgbox BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon_hns, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_EventScript_Man_hns::
	msgbox BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena_hns, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_EventScript_Picnicker_hns::
	msgbox BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge_hns, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_EventScript_Skitty_hns::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox BattleFrontier_PokemonCenter_1F_Text_Skitty_hns, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon_hns:
	.string "Hier war gerade jemand, der hat ein\n"
	.string "POKéMON gehabt, das ich vorher noch\p"
	.string "nie gesehen habe. Ich habe auch in der\n"
	.string "TRAINERSCHULE nichts darüber gelernt.\n"
	.string "\p"
	.string "Wo findet man wohl so ein POKéMON?$"

BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena_hns:
	.string "Okay! Nächster Halt: KAMPFRING!\n"
	.string "Ich sollte mir schnell ein POKéMON aus\l"
	.string "dem POKéMON-Lagerungs-System nehmen.$"

BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge_hns:
	.string "Kicher… Mit diesem Schatz hier werde\n"
	.string "ich jede Herausforderung bestehen!$"

BattleFrontier_PokemonCenter_1F_Text_Skitty_hns:
	.string "ENECO: Mya myaaah!$"

