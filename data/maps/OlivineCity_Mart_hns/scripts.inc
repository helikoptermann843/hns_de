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
	.string "Kennen deine Pokémon schon eine\n"
	.string "Attacke, die es ihnen erlaubt, Leute\l"
	.string "übers Wasser zu tragen?$"

OlivineCity_Text_MartLass:
	.string "Das SMETTBO, das mir mein Schatz\n"
	.string "aus Übersee geschickt hat, hatte\l"
	.string "einen Brief dabei!\p"
	.string "Willst du wissen, was er schreibt?\n"
	.string "In Ordnung…\p"
	.string "Oder lieber doch nicht. Das ist geheim!$"
