Route1_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route1_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route1_EventScript_SchoolboyDanny::
	trainerbattle_single TRAINER_DANNY_HNS, Route1_Text_SchoolboyDanny_Seen, Route1_Text_SchoolboyDanny_Beaten
	msgbox Route1_Text_SchoolboyDanny_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route1_EventScript_Quinn::
	trainerbattle_single TRAINER_QUINN_HNS, Route1_Text_CooltrainerFQuinn_Seen, Route1_Text_CooltrainerFQuinn_Beaten
	msgbox Route1_Text_CooltrainerFQuinn_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route1_EventScript_Sign::
	msgbox Route1_Text_Sign, MSGBOX_SIGN
	end

Route1_Text_SchoolboyDanny_Seen:
	.string "Wenn sich zwei\n"
	.string "Trainer begegnen, wollen sie sofort\l"
	.string "kämpfen.$"

Route1_Text_SchoolboyDanny_Beaten:
	.string "Argh… Ich habe erneut verloren…$"

Route1_Text_SchoolboyDanny_AfterBattle:
	.string "Es ist ein ungeschriebenes\p"
	.string "Gesetz, dass Trai-\n"
	.string "ner kämpfen, wenn sie sich begegnen.$"

Route1_Text_CooltrainerFQuinn_Seen:
	.string "Du da! Willst du kämpfen?$"

Route1_Text_CooltrainerFQuinn_Beaten:
	.string "Versagt und weg…$"

Route1_Text_CooltrainerFQuinn_AfterBattle:
	.string "Du bist stark.\p"
	.string "Du hast offenbar hart trainiert.$"

Route1_Text_Sign:
	.string "ROUTE 1\p"
	.string "ALABASTIA - VERTANIA CITY$"
