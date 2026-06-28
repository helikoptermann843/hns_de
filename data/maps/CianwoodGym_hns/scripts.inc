CianwoodGym_hns_MapScripts::
	.byte 0


CianwoodGym_EventScript_Statue::
	lock
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM, CianwoodGym_EventScript_Statue2
	msgbox CianwoodGym_Text_GymStatue, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodGym_EventScript_Statue2::
	msgbox CianwoodGym_Text_GymStatueCertified, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodGym_Text_GymStatue:
	.string "Anemonia City Pokémon Arena$"

CianwoodGym_Text_GymStatueCertified:
	.string "Anemonia City Pokémon Arena\p"
	.string "Hartwig's zertifizierte Trainer:\n"
	.string "{PLAYER}$"

CianwoodGym_EventScript_Chuck::
	lock
	faceplayer
	goto_if_unset FLAG_HIDE_DOJO_CHUCK, CianwoodGym_EventScript_ChuckAtDojo
	goto_if_set FLAG_VISITED_VERMILION_CITY, CianwoodGym_EventScript_ChuckGotoDojo
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM, CianwoodGym_EventScript_Chuck_Defeated
	msgbox CianwoodGym_Text_ChuckIntro1, MSGBOX_DEFAULT
	applymovement LOCALID_CIANWOOD_CHUCK, CianwoodGym_Movement_ChuckLeft
	waitmovement 0
	message CianwoodGym_Text_ChuckIntro2
	applymovement LOCALID_CIANWOOD_CHUCK_ROCK_LEFT, Movement_SmashRock
	playse SE_M_ROCK_THROW
	waitmovement 0

	delay 20

	applymovement LOCALID_CIANWOOD_CHUCK, CianwoodGym_Movement_ChuckRight
	waitmovement 0
	applymovement LOCALID_CIANWOOD_CHUCK_ROCK_RIGHT, Movement_SmashRock
	playse SE_M_ROCK_THROW
	waitmovement 0
	waitmessage
	turnobject LOCALID_CIANWOOD_CHUCK, DIR_SOUTH
	msgbox CianwoodGym_Text_ChuckIntro3, MSGBOX_DEFAULT
	goto_if_set FLAG_DEFEATED_OLIVINE_CITY_GYM, CianwoodGym_EventScript_OlivineCheckMahog
	goto_if_set FLAG_DEFEATED_MAHOGANY_TOWN_GYM, CianwoodGym_EventScript_MahogCheckOlivine
	goto CianwoodGym_EventScript_Chuck_Battle1

CianwoodGym_EventScript_ChuckVictory::
	message CianwoodGym_Text_GetStormBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CianwoodGym_Text_ChuckBadgeSpeech, MSGBOX_DEFAULT
	setflag FLAG_BADGE05_GET
	setflag FLAG_DEFEATED_CIANWOOD_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 5
	call Common_EventScript_SetGymTrainers_hns
	giveitem ITEM_TM_FOCUS_PUNCH
	msgbox CianwoodGym_Text_ChuckTMSpeech, MSGBOX_DEFAULT
	setvar VAR_GETFLY, 1
	setrespawn HEAL_LOCATION_CIANWOOD_CITY_HNS
	closemessage
	release
	end

CianwoodGym_EventScript_ChuckGotoDojo::
	msgbox CianwoodGym_Text_ChuckGotoDojo, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_DOJO_CHUCK
	release
	end

CianwoodGym_Text_ChuckGotoDojo:
	.string "WAHAHAHA {PLAYER}!\n"
	.string "Ich bin mitten im Training!\p"
	.string "Wenn du erneut kämpfen willst,\n"
	.string "komm zum Kampf DOJO in Saffronia!$"

CianwoodGym_EventScript_ChuckAtDojo::
	msgbox CianwoodGym_Text_ChuckAtDojo, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodGym_Text_ChuckAtDojo:
	.string "Wir sehen uns im DOJO!\n"
	.string "WAHAHAHAHAHA$"

CianwoodGym_EventScript_OlivineCheckMahog::
	goto_if_set FLAG_DEFEATED_MAHOGANY_TOWN_GYM, CianwoodGym_EventScript_Chuck_Battle3
	goto CianwoodGym_EventScript_Chuck_Battle2

CianwoodGym_EventScript_MahogCheckOlivine::
	goto_if_set FLAG_DEFEATED_OLIVINE_CITY_GYM, CianwoodGym_EventScript_Chuck_Battle3
	goto CianwoodGym_EventScript_Chuck_Battle2
	
CianwoodGym_EventScript_Chuck_Battle1::
	trainerbattle_no_intro TRAINER_CHUCK_1_HNS, CianwoodGym_Text_ChuckIntro2
	goto CianwoodGym_EventScript_ChuckVictory

CianwoodGym_EventScript_Chuck_Battle2::
	trainerbattle_no_intro TRAINER_CHUCK_1_2_HNS, CianwoodGym_Text_ChuckIntro2
	goto CianwoodGym_EventScript_ChuckVictory

CianwoodGym_EventScript_Chuck_Battle3::
	trainerbattle_no_intro TRAINER_CHUCK_1_3_HNS, CianwoodGym_Text_ChuckIntro2
	goto CianwoodGym_EventScript_ChuckVictory

CianwoodGym_EventScript_Chuck_Defeated::
	msgbox CianwoodGym_Text_ChuckAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodGym_Movement_ChuckLeft:
	jump_in_place_left
	step_end

CianwoodGym_Movement_ChuckRight:
	jump_in_place_right
	step_end

