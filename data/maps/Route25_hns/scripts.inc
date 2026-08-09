Route25_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route25_MapScript_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route25_MapScript_OnTransition::
	callnative SetTimeBasedEncounters
	goto_if_eq VAR_SUICUNE_ENCOUNTERS, 7, Route25_EventScript_SetSuicuneSceneMid
	end

Route25_EventScript_SetSuicuneSceneMid::
	setobjectxyperm LOCALID_ROUTE25_EUSINE, 98, 14
	end

Route25_EventScript_MistyRematch::
    lock
    faceplayer
    msgbox Route25_Text_Misty, MSGBOX_DEFAULT
    closemessage
    fadescreenswapbuffers FADE_TO_BLACK
    setflag FLAG_HIDE_CAPE_MISTY
    removeobject LOCALID_CAPE_MISTY
    fadescreenswapbuffers FADE_FROM_BLACK
    clearflag FLAG_HIDE_DOJO_MISTY
    release
    end

Route25_Text_Misty:
	.string "Misty: Ich liebe den Sonnenuntergang\n"
	.string "hier!\p"
	.string "Er gibt mir den Mut,\n"
	.string "weiterzumachen, weißt du?\p"
	.string "Richtig!\p"
	.string "Wenn du bereit bist,\n"
	.string "Welle zu machen,\l"
	.string "triff mich im Kampf-Dojo!$"

Route25_EventScript_Dudley::
	trainerbattle_single TRAINER_DUDLEY_HNS, Route25_Text_SchoolboyDudleySeen, Route25_Text_SchoolboyDudleyBeaten
	msgbox Route25_Text_SchoolboyDudleyAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Ellen::
	trainerbattle_single TRAINER_ELLEN_HNS, Route25_Text_LassEllenSeen, Route25_Text_LassEllenBeaten
	msgbox Route25_Text_LassEllenAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Joe::
	trainerbattle_single TRAINER_JOE_HNS, Route25_Text_SchoolboyJoeSeen, Route25_Text_SchoolboyJoeBeaten
	msgbox Route25_Text_SchoolboyJoeAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Laura::
	trainerbattle_single TRAINER_LAURA_HNS, Route25_Text_LassLauraSeen, Route25_Text_LassLauraBeaten
	msgbox Route25_Text_LassLauraAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Lloyd::
	trainerbattle_single TRAINER_LLOYD_HNS, Route25_Text_CamperLloydSeen, Route25_Text_CamperLloydBeaten
	msgbox Route25_Text_CamperLloydAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Shannon::
	trainerbattle_single TRAINER_SHANNON_HNS, Route25_Text_LassShannonSeen, Route25_Text_LassShannonBeaten
	msgbox Route25_Text_LassShannonAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Pat::
	trainerbattle_single TRAINER_PAT_HNS, Route25_Text_SupernerdPatSeen, Route25_Text_SupernerdPatBeaten
	msgbox Route25_Text_SupernerdPatAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Kevin::
	lock
	faceplayer
	goto_if_set FLAG_ROUTE25_GOT_NUGGET, Route25_EventScript_KevinAfter
	msgbox Route25_Text_CooltrainerKevinNugget, MSGBOX_DEFAULT
	giveitem ITEM_BIG_NUGGET
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_ROUTE25_GOT_NUGGET
	msgbox Route25_Text_CooltrainerKevinSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_KEVIN_HNS, Route25_Text_CooltrainerKevinBeaten
	msgbox Route25_Text_CooltrainerKevinAfter, MSGBOX_DEFAULT
	closemessage
	release
	end
Route25_EventScript_KevinAfter::
	msgbox Route25_Text_CooltrainerKevinAfter, MSGBOX_NPC
	end

Route25_EventScript_BillsHouseSign::
	msgbox Route25_Text_BillsHouseSign, MSGBOX_SIGN
	end

