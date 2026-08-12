.set PLAYER_STARTER_SPECIES,  VAR_TEMP_2

NewBarkTown_Lab_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewBarkTown_Lab_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewBarkTown_Lab_OnFrame
	.byte 0

NewBarkTown_Lab_OnTransition::
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 6, NewBarkTown_Lab_EventScript_ElmAtComputer
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 2, NewBarkTown_Lab_EventScript_ElmAtComputer
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 3, NewBarkTown_Lab_EventScript_ElmAtComputer
	end

NewBarkTown_Lab_OnFrame::
	map_script_2 VAR_NEWBARKTOWN_LABSTATE, 4, NewBarkTown_Lab_EventScript_PoliceEpisode
	.2byte 0

NewBarkTown_Lab_EventScript_ElmAtComputer::
	setobjectxyperm LOCALID_ELM, 3, 2
	setobjectmovementtype LOCALID_ELM, MOVEMENT_TYPE_FACE_UP
	end

NewBarkTown_Lab_EventScript_TriggerStartLabLeft::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Lab_Movement_WalkRight
	waitmovement 0
	goto NewBarkTown_Lab_EventScript_TriggerStartLab
	end

NewBarkTown_Lab_EventScript_TriggerStartLabRight::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Lab_Movement_WalkLeft
	waitmovement 0
	goto NewBarkTown_Lab_EventScript_TriggerStartLab
	end

NewBarkTown_Lab_EventScript_TriggerStartLab::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_LabMovement_WalkToElm
	waitmovement 0
	goto NewBarkTown_Lab_EventScript_ElmIntro
	end

NewBarkTown_EventScript_Aide1::
	lock
	faceplayer
	msgbox NewBarkTown_Lab_Text_AideAlwaysBusy, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_EventScript_Aide2::
	lock
	faceplayer
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 5, NewBarkTown_EventScript_Aide2Testimony
	msgbox NewBarkTown_Lab_Text_AideSave, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_EventScript_Aide2Testimony::
	msgbox NewBarkTown_Lab_Text_AideTheftTestimony, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_Lab_EventScript_Elm::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_NEWBARKTOWN_LAB_AIDE, NewBarkTown_Lab_EventScript_ElmAideIsWaiting
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 7, NewBarkTown_Lab_EventScript_ElmMasterBall
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 8, NewBarkTown_Lab_EventScript_ElmKimono
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 9, NewBarkTown_Lab_EventScript_ElmLeague
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 10, NewBarkTown_Lab_EventScript_ElmSSTicket

	goto_if_set FLAG_SHOWN_ELM_TOGEPI, NewBarkTown_Lab_EventScript_Elm_CallMe
	call_if_unset FLAG_SHOWN_ELM_TOGEPI, NewBarkTown_Lab_EventScript_Elm_Check_Togepi
	goto_if_ge VAR_GOLDENROD_CITY_STATE, 1, NewBarkTown_Lab_EventScript_Elm_Check_WhereIsEgg
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 5, NewBarkTown_Lab_EventScript_ElmState5

	goto_if_ge VAR_NEWBARKTOWN_LABSTATE, 6, NewBarkTown_Lab_EventScript_ElmState5
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 2, CopNewBarkTown_Lab_EventScript_ElmState2
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 3, CopNewBarkTown_Lab_EventScript_ElmState2
	goto_if_set FLAG_SYS_POKEMON_GET, NewBarkTown_Lab_EventScript_MrPokemon
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 1, NewBarkTown_Lab_EventScript_ElmChoosePokemon
	end

NewBarkTown_Lab_EventScript_ElmAideIsWaiting::
	msgbox NewBarkTown_Lab_Text_ElmAideIsWaiting, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_Lab_Text_ElmAideIsWaiting:
	.string "{PLAYER}!\p"
	.string "Was machst du hier?\p"
	.string "Mein Assistent wartet noch auf dich\n"
	.string "in Viola City!$"

NewBarkTown_Lab_EventScript_ElmIntro::
	msgbox NewBarkTown_Lab_Text_ElmIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewBarkTown_Lab_EventScript_ElmAccepted
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_ElmRefused
	end

NewBarkTown_Lab_EventScript_ElmRefused::
	msgbox NewBarkTown_Lab_Text_ElmRefused, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewBarkTown_Lab_EventScript_ElmAccepted
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_ElmRefused
	end

NewBarkTown_Lab_EventScript_ElmAccepted::
	msgbox NewBarkTown_Lab_Text_ElmAccepted, MSGBOX_DEFAULT
	msgbox NewBarkTown_Lab_Text_ElmResearchAmbitions, MSGBOX_DEFAULT
	delay 30
	playse SE_PC_LOGIN
	waitse
	playse SE_PIN
	applymovement LOCALID_ELM, Common_Movement_QuestionMark
	delay 55
	waitmovement LOCALID_ELM
	applymovement LOCALID_ELM, NewBarkTown_Lab_Movement_CheckEmail
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Lab_Movement_Look_Left
	waitmovement 0
	waitmovement 0
	msgbox NewBarkTown_Lab_Text_ElmGotAnEmail, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ELM, NewBarkTown_Lab_Movement_ReturnFromEmail
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Lab_Movement_Look_Up
	waitmovement 0
	delay 30
	msgbox NewBarkTown_Lab_Text_ElmMissionFromMrPokemon, MSGBOX_DEFAULT
	goto NewBarkTown_Lab_EventScript_ElmChoosePokemon
	end

