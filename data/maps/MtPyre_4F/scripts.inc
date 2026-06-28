MtPyre_4F_MapScripts::
	.byte 0

@ Seems like the scripts for the 4F and 5F were swapped

MtPyre_5F_EventScript_Atsushi::
	trainerbattle_single TRAINER_ATSUSHI, MtPyre_5F_Text_AtsushiIntro, MtPyre_5F_Text_AtsushiDefeat
	msgbox MtPyre_5F_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_5F_Text_AtsushiIntro:
	.string "Mein Lehrer…\n"
	.string "Bitte achtet auf meine Fortschritte!$"

MtPyre_5F_Text_AtsushiDefeat:
	.string "Mein Lehrer…\n"
	.string "Bitte verzeiht mir!$"

MtPyre_5F_Text_AtsushiPostBattle:
	.string "Wenn ich nicht besser werde, wird mein\n"
	.string "Lehrer, der hier ruht, keine Ruhe\l"
	.string "finden.$"

