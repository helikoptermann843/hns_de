CeladonCity_DepartmentStore_1F_Frlg_MapScripts::
	.byte 0

CeladonCity_DepartmentStore_1F_EventScript_Receptionist::
	msgbox CeladonCity_DepartmentStore_1F_Text_WelcomeToDeptStore, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_1F_EventScript_LayoutSign::
	msgbox CeladonCity_DepartmentStore_1F_Text_FloorDescriptions, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_1F_EventScript_FloorSign::
	msgbox CeladonCity_DepartmentStore_1F_Text_ServiceCounter, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_1F_Text_WelcomeToDeptStore::
	.string "Willkommen im Einkaufszentrum von\n"
	.string "Prismania City!\p"
	.string "Auf der Tafel rechts findest du\n"
	.string "eine Übersicht.$"

CeladonCity_DepartmentStore_1F_Text_FloorDescriptions::
	.string "EG: Kundeninformation\p"
	.string "1S: Zubehör für Trainer\p"
	.string "2S: Videospiele-Shop\p"
	.string "3S: Geschenkartikel\p"
	.string "4S: Drogerie\p"
	.string "Dachgarten: Automaten$"

CeladonCity_DepartmentStore_1F_Text_ServiceCounter::
	.string "EG: Kundeninformation$"

