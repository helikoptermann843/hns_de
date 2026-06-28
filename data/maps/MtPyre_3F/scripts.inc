MtPyre_3F_MapScripts::
	.byte 0

MtPyre_3F_EventScript_William::
	trainerbattle_single TRAINER_WILLIAM, MtPyre_3F_Text_WilliamIntro, MtPyre_3F_Text_WilliamDefeat
	msgbox MtPyre_3F_Text_WilliamPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_EventScript_Kayla::
	trainerbattle_single TRAINER_KAYLA, MtPyre_3F_Text_KaylaIntro, MtPyre_3F_Text_KaylaDefeat
	msgbox MtPyre_3F_Text_KaylaPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_EventScript_Gabrielle::
	trainerbattle_single TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleIntro, MtPyre_3F_Text_GabrielleDefeat, MtPyre_3F_EventScript_RegisterGabrielle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MtPyre_3F_EventScript_RematchGabrielle
	msgbox MtPyre_3F_Text_GabriellePostBattle, MSGBOX_DEFAULT
	release
	end

MtPyre_3F_EventScript_RegisterGabrielle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtPyre_3F_Text_GabrielleRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_GABRIELLE_1
	release
	end

MtPyre_3F_EventScript_RematchGabrielle::
	trainerbattle_rematch TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleRematchIntro, MtPyre_3F_Text_GabrielleRematchDefeat
	msgbox MtPyre_3F_Text_GabriellePostRematch, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_Text_WilliamIntro:
	.string "Die unglaubliche Atmosphäre der Berge\n"
	.string "hat meine psychischen Kräfte gestärkt!\n"
	.string "\p"
	.string "Ein kleines Kind wie du…\n"
	.string "Du willst gewinnen? Träum weiter!$"

MtPyre_3F_Text_WilliamDefeat:
	.string "Ich vertiefe mich in Selbstmitleid.$"

MtPyre_3F_Text_WilliamPostBattle:
	.string "Meine psychischen Kräfte sind mit\n"
	.string "Sicherheit stärker geworden, aber…$"

MtPyre_3F_Text_KaylaIntro:
	.string "Ahahahahaha!!!!!\p"
	.string "Dies ist kein Platz für einen kleinen\n"
	.string "Hosenscheißer wie dich!$"

MtPyre_3F_Text_KaylaDefeat:
	.string "Oh, ich habe mir in die Hose gemacht.$"

MtPyre_3F_Text_KaylaPostBattle:
	.string "Mein Training reicht also nicht aus…\p"
	.string "Ich muss mein Training auf die Spitze\n"
	.string "treiben…\p"
	.string "Ich darf keine Zeit verlieren!$"

MtPyre_3F_Text_GabrielleIntro:
	.string "Warum bist du hier?$"

MtPyre_3F_Text_GabrielleDefeat:
	.string "Das war unglaublich!\n"
	.string "Du bist ein ganz besonderer TRAINER!$"

MtPyre_3F_Text_GabriellePostBattle:
	.string "POKéMON werden bald nichts Besonderes\n"
	.string "mehr sein.\p"
	.string "Die, die du bei dir hast und die, die\n"
	.string "dir in der Zukunft begegnen werden…\p"
	.string "Sie sollen alle gleich geliebt werden.\n"
	.string "Vergiss das nicht.$"

MtPyre_3F_Text_GabrielleRegister:
	.string "Ich würde mir gerne deine POKéMON\n"
	.string "anschauen, wenn sie stärker geworden\l"
	.string "sind…\p"
	.string "Bitte, zeig sie mir dann unbedingt!$"

MtPyre_3F_Text_GabrielleRematchIntro:
	.string "Oh, du bist es…\p"
	.string "Willst du mir zeigen, wie sehr deine\n"
	.string "POKéMON gewachsen und wie stark sie\l"
	.string "geworden sind?$"

MtPyre_3F_Text_GabrielleRematchDefeat:
	.string "Unglaublich!\n"
	.string "Du bist etwas ganz Besonderes.$"

MtPyre_3F_Text_GabriellePostRematch:
	.string "POKéMON werden bald nichts Besonderes\n"
	.string "mehr sein.\p"
	.string "Die, die du bei dir hast und die, die\n"
	.string "dir in der Zukunft begegnen werden…\p"
	.string "Sie sollen alle gleich geliebt werden.\n"
	.string "Du hast es also nicht vergessen.$"

