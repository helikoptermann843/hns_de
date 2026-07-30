BlackthornCity_House2_hns_MapScripts::
	.byte 0

BlackthornCity_House2_EventScript_Emy::
	lock
	faceplayer
	goto_if_set FLAG_BLACKTHORN_NPC_TRADE_COMPLETED, BlackthornCity_House2_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_MR_MIME, BlackthornCity_House2_Text_YouWillTradeWontYou, BlackthornCity_House2_EventScript_DeclineTrade, BlackthornCity_House2_EventScript_NotRequestedMon, BlackthornCity_House2_Text_MonYouTakeCare
	setflag FLAG_BLACKTHORN_NPC_TRADE_COMPLETED
	release
	end

BlackthornCity_House2_EventScript_DeclineTrade::
	msgbox BlackthornCity_House2_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

BlackthornCity_House2_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox BlackthornCity_House2_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

BlackthornCity_House2_EventScript_TradeCompleted::
	msgbox BlackthornCity_House2_Text_After, MSGBOX_DEFAULT
	release
	end

BlackthornCity_House2_Text_YouWillTradeWontYou:
	.string "Ich sammele Pokémon!\n"
	.string "Hast du ein {STR_VAR_1}?\p"
	.string "Möchtest du es gegen\n"
	.string "mein {STR_VAR_2} tauschen?$"

BlackthornCity_House2_Text_MonYouTakeCare:
	.string "Juhu! Ich habe jetzt {STR_VAR_1}!\p"
	.string "{STR_VAR_2}, gib gut Acht!$"

BlackthornCity_House2_Text_ThisIsntAMon:
	.string "Äh, nein, ich glaube nicht.\n"
	.string "Das ist kein {STR_VAR_1}.$"

BlackthornCity_House2_Text_YouWontTradeMe:
	.string "Du möchtest also nicht tauschen?\n"
	.string "Schade…$"

BlackthornCity_House2_Text_After:
	.string "Hi, wie geht es meinem alten Pantimos?$"
