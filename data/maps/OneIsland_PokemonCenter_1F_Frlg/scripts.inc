OneIsland_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	map_script MAP_SCRIPT_ON_LOAD, OneIsland_PokemonCenter_1F_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_PokemonCenter_1F_OnFrame
	.byte 0

OneIsland_PokemonCenter_1F_OnLoad::
	call_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
	call_if_set FLAG_IS_CHAMPION, OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
	end

OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile::
	setmetatile 13, 4, METATILE_PokemonCenterFrlg_NetworkMachine_Ruby, 1
	return

OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile::
	setmetatile 16, 4, METATILE_PokemonCenterFrlg_NetworkMachine_Sapphire, 1
	return

OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn::
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
	setmetatile 14, 4, METATILE_PokemonCenterFrlg_NetworkMachine_ScreenLeft_On, 1
	setmetatile 15, 4, METATILE_PokemonCenterFrlg_NetworkMachine_ScreenRight_On, 1
	return

OneIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_ONE_ISLAND
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6, OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2, OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos
	end

OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone::
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7
	return

OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos::
	setobjectxyperm LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, 9, 8
	setobjectmovementtype LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, MOVEMENT_TYPE_FACE_UP
	setobjectxyperm LOCALID_CELIO, 15, 6
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_UP
	return

OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos::
	setobjectxyperm LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, 14, 7
	setobjectmovementtype LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, MOVEMENT_TYPE_FACE_LEFT
	setobjectxyperm LOCALID_CELIO, 14, 8
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_LEFT
	return

OneIsland_PokemonCenter_1F_OnFrame::
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene
	.2byte 0

OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_BillHeyThereCelio
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_CELIO, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_CELIO, Common_Movement_Delay48
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCantBelieveYouCameOut
	msgbox OneIsland_PokemonCenter_1F_Text_BillHowsYourResearchComing
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_ThisIsMyBuddyCelio
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	call_if_set FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp
	call_if_unset FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_CelioThatsReallyImpressive
	msgbox OneIsland_PokemonCenter_1F_Text_BillBringMeUpToSpeed
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPCsCantLinkWithYours
	closemessage
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_BillLetMeHelpYou
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_CanYouDeliverThisMeteoritePlayer
	msgreceiveditem OneIsland_PokemonCenter_1F_Text_AcceptedMeteoriteFromBill, ITEM_METEORITE, 1, MUS_RG_OBTAIN_KEY_ITEM
	additem ITEM_METEORITE
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPleaseTakeThis
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ObtainedTriPass, ITEM_TRI_PASS, 1, MUS_RG_OBTAIN_KEY_ITEM
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetsYouTravelBetweenIslands
	call_if_ge VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage
	call_if_lt VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap
	setflag FLAG_SYS_SEVII_MAP_123
	msgbox OneIsland_PokemonCenter_1F_Text_BillCatchYouLater
	closemessage
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	setflag FLAG_SYS_PC_STORAGE_DISABLED
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1
	releaseall
	end

OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp::
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsReigningPokemonChamp
	return

OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp::
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsRisingPokemonChamp
	return

OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
	message OneIsland_PokemonCenter_1F_Text_ReceivedExtraPageForTownMap
	waitmessage
	waitfanfare
	call EventScript_RestorePrevTextColor
	return

OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap::
	setflag FLAG_HIDE_TOWN_MAP
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ReceivedTownMap, ITEM_TOWN_MAP, 1, MUS_RG_OBTAIN_KEY_ITEM
	return

OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio::
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio::
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_in_place_faster_right
	step_end

@ Unused
OneIsland_PokemonCenter_1F_Movement_WalkUp:
	walk_up
	step_end

@ Unused
OneIsland_PokemonCenter_1F_Movement_StepAsideLeft::
	walk_left
	walk_in_place_faster_right
	step_end

OneIsland_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

OneIsland_PokemonCenter_1F_EventScript_Bill::
	lock
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll
	msgbox OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis
	release
	end

OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll::
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_FacePlayer
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_GotPCWorkingStrollAWhileMore
	release
	end

