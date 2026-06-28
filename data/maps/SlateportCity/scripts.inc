SlateportCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
	.byte 0

SlateportCity_OnTransition:
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
	call SlateportCity_EventScript_EnterSlateport
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
	end

SlateportCity_EventScript_EnterSlateport::
	setflag FLAG_VISITED_SLATEPORT_CITY
	setvar VAR_CONTEST_HALL_STATE, 0
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
	return

SlateportCity_EventScript_MovePeopleForSternInterview::
	setobjectxyperm LOCALID_SLATEPORT_CAPT_STERN, 28, 13
	setobjectxyperm LOCALID_SLATEPORT_OLD_WOMAN, 25, 13
	setobjectxyperm LOCALID_SLATEPORT_RICH_BOY, 25, 14
	setobjectxyperm LOCALID_SLATEPORT_COOK, 27, 16
	setobjectxyperm LOCALID_SLATEPORT_GIRL, 28, 16
	setobjectxyperm LOCALID_SLATEPORT_FAT_MAN, 29, 16
	setobjectxyperm LOCALID_SLATEPORT_MAN_1, 31, 14
	setobjectmovementtype LOCALID_SLATEPORT_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_SLATEPORT_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
	setobjectmovementtype LOCALID_SLATEPORT_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
	setobjectmovementtype LOCALID_SLATEPORT_COOK, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_SLATEPORT_GIRL, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_SLATEPORT_FAT_MAN, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_SLATEPORT_MAN_1, MOVEMENT_TYPE_FACE_LEFT
	return

SlateportCity_EventScript_SetReadyForScottScene::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	getplayerxy VAR_0x8004, VAR_0x8005
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 23, 27
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
	return

SlateportCity_EventScript_MoveScottLeft::
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 22, 27
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
	return

SlateportCity_OnFrame:
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
	.2byte 0

SlateportCity_EventScript_ScottScene::
	lockall
	addobject LOCALID_SLATEPORT_SCOTT
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceScott
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottApproachPlayer
	waitmovement 0
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 60
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExit
	waitmovement 0
	removeobject LOCALID_SLATEPORT_SCOTT
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 10, 12
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_DOWN
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
	addvar VAR_SCOTT_STATE, 1
	releaseall
	end

SlateportCity_Movement_PlayerFaceScott:
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

SlateportCity_Movement_ScottApproachPlayer:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_Movement_ScottExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

SlateportCity_EventScript_EnergyGuru::
	lock
	faceplayer
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
	waitmessage
	pokemart SlateportCity_Pokemart_EnergyGuru
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_Pokemart_EnergyGuru:
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CARBOS
	.2byte ITEM_ZINC
	.2byte ITEM_CALCIUM
	.2byte ITEM_HP_UP
	pokemartlistend

SlateportCity_EventScript_EffortRibbonWoman::
	lock
	faceplayer
	bufferleadmonspeciesname STR_VAR_1
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message SlateportCity_Text_ReceivedEffortRibbon
	waitfanfare
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
	special GiveLeadMonEffortRibbon
	release
	end

SlateportCity_EventScript_MonEVsNotMaxed::
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_MonHasEffortRibbon::
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Cook::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_CookSternInterview::
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_OldWoman::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_OldWomanSternInterview::
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Girl::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_GirlSternInterview::
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_GirlSecretBase::
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_RichBoy::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_RichBoySternInterview::
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_FatMan::
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
	end

SlateportCity_EventScript_FatManSternInterview::
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
	end

SlateportCity_EventScript_Man1::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Man1SternInterview::
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Woman1::
	lock
	faceplayer
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Woman1AquaGone::
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_BattleTentSign::
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
	end

SlateportCity_EventScript_SternsShipyardSign::
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_EventScript_SternsShipyardNearsCompletion::
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_EventScript_SternsShipyardFerryComplete::
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_EventScript_PokemonFanClubSign::
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
	end

SlateportCity_EventScript_OceanicMuseumSign::
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
	end

SlateportCity_EventScript_CitySign::
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
	end

SlateportCity_EventScript_MarketSign::
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
	end

SlateportCity_EventScript_HarborSign::
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_EventScript_HarborSignFerryComplete::
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_EventScript_NameRatersHouseSign::
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
	end

SlateportCity_EventScript_Maniac::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
	release
	end

@ Unclear if the text here was meant to be different, but its not
SlateportCity_EventScript_ManiacSternInterview::
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Woman2::
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
	end

