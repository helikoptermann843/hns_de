GoldenrodCity_GameCorner_hns_MapScripts::
	.byte 0

GoldenrodCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons::
	lock
	faceplayer
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NeedCoinCase
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon::
	@callnative DisableStaticRandomizer
	showcoinsbox 1, 1
	message MauvilleCity_GameCorner_Text_WhichPrize
	waitmessage
	multichoice 20, 0, MULTI_PRIZE_MONS, FALSE
	switch VAR_RESULT
	case 0, GoldenrodCity_GameCorner_PrizeRoom_EventScript_Abra
	case 1, GoldenrodCity_GameCorner_PrizeRoom_EventScript_Clefairy
	case 2, GoldenrodCity_GameCorner_PrizeRoom_EventScript_Munchlax
	case 3, GoldenrodCity_GameCorner_PrizeRoom_EventScript_Dratini
	case 4, GoldenrodCity_GameCorner_PrizeRoom_EventScript_Porygon
	case 5, GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	case 127, GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange::
	hidecoinsbox 0, 0
	@callnative EnableStaticRandomizer
	closemessage
	release
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_Abra::
	setvar VAR_TEMP_1, SPECIES_ABRA
	setvar VAR_TEMP_2, 120
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_Clefairy::
	setvar VAR_TEMP_1, SPECIES_CLEFAIRY
	setvar VAR_TEMP_2, 500
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_Munchlax::
	setvar VAR_TEMP_1, SPECIES_MUNCHLAX
	setvar VAR_TEMP_2, 2800
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_Dratini::
	setvar VAR_TEMP_1, SPECIES_DRATINI
	setvar VAR_TEMP_2, 5500
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_Porygon::
	setvar VAR_TEMP_1, SPECIES_PORYGON
	setvar VAR_TEMP_2, 6500
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon::
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
	msgbox GoldenrodCity_GameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	checkcoins VAR_RESULT
	goto_if_lt VAR_RESULT, VAR_TEMP_2, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins
	switch VAR_TEMP_1
	updatecoinsbox 1, 1
	playse SE_SHOP
	case SPECIES_ABRA,     GoldenrodCity_GameCorner_PrizeRoom_EventScript_GiveAbra
	case SPECIES_CLEFAIRY, GoldenrodCity_GameCorner_PrizeRoom_EventScript_GiveClefairy
	case SPECIES_DRATINI,  GoldenrodCity_GameCorner_PrizeRoom_EventScript_GiveDratini
	case SPECIES_MUNCHLAX,  GoldenrodCity_GameCorner_PrizeRoom_EventScript_GiveMunchlax
	case SPECIES_PORYGON,  GoldenrodCity_GameCorner_PrizeRoom_EventScript_GivePorygon
	case SPECIES_PINSIR,   GoldenrodCity_GameCorner_PrizeRoom_EventScript_GivePinsir
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_GiveAbra::
	givemon VAR_TEMP_1, 15
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_GiveClefairy::
	givemon VAR_TEMP_1, 15
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_GiveDratini::
	givemon VAR_TEMP_1, 15
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_GiveMunchlax::
	givemon VAR_TEMP_1, 15
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_GivePorygon::
	givemon VAR_TEMP_1, 15
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_GivePinsir::
	givemon VAR_TEMP_1, 15
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon::
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty
	goto_if_eq VAR_RESULT, 1, GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC
	goto_if_eq VAR_RESULT, 2, GoldenrodCity_GameCorner_PrizeRoom_EventScript_PartyFull
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_PartyFull::
	msgbox Route119_WeatherInstitute_2F_Text_NoRoomForPokemon
	hidecoinsbox 0, 0
	@callnative EnableStaticRandomizer
	closemessage
	release
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_NicknamePartyMon::
	getpartysize
	subvar VAR_RESULT, 1
	copyvar VAR_0x8004, VAR_RESULT
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty_Nickname_Nuzlocke::
	message GoldenrodGamecorner_Text_GiveNicknameToThisMon
	getpartysize
	subvar VAR_RESULT, 1
	copyvar VAR_0x8004, VAR_RESULT
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase::
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorNoCoinCase
	release
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins::
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorNeedMoreCoins
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty::
	removecoins VAR_TEMP_2
	playse SE_SHOP
	updatecoinsbox 1, 1
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
	playfanfare MUS_LEVEL_UP
	message GoldenrodCity_GameCorner_Text_PlayerObtainedTheMon
	waitmessage
	waitfanfare
	specialvar VAR_RESULT, IsNuzlockeNicknamingActive
	goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty_Nickname_Nuzlocke
	msgbox GoldenrodGamecorner_Text_GiveNicknameToThisMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NicknamePartyMon
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC::
	removecoins VAR_TEMP_2
	playse SE_SHOP
	updatecoinsbox 1, 1
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
	playfanfare MUS_LEVEL_UP
	message GoldenrodCity_GameCorner_Text_PlayerObtainedTheMon
	waitmessage
	waitfanfare
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_TransferredToPC
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_TransferredToPC::
	call Common_EventScript_TransferredToPC
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_PartyMon::
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	end
	
