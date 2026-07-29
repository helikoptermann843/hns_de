SlateportCity_House_MapScripts::
	.byte 0

SlateportCity_House_EventScript_PokefanM::
	msgbox SlateportCity_House_Text_NatureToDoWithStatGains, MSGBOX_NPC
	end

SlateportCity_House_EventScript_Girl::
	msgbox SlateportCity_House_Text_MustBeGoingToBattleTent, MSGBOX_NPC
	end

SlateportCity_House_Text_NatureToDoWithStatGains:
	.string "Mein Pokémon hat ein Hastiges Wesen.\p"
	.string "Seine Initiative ist im Vergleich\n"
	.string "zu meinen anderen Pokémon höher.\p"
	.string "Vielleicht hat ihr Wesen etwas mit den\n"
	.string "Statusvorteilen der Pokémon zu tun.$"

SlateportCity_House_Text_MustBeGoingToBattleTent:
	.string "Du bist doch ein Trainer, oder?\p"
	.string "Da du schon mal in Graphitport City\n"
	.string "bist, besuch unbedingt das Kampfcamp!$"

