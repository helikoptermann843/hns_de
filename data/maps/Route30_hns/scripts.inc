Route30_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route30_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route30_OnFrame
	.byte 0

Route30_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route30_OnFrame::
	map_script_2 VAR_CHERRYGROVE_CITY_STATE, 2, Route30_EventScript_ElmCall_Trigger
	.2byte 0

Route30_EventScript_Boy::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, Route30_EventScript_Boy2
	msgbox Route30_Text_YoungsterDirectionsToMrPokemon, MSGBOX_DEFAULT
	closemessage
	release
	end

Route30_EventScript_Boy2::
	lock
	faceplayer
	msgbox Route30_Text_YoungsterEveryoneIsBattling, MSGBOX_DEFAULT
	closemessage
	release
	end

Route30_EventScript_Girl::
	lock
	faceplayer
	msgbox Route30_Text_CooltrainerF, MSGBOX_DEFAULT
	closemessage
	release
	end

Route30_EventScript_Youngster_Joey_Fighting::
	lock
	msgbox Route30_Text_UseTackle, 	MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement LOCALID_ROUTE_30_JOEY, Common_Movement_QuestionMark
	delay 55
	waitmovement LOCALID_ROUTE_30_JOEY
	faceplayer
	msgbox Route30_Text_ThisIsABigBattle, MSGBOX_AUTOCLOSE
	waitmessage
	turnobject LOCALID_ROUTE_30_JOEY DIR_NORTH
	release
	end


Route30_EventScript_Youngster_Joey::
	trainerbattle_single TRAINER_JOEY_HNS, Route30_Text_YoungsterJoey1Seen, Route30_Text_YoungsterJoey1Beaten, Route30_EventScript_RegisterJoey
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route30_EventScript_RematchJoey
	msgbox Route30_Text_YoungsterJoey1After, MSGBOX_AUTOCLOSE
	end

Route30_EventScript_RegisterJoey::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route30_Text_JoeyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_JOEY_HNS
	release
	end

Route30_EventScript_RematchJoey::
	trainerbattle_rematch TRAINER_JOEY_HNS, Route30_Text_JoeyRematchIntro, Route30_Text_JoeyRematchDefeat
	msgbox Route30_Text_JoeyPostRematch, MSGBOX_AUTOCLOSE
	end

Route30_EventScript_Youngster_Mikey::
	trainerbattle_single TRAINER_MIKEY_HNS, Route30_Text_YoungsterMikeySeen, Route30_Text_YoungsterMikeyBeaten
	msgbox Route30_Text_YoungsterMikeyAfter, MSGBOX_AUTOCLOSE
	end

Route30_EventScript_Bugcatcher_Don::
	trainerbattle_single TRAINER_DON_HNS, Route30_Text_BugCatcherDonSeen, Route30_Text_BugCatcherDonBeaten
	msgbox Route30_Text_BugCatcherDonAfter, MSGBOX_AUTOCLOSE
	end

Route30_EventScript_ElmCall_Trigger::
	lock
	setspeaker Route30_Text_ElmName
	pokenavcall Route30_Text_Elm_Disaster
	waitmessage
	delay 30
	setvar VAR_CHERRYGROVE_CITY_STATE, 3
	release
	end

Route30_EventScript_Sign::
	lock
	msgbox Route30_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end

Route30_EventScript_TrainerTips::
	lock
	msgbox Route30_Text_TrainerTips, MSGBOX_SIGN
	closemessage
	release
	end

Route30_EventScript_Poliwag::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POLIWAG, CRY_MODE_NORMAL
	msgbox Route30_Text_Poliwag, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route30_EventScript_Mailbox::
	msgbox Route30_Text_Mailbox, MSGBOX_SIGN
	end

Route30_Text_Mailbox:
	.string "Das Haus von Mr. Pokémon$"

Route30_Text_UseTackle:
	.string "Los, Rattfratz!\p"
	.string "Tackle!$"

Route30_Text_ThisIsABigBattle:
	.string "Was willst du? Das hier ist ein sehr\n"
	.string "wichtiger Kampf für mich, ist das klar?\l"
	.string "Lass mich in Ruhe!$"

Route30_Text_YoungsterJoey1Seen:
	.string "Eigentlich bin ich hier, um mein Team\n"
	.string "nach einer Niederlage aufzustocken…\p"
	.string "Aber du wirkst wie ein Schwächling auf\n"
	.string "mich. Prima! Dich knöpfe ich mir vor!$"

Route30_Text_YoungsterJoey1Beaten:
	.string "Schon wieder vermöbelt!$"

