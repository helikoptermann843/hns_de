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
	.string "Ich hörte, dass ein rotes GARADOS\p"
	.string "am SEE erschienen sein soll.\p"
	.string "Das ist seltsam, da schon normale\p"
	.string "GARADOS in diesem See sehr selten\p"
	.string "sind…$"

MahoganyRedGyaradosHouse_Text_Teacher:
	.string "Mein Lieblingspro-\n"
	.string "gramm im Radio? Ich würde sagen\l"
	.string "Pokémon-MUSIK.$"

MahoganyRedGyaradosHouse_Text_Teacher_Rockets:
	.string "Ich habe lachen aus dem Radio\n"
	.string "gehört...gruselig.$"
