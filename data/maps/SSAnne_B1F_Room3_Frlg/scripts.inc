SSAnne_B1F_Room3_Frlg_MapScripts::
	.byte 0

SSAnne_B1F_Room3_EventScript_Dylan::
	trainerbattle_single TRAINER_SAILOR_DYLAN, SSAnne_B1F_Room3_Text_DylanIntro, SSAnne_B1F_Room3_Text_DylanDefeat
	msgbox SSAnne_B1F_Room3_Text_DylanPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room3_Text_DylanIntro::
	.string "Ich war früher genauso aufgedreht\n"
	.string "wie du!$"

SSAnne_B1F_Room3_Text_DylanDefeat::
	.string "Oh nein!\n"
	.string "Verloren!$"

SSAnne_B1F_Room3_Text_DylanPostBattle::
	.string "Wasser-Pokémon leben unter Wasser!\n"
	.string "Du benötigst eine Angel!$"

