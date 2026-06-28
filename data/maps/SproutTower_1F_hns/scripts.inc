SproutTower_1F_hns_MapScripts::
	.byte 0

SproutTower_1F_EventScript_SageChow::
	trainerbattle_single TRAINER_CHOW_HNS, SproutTower_Text_SageChow_Seen, SproutTower_Text_SageChow_Beaten
	msgbox SproutTower_Text_SageChow_AfterBattle, MSGBOX_AUTOCLOSE
	end

SproutTower_1F_EventScript_Sage1::
	lock
	faceplayer
	msgbox SproutTower_Text_1F_Sage1, MSGBOX_DEFAULT
	closemessage
	release
	end

SproutTower_1F_EventScript_Sage2::
	lock
	faceplayer
	msgbox SproutTower_Text_1F_Sage2, MSGBOX_DEFAULT
	closemessage
	release
	end

SproutTower_1F_EventScript_Granny::
	lock
	faceplayer
	msgbox SproutTower_Text_1F_Granny, MSGBOX_DEFAULT
	closemessage
	release
	end

SproutTower_1F_EventScript_Teacher::
	lock
	faceplayer
	msgbox SproutTower_Text_1F_Teacher, MSGBOX_DEFAULT
	closemessage
	release
	end

SproutTower_1F_EventScript_ItemParalyzeHeal::
	finditem ITEM_PARALYZE_HEAL
	end

SproutTower_Text_SageChow_Seen:
	.string "Wir stehen Wache in diesem Turm.\p"
	.string "Hier zeigen wir Dankbarkeit,\n"
	.string "um alle Pokémon zu ehren.$"

SproutTower_Text_SageChow_Beaten:
	.string "D-Danke!$"

SproutTower_Text_SageChow_AfterBattle:
	.string "Alle Lebewesen co-existieren\n"
	.string "durch Zusammenarbeit.\p"
	.string "Wir müssen immer dankbar\n"
	.string "dafür sein.$"

SproutTower_Text_1F_Sage1:
	.string "Nur wenn du es bis\n"
	.string "ganz nach oben schaffst,\l"
	.string "erhältst du eine VM.$"

SproutTower_Text_1F_Sage2:
	.string "Der KNOFENSA-TURM wurde vor langer\n"
	.string "Zeit als Pokémon-\l"
	.string "Trainingsstätte errichtet.$"

SproutTower_Text_1F_Granny:
	.string "Ein über 30 m grosses KNOFENSA…\p"
	.string "Man sagt, es wurde\n"
	.string "die Trägersäule des Turmes.$"

SproutTower_Text_1F_Teacher:
	.string "Siehst du, wie die Säule wackelt?\p"
	.string "Die Trainer trainieren da oben.$"

SproutTower_Text_1F_Statue:
	.string "Eine PKMN-Statue…\p"
	.string "Sie sieht sehr erhaben aus.$"
