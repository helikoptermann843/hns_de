CeladonCity_DepartmentStore_4F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonDeptElevator_OnFrame
	.byte 0

CeladonDept_EventScript_Supernerd::
	msgbox CeladonDeptStore4F_Text_SuperNerd, MSGBOX_NPC
	end
CeladonDept_EventScript_Youngster::
	msgbox CeladonDeptStore4F_Text_Youngster, MSGBOX_NPC
	end
CeladonDept_EventScript_Directory::
	msgbox CeladonDeptStore4F_Text_Directory, MSGBOX_NPC
	end

CeladonDeptStore4F_Text_SuperNerd:
	.string "Ich bin hier um einen Surferbrief\n"
	.string "für meine Freundin zu bekommen.\p"
	.string "Warte, die sind ausverkauft?$"

CeladonDeptStore4F_Text_Youngster:
	.string "Dies ist der einzige Ort\n"
	.string "um Herzbrief zu kaufen.$"

CeladonDeptStore4F_Text_Directory:
	.string "Mache anderen eine Freude!\p"
	.string "3F: GESCHENKARTIKEL$"