SlateportCity_EventScript_Sailor1::
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
	end

SlateportCity_EventScript_Sailor2::
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
	end

SlateportCity_EventScript_PokefanF::
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
	end

SlateportCity_EventScript_Man2::
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
	end

SlateportCity_EventScript_AquaGrunt1::
	lock
	faceplayer
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_GRUNT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt2::
	lock
	faceplayer
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_GRUNT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt3::
	lock
	faceplayer
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_GRUNT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt4::
	lock
	faceplayer
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_GRUNT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt5::
	lock
	faceplayer
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_GRUNT_5, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt6::
	lock
	faceplayer
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_GRUNT_6, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt7::
	lock
	faceplayer
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_GRUNT_7, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt8::
	lock
	faceplayer
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_GRUNT_8, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt9::
	lock
	faceplayer
	playse SE_PIN
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_Delay48
	waitmovement 0
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
	waitmovement 0
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
	waitmovement 0
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
	waitmovement 0
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
	waitmovement 0
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
	waitmovement 0
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_Movement_DelayAquaGrunt:
	delay_16
	delay_16
	step_end

SlateportCity_EventScript_AquaGrunt10::
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
	end

SlateportCity_EventScript_AquaGrunt11::
	lock
	faceplayer
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_GRUNT_11, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_DollClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_PokemartDecor_Dolls:
	.2byte DECOR_AZURILL_DOLL
	.2byte DECOR_MARILL_DOLL
	.2byte DECOR_SKITTY_DOLL
	pokemartlistend

SlateportCity_EventScript_ComeBackWithSecretPower::
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_DecorClerk::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
	message gText_HowMayIServeYou
	waitmessage
	pokemartdecoration SlateportCity_PokemartDecor
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_PokemartDecor:
	.2byte DECOR_RED_BRICK
	.2byte DECOR_BLUE_BRICK
	.2byte DECOR_YELLOW_BRICK
	.2byte DECOR_RED_BALLOON
	.2byte DECOR_BLUE_BALLOON
	.2byte DECOR_YELLOW_BALLOON
	.2byte DECOR_C_LOW_NOTE_MAT
	.2byte DECOR_D_NOTE_MAT
	.2byte DECOR_E_NOTE_MAT
	.2byte DECOR_F_NOTE_MAT
	.2byte DECOR_G_NOTE_MAT
	.2byte DECOR_A_NOTE_MAT
	.2byte DECOR_B_NOTE_MAT
	.2byte DECOR_C_HIGH_NOTE_MAT
	pokemartlistend

SlateportCity_EventScript_PowerTMClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SlateportCity_Pokemart_PowerTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_Pokemart_PowerTMs:
	.2byte ITEM_TM_HIDDEN_POWER
	.2byte ITEM_TM_SECRET_POWER
	pokemartlistend

@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
SlateportCity_EventScript_CaptStern::
	lockall
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_GABBY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 10
	applymovement LOCALID_SLATEPORT_TY, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 25
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceStern
	applymovement LOCALID_SLATEPORT_GABBY, SlateportCity_Movement_GabbyExit
	applymovement LOCALID_SLATEPORT_TY, SlateportCity_Movement_TyExit
	waitmovement 0
	removeobject LOCALID_SLATEPORT_GABBY
	removeobject LOCALID_SLATEPORT_TY
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
	applymovement LOCALID_SLATEPORT_COOK, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_SLATEPORT_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_SLATEPORT_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
	applymovement LOCALID_SLATEPORT_RICH_BOY, Common_Movement_QuestionMark
	applymovement LOCALID_SLATEPORT_MAN_1, SlateportCity_Movement_ManConcern
	waitmovement 0
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
	playse SE_PIN
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
	waitmovement 0
	removeobject LOCALID_SLATEPORT_CAPT_STERN
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
	setvar VAR_SLATEPORT_CITY_STATE, 2
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
	waitstate
	releaseall
	end

SlateportCity_Movement_OldWomanConcern:
	delay_16
	delay_16
	emote_question_mark
	walk_in_place_faster_right
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

SlateportCity_Movement_ManConcern:
	emote_question_mark
	walk_in_place_faster_up
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

SlateportCity_Movement_GabbyExit:
	delay_16
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

SlateportCity_Movement_TyExit:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

SlateportCity_Movement_Unused:
	walk_down
	walk_in_place_faster_up
	step_end

SlateportCity_Movement_SternEnterHarbor:
	walk_right
	walk_up
	walk_up
	set_invisible
	step_end

