AbandonedShip_Rooms2_1F_MapScripts::
	.byte 0

AbandonedShip_Rooms2_1F_EventScript_Dan::
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanIntro, AbandonedShip_Rooms2_1F_Text_DanDefeat, AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterDan
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms2_1F_EventScript_DanRematch
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostBattle, MSGBOX_DEFAULT
	release
	end

AbandonedShip_Rooms2_1F_EventScript_RegisterDan::
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT  @ Kira speaks for both when registering KiraAndDan
	register_matchcall TRAINER_KIRA_AND_DAN_1
	release
	end

AbandonedShip_Rooms2_1F_EventScript_DanRematch::
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanRematchIntro, AbandonedShip_Rooms2_1F_Text_DanRematchDefeat, AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostRematch, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_Kira::
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraIntro, AbandonedShip_Rooms2_1F_Text_KiraDefeat, AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterKira
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms2_1F_EventScript_KiraRematch
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostBattle, MSGBOX_DEFAULT
	release
	end

AbandonedShip_Rooms2_1F_EventScript_RegisterKira::
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_KIRA_AND_DAN_1
	release
	end

AbandonedShip_Rooms2_1F_EventScript_KiraRematch::
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraRematchIntro, AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat, AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostRematch, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_Jani::
	trainerbattle_single TRAINER_JANI, AbandonedShip_Rooms2_1F_Text_JaniIntro, AbandonedShip_Rooms2_1F_Text_JaniDefeat
	msgbox AbandonedShip_Rooms2_1F_Text_JaniPostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_Garrison::
	trainerbattle_single TRAINER_GARRISON, AbandonedShip_Rooms2_1F_Text_GarrisonIntro, AbandonedShip_Rooms2_1F_Text_GarrisonDefeat
	msgbox AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_Text_DanIntro:
	.string "MAX: Wir haben nach Schätzen gesucht\n"
	.string "- und einen TRAINER gefunden!$"

AbandonedShip_Rooms2_1F_Text_DanDefeat:
	.string "MAX: Wir konnten nicht gewinnen,\n"
	.string "obwohl wir zusammengearbeitet haben…$"

AbandonedShip_Rooms2_1F_Text_DanPostBattle:
	.string "MAX: Wir konnten keine Schätze finden.\n"
	.string "Ob uns jemand zuvorgekommen ist?$"

AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons:
	.string "MAX: Du hast keine zwei POKéMON.\n"
	.string "So kannst du nicht gegen uns antreten.$"

AbandonedShip_Rooms2_1F_Text_KiraIntro:
	.string "JULE: Oh? Wir haben nach Schätzen\n"
	.string "gesucht und einen TRAINER gefunden.$"

AbandonedShip_Rooms2_1F_Text_KiraDefeat:
	.string "JULE: Oh, wow, bist du stark!$"

AbandonedShip_Rooms2_1F_Text_KiraPostBattle:
	.string "JULE: Ich frage mich, wo die Schätze\n"
	.string "versteckt sind…\p"
	.string "Ich weiß, was ich mir alles kaufen\n"
	.string "würde, wenn ich reich wäre…$"

AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons:
	.string "JULE: Hast du keine zwei POKéMON?\n"
	.string "Dann können wir jetzt nicht kämpfen.$"

AbandonedShip_Rooms2_1F_Text_KiraRegister:
	.string "JULE: Du machst mich echt wütend!\n"
	.string "Ich werde dich im POKéNAV eintragen.$"

AbandonedShip_Rooms2_1F_Text_DanRematchIntro:
	.string "MAX: Wir haben die ganze Zeit nur nach\n"
	.string "Schätzen gesucht.\p"
	.string "Aber unsere POKéMON sind auch stärker\n"
	.string "geworden. Dürfen wir dir das zeigen?$"

AbandonedShip_Rooms2_1F_Text_DanRematchDefeat:
	.string "MAX: Du bist stark wie immer.$"

AbandonedShip_Rooms2_1F_Text_DanPostRematch:
	.string "MAX: Wir haben keine Schätze gefunden,\n"
	.string "sondern gegen POKéMON verloren…\p"
	.string "Ich will nach Hause… Aber wenn ich das\n"
	.string "laut sage, wird sie sauer auf mich.$"

AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons:
	.string "MAX: Du hast keine zwei POKéMON.\n"
	.string "So können wir nicht kämpfen.$"

AbandonedShip_Rooms2_1F_Text_KiraRematchIntro:
	.string "JULE: Oh, da bist du ja wieder!\p"
	.string "Genau wie wir, hast du die Suche nach\n"
	.string "Schätzen auch nicht aufgegeben, was?\p"
	.string "Wie wäre es mit einem Kampf? Und der\n"
	.string "Verlierer gibt die Suche auf?$"

AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat:
	.string "JULE: Ach, wir haben wieder verloren…$"

AbandonedShip_Rooms2_1F_Text_KiraPostRematch:
	.string "JULE: Wir müssen unsere POKéMON mehr\n"
	.string "trainieren.\p"
	.string "Wir gehen nicht ohne Schatz nach\n"
	.string "Hause!$"

AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons:
	.string "JULE: Hast du keine zwei POKéMON?\n"
	.string "Dann müssen wir später kämpfen.$"

AbandonedShip_Rooms2_1F_Text_JaniIntro:
	.string "Ich kann nicht gut schwimmen.\n"
	.string "Aber im Kämpfen bin ich spitze!$"

AbandonedShip_Rooms2_1F_Text_JaniDefeat:
	.string "Hups. Das ging daneben.$"

AbandonedShip_Rooms2_1F_Text_JaniPostBattle:
	.string "Barfuß durch ein Schiff zu laufen, ist\n"
	.string "irgendwie eeekelig.$"

AbandonedShip_Rooms2_1F_Text_GarrisonIntro:
	.string "Stärke und Mitgefühl…\n"
	.string "Das wird bei TRAINERn sehr geschätzt!$"

AbandonedShip_Rooms2_1F_Text_GarrisonDefeat:
	.string "Irgendetwas an dir erstrahlt hell.$"

AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle:
	.string "In einer der Kabinen hier an Bord habe\n"
	.string "ich etwas Glitzerndes gesehen.$"
