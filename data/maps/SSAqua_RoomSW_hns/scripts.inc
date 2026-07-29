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
	.string "Im Pokémon-Kampf vergesse ich meinen\n"
	.string "Schmerz! Lass uns kämpfen!$"

SSAqua_RoomSW_Text_BeautyCassieBeaten:
	.string "Mein Herz weint…$"

SSAqua_RoomSW_Text_BeautyCassieAfterBattle:
	.string "Es geht nichts über eine Schiffsreise,\n"
	.string "um ein gebrochenes Herz zu vergessen.\p"
	.string "Eine Reise mit dem Schnellboot ist für\n"
	.string "solchen Kummer zu kurz.$"

SSAqua_RoomSW_Text_GuitaristClydeSeen:
	.string "Ich werde meine Lieder beim\n"
	.string "Radiosender in Dukatia vorspielen.$"

SSAqua_RoomSW_Text_GuitaristClydeBeaten:
	.string "Autsch! Total verzerrt!$"

SSAqua_RoomSW_Text_GuitaristClydeAfterBattleMobile:
	.string "Ich wollte mein\n"
	.string "Debut im Duellturm geben…\p"
	.string "Ich sollte nach\n"
	.string "Orania City zurückgehen und härter\l"
	.string "trainieren…$"

SSAqua_RoomSW_Text_GuitaristClydeAfterBattle:
	.string "Apropos Radiostation: Wie\p"
	.string "lauten die\n"
	.string "Glückszahlen für diese Woche?$"
