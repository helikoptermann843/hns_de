MagmaHideout_3F_2R_MapScripts::
	.byte 0

MagmaHideout_3F_2R_EventScript_Grunt10::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_10, MagmaHideout_3F_2R_Text_Grunt10Intro, MagmaHideout_3F_2R_Text_Grunt10Defeat
	msgbox MagmaHideout_3F_2R_Text_Grunt10PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_3F_2R_Text_Grunt10Intro:
	.string "Ich verstehe alles, was unser Boss\n"
	.string "sagt. Aber weißt du, was?\p"
	.string "Nach einem uralten POKéMON zu\n"
	.string "graben und jemandem einen METEORITen\l"
	.string "stehlen…\p"
	.string "Ich glaube, wir sind etwas zu weit\n"
	.string "gegangen. Was meinst du?$"

MagmaHideout_3F_2R_Text_Grunt10Defeat:
	.string "Yeah, ich denke wirklich, was wir\n"
	.string "machen, ist falsch.$"

MagmaHideout_3F_2R_Text_Grunt10PostBattle:
	.string "Die Niederlage gegen dich hat meinen\n"
	.string "Verstand gereinigt.\p"
	.string "Nächstes Mal, wenn ich ihn sehe, werde\n"
	.string "ich meinen Boss fragen, was wir hier\l"
	.string "eigentlich machen.$"

