CeladonCity_DepartmentStore_2F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonDeptElevator_OnFrame
	.byte 0

CeladonDept2_EventScript_Pokefan::
	msgbox CeladonDeptStore2F_Text_PokefanM, MSGBOX_NPC
	end

CeladonDept2_EventScript_Youngster::
	msgbox CeladonDeptStore2F_Text_Youngster, MSGBOX_NPC
	end

CeladonDept2_EventScript_Directory::
	msgbox CeladonDeptStore2F_Text_Directory, MSGBOX_SIGN
	end

CeladonDeptStore2F_Text_PokefanM:
	.string "Mein Sohn hat mich auf meine alten Tage\n"
	.string "noch mal richtig auf den Geschmack\l"
	.string "gebracht, als Trainer anzufangen…\p"
	.string "Das riesige Angebot an nützlichen\n"
	.string "Items hier ist echt überwältigend!$"

CeladonDeptStore2F_Text_Youngster:
	.string "Mein Papa tut sich sehr schwer damit,\n"
	.string "die Namen aller Items und ihren Zweck\l"
	.string "im Kopf zu behalten…$"

CeladonDeptStore2F_Text_Directory:
	.string "Allerlei nützliche Items für Trainer!\n"
	.string "1S: Zubehör für Trainer$"