NewBarkTown_Lab_EventScript_ElmChoosePokemon::
	msgbox NewBarkTown_Lab_Text_ElmChooseAPokemon, MSGBOX_DEFAULT
	closemessage
	setvar VAR_NEWBARKTOWN_LABSTATE, 1
	release
	end

NewBarkTown_Lab_EventScript_TriggerReturnPlayer::
	lock
	msgbox NewBarkTown_Lab_Text_ElmWhereGoing, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Lab_Movement_ReturnPlayer
	waitmovement 0
	release
	end

NewBarkTown_Lab_EventScript_ShouldntTouch::
	msgbox NewBarkTown_Lab_Text_ShouldntTouch, MSGBOX_DEFAULT
	closemessage
	end


NewBarkTown_Lab_EventScript_ChikoritaBall::
	lock
	goto_if_set FLAG_SYS_POKEMON_GET, NewBarkTown_Lab_EventScript_ShouldntTouch
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 1, NewBarkTown_Lab_EventScript_ChikoritaBall_Choice
	msgbox NewBarkTown_Lab_Text_ShouldntTouch, MSGBOX_DEFAULT
	release
	closemessage
	end

NewBarkTown_Lab_EventScript_ChikoritaBall_Choice::
	@callnative DisableStaticRandomizer
	setvar VAR_STARTER_MON, 0
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHIKORITA
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
	playmoncry PLAYER_STARTER_SPECIES, CRY_MODE_NORMAL
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
	buffermoncategory STR_VAR_2, PLAYER_STARTER_SPECIES
	msgbox NewBarkTown_Lab_Text_ChooseChikorita, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewBarkTown_Lab_EventScript_ChoseStarter
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_DeclinedStarter
	end

NewBarkTown_Lab_EventScript_CyndaquilBall::
	lock
	goto_if_set FLAG_SYS_POKEMON_GET, NewBarkTown_Lab_EventScript_ShouldntTouch
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 1, NewBarkTown_Lab_EventScript_CyndaquilBall_Choice
	msgbox NewBarkTown_Lab_Text_ShouldntTouch, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_Lab_EventScript_CyndaquilBall_Choice::
	@callnative DisableStaticRandomizer
	setvar VAR_STARTER_MON, 1
	setvar PLAYER_STARTER_SPECIES, SPECIES_CYNDAQUIL
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
	playmoncry PLAYER_STARTER_SPECIES, CRY_MODE_NORMAL
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
	buffermoncategory STR_VAR_2, PLAYER_STARTER_SPECIES
	msgbox NewBarkTown_Lab_Text_ChooseCyndaquil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewBarkTown_Lab_EventScript_ChoseStarter
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_DeclinedStarter
	end

NewBarkTown_Lab_EventScript_TotodileBall::
	lock
	goto_if_set FLAG_SYS_POKEMON_GET, NewBarkTown_Lab_EventScript_ShouldntTouch
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 1, NewBarkTown_Lab_EventScript_TotodileBall_Choice
	msgbox NewBarkTown_Lab_Text_ShouldntTouch, MSGBOX_DEFAULT
	release
	closemessage
	end

NewBarkTown_Lab_EventScript_TotodileBall_Choice::
	@callnative DisableStaticRandomizer
	setvar VAR_STARTER_MON, 2
	setvar PLAYER_STARTER_SPECIES, SPECIES_TOTODILE
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
	playmoncry PLAYER_STARTER_SPECIES, CRY_MODE_NORMAL
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
	buffermoncategory STR_VAR_2, PLAYER_STARTER_SPECIES
	msgbox NewBarkTown_Lab_Text_ChooseTotodile, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewBarkTown_Lab_EventScript_ChoseStarter
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_DeclinedStarter
	end

NewBarkTown_Lab_EventScript_DeclinedStarter::
	hidemonpic
	msgbox NewBarkTown_Lab_Text_DidntChooseStarter, MSGBOX_DEFAULT
	closemessage
	@callnative EnableStaticRandomizer
	release
	end

NewBarkTown_Lab_EventScript_ChoseStarter::
	@callnative EnableStaticRandomizer
	hidemonpic
	removeobject VAR_LAST_TALKED
	msgbox NewBarkTown_Lab_Text_ChoseStarter, MSGBOX_DEFAULT
	call_if_eq VAR_STARTER_MON, 0, NewBarkTown_Lab_EventScript_GiveStarter_Chikorita
	call_if_eq VAR_STARTER_MON, 1, NewBarkTown_Lab_EventScript_GiveStarter_Cyndaquil
	call_if_eq VAR_STARTER_MON, 2, NewBarkTown_Lab_EventScript_GiveStarter_Totodile
	setflag FLAG_SYS_POKEMON_GET
	playfanfare MUS_OBTAIN_ITEM
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
	message NewBarkTown_Lab_Text_ReceivedStarter
	waitfanfare
	specialvar VAR_RESULT, IsNuzlockeNicknamingActive
	goto_if_eq VAR_RESULT, TRUE, NewBarkTown_Lab_EventScript_ChoseStarter_NicknameStarter_Nuzlocke
	msgbox NewBarkTown_Lab_Text_Nickname, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewBarkTown_Lab_EventScript_NicknameStarter
	callnative UpdateFollowingPokemon
	release
	end

