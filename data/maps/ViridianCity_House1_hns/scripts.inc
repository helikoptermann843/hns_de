ViridianCity_House1_hns_MapScripts::
	.byte 0

ViridianCity_House1_EventScript_Pokefan::
	msgbox ViridianCity_House1_Text_PokefanM, MSGBOX_NPC
	end

ViridianCity_House1_EventScript_Lass::
	msgbox ViridianCity_House1_Text_Lass, MSGBOX_NPC
	end


ViridianCity_House1_EventScript_Speary::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SPEAROW, CRY_MODE_NORMAL
	msgbox ViridianCity_House1_Text_Speary, MSGBOX_DEFAULT
	waitmoncry
	release
	end

ViridianCity_House1_EventScript_Rattey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_RATTATA, CRY_MODE_NORMAL
	msgbox ViridianCity_House1_Text_Rattey, MSGBOX_DEFAULT
	waitmoncry
	release
	end

ViridianCity_House1_Text_PokefanM:
	.string "Denkst du dir denn auch immer gute\n"
	.string "Spitznamen für deine Pokémon aus?\p"
	.string "Das Tauschen von Pokémon macht\n"
	.string "mehr Spaß, wenn sie alle interessante\l"
	.string "Spitznamen haben!$"

ViridianCity_House1_Text_Lass:
	.string "Das hier sind Habbi, ein HABITAK,\n"
	.string "und Fratzi, ein RATTFRATZ!$"

ViridianCity_House1_Text_Speary:
	.string "Habbi: Habi, tak!$"

ViridianCity_House1_Text_Rattey:
	.string "Fratzi: Rattattatt!$"

