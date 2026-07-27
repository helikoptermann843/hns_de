SSAnne_2F_Room2_Frlg_MapScripts::
	.byte 0

SSAnne_2F_Room2_EventScript_Dale::
	trainerbattle_single TRAINER_FISHERMAN_DALE, SSAnne_2F_Room2_Text_DaleIntro, SSAnne_2F_Room2_Text_DaleDefeat
	msgbox SSAnne_2F_Room2_Text_DalePostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_2F_Room2_EventScript_Brooks::
	trainerbattle_single TRAINER_GENTLEMAN_BROOKS, SSAnne_2F_Room2_Text_BrooksIntro, SSAnne_2F_Room2_Text_BrooksDefeat
	msgbox SSAnne_2F_Room2_Text_BrooksPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_2F_Room2_Text_BrooksIntro::
	.string "Der Wettstreit mit der Jugend hält\n"
	.string "mich jung!$"

SSAnne_2F_Room2_Text_BrooksDefeat::
	.string "Ahhh!\n"
	.string "Da fühlt man sich gleich jünger!$"

SSAnne_2F_Room2_Text_BrooksPostBattle::
	.string "Vor 15 Jahren hätte ich mit links\n"
	.string "gewonnen...$"

SSAnne_2F_Room2_Text_DaleIntro::
	.string "Schau dir an, was ich an Land\n"
	.string "gezogen habe!$"

SSAnne_2F_Room2_Text_DaleDefeat::
	.string "O.k.!\n"
	.string "Das war es für mich! Tschüss!!!$"

SSAnne_2F_Room2_Text_DalePostBattle::
	.string "Eine Party?\p"
	.string "Die dürfte längst vorbei sein. Du\n"
	.string "bist spät dran!$"

