Melemele_House_5_hns_MapScripts::
	.byte 0


Melemele_House5_Mom::
	lock
	faceplayer
	msgbox Melemele_House5_Mom_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Melemele_House5_Son::
	lock
	faceplayer
	msgbox Melemele_House5_Son_Text_0
	applymovement melemele_elio Melemele_House5_Son_Movement
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	waitmovement
	msgbox Melemele_House5_Son_Text_1, MSGBOX_AUTOCLOSE
	playmoncry SPECIES_MEOWTH, 0
	waitmoncry
	release
	end


Melemele_House5_Cat::
	lock
	faceplayer
	playmoncry SPECIES_MEOWTH, 0
	msgbox Melemele_House5_Cat_Text_0, MSGBOX_AUTOCLOSE
	waitmoncry
	release
	end

Melemele_House5_Son_Movement:
	jump_in_place_down
	jump_in_place_down
	step_end

Melemele_House5_Mom_Text_0:
	.string "Ich überlege, mit meinem Sohn Elio\n"
	.string "in die Alola-Region zu ziehen.\p"
	.string "Hier auf den Inseln holen wir uns\n"
	.string "schon mal einen kleinen Vorge-\l"
	.string "schmack!$"

Melemele_House5_Son_Text_0:
	.string "Hihi, Fangen macht so viel Spaß!$"

Melemele_House5_Son_Text_1:
	.string "Fang mich doch, Mauzi!$"

Melemele_House5_Cat_Text_0:
	.string "Mwaaawwwrrrrrrrr!!!$"
