SlateportCity_House_MapScripts::
	.byte 0

SlateportCity_House_EventScript_PokefanM::
	msgbox SlateportCity_House_Text_NatureToDoWithStatGains, MSGBOX_NPC
	end

SlateportCity_House_EventScript_Girl::
	msgbox SlateportCity_House_Text_MustBeGoingToBattleTent, MSGBOX_NPC
	end

SlateportCity_House_Text_NatureToDoWithStatGains:
	.string "Mein POKéMON hat ein HASTIGes Wesen.\p"
	.string "Seine INITIATIVE ist im Vergleich\n"
	.string "zu meinen anderen POKéMON höher.\p"
	.string "Vielleicht hat ihr Wesen etwas mit den\n"
	.string "Statusvorteilen der POKéMON zu tun.$"

SlateportCity_House_Text_MustBeGoingToBattleTent:
	.string "Du bist doch ein TRAINER, oder?\p"
	.string "Da du schon mal in GRAPHITPORT CITY\n"
	.string "bist, besuch unbedingt das KAMPFCAMP!$"