OneIsland_PokemonCenter_1F_EventScript_Celio::
	lock
	faceplayer
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7, OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6, OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire
	goto_if_set FLAG_RECOVERED_SAPPHIRE, OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
	goto_if_set FLAG_GOT_RUBY, OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby
	specialvar VAR_RESULT, IsNationalPokedexEnabled
	goto_if_eq VAR_RESULT, TRUE, OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3, OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex
	msgbox OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost
	closemessage
	applymovement LOCALID_CELIO, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact::
	msgbox OneIsland_PokemonCenter_1F_Text_CelioHearingRumorsAboutYou
	random 3
	goto_if_eq VAR_RESULT, 0, OneIsland_PokemonCenter_1F_EventScript_BillFact1
	goto_if_eq VAR_RESULT, 1, OneIsland_PokemonCenter_1F_EventScript_BillFact2
	famechecker FAMECHECKER_BILL, 5
	msgbox OneIsland_PokemonCenter_1F_Text_BillCantStomachMilk
	release
	end

OneIsland_PokemonCenter_1F_EventScript_BillFact1::
	famechecker FAMECHECKER_BILL, 3
	msgbox OneIsland_PokemonCenter_1F_Text_BillsFirstMonWasAbra
	release
	end

OneIsland_PokemonCenter_1F_EventScript_BillFact2::
	famechecker FAMECHECKER_BILL, 4
	msgbox OneIsland_PokemonCenter_1F_Text_BillsHometownInGoldenrod
	release
	end

OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire::
	msgbox OneIsland_PokemonCenter_1F_Text_WishYouBestOfLuck
	release
	end

OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_OBTAIN_TMHM
	message OneIsland_PokemonCenter_1F_Text_HandedSapphireToCelio
	waitmessage
	waitfanfare
	call EventScript_RestorePrevTextColor
	removeitem ITEM_SAPPHIRE
	msgbox OneIsland_PokemonCenter_1F_Text_ThankYouGiveMeTime
	closemessage
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
	waitmovement 0
	playse SE_CLICK
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
	special DrawWholeMapView
	msgbox OneIsland_PokemonCenter_1F_Text_OkayThisIsGood
	closemessage
	delay 60
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
	waitmovement 0
	delay 30
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
	waitmovement 0
	delay 40
	playse SE_PC_ON
	call OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
	special DrawWholeMapView
	msgbox OneIsland_PokemonCenter_1F_Text_LinkedUpWithLanette
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_ManagedToLinkWithHoennThankYou
	special SetPostgameFlags
	setflag FLAG_IS_CHAMPION
	setflag FLAG_HIDE_CERULEAN_CAVE_GUARD
	setflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6
	special InitRoamer
	release
	end

OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass::
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands
	release
	end

OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby::
	msgbox OneIsland_PokemonCenter_1F_Text_OhThats
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_OBTAIN_TMHM
	message OneIsland_PokemonCenter_1F_Text_HandedRubyToCelio
	waitmessage
	waitfanfare
	call EventScript_RestorePrevTextColor
	closemessage
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
	waitmovement 0
	playse SE_CLICK
	call OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
	special DrawWholeMapView
	delay 30
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_MayIAskOneMoreFavor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
	end

OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio::
	msgbox OneIsland_PokemonCenter_1F_Text_PleaseINeedYourHelp, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
	end

OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass::
	msgbox OneIsland_PokemonCenter_1F_Text_AnotherGemstoneInSeviiIslands
	removeitem ITEM_RUBY
	removeitem ITEM_TRI_PASS
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
	additem ITEM_RAINBOW_PASS
	setflag FLAG_SYS_SEVII_MAP_4567
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
	message OneIsland_PokemonCenter_1F_Text_ReturnedTriPassForRainbowPass
	waitmessage
	waitfanfare
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
	message OneIsland_PokemonCenter_1F_Text_ObtainedExtraMapPage
	waitmessage
	waitfanfare
	call EventScript_RestorePrevTextColor
	goto OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
	end

OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby::
	msgbox OneIsland_PokemonCenter_1F_Text_TryingToFindGem
	release
	end

OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby::
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCaughtMoreMonMaybeICanBeUseful
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_YoullBeTradingFromTrainersFarAway
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_NeedsSpecialGemstone
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 1
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
	release
	end

OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex::
	msgbox OneIsland_PokemonCenter_1F_Text_CelioImModifyingMyNetworkMachine
	release
	end

OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine::
	walk_in_place_up
	delay_8
	walk_in_place_up
	step_end

OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine::
	walk_in_place_faster_up
	walk_in_place_up
	delay_16
	walk_in_place_up
	walk_in_place_up
	step_end

OneIsland_PokemonCenter_1F_EventScript_LittleBoy::
	msgbox OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt, MSGBOX_NPC
	end

OneIsland_PokemonCenter_1F_EventScript_Hiker::
	msgbox OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland, MSGBOX_NPC
	end

OneIsland_PokemonCenter_1F_EventScript_BattleGirl::
	lock
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked
	msgbox OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend
	release
	end

OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked::
	msgbox OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend
	release
	end

OneIsland_PokemonCenter_1F_EventScript_NetworkMachine::
	lockall
	goto_if_set FLAG_IS_CHAMPION, OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto
	msgbox OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment
	releaseall
	end

OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto::
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKanto
	releaseall
	end

OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn::
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKantoAndHoenn
	releaseall
	end

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerTop::
	lockall
	setvar VAR_TEMP_1, 1
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidTop::
	lockall
	setvar VAR_TEMP_1, 2
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidBottom::
	lockall
	setvar VAR_TEMP_1, 3
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerBottom::
	lockall
	setvar VAR_TEMP_1, 4
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene::
	textcolor NPC_TEXT_COLOR_MALE
	playse SE_PIN
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_BillOhHeyPlayer
	closemessage
	call_if_eq VAR_TEMP_1, 1, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop
	call_if_eq VAR_TEMP_1, 2, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop
	call_if_eq VAR_TEMP_1, 3, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom
	call_if_eq VAR_TEMP_1, 4, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom
	delay 10
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeGotItDone
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_CelioJobWentQuick
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_BillYouveLearnedALot
	msgbox OneIsland_PokemonCenter_1F_Text_CelioOhReallyEhehe
	closemessage
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 10
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 15
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeShouldHeadBackToKanto
	closemessage
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 15
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPromiseIllShowYouAroundSometime
	closemessage
	delay 25
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerExit
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, OneIsland_PokemonCenter_1F_Movement_BillExit
	waitmovement 0
	playse SE_EXIT
	setflag FLAG_HIDE_ONE_ISLAND_POKECENTER_BILL
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3
	clearflag FLAG_HIDE_CINNABAR_BILL
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 3
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
	setvar VAR_0x8006, SEAGALLOP_CINNABAR_ISLAND
	goto EventScript_SetSail
	end

OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop::
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop
	waitmovement 0
	return

OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop::
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop
	waitmovement 0
	return

OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom::
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom
	waitmovement 0
	return

OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom::
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom
	waitmovement 0
	return

OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop::
	walk_right
	walk_down
	walk_in_place_faster_right
	step_end

OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop::
	walk_right
	step_end

OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom::
	walk_right
	walk_up
	walk_in_place_faster_right
	step_end

OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom::
	walk_right
	walk_up
	walk_up
	walk_in_place_faster_right
	step_end

@ Unused
OneIsland_PokemonCenter_1F_Movement_DelayWalkInPlaceLeft::
	delay_16
	delay_16
	delay_4
	walk_in_place_faster_left
	step_end

@ Unused
OneIsland_PokemonCenter_1F_Movement_WalkInPlaceDown::
	walk_in_place_fast_down
	step_end

OneIsland_PokemonCenter_1F_Movement_PlayerExit::
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

OneIsland_PokemonCenter_1F_Movement_BillExit::
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

OneIsland_PokemonCenter_1F_Text_BillHeyThereCelio::
	.string "Bill: Hallo! Celio!$"

OneIsland_PokemonCenter_1F_Text_CelioCantBelieveYouCameOut::
	.string "Celio: Bill!\n"
	.string "Ich kann nicht glauben, dass du\l"
	.string "hierher kommst!$"

OneIsland_PokemonCenter_1F_Text_BillHowsYourResearchComing::
	.string "Bill: Selbstverständlich!\n"
	.string "Was macht deine Forschungsarbeit?\p"
	.string "… oh, warte mal!$"