Route25_Trigger_MistyRight::
	lock
	turnobject LOCALID_ROUTE25_MISTY, DIR_SOUTH
	delay 40
	turnobject LOCALID_ROUTE25_MAN, DIR_SOUTH
	playse SE_PIN
	applymovement2 LOCALID_ROUTE25_MAN, Common_Movement_ExclamationMark
	waitmovement LOCALID_ROUTE25_MAN
	applymovement2 LOCALID_ROUTE25_MAN, Route25_Movement_ManLeaveRight
	waitmovement 0
	applymovement2 LOCALID_ROUTE25_MISTY, Route25_Movement_MistyWalkToPlayerRight
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	goto Route25_EventScript_Misty
Route25_Trigger_MistyLeft::
	lock
	turnobject LOCALID_ROUTE25_MISTY, DIR_SOUTH
	delay 40
	turnobject LOCALID_ROUTE25_MAN, DIR_SOUTH
	playse SE_PIN
	applymovement2 LOCALID_ROUTE25_MAN, Common_Movement_ExclamationMark
	waitmovement LOCALID_ROUTE25_MAN
	applymovement2 LOCALID_ROUTE25_MAN, Route25_Movement_ManLeaveLeft
	waitmovement 0
	applymovement2 LOCALID_ROUTE25_MISTY, Route25_Movement_MistyWalkToPlayerLeft
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto Route25_EventScript_Misty
Route25_EventScript_Misty::
	msgbox Route25_Text_MistyDate, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_ROUTE25_MISTY, Route25_Movement_MistyLeave
	waitmovement 0
	removeobject LOCALID_ROUTE25_MISTY
	removeobject LOCALID_ROUTE25_MAN
	setflag FLAG_HIDE_ROUTE25_MISTY
	clearflag FLAG_HIDE_CERULEAN_GYM_TRAINERS
	setflag FLAG_HIDE_CERULEAN_GYM_POKEMON
	setvar VAR_CERULEAN_CITY_STATE, 3
	release
	end

Route25_Trigger_SuicuneLeft::
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement LOCALID_ROUTE25_SUICUNE, Route25_Movement_Suicune1
	playse SE_LEDGE
	waitse
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route25_Movement_WalkToSuicune
	waitmovement 0
	goto Route25_EventScript_SuicuneMerge
Route25_Trigger_SuicuneRight::
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement LOCALID_ROUTE25_SUICUNE, Route25_Movement_Suicune1
	playse SE_LEDGE
	waitse
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route25_Movement_WalkToSuicune
	waitmovement 0
	goto Route25_EventScript_SuicuneMerge
Route25_EventScript_SuicuneMerge::
	clearflag FLAG_HIDE_ROUTE25_EUSINE
	addobject LOCALID_ROUTE25_EUSINE
	applymovement LOCALID_ROUTE25_EUSINE, Route25_Movement_EusineEnter
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	msgbox Route25_Text_Eusine1, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROUTE25_EUSINE, Route25_Movement_EusineSide
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox Route25_Text_Eusine2, MSGBOX_DEFAULT
	closemessage
	setvar VAR_SUICUNE_ENCOUNTERS, 7
	release
	end

Route25_Trigger_SuicuneRightRight::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	goto Route25_Trigger_SuicuneRight
Route25_Trigger_SuicuneLeftLeft::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight1
	waitmovement 0
	goto Route25_Trigger_SuicuneLeft

Route25_Text_Eusine1:
	.string "Eusin: Schnauf, schnauf…\n"
	.string "Gegen dich hatte ich einfach\l"
	.string "keine Chance…\p"
	.string "… … …\n"
	.string "Aber keine Sorge, das ist schon gut so.\p"
	.string "Schon seit wir uns in der Turmruine von\n"
	.string "Teak City zum ersten Mal gesehen\l"
	.string "haben, wusste ich tief in mir drin, dass\l"
	.string "Suicune dich auserwählen würde.$"

Route25_Text_Eusine2:
	.string "Eusin: Da, sieh nur!\n"
	.string "Suicune wartet auf dich!\l"
	.string "Es wartet darauf, dass es von einem\l"
	.string "Trainer herausgefordert wird, der sich\l"
	.string "mit voller Kraft in den Kampf wirft!$"