SlateportCity_Movement_SternWatchGabbyAndTyExit:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_down
	walk_left
	step_end

SlateportCity_Movement_PlayerEnterHarbor:
	walk_in_place_faster_right
	delay_16
	delay_16
	walk_right
	walk_up
	step_end

SlateportCity_Movement_PlayerFaceStern:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_down
	step_end

SlateportCity_EventScript_Ty::
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
	end

SlateportCity_EventScript_Gabby::
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
	end

SlateportCity_EventScript_Man3::
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
	end

SlateportCity_EventScript_BerryPowderClerk::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
	giveitem ITEM_POWDER_JAR
	setflag FLAG_RECEIVED_POWDER_JAR
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_ReceivedPowderJar::
	setvar VAR_0x8004, 1
	specialvar VAR_RESULT, HasEnoughBerryPowder
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
	special DisplayBerryPowderVendorMenu
	goto SlateportCity_EventScript_ChooseBerryPowderItem
	end

SlateportCity_EventScript_ExplainBerryPowder::
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_ChooseBerryPowderItem::
	message SlateportCity_Text_ExchangeWhatWithIt
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, SlateportCity_EventScript_EnergyPowder
	case 1, SlateportCity_EventScript_EnergyRoot
	case 2, SlateportCity_EventScript_HealPowder
	case 3, SlateportCity_EventScript_RevivalHerb
	case 4, SlateportCity_EventScript_Protein
	case 5, SlateportCity_EventScript_Iron
	case 6, SlateportCity_EventScript_Carbos
	case 7, SlateportCity_EventScript_Calcium
	case 8, SlateportCity_EventScript_Zinc
	case 9, SlateportCity_EventScript_HPUp
	case 10, SlateportCity_EventScript_PPUp
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
	end

SlateportCity_EventScript_EnergyPowder::
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
	setvar VAR_0x8009, 50
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_EnergyRoot::
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
	setvar VAR_0x8009, 80
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_HealPowder::
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
	setvar VAR_0x8008, ITEM_HEAL_POWDER
	setvar VAR_0x8009, 50
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_RevivalHerb::
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
	setvar VAR_0x8009, 300
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_Protein::
	bufferitemname STR_VAR_1, ITEM_PROTEIN
	setvar VAR_0x8008, ITEM_PROTEIN
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_Iron::
	bufferitemname STR_VAR_1, ITEM_IRON
	setvar VAR_0x8008, ITEM_IRON
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_Carbos::
	bufferitemname STR_VAR_1, ITEM_CARBOS
	setvar VAR_0x8008, ITEM_CARBOS
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_Calcium::
	bufferitemname STR_VAR_1, ITEM_CALCIUM
	setvar VAR_0x8008, ITEM_CALCIUM
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_Zinc::
	bufferitemname STR_VAR_1, ITEM_ZINC
	setvar VAR_0x8008, ITEM_ZINC
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_HPUp::
	bufferitemname STR_VAR_1, ITEM_HP_UP
	setvar VAR_0x8008, ITEM_HP_UP
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_PPUp::
	bufferitemname STR_VAR_1, ITEM_PP_UP
	setvar VAR_0x8008, ITEM_PP_UP
	setvar VAR_0x8009, 3000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_CancelPowderItemSelect::
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
	special RemoveBerryPowderVendorMenu
	release
	end

SlateportCity_EventScript_TryBuyBerryPowderItem::
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
	copyvar VAR_0x8004, VAR_0x8009
	specialvar VAR_RESULT, HasEnoughBerryPowder
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
	giveitem VAR_0x8008
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
	copyvar VAR_0x8004, VAR_0x8009
	special TakeBerryPowder
	special PrintPlayerBerryPowderAmount
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
	special RemoveBerryPowderVendorMenu
	release
	end

SlateportCity_EventScript_NoRoomForBerryPowderItem::
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
	special RemoveBerryPowderVendorMenu
	release
	end

SlateportCity_EventScript_NotEnoughBerryPowder::
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
	goto SlateportCity_EventScript_ChooseBerryPowderItem
	end

SlateportCity_EventScript_ScottBattleTentScene::
	lockall
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	opendoor 10, 12
	waitdooranim
	addobject LOCALID_SLATEPORT_SCOTT
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PushPlayerDown
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitBattleTent
	waitmovement 0
	closedoor 10, 12
	waitdooranim
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
	waitmovement 0
	removeobject LOCALID_SLATEPORT_SCOTT
	addvar VAR_SCOTT_STATE, 1
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
	releaseall
	end

