SSAnne_B1F_Room4_Frlg_MapScripts::
	.byte 0

SSAnne_B1F_Room4_EventScript_Leonard::
	trainerbattle_single TRAINER_SAILOR_LEONARD, SSAnne_B1F_Room4_Text_LeonardIntro, SSAnne_B1F_Room4_Text_LeonardDefeat
	msgbox SSAnne_B1F_Room4_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room4_EventScript_Duncan::
	trainerbattle_single TRAINER_SAILOR_DUNCAN, SSAnne_B1F_Room4_Text_DuncanIntro, SSAnne_B1F_Room4_Text_DuncanDefeat
	msgbox SSAnne_B1F_Room4_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room4_Text_LeonardIntro::
	.string "Du weißt, wir Seeleute lieben es zu\n"
	.string "kämpfen!$"

SSAnne_B1F_Room4_Text_LeonardDefeat::
	.string "Ja!\n"
	.string "Was für ein Kampf!!!$"

SSAnne_B1F_Room4_Text_LeonardPostBattle::
	.string "Willst du zur See fahren?$"

SSAnne_B1F_Room4_Text_DuncanIntro::
	.string "Mein Ruf als Seebär steht auf dem\n"
	.string "Spiel!!!$"

SSAnne_B1F_Room4_Text_DuncanDefeat::
	.string "Kiel unter!\n"
	.string "Das war es für mich!$"

SSAnne_B1F_Room4_Text_DuncanPostBattle::
	.string "Hast du schon den Profi-angler in\n"
	.string "Orania City besucht?$"

