MeteorFalls_1F_2R_MapScripts::
	.byte 0

MeteorFalls_1F_2R_EventScript_Nicolas::
	trainerbattle_single TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasIntro, MeteorFalls_1F_2R_Text_NicolasDefeat, MeteorFalls_1F_2R_EventScript_RegisterNicolas
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchNicolas
	msgbox MeteorFalls_1F_2R_Text_NicolasPostBattle, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_2R_EventScript_RegisterNicolas::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MeteorFalls_1F_2R_Text_NicolasRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_NICOLAS_1
	release
	end

MeteorFalls_1F_2R_EventScript_RematchNicolas::
	trainerbattle_rematch TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasRematchIntro, MeteorFalls_1F_2R_Text_NicolasRematchDefeat
	msgbox MeteorFalls_1F_2R_Text_NicolasPostRematch, MSGBOX_AUTOCLOSE
	end

MeteorFalls_1F_2R_EventScript_John::
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnIntro, MeteorFalls_1F_2R_Text_JohnDefeat, MeteorFalls_1F_2R_Text_JohnNotEnoughMons, MeteorFalls_1F_2R_EventScript_RegisterJohn
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchJohn
	msgbox MeteorFalls_1F_2R_Text_JohnPostBattle, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_2R_EventScript_RegisterJohn::
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_JOHN_AND_JAY_1
	release
	end

MeteorFalls_1F_2R_EventScript_RematchJohn::
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnRematchIntro, MeteorFalls_1F_2R_Text_JohnRematchDefeat, MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons
	msgbox MeteorFalls_1F_2R_Text_JohnPostRematch, MSGBOX_AUTOCLOSE
	end

MeteorFalls_1F_2R_EventScript_Jay::
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayIntro, MeteorFalls_1F_2R_Text_JayDefeat, MeteorFalls_1F_2R_Text_JayNotEnoughMons, MeteorFalls_1F_2R_EventScript_RegisterJay
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchJay
	msgbox MeteorFalls_1F_2R_Text_JayPostBattle, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_2R_EventScript_RegisterJay::
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT  @ John speaks for both during register
	register_matchcall TRAINER_JOHN_AND_JAY_1
	release
	end

MeteorFalls_1F_2R_EventScript_RematchJay::
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayRematchIntro, MeteorFalls_1F_2R_Text_JayRematchDefeat, MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons
	msgbox MeteorFalls_1F_2R_Text_JayPostRematch, MSGBOX_AUTOCLOSE
	end

MeteorFalls_1F_2R_Text_NicolasIntro:
	.string "Dort trainieren wir DRACHEN-Besitzer…\n"
	.string "\p"
	.string "Auch der CHAMP kommt manchmal vorbei.\n"
	.string "Verstehst du nun, dass dies ein\l"
	.string "besonderer Ort ist?$"

MeteorFalls_1F_2R_Text_NicolasDefeat:
	.string "Argh!\n"
	.string "Ich hätte nicht gedacht, dass du so\l"
	.string "stark bist!$"

MeteorFalls_1F_2R_Text_NicolasPostBattle:
	.string "Der Weg vor mir ist lang und\n"
	.string "beschwerlich.\p"
	.string "Wann werden meine POKéMON und ich\n"
	.string "zu den Besten gehören?$"

MeteorFalls_1F_2R_Text_NicolasRegister:
	.string "Von dir möchte ich noch mehr erfahren.\n"
	.string "Ich trage dich in meinen POKéNAV ein.$"

MeteorFalls_1F_2R_Text_NicolasRematchIntro:
	.string "Seit wir uns das letzte Mal gesehen\n"
	.string "haben, haben wir hart trainiert ver-\l"
	.string "glichen mit unserem ersten Kampf.\p"
	.string "Hilf uns, herauszufinden, wie stark\n"
	.string "wir wirklich sind.$"

MeteorFalls_1F_2R_Text_NicolasRematchDefeat:
	.string "Argh! Wie kannst du nur so stark sein?$"

MeteorFalls_1F_2R_Text_NicolasPostRematch:
	.string "Du hast offenbar fleißig trainiert.\p"
	.string "Solange du stärker wirst, kann auch\n"
	.string "ich stärker werden.$"

MeteorFalls_1F_2R_Text_JohnIntro:
	.string "URS: Wir haben immer in trauter Zwei-\n"
	.string "samkeit mit unseren POKéMON gegen\l"
	.string "andere gekämpft. Wir werden siegen!$"

