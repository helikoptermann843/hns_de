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
	.string "Wir bewachen diesen Turm, um den\n"
	.string "Pokémon auf diese Weise unseren\p"
	.string "Dank auszudrücken und damit wir nie\n"
	.string "vergessen, was wir ihnen verdanken!$"

SproutTower_Text_SageChow_Beaten:
	.string "A-auch dafür vielen Dank!$"

SproutTower_Text_SageChow_AfterBattle:
	.string "Alles Leben kann nur fortbestehen,\n"
	.string "wenn man sich gegenseitig hilft…\p"
	.string "Lasst uns niemals vergessen,\n"
	.string "uns dankbar zu zeigen!$"

SproutTower_Text_1F_Sage1:
	.string "Nur wenn du es bis\n"
	.string "ganz nach oben schaffst,\l"
	.string "erhältst du eine VM.$"

SproutTower_Text_1F_Sage2:
	.string "Der KNOFENSA-Turm wurde vor\n"
	.string "langer Zeit als Trainingsstätte\l"
	.string "für Pokémon errichtet.$"

SproutTower_Text_1F_Granny:
	.string "Die Trägersäule des Turms soll einst\n"
	.string "aus einem über 30 Meter hohen\l"
	.string "KNOFENSA entstanden sein.$"

SproutTower_Text_1F_Teacher:
	.string "Siehst du, wie sie sich bewegt?\n"
	.string "Die Mönche scheinen oben\l"
	.string "mitten im Training zu stecken!$"

SproutTower_Text_1F_Statue:
	.string "Eine Pokémon-Statue…\n"
	.string "Sie sieht sehr erhaben aus.$"
