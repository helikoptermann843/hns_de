SootopolisCity_House6_MapScripts::
	.byte 0

SootopolisCity_House6_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_WAILMER_DOLL, SootopolisCity_House6_EventScript_ReceivedWailmerDoll
	msgbox SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll, MSGBOX_YESNO
	call_if_eq VAR_RESULT, NO, SootopolisCity_House6_EventScript_DeclineWailmerDoll
	msgbox SootopolisCity_House6_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
	givedecoration DECOR_WAILMER_DOLL
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_House6_EventScript_NoRoomForWailmerDoll
	setflag FLAG_RECEIVED_WAILMER_DOLL
	release
	end

SootopolisCity_House6_EventScript_DeclineWailmerDoll::
	msgbox SootopolisCity_House6_Text_DontWantThisDoll, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House6_EventScript_ReceivedWailmerDoll::
	msgbox SootopolisCity_House6_Text_LovePlushDolls, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House6_EventScript_NoRoomForWailmerDoll::
	bufferdecorationname STR_VAR_2, DECOR_WAILMER_DOLL
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
	msgbox SootopolisCity_House6_Text_IllHoldItForYou, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll:
	.string "Hallo! Du bist nach langer Zeit der\n"
	.string "erste Gast, den ich begrüße.\p"
	.string "Du hast mir den Tag gerettet, daher\n"
	.string "möchte ich dir diese WAILMER-PUPPE\l"
	.string "schenken.$"

SootopolisCity_House6_Text_TakeGoodCareOfIt:
	.string "Pass gut auf sie auf!$"

SootopolisCity_House6_Text_IllHoldItForYou:
	.string "Oh, du möchtest sie zwar haben, aber\n"
	.string "nicht sofort? Dann hebe ich sie dir\l"
	.string "auf.$"

SootopolisCity_House6_Text_DontWantThisDoll:
	.string "Bist du sicher?\n"
	.string "Du möchtest diese PUPPE wirklich\l"
	.string "nicht?$"

SootopolisCity_House6_Text_LovePlushDolls:
	.string "Ich liiiiebe Plüsch-PUPPEn!$"