NewBarkTown_Lab_EventScript_GiveStarter_Chikorita::
	call_if_unset FLAG_SHINY_STARTER_1, NewBarkTown_Lab_EventScript_GiveStarter_NotShiny
	call_if_set FLAG_SHINY_STARTER_1, NewBarkTown_Lab_EventScript_GiveStarter_Shiny
	return

NewBarkTown_Lab_EventScript_GiveStarter_Cyndaquil::
	call_if_unset FLAG_SHINY_STARTER_2, NewBarkTown_Lab_EventScript_GiveStarter_NotShiny
	call_if_set FLAG_SHINY_STARTER_2, NewBarkTown_Lab_EventScript_GiveStarter_Shiny
	return

NewBarkTown_Lab_EventScript_GiveStarter_Totodile::
	call_if_unset FLAG_SHINY_STARTER_3, NewBarkTown_Lab_EventScript_GiveStarter_NotShiny
	call_if_set FLAG_SHINY_STARTER_3, NewBarkTown_Lab_EventScript_GiveStarter_Shiny
	return

NewBarkTown_Lab_EventScript_GiveStarter_NotShiny::
	givemon PLAYER_STARTER_SPECIES, 5, ITEM_NONE, BALL_POKE, NATURE_RANDOM, NUM_ABILITY_PERSONALITY, MON_GENDER_RANDOM, 0, 0, 0, 0, 0, 0, USE_RANDOM_IVS, USE_RANDOM_IVS, USE_RANDOM_IVS, USE_RANDOM_IVS, USE_RANDOM_IVS, USE_RANDOM_IVS, MOVE_DEFAULT, MOVE_DEFAULT, MOVE_DEFAULT, MOVE_DEFAULT, SHINY_MODE_NEVER
	return

NewBarkTown_Lab_EventScript_GiveStarter_Shiny::
	givemon PLAYER_STARTER_SPECIES, 5, ITEM_NONE, BALL_POKE, NATURE_RANDOM, NUM_ABILITY_PERSONALITY, MON_GENDER_RANDOM, 0, 0, 0, 0, 0, 0, USE_RANDOM_IVS, USE_RANDOM_IVS, USE_RANDOM_IVS, USE_RANDOM_IVS, USE_RANDOM_IVS, USE_RANDOM_IVS, MOVE_DEFAULT, MOVE_DEFAULT, MOVE_DEFAULT, MOVE_DEFAULT, SHINY_MODE_ALWAYS
	return

NewBarkTown_Lab_EventScript_NicknameStarter::
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	end

NewBarkTown_Lab_EventScript_ChoseStarter_NicknameStarter_Nuzlocke::
	message NewBarkTown_Lab_Text_Nickname
	waitmessage
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	release
	end

NewBarkTown_Lab_EventScript_MrPokemon::
	setvar VAR_NEWBARKTOWN_LABSTATE, 2
	setvar VAR_NEWBARK_TOWN_STATE, 3
	msgbox NewBarkTown_Lab_Text_ElmDirections1, MSGBOX_DEFAULT
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
	msgbox NewBarkTown_Lab_Text_ElmDirections2, MSGBOX_DEFAULT
	closemessage
	goto_if_eq VAR_FACING, DIR_EAST, NewBarkTown_Lab_EventScript_MrPokemonMovementSafe
	applymovement LOCALID_ELM, NewBarkTown_Lab_Movement_CheckEmailSlow
	waitmovement 0
	clearflag FLAG_RECEIVED_FIRST_BALLS
	clearflag FLAG_RECEIVED_FIRST_POTION
	setvar VAR_NEWBARK_TOWN_STATE, 3
	setflag FLAG_ENABLE_CONDITION
	release
	end

NewBarkTown_Lab_EventScript_MrPokemonMovementSafe::
	applymovement LOCALID_ELM, NewBarkTown_Lab_Movement_GotoComputerSafe
	waitmovement 0
	clearflag FLAG_RECEIVED_FIRST_BALLS
	clearflag FLAG_RECEIVED_FIRST_POTION
	setvar VAR_NEWBARK_TOWN_STATE, 3
	release
	end

CopNewBarkTown_Lab_EventScript_ElmState2::
	msgbox NewBarkTown_Lab_Text_ElmDirections1, MSGBOX_DEFAULT
	msgbox NewBarkTown_Lab_Text_ElmDirections2, MSGBOX_DEFAULT
	applymovement LOCALID_ELM, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	closemessage
	release
	end

NewBarkTown_Lab_EventScript_HealingMachine1::
	lock
	goto_if_set FLAG_SYS_POKEMON_GET, NewBarkTown_Lab_EventScript_HealingMachine2
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
	closemessage
	release
	end

NewBarkTown_Lab_EventScript_HealingMachine2::
	call Common_EventScript_OutOfCenterPartyHeal
	release
	end



NewBarkTown_Lab_EventScript_TriggerAideGivePotion::
	lock
	applymovement LOCALID_AIDE1, NewBarkTown_Lab_Movement_Aide1WalkToPlayer
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox NewBarkTown_Lab_Text_AideGivePotion, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_FIRST_POTION
	setvar VAR_NEWBARKTOWN_LABSTATE, 3
	applymovement LOCALID_AIDE1, NewBarkTown_Lab_Movement_Aide1LeavePlayer
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	release
	end

NewBarkTown_Lab_EventScript_HideCyndaquil::
	setflag FLAG_HIDE_CYNDAQUILBALL
	return
NewBarkTown_Lab_EventScript_HideTotodile::
	setflag FLAG_HIDE_TOTODILEBALL
	return
