SSAnne_B1F_Room1_Frlg_MapScripts::
	.byte 0

SSAnne_B1F_Room1_EventScript_Barny::
	trainerbattle_single TRAINER_FISHERMAN_BARNY, SSAnne_B1F_Room1_Text_BarnyIntro, SSAnne_B1F_Room1_Text_BarnyDefeat
	msgbox SSAnne_B1F_Room1_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room1_EventScript_Phillip::
	trainerbattle_single TRAINER_SAILOR_PHILLIP, SSAnne_B1F_Room1_Text_PhillipIntro, SSAnne_B1F_Room1_Text_PhillipDefeat
	msgbox SSAnne_B1F_Room1_Text_PhillipPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room1_Text_PhillipIntro::
	.string "Der Verlierer wird kielgeholt!\n"
	.string "Los!$"

SSAnne_B1F_Room1_Text_PhillipDefeat::
	.string "Argh!\n"
	.string "Von einem Kind besiegt...$"

SSAnne_B1F_Room1_Text_PhillipPostBattle::
	.string "Manchmal treiben Quallen an das\n"
	.string "Schiff. Der Koch fängt sie dann...$"

SSAnne_B1F_Room1_Text_BarnyIntro::
	.string "Warte doch!\n"
	.string "Lass uns plaudern!\p"
	.string "Ich besitze nur Wasser-pokémon!$"

SSAnne_B1F_Room1_Text_BarnyDefeat::
	.string "Mist!\n"
	.string "Der ist mir entwischt!$"

SSAnne_B1F_Room1_Text_BarnyPostBattle::
	.string "Ich hätte dich fast zum Assistenten\n"
	.string "gemacht!$"

