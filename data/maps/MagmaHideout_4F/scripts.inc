MagmaHideout_4F_MapScripts::
	.byte 0

MagmaHideout_4F_EventScript_Maxie::
	lockall
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
	closemessage
	delay 20
	setvar VAR_RESULT, 1
	playse SE_M_DETECT
	dofieldeffectsparkle 18, 42, 0
	waitfieldeffect FLDEFF_SPARKLE
	setvar VAR_RESULT, 1
	playfanfare MUS_AWAKEN_LEGEND
	playse SE_ORB
	special DoOrbEffect
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 150
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON_SLEEPING
	addobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON
	waitstate
	delay 60
	applymovement LOCALID_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
	waitmovement 0
	special FadeOutOrbEffect
	waitstate
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	applymovement LOCALID_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_Movement_GroudonExit
	waitmovement 0
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON
	delay 4
	setvar VAR_0x8004, 2  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	delay 30
	applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, MagmaHideout_4F_Movement_MaxieLookAround
	waitmovement 0
	msgbox MagmaHideout_4F_Text_MaxieGroudonWhatsWrong, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 30
	applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MagmaHideout_4F_Text_MaxieOhItWasYou, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
	clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
	setvar VAR_SLATEPORT_CITY_STATE, 1
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
	setvar VAR_SLATEPORT_HARBOR_STATE, 1
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_MAGMA_HIDEOUT_4F_MAXIE
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_1
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_2
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_3
	removeobject LOCALID_MAGMA_HIDEOUT_4F_TABITHA
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
	fadescreen FADE_FROM_BLACK
	releaseall
	end

MagmaHideout_4F_Movement_GroudonApproach:
	delay_16
	delay_16
	walk_slow_down
	delay_16
	delay_16
	delay_16
	walk_slow_down
	delay_16
	delay_16
	delay_16
	step_end

MagmaHideout_4F_Movement_GroudonExit:
	slide_up
	slide_up
	step_end

MagmaHideout_4F_Movement_MaxieLookAround:
	face_left
	delay_16
	face_right
	delay_16
	face_left
	delay_16
	face_right
	delay_16
	face_up
	delay_16
	delay_16
	step_end

MagmaHideout_4F_EventScript_Grunt11::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Grunt12::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Grunt13::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Intro, MagmaHideout_4F_Text_Grunt13Defeat
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Tabitha::
	trainerbattle_single TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaIntro, MagmaHideout_4F_Text_TabithaDefeat
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_Text_Grunt11Intro:
	.string "Ich würde so gerne einen Blick auf\n"
	.string "GROUDON werfen, aber ich darf nicht\n"
	.string "mal\l"
	.string "einen Blick auf seinen Schweif werfen.\n"
	.string "\p"
	.string "Das frustriert mich total.\p"
	.string "Oh, nein!\n"
	.string "Ich klatsche hier über GROUDON!$"

MagmaHideout_4F_Text_Grunt11Defeat:
	.string "Wenn der Verstand durch andere Dinge\n"
	.string "abgelenkt ist, ist es unmöglich,\l"
	.string "zu gewinnen…$"

MagmaHideout_4F_Text_Grunt11PostBattle:
	.string "Ich frage mich, ob GROUDON überhaupt\n"
	.string "einen Schweif hat?$"

MagmaHideout_4F_Text_Grunt12Intro:
	.string "Muahahaha! Bald! Sehr bald!\l"
	.string "Werden wir unser großes Ziel\n"
	.string "erreichen!$"

MagmaHideout_4F_Text_Grunt12Defeat:
	.string "Grr…\n"
	.string "Ich bin so weit gekommen und nun das?$"

MagmaHideout_4F_Text_Grunt12PostBattle:
	.string "MARC, Sir!\n"
	.string "Ein Eindringling ist auf dem Weg!$"

MagmaHideout_4F_Text_Grunt13Intro:
	.string "Du bist noch nicht fertig!\n"
	.string "An mir kommst du nicht so leicht\l"
	.string "vorbei!$"

MagmaHideout_4F_Text_Grunt13Defeat:
	.string "War ich so leicht zu besiegen?$"

MagmaHideout_4F_Text_Grunt13PostBattle:
	.string "Ko-Komm schon, noch ein Kampf…$"

MagmaHideout_4F_Text_TabithaIntro:
	.string "Hähähä!\n"
	.string "Du hast es bis hierher geschafft,\n"
	.string "daher\l"
	.string "verrate ich dir etwas!\p"
	.string "Es stimmt!\n"
	.string "Dort drüben schläft GROUDON!\p"
	.string "MARC ist vor ein paar Sekunden zu ihm\n"
	.string "gegangen!\p"
	.string "Es wird bald erwachen!\n"
	.string "Hähä! Hähähähä!$"

MagmaHideout_4F_Text_TabithaDefeat:
	.string "Schon wieder verloren…\n"
	.string "Hähä…$"

MagmaHideout_4F_Text_TabithaPostBattle:
	.string "Und während du deine Zeit mit mir\n"
	.string "verschwendest… sollte MARC\l"
	.string "GROUDON aufgeweckt haben…$"

MagmaHideout_4F_Text_MaxieAwakenGroudon:
	.string "MARC: GROUDON…\p"
	.string "Nichts kann deinen Schlummer in\n"
	.string "dem heißen Magma stören…\p"
	.string "Du wolltest diese BLAUE KUGEL haben,\n"
	.string "nicht wahr?\p"
	.string "Ich habe sie dir gebracht.\n"
	.string "Ihr Licht soll dich aufwecken!\p"
	.string "Und nun zeig mir…\n"
	.string "Zeig mir deine ganze Kraft!$"

MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
	.string "MARC: GROUDON!\n"
	.string "Was ist los?\p"
	.string "Die BLAUE KUGEL ist doch der\n"
	.string "Schlüssel, oder etwa nicht?\p"
	.string "GROUDON! Wo bist du hin…$"

MagmaHideout_4F_Text_MaxieOhItWasYou:
	.string "MARC: Du warst das also!\p"
	.string "Ich habe gesehen, wie du unerlaubter-\n"
	.string "weise deine Nase hier und dort\l"
	.string "hineingesteckt hast.\p"
	.string "Ich verstehe es jetzt!\n"
	.string "Du hast eine ganz billige Nummer\l"
	.string "abgezogen!$"

MagmaHideout_4F_Text_MaxieDefeat:
	.string "Wie kommt es, dass du so gut mit\n"
	.string "POKéMON umgehen kannst?$"

MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
	.string "MARC: Es muss einen Grund geben, warum\n"
	.string "GROUDON geflohen ist…\p"
	.string "Das willst du mir doch sagen, oder?\p"
	.string "… … … … …\n"
	.string "…\l"
	.string "… … … … …\l"
	.string "…\p"
	.string "Hmpf…\n"
	.string "Du meinst, das wüsste ich nicht?\p"
	.string "Da GROUDON weg ist, hat dieser Vulkan\n"
	.string "keinen Nutzen mehr.\p"
	.string "Ich werde GROUDON folgen. Hier trennen\n"
	.string "sich unsere Wege.$"