GoldenrodCity_GameCorner_PrizeRoom_EventScript_PcMon::
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_GameCorner_EventScript_SendMon
	call Common_EventScript_NameReceivedBoxMon
	goto GoldenrodCity_GameCorner_EventScript_SendMon
	closemessage
	hidecoinsbox 0, 0
	@callnative EnableStaticRandomizer
	release
	end

GoldenrodCity_GameCorner_EventScript_SendMon::
	call Common_EventScript_TransferredToPC
	closemessage
	hidecoinsbox 0, 0
	@callnative EnableStaticRandomizer
	release
	end

	.set TM_ICE_BEAM_COINS, 4000
	.set TM_FLAMETHROWER_COINS, 4000
	.set TM_REST_COINS, 2000
	.set TM_SWORDS_DANCE_COINS, 3000
	.set TM_SUBSTITUTE_COINS, 2000

GoldenrodCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs::
	lock
	faceplayer
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorIntro, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ChooseTMPrizeMessage
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_ChooseTMPrizeMessage::
	message GoldenrodCity_GameCorner_Text_PrizeVendorWhichPrize
	waitmessage
	setvar VAR_TEMP_1, 0
	showcoinsbox 1, 1
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ChooseTMPrize

GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReturnToChooseTMPrize::
	message GoldenrodCity_GameCorner_Text_PrizeVendorWhichPrize
	waitmessage
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ChooseTMPrize

GoldenrodCity_GameCorner_PrizeRoom_EventScript_ChooseTMPrize::
	dynmultichoice 12, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, GoldenrodCity_GameCorner_PrizeRoom_Text_TM13, GoldenrodCity_GameCorner_PrizeRoom_Text_TM35, GoldenrodCity_GameCorner_PrizeRoom_Text_TM44, GoldenrodCity_GameCorner_PrizeRoom_Text_TM75, GoldenrodCity_GameCorner_PrizeRoom_Text_TM90, GoldenrodCity_GameCorner_PrizeRoom_Text_Cancel
	switch VAR_RESULT
	case 0, GoldenrodCity_GameCorner_PrizeRoom_EventScript_TMIceBeam
	case 1, GoldenrodCity_GameCorner_PrizeRoom_EventScript_TMFlamethrower
	case 2, GoldenrodCity_GameCorner_PrizeRoom_EventScript_TMRest
	case 3, GoldenrodCity_GameCorner_PrizeRoom_EventScript_TMSwordsDance
	case 4, GoldenrodCity_GameCorner_PrizeRoom_EventScript_TMSubstitute
	case 5, GoldenrodCity_GameCorner_PrizeRoom_EventScript_CancelTMSelect
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_CancelTMSelect
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_TMIceBeam::
	setvar VAR_TEMP_1, 1
	bufferitemname STR_VAR_1, ITEM_TM_ICE_BEAM
	setvar VAR_0x8004, ITEM_TM_ICE_BEAM
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmTMPrize

GoldenrodCity_GameCorner_PrizeRoom_EventScript_TMFlamethrower::
	setvar VAR_TEMP_1, 2
	bufferitemname STR_VAR_1, ITEM_TM_FLAMETHROWER
	setvar VAR_0x8004, ITEM_TM_FLAMETHROWER
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmTMPrize

GoldenrodCity_GameCorner_PrizeRoom_EventScript_TMRest::
	setvar VAR_TEMP_1, 3
	bufferitemname STR_VAR_1, ITEM_TM_REST
	setvar VAR_0x8004, ITEM_TM_REST
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmTMPrize

GoldenrodCity_GameCorner_PrizeRoom_EventScript_TMSwordsDance::
	setvar VAR_TEMP_1, 4
	bufferitemname STR_VAR_1, ITEM_TM75
	setvar VAR_0x8004, ITEM_TM75
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmTMPrize

GoldenrodCity_GameCorner_PrizeRoom_EventScript_TMSubstitute::
	setvar VAR_TEMP_1, 5
	bufferitemname STR_VAR_1, ITEM_TM90
	setvar VAR_0x8004, ITEM_TM90
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmTMPrize

GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmTMPrize::
	special BufferTMHMMoveName
	msgbox GoldenrodCity_GameCorner_PrizeRoom_Text_SoYourChoiceIsTM, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_GameCorner_PrizeRoom_EventScript_CancelTMSelect
	goto_if_unset FLAG_FINITE_TMS, GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmTMPrizeInfinite
	switch VAR_TEMP_1
	case 1, GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMIceBeam
	case 2, GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMFlamethrower
	case 3, GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMRest
	case 4, GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMSwordsDance
	case 5, GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMSubstitute
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_ConfirmTMPrizeInfinite::
	switch VAR_TEMP_1
	case 1, GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMIceBeamInfinite
	case 2, GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMFlamethrowerInfinite
	case 3, GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMRestInfinite
	case 4, GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMSwordsDanceInfinite
	case 5, GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMSubstituteInfinite
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMIceBeamInfinite::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, TM_ICE_BEAM_COINS, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoinsForTM
	checkitem ITEM_TM_ICE_BEAM, 1
	goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_GameCorner_PrizeRoom_EventScript_YouAlreadyHaveThis
	removecoins TM_ICE_BEAM_COINS
	additem ITEM_TM_ICE_BEAM
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorHereYouGo, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReturnToChooseTMPrize
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMFlamethrowerInfinite::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, TM_FLAMETHROWER_COINS, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoinsForTM
	checkitem ITEM_TM_FLAMETHROWER, 1
	goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_GameCorner_PrizeRoom_EventScript_YouAlreadyHaveThis
	removecoins TM_FLAMETHROWER_COINS
	additem ITEM_TM_FLAMETHROWER
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorHereYouGo, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReturnToChooseTMPrize
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMRestInfinite::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, TM_REST_COINS, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoinsForTM
	checkitem ITEM_TM_REST, 1
	goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_GameCorner_PrizeRoom_EventScript_YouAlreadyHaveThis
	removecoins TM_REST_COINS
	additem ITEM_TM_REST
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorHereYouGo, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReturnToChooseTMPrize
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMSwordsDanceInfinite::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, TM_SWORDS_DANCE_COINS, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoinsForTM
	checkitem ITEM_TM75, 1
	goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_GameCorner_PrizeRoom_EventScript_YouAlreadyHaveThis
	removecoins TM_SWORDS_DANCE_COINS
	additem ITEM_TM75
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorHereYouGo, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReturnToChooseTMPrize
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMSubstituteInfinite::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, TM_SUBSTITUTE_COINS, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoinsForTM
	checkitem ITEM_TM90, 1
	goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_GameCorner_PrizeRoom_EventScript_YouAlreadyHaveThis
	removecoins TM_SUBSTITUTE_COINS
	additem ITEM_TM90
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorHereYouGo, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReturnToChooseTMPrize
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMIceBeam::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, TM_ICE_BEAM_COINS, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoinsForTM
	checkitemspace ITEM_TM_ICE_BEAM
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NoRoomForTM
	removecoins TM_ICE_BEAM_COINS
	additem ITEM_TM_ICE_BEAM
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorHereYouGo, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReturnToChooseTMPrize
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMFlamethrower::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, TM_FLAMETHROWER_COINS, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoinsForTM
	checkitemspace ITEM_TM_FLAMETHROWER
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NoRoomForTM
	removecoins TM_FLAMETHROWER_COINS
	additem ITEM_TM_FLAMETHROWER
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorHereYouGo, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReturnToChooseTMPrize
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMRest::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, TM_REST_COINS, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoinsForTM
	checkitemspace ITEM_TM_REST
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NoRoomForTM
	removecoins TM_REST_COINS
	additem ITEM_TM_REST
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorHereYouGo, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReturnToChooseTMPrize
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMSwordsDance::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, TM_SWORDS_DANCE_COINS, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoinsForTM
	checkitemspace ITEM_TM75
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NoRoomForTM
	removecoins TM_SWORDS_DANCE_COINS
	additem ITEM_TM75
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorHereYouGo, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReturnToChooseTMPrize
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_BuyTMSubstitute::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, TM_SUBSTITUTE_COINS, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoinsForTM
	checkitemspace ITEM_TM90
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_PrizeRoom_EventScript_NoRoomForTM
	removecoins TM_SUBSTITUTE_COINS
	additem ITEM_TM90
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorHereYouGo, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReturnToChooseTMPrize
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoinsForTM::
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorNeedMoreCoins, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReturnToChooseTMPrize
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_NoRoomForTM::
	call Common_EventScript_BagIsFull
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReturnToChooseTMPrize
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_YouAlreadyHaveThis::
	msgbox GoldenrodCity_GameCorner_PrizeRoom_Text_YouAlreadyHaveThis, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_PrizeRoom_EventScript_ReturnToChooseTMPrize
	end