SlateportCity_Movement_PushPlayerDown:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

SlateportCity_Movement_PlayerWatchScottExit:
	delay_16
	walk_in_place_faster_right
	step_end

SlateportCity_Movement_ScottExitBattleTent:
	delay_8
	walk_down
	step_end

SlateportCity_Movement_ScottExitAfterBattleTent:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_EventScript_BerryCrushRankingsSign::
	lockall
	special ShowBerryCrushRankings
	waitstate
	releaseall
	end

SlateportCity_Text_EnergyGuruSellWhatYouNeed:
	.string "Ich bin der STATUSWERTE GURU!\n"
	.string "Ich werde dir verkaufen, was du\l"
	.string "brauchst!$"

SlateportCity_Text_OhYourPokemon:
	.string "Oh? Dein {STR_VAR_1}…$"

SlateportCity_Text_PleaseGiveItThisEffortRibbon:
	.string "Es hat sich enorm angestrengt!\p"
	.string "Gib ihm als Belohnung bitte dieses\n"
	.string "FLEISS-BAND.$"

SlateportCity_Text_ReceivedEffortRibbon:
	.string "{PLAYER} erhält das FLEISS-BAND.$"

SlateportCity_Text_PutEffortRibbonOnMon:
	.string "{PLAYER} steckt {STR_VAR_1} das\n"
	.string "FLEISS-BAND an.$"

SlateportCity_Text_GoForItLittleHarder:
	.string "Du musst dich mehr anstrengen.\p"
	.string "Dann gebe ich dir und deinen POKéMON\n"
	.string "ein schönes Geschenk.$"

SlateportCity_Text_EffortRibbonLooksGoodOnIt:
	.string "Oh! Dein {STR_VAR_1} sieht gut mit dem\n"
	.string "FLEISS-BAND aus!$"

SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
	.string "Das Licht dieses Leuchtturms sieht man\n"
	.string "dutzende von Kilometern weit.\p"
	.string "Ich frage mich, ob es nicht die\n"
	.string "POKéMON im Meer verwirrt.$"

SlateportCity_Text_SeaweedFullOfLife:
	.string "Ooh, schau dir das an!\p"
	.string "Das Seegras hier in dieser Gegend\n"
	.string "sieht frisch und fast lebendig aus.\p"
	.string "Es sieht aus, als könne es sich auf-\n"
	.string "richten und angreifen!$"

SlateportCity_Text_HowTownIsBornAndGrows:
	.string "Wo das Wasser sauber ist, geben die\n"
	.string "Früchte eine reiche Ernte.\p"
	.string "Und wo es eine reiche Ernte gibt, gibt\n"
	.string "es auch bald einen Markt.\p"
	.string "So entsteht und wächst eine Stadt.$"

SlateportCity_Text_SlateportWonderfulPlace:
	.string "Einkaufen, wo man die salzige Luft des\n"
	.string "Meeres einatmen kann…\p"
	.string "GRAPHITPORT CITY ist so ein toller\n"
	.string "Ort!$"

SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
	.string "Wenn du PUPPEn oder KISSEN einfach auf\n"
	.string "den Boden legst, werden sie schmutzig.\n"
	.string "\p"
	.string "Ich kaufe mir einige BACKSTEINe, auf\n"
	.string "die ich meine PUPPEn und KISSEN lege.\l"
	.string "So bleiben sie schön sauber.$"

SlateportCity_Text_GoingToCompeteInBattleTent:
	.string "Wroooaaar! Ich werde auch im KAMPFCAMP\n"
	.string "mein Können unter Beweis stellen! \p"
	.string "Aber vorher muss ich mir einige\n"
	.string "POKéMON fangen!$"

SlateportCity_Text_BushedHikingFromMauville:
	.string "Puuuh… Ich bin fix und fertig…\p"
	.string "Ich komme aus MALVENFROH CITY. Diese\n"
	.string "Stadt ist vielleicht groß! Riesengroß!\n"
	.string "\p"
	.string "Hätte ich das gewusst, wäre ich mit\n"
	.string "dem RAD gekommen.$"

SlateportCity_Text_EveryoneCallsHimCaptStern:
	.string "Der Typ, der das MUSEUM gebaut\n"
	.string "hat, ist auch der Leiter eines Teams\n"
	.string "zur\l"
	.string "Erforschung der Tiefsee.\p"
	.string "Daher nennt ihn jeder KAPT. BRIGG.$"