NewBarkTown_Lab_EventScript_HideChikorita::
	setflag FLAG_HIDE_CHIKORITABALL
	return

NewBarkTown_Lab_EventScript_PoliceEpisode::
	lock
	setmetatile 7, 1, METATILE_R26_21_Broken_Window, TRUE
	call_if_eq VAR_STARTER_MON, 0 NewBarkTown_Lab_EventScript_HideCyndaquil
	call_if_eq VAR_STARTER_MON, 1 NewBarkTown_Lab_EventScript_HideTotodile
	call_if_eq VAR_STARTER_MON, 2 NewBarkTown_Lab_EventScript_HideChikorita
	applymovement OBJ_EVENT_ID_PLAYER, NeBarkTownLab_Movement_PlayerWalkToCop
	waitmovement 0
	setflag FLAG_HIDE_LAB_POLICEMAN
	turnobject LOCALID_COP DIR_WEST
	msgbox NewBarkTown_Lab_Text_Officer1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewBarkTown_Lab_EventScript_PoliceYes
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_PoliceNo
	end

NewBarkTown_Lab_EventScript_PoliceNo::
	msgbox NewBarkTown_Lab_Text_OfficerNo, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, NewBarkTown_Lab_EventScript_PoliceYes
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_PoliceNo
	end

NewBarkTown_Lab_EventScript_PoliceYes::
	closemessage
	special NameRival
	waitstate
	msgbox NewBarkTown_Lab_Text_Officer2_1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, NewBarkTown_Lab_EventScript_PoliceYes
	msgbox NewBarkTown_Lab_Text_Officer2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_COP, NewBarkTown_Lab_Movement_CopLeaves
	waitmovement 0
	removeobject LOCALID_COP

	@ setobjectxyperm LOCALID_COP, 25, 4
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Lab_Movement_PlayerStepsToElm
	waitmovement 0
	msgbox NewBarkTown_Lab_Text_ElmAfterTheft1, MSGBOX_DEFAULT
	playfanfare MUS_LEVEL_UP
	msgbox NewBarkTown_Lab_Text_ElmAfterTheft2, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	applymovement LOCALID_ELM, NewBarkTown_Lab_Movement_ElmStepBack
	waitmovement 0
	msgbox NewBarkTown_Lab_Text_ElmAfterTheft3, MSGBOX_DEFAULT
	delay 20
	closemessage
	applymovement LOCALID_ELM, NewBarkTown_Lab_Movement_ElmStepForward
	waitmovement 0
	msgbox NewBarkTown_Lab_Text_ElmAfterTheft4, MSGBOX_DEFAULT
	closemessage
	setvar VAR_NEWBARKTOWN_LABSTATE, 5
	setvar VAR_NEWBARK_TOWN_STATE, 4
	setflag FLAG_HIDE_MOMS_FRIEND
	clearflag FLAG_HIDE_MOMS_FRIEND2
	setflag FLAG_ADVENTURE_STARTED
	setflag FLAG_START_NUZLOCKE
	setflag FLAG_EXP_SHARE_ENABLED
	removeitem ITEM_MYSTERY_EGG
	end

NewBarkTown_Lab_EventScript_ElmState5::
	lock
	faceplayer
	msgbox NewBarkTown_Lab_Text_ElmStudyingEgg, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ELM Common_Movement_FaceOriginalDirection
	release
	end

NewBarkTown_Lab_EventScript_ElmMasterBall::
	lock
	faceplayer
	msgbox NewBarkTown_Lab_Text_ElmGiveMasterBall1, MSGBOX_DEFAULT
	giveitem ITEM_MASTER_BALL
	msgbox NewBarkTown_Lab_Text_ElmGiveMasterBall2, MSGBOX_DEFAULT
	closemessage
	delay 20
	playse SE_PIN
	applymovement LOCALID_ELM, Common_Movement_ExclamationMark
	delay 55
	waitmovement LOCALID_ELM
	msgbox NewBarkTown_Lab_Text_KimonoGirls, MSGBOX_DEFAULT
	closemessage
	setvar VAR_NEWBARKTOWN_LABSTATE, 8
	setvar VAR_ECRUTEAK_CITY_THEATER, 4
	setflag FLAG_HIDE_ECRUTEAK_SILVER
	setflag FLAG_HIDE_ECRUTEAK_CITY_THEATER_NPCS
	clearflag FLAG_HIDE_ECRUTEAK_CITY_THEATER_KIMONOS
	release
	end

NewBarkTown_Lab_EventScript_ElmKimono::
	lock
	faceplayer
	msgbox NewBarkTown_Lab_Text_KimonoWaiting, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_Lab_EventScript_ElmLeague::
	lock
	faceplayer
	msgbox NewBarkTown_Lab_Text_League, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_Lab_EventScript_ElmSSTicket::
	msgbox NewBarkTown_Lab_Text_ElmGiveTicket1, MSGBOX_DEFAULT
	giveitem ITEM_SS_TICKET
	msgbox NewBarkTown_Lab_Text_ElmGiveTicket2, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_SSAQUA_1F_GRANDPA
	setvar VAR_NEWBARKTOWN_LABSTATE, 11
	clearflag FLAG_HIDE_OLIVINE_PORT_OAK
	release
	end

