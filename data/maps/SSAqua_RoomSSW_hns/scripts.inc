SSAqua_RoomSSW_hns_MapScripts::
	.byte 0

SSAqua_RoomSSW_EventScript_Lyle::
	trainerbattle_single TRAINER_LYLE_HNS, SSAqua_RoomSSW_Text_FirebreatherLyleSeen, SSAqua_RoomSSW_Text_FirebreatherLyleBeaten
	msgbox SSAqua_RoomSSW_Text_FirebreatherLyleAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSSW_EventScript_Ken::
	trainerbattle_single TRAINER_KEN_HNS, SSAqua_RoomSSW_Text_BugCatcherKenSeen, SSAqua_RoomSSW_Text_BugCatcherKenBeaten
	msgbox SSAqua_RoomSSW_Text_BugCatcherKenAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSSW_Text_FirebreatherLyleSeen:
	.string "Ich gehe nach Kanto, um meine\n"
	.string "Feuerspuck-Künste vorzuführen!$"

SSAqua_RoomSSW_Text_FirebreatherLyleBeaten:
	.string "Zisch… Die Flamme ist so klein…$"

SSAqua_RoomSSW_Text_FirebreatherLyleAfterBattle:
	.string "Ich vermute mal, Feuer ist schwach auf\n"
	.string "hoher See.\p"
	.string "Was, das ist egal? Ach wirklich?$"

SSAqua_RoomSSW_Text_BugCatcherKenSeen:
	.string "Ich besuche meine Oma, um mir ein paar\n"
	.string "Käfer-Pokémon zu fangen!$"

SSAqua_RoomSSW_Text_BugCatcherKenBeaten:
	.string "Boah! Du bist aber stark!$"

SSAqua_RoomSSW_Text_BugCatcherKenAfterBattle:
	.string "Viele Pokémon kannst du in\n"
	.string "den Bäumen von Johto finden!$"
