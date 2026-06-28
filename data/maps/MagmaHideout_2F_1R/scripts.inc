MagmaHideout_2F_1R_MapScripts::
	.byte 0

MagmaHideout_2F_1R_EventScript_Grunt14::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, MagmaHideout_2F_1R_Text_Grunt14Intro, MagmaHideout_2F_1R_Text_Grunt14Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt14PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_3, MagmaHideout_2F_1R_Text_Grunt3Intro, MagmaHideout_2F_1R_Text_Grunt3Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_4, MagmaHideout_2F_1R_Text_Grunt4Intro, MagmaHideout_2F_1R_Text_Grunt4Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_5, MagmaHideout_2F_1R_Text_Grunt5Intro, MagmaHideout_2F_1R_Text_Grunt5Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_Text_Grunt14Intro:
	.string "Was, wie, wer?\p"
	.string "Nur Mitglieder von TEAM MAGMA dürfen\n"
	.string "hier sein.\p"
	.string "Aber du hast keine Uniform von TEAM\n"
	.string "MAGMA an…\p"
	.string "Das erregt Verdacht!\n"
	.string "Kämpf mit mir!$"

MagmaHideout_2F_1R_Text_Grunt14Defeat:
	.string "Aiyiyi…\n"
	.string "Mein Stolz als Mitglied von TEAM\l"
	.string "MAGMA…$"

MagmaHideout_2F_1R_Text_Grunt14PostBattle:
	.string "Wenn du an Schüttelfrost leidest,\n"
	.string "solltest du TEAM MAGMA beitreten.$"

MagmaHideout_2F_1R_Text_Grunt3Intro:
	.string "Stopp!\p"
	.string "Du erwartest doch nicht ernsthaft,\n"
	.string "dass ich dich einfach so vorbeigehen\l"
	.string "lasse?!?$"

MagmaHideout_2F_1R_Text_Grunt3Defeat:
	.string "Ooh wow!\n"
	.string "Ich gebe mich geschlagen!$"

MagmaHideout_2F_1R_Text_Grunt3PostBattle:
	.string "Es wäre vielleicht doch besser\n"
	.string "gewesen, dich nicht herauszufordern…$"

MagmaHideout_2F_1R_Text_Grunt4Intro:
	.string "Ahah! Ein Eindringling!$"

MagmaHideout_2F_1R_Text_Grunt4Defeat:
	.string "Graah!$"

MagmaHideout_2F_1R_Text_Grunt4PostBattle:
	.string "Ich habe doch schon verloren!\p"
	.string "Musst du unbedingt im Kreis\n"
	.string "herumlaufen?$"

MagmaHideout_2F_1R_Text_Grunt5Intro:
	.string "Oh oh!\n"
	.string "Ein Eindringling!$"

MagmaHideout_2F_1R_Text_Grunt5Defeat:
	.string "Murmel…$"

MagmaHideout_2F_1R_Text_Grunt5PostBattle:
	.string "Eigentlich bin ich kein Kampf-Experte…$"