GoldenrodCity_GameCorner_PrizeRoom_EventScript_CancelTMSelect::
	msgbox GoldenrodCity_GameCorner_Text_PrizeVendorQuit, MSGBOX_DEFAULT
	hidecoinsbox 0, 0
	release
	end

GoldenrodCity_GameCorner_PrizeRoom_Text_TM13:
	.string "Eisstrahl   4000$"

GoldenrodCity_GameCorner_PrizeRoom_Text_TM35:
	.string "Flammenwurf 4000$"

GoldenrodCity_GameCorner_PrizeRoom_Text_TM44:
	.string "Erholung    2000$"

GoldenrodCity_GameCorner_PrizeRoom_Text_TM75:
	.string "Schwerttanz 3000$"

GoldenrodCity_GameCorner_PrizeRoom_Text_TM90:
	.string "Delegator  2000$"

GoldenrodCity_GameCorner_PrizeRoom_Text_Cancel:
	.string "Abbrechen$"

GoldenrodCity_GameCorner_PrizeRoom_Text_SoYourChoiceIsTM:
	.string "Du möchtest also\n"
	.string "{STR_VAR_1} {STR_VAR_2}?$"

GoldenrodCity_GameCorner_PrizeRoom_Text_YouAlreadyHaveThis:
	.string "Das Item hast du bereits.$"


GoldenrodCity_GameCorner_EventScript_PokefanM::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_PokefanM1, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_GameCorner_EventScript_Hiker::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_MoveTutorInside, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_GameCorner_EventScript_Woman::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_Woman, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_GameCorner_EventScript_Gentleman::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_Gentleman, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_GameCorner_EventScript_PokefanF::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_PokefanF, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_GameCorner_EventScript_PokefanM2::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_PokefanM2, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_GameCorner_EventScript_CooltrainerM::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_CooltrainerM, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_GameCorner_EventScript_Pharmacist::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_Pharmacist, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_GameCorner_PrizeRoom_Text_YouWantPrize:
	.string "{STR_VAR_1} richtig?$"

GoldenrodCity_GameCorner_Text_PlayerObtainedTheMon:
	.string "{PLAYER} erhält {STR_VAR_1}!$"