NewBarkTown_Lab_EventScript_TriggerAideGiveBalls::
	lock
	applymovement LOCALID_AIDE1, NewBarkTown_Lab_Movement_Aide1WalkToPlayer
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox NewBarkTown_Lab_Text_AideGiveBalls, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_POKE_BALL, 5
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_FIRST_BALLS
	setvar VAR_NEWBARKTOWN_LABSTATE, 6
	applymovement LOCALID_AIDE1, NewBarkTown_Lab_Movement_Aide1LeavePlayer
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	release
	end

NewBarkTown_Lab_EventScript_Elm_Check_WhereIsEgg::
	msgbox NewBarkTown_Lab_Text_ElmWaitingEggHatch, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_Lab_EventScript_Elm_Check_Togepi::
	checkspecies SPECIES_TOGEPI
	goto_if_eq VAR_RESULT, TRUE, NewBarkTown_Lab_EventScript_Elm_Togepi_Seen
	checkspecies SPECIES_TOGETIC
	goto_if_eq VAR_RESULT, TRUE, NewBarkTown_Lab_EventScript_Elm_Togepi_Seen
	checkspecies SPECIES_TOGEKISS
	goto_if_eq VAR_RESULT, TRUE, NewBarkTown_Lab_EventScript_Elm_Togepi_Seen
	return

NewBarkTown_Lab_EventScript_Elm_Togepi_Seen::
	msgbox NewBarkTown_Lab_Text_ShowTogepi1, MSGBOX_DEFAULT
	waitmessage
	msgbox NewBarkTown_Lab_Text_ShowTogepi2, MSGBOX_DEFAULT
	waitmessage
	msgbox NewBarkTown_Lab_Text_ShowTogepi3, MSGBOX_DEFAULT
	waitmessage
	msgbox NewBarkTown_Lab_Text_ElmGiveEverstone1, MSGBOX_DEFAULT
	waitmessage
	giveitem ITEM_EVERSTONE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox NewBarkTown_Lab_Text_ElmGiveEverstone2, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SHOWN_ELM_TOGEPI
	release
	end

NewBarkTown_Lab_EventScript_Elm_CallMe::
	msgbox NewBarkTown_Lab_Text_Elm_CallMe, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_Lab_Movement_WalkRight:
	walk_right
	step_end

NewBarkTown_Lab_Movement_WalkLeft:
	walk_left
	step_end

NewBarkTown_LabMovement_WalkToElm:
	walk_up
	walk_up
	walk_up
	step_end

NewBarkTown_Lab_Movement_ReturnPlayer:
	walk_up
	step_end

NewBarkTown_Lab_Movement_CheckEmail:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	step_end

NewBarkTown_Lab_Movement_CheckEmailSlow:
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

NewBarkTown_Lab_Movement_GotoComputerSafe:
	walk_up
	walk_left
	walk_left
	walk_left
	face_up
	step_end

NewBarkTown_Lab_Movement_ReturnFromEmail:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_down
	step_end

NewBarkTown_Lab_Movement_Look_Left:
	face_left
	step_end

NewBarkTown_Lab_Movement_Look_Up:
	face_up
	step_end


NewBarkTown_Lab_Movement_Aide1WalkToPlayer:
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

NewBarkTown_Lab_Movement_Aide1LeavePlayer:
	walk_left
	walk_left
	walk_up
	walk_up
	face_down
	step_end

NeBarkTownLab_Movement_PlayerWalkToCop:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_up
	face_right
	step_end

NewBarkTown_Lab_Movement_CopLeaves:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

NewBarkTown_Lab_Movement_PlayerStepsToElm:
	walk_right
	face_up
	step_end

NewBarkTown_Lab_Movement_ElmStepBack:
	lock_facing_direction
	walk_fast_up
	unlock_facing_direction
	step_end

NewBarkTown_Lab_Movement_ElmStepForward:
	walk_fast_down
	step_end

NewBarkTown_Lab_Text_ShouldntTouch:
	.string "Wahrscheinlich besser nicht\n"
	.string "anfassen!$"

NewBarkTown_Lab_Text_ElmIntro:
	.string "Lind: {PLAYER}! Da bist du!\p"
	.string "Ich brauche deine Hilfe.\n"
	.string "Ich forsche gerade an neuen Pokémon.\p"
	.string "Kannst du mir helfen, {PLAYER}?\p"
	.string "Schau…\p"
	.string "Ich schreibe eine Arbeit,\n"
	.string "die ich auf einer Konferenz\l"
	.string "vorstellen will.\p"
	.string "Doch es gibt einige\n"
	.string "Dinge, die ich noch\l"
	.string "nicht ganz verstehe.\p"
	.string "Also! Bitte zieh ein Pokémon auf,\n"
	.string "das ich kürzlich gefangen habe.$"

NewBarkTown_Lab_Text_ElmAccepted:
	.string "Danke, {PLAYER}!\n"
	.string "Du bist eine große Hilfe!$"

NewBarkTown_Lab_Text_ElmRefused:
	.string "Aber… Bitte, ich brauche\n"
	.string "deine Hilfe!$"

NewBarkTown_Lab_Text_ElmResearchAmbitions:
	.string "Wenn ich meine Ergebnisse habe,\n"
	.string "werden wir mehr über die\l"
	.string "Rätsel der Pokémon erfahren.\p"
	.string "Du kannst dich darauf verlassen!$"

NewBarkTown_Lab_Text_ElmGotAnEmail:
	.string "Oh, holla! Ich habe eine\n"
	.string "E-Mail bekommen!\p"
	.string "… … … … … … … …\n"
	.string "Hm… Aha…\p"
	.string "Okay…$"

