GraniteCave_1F_MapScripts::
	.byte 0

GraniteCave_1F_EventScript_Hiker::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
	giveitem ITEM_HM_FLASH
	setflag FLAG_RECEIVED_HM_FLASH
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_EventScript_ReceivedFlash::
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
	.string "Hey, du!\n"
	.string "Hier ist es schrecklich dunkel.\l"
	.string "Eine Erforschung wird damit schwierig.\n"
	.string "\p"
	.string "Der Typ, der vorher schon mal hier\n"
	.string "war… TROY heißt er, glaube ich…\p"
	.string "Der weiß, wie man BLITZ einsetzt,\n"
	.string "daher\n"
	.string "wird es ihm wohl gut gehen, aber…\p"
	.string "Das Motto unter uns WANDERERn heißt:\n"
	.string "Jedem aus der Klemme helfen.\p"
	.string "Deshalb bekommst du dies von mir.$"

GraniteCave_1F_Text_ExplainFlash:
	.string "Bringe einem POKéMON die VM BLITZ\n"
	.string "bei und setze sie ein.\p"
	.string "Damit wird selbst die dunkelste Höhle\n"
	.string "von Licht erfüllt.\p"
	.string "Aber um das zu können, brauchst du den\n"
	.string "ORDEN der ARENA von FAUSTAUHAVEN.$"