SlateportCity_Text_WhatsLongLineOverThere:
	.string "Was ist das dort drüben?\n"
	.string "Diese Menschenansammlung…$"

SlateportCity_Text_VisitedMuseumOften:
	.string "Als ich noch ein Kind war, war ich oft\n"
	.string "in dem MUSEUM.\p"
	.string "Ich habe danach immer von den\n"
	.string "Mysterien des Meeres geträumt.$"

SlateportCity_Text_QuitPushing:
	.string "Hey, du da! Hör auf zu drängeln!\n"
	.string "Wir stehen hier ordentlich an!$"

SlateportCity_Text_AquaHasPolicy:
	.string "TEAM AQUA verfolgt die Strategie des\n"
	.string "Versammelns und Verteilens.$"

SlateportCity_Text_BossIsBrilliant:
	.string "Unser BOSS ist brillant.\p"
	.string "Wozu er jetzt wohl Interesse am\n"
	.string "MUSEUM zeigt?$"

SlateportCity_Text_WhatsNewSchemeIWonder:
	.string "Was hat diese neue Masche zu bedeuten?\n"
	.string "\p"
	.string "Unser BOSS ist richtig Furcht ein-\n"
	.string "flößend, wenn er so abgedreht ist. Ich\l"
	.string "halte lieber Abstand und frage nicht…$"

SlateportCity_Text_ShouldTakeItAll:
	.string "Wenn es im MUSEUM etwas Brauchbares\n"
	.string "gibt, dann müssen wir das an uns\l"
	.string "nehmen!$"

SlateportCity_Text_DontButtIn:
	.string "Hey, du! Du willst dich doch wohl\n"
	.string "nicht vordrängeln!?!$"

SlateportCity_Text_RemindsMeOfLongLineForGames:
	.string "Eine lange Schlange, was?\p"
	.string "Erinnert mich an die Zeiten, als ich\n"
	.string "Ewigkeiten anstand, um mir die\n"
	.string "neuesten\l"
	.string "brandheißen Spiele zu kaufen…$"

SlateportCity_Text_WhyAreWeLiningUp:
	.string "Warum stehen wir hier eigentlich an\n"
	.string "und bezahlen? Wir sollten einfach\l"
	.string "hineingehen.$"

SlateportCity_Text_WhatDoYouWant:
	.string "Was? Wie?\n"
	.string "Was willst du?!?$"

SlateportCity_Text_IllReadSignForYou:
	.string "Du willst wissen, was auf dem Schild\n"
	.string "steht? Ich lese es dir vor.$"

SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
	.string "Mal sehen…\p"
	.string "Äh… Ich glaube, da steht etwas wie\n"
	.string "“Das Leben im Meer ist unendlich\l"
	.string "vielfältig.”\p"
	.string "Ja, genau. Ich bin sicher, das steht\n"
	.string "da!$"

SlateportCity_Text_ShouldveBroughtMyGameBoy:
	.string "Grummel…\p"
	.string "Ich hätte meinen Game Boy Advance\n"
	.string "mitbringen sollen, dann wäre mir jetzt\l"
	.string "nicht so langweilig…\p"
	.string "Das dauert… Grummel…$"

SlateportCity_Text_HotSpringsAfterOperation:
	.string "Wenn diese Operation beendet ist,\n"
	.string "nehme ich dich mit zu den Heißen\l"
	.string "Quellen!\p"
	.string "Das hat unser Boss zu mir gesagt!\n"
	.string "Ich kann es kaum erwarten!$"

SlateportCity_Text_SeaIsSoWet:
	.string "Das Meer ist wirklich überwältigend…\p"
	.string "Ob es durch die vergossenen Tränen der\n"
	.string "POKéMON entstanden ist?$"

SlateportCity_Text_SinkOldBoats:
	.string "Weißt du, was mit alten, nicht mehr\n"
	.string "seetüchtigen Schiffen gemacht wird?\p"
	.string "Sie werden im Meer versenkt und so\n"
	.string "zu Lebensraum für POKéMON.$"

SlateportCity_Text_BuyTooMuch:
	.string "Immer wenn ich hierher komme, vergesse\n"
	.string "ich mich und kaufe wie bescheuert ein.$"

SlateportCity_Text_GetNameRaterToHelpYou:
	.string "Wenn du die Kosenamen deiner POKéMON\n"
	.string "ändern willst, solltest du den NAMEN-\l"
	.string "BEWERTER um Hilfe bitten.$"