NewBarkTown_Lab_Text_ElmMissionFromMrPokemon:
	.string "Lind: Hör mir zu! Ich habe da einen\n"
	.string "Bekannten namens Mr. Pokémon.\p"
	.string "Er ist immer gleich völlig aus dem\n"
	.string "Häuschen, wenn er meint, einen\l"
	.string "besonders seltenen Fund gemacht\l"
	.string "zu haben.\p"
	.string "Gerade eben hat er mir wieder eine\n"
	.string "seiner E-Mails geschickt, in der er mir\l"
	.string "versichert, dieses eine Mal wirklich\l"
	.string "etwas Besonderes gefunden zu haben.\p"
	.string "Höchstwahrscheinlich handelt es sich\n"
	.string "dabei mal wieder um ein Pokémon-Ei.\l"
	.string "Aber meine Assistenten und ich haben\l"
	.string "leider gerade alle Hände voll zu tun…\p"
	.string "Hm, was mache ich jetzt nur…\p"
	.string "Ich hab’s!\p"
	.string "Du könntest der Sache doch für mich\n"
	.string "nachgehen, oder? Was sagst du?\p"
	.string "Los, du darfst dir dafür auch eins\n"
	.string "dieser Pokémon hier aussuchen!$"

NewBarkTown_Lab_Text_ElmChooseAPokemon:
	.string "Nimm eines der Pokémon\n"
	.string "aus diesen Pokébällen.\p"
	.string "Du wirst der erste Partner\n"
	.string "dieses Pokémon sein, {PLAYER}!\p"
	.string "Wähle jetzt!$"

NewBarkTown_Lab_Text_ElmWhereGoing:
	.string "Lind: Halt! Wohin willst du?$"

NewBarkTown_Lab_Text_ChooseCyndaquil:
	.string "Lind: Du nimmst Feurigel,\n"
	.string "das Feuer-Pokémon?$"

NewBarkTown_Lab_Text_ChooseTotodile:
	.string "Lind: Willst du Karnimani,\n"
	.string "das Wasser-Pokémon?$"

NewBarkTown_Lab_Text_ChooseChikorita:
	.string "Lind: Also, Endivie gefällt dir,\n"
	.string "das Pflanzen-Pokémon?$"

NewBarkTown_Lab_Text_DidntChooseStarter:
	.string "Lind: Denk gut nach.\p"
	.string "Dein Partner ist wichtig.$"

NewBarkTown_Lab_Text_ChoseStarter:
	.string "Lind: Das ist auch ein\n"
	.string "tolles Pokémon!$"

NewBarkTown_Lab_Text_ReceivedStarter:
	.string "{PLAYER} erhielt {STR_VAR_1}!$"

NewBarkTown_Lab_Text_Nickname:
	.string "Willst du deinem {STR_VAR_1}\n"
	.string "einen Spitznamen geben?$"

NewBarkTown_Lab_Text_ElmDirections1:
	.string "Mr. Pokémon wohnt etwas\n"
	.string "hinter Rosalia City,\l"
	.string "der nächsten Stadt.\p"
	.string "Du kannst es kaum verfehlen.\n"
	.string "Aber sicher ist sicher.\p"
	.string "Du hast meine Nummer.\n"
	.string "Ruf an, wenn etwas ist!$"


NewBarkTown_Lab_Text_ElmLetYourMonBattle:
	.string "Wenn ein wildes Pokémon\n"
	.string "erscheint, lass deines kämpfen!$"

NewBarkTown_Lab_Text_ElmDirections2:
	.string "Wenn ein wildes Pokémon\n"
	.string "erscheint, lass deines kämpfen!\p"
	.string "Wenn es verletzt ist, heile es\n"
	.string "an der Maschine links oder im\l"
	.string "Pokécenter.\p"
	.string "Ich zähle auf dich!$"

NewBarkTown_Lab_Text_GotElmsNumber:
	.string "{PLAYER} bekam Linds\n"
	.string "Telefonnummer.$"

NewBarkTown_Lab_Text_ElmDescribesMrPokemon:
	.string "Mr. Pokémon sammelt\n"
	.string "seltene Antiquitäten.\p"
	.string "Schade, dass sie nur selten\n"
	.string "und nicht besonders nützlich sind.$"

NewBarkTown_Lab_Text_ElmPokeBall:
	.string "Enthält ein Pokémon, das\n"
	.string "Prof. Lind gefangen hat.$"

@THEFT================================================================================

NewBarkTown_Lab_Text_ElmAfterTheft1:
	.string "Lind: Oh, {PLAYER}… hier war ganz\n"
	.string "schön was los, sage ich dir!\p"
	.string "Aber warum erzählst du mir nicht,\n"
	.string "was es mit Mr. Pokémons großem\l"
	.string "Fund auf sich hatte?$"

NewBarkTown_Lab_Text_ElmAfterTheft2:
	.string "{PLAYER} übergab das Rätsel-Ei\n"
	.string "an Prof. Lind.$"

NewBarkTown_Lab_Text_ElmAfterTheft3:
	.string "Lind: Hmm… das?$"

