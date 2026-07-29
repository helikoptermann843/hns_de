MahoganyTown_House1_hns_MapScripts::
	.byte 0

MahoganyTown_House1_EventScript_BlackBelt::
	msgbox MahoganyRedGyaradosHouse_Text_BlackBelt, MSGBOX_NPC
	end

MahoganyTown_House1_EventScript_Teacher::
	goto_if_lt VAR_GOLDENROD_CITY_STATE, 6, MahoganyTown_House1_EventScript_TeacherBeforeAfter
	goto_if_lt VAR_GOLDENROD_CITY_STATE, 10, MahoganyTown_House1_EventScript_TeacherDuring
MahoganyTown_House1_EventScript_TeacherBeforeAfter::
	msgbox MahoganyRedGyaradosHouse_Text_Teacher, MSGBOX_NPC
	end

MahoganyTown_House1_EventScript_TeacherDuring::
	msgbox MahoganyRedGyaradosHouse_Text_Teacher_Rockets, MSGBOX_NPC
	end


MahoganyRedGyaradosHouse_Text_BlackBelt:
	.string "Ich hörte, dass ein rotes Garados\n"
	.string "am See erschienen sein soll.\p"
	.string "Das ist seltsam, da schon normale\n"
	.string "Garados in diesem See sehr selten\l"
	.string "sind…$"

MahoganyRedGyaradosHouse_Text_Teacher:
	.string "Mein Lieblingsprogramm\n"
	.string "im Radio? Ich würde sagen\l"
	.string "Pokémon-Musik.$"

MahoganyRedGyaradosHouse_Text_Teacher_Rockets:
	.string "Seit Kurzem ertönt immer wieder dieses\n"
	.string "seltsame Gelächter aus dem Radio… Das\l"
	.string "ist echt unheimlich!$"
