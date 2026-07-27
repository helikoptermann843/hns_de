SSAnne_2F_Room3_Frlg_MapScripts::
	.byte 0

SSAnne_2F_Room3_EventScript_Gentleman::
	msgbox SSAnne_2F_Room3_Text_SeenMonsFerryPeople, MSGBOX_NPC
	end

SSAnne_2F_Room3_EventScript_OldMan::
	msgbox SSAnne_2F_Room3_Text_SomeTreesCanBeCutDown, MSGBOX_NPC
	end

SSAnne_2F_Room3_Text_SeenMonsFerryPeople::
	.string "{VAR}! Du hast uns mit Hilfe\n"
	.string "deiner POKéMON gerettet!$"

SSAnne_2F_Room3_Text_SomeTreesCanBeCutDown::
	.string "POKéMON können Büsche mit dem\n"
	.string "ZERSCHNEIDER klein hacken.\p"
	.string "Aber vergiss nicht, ZERSCHNEIDER\n"
	.string "ist eine VM!\p"
	.string "Wer sie einmal gelernt hat, kann\n"
	.string "sie nicht so einfach vergessen!$"

