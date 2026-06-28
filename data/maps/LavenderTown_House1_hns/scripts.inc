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
	.string "Kannst du es glauben?\p"
	.string "Manche Leute langweilen sich,\n"
	.string "wenn sie sich um Pokémon kümmern.\p"
	.string "Opa nimmt solche armen\n"
	.string "obdachlosen Pokémon auf.$"
LavenderTown_House1_Text_Guy:
	.string "Herr Fuji wohnt hier zwar,\n"
	.string "ist aber gerade nicht da.\l"
	.string "Er sollte im SEELENHAUS sein.$"
LavenderTown_House1_Text_Marowak:
	.string ".............................$"

LavenderTown_House1_Text_Marowak2:
	.string "Das Knogga ist ruhig,\n"
	.string "scheint aber recht glücklich.$"

