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
	.string "Ich habe erst vor Kurzem angefangen,\n"
	.string "Trainer zu sein.\p"
	.string "Mein Sohn hat mich dazu ermutigt.\p"
	.string "Ich bin beeindruckt von der Auswahl\n"
	.string "praktischer Items.$"

CeladonDeptStore2F_Text_Youngster:
	.string "Mein Vater tut sich schwer damit,\n"
	.string "die Namen der Items zu lernen und\l"
	.string "wie man sie richtig benutzt…$"

CeladonDeptStore2F_Text_Directory:
	.string "Qualitätsitems für Trainer!\p"
	.string "1F: TRAINER ZUBEHÖR$"

