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
	.string "Ständig werden meine Pokémon bei\n"
	.string "Kämpfen besiegt und bewusstlos…\p"
	.string "Vielleicht ist das ja der Grund, weshalb\n"
	.string "sie mich nicht ausstehen können.$"

GoldenrodHappinessRater_Text_Twin:
	.string "Wenn ich Items auf meine Pokémon\n"
	.string "anwende, freuen sie sich immer sehr!$"
