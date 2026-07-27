SSAnne_1F_Room5_Frlg_MapScripts::
	.byte 0

SSAnne_1F_Room5_EventScript_Arthur::
	trainerbattle_single TRAINER_GENTLEMAN_ARTHUR, SSAnne_1F_Room5_Text_ArthurIntro, SSAnne_1F_Room5_Text_ArthurDefeat
	msgbox SSAnne_1F_Room5_Text_ArthurPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_1F_Room5_Text_ArthurIntro::
	.string "Du Rotznase!\n"
	.string "Was fällt dir ein?$"

SSAnne_1F_Room5_Text_ArthurDefeat::
	.string "Mist!\n"
	.string "Du bist ganz schön gut!$"

SSAnne_1F_Room5_Text_ArthurPostBattle::
	.string "Ich will meine Ruhe haben!\n"
	.string "Verschwinde!$"

