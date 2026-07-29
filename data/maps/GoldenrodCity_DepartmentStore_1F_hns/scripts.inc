GoldenrodCity_DepartmentStore_1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GoldenrodDeptElevator_OnFrame
	.byte 0

GoldenrodDeptStore1_EventScript_Receptionist::
	lock
	faceplayer
	msgbox GoldenrodDeptStor1_Text_Receptionist, MSGBOX_DEFAULT
	closemessage
	release
	end
GoldenrodDeptStore1_EventScript_Gentleman::
	lock
	faceplayer
	msgbox GoldenrodDeptStore1_Text_Gentleman, MSGBOX_DEFAULT
	closemessage
	release
	end
GoldenrodDeptStore1_EventScript_PokefanF::
	lock
	faceplayer
	msgbox GoldenrodDeptStore1_Text_PokefanF, MSGBOX_DEFAULT
	closemessage
	release
	end
GoldenrodDeptStore1_EventScript_BugCatcher::
	lock
	faceplayer
	msgbox GoldenrodDeptStore1_Text_BugCatcher, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore1_EventScript_Directory::
	lock
	msgbox GoldenrodDeptStore1_Text_Directory, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodDeptStor1_Text_Receptionist:
	.string "Willkommen im\n"
	.string "Kaufhaus von Dukatia City.$"

GoldenrodDeptStore1_Text_Gentleman:
	.string "Das Kaufhaus\n"
	.string "bietet eine große Auswahl.\p"
	.string "Aber einige Items erhält man nur als\n"
	.string "Preis in der Spielhalle.$"

GoldenrodDeptStore1_Text_PokefanF:
	.string "Dann mal ans Werk! Ich habe vor, heute\n"
	.string "das halbe Kaufhaus leerzukaufen!$"

GoldenrodDeptStore1_Text_BugCatcher:
	.string "Mama ist eine echte\n"
	.string "Schnäppchenjägerin.\p"
	.string "Sie besorgt mir meine Items immer zu\n"
	.string "etwas günstigeren Preisen.$"

GoldenrodDeptStore1_Text_Directory:
	.string "EG Info-Schalter\p"
	.string "1S Trainermarkt\p"
	.string "2S Kampfkollektion\p"
	.string "3S Arznei\p"
	.string "4S TM-Ecke\p"
	.string "5S Platz der ewigen Stille\p"
	.string "Dachterrassen Aussichtsplattform$"
