OlivineCity_House1_hns_MapScripts::
	.byte 0

OlivineCity_House1_EventScript_Tim::
	lock
	faceplayer
	goto_if_set FLAG_OLIVINE_NPC_TRADE_COMPLETED, OlivineCity_House1_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_VOLTORB, OlivineCity_House1_Text_YouWillTradeWontYou, OlivineCity_House1_EventScript_DeclineTrade, OlivineCity_House1_EventScript_NotRequestedMon, OlivineCity_House1_Text_MonYouTakeCare
	setflag FLAG_OLIVINE_NPC_TRADE_COMPLETED
	release
	end

OlivineCity_House1_EventScript_DeclineTrade::
	msgbox OlivineCity_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

OlivineCity_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox OlivineCity_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

OlivineCity_House1_EventScript_TradeCompleted::
	msgbox OlivineCity_House1_Text_After, MSGBOX_DEFAULT
	release
	end

OlivineCity_House1_Text_YouWillTradeWontYou:
	.string "Ich sammle Pokémon!\n"
	.string "Hast du ein {STR_VAR_1}?\p"
	.string "Willst du es gegen mein\n"
	.string "{STR_VAR_2} tauschen?$"

OlivineCity_House1_Text_MonYouTakeCare:
	.string "Juhu! Ich habe {STR_VAR_1}!\p"
	.string "{STR_VAR_2}, mach es gut!$"

OlivineCity_House1_Text_ThisIsntAMon:
	.string "Äh, nein, ich glaube nicht.\n"
	.string "Das ist kein {STR_VAR_1}.$"

OlivineCity_House1_Text_YouWontTradeMe:
	.string "Du willst nicht tauschen? Ach...$"

OlivineCity_House1_Text_After:
	.string "Hi, wie geht's meinem alten\n"
	.string "Voltobal?$"
