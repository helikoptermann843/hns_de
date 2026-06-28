VerdanturfTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

VerdanturfTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_VERDANTURF_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_EventScript_ExpertM::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon:
	.string "Du kannst dich nicht TRAINER nennen,\n"
	.string "wenn du nicht an deine POKéMON\n"
	.string "glaubst! \p"
	.string "Nur diejenigen, die an ihre POKéMON\n"
	.string "glauben, werden am Ende siegen.$"

VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent:
	.string "Der Grund, warum jeder WIESENFLUR\n"
	.string "besucht…\p"
	.string "ist das KAMPFCAMP. Das liegt auf der\n"
	.string "Hand.\p"
	.string "Oder bist du aus einem anderen Grund\n"
	.string "hier?$"

