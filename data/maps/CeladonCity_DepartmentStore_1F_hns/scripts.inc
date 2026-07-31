CeladonCity_DepartmentStore_1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonDeptElevator_OnFrame
	.byte 0

CeladonDept1_EventScript_Receptionsit::
    msgbox CeladonDeptStore_Text_1FReceptionist, MSGBOX_NPC
    end

CeladonDept1_EventScript_Gent::
    msgbox CeladonDeptStore_Text_1FGentleman, MSGBOX_NPC
    end

CeladonDept1_EventScript_Teacher::
    msgbox CeladonDeptStore_Text_1FTeacher, MSGBOX_NPC
    end

CeladonDept1_EventScript_Directory::
    msgbox CeladonDeptStore_Text_1FDirectory, MSGBOX_SIGN
    end

CeladonDeptStore_Text_1FReceptionist:
	.string "Hallo! Willkommen im Prismania City\n"
	.string "Kaufhaus!\p"
	.string "Das Verzeichnis findest du\n"
	.string "an der Wand.$"

CeladonDeptStore_Text_1FGentleman:
	.string "Dieses Kaufhaus gehört zur selben\n"
	.string "Kette wie das in Dukatia City.\p"
	.string "Beide wurden gleichzeitig renoviert.$"

CeladonDeptStore_Text_1FTeacher:
	.string "Ich bin zum ersten Mal hier… Das\n"
	.string "Gebäude ist so groß, dass ich fast\l"
	.string "Angst habe, mich zu verlaufen.$"

CeladonDeptStore_Text_1FDirectory:
	.string "EG: Kunden Information\p"
	.string "1F: Trainer Zubehör\p"
	.string "2F: TM-Laden\p"
	.string "3F: Geschenkartikel\p"
	.string "4F: Drogerie\p"
	.string "5F: Dachterrasse$"
