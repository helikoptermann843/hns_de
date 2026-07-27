VermilionCity_House2_Frlg_MapScripts::
	.byte 0

VermilionCity_House2_EventScript_Elyssa::
	lock
	faceplayer
	setvar VAR_0x8008, INGAME_TRADE_FARFETCHD
	call EventScript_GetInGameTradeSpeciesInfo
	goto_if_set FLAG_DID_CH_DING_TRADE, VermilionCity_House2_EventScript_AlreadyTraded
	msgbox VermilionCity_House2_Text_DoYouHaveMonWantToTradeForMyMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VermilionCity_House2_EventScript_DeclineTrade
	call EventScript_ChooseMonForInGameTrade
	goto_if_ge VAR_0x8004, PARTY_SIZE, VermilionCity_House2_EventScript_DeclineTrade
	call EventScript_GetInGameTradeSpecies
	goto_if_ne VAR_RESULT, VAR_0x8009, VermilionCity_House2_EventScript_NotRequestedMon
	call EventScript_DoInGameTrade
	msgbox VermilionCity_House2_Text_ThankYou
	setflag FLAG_DID_CH_DING_TRADE
	release
	end

VermilionCity_House2_EventScript_DeclineTrade::
	msgbox VermilionCity_House2_Text_ThatsTooBad
	release
	end

VermilionCity_House2_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox VermilionCity_House2_Text_ThisIsNoMon
	release
	end

VermilionCity_House2_EventScript_AlreadyTraded::
	msgbox VermilionCity_House2_Text_HowIsMyOldMon
	release
	end

VermilionCity_House2_Text_DoYouHaveMonWantToTradeForMyMon::
	.string "Besitzt du ein {VAR}?\p"
	.string "Willst du es gegen {VAR}\n"
	.string "tauschen?$"

VermilionCity_House2_Text_ThatsTooBad::
	.string "Schade!$"

VermilionCity_House2_Text_ThisIsNoMon::
	.string "Das ist kein {VAR}!\p"
	.string "Komm wieder, wenn du eines besitzt!$"

VermilionCity_House2_Text_ThankYou::
	.string "Vielen Dank!$"

VermilionCity_House2_Text_HowIsMyOldMon::
	.string "Wie geht es {VAR}?\p"
	.string "Mein {VAR} fühlt sich super!$"
