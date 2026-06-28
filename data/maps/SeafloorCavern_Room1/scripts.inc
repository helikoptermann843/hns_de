SeafloorCavern_Room1_MapScripts::
	.byte 0

SeafloorCavern_Room1_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, SeafloorCavern_Room1_Text_Grunt1Intro, SeafloorCavern_Room1_Text_Grunt1Defeat
	msgbox SeafloorCavern_Room1_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room1_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, SeafloorCavern_Room1_Text_Grunt2Intro, SeafloorCavern_Room1_Text_Grunt2Defeat
	msgbox SeafloorCavern_Room1_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room1_Text_Grunt1Intro:
	.string "Wir können hier keine Kinder\n"
	.string "gebrauchen! Geh nach Hause! Sofort!$"

SeafloorCavern_Room1_Text_Grunt1Defeat:
	.string "Ich will nach Hause zu meiner Mami…$"

SeafloorCavern_Room1_Text_Grunt1PostBattle:
	.string "Ich möchte befördert werden, dann kann\n"
	.string "ich all die RÜPEL herumkommandieren!$"

SeafloorCavern_Room1_Text_Grunt2Intro:
	.string "Dieses U-Boot… Es ist sehr eng.\n"
	.string "Ich habe deshalb überall blaue\l"
	.string "Flecken.$"

SeafloorCavern_Room1_Text_Grunt2Defeat:
	.string "Verlieren verursacht bei mir\n"
	.string "Muskelkater!$"

SeafloorCavern_Room1_Text_Grunt2PostBattle:
	.string "Das U-Boot, das wir aufgetrieben\n"
	.string "haben,\n"
	.string "ist fürchterlich eng. Brutal eng, sage\l"
	.string "ich. Man stößt sich überall den Kopf.$"