NewBarkTown_Lab_Text_ElmAfterTheft4:
	.string "Aber… Ist es ein Pokémon-Ei?\p"
	.string "Wenn ja, ist es eine große Entdeckung!\p"
	.string "Lind: Was?!?\p"
	.string "Prof. Eich gab dir einen Pokédex?\p"
	.string "{PLAYER}, stimmt das?\n"
	.string "Unglaublich!\p"
	.string "Er erkennt das Potential von\n"
	.string "Menschen als Trainer.\p"
	.string "Wow, {PLAYER}. Du könntest\n"
	.string "Champion werden.\p"
	.string "Du kommst gut mit Pokémon klar.\p"
	.string "Versuche die Arenaleiter\n"
	.string "herauszufordern.\p"
	.string "Die nächste Arena ist in Viola City.\p"
	.string "…{PLAYER}. Der Weg zum Sieg\n"
	.string "wird lang sein.\p"
	.string "Bevor du gehst, sprich besser mit\n"
	.string "deiner Mutter.$"

NewBarkTown_Lab_Text_ElmStudyingEgg:
	.string "Lind: Gib nicht auf! Ich melde mich\n"
	.string "bei dir, sobald ich etwas über dieses\l"
	.string "Ei herausgefunden habe!$"

NewBarkTown_Lab_Text_ElmAideHasEgg:
	.string "Lind: {PLAYER}? Hast du meinen\n"
	.string "Assistenten getroffen?\p"
	.string "Er hätte dich mit dem Ei\n"
	.string "im Pokémon-Center von Viola\n"
	.string "City treffen sollen.\p"
	.string "Du hast ihn wohl knapp verpasst.\p"
	.string "Versuch es dort noch einmal.$"

NewBarkTown_Lab_Text_ElmWaitingEggHatch:
	.string "Lind: Hey, hat sich am Ei\n"
	.string "etwas getan?$"

NewBarkTown_Lab_Text_ElmThoughtEggHatched:
	.string "Lind: Nanu? Ich dachte, es wäre etwas\n"
	.string "aus dem Ei geschlüpft, {PLAYER}!\l"
	.string "Wo ist das Pokémon?$"

NewBarkTown_Lab_Text_ShowTogepi1:
	.string "Lind: {PLAYER}, das sieht toll aus!$"

NewBarkTown_Lab_Text_ShowTogepi2:
	.string "Was? Dieses Pokémon!?!$"

NewBarkTown_Lab_Text_ShowTogepi3:
	.string "Das Ei ist geschlüpft!\n"
	.string "Pokémon werden aus Eiern geboren…\p"
	.string "Nein, vielleicht nicht alle.\p"
	.string "Es gibt noch viel zu erforschen.$"

NewBarkTown_Lab_Text_ElmGiveEverstone1:
	.string "Danke, {PLAYER}! Du hilfst uns\n"
	.string "die Geheimnisse der Pokémon\n"
	.string "zu lüften!\p"
	.string "Nimm dies als Dankeschön.$"

NewBarkTown_Lab_Text_ElmGiveEverstone2:
	.string "Das ist ein Ewigstein.\p"
	.string "Manche Pokémon entwickeln sich\n"
	.string "bei bestimmten Leveln.\p"
	.string "Ein Pokémon mit Ewigstein\n"
	.string "entwickelt sich nicht.\p"
	.string "Gib ihn einem Pokémon, das\n"
	.string "du nicht entwickeln willst.$"

NewBarkTown_Lab_Text_ElmCallYou:
	.string "Lind: {PLAYER}, ich rufe an,\n"
	.string "wenn etwas passiert.$"

NewBarkTown_Lab_Text_AideAfterTheft:
	.string "…Seufz… ich frage mich, wie es dem\n"
	.string "gestohlenen Pokémon jetzt wohl geht…\p"
	.string "Man sagt, aus einem Pokémon, das von\n"
	.string "einem bösen Menschen trainiert wird,\l"
	.string "wird auch mal ein böses Pokémon…$"

NewBarkTown_Lab_Text_ElmGiveMasterBall1:
	.string "Lind: Oh, hallo {PLAYER}!\n"
	.string "Mann, bei dir weiß man wirklich nie, mit\l"
	.string "was du einen als Nächstes überraschst!\p"
	.string "Dank dir macht meine Forschung\n"
	.string "ganz ausgezeichnete Fortschritte!\p"
	.string "Hier, bitte nimm das als Zeichen meiner\n"
	.string "Dankbarkeit!$"

NewBarkTown_Lab_Text_ElmGiveMasterBall2:
	.string "Das ist ein Meisterball!\p"
	.string "Egal, mit welchem Pokémon du es auch zu\n"
	.string "tun hast, mit diesem wertvollen Pokéball\l"
	.string "gelingt es dir garantiert, es zu fangen!\p"
	.string "Meisterbälle werden angeblich exklusiv\n"
	.string "für herausragende Leistungen im Feld\l"
	.string "der Pokémon-Forschung ausgegeben…\p"
	.string "Aber ich glaube, du kannst damit mehr\n"
	.string "anfangen als ich, {PLAYER}.\l"
	.string "Hier, du kannst ihn haben!$"

NewBarkTown_Lab_Text_KimonoGirls:
	.string "Die Kimono-Girls sagten, sie\n"
	.string "würden im Tanztheater von\l"
	.string "Teak City auf dich warten!\p"
	.string "Ich weiß, dass du jede Menge\n"
	.string "durchgemacht hast, seit ich dir\l"
	.string "dieses Ei anvertraut habe, aber\l"
	.string "ich hoffe schwer, dass du nach\l"
	.string "all diesen Mühen auch bis zum\l"
	.string "Schluss durchhältst!$"

