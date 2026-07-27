SSAnne_B1F_Room2_Frlg_MapScripts::
	.byte 0

SSAnne_B1F_Room2_EventScript_Huey::
	trainerbattle_single TRAINER_SAILOR_HUEY, SSAnne_B1F_Room2_Text_HueyIntro, SSAnne_B1F_Room2_Text_HueyDefeat
	msgbox SSAnne_B1F_Room2_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room2_Text_HueyIntro::
	.string "Auch Seeleute besitzen Pokémon!$"

SSAnne_B1F_Room2_Text_HueyDefeat::
	.string "Das war eine reife Leistung!$"

SSAnne_B1F_Room2_Text_HueyPostBattle::
	.string "Seeleute fangen ihre Pokémon auf\n"
	.string "hoher See!$"

