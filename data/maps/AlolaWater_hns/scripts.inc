AlolaWater_hns_MapScripts::
	.byte 0


Alola_MelemeleSea_TrainerBattleSwimmer::
	trainerbattle_single TRAINER_MELEMELE_SWIMMER_2_HNS, Alola_MelemeleSea_TrainerBattleSwimmer_Text_0, Alola_MelemeleSea_TrainerBattleSwimmer_Text_1
	msgbox Alola_MelemeleSea_TrainerBattleSwimmer_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Alola_MelemeleSea_TrainerBattleSwimmer_Text_0:
	.string "So viel offenes Wasser hier!$"

Alola_MelemeleSea_TrainerBattleSwimmer_Text_1:
	.string "Autsch,\neine Muskelzerrung…$"

Alola_MelemeleSea_TrainerBattleSwimmer_Text_2:
	.string "Hier gibt es starke Strömungen.\n"
	.string "Ich glaube, das zieht starke\l"
	.string "Pokémon an!$"

