Route21_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route21_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route21_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route21_EventScript_Seth::
	trainerbattle_single TRAINER_SETH_HNS, Route21_Text_SwimmermSethSeen, Route21_Text_SwimmermSethBeaten
	msgbox Route21_Text_SwimmermSethAfterBattle, MSGBOX_AUTOCLOSE
	end

Route21_EventScript_Nikki::
	trainerbattle_single TRAINER_NIKKI_HNS, Route21_Text_SwimmerfNikkiSeen, Route21_Text_SwimmerfNikkiBeaten
	msgbox Route21_Text_SwimmerfNikkiAfterBattle, MSGBOX_AUTOCLOSE
	end

Route21_EventScript_Arnold::
	trainerbattle_single TRAINER_ARNOLD_HNS, Route21_Text_FisherArnoldSeen, Route21_Text_FisherArnoldBeaten
	msgbox Route21_Text_FisherArnoldAfterBattle, MSGBOX_AUTOCLOSE
	end

Route21_Text_SwimmermSethSeen:
	.string "Halte durch!\n"
	.string "Ich sehe schon das Festland!$"

Route21_Text_SwimmermSethBeaten:
	.string "Gluck…$"

Route21_Text_SwimmermSethAfterBattle:
	.string "Beim Vulkan auf der Zinnoberinsel habe\n"
	.string "ich diesen arroganten Typ getroffen…$"

Route21_Text_SwimmerfNikkiSeen:
	.string "Falls ich gewinne,\n"
	.string "musst du mich mit der Sonnencreme\l"
	.string "einreiben!$"

Route21_Text_SwimmerfNikkiBeaten:
	.string "Ich habe Angst vor\n"
	.string "einem Sonnenbrand…$"

Route21_Text_SwimmerfNikkiAfterBattle:
	.string "Ich will ja schließlich keine Flecken\n"
	.string "oder Sommersprossen abbekommen.$"

Route21_Text_FisherArnoldSeen:
	.string "Ich hab das Angeln satt.\n"
	.string "Also gut!\l"
	.string "Lass uns kämpfen!$"

Route21_Text_FisherArnoldBeaten:
	.string "Ich habe auf ganzer Linie versagt…$"

Route21_Text_FisherArnoldAfterBattle:
	.string "Ich gehe zurück\n"
	.string "zum Angeln…$"

