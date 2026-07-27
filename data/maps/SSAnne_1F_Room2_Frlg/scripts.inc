SSAnne_1F_Room2_Frlg_MapScripts::
	.byte 0

SSAnne_1F_Room2_EventScript_Woman::
	msgbox SSAnne_1F_Room2_Text_CruisingAroundWorld, MSGBOX_NPC
	end

SSAnne_1F_Room2_EventScript_Ann::
	trainerbattle_single TRAINER_LASS_ANN, SSAnne_1F_Room2_Text_AnnIntro, SSAnne_1F_Room2_Text_AnnDefeat
	msgbox SSAnne_1F_Room2_Text_AnnPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_1F_Room2_EventScript_Tyler::
	trainerbattle_single TRAINER_YOUNGSTER_TYLER, SSAnne_1F_Room2_Text_TylerIntro, SSAnne_1F_Room2_Text_TylerDefeat
	msgbox SSAnne_1F_Room2_Text_TylerPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_1F_Room2_Text_TylerIntro::
	.string "Ich bin total in Pokémon vernarrt!\n"
	.string "Du auch?$"

SSAnne_1F_Room2_Text_TylerDefeat::
	.string "Wow!\n"
	.string "Du bist cool!$"

SSAnne_1F_Room2_Text_TylerPostBattle::
	.string "Es liebt dich über alles! Das ist\n"
	.string "so wunderbar und toll!\p"
	.string "Dein POKéMON könnte nicht\n"
	.string "glücklicher sein!$"

SSAnne_1F_Room2_Text_AnnIntro::
	.string "Auf meinen Reisen um die Welt habe\n"
	.string "ich unzählige Pokémon gefangen!$"

SSAnne_1F_Room2_Text_AnnDefeat::
	.string "Nein! Ich habe die ganze Welt für\n"
	.string "diese Pokémon bereist!$"

SSAnne_1F_Room2_Text_AnnPostBattle::
	.string "So behandelt man keine Pokémon von\n"
	.string "Weltklasse!\p"
	.string "Ich verlange eine Kur in einem\n"
	.string "Pokémon-Center für meine\l"
	.string "Pokémon!!!$"

SSAnne_1F_Room2_Text_CruisingAroundWorld::
	.string "Es ist ein guter Freund von dir!\n"
	.string "Behandle es weiterhin gut!$"

