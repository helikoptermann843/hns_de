Gate_IlexForest_Route34_hns_MapScripts::
	.byte 0

Route34IlexForestGate_EventScript_Lass::
	lock
	faceplayer
	msgbox Route34IlexForestGate_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

Route34IlexForestGate_EventScript_Butterfree::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BUTTERFREE, CRY_MODE_NORMAL
	msgbox Route34IlexForestGate_Text_Butterfree, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route34IlexForestGate_Text_Lass:
	.string "Hast du den Schrein gesehen,\n"
	.string "der dem Schutzpatron huldigt?\p"
	.string "Er wacht über den Wald,\n"
	.string "aus einer anderen Zeit.\p"
	.string "Ich glaube, das ist ein\n"
	.string "Pflanzen-Pokémon.$"

Route34IlexForestGate_Text_Butterfree:
	.string "SMETTBO: Boh!$"
