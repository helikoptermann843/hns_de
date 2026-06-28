SSAqua_RoomSW_hns_MapScripts::
	.byte 0

SSAqua_RoomSW_EventScript_Cassie::
	trainerbattle_single TRAINER_CASSIE_HNS, SSAqua_RoomSW_Text_BeautyCassieSeen, SSAqua_RoomSW_Text_BeautyCassieBeaten
	msgbox SSAqua_RoomSW_Text_BeautyCassieAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSW_EventScript_Clyde::
	trainerbattle_single TRAINER_CLYDE_HNS, SSAqua_RoomSW_Text_GuitaristClydeSeen, SSAqua_RoomSW_Text_GuitaristClydeBeaten
	msgbox SSAqua_RoomSW_Text_GuitaristClydeAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSW_Text_BeautyCassieSeen:
	.string "Ich versuche, mein Leid zu\n"
	.string "vergessen. Lass uns kämpfen!$"

SSAqua_RoomSW_Text_BeautyCassieBeaten:
	.string "Mein Herz weint…$"

SSAqua_RoomSW_Text_BeautyCassieAfterBattle:
	.string "Eine Reise hilft über Herzschmerz,\p"
	.string "doch eine SCHNELLSCHIFF-Fahrt ist\n"
	.string "zu kurz, um zu trauern.$"

SSAqua_RoomSW_Text_GuitaristClydeSeen:
	.string "Ich werde meine Lieder beim\n"
	.string "RADIOSENDER in DUKATIA vorspielen.$"

SSAqua_RoomSW_Text_GuitaristClydeBeaten:
	.string "Wow! Total verzerrt!$"

SSAqua_RoomSW_Text_GuitaristClydeAfterBattleMobile:
	.string "Ich wollte mein\n"
	.string "Debut im DUELLTURM geben…\p"
	.string "Ich sollte nach\n"
	.string "ORANIA CITY zurückgehen und härter\l"
	.string "trainieren…$"

SSAqua_RoomSW_Text_GuitaristClydeAfterBattle:
	.string "Apropos RADIOSTATION: Wie\p"
	.string "lauten die\n"
	.string "Glückszahlen für diese Woche?$"
