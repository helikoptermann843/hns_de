LittlerootTown_ProfessorBirchsLab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_ProfessorBirchsLab_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
	.byte 0

	@ State descriptions for VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
	@ 1: Beat Elite Four, Dex upgrade ready
	@ 2: Received National Dex
	@ 3: Left lab after receiving National Dex
	@ 4: Entered lab after catching all Hoenn mons
	@ 5: Birch told player to choose Johto starter
	@ 6: Chose Johto starter

	@ State descriptions for VAR_BIRCH_LAB_STATE
	@ 1: Never occurs
	@ 2: Chose starter
	@ 3: Received starter in lab
	@ 4: Defeated rival on Route 103
	@ 5: Received pokedex

LittlerootTown_ProfessorBirchsLab_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	call ProfBirch_EventScript_UpdateLocation
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter
	end

LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
	specialvar VAR_RESULT, HasAllHoennMons
	goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter
	setobjectmovementtype LOCALID_BIRCHS_LAB_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
	setobjectxyperm LOCALID_BIRCHS_LAB_RIVAL, 5, 10
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout

LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
	setobjectmovementtype LOCALID_BIRCHS_LAB_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
	setobjectxyperm LOCALID_BIRCHS_LAB_RIVAL, 5, 10
	end

LittlerootTown_ProfessorBirchsLab_OnWarp:
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
	.2byte 0

LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
	turnobject LOCALID_PLAYER, DIR_NORTH
	addobject LOCALID_BIRCHS_LAB_BIRCH
	addobject LOCALID_BIRCHS_LAB_RIVAL
	turnobject LOCALID_BIRCHS_LAB_RIVAL, DIR_NORTH
	setobjectxy LOCALID_BIRCHS_LAB_RIVAL, 5, 5
	turnobject LOCALID_BIRCHS_LAB_BIRCH, DIR_SOUTH
	setobjectxy LOCALID_BIRCHS_LAB_BIRCH, 6, 4
	turnobject LOCALID_BIRCHS_LAB_AIDE, DIR_EAST
	setobjectxy LOCALID_BIRCHS_LAB_AIDE, 10, 10
	end

LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
	addobject LOCALID_BIRCHS_LAB_RIVAL
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
	addobject LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL
	addobject LOCALID_BIRCHS_LAB_TOTODILE_BALL
	addobject LOCALID_BIRCHS_LAB_CHIKORITA_BALL
	addobject LOCALID_BIRCHS_LAB_RIVAL
	turnobject LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL, DIR_SOUTH
	setobjectxy LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL, 8, 4
	turnobject LOCALID_BIRCHS_LAB_TOTODILE_BALL, DIR_SOUTH
	setobjectxy LOCALID_BIRCHS_LAB_TOTODILE_BALL, 9, 4
	turnobject LOCALID_BIRCHS_LAB_CHIKORITA_BALL, DIR_SOUTH
	setobjectxy LOCALID_BIRCHS_LAB_CHIKORITA_BALL, 10, 4
	turnobject LOCALID_BIRCHS_LAB_BIRCH, DIR_SOUTH
	setobjectxy LOCALID_BIRCHS_LAB_BIRCH, 6, 4
	turnobject LOCALID_BIRCHS_LAB_RIVAL, DIR_EAST
	setobjectxy LOCALID_BIRCHS_LAB_RIVAL, 5, 5
	end

LittlerootTown_ProfessorBirchsLab_OnFrame:
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
	map_script_2 VAR_BIRCH_LAB_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter
	.2byte 0

@ The starter is technically given prior to this on Route 101 by special ChooseStarter
@ This is just where the game tells you its yours and lets you nickname it
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
	lockall
	bufferleadmonspeciesname STR_VAR_1
	message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
	end

LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
	end

LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
	end

LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
	clearflag FLAG_HIDE_ROUTE_101_BOY
	setvar VAR_BIRCH_LAB_STATE, 3
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
	end

LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
	lockall
	applymovement LOCALID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
	waitmovement 0
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
	end

LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
	lockall
	delay 30
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BIRCHS_LAB_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
	waitmovement 0
	delay 20
	playse SE_CLICK
	delay 10
	playse SE_CLICK
	delay 10
	playse SE_CLICK
	delay 10
	playse SE_CLICK
	delay 20
	applymovement LOCALID_BIRCHS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
	playse SE_PC_ON
	waitse
	delay 20
	applymovement LOCALID_BIRCHS_LAB_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
	waitmovement 0
	applymovement LOCALID_BIRCHS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
	waitmessage
	waitfanfare
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
	setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
	closemessage
	return

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
	closemessage
	return

LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
	walk_left
	walk_in_place_faster_down
	delay_16
	delay_16
	walk_right
	walk_in_place_faster_down
	delay_16
	delay_16
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_in_place_faster_down
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
	lockall
	applymovement LOCALID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
	lock
	faceplayer
	goto_if_ge VAR_BIRCH_LAB_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter
	goto_if_set FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork, MSGBOX_DEFAULT
	setflag FLAG_BIRCH_AIDE_MET
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, MSGBOX_DEFAULT
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo, MSGBOX_DEFAULT
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
	release
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
	applymovement LOCALID_BIRCHS_LAB_BIRCH, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	showmonpic SPECIES_CYNDAQUIL, 10, 3
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
	release
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
	applymovement LOCALID_BIRCHS_LAB_BIRCH, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	showmonpic SPECIES_TOTODILE, 10, 3
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
	release
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
	applymovement LOCALID_BIRCHS_LAB_BIRCH, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	showmonpic SPECIES_CHIKORITA, 10, 3
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
	end

LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
	hidemonpic
	msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CYNDAQUIL
	givemon SPECIES_CYNDAQUIL, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
	hidemonpic
	goto Common_EventScript_NoMoreRoomForPokemon
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
	removeobject LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
	removeobject LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
	end

LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil::
	hidemonpic
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOTODILE
	givemon SPECIES_TOTODILE, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
	hidemonpic
	goto Common_EventScript_NoMoreRoomForPokemon
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
	removeobject LOCALID_BIRCHS_LAB_TOTODILE_BALL
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
	removeobject LOCALID_BIRCHS_LAB_TOTODILE_BALL
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
	end

LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile::
	hidemonpic
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
	givemon SPECIES_CHIKORITA, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
	hidemonpic
	goto Common_EventScript_NoMoreRoomForPokemon
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
	removeobject LOCALID_BIRCHS_LAB_CHIKORITA_BALL
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
	end

LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
	removeobject LOCALID_BIRCHS_LAB_CHIKORITA_BALL
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita::
	hidemonpic
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
	playfanfare MUS_OBTAIN_ITEM
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
	waitmessage
	waitfanfare
	return

LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
	lock
	faceplayer
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
	end

LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, ProfBirch_EventScript_RatePokedexOrRegister
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, ProfBirch_EventScript_RatePokedexOrRegister
	goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
	release
	end

EventScript_RegisterProfBirch::
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
	setvar VAR_REGISTER_BIRCH_STATE, 2
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex, MSGBOX_DEFAULT
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BIRCHS_LAB_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
	setvar VAR_BIRCH_LAB_STATE, 5
	setflag FLAG_ADVENTURE_STARTED
	setvar VAR_OLDALE_TOWN_STATE, 1
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
	giveitem ITEM_POKE_BALL, 5
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
	setvar VAR_RESULT, 0
	return

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
	giveitem ITEM_POKE_BALL, 5
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
	setvar VAR_RESULT, 1
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
	playfanfare MUS_OBTAIN_ITEM
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
	waitfanfare
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	return

LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
	walk_down
	walk_in_place_faster_left
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
	lock
	faceplayer
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_PC::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Book::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
	lockall
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
	waitmessage
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
	.string "Wie? Prof. Birk?\p"
	.string "Der Prof arbeitet an einer\n"
	.string "Feld-Studie. Also ist er nicht hier.\p"
	.string "Oh, ich erkläre dir, was eine\n"
	.string "Feld-Studie in diesem Falle ist:\p"
	.string "Man beobachtet und studiert Dinge in\n"
	.string "ihrem natürlichen Umfeld. In Feldern\l"
	.string "oder auf Bergen, anstatt im Labor.\p"
	.string "Der Prof ist kein Typ, der am Schreib-\n"
	.string "tisch arbeiten kann. Er muss einfach\l"
	.string "draußen in der freien Natur die Dinge\l"
	.string "beobachten und studieren.$"

LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork:
	.string "Der Prof ist kein Typ, der am Schreib-\n"
	.string "tisch arbeiten kann. Er muss einfach\l"
	.string "draußen in der freien Natur die Dinge\l"
	.string "beobachten und studieren.$"

LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:
	.string "Prof. Birk studiert den Lebensraum\n"
	.string "und die Verbreitung von Pokémon.\p"
	.string "Der Prof freut sich über die Mitarbeit\n"
	.string "von {RIVAL}. Da spürt man Zuneigung!$"

LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
	.string "Prof. Birk: Du bist also\n"
	.string "{PLAYER}{KUN}! \p"
	.string "Dein Vater hat mir schon viel von dir\n"
	.string "erzählt.\p"
	.string "Ich habe auch erfahren, dass du noch\n"
	.string "kein eigenes Pokémon besitzt.\p"
	.string "Aber wie du eben gekämpft hast…\n"
	.string "Diese Gelassenheit…\p"
	.string "In deinen Adern fließt wirklich das\n"
	.string "Blut deines Vaters!\p"
	.string "Als Dank dafür, dass du mich gerettet\n"
	.string "hast, möchte ich dir das Pokémon\l"
	.string "schenken, das du dabei benutzt hast.\p"
	.string "{PLAYER} erhält {STR_VAR_1}!$"

LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:
	.string "Prof. Birk: Willst du dem\n"
	.string "{STR_VAR_1} einen Kosenamen geben?$"

LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
	.string "Prof. Birk: Wenn du dich mit Pokémon\n"
	.string "beschäftigst und Erfahrungen\p"
	.string "sammelst, wirst du mit Sicherheit ein\n"
	.string "sehr guter Trainer!\p"
	.string "Mein Kind, {RIVAL}, studiert ebenfalls\n"
	.string "Pokémon und hilft mir dabei sehr.\p"
	.string "{PLAYER}{KUN}, meinst du nicht, es\n"
	.string "wäre eine\n"
	.string "gute Idee, wenn du dich mit {RIVAL}\l"
	.string "triffst?$"

LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:
	.string "Prof. Birk: Großartig!\n"
	.string "{RIVAL} wird sich auch sehr freuen.\p"
	.string "{RIVAL} soll dir beibringen, was es\n"
	.string "bedeutet, ein Trainer zu sein.$"

LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay:
	.string "Prof. Birk: Ach, sei doch nicht so!\n"
	.string "Du solltest dich wirklich mit meinem\l"
	.string "Sprössling treffen!$"

LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
	.string "Prof. Birk: {RIVAL}? {RIVAL} ist,\n"
	.string "glaube ich, nach Hause gegangen.\p"
	.string "Oder das Kind krabbelt mal wieder\n"
	.string "irgendwo durch hohes Gras…\p"
	.string "Wenn du und deine Pokémon müde\n"
	.string "sind, dann ruht euch zu Hause aus.$"

LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
	.string "Prof. Birk: Oh, hallo, {PLAYER}{KUN}!\n"
	.string "\p"
	.string "Ich habe gehört, du hast {RIVAL} \n"
	.string "besiegt! Super! Das war dein erster\l"
	.string "Kampf gegen einen Trainer!\p"
	.string "{RIVAL} hilft mir schon sehr lange bei\n"
	.string "meinen Forschungen.\p"
	.string "{RIVAL} besitzt eine respektable\n"
	.string "Geschichte als Trainer.\p"
	.string "Hier, das hilft mir bei meinen For-\n"
	.string "schungen. Aber ich denke, du kannst\l"
	.string "den Pokédex auch gebrauchen.$"

LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
	.string "{PLAYER} erhält den Pokédex!$"

LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
	.string "Prof. Birk: Der Pokédex ist ein hoch\n"
	.string "entwickeltes, technisches Gerät, das\l"
	.string "automatisch jedes Pokémon, das du\l"
	.string "siehst oder fängst, registriert.\p"
	.string "{RIVAL} geht nie ohne ihn aus dem\n"
	.string "Haus. \p"
	.string "Immer, wenn mein Kind ein seltenes\n"
	.string "Pokémon fängt, kommt es und\l"
	.string "zeigt mir den Eintrag im Pokédex,\l"
	.string "während ich draußen forsche.$"

LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
	.string "Prof. Birk: Unzählige Pokémon erwarten\n"
	.string "dich bereits.\p"
	.string "Hach, ich muss jetzt auch dringend\n"
	.string "wieder meinen Forschungen nachgehen.$"

LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
	.string "Maike: Oh, wow, {PLAYER}{KUN}!\n"
	.string "Jetzt hast du auch einen Pokédex!\p"
	.string "Das ist ja toll! Genau wie ich!\n"
	.string "Ich habe hier etwas für dich!$"

LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
	.string "Maike: Es macht unheimlich viel Spaß,\n"
	.string "all\n"
	.string "die verschiedenen Pokémon zu fangen!\p"
	.string "Ich schaue mich wirklich überall um,\n"
	.string "denn ich will die unterschiedlichsten\l"
	.string "Pokémon fangen.\p"
	.string "Sobald ich niedliche Pokémon entdecke,\n"
	.string "fange ich sie mit Pokébällen.$"

LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
	.string "Oh! Dein Beutel ist voll.$"

LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
	.string "Maike: Ich frage mich, wo ich jetzt\n"
	.string "nach weiteren Pokémon suchen soll.$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
	.string "Brix: Ach…\n"
	.string "Du hast auch einen Pokédex.\p"
	.string "Na, dann.\n"
	.string "Ich gebe dir dies.$"

LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
	.string "Brix: Weißt du, je mehr Pokémon du\n"
	.string "besitzt, desto mehr Spaß macht es.\p"
	.string "Ich reise viel umher, um die unter-\n"
	.string "schiedlichsten Pokémon zu finden.\p"
	.string "Und wenn ich ein cooles Pokémon sehe,\n"
	.string "versuche ich natürlich, es zu fangen.$"

LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
	.string "Hey, dein Beutel ist voll.$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
	.string "Brix: Und wo soll ich jetzt mal nach\n"
	.string "Pokémon suchen?$"

LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
	.string "Das ist eine kompliziert aussehende\n"
	.string "Maschine. Der Prof wird sie für seine\l"
	.string "Forschungen brauchen…$"

LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
	.string "Ein PC, der in der Forschung\n"
	.string "eingesetzt\l"
	.string "wird. Besser nicht damit spielen!$"

LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
	.string "Es ist voll mit Büchern über Pokémon.$"

LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
	.string "Dieses Buch ist viel zu kompliziert…$"

LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
	.string "Prof. Birk: Nun…\p"
	.string "{PLAYER}{KUN} und {RIVAL}, ich hatte\n"
	.string "euch\n"
	.string "gebeten, mir bei meinen Pokémon-\l"
	.string "Studien zu helfen.\p"
	.string "Dank eurer Hilfe kommen neue Fakten\n"
	.string "ans Tageslicht.\p"
	.string "Scheinbar sind in der Hoenn-Region\n"
	.string "auch Pkmn anderer Regionen ansässig.\p"
	.string "Das ist auch ein Beweis, wie reich die\n"
	.string "Natur in Hoenn ist.\p"
	.string "Daher ist es sinnvoll, wenn ich eure\n"
	.string "Pokédexe mit dem Nationalen Modus\l"
	.string "ausrüste.\p"
	.string "Gebt mir mal eure Pokédexe.$"

LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
	.string "Maike: Hihihi!\p"
	.string "Ich finde es total cool, dass mein\n"
	.string "Pokédex auch verbessert wird!\p"
	.string "Dank dir, {PLAYER}{KUN}! Denn du hast\n"
	.string "so viele Pokémon gefangen!$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
	.string "Brix: Ich bin durch ganz Hoenn gereist\n"
	.string "und habe die Pokémon untersucht.\p"
	.string "Dank mir bekommen wir beide jetzt den\n"
	.string "Nationalen Modus.\p"
	.string "Ja ja, heute ist dein Glückstag,\n"
	.string "{PLAYER}!$"

LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
	.string "Prof. Birk: Okay, fertig!$"

LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
	.string "Der Pokédex von {PLAYER} wurde mit dem\n"
	.string "Nationalen Modus ausgerüstet.$"

LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
	.string "Prof. Birk: Vergiss nicht! Du bist der\n"
	.string "Champ, aber deine Pokémon-Reise ist\l"
	.string "noch lange nicht zu Ende.\p"
	.string "Die Straße namens Pokémon findet\n"
	.string "niemals ein Ende.\p"
	.string "Irgendwo gibt es hohes Gras, das auf\n"
	.string "dich wartet.$"

LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
	.string "Maike: Ich glaube, ich gönne mir eine\n"
	.string "kurze Pause von der Arbeit draußen.\p"
	.string "Ich werde dem Prof hier ein bisschen\n"
	.string "helfen.$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
	.string "Brix: Ich glaube, ich gönne mir eine\n"
	.string "kurze Pause von der Arbeit draußen.\p"
	.string "Ich werde dem Prof hier ein bisschen\n"
	.string "helfen.$"

LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
	.string "Prof. Birk: Oh, {PLAYER}{KUN}!\n"
	.string "Lass mich einen Blick auf deinen\l"
	.string "Pokédex werfen.\p"
	.string "… … … … …\n"
	.string "…\l"
	.string "… … … … …\l"
	.string "…\p"
	.string "Ja, es besteht kein Zweifel.\p"
	.string "Dein Pokédex der Hoenn-Region ist\n"
	.string "vollständig!\p"
	.string "Das ist mehr als beeindruckend.\p"
	.string "Ich habe ein Geschenk für dich.\p"
	.string "Nimm es als Anerkennung der\n"
	.string "fantastischen Arbeit, die du geleistet\l"
	.string "hast.\p"
	.string "Ich schenke dir ein seltenes Pokémon,\n"
	.string "das nur in einer anderen Region zu\l"
	.string "finden ist.\p"
	.string "Such dir eines von diesen drei Pokémon\n"
	.string "aus.$"

LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
	.string "Prof. Birk: Dies sind seltene Pokémon,\n"
	.string "die in anderen Regionen beheimatet\l"
	.string "sind.\p"
	.string "Such dir eines von den drei Pokémon\n"
	.string "aus.$"

LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
	.string "Prof. Birk: Das Feuer-Pokémon\n"
	.string "Feurigel hat dein Interesse geweckt?\p"
	.string "Du bist clever wie immer!\p"
	.string "Du möchtest Feurigel haben?$"

LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
	.string "Prof. Birk: Das Wasser-Pokémon\n"
	.string "Karnimani hat dein Interesse geweckt?\n"
	.string "\p"
	.string "Eine gute Wahl!\p"
	.string "Du möchtest Karnimani haben?$"

LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
	.string "Prof. Birk: Das Pflanzen-Pokémon\n"
	.string "Endivie hat dein Interesse geweckt?\p"
	.string "Du weißt, was gut für dich ist!\p"
	.string "Du möchtest Endivie haben?$"

LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
	.string "Prof. Birk: Lass dir Zeit, bevor du\n"
	.string "dich entscheidest.\p"
	.string "Es sind alles Pokémon von\n"
	.string "unschätzbarem Wert.$"

@ Unused
LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon:
	.string "Prof. Birch: I see!\n"
	.string "You picked a fine Pokémon!$"

LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
	.string "{PLAYER} erhält\n"
	.string "{STR_VAR_1} von Prof. Birk!$"

@ Unused
LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter:
	.string "Want to give a nickname to\n"
	.string "the {STR_VAR_1} you received?$"

LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
	.string "Prof. Birk: Vergiss nicht! Dein\n"
	.string "Hoenn-Pokédex ist vollständig.\p"
	.string "Die Straße namens Pokémon findet\n"
	.string "niemals ein Ende.\p"
	.string "Irgendwo gibt es hohes Gras, das auf\n"
	.string "dich wartet.$"

LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
	.string "Du hast das Pokémon erhalten.\n"
	.string "Lass die anderen lieber in Ruhe.$"

@ Unused
LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:
	.string "Oh, you don’t have any room for\n"
	.string "this Pokémon.$"

LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
	.string "Maike: {PLAYER}{KUN}, jetzt…\n"
	.string "Was wirst du jetzt tun?\p"
	.string "Wirst du weiter in Kämpfen antreten\n"
	.string "und deine Fähigkeiten verbessern?\p"
	.string "Oder versuchst du, den Nationalen\n"
	.string "Pokédex vollständig zu bekommen?\p"
	.string "Ich werde hier bleiben und dem Prof\n"
	.string "helfen.$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
	.string "Brix: Statt nur Pokémon zu sammeln,\n"
	.string "konzentriere ich mich lieber auf das\l"
	.string "Aufziehen eines bestimmten Pokémon.$"

LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
	.string "Maike: Oh, hi {PLAYER}{KUN}!\n"
	.string "Hast du schon die Kampfzone\l"
	.string "besucht?$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
	.string "Brix: Hey, {PLAYER}!\n"
	.string "Hast du schon die Kampfzone\l"
	.string "besucht?$"

LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
	.string "… … … … …\n"
	.string "…\l"
	.string "… … … … …Piep!\p"
	.string "Scott: Hallo {PLAYER}!\n"
	.string "Ich bin’s, Scott.\p"
	.string "Ich bin auf der MS Tide. Auf See zu\n"
	.string "sein ist einfach großartig!\p"
	.string "Übrigens…\p"
	.string "Ich würde dich gerne an einen\n"
	.string "bestimmten Ort einladen.\p"
	.string "Wenn du interessiert bist, dann\n"
	.string "nimm entweder in Graphitport oder\l"
	.string "Seegrasulb die Fähre.\p"
	.string "Alles Weitere besprechen wir, wenn\n"
	.string "wir uns an Bord treffen. Bis dann!\p"
	.string "… … … … …\n"
	.string "…\l"
	.string "… … … … …Klick!$"
