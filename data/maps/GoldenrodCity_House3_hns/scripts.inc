GoldenrodCity_House3_hns_MapScripts::
	.byte 0

GoldenrodCity_House3_EventScript_PokefanM::
	lock
	faceplayer
	msgbox GoldenrodHappinessRater_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_House3_EventScript_Twin::
	lock
	faceplayer
	msgbox GoldenrodHappinessRater_Text_Twin, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodHappinessRater_Text_PokefanM:
	.string "Ständig verliere ich in Kämpfen und\n"
	.string "meine Pokémon werden immer besiegt…\p"
	.string "Das mag der Grund sein,\n"
	.string "warum mich meine Pokémon nicht mögen…$"

GoldenrodHappinessRater_Text_Twin:
	.string "Wenn ich meinem Pokémon\n"
	.string "ein Item gebe, dann freut es sich!$"
