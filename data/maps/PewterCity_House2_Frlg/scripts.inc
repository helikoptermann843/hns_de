PewterCity_House2_Frlg_MapScripts::
	.byte 0

PewterCity_House2_EventScript_OldMan::
	msgbox PewterCity_House2_Text_MonsLearnTechniquesAsTheyGrow, MSGBOX_NPC
	end

PewterCity_House2_EventScript_LittleBoy::
	msgbox PewterCity_House2_Text_MonsEasierCatchIfStatused, MSGBOX_NPC
	end

PewterCity_House2_Text_MonsLearnTechniquesAsTheyGrow::
	.string "{PLAYER}, gibt es etwas, das du\n"
	.string "nicht leiden kannst?\p"
	.string "BILL kann offensichtlich\n"
	.string "Milch nicht leiden!$"

PewterCity_House2_Text_MonsEasierCatchIfStatused::
	.string "{PLAYER}, was sind deine Lieblings-\n"
	.string "POKéMON?\p"
	.string "BILL ist ein POKéMANIAC, also mag\n"
	.string "er alle POKéMON.\p"
	.string "Es scheint, dass ABRA sein erstes\n"
	.string "POKéMON war!$"

