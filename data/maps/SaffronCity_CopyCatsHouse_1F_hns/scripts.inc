SaffronCity_CopyCatsHouse_1F_hns_MapScripts::
	.byte 0

SaffronCity_CopyCatsHouse_1F_EventScript_Mom::
	goto_if_set FLAG_RETURNED_MACHINE_PART, SaffronCity_CopyCatsHouse_1F_EventScript_MomAfter
	msgbox CopycatsHouse1F_Text_PokefanF, MSGBOX_NPC
	end

SaffronCity_CopyCatsHouse_1F_EventScript_MomAfter::
	msgbox CopycatsHouse1F_Text_PokefanF_ReturnedPart, MSGBOX_NPC
	end

SaffronCity_CopyCatsHouse_1F_EventScript_Dad::
	msgbox CopycatsHouse1F_Text_PokefanM, MSGBOX_NPC
	end

SaffronCity_CopyCatsHouse_1F_EventScript_Blissey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
	msgbox CopycatsHouse1F_Text_Blissey, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CopycatsHouse1F_Text_PokefanM:
	.string "Meine Tochter\n"
	.string "macht gerne Menschen nach.\p"
	.string "Dieses Hobby hat ihr den Spitznamen\p"
	.string "NACHAHMERIN eingebracht.$"

CopycatsHouse1F_Text_PokefanF:
	.string "Meine Tochter ist sehr ichbezogen…\p"
	.string "Sie hat nur wenige Freunde.$"

CopycatsHouse1F_Text_PokefanF_ReturnedPart:
	.string "Vor kurzem hat sie ihre PUPPE,\p"
	.string "die ihr ein Junge vor drei Jahren\p"
	.string "geschenkt hat, verloren.\p"
	.string "Ihre Nachahmerei\n"
	.string "ist seitdem sogar noch besser\l"
	.string "geworden…$"

CopycatsHouse1F_Text_Blissey:
	.string "HEITEIRA: Teirii!$"
