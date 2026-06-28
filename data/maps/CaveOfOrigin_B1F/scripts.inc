CaveOfOrigin_B1F_MapScripts::
	.byte 0

CaveOfOrigin_B1F_EventScript_Wallace::
	lock
	faceplayer
	msgbox CaveOfOrigin_B1F_Text_WallaceStory, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 60
	playse SE_PIN
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_Delay48
	waitmovement 0
	delay 30
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_FacePlayer
	waitmovement 0
	message CaveOfOrigin_B1F_Text_WhereIsRayquaza
	waitmessage
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza

CaveOfOrigin_B1F_EventScript_WheresRayquaza::
	multichoice 0, 0, MULTI_WHERES_RAYQUAZA, FALSE
	switch VAR_RESULT
	case 0, CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin
	case 1, CaveOfOrigin_B1F_EventScript_AtMtPyre
	case 2, CaveOfOrigin_B1F_EventScript_AtSkyPillar
	case 3, CaveOfOrigin_B1F_EventScript_DontRemember
	goto CaveOfOrigin_B1F_EventScript_DontRemember
	end

CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin::
	message CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin
	waitmessage
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza

CaveOfOrigin_B1F_EventScript_AtMtPyre::
	message CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat
	waitmessage
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza

CaveOfOrigin_B1F_EventScript_DontRemember::
	message CaveOfOrigin_B1F_Text_CantYouRememberSomehow
	waitmessage
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza

CaveOfOrigin_B1F_EventScript_AtSkyPillar::
	msgbox CaveOfOrigin_B1F_Text_WellHeadToSkyPillar, MSGBOX_DEFAULT
	closemessage
	playse SE_EXIT
	fadescreenspeed FADE_TO_BLACK, 4
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
	removeobject LOCALID_CAVE_OF_ORIGIN_WALLACE
	clearflag FLAG_HIDE_SKY_PILLAR_WALLACE
	fadescreen FADE_FROM_BLACK
	release
	end

CaveOfOrigin_B1F_Text_WallaceStory:
	.string "Ah, du bist also {PLAYER}{KUN}?\n"
	.string "Ich habe schon von deinen Heldentaten\l"
	.string "gehört.\p"
	.string "Ich heiße WASSILI.\p"
	.string "Früher war ich ARENALEITER in\n"
	.string "XENEROVILLE, aber dann ist etwas\l"
	.string "passiert.\p"
	.string "Daher habe ich meinem Mentor JUAN\n"
	.string "die ARENA übergeben.\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "GROUDON und KYOGRE, die beiden\n"
	.string "POKéMON, die hier für Chaos sorgen,\l"
	.string "sind uralte POKéMON.\p"
	.string "Aber es gibt nicht nur zwei alte\n"
	.string "POKéMON.\p"
	.string "Es gibt noch ein drittes - irgendwo.\p"
	.string "Irgendwo gibt es das uralte POKéMON\n"
	.string "RAYQUAZA.\p"
	.string "Die Legende sagt, dass es RAYQUAZA\n"
	.string "war, das die beiden Gegner damals\l"
	.string "beruhigte.\p"
	.string "Aber ich weiß auch nicht, wo sich\n"
	.string "RAYQUAZA aufhält…$"

CaveOfOrigin_B1F_Text_WhereIsRayquaza:
	.string "WASSILI: Weißt du vielleicht, wo sich\n"
	.string "RAYQUAZA aufhält, {PLAYER}{KUN}?\p"
	.string "Wenn ja, dann sag es mir bitte.$"

CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin:
	.string "WASSILI: In der URZEITHÖHLE?\p"
	.string "Aber die ist doch hier!\n"
	.string "Das kann nicht sein!\p"
	.string "Bitte, denk gut darüber nach, wo\n"
	.string "RAYQUAZA sich befinden könnte.$"

CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat:
	.string "WASSILI: PYROBERG?\p"
	.string "Ich habe dort vor ein paar Tagen eine\n"
	.string "alte Dame getroffen und die hat nichts\l"
	.string "darüber erwähnt.\p"
	.string "Und ich bezweifle, dass sie etwas vor\n"
	.string "mir verheimlichen wollte…\p"
	.string "Fällt dir kein anderer Ort ein,\n"
	.string "{PLAYER}{KUN}?$"

CaveOfOrigin_B1F_Text_CantYouRememberSomehow:
	.string "WASSILI: Bitte? Du erinnerst dich\n"
	.string "nicht? Hmm… Dann haben wir ein\n"
	.string "Problem… \p"
	.string "Du erinnerst dich wirklich nicht?$"

CaveOfOrigin_B1F_Text_WellHeadToSkyPillar:
	.string "WASSILI: Der HIMMELTURM?\p"
	.string "Das ist es!\n"
	.string "Es kann nur der HIMMELTURM sein!\p"
	.string "Wir dürfen keine Zeit verlieren,\n"
	.string "{PLAYER}{KUN}! Wir müssen sofort zum\l"
	.string "HIMMELTURM!$"

