LavenderTown_House1_hns_MapScripts::
	.byte 0

LavenderTown_House1_EventScript_Girl::
	msgbox LavenderTown_House1_Text_Girl, MSGBOX_NPC
	end

LavenderTown_House1_EventScript_Guy::
	msgbox LavenderTown_House1_Text_Guy, MSGBOX_NPC
	end

LavenderTown_House1_EventScript_Marowak::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MAROWAK, CRY_MODE_NORMAL
	msgbox LavenderTown_House1_Text_Marowak, MSGBOX_DEFAULT
	waitmoncry
	msgbox LavenderTown_House1_Text_Marowak2, MSGBOX_DEFAULT
	closemessage
	release
	end

LavenderTown_House1_Text_Girl:
	.string "Es gibt da draußen schreckliche Leute,\n"
	.string "die ihre Pokémon links liegen lassen,\l"
	.string "wenn sie genug von ihnen haben.\p"
	.string "Mr. Fuji bietet diesen armen,\n"
	.string "heimatlosen Pokémon ein Zuhause.$"
LavenderTown_House1_Text_Guy:
	.string "Ja, das hier ist das Haus von Mr. Fuji…\n"
	.string "Aber im Moment ist er leider nicht hier.\p"
	.string "Du suchst am besten mal im\n"
	.string "Haus der Erinnerungen nach ihm!$"
LavenderTown_House1_Text_Marowak:
	.string ".............................$"

LavenderTown_House1_Text_Marowak2:
	.string "Das Knogga ist ruhig,\n"
	.string "scheint aber recht glücklich.$"

