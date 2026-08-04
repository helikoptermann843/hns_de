UlaulaIsle_hns_MapScripts::
	.byte 0

Alola_Ulaula_FindItem1::
	finditem ITEM_FRIEND_BALL, 1
	end


Alola_Ulaula_FindItem2::
	finditem ITEM_PROTEIN, 1
	end


Alola_Ulaula_MtLanikalaSign::
	lock
	msgbox Alola_Ulaula_MtLanikalaSign_Text_0
	release
	end


Alola_Ulaula_UlaulaSign::
	lock
	msgbox Alola_Ulaula_UlaulaSign_Text_0
	release
	end


Alola_Ulaula_TapuBulu_Flyover::
	goto_if_set FLAG_FLYOVER_TAPU_BULU, Alola_Ulaula_TapuBulu_Flyover_2
	release
	end

Alola_Ulaula_TapuBulu_Flyover_2:
	addobject Ulaula_Flyover_Tapu
	playse SE_M_FLY
	applymovement Ulaula_Flyover_Tapu, Alola_Ulaula_TapuBulu_Flyover_Movement_0
	waitmovement 0
	removeobject Ulaula_Flyover_Tapu
	clearflag FLAG_FLYOVER_TAPU_BULU
	clearflag FLAG_HIDE_TAPU_BULU
	release
	end


Alola_Ulaula_Phant_outside::
	lock
	faceplayer
	hidefollower
	msgbox Alola_Ulaula_Phant_outside_Text_0, MSGBOX_AUTOCLOSE
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 35
	goto_if_eq Alola_Ulaula_Phant_outside_3
Alola_Ulaula_Phant_outside_1:
	compare VAR_TEMP_0, 36
	goto_if_eq Alola_Ulaula_Phant_outside_8
Alola_Ulaula_Phant_outside_6:
	compare VAR_TEMP_0, 37
	goto_if_eq Alola_Ulaula_Phant_outside_13
Alola_Ulaula_Phant_outside_11:
	compare VAR_TEMP_0, 36
	goto_if_eq Alola_Ulaula_Phant_outside_18
Alola_Ulaula_Phant_outside_16:
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	msgbox Alola_Ulaula_Phant_outside_Text_1, MSGBOX_AUTOCLOSE
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 35
	goto_if_eq Alola_Ulaula_Phant_outside_23
Alola_Ulaula_Phant_outside_22:
	applymovement Phant_Outside, Alola_Ulaula_Phant_outside_Movement_6
	waitmovement 0
	playmoncry SPECIES_NOIVERN, 0
	applymovement Phant_Noivern_Outside, Alola_Ulaula_Phant_outside_Movement_5
	waitmovement 0
	removeobject Phant_Noivern_Outside
	removeobject Phant_Outside
	setflag FLAG_HIDE_PHANT_OUTSIDE
	clearflag FLAG_HIDE_PHANT_INSIDE
	release
	end

Alola_Ulaula_Phant_outside_2:
	applymovement Phant_Outside, Alola_Ulaula_Phant_outside_Movement_0
	goto Alola_Ulaula_Phant_outside_1

Alola_Ulaula_Phant_outside_3:
	compare VAR_TEMP_1, 46
	goto_if_eq Alola_Ulaula_Phant_outside_2
	goto Alola_Ulaula_Phant_outside_1

Alola_Ulaula_Phant_outside_7:
	applymovement Phant_Outside, Alola_Ulaula_Phant_outside_Movement_1
	goto Alola_Ulaula_Phant_outside_6

Alola_Ulaula_Phant_outside_8:
	compare VAR_TEMP_1, 47
	goto_if_eq Alola_Ulaula_Phant_outside_7
	goto Alola_Ulaula_Phant_outside_6

Alola_Ulaula_Phant_outside_12:
	applymovement Phant_Outside, Alola_Ulaula_Phant_outside_Movement_2
	goto Alola_Ulaula_Phant_outside_11

Alola_Ulaula_Phant_outside_13:
	compare VAR_TEMP_1, 46
	goto_if_eq Alola_Ulaula_Phant_outside_12
	goto Alola_Ulaula_Phant_outside_11