OneIsland_PokemonCenter_1F_Text_ThisIsMyBuddyCelio::
	.string "{PLAYER}, das ist mein Freund\n"
	.string "Celio!\l"
	.string "Er ist ein passionierter PC Maniac!$"

OneIsland_PokemonCenter_1F_Text_PlayerIsRisingPokemonChamp::
	.string "Celio, das ist {PLAYER}! Ein\n"
	.string "aufstrebender Trainer auf dem\l"
	.string "Weg zum Pokémon Champ!$"

OneIsland_PokemonCenter_1F_Text_PlayerIsReigningPokemonChamp::
	.string "Celio, das ist {PLAYER}! Der\n"
	.string "amtierende Pokémon Champ!$"

OneIsland_PokemonCenter_1F_Text_CelioThatsReallyImpressive::
	.string "Celio: Das ist beeindruckend!\p"
	.string "Es tut mir Leid, aber ich habe\n"
	.string "nichts für das Kämpfen übrig.\p"
	.string "Egal! Freut mich, dich\n"
	.string "kennen zu lernen!$"

OneIsland_PokemonCenter_1F_Text_BillBringMeUpToSpeed::
	.string "Bill: Was gibt es Neues?\n"
	.string "Was macht deine Maschine?$"

OneIsland_PokemonCenter_1F_Text_CelioPCsCantLinkWithYours::
	.string "Celio: Sie läuft gut, aber wir sind\n"
	.string "einfach zu weit entfernt.\p"
	.string "Zwischen den PCs auf dieser\n"
	.string "Insel und deinem kann keine\l"
	.string "Verbindung hergestellt werden.$"

OneIsland_PokemonCenter_1F_Text_BillLetMeHelpYou::
	.string "Bill: Oh, wirklich?\n"
	.string "Lass mich mal sehen!\p"
	.string "… Moment noch…\n"
	.string "Ich denke, wir kriegen das hin.\l"
	.string "Darf ich dir helfen?$"

OneIsland_PokemonCenter_1F_Text_CanYouDeliverThisMeteoritePlayer::
	.string "{PLAYER}, darf ich dich bitten, vor\n"
	.string "der Tür auf mich zu warten?\p"
	.string "… kann ich dich um einen\n"
	.string "Gefallen bitten?\p"
	.string "Die Nachbarinsel heißt Eiland\n"
	.string "Zwei!\p"
	.string "Dort gibt es jemanden, der die\n"
	.string "Spielhalle betreibt.\p"
	.string "Er hat dieses Faible für seltene\n"
	.string "Steine und Juwelen.\p"
	.string "Wir bleiben in Kontakt!\p"
	.string "Darf ich dich bitten, diesen\n"
	.string "Meteoriten zu ihm zu bringen?$"

OneIsland_PokemonCenter_1F_Text_AcceptedMeteoriteFromBill::
	.string "{PLAYER} nahm den Meteoriten\n"
	.string "von Bill.$"

OneIsland_PokemonCenter_1F_Text_CelioPleaseTakeThis::
	.string "Celio: {PLAYER}, nimm dies mit, wenn\n"
	.string "du nach Eiland Zwei gehst!$"

OneIsland_PokemonCenter_1F_Text_PassLetsYouTravelBetweenIslands::
	.string "Es ist ein Pass für die Fähre,\n"
	.string "die zwischen den Inseln fährt.\p"
	.string "Damit kannst du Eiland Eins,\n"
	.string "Zwei und Drei bereisen.\p"
	.string "Oh, das kannst du auch gebrauchen!$"

OneIsland_PokemonCenter_1F_Text_ReceivedExtraPageForTownMap::
	.string "Die Karte von {PLAYER} wurde\n"
	.string "erweitert.$"

OneIsland_PokemonCenter_1F_Text_ReceivedTownMap::
	.string "{PLAYER} erhält\n"
	.string "eine Karte!$"

OneIsland_PokemonCenter_1F_Text_BillCatchYouLater::
	.string "Bill: Ich treff dich später!\n"
	.string "Richte dem Typen einen\l"
	.string "Gruß von mir aus!$"

OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis::
	.string "Hm…\p"
	.string "Wie wäre es hiermit…$"

OneIsland_PokemonCenter_1F_Text_GotPCWorkingStrollAWhileMore::
	.string "Oh, heh, {PLAYER}!\p"
	.string "Hast du das gesehen?\n"
	.string "Der PC funktioniert!\p"
	.string "Ich muss Celio hier ein\n"
	.string "paar Dinge zeigen!\p"
	.string "Du kannst dich noch ein\n"
	.string "wenig umsehen!$"

OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost::
	.string "Es tut mir Leid, dass ich so viel\n"
	.string "Zeit von Bill beanspruche!\p"
	.string "Entschuldige bitte auch, dass ich\n"
	.string "so ein schlechter Gastgeber bin!$"

OneIsland_PokemonCenter_1F_Text_UsualPCServicesUnavailable::
	.string "Die normalen PC-Dienste sind\n"
	.string "nicht verfügbar…$"

OneIsland_PokemonCenter_1F_Text_BillOhHeyPlayer::
	.string "Bill: Oh, hallo!\n"
	.string "{PLAYER}!$"

OneIsland_PokemonCenter_1F_Text_BillWeGotItDone::
	.string "Bill: Was hat dich aufgehalten?\n"
	.string "Hast du dich amüsiert?\p"
	.string "Wir haben es geschafft!\n"
	.string "Die PCs laufen wieder!$"

OneIsland_PokemonCenter_1F_Text_CelioJobWentQuick::
	.string "Celio: Das haben wir unglaublich\n"
	.string "schnell erledigen können.\p"
	.string "Bill ist so wunderbar…$"

OneIsland_PokemonCenter_1F_Text_BillYouveLearnedALot::
	.string "Bill: Nein! Es gab für mich nicht\n"
	.string "mehr viel zu tun!\p"
	.string "Celio, das muss ich dir lassen.\n"
	.string "Du hast viel gelernt!$"

OneIsland_PokemonCenter_1F_Text_CelioOhReallyEhehe::
	.string "Celio: Oh, wirklich?\n"
	.string "Hehe…$"

OneIsland_PokemonCenter_1F_Text_BillWeShouldHeadBackToKanto::
	.string "Bill: Nun, da hast du es.\n"
	.string "Meine Arbeit ist getan.\l"
	.string "Wir können zurück nach Kanto.\p"
	.string "Celio wir sehen uns!$"

OneIsland_PokemonCenter_1F_Text_CelioPromiseIllShowYouAroundSometime::
	.string "Celio: {PLAYER}, es tut mir Leid,\n"
	.string "dass wir dich heute\l"
	.string "weggeschickt haben.\l"
	.string "Ich verspreche, dass ich dir die\l"
	.string "Gegend ein andermal zeige.$"

OneIsland_PokemonCenter_1F_Text_CelioImModifyingMyNetworkMachine::
	.string "Celio: Hallo! Du siehst sehr\n"
	.string "beschäftigt aus, wie immer!\p"
	.string "Wie es mir geht?\p"
	.string "Ich modifiziere das Netzwerk.\p"
	.string "Wenn ich fertig bin, sollst du die\n"
	.string "erste Person sein, die das Netzwerk\l"
	.string "benutzt, {PLAYER}!$"

OneIsland_PokemonCenter_1F_Text_CelioCaughtMoreMonMaybeICanBeUseful::
	.string "Celio: {PLAYER}, wie ist es bei dir\n"
	.string "gelaufen?\p"
	.string "Oh, aha!\n"
	.string "Du hast mehr Pokémon gefangen!\p"
	.string "Weißt du was?\n"
	.string "Es könnte vielleicht hilfreich sein.$"

OneIsland_PokemonCenter_1F_Text_YoullBeTradingFromTrainersFarAway::
	.string "Ich modifiziere momentan\n"
	.string "das Netzwerk.\p"
	.string "Ich richte es so ein, dass ein\n"
	.string "Tausch über lange Distanzen\l"
	.string "möglich ist.\l"
	.string "Wenn ich fertig bin, kannst du\l"
	.string "exotische Pokémon mit Trainern\l"
	.string "von nah und fern tauschen.$"

