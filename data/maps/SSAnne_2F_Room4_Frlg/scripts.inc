SSAnne_2F_Room4_Frlg_MapScripts::
	.byte 0

SSAnne_2F_Room4_EventScript_Lamar::
	trainerbattle_single TRAINER_GENTLEMAN_LAMAR, SSAnne_2F_Room4_Text_LamarIntro, SSAnne_2F_Room4_Text_LamarDefeat
	msgbox SSAnne_2F_Room4_Text_LamarPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_2F_Room4_EventScript_Dawn::
	trainerbattle_single TRAINER_LASS_DAWN, SSAnne_2F_Room4_Text_DawnIntro, SSAnne_2F_Room4_Text_DawnDefeat
	msgbox SSAnne_2F_Room4_Text_DawnPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_2F_Room4_Text_LamarIntro::
	.string "Was magst du lieber?\n"
	.string "Starke oder seltene Pokémon?$"

SSAnne_2F_Room4_Text_LamarDefeat::
	.string "Ich ziehe meinen Hut vor dir! Wow!$"

SSAnne_2F_Room4_Text_LamarPostBattle::
	.string "Ich mag Pokémon, die stark und\n"
	.string "selten sind!$"

SSAnne_2F_Room4_Text_DawnIntro::
	.string "Wo warst du, als die Party lief?$"

SSAnne_2F_Room4_Text_DawnDefeat::
	.string "Mach langsam!!!$"

SSAnne_2F_Room4_Text_DawnPostBattle::
	.string "Ich bewundere die Stärke deiner\n"
	.string "Pokémon!$"

