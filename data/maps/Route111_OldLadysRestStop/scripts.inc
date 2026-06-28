Route111_OldLadysRestStop_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OldLadysRestStop_OnTransition
	.byte 0

Route111_OldLadysRestStop_OnTransition:
	setflag FLAG_LANDMARK_OLD_LADY_REST_SHOP
	end

Route111_OldLadysRestStop_EventScript_OldLady::
	lock
	faceplayer
	msgbox Route111_OldLadysRestStop_Text_RestUpHere, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route111_OldLadysRestStop_EventScript_Rest
	goto_if_eq VAR_RESULT, NO, Route111_OldLadysRestStop_EventScript_DeclineRest
	end

Route111_OldLadysRestStop_EventScript_Rest::
	msgbox Route111_OldLadysRestStop_Text_TakeYourTimeRestUp, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route111_OldLadysRestStop_EventScript_Rest
	goto_if_eq VAR_RESULT, NO, Route111_OldLadysRestStop_EventScript_DeclineRest
	end

Route111_OldLadysRestStop_EventScript_DeclineRest::
	msgbox Route111_OldLadysRestStop_Text_DontNeedToBeShy, MSGBOX_DEFAULT
	release
	end

Route111_OldLadysRestStop_Text_RestUpHere:
	.string "Oh, du meine Güte.\n"
	.string "Sind deine POKéMON nicht erschöpft?\p"
	.string "Wenn du magst, ruhe dich doch hier\n"
	.string "aus.\l"
	.string "Das ist doch eine gute Idee, oder?$"

Route111_OldLadysRestStop_Text_TakeYourTimeRestUp:
	.string "Genau.\n"
	.string "Nimm dir Zeit und ruhe dich aus.$"

Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest:
	.string "Oh, du meine Güte.\n"
	.string "Sind deine POKéMON immer noch müde?\p"
	.string "Dann solltest du dich noch länger hier\n"
	.string "ausruhen. Was meinst du?$"

Route111_OldLadysRestStop_Text_DontNeedToBeShy:
	.string "Ach so. Na, das macht doch nichts!\n"
	.string "Besuche mich bald wieder.$"