OneIsland_PokemonCenter_1F_Text_NeedsSpecialGemstone::
	.string "Aber es gibt einen Haken!\p"
	.string "Damit die Maschine funktioniert,\n"
	.string "brauche ich einen speziellen\l"
	.string "Edelstein.\l"
	.string "Er soll hier auf Eiland Eins sein,\l"
	.string "aber ich habe ihn noch nicht\l"
	.string "gefunden!\p"
	.string "Wer weiß, wo er ist?$"

OneIsland_PokemonCenter_1F_Text_TryingToFindGem::
	.string "Ich habe versucht, den Edelstein\n"
	.string "während meiner Forschungen\l"
	.string "zu finden.\l"
	.string "Am Ende habe ich weder beim\l"
	.string "Edelstein noch beim Forschen\l"
	.string "Fortschritte gemacht…\p"
	.string "Wenn ich mich auf Bill verlassen\n"
	.string "würde, wäre mein Fortschritt\l"
	.string "gewiss.\l"
	.string "Aber dieses Mal möchte ich es\l"
	.string "allein schaffen.$"

OneIsland_PokemonCenter_1F_Text_OhThats::
	.string "Oh!\n"
	.string "Da-das ist…$"

OneIsland_PokemonCenter_1F_Text_HandedRubyToCelio::
	.string "{PLAYER} gab Celio\n"
	.string "den Rubin!$"

OneIsland_PokemonCenter_1F_Text_MayIAskOneMoreFavor::
	.string "Dankeschön!\n"
	.string "{PLAYER}, du bist einzigartig!\p"
	.string "…………\n"
	.string "……\p"
	.string "Ähm… darf ich dich noch um\n"
	.string "einen weiteren Gefallen bitten?$"

OneIsland_PokemonCenter_1F_Text_PleaseINeedYourHelp::
	.string "Es… es ist nichts Verrücktes.\n"
	.string "Bitte, ich brauche deine Hilfe!$"

OneIsland_PokemonCenter_1F_Text_AnotherGemstoneInSeviiIslands::
	.string "Während meines Studiums der\n"
	.string "Edelsteine, habe ich etwas\l"
	.string "Wichtiges herausgefunden.\l"
	.string "Es gibt einen weiteren Edelstein,\l"
	.string "der zum Rubin gehört.\p"
	.string "Der andere Edelstein wird auf\n"
	.string "Sevii Eiland vermutet.\p"
	.string "{PLAYER}, bitte, finde den anderen\n"
	.string "Edelstein.\p"
	.string "{PLAYER}, gib mir bitte deinen Pass\n"
	.string "für die Fähre und die Karte.$"

OneIsland_PokemonCenter_1F_Text_ReturnedTriPassForRainbowPass::
	.string "{PLAYER} gab den Tri-Pass zurück\n"
	.string "und erhält den Bunt-Pass!$"

OneIsland_PokemonCenter_1F_Text_ObtainedExtraMapPage::
	.string "Die Karte wurde erweitert.$"

OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands::
	.string "Dies ist mein Pass für die Fähre.\p"
	.string "Damit kannst du nach\n"
	.string "Sevii Eiland.\p"
	.string "{PLAYER}, bitte, ich bin auf dich\n"
	.string "angewiesen!$"

OneIsland_PokemonCenter_1F_Text_HandedSapphireToCelio::
	.string "{PLAYER} gab Celio den Saphir!$"

OneIsland_PokemonCenter_1F_Text_ThankYouGiveMeTime::
	.string "Celio: Das ist also der Edelstein,\n"
	.string "der zum Rubin gehört…\p"
	.string "{PLAYER}, du hast das alles\n"
	.string "auf dich genommen, oder?\p"
	.string "Ich weiß, dass es nicht leicht war!\p"
	.string "Ich bin dir sehr dankbar!\p"
	.string "Jetzt muss ich für dich arbeiten!\n"
	.string "Lass mir ein wenig Zeit!$"

OneIsland_PokemonCenter_1F_Text_OkayThisIsGood::
	.string "O.K., das ist gut…$"

OneIsland_PokemonCenter_1F_Text_LinkedUpWithLanette::
	.string "Heureka!\n"
	.string "Ich bin mit Lanette verbunden!$"

