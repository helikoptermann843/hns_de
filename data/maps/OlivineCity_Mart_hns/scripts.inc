OlivineCity_Mart_hns_MapScripts::
	.byte 0

OlivineCity_EventScript_Trainer1::
	lock
	faceplayer
	msgbox OlivineCity_Text_MartCooltrainerF, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_Lass::
	lock
	faceplayer
	msgbox OlivineCity_Text_MartLass, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Text_MartCooltrainerF:
	.string "Können deine Pokémon schon Leute\p"
	.string "übers Wasser tragen?$"

OlivineCity_Text_MartLass:
	.string "Ich habe mein\n"
	.string "SMETTBO von meinem Freund aus Übersee\n"
	.string "bekommen.\p"
	.string "Es hatte einen BRIEF von ihm dabei.\p"
	.string "Willst du wissen, was er schreibt?\p"
	.string "Mal sehen… Oh!\n"
	.string "Das ist ein Geheimnis!$"