GoldenrodGamecorner_Text_GiveNicknameToThisMon:
	.string "{STR_VAR_1} Spitzname geben?$"

GoldenrodCity_GameCorner_Text_PrizeVendorIntro:
	.string "Willkommen!\p"
	.string "Wir tauschen deine Spielmünzen\n"
	.string "gegen tolle Preise!$"

GoldenrodCity_GameCorner_Text_PrizeVendorWhichPrize:
	.string "Welchen Preis möchtest du?$"

GoldenrodCity_GameCorner_Text_PrizeVendorHereYouGo:
	.string "Hier, bitte!$"

GoldenrodCity_GameCorner_Text_PrizeVendorNeedMoreCoins:
	.string "Tut mir Leid, aber\n"
	.string "du brauchst mehr Münzen.$"

GoldenrodCity_GameCorner_Text_PrizeVendorNoMoreRoom:
	.string "Du kannst nichts mehr tragen.$"

GoldenrodCity_GameCorner_Text_PrizeVendorQuit:
	.string "Sammle ein paar Münzen\n"
	.string "und komm dann wieder!$"

GoldenrodCity_GameCorner_Text_PrizeVendorNoCoinCase:
	.string "Oh? Du hast keinen MÜNZKORB.$"

GoldenrodCity_GameCorner_Text_Pharmacist:
	.string "Ich spiele nur an diesem Automaten.\p"
	.string "Ich glaube, er spuckt mehr aus\n"
	.string "als die anderen.$"

GoldenrodCity_GameCorner_Text_Woman:
	.string "Dein Spielplatz!\p"
	.string "DUKATIA CITY SPIELHALLE$"

GoldenrodCity_GameCorner_Text_PokefanM1:
	.string "Ich liebe diesen neuen Automaten.\p"
	.string "Er stellt eine\n"
	.string "größere Herausforderung dar als jene\l"
	.string "in PRISMANIA CITY.$"

GoldenrodCity_GameCorner_Text_CooltrainerM:
	.string "Das Leben ist ein Spiel.\p"
	.string "Ich werde Karten spielen, bis\n"
	.string "ich umfalle!$"

GoldenrodCity_GameCorner_Text_PokefanF:
	.string "Karten…\p"
	.string "Ich ziehe sie den Automaten vor,\n"
	.string "weil man seine\l"
	.string "Chancen besser abschätzen kann.\p"
	.string "Aber der Gewinn ist viel geringer.$"

GoldenrodCity_GameCorner_Text_CooltrainerF:
	.string "Ich höre erst auf, wenn ich gewinne!$"

GoldenrodCity_GameCorner_Text_Gentleman:
	.string "Ich habe meinen\n"
	.string "Pokémon BLIZZARD beigebracht.\p"
	.string "Es hat zwar gedauert, bis ich genug\n"
	.string "Münzen hatte, aber\l"
	.string "es hat sich gelohnt.$"

GoldenrodCity_GameCorner_Text_PokefanM2:
	.string "Ich hatte an den Automaten kein\n"
	.string "Glück. Bei den Karten sieht es\l"
	.string "auch nicht anders aus…\p"
	.string "Ich war so zornig, dass ich meinen\n"
	.string "MÜNZKORB im UNTERGRUND\l"
	.string "weggeworfen habe.$"

GoldenrodCity_GameCorner_Text_MoveTutorInside:
	.string "Wahahah! Die Münzen klingeln!$"

GoldenrodCity_GameCorner_Text_LeftTheirDrink:
	.string "Jemand hat sein Getränk stehen lassen.\p"
	.string "Es riecht süß!$"

@ ========================================
@ VOLTORB FLIP GAME IMPLEMENTATION
@ ========================================

GoldenrodCity_GameCorner_EventScript_VoltorbFlip::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_VF_NoCoinCase
	message GoldenrodCity_GameCorner_Text_VF_Welcome
	waitmessage
	playbgm MUS_RG_OAK, FALSE
	setvar VAR_TEMP_4, 0

