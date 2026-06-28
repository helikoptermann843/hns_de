MagmaHideout_2F_2R_MapScripts::
	.byte 0

MagmaHideout_2F_2R_EventScript_Grunt15::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_15, MagmaHideout_2F_2R_Text_Grunt15Intro, MagmaHideout_2F_2R_Text_Grunt15Defeat
	msgbox MagmaHideout_2F_2R_Text_Grunt15PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_2R_EventScript_Grunt6::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_6, MagmaHideout_2F_2R_Text_Grunt6Intro, MagmaHideout_2F_2R_Text_Grunt6Defeat
	msgbox MagmaHideout_2F_2R_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_2R_EventScript_Grunt7::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_7, MagmaHideout_2F_2R_Text_Grunt7Intro, MagmaHideout_2F_2R_Text_Grunt7Defeat
	msgbox MagmaHideout_2F_2R_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_2R_EventScript_Grunt8::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_8, MagmaHideout_2F_2R_Text_Grunt8Intro, MagmaHideout_2F_2R_Text_Grunt8Defeat
	msgbox MagmaHideout_2F_2R_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_2R_Text_Grunt15Intro:
	.string "Ich habe nichts gegen dich!\n"
	.string "Aber ich habe meine Befehle.$"

MagmaHideout_2F_2R_Text_Grunt15Defeat:
	.string "Ich mag vielleicht verloren haben,\n"
	.string "aber…$"

MagmaHideout_2F_2R_Text_Grunt15PostBattle:
	.string "Wir haben etwas Unglaubliches\n"
	.string "ausgegraben! Und… wir haben die BLAUE\l"
	.string "KUGEL!\p"
	.string "Nun muss unser Boss nur noch…\n"
	.string "Hahaha… Muahahahahahaha!$"

MagmaHideout_2F_2R_Text_Grunt6Intro:
	.string "Ich hasse Hitze! Ich hätte mich lieber\n"
	.string "TEAM AQUA anschließen sollen…$"

MagmaHideout_2F_2R_Text_Grunt6Defeat:
	.string "Ich bin tatsächlich nicht geschaffen\n"
	.string "für TEAM MAGMA…$"

MagmaHideout_2F_2R_Text_Grunt6PostBattle:
	.string "Bekommst du an einem Ort wie diesem\n"
	.string "nicht Sehnsucht nach dem Meer?$"

MagmaHideout_2F_2R_Text_Grunt7Intro:
	.string "Ab und zu bemerkt man hier\n"
	.string "Erschütterungen.\p"
	.string "Ob der Vulkan daran schuld ist?\n"
	.string "Oder ist es GROU…\p"
	.string "Huuups! Ach, egal! Dummdidumm…$"

MagmaHideout_2F_2R_Text_Grunt7Defeat:
	.string "Du bist ein hitziger Kämpfer.\n"
	.string "Wie ein Vulkan.$"

MagmaHideout_2F_2R_Text_Grunt7PostBattle:
	.string "Dieses Mal hast du es tatsächlich\n"
	.string "geschafft, zu gewinnen. Aber das macht\l"
	.string "überhaupt nichts.\p"
	.string "TEAM MAGMA ist bald am Ziel.$"

MagmaHideout_2F_2R_Text_Grunt8Intro:
	.string "Eines unserer Mitglieder ist aus-\n"
	.string "gerastet. Es hat sein MAGMAEMBLEM\l"
	.string "verloren!\p"
	.string "Warte mal! Du hast das doch nicht\n"
	.string "etwa gefunden?!?$"

MagmaHideout_2F_2R_Text_Grunt8Defeat:
	.string "Das kann ich einfach nicht glauben…$"

MagmaHideout_2F_2R_Text_Grunt8PostBattle:
	.string "Ich habe das Gefühl, dass unser Plan\n"
	.string "scheitern wird…$"