Alola_Ulaula_Phant_outside_17:
	applymovement Phant_Outside, Alola_Ulaula_Phant_outside_Movement_3
	goto Alola_Ulaula_Phant_outside_16

Alola_Ulaula_Phant_outside_18:
	compare VAR_TEMP_1, 45
	goto_if_eq Alola_Ulaula_Phant_outside_17
	goto Alola_Ulaula_Phant_outside_16

Alola_Ulaula_Phant_outside_21:
	applymovement Phant_Outside, Alola_Ulaula_Phant_outside_Movement_4
	waitmovement 0
	playmoncry SPECIES_NOIVERN, 0
	applymovement Phant_Noivern_Outside, Alola_Ulaula_Phant_outside_Movement_5
	waitmovement 0
	removeobject Phant_Noivern_Outside
	removeobject Phant_Outside
	setflag FLAG_HIDE_PHANT_OUTSIDE
	clearflag FLAG_HIDE_PHANT_INSIDE
	release
	end

Alola_Ulaula_Phant_outside_23:
	compare VAR_TEMP_1, 46
	goto_if_eq Alola_Ulaula_Phant_outside_21
	goto Alola_Ulaula_Phant_outside_22


Alola_Ulaula_TrainerBattlePicnicker::
	trainerbattle_single TRAINER_ULAULA_PICNICKER_HNS, Alola_Ulaula_TrainerBattlePicnicker_Text_0, Alola_Ulaula_TrainerBattlePicnicker_Text_1
	msgbox Alola_Ulaula_TrainerBattlePicnicker_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Alola_Ulaula_TrainerBattleYoungster::
	trainerbattle_single TRAINER_ULAULA_YOUNGSTER_HNS, Alola_Ulaula_TrainerBattleYoungster_Text_0, Alola_Ulaula_TrainerBattleYoungster_Text_1
	msgbox Alola_Ulaula_TrainerBattleYoungster_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Alola_Ulaula_TrainerBattleHiker::
	trainerbattle_single TRAINER_ULAULA_HIKER_HNS, Alola_Ulaula_TrainerBattleHiker_Text_0, Alola_Ulaula_TrainerBattleHiker_Text_1
	msgbox Alola_Ulaula_TrainerBattleHiker_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Alola_Ulaula_TrainerBattleCooltrainer::
	trainerbattle_single TRAINER_ULAULA_COOLTRAINER_HNS, Alola_Ulaula_TrainerBattleCooltrainer_Text_0, Alola_Ulaula_TrainerBattleCooltrainer_Text_1
	msgbox Alola_Ulaula_TrainerBattleCooltrainer_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Alola_Ulaula_LassNPC::
	lock
	faceplayer
	msgbox Alola_Ulaula_LassNPC_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Alola_Ulaula_Bench_Heal::
	lock
	faceplayer
	msgbox Alola_Ulaula_Bench_Heal_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Alola_Ulaula_Bench_Heal_2
Alola_Ulaula_Bench_Heal_1:
	release
	end

Alola_Ulaula_Bench_Heal_2:
	fadescreenswapbuffers FADE_TO_BLACK
	special HealPlayerParty
	closemessage
	playfanfare MUS_HEAL
	waitfanfare
	applymovement LOCALID_PLAYER, Alola_Ulaula_Bench_Heal_Movement_0
	waitmovement 0
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Alola_Ulaula_Bench_Heal_1


Alola_Ulaula_TapuBulu_Flyover_Movement_0:
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

Alola_Ulaula_Phant_outside_Movement_0:
	jump_in_place_left
	jump_in_place_left
	step_end

Alola_Ulaula_Phant_outside_Movement_1:
	jump_in_place_down
	jump_in_place_down
	step_end

Alola_Ulaula_Phant_outside_Movement_2:
	jump_in_place_right
	jump_in_place_right
	step_end

Alola_Ulaula_Phant_outside_Movement_3:
	jump_in_place_up
	jump_in_place_up
	step_end

Alola_Ulaula_Phant_outside_Movement_4:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

