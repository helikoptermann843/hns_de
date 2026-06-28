BattleFrontier_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

BattleFrontier_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_BATTLE_FRONTIER_OUTSIDE_EAST
	end

BattleFrontier_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_FRONTIER_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_PokemonCenter_1F_EventScript_SchoolKid::
	msgbox BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_EventScript_Man::
	msgbox BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_EventScript_Picnicker::
	msgbox BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox BattleFrontier_PokemonCenter_1F_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon:
	.string "Hier war gerade jemand, der hat ein\n"
	.string "POKéMON gehabt, das ich vorher noch\p"
	.string "nie gesehen habe. Ich habe auch in der\n"
	.string "TRAINERSCHULE nichts darüber gelernt.\n"
	.string "\p"
	.string "Wo findet man wohl so ein POKéMON?$"

BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena:
	.string "Okay! Nächster Halt: KAMPFRING!\n"
	.string "Ich sollte mir schnell ein POKéMON aus\l"
	.string "dem POKéMON-Lagerungs-System nehmen.$"

BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge:
	.string "Kicher… Mit diesem Schatz hier werde\n"
	.string "ich jede Herausforderung bestehen!$"

BattleFrontier_PokemonCenter_1F_Text_Skitty:
	.string "ENECO: Mya myaaah!$"

