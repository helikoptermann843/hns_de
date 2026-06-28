CeruleanCity_House2_hns_MapScripts::
	.byte 0

CeruleanCity_House2_EventScript_Woman::
	msgbox CeruleanPolice_Text_PokefanF, MSGBOX_NPC
	end

CeruleanCity_House2_EventScript_Man::
	msgbox CeruleanPolice_Text_FishingGuru, MSGBOX_NPC
	end

CeruleanCity_House2_EventScript_Diglett::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DIGLETT, CRY_MODE_NORMAL
	msgbox CeruleanPolice_Text_Diglett, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CeruleanPolice_Text_FishingGuru:
	.string "Ich habe gehört,\n"
	.string "dass ein zwielichtiger Typ\n"
	.string "herumschleichen soll.\p"
	.string "Ich werde nicht ruhig abwarten\n"
	.string "wenn sich herausstellt,\l"
	.string "dass er ein Dieb ist.$"

CeruleanPolice_Text_PokefanF:
	.string "Wir wurden von Räubern aufgehalten.$"

CeruleanPolice_Text_Diglett:
	.string "Digda: Dig, dig.$"
