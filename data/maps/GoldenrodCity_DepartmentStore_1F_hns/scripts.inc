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
	.string "KAUFHAUS von DUKATIA CITY.$"

GoldenrodDeptStore1_Text_Gentleman:
	.string "Das KAUFHAUS\n"
	.string "bietet eine große Auswahl.\p"
	.string "Aber einige Items erhält man nur als\n"
	.string "Preis in der SPIELHALLE.$"

GoldenrodDeptStore1_Text_PokefanF:
	.string "Ich freue mich heute\n"
	.string "schon wieder aufs Einkaufen!$"

GoldenrodDeptStore1_Text_BugCatcher:
	.string "Mama ist sehr gut\n"
	.string "im Schnäppchenfinden.\p"
	.string "Sie kauft ständig Waren\n"
	.string "unter dem Normalpreis.$"

GoldenrodDeptStore1_Text_Directory:
	.string "EG INFO-SCHALTER\p"
	.string "1S TRAINERMARKT\p"
	.string "2S KAMPFKOLLEKTION\p"
	.string "3S ARZNEI\p"
	.string "4S TM-ECKE\p"
	.string "5S PLATZ DER EWIGEN STILLE\p"
	.string "DACHTERRASSEN AUSSICHTSPLATTFORM$"
