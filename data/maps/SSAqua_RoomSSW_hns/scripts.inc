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
	.string "Ich gehe nach KANTO, um\n"
	.string "als Feuerspucker aufzutreten!$"

SSAqua_RoomSSW_Text_FirebreatherLyleBeaten:
	.string "Fizzle… Die Flamme ist winzig…$"

SSAqua_RoomSSW_Text_FirebreatherLyleAfterBattle:
	.string "Ich denke, Feuer\n"
	.string "ist schwach auf hoher See.\p"
	.string "Das ist egal? Wirklich?$"

SSAqua_RoomSSW_Text_BugCatcherKenSeen:
	.string "Ich besuche meine Oma, um\n"
	.string "ein paar Käfer zu fangen!$"

SSAqua_RoomSSW_Text_BugCatcherKenBeaten:
	.string "Oh wow. Du bist stark!$"

SSAqua_RoomSSW_Text_BugCatcherKenAfterBattle:
	.string "Viele Pokémon kannst du in\n"
	.string "den Bäumen von JOHTO finden!$"
