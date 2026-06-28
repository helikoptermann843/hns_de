CeruleanCity_Mart_hns_MapScripts::
	.byte 0

CeruleanCity_Mart_EventScript_Juggler::
	msgbox CeruleanMart_Text_CooltrainerM, MSGBOX_NPC
	end

CeruleanCity_Mart_EventScript_CooltrainerF::
	msgbox CeruleanMart_Text_CooltrainerF, MSGBOX_NPC
	end

CeruleanMart_Text_CooltrainerM:
	.string "Du wirst auf viele Trainer stoßen,\n"
	.string "wenn du zum KAP von AZURIA gehst.\p"
	.string "Sie wollen sehen, wie sie sich\n"
	.string "gegen andere Trainer schlagen.$"

CeruleanMart_Text_CooltrainerF:
	.string "Misty ist ungefähr die einzige Person\n"
	.string "in der Stadt, die die Trainer am\l"
	.string "KAP von AZURIA besiegen kann.$"