Route25_Text_Eusine3:
	.string "Eusin: {PLAYER}…\n"
	.string "Das war wirklich unglaublich…\p"
	.string "Jetzt, wo ich diesem Kampf\n"
	.string "beiwohnen durfte, gibt es echt\l"
	.string "nichts mehr, worüber ich mich\l"
	.string "noch beklagen könnte…\p"
	.string "Lebe wohl, Suicune!\n"
	.string "Und lebe wohl, {PLAYER}!$"

Route25_EventScript_Eusine::
	msgbox Route25_Text_Eusine2, MSGBOX_NPC
	end

Route25_EventScript_Suicune::
	lock
	faceplayer
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement LOCALID_ROUTE25_SUICUNE, Route25_Movement_Suicune1
	playse SE_LEDGE
	waitse
	waitmovement 0
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	seteventmon SPECIES_SUICUNE, 50
	special BattleSetup_StartLegendaryBattle
	waitstate
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route25_EventScript_SuicuneRan
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_ROUTE25_SUICUNE
	setflag FLAG_HIDE_ROUTE25_SUICUNE
	fadescreenswapbuffers FADE_FROM_BLACK
	goto_if_ge VAR_SUICUNE_ENCOUNTERS, 8, Route25_EventScript_SuicunePostGame
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 99, Route25_AdjustPlayer
	call_if_eq VAR_TEMP_0, 100, Route25_AdjustPlayerTwice
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	turnobject LOCALID_ROUTE25_EUSINE, DIR_NORTH
	msgbox Route25_Text_Eusine3, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_ROUTE25_EUSINE, Route25_Movement_EusineLeave
	waitmovement 0
	removeobject LOCALID_ROUTE25_EUSINE
	setflag FLAG_HIDE_ROUTE25_EUSINE
	clearflag FLAG_HIDE_CELADON_EUSINE
	setvar VAR_SUICUNE_ENCOUNTERS, 8
	release
	end

Route25_EventScript_SuicuneRan::
	release
	end

Route25_AdjustPlayer::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	return

Route25_AdjustPlayerTwice::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	return

Route25_EventScript_SuicunePostGame::
	release
	end

Route25_Movement_EusineLeave:
	walk_down
	walk_down
	walk_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Route25_Movement_EusineSide:
	walk_slow_left
	walk_slow_up
	step_end

Route25_Movement_EusineEnter:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_slow_up
	step_end

Route25_Movement_Suicune1:
	jump_in_place_down
	step_end

Route25_Movement_WalkToSuicune:
	walk_up
	walk_up
	step_end

Route25_Movement_MistyLeave:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route25_Movement_ManLeaveRight:
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end
Route25_Movement_ManLeaveLeft:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route25_Movement_MistyWalkToPlayerRight:
	walk_fast_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	face_right
	step_end
Route25_Movement_MistyWalkToPlayerLeft:
	walk_fast_left
	walk_down
	walk_down
	walk_down
	walk_down
	face_left
	step_end

Route25_Text_MistyDate:
	.string "Misty: Oh Mann!\n"
	.string "Wo kommst du denn plötzlich her?!?\p"
	.string "Weißt du, wie man jemanden wie\n"
	.string "dich üblicherweise nennt?\l"
	.string "Einen Störenfried!\p"
	.string "… … …\n"
	.string "…Huch? Sag mal, diese Orden da…\l"
	.string "Sind das etwa Arena-Orden aus Johto?\p"
	.string "Wenn du alle acht davon besitzt,\n"
	.string "musst du ja so einiges drauf haben!\p"
	.string "Klasse!\n"
	.string "Komm mal in die Arena von Azuria City!\l"
	.string "Ich will nämlich gegen dich kämpfen!\p"
	.string "Ich bin Misty, die Arenaleiterin von\n"
	.string "Azuria City!$"

Route25_Text_SchoolboyDudleySeen:
	.string "Besiege alle sechs Trainer und dich\n"
	.string "erwartet ein wunderbarer Preis!\p"
	.string "Was meinst du?\n"
	.string "Glaubst du, du hast das Zeug dazu?$"

Route25_Text_SchoolboyDudleyBeaten:
	.string "Wow! Gut gemacht.$"

