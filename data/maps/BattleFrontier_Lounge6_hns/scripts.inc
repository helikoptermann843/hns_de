BattleFrontier_Lounge6_hns_MapScripts::
	.byte 0

BattleFrontier_Lounge6_EventScript_Trader_hns::
	lock
	faceplayer
	goto_if_set FLAG_BATTLE_FRONTIER_TRADE_DONE, BattleFrontier_Lounge6_EventScript_TradeCompleted_hns
	ingame_trade INGAME_TRADE_MEOWTH, BattleFrontier_Lounge6_Text_WouldYouLikeToTrade_hns, BattleFrontier_Lounge6_EventScript_DeclineTrade_hns, BattleFrontier_Lounge6_EventScript_NotRequestedMon_hns, BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt_hns
	setflag FLAG_BATTLE_FRONTIER_TRADE_DONE
	release
	end

BattleFrontier_Lounge6_EventScript_DeclineTrade_hns::
	msgbox BattleFrontier_Lounge6_Text_WellThatsFineToo_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge6_EventScript_NotRequestedMon_hns::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge6_EventScript_TradeCompleted_hns::
	msgbox BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge6_Text_WouldYouLikeToTrade_hns:
	.string "Mein POKéMON ist ein {STR_VAR_2}.\n"
	.string "Kennst du das?\l"
	.string "Es ist sehr süß und hübsch.\p"
	.string "Diesen kleinen Schatz könnte ich ohne\n"
	.string "Bedenken tauschen.\p"
	.string "Möchtest du mein {STR_VAR_2} haben?\n"
	.string "Dann gib mir ein {STR_VAR_1}.$"

BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt_hns:
	.string "Oh, das ist einfach meganiedlich.\n"
	.string "Vielen Dank! Ich verspreche, es\l"
	.string "wird es gut bei mir haben!\p"
	.string "Oh! Und ich hoffe, du bist auch gut\n"
	.string "zu meinem {STR_VAR_2}!$"

BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon_hns:
	.string "Oh, tut mir Leid!\n"
	.string "Ich tausche nur, wenn ich dafür ein\l"
	.string "{STR_VAR_1} bekomme!$"

BattleFrontier_Lounge6_Text_WellThatsFineToo_hns:
	.string "Oh, du magst nicht tauschen?\n"
	.string "Nun, das ist auch in Ordnung.\l"
	.string "Komm doch bald mal wieder vorbei.$"

BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined_hns:
	.string "Kicher!\n"
	.string "Ein ENECO ist viel süüüßer, als ich\l"
	.string "gedacht habe. Ich bin total glücklich!$"
