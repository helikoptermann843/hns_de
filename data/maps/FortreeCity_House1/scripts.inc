FortreeCity_House1_MapScripts::
	.byte 0

FortreeCity_House1_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, FortreeCity_House1_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_PLUSLE, FortreeCity_House1_Text_YouWillTradeWontYou, FortreeCity_House1_EventScript_DeclineTrade, FortreeCity_House1_EventScript_NotRequestedMon, FortreeCity_House1_Text_MonYouTakeCare
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
	release
	end

FortreeCity_House1_EventScript_DeclineTrade::
	msgbox FortreeCity_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

FortreeCity_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox FortreeCity_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

FortreeCity_House1_EventScript_TradeCompleted::
	msgbox FortreeCity_House1_Text_GoingToMakeVolbeatStrong, MSGBOX_DEFAULT
	release
	end

FortreeCity_House1_EventScript_ExpertF::
	msgbox FortreeCity_House1_Text_TradingMemoriesWithOthers, MSGBOX_NPC
	end

FortreeCity_House1_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox FortreeCity_House1_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FortreeCity_House1_Text_YouWillTradeWontYou:
	.string "Wroooaaar! Ich muss das unbedingt\n"
	.string "haben! Ich muss {STR_VAR_1} haben!\l"
	.string "Dafür würde ich alles tun!\p"
	.string "Äh… Hast du ihn gehört?\n"
	.string "Meinen Ruf aus tiefstem Herzen?\p"
	.string "Nachdem du den gehört hast, tauschst\n"
	.string "du doch bestimmt dein {STR_VAR_1}\l"
	.string "gegen mein {STR_VAR_2}?!?$"

FortreeCity_House1_Text_MonYouTakeCare:
	.string "Oh, super! Dann mal los!\p"
	.string "Willkommen, {STR_VAR_1}!\n"
	.string "Pass auf dich auf, {STR_VAR_2}!$"

FortreeCity_House1_Text_ThisIsntAMon:
	.string "Äh, nee, so geht das nicht!\n"
	.string "Das ist doch gar kein {STR_VAR_1}.$"

FortreeCity_House1_Text_YouWontTradeMe:
	.string "Nein? Du willst nicht tauschen?\n"
	.string "Obwohl ich dir mein Herz offenbart\l"
	.string "habe?$"

FortreeCity_House1_Text_GoingToMakeVolbeatStrong:
	.string "Ich werde dafür sorgen, dass VOLBEAT\n"
	.string "super-megastark wird!\p"
	.string "Ich hoffe, du sorgst dich genauso um\n"
	.string "PLUSLE!$"

FortreeCity_House1_Text_TradingMemoriesWithOthers:
	.string "Mit anderen POKéMON tauschen…\p"
	.string "Das ist, als ob du die Erinnerungen\n"
	.string "mit anderen Menschen teilst.$"

FortreeCity_House1_Text_Zigzagoon:
	.string "ZIGZACHS: Gumomoh?$"

