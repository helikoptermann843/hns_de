FuchsiaCity_House1_Frlg_MapScripts::
	.byte 0

FuchsiaCity_House1_EventScript_Woman::
	msgbox FuchsiaCity_House1_Text_WardenIsOldHasFalseTeeth, MSGBOX_NPC
	end

FuchsiaCity_House1_EventScript_OldMan::
	lock
	faceplayer
	famechecker FAMECHECKER_BILL, 2
	msgbox FuchsiaCity_House1_Text_BillIsMyGrandson
	release
	end

FuchsiaCity_House1_EventScript_LittleBoy::
	msgbox FuchsiaCity_House1_Text_BillFilesHisOwnMonData, MSGBOX_NPC
	end

FuchsiaCity_House1_Text_WardenIsOldHasFalseTeeth::
	.string "Der Wärter der Safari-Zone ist\n"
	.string "sehr alt! Aber er ist noch immer im\l"
	.string "Dienst!\p"
	.string "Allerdings trägt er ein Gebiss!$"

FuchsiaCity_House1_Text_BillIsMyGrandson::
	.string "Hast du schon Bill getroffen?\p"
	.string "Er ist mein Enkel!\p"
	.string "Schon als kleines Kind hat er gerne\n"
	.string "alles Mögliche gesammelt!$"

FuchsiaCity_House1_Text_BillFilesHisOwnMonData::
	.string "Bill sammelt auf seinem PC Daten\n"
	.string "über Pokémon!\p"
	.string "Hat er sie dir gezeigt?$"

