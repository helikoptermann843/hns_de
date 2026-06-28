VioletCity_House1_hns_MapScripts::
	.byte 0

VioletCity_House1_EventScript_Kyle::
	lock
	faceplayer
	msgbox VioletCity_House1_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_House1_EventScript_Rudy::
	lock
	faceplayer
	goto_if_set FLAG_VIOLET_NPC_TRADE_COMPLETED, VioletCity_House1_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_ONIX, VioletCity_House1_Text_YouWillTradeWontYou, VioletCity_House1_EventScript_DeclineTrade, VioletCity_House1_EventScript_NotRequestedMon, VioletCity_House1_Text_MonYouTakeCare
	setflag FLAG_VIOLET_NPC_TRADE_COMPLETED
	release
	end

VioletCity_House1_EventScript_DeclineTrade::
	msgbox VioletCity_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

VioletCity_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox VioletCity_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

VioletCity_House1_EventScript_TradeCompleted::
	msgbox VioletCity_House1_Text_After, MSGBOX_DEFAULT
	release
	end

VioletCity_House1_Text_YouWillTradeWontYou:
	.string "Ich sammle Pokémon!\n"
	.string "Hast du ein {STR_VAR_1}?\p"
	.string "Willst du es gegen mein\n"
	.string "{STR_VAR_2} tauschen?$"

VioletCity_House1_Text_MonYouTakeCare:
	.string "Juhu! Ich habe {STR_VAR_1}!\p"
	.string "{STR_VAR_2}, mach es gut!$"

VioletCity_House1_Text_ThisIsntAMon:
	.string "Äh, nein, glaube ich nicht.\n"
	.string "Das ist kein {STR_VAR_1}.$"

VioletCity_House1_Text_YouWontTradeMe:
	.string "Du willst nicht tauschen? Oh…$"

VioletCity_House1_Text_After:
	.string "Hi, wie geht es meinem alten Onix?$"

VioletCity_House1_Text_PokefanM:
	.string "Ein Pokémon,\n"
	.string "das du durch Tausch erhalten hast,\l"
	.string "wird schneller wachsen.\p"
	.string "Aber wenn du nicht im Besitz\n"
	.string "des passenden ORDENs bist,\l"
	.string "gehorchen sie dir vielleicht nicht.$"