GoldenrodCity_GameCorner_EventScript_VF_CheckCoinCap::
	checkcoins VAR_RESULT
	goto_if_lt VAR_RESULT, MAX_COINS, GoldenrodCity_GameCorner_EventScript_VF_ShowMenu
	msgbox GoldenrodCity_GameCorner_Text_VF_CoinCap, MSGBOX_DEFAULT
	setvar VAR_TEMP_4, 0
	setvar VAR_TEMP_7, 0
	hidecoinsbox 0, 5
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

GoldenrodCity_GameCorner_EventScript_VF_ShowMenu::
	showcoinsbox 1, 1
	copyvar VAR_TEMP_A, VAR_TEMP_4
	addvar VAR_TEMP_A, 1
	buffernumberstring STR_VAR_1, VAR_TEMP_A
	message GoldenrodCity_GameCorner_Text_VF_PlayLevel
	waitmessage
	dynmultichoice 19, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, GoldenrodCity_GameCorner_Text_VF_OptPlay, GoldenrodCity_GameCorner_Text_VF_OptGameInfo, GoldenrodCity_GameCorner_Text_VF_OptQuit
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_GameCorner_EventScript_VF_Play
	goto_if_eq VAR_RESULT, 1, GoldenrodCity_GameCorner_EventScript_VF_GameInfo
	@ Quit or B-press
	setvar VAR_TEMP_4, 0
	setvar VAR_TEMP_7, 0
	closemessage
	hidecoinsbox 0, 5
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

GoldenrodCity_GameCorner_EventScript_VF_GameInfo::
	message GoldenrodCity_GameCorner_Text_VF_WhichInfo
	waitmessage
	dynmultichoice 19, 4, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, GoldenrodCity_GameCorner_Text_VF_OptHowToPlay, GoldenrodCity_GameCorner_Text_VF_OptHint, GoldenrodCity_GameCorner_Text_VF_OptAboutNotes, GoldenrodCity_GameCorner_Text_VF_OptReturn
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_GameCorner_EventScript_VF_HowToPlay
	goto_if_eq VAR_RESULT, 1, GoldenrodCity_GameCorner_EventScript_VF_Hint
	goto_if_eq VAR_RESULT, 2, GoldenrodCity_GameCorner_EventScript_VF_AboutNotes
	goto GoldenrodCity_GameCorner_EventScript_VF_ShowMenu

GoldenrodCity_GameCorner_EventScript_VF_HowToPlay::
	msgbox GoldenrodCity_GameCorner_Text_VF_HowToPlay, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_EventScript_VF_GameInfo

GoldenrodCity_GameCorner_EventScript_VF_Hint::
	msgbox GoldenrodCity_GameCorner_Text_VF_HintText, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_EventScript_VF_GameInfo

GoldenrodCity_GameCorner_EventScript_VF_AboutNotes::
	msgbox GoldenrodCity_GameCorner_Text_VF_AboutNotes, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_EventScript_VF_GameInfo

GoldenrodCity_GameCorner_EventScript_VF_Play::
	closemessage
	copyvar VAR_TEMP_6, VAR_TEMP_4
	setvar VAR_TEMP_5, 0
	hidecoinsbox 0, 5
	special Special_ViewVoltorbFlip
	waitstate
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_GameCorner_EventScript_VF_HandleLoss
	goto_if_eq VAR_RESULT, 1, GoldenrodCity_GameCorner_EventScript_VF_HandleWin
	goto GoldenrodCity_GameCorner_EventScript_VF_HandleQuit
	end

