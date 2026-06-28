Route119_House_MapScripts::
	.byte 0

Route119_House_EventScript_Woman::
	msgbox Route119_House_Text_RumorAboutCaveOfOrigin, MSGBOX_NPC
	end

Route119_House_EventScript_Wingull::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox Route119_House_Text_Wingull, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route119_House_Text_RumorAboutCaveOfOrigin:
	.string "Es soll eine Höhle geben - die\n"
	.string "URZEITHÖHLE.\p"
	.string "Die Menschen erzählen sich, dass dort\n"
	.string "die Geister der POKéMON wieder zum\l"
	.string "Leben erweckt werden.\l"
	.string "Ob das tatsächlich möglich ist?$"

Route119_House_Text_Wingull:
	.string "WINGULL: Pihyoh!$"