Route25_Text_SchoolboyDudleyAfter:
	.string "Ich habe mein Bestes gegeben.\n"
	.string "Ich habe mir nichts vorzuwerfen.$"

Route25_Text_LassEllenSeen:
	.string "Ich bin Numero 2!\n"
	.string "Jetzt wird es ernst!$"

Route25_Text_LassEllenBeaten:
	.string "Wie konnte ich nur verlieren?$"

Route25_Text_LassEllenAfter:
	.string "Ich habe mein Bestes gegeben.\n"
	.string "Ich habe mir nichts vorzuwerfen.$"

Route25_Text_SchoolboyJoeSeen:
	.string "Ich bin Nummer 3!\n"
	.string "Mich besiegst du nicht so leicht!$"

Route25_Text_SchoolboyJoeBeaten:
	.string "…Schnauf, schnauf! Genug, vorbei!$"

Route25_Text_SchoolboyJoeAfter:
	.string "Ich habe mein Bestes gegeben.\n"
	.string "Ich habe mir nichts vorzuwerfen.$"

Route25_Text_LassLauraSeen:
	.string "Nr. 4!\n"
	.string "Wirst du müde?$"

Route25_Text_LassLauraBeaten:
	.string "Ich habe auch verloren, was?$"

Route25_Text_LassLauraAfter:
	.string "Ich habe mein Bestes gegeben.\n"
	.string "Ich habe mir nichts vorzuwerfen.$"

Route25_Text_CamperLloydSeen:
	.string "O.K.! Nummer 5. Ich zermalme dich!$"

Route25_Text_CamperLloydBeaten:
	.string "Uff! Zu stark.$"

Route25_Text_CamperLloydAfter:
	.string "Ich habe mein Bestes gegeben.\n"
	.string "Ich habe mir nichts vorzuwerfen.$"

Route25_Text_LassShannonSeen:
	.string "Ich bin die Letzte, aber ich warne dich!\n"
	.string "Ich bin eine harte Nuss!$"

Route25_Text_LassShannonBeaten:
	.string "…Ich habe was?$"

Route25_Text_LassShannonAfter:
	.string "Ich habe mein Bestes gegeben.\n"
	.string "Ich habe mir nichts vorzuwerfen.$"

Route25_Text_SupernerdPatSeen:
	.string "Hehehehe…\p"
	.string "Ich? Ich habe mit den sechs Trainern\n"
	.string "nichts zu tun.\p"
	.string "Du musst müde sein nach den vielen Käm-\n"
	.string "pfen. Ich habe hier auf dich gewartet,\l"
	.string "um dich zu besiegen!$"

Route25_Text_SupernerdPatBeaten:
	.string "Meine Güte!\n"
	.string "Machst du denn niemals eine Pause?$"

Route25_Text_SupernerdPatAfter:
	.string "Tut mir leid…\n"
	.string "Ich mogele auch niemals wieder!$"

Route25_Text_CooltrainerKevinNugget:
	.string "Ganz alleine so viele Kämpfe zu\n"
	.string "überstehen, war ganz schön knifflig!\l"
	.string "Und trotzdem hast du sogar noch mit\l"
	.string "Abstand gewonnen!\p"
	.string "Hier ist dein Preis, wie versprochen!$"

Route25_Text_CooltrainerKevinSeen:
	.string "…Also dann! Jetzt, wo ich dir beim\n"
	.string "Kämpfen zugesehen habe, kriege\l"
	.string "ich selbst Lust auf ein Duell.\p"
	.string "Du musst einfach gegen mich kämpfen!\n"
	.string "Und los geht’s!$"

Route25_Text_CooltrainerKevinBeaten:
	.string "Das war der beste\n"
	.string "Kampf meines Lebens!$"

Route25_Text_CooltrainerKevinAfter:
	.string "Der Kampf war großartig!\p"
	.string "Du und dein Pokémon-Team, ihr\n"
	.string "seid wirklich stark!$"

Route25_Text_BillsHouseSign:
	.string "Küstenhaus\n"
	.string "Bills Haus$"