SlateportCity_Text_CantChangeTradeMonName:
	.string "Erhältst du ein POKéMON durch Tausch,\n"
	.string "kannst du den Kosenamen nicht ändern.\n"
	.string "\p"
	.string "Die Liebe des ursprünglichen TRAINERs\n"
	.string "drückt sich in dem Kosenamen aus.$"

SlateportCity_Text_BattleTentBuiltRecently:
	.string "In GRAPHITPORT CITY wurde vor kurzem\n"
	.string "ein KAMPFCAMP aufgebaut.\p"
	.string "ARENen machen Spaß, aber die KAMPF-\n"
	.string "CAMPs sind einfach unglaublich!\p"
	.string "Such dir aber erst ein paar starke\n"
	.string "POKéMON, bevor du in ein KAMPFCAMP\l"
	.string "gehst.$"

SlateportCity_Text_CaptSternBeingInterviewed:
	.string "Ich habe gehofft, es wäre ein\n"
	.string "berühmter\n"
	.string "Star. Dann hätte ich mir ein Autogramm\l"
	.string "geben lassen.\p"
	.string "Aber wer wird denn da interviewt?\n"
	.string "Ist das nicht KAPT. BRIGG?$"

SlateportCity_Text_InterviewerSoCool:
	.string "Die Interviewerin ist so cool und\n"
	.string "hübsch.\p"
	.string "Wenn ich groß bin, werde ich ein\n"
	.string "weltberühmter Journalist.$"

SlateportCity_Text_SternSaysDiscoveredSomething:
	.string "KAPT. BRIGG sagt, sie hätten etwas auf\n"
	.string "dem Meeresgrund entdeckt.\p"
	.string "Ich frage mich, was das wohl ist.\n"
	.string "Was könnte das sein???$"

SlateportCity_Text_CaptainComeBackWithBigFish:
	.string "Was ist denn hier los?\p"
	.string "Hat KAPT. BRIGG etwa einen Riesen-\n"
	.string "fisch vom Meeresgrund mitgebracht?$"

SlateportCity_Text_AmIOnTV:
	.string "Hey! Nimmst du mich auf?\n"
	.string "Komm ich jetzt ins Fernsehen?$"

SlateportCity_Text_CaptainsACelebrity:
	.string "Ein TV-Interview! Hier!!!\n"
	.string "Der KAPITÄN ist ein Star!$"

SlateportCity_Text_BigSmileForCamera:
	.string "UDO: Okay, KAPT. BRIGG, schenken Sie\n"
	.string "unserer Kamera Ihr schönstes Lächeln!$"

SlateportCity_Text_MostInvaluableExperience:
	.string "PIA: Ich verstehe, ich verstehe. Sie\n"
	.string "haben eine unschätzbare Entdeckung\l"
	.string "gemacht…$"

SlateportCity_Text_SternMoveAheadWithExploration:
	.string "KAPT. BRIGG: Ja, genau. Wir haben vor,\n"
	.string "unsere Expedition weiter fortzuführen.$"

SlateportCity_Text_GabbyWonderfulThanksForInterview:
	.string "PIA: Das ist wunderbar, KAPT. BRIGG!\n"
	.string "Vielen Dank, dass Sie trotz Ihres\n"
	.string "vollen\l"
	.string "Terminkalenders Zeit für uns gefunden\l"
	.string "haben!\p"
	.string "Wir hoffen, Sie bald wieder zu neuen\n"
	.string "aufregenden Funden interviewen zu\l"
	.string "dürfen!$"

SlateportCity_Text_SternWhewFirstInterview:
	.string "KAPT. BRIGG: Puuh…\p"
	.string "Das war das erste Mal, dass ich für\n"
	.string "eine\n"
	.string "Fernsehsendung interviewt wurde. Ich\l"
	.string "war vielleicht nervööös!$"

SlateportCity_Text_OhPlayerWeMadeDiscovery:
	.string "Oh! {PLAYER}{KUN}!\n"
	.string "Gut siehst du aus!\p"
	.string "Wir haben bei unserer letzten Tiefsee-\n"
	.string "Expedition eine großartige Entdeckung\l"
	.string "gemacht. \p"
	.string "Wir haben auf der ROUTE 128 eine\n"
	.string "Unter- wasserhöhle entdeckt.\p"
	.string "Wir glauben, es ist die Höhle eines\n"
	.string "POKéMON, das schon lange ausge-\l"
	.string "storben ist.$"

SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
	.string "Hähähä… KAPT. BRIGG, nehme ich an.\p"
	.string "Wir von TEAM AQUA werden das U-Boot\n"
	.string "in unsere Gewalt nehmen!\p"
	.string "Eure Einwände sind bedeutungslos!\n"
	.string "Wir erwarten absolute Kooperation!\p"
	.string "Hähähä…\n"
	.string "Mal sehen, was ihr zu den Plänen von\l"
	.string "TEAM AQUA sagt!$"

SlateportCity_Text_SternWhatWasAllThat:
	.string "KAPT. BRIGG: Was soll das Ganze?\p"
	.string "Sieht aus, als benutze jemand ein\n"
	.string "Megaphon…\p"
	.string "Wo kommt das her?$"

SlateportCity_Text_FromHarborTryingToTakeSub:
	.string "Das kommt von der Anlegestelle!\p"
	.string "Das U-Boot!\n"
	.string "Jemand versucht, es zu stehlen!$"

SlateportCity_Text_PleaseComeWithMe:
	.string "{PLAYER}{KUN}! Bitte, komm mit mir!$"

SlateportCity_Text_BattleTentSign:
	.string "KAMPFCAMP GRAPHITPORT CITY\n"
	.string "“Finde es! Das ultimative POKéMON!”$"

SlateportCity_Text_SternsShipyardWantedSign:
	.string "BRIGGWERFT\p"
	.string "“Gesucht: Ein erfahrener Seemann,\n"
	.string "der die Gefahr nicht scheut.”$"

SlateportCity_Text_SternsShipyardNearsCompletion:
	.string "BRIGGWERFT\p"
	.string "“Die Fähre MS TIDE wird bald fertig\n"
	.string "gestellt sein und die Häfen von\l"
	.string "GRAPHITPORT CITY und SEEGRASULB CITY\l"
	.string "bedienen.”$"

SlateportCity_Text_SternsShipyardFerryComplete:
	.string "BRIGGWERFT\p"
	.string "“Bordkarten für die GRAPHITPORT CITY-\n"
	.string "SEEGRASULB CITY Fähre MS TIDE werden\l"
	.string "am HAFEN ausgegeben.”$"

SlateportCity_Text_PokemonFanClubSign:
	.string "POKéMON-FANCLUB\n"
	.string "“Wir rufen alle Fans der POKéMON!”$"

SlateportCity_Text_OceanicMuseumSign:
	.string "OZEANMUSEUM\p"
	.string "“Das unendliche Meer erhält\n"
	.string "alles Leben.”$"

SlateportCity_Text_CitySign:
	.string "GRAPHITPORT CITY\p"
	.string "“Der Hafen, an dem sich Menschen\n"
	.string "und POKéMON begegnen.”$"

SlateportCity_Text_MarketSign:
	.string "GRAPHITPORT CITY MARKT\n"
	.string "“Einzigartige Items, die es\l"
	.string "nirgendwo sonst gibt!”$"

SlateportCity_Text_HarborFerryUnderConstruction:
	.string "HAFEN GRAPHITPORT CITY\p"
	.string "“Die Fähre MS TIDE wird momentan\n"
	.string "in der WERFT gebaut. \p"
	.string "Die Fähre wird so bald wie möglich\n"
	.string "ihren Dienst aufnehmen.”$"

SlateportCity_Text_HarborSign:
	.string "HAFEN GRAPHITPORT CITY\p"
	.string "“Genießen Sie die entspannende Fahrt\n"
	.string "mit der Fähre MS TIDE.”$"

SlateportCity_Text_NameRatersHouseSign:
	.string "HAUS DES NAMENBEWERTERS\n"
	.string "“Bewertung von POKéMON-Kosenamen.”$"

SlateportCity_Text_ExplainBerries:
	.string "Verletzt sich ein wildes POKéMON,\n"
	.string "heilt es sich, indem es BEEREn isst.\p"
	.string "Wusstest du das?\p"
	.string "Irgendjemand hat dies beobachtet und\n"
	.string "kam so auf die Idee, aus BEEREn\n"
	.string "Medizin\l"
	.string "herzustellen.\p"
	.string "Und weißt du noch etwas?\p"
	.string "Um aus BEEREn Medizin herzustellen,\n"
	.string "muss man sie zu Pulver verarbeiten.\p"
	.string "Wusstest du das?\p"
	.string "Du scheinst sehr interessiert an\n"
	.string "BEEREn zu sein!\p"
	.string "Ich habe etwas Gutes für jemanden\n"
	.string "wie dich.$"

