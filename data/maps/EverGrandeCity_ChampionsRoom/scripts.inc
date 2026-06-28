EverGrandeCity_ChampionsRoom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
	.byte 0

EverGrandeCity_ChampionsRoom_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	end

EverGrandeCity_ChampionsRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

EverGrandeCity_ChampionsRoom_OnFrame:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
	.2byte 0

EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
	lockall
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp4
	waitmovement 0
	delay 40
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
	waitmovement 0
	setvar VAR_TEMP_1, 1
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
	releaseall
	end

EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace:
	walk_up
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_EventScript_Wallace::
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
	msgbox EverGrandeCity_ChampionsRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
	end

EverGrandeCity_ChampionsRoom_EventScript_Defeated::
	playse SE_DOOR
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
	special DrawWholeMapView
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	closemessage
	playse SE_DOOR
	checkplayergender
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic
	addobject LOCALID_CHAMPIONS_ROOM_RIVAL
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
	end

EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic::
	playbgm MUS_ENCOUNTER_MAY, FALSE
	return

EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic::
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	return

EverGrandeCity_ChampionsRoom_EventScript_MayAdvice::
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
	delay 40
	playse SE_PIN
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_Delay48
	waitmovement 0
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
	end

EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice::
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
	delay 40
	playse SE_PIN
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_Delay48
	waitmovement 0
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
	end

EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
	closemessage
	addobject LOCALID_CHAMPIONS_ROOM_BIRCH
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
	call ProfBirch_EventScript_RatePokedex
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 20
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
	waitmovement 0
	delay 20
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
	checkplayergender
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
	closemessage
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
	waitmovement 0
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
	waitstate
	releaseall
	end

EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
	return

EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
	return

EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
	waitmovement 0
	return

EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
	walk_up
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
	walk_up
	delay_16
	walk_up
	delay_8
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_in_place_faster_right
	step_end

EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
	walk_in_place_faster_up
	delay_16
	walk_in_place_faster_right
	delay_16
	walk_in_place_faster_up
	delay_8
	walk_in_place_faster_right
	delay_16
	step_end

EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
	walk_right
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart:
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
	walk_up
	delay_8
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_in_place_faster_left
	step_end

EverGrandeCity_ChampionsRoom_Text_IntroSpeech:
	.string "WASSILI: Willkommen, {PLAYER}{KUN}.\p"
	.string "Dieser Zwischenfall in XENEROVILLE…\n"
	.string "Das war hervorragende Arbeit - wie du\l"
	.string "die Krise dort beendet hast!\p"
	.string "Hups!\p"
	.string "Es wäre aber nicht fair zu behaupten,\n"
	.string "du hättest allein für Ordnung gesorgt.\n"
	.string "\p"
	.string "Du hast die Situation gemeistert, weil\n"
	.string "du mit deinen POKéMON\l"
	.string "zusammengearbeitet hast.\p"
	.string "Wir TRAINER ziehen POKéMON auf, indem\n"
	.string "wir ihnen Items geben und neue\l"
	.string "Techniken für den Kampf beibringen.\p"
	.string "Und auch wir lernen viel von den\n"
	.string "POKéMON.\p"
	.string "Dann wird deine Leistung mit der\n"
	.string "anderer TRAINER verglichen.\p"
	.string "Nun ja!\p"
	.string "Wer kann am elegantesten in ganz\n"
	.string "HOENN mit seinen POKéMON tanzen?\p"
	.string "Zeig es mir! Hier und jetzt!$"

EverGrandeCity_ChampionsRoom_Text_Defeat:
	.string "Ich, der CHAMP, wurde besiegt…\p"
	.string "Eine erstklassige Leistung!\n"
	.string "Du warst elegant, manchmal auch\l"
	.string "verzweifelt. Aber auch herrlich!\p"
	.string "Der Ruhm gehört dir, {PLAYER}{KUN}!\p"
	.string "Du bist wahrhaft ein edler\n"
	.string "TRAINER!$"

EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech:
	.string "WASSILI: Die POKéMON, die du in den\n"
	.string "Kampf geschickt hast…\p"
	.string "Manchmal wirbelten sie wie eine\n"
	.string "Frühlingsbrise und dann wieder\l"
	.string "schlugen sie ein wie ein Blitz.\p"
	.string "Du hast deine POKéMON mit leichter,\n"
	.string "aber sicherer Eleganz geführt.\p"
	.string "Du hast mich mit deiner meisterhaften\n"
	.string "Vorstellung bezaubert!\p"
	.string "Du hast den ruhmreichen Gipfel der\n"
	.string "POKéMON LIGA erreicht.\p"
	.string "Für die ganze HOENN-Region rufe ich\n"
	.string "dich hiermit…$"

EverGrandeCity_ChampionsRoom_Text_MayAdvice:
	.string "MAIKE: {PLAYER}{KUN}!\p"
	.string "Ich muss dir unbedingt einen Rat\n"
	.string "geben,\l"
	.string "bevor du gegen den CHAMP antrittst!$"

EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver:
	.string "MAIKE: Wie? Waswaswas?\p"
	.string "{PLAYER}{KUN}… Das kann nicht sein…\l"
	.string "Es ist schon vorbei?$"

EverGrandeCity_ChampionsRoom_Text_BrendanAdvice:
	.string "BRIX: {PLAYER}!\p"
	.string "Möchtest du nicht ein paar Tipps,\n"
	.string "bevor du den CHAMP herausforderst?$"

EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon:
	.string "BRIX: {PLAYER}!\p"
	.string "Willst du mir etwa sagen…\n"
	.string "Du hast den CHAMP besiegt?!?!?!$"

EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex:
	.string "PROF. BIRK: Siehst du?\n"
	.string "Was habe ich dir gesagt, {RIVAL}?\p"
	.string "Ich wusste, du brauchst dir keine\n"
	.string "Sorgen um {PLAYER}{KUN} zu machen!\p"
	.string "… … … … … … … …\n"
	.string "{PLAYER}{KUN}, du hast es geschafft.\p"
	.string "Als ich hörte, dass du deinen Vater in\n"
	.string "der ARENA von BLÜTENBURG CITY\p"
	.string "besiegt hast, wusste ich, dass du eine\n"
	.string "Chance hast…\p"
	.string "Aber, dass du dann sogar CHAMP\n"
	.string "geworden bist!\p"
	.string "Oh, ja!\p"
	.string "Was ist aus deinem POKéDEX geworden?\n"
	.string "Lass mich mal sehen…$"

EverGrandeCity_ChampionsRoom_Text_BirchCongratulations:
	.string "PROF. BIRK: Also, dann sage ich:\n"
	.string "Herzlichen Glückwunsch!\p"
	.string "Nun kannst du mit Stolz den letzten\n"
	.string "Raum betreten!$"

EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe:
	.string "WASSILI: {PLAYER}{KUN}…\p"
	.string "Nein! Lass es mich richtig ausdrücken!\n"
	.string "\p"
	.string "Neuer CHAMP!\p"
	.string "Komm mit mir.$"

EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside:
	.string "WASSILI: Tut mir Leid, aber…\p"
	.string "Diesen Raum dürfen nur TRAINER\n"
	.string "betreten, die CHAMPs geworden sind.\p"
	.string "Warte bitte draußen mit dem PROFESSOR.$"

EverGrandeCity_ChampionsRoom_Text_MayCongratulations:
	.string "MAIKE: Grummel…\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Ich mache nur Spaß! Ist schon okay!\n"
	.string "So sind die Regeln!\p"
	.string "{PLAYER}{KUN}!\n"
	.string "Ehrlich. Herzlichen Glückwunsch!$"

EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations:
	.string "BRIX: … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Na, wenn es die Regeln so bestimmen…\p"
	.string "{PLAYER}, das ist dein Tag!\n"
	.string "Herzlichen Glückwunsch!$"

