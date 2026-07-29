FuchsiaCity_Mart_hns_MapScripts::
	.byte 0

FuchsiaCity_Mart_EventScript_Fisher::
	msgbox FuchsiaMart_Text_Fisher, MSGBOX_NPC
	end

FuchsiaCity_Mart_EventScript_Woman::
	msgbox FuchsiaMart_Text_CooltrainerF, MSGBOX_NPC
	end

FuchsiaMart_Text_Fisher:
	.string "Ich wollte einen Geschenkartikel\n"
	.string "in der Safari-Zone\l"
	.string "kaufen, aber sie ist geschlossen…$"

FuchsiaMart_Text_CooltrainerF:
	.string "In dieser Stadt lebt\n"
	.string "auch die Enkelin des Wärters der\l"
	.string "Safari-Zone.$"
