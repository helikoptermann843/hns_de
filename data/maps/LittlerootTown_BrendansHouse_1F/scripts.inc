LittlerootTown_BrendansHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
	.byte 0

LittlerootTown_BrendansHouse_1F_OnLoad:
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
	end

LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
	return

LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
	return

LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
	return

LittlerootTown_BrendansHouse_1F_OnTransition:
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
	end

LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 4, 5
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 9, 8
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return

@ Many of the below scripts have no gender check because they assume youre in the correct house
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
LittlerootTown_BrendansHouse_1F_OnFrame:
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
	.2byte 0

LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
	lockall
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
	waitmovement 0
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
	waitstate
	releaseall
	end

LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
	lockall
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
	setvar VAR_0x8005, MALE
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
	end

LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
	lockall
	setvar VAR_0x8004, MALE
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
	end

LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
	lockall
	playse SE_PIN
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
	waitmovement 0
	special GetRivalSonDaughterString
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
	setflag FLAG_MET_RIVAL_MOM
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
	releaseall
	end

LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
	lockall
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
	setvar VAR_0x8005, MALE
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
	end

LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
	lockall
	setvar VAR_0x8008, 0
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
	end

LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
	lockall
	setvar VAR_0x8008, 1
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
	end

LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
	lockall
	setvar VAR_0x8008, 2
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
	end

LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
	playse SE_EXIT
	delay 10
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
	delay 30
	playse SE_PIN
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
	waitmovement 0
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
	playse SE_EXIT
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	delay 30
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
	walk_in_place_faster_left
	walk_left
	walk_in_place_faster_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
	walk_in_place_faster_right
	walk_right
	walk_in_place_faster_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
	delay_16
	delay_8
	walk_in_place_faster_right
	step_end

LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
	delay_16
	delay_8
	walk_in_place_faster_right
	delay_16
	delay_16
	walk_in_place_faster_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
	walk_in_place_faster_right
	walk_right
	walk_in_place_faster_up
	walk_up
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
	walk_in_place_faster_right
	walk_right
	walk_in_place_faster_up
	walk_up
	walk_up
	walk_in_place_faster_left
	walk_left
	walk_in_place_faster_up
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
	walk_in_place_faster_left
	walk_left
	walk_in_place_faster_up
	walk_up
	walk_up
	step_end

PlayersHouse_1F_Text_IsntItNiceInHere:
	.string "Mutter: Siehst du, {PLAYER}?\n"
	.string "Hier ist es doch auch schön, oder\l"
	.string "nicht?$"

PlayersHouse_1F_Text_MoversPokemonGoSetClock:
	.string "Die Pokémon machen für uns den Umzug,\n"
	.string "räumen alles ein und machen sauber.\l"
	.string "Das ist doch so etwas von praktisch!\p"
	.string "{PLAYER}, dein Zimmer ist oben.\n"
	.string "Schau es dir doch mal an, Spatz!\p"
	.string "Vati hat dir eine neue Uhr zur\n"
	.string "Begrüßung geschenkt.\l"
	.string "Vergiss nicht, sie einzustellen!$"

PlayersHouse_1F_Text_ArentYouInterestedInRoom:
	.string "Mutter: Nun, {PLAYER}?\p"
	.string "Bist du nicht neugierig, dein neues\n"
	.string "Zimmer zu sehen?$"

PlayersHouse_1F_Text_GoSetTheClock:
	.string "Mutter: {PLAYER}, Schatz!\p"
	.string "Stell bitte die Uhr in deinem Zimmer\n"
	.string "ein.$"

PlayersHouse_1F_Text_OhComeQuickly:
	.string "Mutter: Oh! {PLAYER}! {PLAYER}!\n"
	.string "Schnell! Komm schnell her!$"

PlayersHouse_1F_Text_MaybeDadWillBeOn:
	.string "Mutter: Da! Da ist die Arena von\n"
	.string "Blütenburg City!\l"
	.string "Ich glaube, Vati ist im Fernsehen!$"

PlayersHouse_1F_Text_ItsOverWeMissedHim:
	.string "Mutter: Oh… Schon vorbei.\p"
	.string "Ich glaube, Vati war im Fernsehen und\n"
	.string "wir haben ihn verpasst. Schade!$"

PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
	.string "Ach ja.\n"
	.string "Einer von Vatis Freunden lebt hier.\p"
	.string "Prof. Birk ist sein Name.\p"
	.string "Er lebt gleich nebenan, daher solltest\n"
	.string "du hinübergehen und dich vorstellen.$"

PlayersHouse_1F_Text_SeeYouHoney:
	.string "Mutter: Bis später, Spatz!$"

PlayersHouse_1F_Text_DidYouMeetProfBirch:
	.string "Mutter: Hast du dich bei Prof. Birk\n"
	.string "vorgestellt?$"

PlayersHouse_1F_Text_YouShouldRestABit:
	.string "Mutter: Wie geht es dir, {PLAYER}?\n"
	.string "Du siehst müde aus.\p"
	.string "Ich denke, du solltest dich etwas\n"
	.string "ausruhen.$"

