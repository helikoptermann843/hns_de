Route111_Text_MakingRoomUseTMToMakeYourOwn:
	.string "Was das ist?\n"
	.string "Was ich hier mache?\p"
	.string "Ich überlege, ob ich mir hier mein\n"
	.string "eigenes Refugium mit Hilfe einer\l"
	.string "POKéMON-Attacke einrichte.\p"
	.string "Genau! Ich gebe dir diese TM. Richte\n"
	.string "dir damit auch dein eigenes Reich ein!$"

Route111_Text_ExplainSecretPower:
	.string "Suche dir einen Baum, der aussieht, als\n"
	.string "ob er einige Äste verlieren würde.\p"
	.string "Setze davor GEHEIMPOWER ein. Einige\n"
	.string "Äste werden sich öffnen und du\l"
	.string "kannst dann den Baum hinaufklettern.\p"
	.string "Du findest dort einen großen Raum, den\n"
	.string "du nach eigenem Geschmack einrichten\l"
	.string "kannst.\p"
	.string "Das ist dein eigener geheimer Raum…\n"
	.string "Eine GEHEIMBASIS!\p"
	.string "Du solltest dir auch eine einrichten.\p"
	.string "Du musst dir deine GEHEIMBASIS nicht\n"
	.string "unbedingt in einem Baum einrichten.\p"
	.string "Setze GEHEIMPOWER an steinigen\n"
	.string "Wänden ein, die Einkerbungen haben.\p"
	.string "Ich schaue mich jetzt nach weiteren\n"
	.string "Orten um. Tschüss!$"

Route111_Text_DontWantThis:
	.string "Oh, das willst du nicht haben? Wenn du\n"
	.string "deine Meinung änderst, sag Bescheid.$"

Route111_Text_DontHaveAnyRoom:
	.string "Oh, dafür hast du keinen Platz mehr.\p"
	.string "Ich verwahre es für dich. Hol es dir\n"
	.string "später ab, einverstanden?$"

Route111_EventScript_SecretPowerMan::
	lock
	faceplayer
	msgbox Route111_Text_MakingRoomUseTMToMakeYourOwn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_GiveSecretPower
	msgbox Route111_Text_DontWantThis, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_GiveSecretPower::
	giveitem ITEM_TM_SECRET_POWER
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_NoRoomForSecretPower
	msgbox Route111_Text_ExplainSecretPower, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_RECEIVED_SECRET_POWER
	clearflag FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN
	call_if_eq VAR_FACING, DIR_WEST, Route111_EventScript_SecretPowerManExit
	call_if_eq VAR_FACING, DIR_EAST, Route111_EventScript_SecretPowerManExit
	call_if_eq VAR_FACING, DIR_NORTH, Route111_EventScript_SecretPowerManExitNorth
	removeobject VAR_LAST_TALKED
	release
	end

Route111_EventScript_SecretPowerManExit::
	applymovement VAR_LAST_TALKED, Route111_Movement_SecretPowerManExit
	waitmovement 0
	return

Route111_EventScript_SecretPowerManExitNorth::
	applymovement VAR_LAST_TALKED, Route111_Movement_SecretPowerManExitNorth
	waitmovement 0
	return

Route111_EventScript_NoRoomForSecretPower::
	msgbox Route111_Text_DontHaveAnyRoom, MSGBOX_DEFAULT
	release
	end

Route111_Movement_SecretPowerManExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

Route111_Movement_SecretPowerManExitNorth:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end
