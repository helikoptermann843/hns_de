MeteorFalls_StevensCave_MapScripts::
	.byte 0

MeteorFalls_StevensCave_EventScript_Steven::
	lock
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_Defeated
	waitse
	playse SE_PIN
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_StevenDefeat
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
	release
	end

MeteorFalls_StevensCave_EventScript_Defeated::
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	release
	end

MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst:
	.string "TROY: Oh, wow, {PLAYER}{KUN}!\n"
	.string "Ich bin erstaunt, dass du mich\l"
	.string "gefunden hast!\p"
	.string "Du, äh… denkst bestimmt, ich bin nur\n"
	.string "verrückt nach Steinen, nicht wahr?\p"
	.string "Nein, das tust du bestimmt nicht.\p"
	.string "Wir haben ja schon als Team im\n"
	.string "MOOSBACH CITY RAUMFAHRTZENTRUM\l"
	.string "gekämpft.\p"
	.string "Da hast du bestimmt einen Eindruck\n"
	.string "davon gewonnen, wie gut ich bin.\p"
	.string "Okay, {PLAYER}{KUN}, wenn du dich auf\n"
	.string "eine\n"
	.string "ernsthafte Herausforderung einlässt,\l"
	.string "sei auf das Schlimmste gefasst!$"

MeteorFalls_StevensCave_Text_StevenDefeat:
	.string "Du…\n"
	.string "Ich hätte nie gedacht, dass du so\n"
	.string "stark\l"
	.string "werden würdest…$"

MeteorFalls_StevensCave_Text_MyPredictionCameTrue:
	.string "TROY: Aber, wenn ich es recht bedenke…\n"
	.string "Damals, als wir uns zum ersten Mal in\n"
	.string "der \p"
	.string "GRANITHÖHLE von FAUSTAUHAVEN\n"
	.string "begegneten, hatte ich schon dieses\l"
	.string "Gefühl.\p"
	.string "Ich wusste, du würdest irgendwann der\n"
	.string "CHAMP werden.\p"
	.string "Und mein Gefühl trügt mich nie!\p"
	.string "Wohin wird dein Weg dich jetzt führen?\n"
	.string "\p"
	.string "… … … … …\n"
	.string "…\l"
	.string "… … … … …\l"
	.string "…\p"
	.string "Hähähähä, das kann selbst ich dir\n"
	.string "nicht sagen.$"