PlayersHouse_1F_Text_TakeCareHoney:
	.string "Mutter: Pass auf dich auf, Schatz!$"

PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
	.string "Mutter: Oh! Hat Vati dir den Orden\n"
	.string "gegeben?\p"
	.string "Dann ist das hier von deiner Mutti!$"

PlayersHouse_1F_Text_DontPushYourselfTooHard:
	.string "Überanstreng dich nicht, Liebes.\n"
	.string "Du kannst jederzeit nach Hause kommen.\n"
	.string "\p"
	.string "Und jetzt nichts wie los, Schatz!$"

PlayersHouse_1F_Text_IsThatAPokenav:
	.string "Mutter: Was hast du denn da Schönes?\n"
	.string "Einen Pokénav? Den hat dir jemand von\l"
	.string "Devon gegeben?\p"
	.string "Und, Liebling? Möchtest du nicht deine\n"
	.string "Mutter ins Verzeichnis aufnehmen?\p"
	.string "… … …$"

PlayersHouse_1F_Text_RegisteredMom:
	.string "Mutter wurde im Pokénav-Verzeichnis\n"
	.string "eingetragen.$"

PlayersHouse_1F_Text_Vigoroth1:
	.string "Fugiiiiih!$"

PlayersHouse_1F_Text_Vigoroth2:
	.string "Huggoh, uggo uggo…$"

PlayersHouse_1F_Text_ReportFromPetalburgGym:
	.string "Interviewer: Das war unsere Reportage\n"
	.string "über die Arena in Blütenburg City.$"

PlayersHouse_1F_Text_TheresAMovieOnTV:
	.string "Da läuft gerade ein Film.\p"
	.string "Zwei Männer tanzen auf riesengroßen\n"
	.string "Klaviertasten.\p"
	.string "Aber es wird Zeit aufzubrechen!$"

PlayersHouse_1F_Text_RunningShoesManual:
	.string "Dies ist die Bedienungsanleitung für\n"
	.string "die Turbotreter.\p"
	.string "“Halte den B-Knopf gedrückt,\n"
	.string "wenn du diese Turbotreter anhast,\l"
	.string "um zu rennen!\p"
	.string "Schlüpf in diese Turbotreter und\n"
	.string "erobere die Welt da draußen!”$"

PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
	.string "Vater: Hm?\p"
	.string "Hey, das ist ja {PLAYER}!\p"
	.string "Du hast uns ja schon lange nicht mehr\n"
	.string "besucht… Du siehst irgendwie\l"
	.string "stärker aus.\p"
	.string "Das ist zumindest mein Eindruck. Aber\n"
	.string "dein alter Herr gibt noch nicht auf.\p"
	.string "Oh, ich habe hier etwas für dich.\n"
	.string "Das soll ich dir von einem Mr. Brack\l"
	.string "geben.$"

PlayersHouse_1F_Text_PortsInSlateportLilycove:
	.string "Vater: Hm, ein Ticket für eine Fähre?\n"
	.string "\p"
	.string "Ich weiß, dass es in Graphitport City\n"
	.string "und Seegrasulb City Anlegestellen für\l"
	.string "Fähren gibt.$"

PlayersHouse_1F_Text_BetterGetBackToGym:
	.string "Ich muss jetzt wieder in die Arena von\n"
	.string "Blütenburg City.\p"
	.string "Ich danke dir, dass du dich während\n"
	.string "meiner Abwesenheit um das Haus\l"
	.string "kümmerst.$"

PlayersHouse_1F_Text_DadShouldStayLonger:
	.string "Mutter: Das ist wieder typisch dein\n"
	.string "Vater…\p"
	.string "Da kommt er das erste Mal nach ewigen\n"
	.string "Zeiten nach Hause und spricht nur über\l"
	.string "Pokémon.\p"
	.string "Er sollte sich lieber ausruhen und\n"
	.string "etwas hier bleiben!$"

PlayersHouse_1F_Text_IsThatABreakingStory:
	.string "Mutter: Sind das Sondernachrichten?$"

PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
	.string "Hier sind die Sondernachrichten.\p"
	.string "Wir haben die Meldung erhalten, dass\n"
	.string "in der Hoenn-Region ein Grssss…\l"
	.string "farbiges Pokémon gesichtet wurde.\p"
	.string "Die Identität des Pokémon konnte\n"
	.string "bisher nicht festgestellt werden.\p"
	.string "Und damit schalten wir wieder um in\n"
	.string "unser laufendes Programm.$"

PlayersHouse_1F_Text_WhatColorDidTheySay:
	.string "Mutter: {PLAYER}, hast du das gehört?!?\p"
	.string "Was hat der Sprecher gesagt? Welche\n"
	.string "Farbe hat das Pokémon?$"

PlayersHouse_1F_Text_StillUnknownPokemon:
	.string "Mutter: Also, ist das nicht\n"
	.string "unglaublich?\n"
	.string "Es gibt tatsächlich noch unbekannte\l"
	.string "Pokémon!$"
