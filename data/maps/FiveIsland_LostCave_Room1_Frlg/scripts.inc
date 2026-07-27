FiveIsland_LostCave_Room1_Frlg_MapScripts::
	.byte 0

FiveIsland_LostCave_Room1_EventScript_Lawson::
	trainerbattle_single TRAINER_RUIN_MANIAC_LAWSON, FiveIsland_LostCave_Room1_Text_LawsonIntro, FiveIsland_LostCave_Room1_Text_LawsonDefeat
	msgbox FiveIsland_LostCave_Room1_Text_LawsonPostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_LostCave_Room1_Text_LawsonIntro::
	.string "Oh!\p"
	.string "Ich dachte, dies sei eine alte\n"
	.string "Ruine. Aber es wimmelt hier\l"
	.string "nur so vor Geistern!$"

FiveIsland_LostCave_Room1_Text_LawsonDefeat::
	.string "Kreeeiiisch!\n"
	.string "Gnade!$"

FiveIsland_LostCave_Room1_Text_LawsonPostBattle::
	.string "Ich versuche, hier heraus-\n"
	.string "zufinden, aber ich lande\l"
	.string "immer wieder hier.\l"
	.string "Vielleicht ist die Anzahl der\l"
	.string "Felsen ein Hinweis?$"

