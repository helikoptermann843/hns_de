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
	.string "Angeblich soll sich hier irgendeine\n"
	.string "zwielichtige Gestalt herumtreiben…\p"
	.string "Wenn sie sich als Dieb entpuppen sollte,\n"
	.string "lasse ich keine Gnade walten!$"

CeruleanPolice_Text_PokefanF:
	.string "Bei mir ist vor langer Zeit mal\n"
	.string "ein Dieb eingestiegen, weißt du?$"

CeruleanPolice_Text_Diglett:
	.string "DIGDA: Dig da!$"