MeteorFalls_1F_2R_Text_JohnDefeat:
	.string "URS: O weh.\n"
	.string "Wir haben verloren, liebstes Weib.$"

MeteorFalls_1F_2R_Text_JohnPostBattle:
	.string "URS: Wir sind seit 50 Jahren glücklich\n"
	.string "verheiratet.\p"
	.string "Und denk mal, ich habe es noch nie ge-\n"
	.string "schafft, meine Frau zu besiegen.$"

MeteorFalls_1F_2R_Text_JohnNotEnoughMons:
	.string "URS: Nun, was für ein junger TRAINER!\n"
	.string "\p"
	.string "Möchtest du mit uns kämpfen? Wenn ja,\n"
	.string "dann musst du dir noch mehr POKéMON\l"
	.string "besorgen.$"

MeteorFalls_1F_2R_Text_JohnRegister:
	.string "URS: Junger TRAINER! Wenn du die\n"
	.string "Chance\n"
	.string "hast, wirst du wieder gegen uns\l"
	.string "antreten?$"

MeteorFalls_1F_2R_Text_JayIntro:
	.string "EVI: Wir sind seit 50 Jahren glücklich\n"
	.string "verheiratet.\p"
	.string "Das Band, das uns verbindet, kann\n"
	.string "niemand durchtrennen.$"

MeteorFalls_1F_2R_Text_JayDefeat:
	.string "EVI: O weh.\n"
	.string "Wir haben verloren, mein Lieber.$"

MeteorFalls_1F_2R_Text_JayPostBattle:
	.string "EVI: 50 Jahre verheiratet…\p"
	.string "Immer wenn wir uneinig sind, ent-\n"
	.string "scheiden wir es mit einem POKéMON-\l"
	.string "Kampf.$"

MeteorFalls_1F_2R_Text_JayNotEnoughMons:
	.string "EVI: Hmm… Bist du nicht ein bisschen\n"
	.string "zu klein für einen TRAINER?\p"
	.string "Möchtest du mit uns kämpfen? Dann\n"
	.string "musst du dir noch mehr POKéMON\l"
	.string "besorgen.$"

MeteorFalls_1F_2R_Text_JohnRematchIntro:
	.string "URS: Wir haben immer in trauter Zwei-\n"
	.string "samkeit mit unseren POKéMON gegen\l"
	.string "andere gekämpft. Wir werden siegen!$"

MeteorFalls_1F_2R_Text_JohnRematchDefeat:
	.string "URS: O weh.\n"
	.string "Wir haben verloren, liebstes Weib.$"

MeteorFalls_1F_2R_Text_JohnPostRematch:
	.string "URS: 50 Jahre verheiratet…\p"
	.string "Rückblickend kann man sagen: Meine\n"
	.string "Frau und ich haben Tag für Tag\l"
	.string "miteinander gekämpft…$"

MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons:
	.string "URS: Nun, was für ein junger TRAINER!\n"
	.string "\p"
	.string "Möchtest du mit uns kämpfen? Wenn ja,\n"
	.string "dann musst du dir noch mehr POKéMON\l"
	.string "besorgen.$"

MeteorFalls_1F_2R_Text_JayRematchIntro:
	.string "EVI: Wir sind seit 50 Jahren\n"
	.string "verheiratet.\p"
	.string "Wir haben uns immer gegenseitig unter-\n"
	.string "stützt. Das hat uns stark gemacht.$"

MeteorFalls_1F_2R_Text_JayRematchDefeat:
	.string "EVI: O weh.\n"
	.string "Wir haben verloren, mein Lieber.$"

MeteorFalls_1F_2R_Text_JayPostRematch:
	.string "EVI: 50 Jahre verheiratet…\n"
	.string "Vieles ist in dieser Zeit passiert.\p"
	.string "Ich hoffe, wir werden noch lange\n"
	.string "unsere\n"
	.string "Erinnerungen miteinander teilen\l"
	.string "können.$"

MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons:
	.string "EVI: Hmm… Bist du nicht ein bisschen\n"
	.string "zu klein für einen TRAINER?\p"
	.string "Möchtest du gegen uns kämpfen? Dann\n"
	.string "musst du dir noch mehr POKéMON\l"
	.string "besorgen.$"

