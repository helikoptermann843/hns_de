AquaHideout_B2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
	.byte 0

AquaHideout_B2F_OnTransition:
	call_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_PreventMattNoticing
	end

AquaHideout_B2F_EventScript_PreventMattNoticing::
	setvar VAR_TEMP_1, 1
	return

AquaHideout_B2F_EventScript_MattNoticePlayer::
	lockall
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
	playse SE_PIN
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x8008, Common_Movement_FacePlayer
	waitmovement 0
	setvar VAR_TEMP_1, 1
	releaseall
	end

AquaHideout_B2F_EventScript_Matt::
	trainerbattle_single TRAINER_MATT, AquaHideout_B2F_Text_MattIntro, AquaHideout_B2F_Text_MattDefeat, AquaHideout_B2F_EventScript_SubmarineEscape
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_B2F_EventScript_SubmarineEscape::
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
	setvar VAR_0x8009, LOCALID_AQUA_HIDEOUT_SUBMARINE
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 20
	applymovement VAR_0x8008, Common_Movement_FacePlayer
	waitmovement 0
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
	waitmovement 0
	removeobject VAR_0x8009
	delay 20
	applymovement VAR_0x8008, Common_Movement_FacePlayer
	waitmovement 0
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
	release
	end

AquaHideout_B2F_Movement_SumbarineDepartLeft:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

@ Unused
AquaHideout_B2F_Movement_SumbarineDepartRight:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

AquaHideout_B2F_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B2F_EventScript_Grunt4Defeated::
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_B2F_EventScript_Grunt6::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B2F_EventScript_Grunt8::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B2F_Text_MattIntro:
	.string "Hehehehe… Du hast es tatsächlich\n"
	.string "bis hierher geschafft?\p"
	.string "Da haben wir dich wohl etwas\n"
	.string "unterschätzt!\p"
	.string "Aber hier geht es für dich nicht\n"
	.string "weiter! \p"
	.string "Ich bin besser als die anderen RÜPEL,\n"
	.string "die dir bisher begegnet sind.\p"
	.string "Ich schinde keine Zeit heraus. Ich\n"
	.string "werde dich pulverisieren!$"

AquaHideout_B2F_Text_MattDefeat:
	.string "Hehehe…\n"
	.string "Dann habe ich eben auch verloren. Pöh.$"

AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
	.string "Hehehe!\p"
	.string "Während ich mit dir gespielt habe, hat\n"
	.string "sich unser BOSS vorbereitet!$"

AquaHideout_B2F_Text_MattPostBattle:
	.string "Hehehe!\p"
	.string "Unser BOSS ist schon unterwegs zu\n"
	.string "einer Unterwasserhöhle!\p"
	.string "Falls du ihn verfolgen willst, suche\n"
	.string "doch mal die Tiefsee in der Region um\l"
	.string "SEEGRASULB CITY ab.\p"
	.string "Aber ob du ihn dort auch finden wirst?\n"
	.string "Hehehehehehe…$"

AquaHideout_B2F_Text_Grunt4Intro:
	.string "Wahahahah, ich bin müde vom Warten!\n"
	.string "Du schuldest mir einen Kampf!$"

AquaHideout_B2F_Text_Grunt4Defeat:
	.string "Des Wartens müde…\n"
	.string "Gedöst und verloren…$"

AquaHideout_B2F_Text_Grunt4PostBattle:
	.string "BOSS… Reicht das aus?$"

AquaHideout_B2F_Text_Grunt6Intro:
	.string "Teleporter… Der ganze Stolz des\n"
	.string "VERSTECKs!\p"
	.string "Du weißt gar nicht mehr, wo du gerade\n"
	.string "bist, stimmt’s? Kicher…\p"
	.string "Den Gegner verwirren, ermüden und dann\n"
	.string "auf ihn mit Gebrüll! Das ist der Plan!$"

AquaHideout_B2F_Text_Grunt6Defeat:
	.string "Was stimmt nicht mit dir?\n"
	.string "Du bist ja überhaupt nicht müde!$"

AquaHideout_B2F_Text_Grunt6PostBattle:
	.string "Da fällt mir ein… Wo habe ich nur den\n"
	.string "MEISTERBALL hingelegt?\p"
	.string "Wenn ich den verloren habe, zieht mir\n"
	.string "der BOSS die Ohren lang…$"

AquaHideout_B2F_Text_Grunt8Intro:
	.string "Nachdem ich TEAM AQUA beigetreten war,\n"
	.string "musste ich erstmal lernen, wie diese\l"
	.string "Teleporter miteinander verbunden sind.$"

AquaHideout_B2F_Text_Grunt8Defeat:
	.string "Ich war viel zu sehr damit\n"
	.string "beschäftigt,\l"
	.string "über die Teleporter nachzudenken…$"

AquaHideout_B2F_Text_Grunt8PostBattle:
	.string "Ich muss lernen, wie ich effektiver\n"
	.string "kämpfen kann…$"