GoldenrodCity_GameCorner_EventScript_VF_HandleWin::
	msgbox GoldenrodCity_GameCorner_Text_VF_GameClear, MSGBOX_DEFAULT
	copyvar VAR_TEMP_1, VAR_TEMP_5
	showcoinsbox 1, 1
	buffernumberstring STR_VAR_1, VAR_TEMP_1
	msgbox GoldenrodCity_GameCorner_Text_VF_ReceivedCoins, MSGBOX_DEFAULT
	addcoins VAR_TEMP_5
	setvar VAR_TEMP_5, 0
	updatecoinsbox 1, 1
	goto_if_le VAR_TEMP_4, VAR_TEMP_6, GoldenrodCity_GameCorner_EventScript_VF_CheckCoinCap
	copyvar VAR_TEMP_A, VAR_TEMP_4
	addvar VAR_TEMP_A, 1
	buffernumberstring STR_VAR_1, VAR_TEMP_A
	msgbox GoldenrodCity_GameCorner_Text_VF_Advanced, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_EventScript_VF_CheckCoinCap

GoldenrodCity_GameCorner_EventScript_VF_HandleLoss::
	msgbox GoldenrodCity_GameCorner_Text_VF_OhNo, MSGBOX_DEFAULT
	goto_if_ge VAR_TEMP_4, VAR_TEMP_6, GoldenrodCity_GameCorner_EventScript_VF_ShowMenu
	copyvar VAR_TEMP_A, VAR_TEMP_4
	addvar VAR_TEMP_A, 1
	buffernumberstring STR_VAR_1, VAR_TEMP_A
	msgbox GoldenrodCity_GameCorner_Text_VF_Dropped, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_EventScript_VF_ShowMenu

GoldenrodCity_GameCorner_EventScript_VF_HandleQuit::
	goto_if_eq VAR_TEMP_5, 0, GoldenrodCity_GameCorner_EventScript_VF_QuitNoCoins
	copyvar VAR_TEMP_1, VAR_TEMP_5
	showcoinsbox 1, 1
	buffernumberstring STR_VAR_1, VAR_TEMP_1
	msgbox GoldenrodCity_GameCorner_Text_VF_ReceivedCoins, MSGBOX_DEFAULT
	addcoins VAR_TEMP_5
	setvar VAR_TEMP_5, 0
	updatecoinsbox 1, 1

GoldenrodCity_GameCorner_EventScript_VF_QuitNoCoins::
	goto_if_ge VAR_TEMP_4, VAR_TEMP_6, GoldenrodCity_GameCorner_EventScript_VF_CheckCoinCap
	copyvar VAR_TEMP_A, VAR_TEMP_4
	addvar VAR_TEMP_A, 1
	buffernumberstring STR_VAR_1, VAR_TEMP_A
	msgbox GoldenrodCity_GameCorner_Text_VF_Dropped, MSGBOX_DEFAULT
	goto GoldenrodCity_GameCorner_EventScript_VF_CheckCoinCap

GoldenrodCity_GameCorner_EventScript_VF_NoCoinCase::
	msgbox GoldenrodCity_GameCorner_Text_VF_NeedCoinCase, MSGBOX_DEFAULT
	releaseall
	end

GoldenrodCity_GameCorner_EventScript_VFAttendant1::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_VFAttendant1, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
	waitmovement 0
	release
	end

GoldenrodCity_GameCorner_EventScript_VFAttendant2::
	lock
	faceplayer
	msgbox GoldenrodCity_GameCorner_Text_VFAttendant2, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
	waitmovement 0
	release
	end

@ Voltorb Flip Menu Option Strings
GoldenrodCity_GameCorner_Text_VF_OptPlay:
	.string "SPIELEN$"

GoldenrodCity_GameCorner_Text_VF_OptGameInfo:
	.string "SPIEL INFO$"

GoldenrodCity_GameCorner_Text_VF_OptQuit:
	.string "VERLASSEN$"

GoldenrodCity_GameCorner_Text_VF_OptHowToPlay:
	.string "SPIELREGELN$"

GoldenrodCity_GameCorner_Text_VF_OptHint:
	.string "HINWEIS$"

GoldenrodCity_GameCorner_Text_VF_OptAboutNotes:
	.string "ÜBER HINWEISE$"

GoldenrodCity_GameCorner_Text_VF_OptReturn:
	.string "ZURÜCK$"

@ Voltorb Flip Dialogue Strings
GoldenrodCity_GameCorner_Text_VF_Welcome:
	.string "Willkommen bei VOLTOBALL-FLIP!\p$"

