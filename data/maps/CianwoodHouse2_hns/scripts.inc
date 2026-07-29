CianwoodHouse2_hns_MapScripts::
	.byte 0

CianwoodHouse2_EventScript_Teacher::
	lock
	faceplayer
	msgbox CianwoodCity_Text_LugiaHouseTeacher, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodHouse2_EventScript_Lass::
	lock
	faceplayer
	msgbox CianwoodCity_Text_LugiaHouseLass, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodHouse2_EventScript_Twin::
	lock
	faceplayer
	msgbox CianwoodCity_Text_LugiaHouseTwin, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_LugiaHouseTeacher:
	.string "Bist du von Oliviana City hergekommen?\n"
	.string "Dann hast du bestimmt diese vier Inseln\l"
	.string "auf dem Weg gesehen, oder?\l"
	.string "Man erzählt sich, dass dort ein\l"
	.string "mythisches Wesen hausen soll!$"

CianwoodCity_Text_LugiaHouseLass:
	.string "Ich habe gehört, dass man es nur sehen\n"
	.string "kann, wenn man einen Silberflügel hat.\p"
	.string "Er muss bestimmt denselben Geruch wie\n"
	.string "diese Kreatur ausströmen.$"

CianwoodCity_Text_LugiaHouseTwin:
	.string "Es heißt schon lange, dass diese\n"
	.string "mythische Kreatur auch die Strudel\l"
	.string "um die Inseln macht.\p"
	.string "Man braucht wahrscheinlich eine\n"
	.string "Spezialattacke, um an denen\l"
	.string "vorbeizukommen.$"
