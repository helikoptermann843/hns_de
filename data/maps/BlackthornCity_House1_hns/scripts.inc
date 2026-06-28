BlackthornCity_House1_hns_MapScripts::
	.byte 0

BlackthornCity_House1EventScript_Granny::
	msgbox BlackthornCity_House1_Text_Granny, MSGBOX_NPC
	end

BlackthornCity_House1EventScript_Dratini::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DRATINI, CRY_MODE_NORMAL
	msgbox BlackthornCity_House1_Text_Dratini, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BlackthornCity_House1_Text_Granny:
	.string "Ein Clan von Trainern, die Drachen\n"
	.string "frei befehligen können, lebt hier in\l"
	.string "EBENHOLZ.\p"
	.string "Daher gibt es in dieser Stadt viele\n"
	.string "Legenden über Drachen.$"

BlackthornCity_House1_Text_Dratini:
	.string "Dratini: Draa!$"
