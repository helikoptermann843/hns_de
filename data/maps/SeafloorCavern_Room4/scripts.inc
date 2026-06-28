SeafloorCavern_Room4_MapScripts::
	.byte 0

SeafloorCavern_Room4_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, SeafloorCavern_Room4_Text_Grunt3Intro, SeafloorCavern_Room4_Text_Grunt3Defeat
	msgbox SeafloorCavern_Room4_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room4_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, SeafloorCavern_Room4_Text_Grunt4Intro, SeafloorCavern_Room4_Text_Grunt4Defeat
	msgbox SeafloorCavern_Room4_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room4_Text_Grunt3Intro:
	.string "Wer bist du?\n"
	.string "Woher kommst du?$"

SeafloorCavern_Room4_Text_Grunt3Defeat:
	.string "Verloren…$"

SeafloorCavern_Room4_Text_Grunt3PostBattle:
	.string "Ich finde den Ausgang nicht mehr!\p"
	.string "Ich bin nicht verzweifelt. Denk das\n"
	.string "bloß nicht!$"

SeafloorCavern_Room4_Text_Grunt4Intro:
	.string "Wer bist du?\n"
	.string "Was meinst du, was du da machst?$"

SeafloorCavern_Room4_Text_Grunt4Defeat:
	.string "Ich konnte nicht gewinnen!$"

SeafloorCavern_Room4_Text_Grunt4PostBattle:
	.string "Mein Partner hat die Karte im U-Boot\n"
	.string "liegen gelassen.\p"
	.string "Wie kann man nur so nutzlos sein?$"

