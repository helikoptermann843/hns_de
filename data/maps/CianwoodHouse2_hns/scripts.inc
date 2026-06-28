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
	.string "Du kommst aus Oliviana-City?\p"
	.string "Erinnerst du dich an die vier\n"
	.string "Inseln auf dem Weg?\p"
	.string "Ich hörte, dass ein mythisches\n"
	.string "Meereswesen dort versteckt ist.$"

CianwoodCity_Text_LugiaHouseLass:
	.string "Ich hörte, dass man es nur sehen\n"
	.string "kann, wenn man einen SILBERFLÜGEL hat.\n"
	.string "\p"
	.string "Es muss denselben Duft wie das\n"
	.string "Wesen haben.$"

CianwoodCity_Text_LugiaHouseTwin:
	.string "Ich hörte, dass die Strudel um\n"
	.string "die Inseln vom Meereswesen verursacht\n"
	.string "werden.\p"
	.string "Du brauchst vielleicht eine spezielle\n"
	.string "Attacke, um sie zu passieren.$"
