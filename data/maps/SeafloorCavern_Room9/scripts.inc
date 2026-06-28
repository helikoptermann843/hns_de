SeafloorCavern_Room9_MapScripts::
	.byte 0

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
	lockall
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement LOCALID_PLAYER, SeafloorCavern_Room9_Movement_Delay32
	waitmovement 0
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
	closemessage
	addobject VAR_0x8004
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
	applymovement VAR_0x8004, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieYouMustDisappear, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_Room9_Text_ArchieDefeat
	msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
	setweather WEATHER_NONE
	doweather
	special Script_FadeOutMapMusic
	waitstate
	msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
	special WaitWeather
	waitstate
	setvar VAR_RESULT, 1
	playse SE_M_DETECT
	dofieldeffectsparkle 16, 42, 0
	waitfieldeffect FLDEFF_SPARKLE
	closemessage
	setvar VAR_RESULT, 0
	playfanfare MUS_AWAKEN_LEGEND
	playse SE_ORB
	special DoOrbEffect
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 150
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE_SLEEPING
	addobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
	waitstate
	delay 60
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
	waitmovement 0
	special FadeOutOrbEffect
	waitstate
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
	waitmovement 0
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
	delay 4
	setvar VAR_0x8004, 2  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	delay 30
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
	playse SE_PC_LOGIN
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieListenMessage
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
	closemessage
	playse SE_PC_OFF
	delay 20
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
	closemessage
	addobject VAR_0x8005
	addobject VAR_0x8006
	addobject VAR_0x8007
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
	waitmovement 0
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
	playse SE_PIN
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x8004, Common_Movement_Delay48
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieExit
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
	setvar VAR_ROUTE128_STATE, 1
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
	setflag FLAG_SYS_WEATHER_CTRL
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
	setvar VAR_STEVENS_HOUSE_STATE, 2
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
	setflag FLAG_HIDE_MAP_NAME_POPUP
	warp MAP_ROUTE128, 38, 22
	waitstate
	releaseall
	end

SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SeafloorCavern_Room9_Movement_Unused1:
	walk_left
	walk_left
	step_end

SeafloorCavern_Room9_Movement_ArchieListenMessage:
	walk_left
	delay_16
	step_end

SeafloorCavern_Room9_Movement_Unused2:
	walk_right
	step_end

SeafloorCavern_Room9_Movement_ArchieExit:
	face_up
	lock_facing_direction
	walk_down
	unlock_facing_direction
	walk_in_place_faster_right
	step_end

SeafloorCavern_Room9_Movement_KyogreApproach:
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

SeafloorCavern_Room9_Movement_KyogreExit:
	slide_up
	slide_up
	step_end

SeafloorCavern_Room9_Movement_MaxieArrive:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SeafloorCavern_Room9_Movement_MaxieExit:
	walk_right
	walk_right
	step_end

SeafloorCavern_Room9_Movement_MagmaGruntArrive:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SeafloorCavern_Room9_Movement_Delay32:
	delay_16
	delay_16
	step_end

SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
	.string "ADRIAN: Bleib sofort stehen!$"

SeafloorCavern_Room9_Text_ArchieSoItWasYou:
	.string "ADRIAN: Hahahaha…\n"
	.string "Du warst das also die ganze Zeit.$"

SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
	.string "ADRIAN: Schau nur, schau nur!\p"
	.string "Schau, wie schön die schlafende\n"
	.string "Gestalt\n"
	.string "des antiken POKéMON KYOGRE ist!\p"
	.string "Ich habe so lange auf diesen Tag\n"
	.string "gewartet…$"

SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
	.string "ADRIAN: Es überrascht mich, wie du es\n"
	.string "geschafft hast, mir zu folgen.\p"
	.string "Aber das ist nun alles Nebensache.\p"
	.string "Damit meine Träume wahr werden, musst\n"
	.string "du leider verschwinden!$"

SeafloorCavern_Room9_Text_ArchieDefeat:
	.string "Was?!?\n"
	.string "Ich habe gegen ein Kind verloren?!?$"

SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
	.string "ADRIAN: Hahahaha…\p"
	.string "Ich empfehle mich. Ich muss sagen, du\n"
	.string "bist wirklich sehr talentiert.\p"
	.string "Aber!\n"
	.string "Ich habe dieses hier in meinem Besitz!\n"
	.string "\p"
	.string "Mit dieser ROTEn KUGEL kann ich\n"
	.string "KYOGRE…$"

SeafloorCavern_Room9_Text_RedOrbShinesByItself:
	.string "Die ROTE KUGEL beginnt plötzlich von\n"
	.string "innen heraus zu leuchten!$"

SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
	.string "ADRIAN: Was?!?\p"
	.string "Ich habe doch gar nichts gemacht.\n"
	.string "Die ROTE KUGEL… Warum…\p"
	.string "Wo ist KYOGRE geblieben?$"

SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
	.string "ADRIAN: Hm? Dies ist eine Nachricht\n"
	.string "unserer Mitglieder draußen…$"

SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
	.string "ADRIAN: Ja, was ist denn jetzt los?\p"
	.string "Hm… Es regnet? So heftig?\p"
	.string "Gut… Genau darauf habe ich gewartet.\n"
	.string "Deshalb haben wir KYOGRE erweckt.\l"
	.string "Um TEAM AQUAs Vision von der Erweite-\l"
	.string "rung der Meere zu realisieren.\p"
	.string "Was?!?\p"
	.string "Es regnet stärker, als wir es voraus-\n"
	.string "gesagt haben? Wir sind in Gefahr?\p"
	.string "Das kann nicht sein…\n"
	.string "Das ist unmöglich…\p"
	.string "Bleib, wo du bist und behalte die\n"
	.string "Situation im Auge!$"

SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
	.string "ADRIAN: Irgendetwas stimmt da ganz und\n"
	.string "gar nicht…\p"
	.string "Die ROTE KUGEL sollte KYOGRE auf-\n"
	.string "wecken und unter Kontrolle halten…\p"
	.string "Aber… Warum?\n"
	.string "Warum ist KYOGRE verschwunden?\p"
	.string "Warum?!?$"

SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
	.string "MARC: Was hast du da nur herauf-\n"
	.string "beschworen?\p"
	.string "ADRIAN… Du hast KYOGRE aufge-\n"
	.string "weckt, stimmt’s?\p"
	.string "Was wird nur aus der Welt, wenn es\n"
	.string "bis in alle Ewigkeit regnen wird?\p"
	.string "Das Land wird untergehen und im\n"
	.string "Meer verschwinden…$"

SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
	.string "ADRIAN: Was?!?\n"
	.string "Behandle mich nicht so von oben herab!\n"
	.string "\p"
	.string "Wart ihr es nicht, TEAM MAGMA, die\n"
	.string "GROUDON erzürnt habt?\p"
	.string "Solange ich die ROTE KUGEL habe, habe\n"
	.string "ich auch die Kontrolle über KYOGRE…\p"
	.string "Ich sollte es kontrollieren können…$"

SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
	.string "MARC: Wir haben keine Zeit für\n"
	.string "Diskussionen!\p"
	.string "Geh nach draußen und sieh es dir\n"
	.string "selber an!\p"
	.string "Sieh, ob das, was du heraufbeschworen\n"
	.string "hast, das ist, was du wolltest!$"

SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
	.string "MARC: {PLAYER}, komm, du musst\n"
	.string "ebenfalls von hier verschwinden!$"
