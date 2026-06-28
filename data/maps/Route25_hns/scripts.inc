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
	.string "MISTY: Ich liebe den Sonnenuntergang\n"
	.string "hier!\p"
	.string "Er gibt mir den Mut,\l"
	.string "weiterzumachen, weißt du?\p"
	.string "Richtig!\p"
	.string "Wenn du bereit bist,\n"
	.string "Welle zu machen,\l"
	.string "triff mich im KAMPF-DOJO!$"

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
	delay 60
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
	delay 60
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
	delay 60
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
	delay 60
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
	.string "EUSIN: Keuch... keuch...\n"
	.string "Ich... bin dir nicht gewachsen.\p"
	.string "...Wie ich es vorausgesehen habe.\n"
	.string "..........................\l"
	.string "...Geh nur weiter.\p"
	.string "Seit wir uns in der TURMRUINE\n"
	.string "in TEAK CITY trafen, wusste ich\l"
	.string "irgendwie,\l"
	.string "dass SUICUNE dich wählen würde.$"

Route25_Text_Eusine2:
	.string "Sieh es dir an!\p"
	.string "SUICUNE wartet auf dich!\n"
	.string "Es wartete auf einen Kampf\l"
	.string "mit einem würdigen Trainer,\l"
	.string "dem es sich anvertrauen kann.$"

Route25_Text_Eusine3:
	.string "{PLAYER}...\n"
	.string "Ihr zwei seid wirklich unglaublich...\n"
	.string "\p"
	.string "So einen intensiven Kampf\n"
	.string "habe ich noch nie gesehen!\l"
	.string "Ich habe keine Reue...\p"
	.string "Leb wohl, SUICUNE!\n"
	.string "Leb wohl... {PLAYER}!$"

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
	.string "MISTY: Aww! Warum musst du jetzt\p"
	.string "auftauchen und uns stören?\p"
	.string "Weißt du, wie\n"
	.string "man Menschen wie dich nennt?\p"
	.string "Plage! Du hast richtig gehört, Plage!\n"
	.string "\p"
	.string "…\p"
	.string "…Oh? Die ORDEN,\n"
	.string "die du hast… Sind das ARENA-ORDEN aus\n"
	.string "JOHTO?\p"
	.string "Wenn du acht hast, musst du gut sein.\n"
	.string "\p"
	.string "O.K. Komm in die\n"
	.string "PKMN-ARENA von AZURIA CITY.\p"
	.string "Ich freue mich, gegen dich zu kämpfen.\n"
	.string "\p"
	.string "Ich bin MISTY, die\n"
	.string "ARENALEITERIN von AZURIA CITY.$"

Route25_Text_SchoolboyDudleySeen:
	.string "Besiege alle sechs\n"
	.string "Trainer und du erhältst einen\n"
	.string "wunderbaren Preis!\p"
	.string "Glaubst du, du hast das Zeug dazu?$"

Route25_Text_SchoolboyDudleyBeaten:
	.string "Wow! Gut gemacht.$"

Route25_Text_SchoolboyDudleyAfter:
	.string "Ich habe alles gegeben.\n"
	.string "Ich bereue nichts.$"

Route25_Text_LassEllenSeen:
	.string "Ich bin zweiter.\n"
	.string "Jetzt wird's ernst!$"

Route25_Text_LassEllenBeaten:
	.string "Wie konnte ich nur verlieren?$"

Route25_Text_LassEllenAfter:
	.string "Ich habe alles gegeben.\n"
	.string "Ich bereue nichts.$"

Route25_Text_SchoolboyJoeSeen:
	.string "Ich bin Nummer 3!\n"
	.string "Das wird nicht leicht.$"

Route25_Text_SchoolboyJoeBeaten:
	.string "Oh! Vermöbelt!$"

Route25_Text_SchoolboyJoeAfter:
	.string "Ich habe alles gegeben.\n"
	.string "Ich bereue nichts.$"

Route25_Text_LassLauraSeen:
	.string "Nr. 4!\n"
	.string "Wirst du müde?$"

Route25_Text_LassLauraBeaten:
	.string "Auch ich habe verloren…$"

Route25_Text_LassLauraAfter:
	.string "Ich habe alles gegeben.\n"
	.string "Ich bereue nichts.$"

Route25_Text_CamperLloydSeen:
	.string "O.K.! Nummer 5. Ich zermalme dich!$"

Route25_Text_CamperLloydBeaten:
	.string "Uff! Zu stark.$"

Route25_Text_CamperLloydAfter:
	.string "Ich habe alles gegeben.\n"
	.string "Ich bereue nichts.$"

Route25_Text_LassShannonSeen:
	.string "Ich bin der\n"
	.string "Letzte, aber ich sage dir, ich bin\l"
	.string "eine harte Nuss!$"

Route25_Text_LassShannonBeaten:
	.string "Du machst Witze.$"

Route25_Text_LassShannonAfter:
	.string "Ich habe alles gegeben.\n"
	.string "Ich bereue nichts.$"

Route25_Text_SupernerdPatSeen:
	.string "Uffuffuff…\p"
	.string "Ich habe mit den\n"
	.string "sechs Trainern nichts zu tun.\p"
	.string "Ich habe hier auf dich gewartet, um\p"
	.string "dich zu besiegen,\n"
	.string "da du nach den vielen Kämpfen müde\l"
	.string "sein musst.$"

Route25_Text_SupernerdPatBeaten:
	.string "Bist du überhaupt nicht müde?$"

Route25_Text_SupernerdPatAfter:
	.string "Tut mir leid,\n"
	.string "ich werde nicht mehr falsch spielen…$"

Route25_Text_CooltrainerKevinNugget:
	.string "Du hast einen\n"
	.string "Kampf mehr bestritten, als du\p"
	.string "erwartet hast.\n"
	.string "Dennoch hast du gewonnen.\p"
	.string "Wie versprochen, hier ist der Preis.$"

Route25_Text_CooltrainerKevinSeen:
	.string "Nachdem ich gesehen habe, wie\p"
	.string "du kämpfst, möchte\n"
	.string "ich sehen, wie es mir ergeht.\p"
	.string "Wie sieht's aus?\n"
	.string "Ich fordere dich heraus.$"

Route25_Text_CooltrainerKevinBeaten:
	.string "Das war der beste Kampf meines Lebens!$"

Route25_Text_CooltrainerKevinAfter:
	.string "Der Kampf war Spitze!\p"
	.string "Du und deine Pokémon sind\n"
	.string "wirklich großartig!$"

Route25_Text_BillsHouseSign:
	.string "Küstenhaus Bill's HAUS$"

