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
	.string "Pokémon-Arena von Anemonia City$"

CianwoodGym_Text_GymStatueCertified:
	.string "Pokémon-Arena von Anemonia City\p"
	.string "Leiter: Hartwig\n"
	.string "Anerkannte Trainer:\p"
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
	callnative RevealDexEntries_Cianwood
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 5
	call Common_EventScript_SetGymTrainers_hns
	giveitem ITEM_TM_FOCUS_PUNCH
	msgbox CianwoodGym_Text_ChuckTMSpeech, MSGBOX_DEFAULT
	setvar VAR_GETFLY, 1
	setrespawn HEAL_LOCATION_CIANWOOD_CITY_HNS
    call_if_eq VAR_NUM_BADGES, 7, MahoganyTown_Gym_EventScript_SetupElmRocketCall
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
	.string "Wahahaha {PLAYER}!\n"
	.string "Ich bin mitten im Training!\p"
	.string "Wenn du erneut kämpfen willst,\n"
	.string "komm zum Kampf-Dojo in Saffronia City!$"

CianwoodGym_EventScript_ChuckAtDojo::
	msgbox CianwoodGym_Text_ChuckAtDojo, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodGym_Text_ChuckAtDojo:
	.string "Wir sehen uns im Dojo!\n"
	.string "Wahahahahaha$"

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
	.string "Wahahah!\p"
	.string "Du bist also bis hierher gekommen!\p"
	.string "Ich sag’s dir: Ich bin hart!\p"
	.string "Meine Pokémon zerquetschen Felsen\n"
	.string "und zerschmettern Knochen!\p"
	.string "Pass auf!$"

CianwoodGym_Text_ChuckIntro2:
	.string "Urrrgh!\n"
	.string "… … …\p"
	.string "Huaaargh!$"

CianwoodGym_Text_ChuckIntro3:
	.string "Na, da staunst du, was?\p"
	.string "Was sagst du da? Mit Pokémon\n"
	.string "hat das herzlich wenig zu tun?\l"
	.string "Klar, da hast du natürlich recht!\l"
	.string "Komm schon, lass uns kämpfen!$"

CianwoodGym_Text_ChuckLoss:
	.string "Was? Hä? Ich hab verloren?\p"
	.string "Wie wär’s damit!\n"
	.string "Du bist würdig für den Faustorden!$"

CianwoodGym_Text_GetStormBadge:
	.string "{PLAYER} erhält den Faustorden!$"

CianwoodGym_Text_ChuckBadgeSpeech:
	.string "Der Faustorden sorgt dafür, dass dir\n"
	.string "alle Pokémon bis L70 gehorchen,\l"
	.string "auch getauschte.\p"
	.string "Außerdem können deine Pokémon\n"
	.string "Fliegen auch außerhalb von\l"
	.string "Kämpfen einsetzen.\p"
	.string "Hier, nimm das auch noch!$"

CianwoodGym_Text_ChuckTMSpeech:
	.string "Das ist Power-Punch.\p"
	.string "Er ist langsam, verursacht aber\n"
	.string "riesigen Schaden. Lass dich nur\l"
	.string "nicht zuerst treffen!$"

CianwoodGym_Text_ChuckAfter:
	.string "Hartwig: Hahaha! Es war mir ein großes\n"
	.string "Vergnügen, gegen dich zu kämpfen!\p"
	.string "Aber das ändert nichts daran, dass ich\n"
	.string "verloren habe. Von nun an werde ich\l"
	.string "24 Stunden am Tag trainieren!$"

CianwoodGym_Text_ChuckRematch:
	.string "Wahahah! Johto-Champion!\p"
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
	.string "Meine Pokémon und mich verbindet\n"
	.string "eine tiefe Freundschaft.\l"
	.string "Dieses Band wird nie jemand zerreißen!$"

CianwoodGym_Text_BlackbeltYoshiBeaten:
	.string "Das ist unmöglich!$"

CianwoodGym_Text_BlackbeltYoshiAfter:
	.string "Es scheint, als stündest auch du\n"
	.string "deinen Pokémon sehr nahe!$"

CianwoodGym_EventScript_Lao::
	trainerbattle_single TRAINER_LAO_HNS, CianwoodGym_Text_BlackbeltLaoSeen, CianwoodGym_Text_BlackbeltLaoBeaten
	msgbox CianwoodGym_Text_BlackbeltLaoAfter, MSGBOX_AUTOCLOSE
	end

CianwoodGym_Text_BlackbeltLaoSeen:
	.string "Wir Meister der Kampfkunst\n"
	.string "kennen keine Angst!$"

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
	.string "Weltlicher Besitz ist sinnlos.\n"
	.string "Worte sind nutzlos.\l"
	.string "Lass deine Fäuste sprechen!$"

CianwoodGym_Text_BlackbeltNobBeaten:
	.string "…$"

CianwoodGym_Text_BlackbeltNobAfter:
	.string "Ich habe verloren!\n"
	.string "Ich bin sprachlos!$"

CianwoodGym_EventScript_Lung::
	trainerbattle_single TRAINER_LUNG_HNS, CianwoodGym_Text_BlackbeltLungSeen, CianwoodGym_Text_BlackbeltLungBeaten
	msgbox CianwoodGym_Text_BlackbeltLungAfter, MSGBOX_AUTOCLOSE
	end

CianwoodGym_Text_BlackbeltLungSeen:
	.string "Die Wut meiner Fäuste wird deine\n"
	.string "Pokémon das Fürchten lehren!$"

CianwoodGym_Text_BlackbeltLungBeaten:
	.string "Ich wurde zerschmettert!$"

CianwoodGym_Text_BlackbeltLungAfter:
	.string "Meine Pokémon haben verloren…\n"
	.string "Mein Stolz ist nur noch Staub…$"

