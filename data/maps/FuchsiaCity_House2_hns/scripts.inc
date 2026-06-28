FuchsiaCity_House2_hns_MapScripts::
	.byte 0

FuchsiaCity_House2_EventScript_Granddaughter::	
	goto_if_set FLAG_TEMP_1, FuchsiaCity_House2_EventScript_Granddaughter2
	msgbox FuchsiaCity_House2_Text_WardensGranddaughter1, MSGBOX_NPC
	setflag FLAG_TEMP_1
	end

FuchsiaCity_House2_EventScript_Granddaughter2::
	msgbox FuchsiaCity_House2_Text_WardensGranddaughter2, MSGBOX_NPC
	end

FuchsiaCity_House2_EventScript_Photo::
	msgbox FuchsiaCity_House2_Text_WardenPhoto, MSGBOX_NPC
	end

FuchsiaCity_House2_Text_WardensGranddaughter1:
	.string "Mein Opa ist der Leiter der\n"
	.string "Safari-Zone.\p"
	.string "Zumindest war er das…\p"
	.string "Er beschloss, Urlaub zu machen\n"
	.string "und reiste ganz allein ins Ausland.\p"
	.string "Er hörte einfach auf, die Safari-\l"
	.string "Zone zu leiten.$"

FuchsiaCity_House2_Text_WardensGranddaughter2:
	.string "Viele Leute waren enttäuscht,\n"
	.string "dass die Safari-Zone schloss,\l"
	.string "aber Opa ist so stur…$"

FuchsiaCity_House2_Text_WardenPhoto:
	.string "Das ist ein Foto von einem\n"
	.string "grinsenden alten Mann, umgeben\l"
	.string "von Pokémon.$"

FuchsiaCity_House2_Text_SafariZonePhoto:
	.string "Das ist ein Foto von einer großen\n"
	.string "grünen Wiese, auf der seltene\l"
	.string "Pokémon herumtollen.$"
