MagmaHideout_3F_1R_MapScripts::
	.byte 0

MagmaHideout_3F_1R_EventScript_Grunt9::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_9, MagmaHideout_3F_1R_Text_Grunt9Intro, MagmaHideout_3F_1R_Text_Grunt9Defeat
	msgbox MagmaHideout_3F_1R_Text_Grunt9PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_3F_1R_EventScript_Grunt16::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_16, MagmaHideout_3F_1R_Text_Grunt16Intro, MagmaHideout_3F_1R_Text_Grunt16Defeat
	msgbox MagmaHideout_3F_1R_Text_Grunt16PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_3F_1R_Text_Grunt9Intro:
	.string "Was habe ich nur getan, dass ich hier\n"
	.string "Wache schieben muss?\p"
	.string "Mein linkes Ohr brennt schon wie\n"
	.string "verrückt.$"

MagmaHideout_3F_1R_Text_Grunt9Defeat:
	.string "Ich bekomme gleich einen Hitzschlag…$"

MagmaHideout_3F_1R_Text_Grunt9PostBattle:
	.string "Findest du es merkwürdig, dass wir auf\n"
	.string "diesem Vulkan auch noch Hüte tragen?$"

MagmaHideout_3F_1R_Text_Grunt16Intro:
	.string "Wir haben uns zusammengeschlossen,\n"
	.string "damit seine fantastische Vision\l"
	.string "Wirklichkeit wird.\p"
	.string "Es ist mir schnurzegal, ob du zu TEAM\n"
	.string "AQUA gehörst oder einfach nur ein Kind\l"
	.string "bist, das hier vorbeikommt.\p"
	.string "Niemand mischt sich in unsere Belange\n"
	.string "ein und kommt ungeschoren davon!$"

MagmaHideout_3F_1R_Text_Grunt16Defeat:
	.string "Oh, nein!\n"
	.string "Dich habe ich ganz falsch\l"
	.string "eingeschätzt.$"

MagmaHideout_3F_1R_Text_Grunt16PostBattle:
	.string "Hör zu!\n"
	.string "TEAM MAGMA hat Recht!\p"
	.string "Hör nicht auf TEAM AQUA!\n"
	.string "Glaub ihren Lügen nicht.$"

