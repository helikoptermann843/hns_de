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
	.string "Sehr zu meinem Leidwesen ahmt meine\n"
	.string "Tochter gerne andere Leute nach.\p"
	.string "Keine Minute vergeht, in der sie normal\n"
	.string "mit mir spricht. Die Nachbarn nennen sie\l"
	.string "sogar schon die “Nachahmerin”!$"

CopycatsHouse1F_Text_PokefanF:
	.string "Meine Tochter ist sehr ichbezogen…\p"
	.string "Sie hat nur wenige Freunde.$"

CopycatsHouse1F_Text_PokefanF_ReturnedPart:
	.string "Seit sie die Poképuppe verloren hat,\n"
	.string "die sie vor drei Jahren von einem Jungen\l"
	.string "geschenkt bekommen hatte, wurde es mit\l"
	.string "ihrer Nachahmerei noch viel schlimmer.\p"
	.string "Sie wurde einfach immer besser darin…$"

CopycatsHouse1F_Text_Blissey:
	.string "HEITEIRA: Hei! Teira!$"
