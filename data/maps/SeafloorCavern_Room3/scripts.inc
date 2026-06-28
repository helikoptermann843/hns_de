SeafloorCavern_Room3_MapScripts::
	.byte 0

SeafloorCavern_Room3_EventScript_Shelly::
	trainerbattle_single TRAINER_SHELLY_SEAFLOOR_CAVERN, SeafloorCavern_Room3_Text_ShellyIntro, SeafloorCavern_Room3_Text_ShellyDefeat
	msgbox SeafloorCavern_Room3_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room3_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_5, SeafloorCavern_Room3_Text_Grunt5Intro, SeafloorCavern_Room3_Text_Grunt5Defeat
	msgbox SeafloorCavern_Room3_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room3_Text_ShellyIntro:
	.string "Ahahahahaha!\p"
	.string "Wie bist du uns ohne U-Boot gefolgt?\n"
	.string "Was für ein bemerkenswertes Kind!\p"
	.string "Aber… das berechtigt dich nicht, hier\n"
	.string "herumzuschnüffeln!\p"
	.string "Jetzt kann ich dir die Sache vom\n"
	.string "KLIMA-INSTITUT heimzahlen…\p"
	.string "Ich gebe dir eine Lektion in Sachen\n"
	.string "Schmerz! Pass gut auf!$"

SeafloorCavern_Room3_Text_ShellyDefeat:
	.string "Ahahahahaha!\p"
	.string "Auuuaaa!$"

SeafloorCavern_Room3_Text_ShellyPostBattle:
	.string "Ahahahaha!\n"
	.string "Du bist unglaublich stark!\p"
	.string "Es ist verdammt schade, dass du kein\n"
	.string "Mitglied von TEAM AQUA bist!\p"
	.string "So könntest du an der wunderbaren,\n"
	.string "neuen Welt, die unser BOSS seinen\l"
	.string "Leuten versprochen hat, teilhaben…$"

SeafloorCavern_Room3_Text_Grunt5Intro:
	.string "Um unseren Traum Wirklichkeit werden\n"
	.string "zu lassen, brauchen wir die Kraft von\l"
	.string "POKéMON.\p"
	.string "Aber Nervensägen wie du nutzen die\n"
	.string "Kraft der POKéMON, um selbst an Orten\l"
	.string "wie diesem allen auf den Keks zu\n"
	.string "gehen! \p"
	.string "Das Leben funktioniert nicht so, wie\n"
	.string "wir uns das vorstellen.$"

SeafloorCavern_Room3_Text_Grunt5Defeat:
	.string "Gwah!$"

SeafloorCavern_Room3_Text_Grunt5PostBattle:
	.string "Weißt du, wir stellen die Motive\n"
	.string "unseres Anführers nie in Frage.\p"
	.string "Und dann kommt ein Frettchen wie du\n"
	.string "dahergelaufen und legt sich\l"
	.string "mit unserem BOSS an.\p"
	.string "Vielleicht…\n"
	.string "bist du ja doch kein Frettchen…$"

