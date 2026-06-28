MagmaHideout_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_1F_OnTransition
	.byte 0

MagmaHideout_1F_OnTransition:
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
	end

MagmaHideout_1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_1, MagmaHideout_1F_Text_Grunt1Intro, MagmaHideout_1F_Text_Grunt1Defeat
	msgbox MagmaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_1F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_2, MagmaHideout_1F_Text_Grunt2Intro, MagmaHideout_1F_Text_Grunt2Defeat
	msgbox MagmaHideout_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_1F_Text_Grunt1Intro:
	.string "Wenn TEAM MAGMA zum Appell antritt,\n"
	.string "bekommen wir wichtige Aufgaben\l"
	.string "zugeteilt und zwar in der Reihenfolge,\n"
	.string "\p"
	.string "in der wir angetreten sind. Daher muss\n"
	.string "ich hier in der Ecke bleiben. Ich\n"
	.string "komme\l"
	.string "nämlich immer zu spät zum Appell.$"

MagmaHideout_1F_Text_Grunt1Defeat:
	.string "Ich komme auch immer zu spät zum\n"
	.string "Training!\p"
	.string "Ich gebe es nur ungern zu, aber ich\n"
	.string "gebe ein jämmerliches Mitglied ab…$"

MagmaHideout_1F_Text_Grunt1PostBattle:
	.string "Von nun an werde ich mich in allen\n"
	.string "Dingen mehr anstrengen!$"

MagmaHideout_1F_Text_Grunt2Intro:
	.string "Unser Boss hat uns gesagt, wir sollen\n"
	.string "im SCHLOTBERG Grabungen durchführen,\l"
	.string "daher haben wir gegraben und gegraben…\n"
	.string "\p"
	.string "Und dann haben wir etwas gefunden, was\n"
	.string "uns den Atem verschlug.\p"
	.string "Was das war?!?\p"
	.string "Hahaha! Das verrate ich dir, wenn\n"
	.string "du mich besiegst.$"

MagmaHideout_1F_Text_Grunt2Defeat:
	.string "Aaaarrgh! Treffer, versenkt.$"

MagmaHideout_1F_Text_Grunt2PostBattle:
	.string "Ich verrate es dir trotzdem nicht.\n"
	.string "Du wirst das schon herausfinden, wenn\l"
	.string "du dorthin gehst.\p"
	.string "Schließlich darf man sich nicht jede\n"
	.string "Überraschung nehmen lassen.$"

