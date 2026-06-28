RustboroCity_Flat2_2F_MapScripts::
	.byte 0

RustboroCity_Flat2_2F_EventScript_OldMan::
	msgbox RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays, MSGBOX_NPC
	end

RustboroCity_Flat2_2F_EventScript_NinjaBoy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_PREMIER_BALL_RUSTBORO, RustboroCity_Flat2_2F_EventScript_GavePremierBall
	msgbox RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt, MSGBOX_DEFAULT
	giveitem ITEM_PREMIER_BALL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_PREMIER_BALL_RUSTBORO
	release
	end

RustboroCity_Flat2_2F_EventScript_GavePremierBall::
	msgbox RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays:
	.string "Vor langer, langer Zeit war DEVON eine\n"
	.string "kleine, überschaubare Firma.$"

RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt:
	.string "Mein Papa arbeitet für die\n"
	.string "CORPORATION. \p"
	.string "Mein Papa hat dies gemacht! Ich kann\n"
	.string "damit aber nichts anfangen, daher\l"
	.string "schenke ich es dir.$"

RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo:
	.string "Mein Papa arbeitet für die\n"
	.string "CORPORATION. \p"
	.string "Wenn ich groß bin, werde ich auch für\n"
	.string "DEVON arbeiten.$"

