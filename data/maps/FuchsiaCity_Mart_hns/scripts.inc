FuchsiaCity_Mart_hns_MapScripts::
	.byte 0

FuchsiaCity_Mart_EventScript_Fisher::
	msgbox FuchsiaMart_Text_Fisher, MSGBOX_NPC
	end

FuchsiaCity_Mart_EventScript_Woman::
	msgbox FuchsiaMart_Text_CooltrainerF, MSGBOX_NPC
	end

FuchsiaMart_Text_Fisher:
	.string "Ich wollte einen Geschenkartikel\p"
	.string "in der SAFARI-ZONE\n"
	.string "kaufen, aber sie ist geschlossen…$"

FuchsiaMart_Text_CooltrainerF:
	.string "In dieser Stadt\n"
	.string "lebt auch die Enkelin des WÄRTERs der\l"
	.string "SAFARI-ZONE.$"