GoldenrodCity_GameCorner_Text_VF_PlayLevel:
	.string "VOLTOBALL-FLIP Lv. {STR_VAR_1} spielen?$"

GoldenrodCity_GameCorner_Text_VF_GameClear:
	.string "Geschafft!\p"
	.string "Du hast alle versteckten\n"
	.string "x2- und x3-Karten gefunden!$"

GoldenrodCity_GameCorner_Text_VF_ReceivedCoins:
	.string "Du hast {STR_VAR_1}\n"
	.string "Münze(n) erhalten!$"

GoldenrodCity_GameCorner_Text_VF_Advanced:
	.string "Spielstufe {STR_VAR_1} erreicht!$"

GoldenrodCity_GameCorner_Text_VF_OhNo:
	.string "Oh nein! Du erhältst 0 Münzen!$"

GoldenrodCity_GameCorner_Text_VF_Dropped:
	.string "Auf Spielstufe {STR_VAR_1}\n"
	.string "zurückgefallen.$"

GoldenrodCity_GameCorner_Text_VF_CoinCap:
	.string "Du hast 9.999 MÜNZEN.\n"
	.string "Mehr kannst du nicht tragen.$"

GoldenrodCity_GameCorner_Text_VF_WhichInfo:
	.string "Welche Erklärung möchtest du?$"

GoldenrodCity_GameCorner_Text_VF_HowToPlay:
	.string "Bei VOLTOBALL-FLIP deckst du Karten\n"
	.string "mit versteckten Zahlen auf.\p"
	.string "Unter ihnen liegen die Zahlen\n"
	.string "1 bis 3 und VOLTOBALL.\p"
	.string "Die erste Zahl bringt dir\n"
	.string "entsprechend viele Münzen.\p"
	.string "Jede weitere Zahl vervielfacht\n"
	.string "deinen bisherigen Gewinn.\p"
	.string "Eine 2 verdoppelt, eine 3\n"
	.string "verdreifacht ihn.\p"
	.string "Triffst du VOLTOBALL,\n"
	.string "ist das Spiel vorbei.\p"
	.string "Alle in der Runde gesammelten\n"
	.string "Münzen gehen verloren!\p"
	.string "Mit AUFGEBEN sicherst du dir\n"
	.string "deine bisherigen Münzen.\p"
	.string "Finde alle x2- und x3-Karten,\n"
	.string "um die nächste Stufe zu erreichen!$"

GoldenrodCity_GameCorner_Text_VF_HintText:
	.string "Die Zahlen am Rand geben dir\n"
	.string "Hinweise auf die Felder.\p"
	.string "Sie beziehen sich auf die\n"
	.string "jeweilige Reihe oder Spalte.\p"
	.string "Je höher die Zahl, desto mehr\n"
	.string "wertvolle Karten gibt es dort.\p"
	.string "Die VOLTOBALL-Anzahl zeigt,\n"
	.string "wie viele sich dort verstecken.\p"
	.string "Nutze beide Hinweise, um\n"
	.string "sichere Karten zu finden!$"

GoldenrodCity_GameCorner_Text_VF_AboutNotes:
	.string "Mit dem Notizmodus\n"
	.string "({L_BUTTON} & {R_BUTTON}) markierst du\p"
	.string "Karten mit 1-3 oder VOLTOBALL.\p"
	.string "Markiere vermutete Felder und\n"
	.string "decke sie später auf.\p"
	.string "Eine weitere Markierung\n"
	.string "entfernt die Notiz.$"

GoldenrodCity_GameCorner_Text_VF_NeedCoinCase:
	.string "Oh? Du hast keinen MÜNZKORB.$"

GoldenrodCity_GameCorner_Text_VFAttendant1:
	.string "Du willst VOLTOBALL-FLIP spielen?\p"
	.string "Dazu musst du auf die andere\n"
	.string "Seite des Tisches gehen.$"

GoldenrodCity_GameCorner_Text_VFAttendant2:
	.string "Versuch es auf der anderen\n"
	.string "Seite des Tisches, Freund.$"
