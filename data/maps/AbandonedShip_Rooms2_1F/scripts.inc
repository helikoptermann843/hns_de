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
	.string "Max: Wir haben nach Schätzen gesucht\n"
	.string "- und einen Trainer gefunden!$"

AbandonedShip_Rooms2_1F_Text_DanDefeat:
	.string "Max: Wir konnten nicht gewinnen,\n"
	.string "obwohl wir zusammengearbeitet haben…$"

AbandonedShip_Rooms2_1F_Text_DanPostBattle:
	.string "Max: Wir konnten keine Schätze finden.\n"
	.string "Ob uns jemand zuvorgekommen ist?$"

AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons:
	.string "Max: Du hast keine zwei Pokémon.\n"
	.string "So kannst du nicht gegen uns antreten.$"

AbandonedShip_Rooms2_1F_Text_KiraIntro:
	.string "Jule: Oh? Wir haben nach Schätzen\n"
	.string "gesucht und einen Trainer gefunden.$"

AbandonedShip_Rooms2_1F_Text_KiraDefeat:
	.string "Jule: Oh, wow, bist du stark!$"

AbandonedShip_Rooms2_1F_Text_KiraPostBattle:
	.string "Jule: Ich frage mich, wo die Schätze\n"
	.string "versteckt sind…\p"
	.string "Ich weiß, was ich mir alles kaufen\n"
	.string "würde, wenn ich reich wäre…$"

AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons:
	.string "Jule: Hast du keine zwei Pokémon?\n"
	.string "Dann können wir jetzt nicht kämpfen.$"

AbandonedShip_Rooms2_1F_Text_KiraRegister:
	.string "Jule: Du machst mich echt wütend!\n"
	.string "Ich werde dich im Pokénav eintragen.$"

AbandonedShip_Rooms2_1F_Text_DanRematchIntro:
	.string "Max: Wir haben die ganze Zeit nur nach\n"
	.string "Schätzen gesucht.\p"
	.string "Aber unsere Pokémon sind auch stärker\n"
	.string "geworden. Dürfen wir dir das zeigen?$"

AbandonedShip_Rooms2_1F_Text_DanRematchDefeat:
	.string "Max: Du bist stark wie immer.$"

AbandonedShip_Rooms2_1F_Text_DanPostRematch:
	.string "Max: Wir haben keine Schätze gefunden,\n"
	.string "sondern gegen Pokémon verloren…\p"
	.string "Ich will nach Hause… Aber wenn ich das\n"
	.string "laut sage, wird sie sauer auf mich.$"

AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons:
	.string "Max: Du hast keine zwei Pokémon.\n"
	.string "So können wir nicht kämpfen.$"

AbandonedShip_Rooms2_1F_Text_KiraRematchIntro:
	.string "Jule: Oh, da bist du ja wieder!\p"
	.string "Genau wie wir, hast du die Suche nach\n"
	.string "Schätzen auch nicht aufgegeben, was?\p"
	.string "Wie wäre es mit einem Kampf? Und der\n"
	.string "Verlierer gibt die Suche auf?$"

AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat:
	.string "Jule: Ach, wir haben wieder verloren…$"

AbandonedShip_Rooms2_1F_Text_KiraPostRematch:
	.string "Jule: Wir müssen unsere Pokémon mehr\n"
	.string "trainieren.\p"
	.string "Wir gehen nicht ohne Schatz nach\n"
	.string "Hause!$"

AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons:
	.string "Jule: Hast du keine zwei Pokémon?\n"
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
	.string "Das wird bei Trainern sehr geschätzt!$"

AbandonedShip_Rooms2_1F_Text_GarrisonDefeat:
	.string "Irgendetwas an dir erstrahlt hell.$"

AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle:
	.string "In einer der Kabinen hier an Bord habe\n"
	.string "ich etwas Glitzerndes gesehen.$"
