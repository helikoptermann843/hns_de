PacifidlogTown_House1_MapScripts::
	.byte 0

PacifidlogTown_House1_EventScript_Man::
	msgbox PacifidlogTown_House1_Text_RegiStory, MSGBOX_NPC
	end

PacifidlogTown_House1_EventScript_Woman::
	msgbox PacifidlogTown_House1_Text_SixDotsOpenThreeDoors, MSGBOX_NPC
	end

PacifidlogTown_House1_Text_RegiStory:
	.string "In der HOENN-Region gibt es drei\n"
	.string "POKéMON, die die Stärke von Gestein,\l"
	.string "Eis und Stahl repräsentieren.\p"
	.string "Man sagt, sie verstecken sich in\n"
	.string "Höhlen vor den Augen der Menschen.\p"
	.string "Diese Geschichte wurde mir als Kind\n"
	.string "erzählt.$"

PacifidlogTown_House1_Text_SixDotsOpenThreeDoors:
	.string "“Sechs Punkte öffnen drei Türen.”\p"
	.string "Mein Großvater sagte das immer, aber\n"
	.string "ich habe keine Ahnung, was es\l"
	.string "bedeutet.$"

