AbandonedShip_Corridors_1F_MapScripts::
	.byte 0

AbandonedShip_Corridors_1F_EventScript_Youngster::
	msgbox AbandonedShip_Corridors_1F_Text_IsntItFunHere, MSGBOX_NPC
	end

AbandonedShip_Corridors_1F_EventScript_Charlie::
	trainerbattle_single TRAINER_CHARLIE, AbandonedShip_Corridors_1F_Text_CharlieIntro, AbandonedShip_Corridors_1F_Text_CharlieDefeat
	msgbox AbandonedShip_Corridors_1F_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Corridors_1F_Text_CharlieIntro:
	.string "Was ist so lustig daran, dass ich\n"
	.string "meinen Schwimmreifen mit an Bord habe?$"

AbandonedShip_Corridors_1F_Text_CharlieDefeat:
	.string "Hui, du hast mir die Luft\n"
	.string "rausgelassen!$"

AbandonedShip_Corridors_1F_Text_CharliePostBattle:
	.string "Es ist gar nicht so einfach, POKéBÄLLe\n"
	.string "zu werfen, wenn man einen\n"
	.string "Schwimmreifen\l"
	.string "trägt!$"

AbandonedShip_Corridors_1F_Text_IsntItFunHere:
	.string "Hier ist es doch wirklich lustig,\n"
	.string "nicht wahr? Ich bin total aufgeregt.$"