SlateportCity_Text_ExplainBerryPowder:
	.string "Ich habe vor kurzem in den POKéMON-\n"
	.string "CENTERn Maschinen installiert,\l"
	.string "mit denen man BEEREn mahlen kann.\p"
	.string "Du findest sie im DIREKTKLUB\n"
	.string "im oberen Stockwerk.\p"
	.string "Wusstest du das?\p"
	.string "Kannst du mit dieser Maschine\n"
	.string "BEERENPUDER für mich\lherstellen?\p"
	.string "Ich werde Medizin herstellen,\n"
	.string "wenn du mir BEERENPUDER\lbringst.$"

SlateportCity_Text_BroughtMeSomeBerryPowder:
	.string "Hast du mir BEERENPUDER\ngebracht?$"

SlateportCity_Text_ExchangeWhatWithIt:
	.string "Wogegen möchtest du ihn tauschen?$"

SlateportCity_Text_ExchangeBerryPowderForItem:
	.string "Gut, ich gebe dir {STR_VAR_1} im\n"
	.string "Austausch für deinen\lBEERENPUDER!$"

SlateportCity_Text_DontHaveEnoughBerryPowder:
	.string "Hm? Du hast nicht genügend\n"
	.string "BEERENPUDER!$"

SlateportCity_Text_FineBerryPowderTradeSomethingElse:
	.string "Das ist wirklich erstklassiger\n"
	.string "BEERENPUDER! Daraus lässt\l"
	.string "sich gute Medizin herstellen. \p"
	.string "Möchtest du noch mehr BEERENPUDER\n"
	.string "tauschen?$"

SlateportCity_Text_WhenYouGetMoreBringItToMe:
	.string "Fein! Wenn du mehr BEERENPUDER hast,\n"
	.string "kannst du mir ihn bitte geben?$"

SlateportCity_Text_ComeBackToTradeBerryPowder:
	.string "Komm einfach vorbei, wenn du\n"
	.string "BEERENPUDER tauschen möchtest! \p"
	.string "Ich leite hier den Bazar und bin daher\n"
	.string "ständig hier. \p"
	.string "Wusstest du das?$"

SlateportCity_Text_YouDroveTeamAquaAway:
	.string "SCOTT: Wie?\n"
	.string "Ich bin mir sicher, dich irgendwo\n"
	.string "schon\l"
	.string "mal gesehen zu haben.\p"
	.string "Habe ich mich eigentlich schon\n"
	.string "vorgestellt? Ich bin SCOTT.\p"
	.string "Eben ist TEAM AQUA von hier geflohen,\n"
	.string "als sei eine Horde Hornissen hinter\l"
	.string "ihnen her.\p"
	.string "Lass mich raten - du hast sie verjagt?$"

SlateportCity_Text_MaybeThisTrainer:
	.string "SCOTT: Hmm…\n"
	.string "Vielleicht, vielleicht dieser TRAINER…$"

SlateportCity_Text_LetsRegisterEachOther:
	.string "SCOTT: Sehr gut! Ich denke, wir werden\n"
	.string "gute Freunde werden. \p"
	.string "Wir sollten uns in unseren POKéNAVs\n"
	.string "eintragen. \p"
	.string "… … … … …\n…$"

SlateportCity_Text_RegisteredScott:
	.string "Dieser SCOTT wurde im POKéNAV-\n"
	.string "Verzeichnis eingetragen.$"

SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
	.string "SCOTT: Ich würde dich gerne auf deinem\n"
	.string "Weg begleiten, aber natürlich möchte\l"
	.string "ich auch andere Talente im Auge \p"
	.string "behalten. Daher werde ich jetzt andere\n"
	.string "Orte besuchen. \p"
	.string "Wir sehen uns, {PLAYER}{KUN}!$"

SlateportCity_Text_TakingBattleTentChallenge:
	.string "SCOTT: Oh, hey!\n"
	.string "Wenn das nicht {PLAYER}{KUN} ist!\p"
	.string "Lass mich raten, {PLAYER}{KUN} - du\l"
	.string "stellst\n"
	.string "dich der Herausforderung im KAMPFCAMP?\p"
	.string "\p"
	.string "Yeah! Eine gute Idee!\n"
	.string "Eine wirklich sehr gute Idee!\p"
	.string "Denn ein starker TRAINER ist wie\n"
	.string "geschaffen für das KAMPFCAMP! \p"
	.string "Gib dein Bestes!$"