Route30_Text_YoungsterJoey1After:
	.string "Benötige ich noch mehr Pokémon,\n"
	.string "um noch besser zu kämpfen?\p"
	.string "Nein! Ich behalte dieses,\n"
	.string "egal was passiert!$"

Route30_Text_YoungsterMikeySeen:
	.string "Du bist doch ein Pokémon-Trainer, oder?\n"
	.string "Liefern wir uns einen Kampf!$"

Route30_Text_YoungsterMikeyBeaten:
	.string "Das ist seltsam.\n"
	.string "Vorhin habe ich haushoch gewonnen…$"

Route30_Text_YoungsterMikeyAfter:
	.string "Es ist ein langer, harter Weg, bis\n"
	.string "man ein guter Trainer wird.\p"
	.string "Aber gut! Ich werde mich im Kampf gegen\n"
	.string "alle möglichen Trainer stählen!$"

Route30_Text_BugCatcherDonSeen:
	.string "Ich suchte Käfer-Pokémon,\n"
	.string "doch ich fand einen Trainer!$"

Route30_Text_BugCatcherDonBeaten:
	.string "Argh! Du bist\n"
	.string "zu stark!$"

Route30_Text_BugCatcherDonAfter:
	.string "Mir sind während des Fangens die\n"
	.string "Pokébälle ausgegangen.\p"
	.string "Ich hätte mehr kaufen sollen…$"

Route30_Text_YoungsterDirectionsToMrPokemon:
	.string "Das Haus von Mr. Pokémon\n"
	.string "ist gleich da vorne!$"

Route30_Text_YoungsterEveryoneIsBattling:
	.string "Jedem macht das Kämpfen Spaß!$"

Route30_Text_CooltrainerF:
	.string "Ich selbst bin keine Trainerin!\p"
	.string "Aber wenn dir ein Trainer in die\n"
	.string "Augen sieht, solltest du dich auf\l"
	.string "einen Kampf vorbereiten!$"

Route30_Text_Sign:
	.string "Route 30\p"
	.string "Viola City - Rosalia City$"

Route30_Text_MrPokemonsHouseDirectionsSign:
	.string "Das Haus von Mr. Pokémon?\n"
	.string "Immer geradeaus!$"

Route30_Text_MrPokemonsHouseSign:
	.string "Das Haus von Mr. Pokémon$"

Route30_Text_TrainerTips:
	.string "Tipps für Trainer\p"
	.string "Wer einem anderen Trainer die\n"
	.string "Pokémon klaut, ist ein Dieb!\p"
	.string "Deshalb dürfen Pokébälle auch nur bei\n"
	.string "wilden Pokémon eingesetzt werden!$"

Route30_Text_JoeyRegister:
    .string "Du bist ziemlich gut!\p"
    .string "Mein Rattfratz will wie immer\n"
    .string "sofort loslegen.\p"
    .string "Es ist mein einziges Pokémon.\n"
    .string "Mit ihm werde ich ein großer\l"
    .string "Trainer werden!\p"
    .string "Lass uns irgendwann wieder\n"
    .string "kämpfen!$"

Route30_Text_JoeyRematchIntro:
    .string "Ich habe versprochen, dass es\n"
    .string "diesmal anders wird! Los geht’s!$"

Route30_Text_JoeyRematchDefeat:
    .string "Ach! Schon wieder verloren!\n"
    .string "So ein Mist!$"

Route30_Text_JoeyPostRematch:
    .string "Ich überprüfe die Attacken\n"
    .string "meines Rattfratz und tüftele\l"
    .string "an neuen Strategien.\p"
    .string "Wenn ich eine gute gefunden\n"
    .string "habe, kämpfen wir wieder!$"

Route30_Text_YoungsterJoeyGiveHPUp:
	.string "Ich habe schon wieder verloren…\n"
	.string "Mann, du bist echt stark!\p"
	.string "Oh ja, fast hätte ich vergessen,\n"
	.string "dir das hier zu geben.\p"
	.string "Benutz es, um noch stärker zu\n"
	.string "werden, okay?\p"
	.string "Ich werde auch stärker werden.$"

Route30_Text_ElmName:
	.string "Lind$"

Route30_Text_Elm_Disaster:
	.string "H-hallo, {PLAYER}?\n"
	.string "Es ist schrecklich!\l"
	.string "Äh… uhm… wie soll ich das erklären?\p"
	.string "Ich weiß ja selbst nicht, wie…\n"
	.string "Jedenfalls ist es ganz schrecklich!\p"
	.string "Bitte, komm schnell zurück!$"


Route30_Text_Poliwag:
	.string "Quapsel: Quap Quaap!$"
