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
	.string "Hallo! Willkommen im PRISMANIA\l"
	.string "KAUFHAUS!\n"
	.string "Das Verzeichnis findest du an der\p"
	.string "Wand.$"

CeladonDeptStore_Text_1FGentleman:
	.string "Dieses KAUFHAUS gehört zur selben\n"
	.string "Kette wie das in Dukatia City.\p"
	.string "Beide wurden gleichzeitig renoviert.$"

CeladonDeptStore_Text_1FTeacher:
	.string "Ich bin das erste Mal hier.\p"
	.string "Es ist so groß…\p"
	.string "Ich fürchte, ich werde mich verlaufen.$"

CeladonDeptStore_Text_1FDirectory:
	.string "EG: KUNDEN INFORMATION\p"
	.string "1F: TRAINER ZUBEHÖR\p"
	.string "2F: TM-LADEN\p"
	.string "3F: GESCHENKARTIKEL\p"
	.string "4F: DROGERIE\p"
	.string "5F: DACHTERRASSE$"
