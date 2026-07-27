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
	.string "Ebenholz City ist die Heimat eines alten\n"
	.string "Klans, der die tiefsten Geheimnisse\l"
	.string "der Drachen-Pokémon ergründet hat.\p"
	.string "Aus diesem Grund sind über diesen Ort\n"
	.string "zahlreiche Legenden überliefert, die\l"
	.string "sich um die Drachen-Pokémon ranken.$"

BlackthornCity_House1_Text_Dratini:
	.string "DRATINI: Draaa!$"
