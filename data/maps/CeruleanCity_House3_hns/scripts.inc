CeruleanCity_House3_hns_MapScripts::
	.byte 0

CeruleanCity_House3_EventScript_Granny::
	msgbox CeruleanHouse_Text_Granny, MSGBOX_NPC
	end
CeruleanCity_House3_EventScript_Gramps::
	msgbox CeruleanHouse_Text_Gramps, MSGBOX_NPC
	end

CeruleanCity_House3_EventScript_Kangaskhan::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KANGASKHAN, CRY_MODE_NORMAL
	msgbox CeruleanHouse_Text_Kangaskhan, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CeruleanCity_House3_EventScript_Zubat::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZUBAT, CRY_MODE_NORMAL
	msgbox CeruleanHouse_Text_Zubat, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CeruleanHouse_Text_Granny:
	.string "Mein Mann lebt glücklich\n"
	.string "mit den Pokémon,\l"
	.string "die er durch Tauschen bekommen hat.$"

CeruleanHouse_Text_Gramps:
	.string "Ah… Ich bin so glücklich…$"

CeruleanHouse_Text_Kangaskhan:
	.string "Kangama: Kaa Kaaa.$"

CeruleanHouse_Text_Zubat:
	.string "Zubat: Zuba zubaa.$"