Alola_Ulaula_Phant_outside_Movement_5:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Alola_Ulaula_Phant_outside_Movement_6:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

Alola_Ulaula_Bench_Heal_Movement_0:
	face_down
	step_end

Alola_Ulaula_BattlePalossand_Text_0:
	.string "Shuck!$"

Alola_Ulaula_MtLanikalaSign_Text_0:
	.string "Dieser Berg wird von den Einheimi-\n"
	.string "schen liebevoll Lanikala genannt,\l"
	.string "da er der höchste Berg der Alola-\l"
	.string "Inseln ist.\p"
	.string "Sein wahrer Name ist längst in\n"
	.string "Vergessenheit geraten.$"

Alola_Ulaula_UlaulaSign_Text_0:
	.string "Ula'ula Isle$"

Alola_Ulaula_Phant_outside_Text_0:
	.string "Hallo, {PLAYER}!\p"
	.string "Ich bin der Entwickler, der diesen\n"
	.string "Teil des Spiels gebaut hat!\p"
	.string "Ich hoffe, dieser Vorgeschmack auf\n"
	.string "Alola hat dir gefallen.\p"
	.string "Ich arbeite an einem kompletten\n"
	.string "Demake der Region namens\l"
	.string "Ultra Eclipse.$"

Alola_Ulaula_Phant_outside_Text_1:
	.string "Besuch mich doch in meinem Haus\n"
	.string "ganz oben auf dieser Insel.\l"
	.string "Es wird sich für dich lohnen!$"

Alola_Ulaula_TrainerBattlePicnicker_Text_0:
	.string "Überraschung!\nIch war in den Bäumen!$"

Alola_Ulaula_TrainerBattlePicnicker_Text_1:
	.string "Zurück ins Versteck mit mir…$"

Alola_Ulaula_TrainerBattlePicnicker_Text_2:
	.string "Ich glaube, ich habe etwas Rotes am\n"
	.string "Himmel fliegen sehen.\p"
	.string "Ob das ein Pokémon war?$"

Alola_Ulaula_TrainerBattleYoungster_Text_0:
	.string "Hey, ich werde der Erste sein, der\nden Lanikala besteigt!$"

Alola_Ulaula_TrainerBattleYoungster_Text_1:
	.string "Dabei ist es nicht mal der echte\nLanikala…$"

Alola_Ulaula_TrainerBattleYoungster_Text_2:
	.string "Mein Papa hat mir nie den wahren\n"
	.string "Namen dieses Berges verraten.\p"
	.string "Wir haben ihn immer nur Lanikala\ngenannt.$"

Alola_Ulaula_TrainerBattleHiker_Text_0:
	.string "Du musst zäh sein, um dieses raue\nGelände zu meistern!$"

Alola_Ulaula_TrainerBattleHiker_Text_1:
	.string "Oof,\nI should've trained harder…$"

Alola_Ulaula_TrainerBattleHiker_Text_2:
	.string "Auf Ula-Ula wandert es sich am\nbesten!\p"
	.string "Die Einheimischen nennen diesen\n"
	.string "Berg Lanikala, denn er ist der\l"
	.string "höchste der Alola-Inseln!$"

Alola_Ulaula_TrainerBattleCooltrainer_Text_0:
	.string "Diese Höhle stinkt fürchterlich!\n"
	.string "Lass uns kämpfen, das lenkt mich\lab!$"

Alola_Ulaula_TrainerBattleCooltrainer_Text_1:
	.string "Should've brought some air freshener…$"

Alola_Ulaula_TrainerBattleCooltrainer_Text_2:
	.string "Halt dir besser die Nase zu, wenn\n"
	.string "du in diese Höhle willst.$"

Alola_Ulaula_LassNPC_Text_0:
	.string "Das Meer bei den Inseln ist wirklich\n"
	.string "atemberaubend.\p"
	.string "Ich könnte den ganzen Tag hier\n"
	.string "sitzen und den Wellen zusehen.$"

Alola_Ulaula_Bench_Heal_Text_0:
	.string "Möchtest du auf dieser Bank eine\n"
	.string "Pause einlegen?$"