OneIsland_PokemonCenter_1F_Text_ManagedToLinkWithHoennThankYou::
	.string "{PLAYER}…\n"
	.string "{PLAYER}, ich habe es geschafft!\p"
	.string "Ich konnte eine Verbindung zu den\n"
	.string "Trainern in Hoenn herstellen!\p"
	.string "Endlich funktioniert das\n"
	.string "Netzwerk!\p"
	.string "{PLAYER}, das habe ich nur dir\n"
	.string "zu verdanken!\p"
	.string "Dank dir hat sich mein Traum\n"
	.string "erfüllt…$"

OneIsland_PokemonCenter_1F_Text_WishYouBestOfLuck::
	.string "Ich…\n"
	.string "Ich weine nicht!\p"
	.string "Das ist genug von meiner Seite!\p"
	.string "{PLAYER}, du fängst weiterhin\n"
	.string "exotische Pokémon, oder?\p"
	.string "Ich wünsche dir alles Gute!$"

OneIsland_PokemonCenter_1F_Text_CelioHearingRumorsAboutYou::
	.string "Celio: Hallo!\p"
	.string "{PLAYER}, ich habe Gerüchte über\n"
	.string "dich gehört!$"

OneIsland_PokemonCenter_1F_Text_BillsFirstMonWasAbra::
	.string "{PLAYER}, was sind deine Lieblings-\n"
	.string "Pokémon?\p"
	.string "Bill ist ein Pokémaniac, also mag\n"
	.string "er alle Pokémon.\p"
	.string "Es scheint, dass Abra sein erstes\n"
	.string "Pokémon war!$"

OneIsland_PokemonCenter_1F_Text_BillsHometownInGoldenrod::
	.string "Apropos, {PLAYER}, du bist doch\n"
	.string "aus Alabastia, oder?\p"
	.string "Ich hörte, das ist eine ruhige,\n"
	.string "angenehme Stadt.\p"
	.string "Bill kommt aus Dukatia City,\n"
	.string "wo seine Familie noch lebt.\p"
	.string "Das ist eine eher geschäftige,\n"
	.string "lebhafte Stadt.\p"
	.string "Ich möchte eines Tages dorthin.$"

OneIsland_PokemonCenter_1F_Text_BillCantStomachMilk::
	.string "{PLAYER}, gibt es etwas, das du\n"
	.string "nicht leiden kannst?\p"
	.string "Bill kann offensichtlich\n"
	.string "Milch nicht leiden!$"

OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt::
	.string "Oh, du bist fremd hier!\n"
	.string "Hallo! Wo kommst du her?\p"
	.string "… Alabastia?\n"
	.string "Das kenne ich nicht!$"

OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland::
	.string "Auf dieser Insel gibt es einen\n"
	.string "gigantischen Vulkan!\p"
	.string "Er ist schon lange nicht mehr\n"
	.string "ausgebrochen, also kannst du\l"
	.string "beruhigt wandern!$"

OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend::
	.string "Ich wünschte, Pokémon mit\n"
	.string "meinem Freund, der weit weg\l"
	.string "wohnt, zu tauschen…$"

OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend::
	.string "Ich habe mit meinem Freund, der\n"
	.string "weit weg wohnt, Pokémon\l"
	.string "getauscht!\l"
	.string "Jeder weiß, dass wir das dir und\l"
	.string "Celio zu verdanken haben!\l"
	.string "Also, danke!$"

OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment::
	.string "Netzwerk\n"
	.string "Verbindungslevel 0\p"
	.string "… das Pokémon\n"
	.string "Lagerungs-System wird\l"
	.string "gewartet…$"

OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKanto::
	.string "Netzwerk\n"
	.string "Verbindungslevel 1\p"
	.string "Verbindung mit Kanto\n"
	.string "hergestellt.$"

OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKantoAndHoenn::
	.string "Netzwerk\n"
	.string "Verbindungslevel 2\p"
	.string "Verbindung mit Kanto und\n"
	.string "Hoenn hergestellt.$"

OneIsland_PokemonCenter_1F_Text_ObtainedTriPass::
	.string "Tri-Pass erhalten!$"

