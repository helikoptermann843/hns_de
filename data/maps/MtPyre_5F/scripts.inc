MtPyre_5F_MapScripts::
	.byte 0

@ Seems like the scripts for the 4F and 5F were swapped

MtPyre_4F_EventScript_Tasha::
	trainerbattle_single TRAINER_TASHA, MtPyre_4F_Text_TashaIntro, MtPyre_4F_Text_TashaDefeat
	msgbox MtPyre_4F_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_4F_Text_TashaIntro:
	.string "Ich mag gruselige Horrordinge…\n"
	.string "Es ist wie eine Sucht…\p"
	.string "Sobald ich hier bin…\n"
	.string "stehen mir die Haare zu Berge.$"

MtPyre_4F_Text_TashaDefeat:
	.string "Ich hasse Niederlagen…$"

MtPyre_4F_Text_TashaPostBattle:
	.string "Ich will unheimliche Dinge sehen…\n"
	.string "Ich kann nicht weggehen…\p"
	.string "Muss bleiben…\n"
	.string "Willst du nicht bei mir bleiben?$"

