PacifidlogTown_House3_MapScripts::
	.byte 0

PacifidlogTown_House3_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED, PacifidlogTown_House3_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_HORSEA, PacifidlogTown_House3_Text_WillingToTradeIt, PacifidlogTown_House3_EventScript_DeclineTrade, PacifidlogTown_House3_EventScript_NotRequestedMon, PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou
	setflag FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED
	release
	end

PacifidlogTown_House3_EventScript_DeclineTrade::
	msgbox PacifidlogTown_House3_Text_NotDesperateOrAnything, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House3_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House3_EventScript_TradeCompleted::
	msgbox PacifidlogTown_House3_Text_ReallyWantedToGetBagon, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House3_EventScript_Girl::
	msgbox PacifidlogTown_House3_Text_IsThatAPokedex, MSGBOX_NPC
	end

PacifidlogTown_House3_Text_WillingToTradeIt:
	.string "Schau dir dieses {STR_VAR_2} an!\p"
	.string "Das {STR_VAR_2} habe ich gestern ge-\n"
	.string "fangen, um meinen Geburtstag zu\n"
	.string "feiern. \p"
	.string "Oh, ich sehe dir an der Nasenspitze\l"
	.string "an,\n"
	.string "dass du es gerne hättest! Aber es ist\p"
	.string "\p"
	.string "unbezahlbar! Ich bin aber bereit, es\n"
	.string "gegen ein {STR_VAR_1} zu tauschen.$"

PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou:
	.string "Oh, das ist also ein {STR_VAR_1}?\p"
	.string "Es sieht einem {STR_VAR_2} ähnlich und\n"
	.string "ist doch völlig anders.\p"
	.string "Danke schön!$"

PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon:
	.string "Nein, nein, nein! Ich akzeptiere nur\n"
	.string "ein echtes {STR_VAR_1}!!!$"

PacifidlogTown_House3_Text_NotDesperateOrAnything:
	.string "Oh, du willst also nicht mit mir\n"
	.string "tauschen?\p"
	.string "Macht nichts. Ich bin gar nicht so\n"
	.string "wild auf einen Tausch!$"

PacifidlogTown_House3_Text_ReallyWantedToGetBagon:
	.string "Ich weiß, ich könnte mir ja auch\n"
	.string "selbst eines suchen…\p"
	.string "Aber ich hätte gerne ein KINDWURM, das\n"
	.string "von einem anderen TRAINER\l"
	.string "gefangen wurde…$"

PacifidlogTown_House3_Text_IsThatAPokedex:
	.string "Ist das ein POKéDEX?\p"
	.string "Hast du schon viele verschiedene\n"
	.string "POKéMON getroffen?\p"
	.string "Ich wollte, ich wäre wie du.$"