NewBarkTown_Lab_Text_KimonoWaiting:
	.string "Prof. Lind: Die Kimono-Girls\n"
	.string "warten im Teak-City Tanztheater.$"

NewBarkTown_Lab_Text_League:
	.string "Lind: Haha, gute Arbeit!\p"
	.string "Zuerst dachte ich, dieses Ei sei einfach\n"
	.string "nur selten und nichts weiter, aber die\l"
	.string "Sache hat inzwischen völlig andere\l"
	.string "Dimensionen angenommen, was?\p"
	.string "Was haben dir die Kimono-Girls erzählt?\p"
	.string "Ach, aber das geht mich nichts an.\p"
	.string "Das war ganz allein dein Verdienst.\n"
	.string "Du hast dich mit Herz und Seele durch\l"
	.string "alles durchgekämpft.\p"
	.string "Jemand, der aus eigener Kraft so viel\n"
	.string "erreicht hat, schafft es sicher auch an\l"
	.string "die Spitze der Pokémon Liga!\p"
	.string "Mach dich nun also auf den Weg\n"
	.string "zum Indigo-Plateau!\p"
	.string "Weißt du, wo das ist?\p"
	.string "Nimm von hier aus Route 27, bis du\n"
	.string "auf Route 26 gelangst. Du musst\l"
	.string "immer geradeaus in Richtung Norden!$"


NewBarkTown_Lab_Text_ElmGiveTicket1:
	.string "Lind: Oh, hallo {PLAYER}!\n"
	.string "Ich habe dich schon erwartet!\p"
	.string "Ich habe dich heute zu mir gerufen, weil\n"
	.string "ich dir etwas geben möchte.\p"
	.string "Hier! Das ist ein Bootsticket.\p"
	.string "Damit kannst du auch in Kanto auf\n"
	.string "Pokémon-Jagd gehen!$"

NewBarkTown_Lab_Text_ElmGiveTicket2:
	.string "Lind: Das Schnellboot, für das dieses\n"
	.string "Ticket gültig ist, legt im Hafen von\l"
	.string "Oliviana City ab.\p"
	.string "Aber das weißt du ja wahrscheinlich\n"
	.string "besser als ich, {PLAYER}…\p"
	.string "Du und dein Pokémon-Team, ihr seid\n"
	.string "schließlich schon viel zusammen gereist.\p"
	.string "Also dann! Wenn du nach Kanto gehst,\n"
	.string "grüße bitte Professor Eich von mir!$"

NewBarkTown_Lab_Text_LabMonEgg:
	.string "Es ist das Pokémon-Ei, das\n"
	.string "von Prof. Lind erforscht wird.$"

NewBarkTown_Lab_Text_AideGivePotion:
	.string "{PLAYER}, nimm das für\n"
	.string "deine Anstrengung.$"

NewBarkTown_Lab_Text_AideAlwaysBusy:
	.string "Wir sind nur zu dritt, also\n"
	.string "haben wir immer viel zu tun.$"

NewBarkTown_Lab_Text_AideSave:
	.string "Vergiss nicht, regelmäßig zu\n"
	.string "speichern!\p"
	.string "Drücke Start und dann\n"
	.string "Sichern!$"

NewBarkTown_Lab_Text_AideTheftTestimony:
	.string "Wir haben ein schrecklich lautes\n"
	.string "Geräusch von draußen gehört, doch\l"
	.string "während wir mit dem Professor nach\l"
	.string "dem Rechten gesehen haben, hat\l"
	.string "irgendjemand ein Pokémon gestohlen…\p"
	.string "…Seufz… ich frage mich, wie es dem\n"
	.string "gestohlenen Pokémon jetzt wohl geht…\p"
	.string "Man sagt, aus einem Pokémon, das von\n"
	.string "einem bösen Menschen trainiert wird,\l"
	.string "wird auch mal ein böses Pokémon…$"

NewBarkTown_Lab_Text_AideGiveBalls:
	.string "{PLAYER}!\p"
	.string "Benutze diese für deine\n"
	.string "Pokédex-Mission!$"

NewBarkTown_Lab_Text_AideExplainBalls:
	.string "Um deinen Pokédex zu füllen,\n"
	.string "musst du Pokémon fangen.\p"
	.string "Wirf Pokébälle auf wilde Pokémon!$"

NewBarkTown_Lab_Text_Officer1:
	.string "Ich hörte, hier wurde ein\n"
	.string "Pokémon gestohlen…\p"
	.string "Ich wollte Infos von Prof. Lind.\p"
	.string "Offenbar war es ein junger\n"
	.string "Mann mit langen, roten Haaren…\p"
	.string "Was?\p"
	.string "Du hast gegen so einen\n"
	.string "Trainer gekämpft?\p"
	.string "Weißt du seinen Namen?$"

NewBarkTown_Lab_Text_Officer2_1:
	.string "OK! Also {RIVAL} hieß er?$"

NewBarkTown_Lab_Text_Officer2:
	.string "Danke, dass du bei meinen\n"
	.string "Ermittlungen geholfen hast!$"

NewBarkTown_Lab_Text_OfficerNo:
	.string "Du kennst seinen Namen doch?!$"

NewBarkTown_Lab_Text_Elm_CallMe:
	.string "Ah, {PLAYER}!\p"
	.string "Wie läuft’s mit dem Pokédex?\p"
	.string "Ich bin gerade beschäftigt, aber\n"
	.string "ruf mich mal an, dann kann ich\l"
	.string "deinen Fortschritt prüfen!$"