CianwoodGym_Text_ChuckIntro1:
	.string "WAHAHAH!\p"
	.string "Du bist also bis hierher gekommen!\p"
	.string "Ich sag's dir: Ich bin hart!\p"
	.string "Meine Pokémon zerquetschen Felsen\n"
	.string "und zerschmettern Knochen!\p"
	.string "Pass auf!$"

CianwoodGym_Text_ChuckIntro2:
	.string "Hartwig: Urggh!\n"
	.string "…\p"
	.string "Oooarrgh!$"

CianwoodGym_Text_ChuckIntro3:
	.string "Na? Jetzt hast du Angst, was?\p"
	.string "Wie? Das hat nichts mit Pokémon\n"
	.string "zu tun?\p"
	.string "Stimmt auch!\p"
	.string "Komm! Wir kämpfen!$"

CianwoodGym_Text_ChuckLoss:
	.string "Was? Hä? Ich hab verloren?\p"
	.string "Wie wär's damit!\n"
	.string "Du bist würdig für den Sturmorden!$"

CianwoodGym_Text_GetStormBadge:
	.string "{PLAYER} erhielt den Sturmorden.$"

CianwoodGym_Text_ChuckBadgeSpeech:
	.string "Der Sturmorden sorgt dafür, dass dir\n"
	.string "alle Pokémon bis L70 gehorchen,\n"
	.string "auch getauschte.\p"
	.string "Außerdem können deine Pokémon\n"
	.string "Fliegen auch außerhalb von\n"
	.string "Kämpfen einsetzen.\p"
	.string "Hier, nimm das auch noch!$"

CianwoodGym_Text_ChuckTMSpeech:
	.string "Das ist Power-Punch.\p"
	.string "Er ist langsam, verursacht aber\n"
	.string "riesigen Schaden. Lass dich nur\l"
	.string "nicht zuerst treffen!$"

CianwoodGym_Text_ChuckAfter:
	.string "WAHAHAH! Der Kampf mit dir hat mir\n"
	.string "Spaß gemacht!\p"
	.string "Aber eine Niederlage ist eine\n"
	.string "Niederlage!\p"
	.string "Von jetzt an trainiere ich\n"
	.string "24 Stunden am Tag!$"

CianwoodGym_Text_ChuckRematch:
	.string "WAHAHAH! JOHTO-CHAMPION!\p"
	.string "Du willst noch eine Runde!\p"
	.string "Ich sehe, deine Fähigkeiten sind\n"
	.string "besser geworden!\p"
	.string "Bereit für ein Kräftemessen?$"

CianwoodGym_Text_ChuckRematchDefeat:
	.string "Was? Hä? Ich habe verloren?\n"
	.string "Schon wieder?$"

CianwoodGym_EventScript_Yoshi::
	trainerbattle_single TRAINER_YOSHI_HNS, CianwoodGym_Text_BlackbeltYoshiSeen, CianwoodGym_Text_BlackbeltYoshiBeaten
	msgbox CianwoodGym_Text_BlackbeltYoshiAfter, MSGBOX_AUTOCLOSE
	end

CianwoodGym_Text_BlackbeltYoshiSeen:
	.string "Mein Pokémon und ich sind durch\n"
	.string "Freundschaft verbunden.\p"
	.string "Unser Band wird niemals zerbrechen!$"

CianwoodGym_Text_BlackbeltYoshiBeaten:
	.string "Das kann nicht wahr sein!$"

CianwoodGym_Text_BlackbeltYoshiAfter:
	.string "Du scheinst auch ein starkes Band\n"
	.string "mit deinen Pokémon zu haben!$"

CianwoodGym_EventScript_Lao::
	trainerbattle_single TRAINER_LAO_HNS, CianwoodGym_Text_BlackbeltLaoSeen, CianwoodGym_Text_BlackbeltLaoBeaten
	msgbox CianwoodGym_Text_BlackbeltLaoAfter, MSGBOX_AUTOCLOSE
	end

CianwoodGym_Text_BlackbeltLaoSeen:
	.string "Wir Kampfsportler haben keine Angst!$"

CianwoodGym_Text_BlackbeltLaoBeaten:
	.string "Schockierend!$"

CianwoodGym_Text_BlackbeltLaoAfter:
	.string "Kampf-Pokémon haben Angst vor\n"
	.string "Psycho…$"


CianwoodGym_EventScript_Nob::
	trainerbattle_single TRAINER_NOB_HNS, CianwoodGym_Text_BlackbeltNobSeen, CianwoodGym_Text_BlackbeltNobBeaten
	msgbox CianwoodGym_Text_BlackbeltNobAfter, MSGBOX_AUTOCLOSE
	end

CianwoodGym_Text_BlackbeltNobSeen:
	.string "Worte sind nutzlos\n"
	.string "Lass deine Fäuste sprechen!$"

CianwoodGym_Text_BlackbeltNobBeaten:
	.string "…$"

CianwoodGym_Text_BlackbeltNobAfter:
	.string "Ich hab verloren! Ich bin sprachlos.$"

CianwoodGym_EventScript_Lung::
	trainerbattle_single TRAINER_LUNG_HNS, CianwoodGym_Text_BlackbeltLungSeen, CianwoodGym_Text_BlackbeltLungBeaten
	msgbox CianwoodGym_Text_BlackbeltLungAfter, MSGBOX_AUTOCLOSE
	end

CianwoodGym_Text_BlackbeltLungSeen:
	.string "Meine donnernden Fäuste werden dich\n"
	.string "und deine Pokémon zerschmettern!$"

CianwoodGym_Text_BlackbeltLungBeaten:
	.string "Ich wurde zerschmettert!$"

CianwoodGym_Text_BlackbeltLungAfter:
	.string "Meine Pokémon haben verloren…\n"
	.string "Mei… Meine Würde ist am Boden…$"

