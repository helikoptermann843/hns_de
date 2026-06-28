MtPyre_6F_MapScripts::
	.byte 0

MtPyre_6F_EventScript_Valerie::
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MtPyre_6F_EventScript_RegisterValerie
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MtPyre_6F_EventScript_RematchValerie
	msgbox MtPyre_6F_Text_ValeriePostBattle, MSGBOX_DEFAULT
	release
	end

MtPyre_6F_EventScript_RegisterValerie::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_VALERIE_1
	release
	end

MtPyre_6F_EventScript_RematchValerie::
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
	end

MtPyre_6F_EventScript_Cedric::
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_6F_Text_ValerieIntro:
	.string "Wenn ich hier bin… dann durchströmt\n"
	.string "mich eine seltsame Macht…$"

MtPyre_6F_Text_ValerieDefeat:
	.string "Die Macht ebbt ab…$"

MtPyre_6F_Text_ValeriePostBattle:
	.string "Die Geister der hier ruhenden POKéMON,\n"
	.string "erfüllen mich mit ihrer Macht…$"

MtPyre_6F_Text_ValerieRegister:
	.string "Hähähä… Ich habe den Kampf verloren,\n"
	.string "aber… ich habe dieses Talent…\p"
	.string "Ohne, dass ich den POKéNAV berühren\n"
	.string "muss… Hiyah!$"

MtPyre_6F_Text_ValerieRematchIntro:
	.string "Hinter dir…\n"
	.string "W… Was ist das?$"

MtPyre_6F_Text_ValerieRematchDefeat:
	.string "Etwas war da und verschwand…$"

MtPyre_6F_Text_ValeriePostRematch:
	.string "Die POKéMON, die hier ruhen…\n"
	.string "Manchmal spielen sie…$"

MtPyre_6F_Text_CedricIntro:
	.string "Hast du die Orientierung verloren?\n"
	.string "Keine Angst, ich bin ja hier.$"

MtPyre_6F_Text_CedricDefeat:
	.string "Du hattest die Orientierung gar\n"
	.string "nicht verloren?$"

MtPyre_6F_Text_CedricPostBattle:
	.string "Mein Gefühl sagte mir, dass ein\n"
	.string "TRAINER,\n"
	.string "der sich verlaufen hat, panisch\l"
	.string "reagiert und leichter zu besiegen ist.\n"
	.string "\p"
	.string "Das war ein schmutziger Versuch…$"

