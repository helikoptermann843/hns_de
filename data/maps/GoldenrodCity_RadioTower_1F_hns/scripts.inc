GoldenrodCity_RadioTower_1F_hns_MapScripts::
	.byte 0

RadioTower1F_EventScript_Grunt::
	lock
	faceplayer
	msgbox RadioTower1F_Text_GruntM3Seen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_2_HNS,  RadioTower1F_Text_GruntM3Beaten
	msgbox RadioTower1F_Text_GruntM3After, MSGBOX_AUTOCLOSE
	turnobject LOCALID_GOLDENROD_RADIOTOWER_GRUNT, DIR_EAST
	applymovement2 LOCALID_GOLDENROD_RADIOTOWER_GRUNT, RadioTower1F_Movement_Rocket
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_GOLDENROD_RADIOTOWER_GRUNT
	setflag FLAG_HIDE_ROCKET_GOLDENROD_RADIOTOWER_1
	release
	end

RadioTower1F_Movement_Rocket::
	walk_in_place_right
	step_end

RadioTower1F_EventScript_Lass::
	lock
	faceplayer
	msgbox RadioTower1F_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_Youngster::
	lock
	faceplayer
	msgbox RadioTower1F_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_Whitney::
	lock
	faceplayer
	msgbox RadioTower1F_Text_Whitney1, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_GOLDENROD_RADIOTOWER_WHITNEY, DIR_SOUTH
	release
	end

RadioTower1F_Text_Whitney1::
	.string "BIANKA: Hi!\p"
	.string "Ich bin Bianka!\p"
	.string "Ich habe von einem Quiz\n"
	.string "gehört, bei dem man ein RADIO,\l"
	.string "gewinnen kann, also kam ich her...\p"
	.string "Aber es ist so schwer!$"

RadioTower1F_Text_Whitney2::
	.string "BIANKA: Wow, du hast es!\p"
	.string "Ich war mir sicher die Antwort\n"
	.string "auf die dritte Frage war Aprikoko!\l"
	.string "Oops!\p"
	.string "Zeit das ich zur Arena zurückkehre!$"

RadioTower1F_EventScript_Reception::
	lock
	faceplayer
	msgbox RadioTower1F_Text_ReceptionistWelcome, MSGBOX_DEFAULT
	goto_if_unset FLAG_ENABLE_RADIO, RadioTower1F_EventScript_ReceptionOfferQuiz
	msgbox RadioTower1F_Text_ReceptionistNoTours, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionOfferQuiz::
	msgbox RadioTower1F_Text_RadioCardWomanOfferQuiz, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, RadioTower1F_EventScript_ReceptionQuiz1
	msgbox RadioTower1F_Text_DeclineQuiz, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionQuiz1::
	msgbox RadioTower1F_Text_QuizQuestion1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, RadioTower1F_EventScript_ReceptionQuiz2
	msgbox RadioTower1F_Text_WrongAnswer, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionQuiz2::
	msgbox RadioTower1F_Text_QuizQuestion2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, RadioTower1F_EventScript_ReceptionQuiz3
	msgbox RadioTower1F_Text_WrongAnswer, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionQuiz3::
	msgbox RadioTower1F_Text_QuizQuestion3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, RadioTower1F_EventScript_ReceptionQuiz4
	msgbox RadioTower1F_Text_WrongAnswer, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionQuiz4::
	msgbox RadioTower1F_Text_QuizQuestion4, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, RadioTower1F_EventScript_ReceptionQuiz5
	msgbox RadioTower1F_Text_WrongAnswer, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionQuiz5::
	msgbox RadioTower1F_Text_QuizQuestion5, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, RadioTower1F_EventScript_ReceptionGiveRadio
	msgbox RadioTower1F_Text_WrongAnswer, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionGiveRadio::
	msgbox RadioTower1F_Text_QuizWin, MSGBOX_DEFAULT
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_RADIO
	waitfanfare
	msgbox RadioTower1F_Text_TuneIn, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_GOLDENROD_RADIOTOWER_WHITNEY, Common_Movement_ExclamationMark
	delay 60
	turnobject LOCALID_GOLDENROD_RADIOTOWER_WHITNEY, DIR_EAST
	delay 20
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox RadioTower1F_Text_Whitney2, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_GOLDENROD_RADIOTOWER_WHITNEY, GoldenrodCity_RadioTower_4F_Movement_WhitneyLeave
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_GOLDENROD_RADIOTOWER_WHITNEY
	setflag FLAG_ENABLE_RADIO
	setflag FLAG_HIDE_GOLDENROD_BEAUTY
	setvar VAR_GOLDENROD_CITY_STATE, 2
	release
	end

GoldenrodCity_RadioTower_4F_Movement_WhitneyLeave:
	face_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_in_place_down
	step_end

GoldenrodCity_RadioTower_1F_EventScript_Sign::
	lock
	msgbox RadioTower1F_Text_Directory, MSGBOX_SIGN
	closemessage
	release
	end

RadioTower1F_Text_ReceptionistWelcome:
	.string "Willkommen!$"

RadioTower1F_Text_ReceptionistNoTours:
	.string "Guten Tag! Leider\n"
	.string "bieten wir heute keine Führungen an.$"

RadioTower1F_Text_RadioCardWomanOfferQuiz:
	.string "Bei uns läuft momentan\n"
	.string "ein besonderes Quiz.\p"
	.string "Beantworte die\n"
	.string "fünf Fragen richtig, um ein\l"
	.string "RADIO-MODUL zu gewinnen.\p"
	.string "Stecke es in den COM, um\n"
	.string "überall und zu jeder Zeit\l"
	.string "Radio hören zu können.\p"
	.string "Möchtest du am Quiz teilnehmen?$"

RadioTower1F_Text_QuizQuestion1:
	.string "Frage 1:\p"
	.string "Gibt es ein Pokémon, das nur am\n"
	.string "Tag erscheint?$"

RadioTower1F_Text_QuizQuestion2:
	.string "Richtig! Frage 2:\p"
	.string "Ist diese Aussage korrekt?\p"
	.string "Man kann im SHOP keine Beere\n"
	.string "kaufen.$"

RadioTower1F_Text_QuizQuestion3:
	.string "Volltreffer! Frage 3:\p"
	.string "Benutzt Kurt, der Pokéball-\n"
	.string "Erbauer, Aprikoko als Zutaten?$"

RadioTower1F_Text_QuizQuestion4:
	.string "Bis hierher gut!\n"
	.string "Frage 4:\p"
	.string "Ist Falk der Leiter von\n"
	.string "VIOLA, der Vogel-Pokémon nutzt?$"

RadioTower1F_Text_QuizQuestion5:
	.string "Wow! Wieder richtig!\n"
	.string "Hier die letzte Frage:\p"
	.string "Haben die Slots im GAME CORNER\n"
	.string "Glumanda auf den Walzen?$"

RadioTower1F_Text_QuizWin:
	.string "Bingo! Volltreffer!\n"
	.string "Glückwunsch!\p"
	.string "Hier dein Preis: ein RADIO!$"

RadioTower1F_Text_PokegearRadio:
	.string "{PLAYER}s Pokécom\n"
	.string "kann jetzt Radio empfangen!$"

RadioTower1F_Text_TuneIn:
	.string "Bitte hör in unsere Radio-\n"
	.string "sendungen rein.$"

RadioTower1F_Text_WrongAnswer:
	.string "Oh mann,\n"
	.string "Tut mir leid, leider falsch.\p"
	.string "Versuch es nochmal!$"

RadioTower1F_Text_DeclineQuiz:
	.string "Oh. Verstehe.\p"
	.string "Komm wieder, falls du es dir\n"
	.string "anders überlegst.$"

RadioTower1F_Text_Lass:
	.string "Ben ist ein großartiger DJ.\p"
	.string "Seine sonore Stimme lässt mich\n"
	.string "dahinschmelzen!$"

RadioTower1F_Text_Youngster:
	.string "Ich liebe Margit vom POKéMON-\n"
	.string "TALK.\p"
	.string "Ich kenne aber nur ihre Stimme.$"

RadioTower1F_Text_GruntM3Seen:
	.string "Wir haben endlich den\n"
	.string "Radioturm übernommen!\p"
	.string "Jetzt wird jeder die wahre Macht\n"
	.string "von TEAM ROCKET spüren!\p"
	.string "Wir zeigen dir, wie furchtbar wir\n"
	.string "sein können!$"

RadioTower1F_Text_GruntM3Beaten:
	.string "Zu stark! Tut mir leid, Boss…$"

RadioTower1F_Text_GruntM3After:
	.string "Du bist zu stark.\p"
	.string "Unser Plan könnte scheitern.\n"
	.string "Ich muss die anderen warnen…$"

RadioTower1F_Text_Directory:
	.string "EG REZEPTION 1S VERKAUF\p"
	.string "2S PERSONAL 3S PRODUKTION\p"
	.string "4S BÜRO DES INTENDANTEN$"


GoldenrodCity_RadioTower_1F_EventScript_LotteryClerk::
	lock
	faceplayer
	dotimebasedevents
	goto_if_ne VAR_POKELOT_PRIZE_ITEM, ITEM_NONE, GoldenrodCity_RadioTower_1F_EventScript_GivePrizeFromEarlier
	goto_if_set FLAG_DAILY_PICKED_LOTO_TICKET, GoldenrodCity_RadioTower_1F_EventScript_ComeBackTomorrow
	msgbox GoldenrodCity_RadioTower_1F_Text_LotteryCornerDrawTicket, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_RadioTower_1F_EventScript_PleaseVisitAgain
	setflag FLAG_DAILY_PICKED_LOTO_TICKET
	message GoldenrodCity_RadioTower_1F_Text_PleasePickTicket
	waitmessage
	special RetrieveLotteryNumber
	copyvar VAR_0x8008, VAR_RESULT
	special BufferLottoTicketNumber
	msgbox GoldenrodCity_RadioTower_1F_Text_TicketNumberIsXPleaseWait, MSGBOX_DEFAULT
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	playse SE_PC_ON
	@special DoLotteryCornerComputerEffect
	special PickLotteryCornerTicket
	delay 220
	@special EndLotteryCornerComputerEffect
	delay 10
	applymovement 4, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_eq VAR_0x8004, 0, GoldenrodCity_RadioTower_1F_EventScript_NoMatch
	incrementgamestat GAME_STAT_WON_POKEMON_LOTTERY
	call_if_eq VAR_0x8006, 0, GoldenrodCity_RadioTower_1F_EventScript_TicketMatchPartyMon
	call_if_eq VAR_0x8006, 1, GoldenrodCity_RadioTower_1F_EventScript_TicketMatchPCMon
	bufferitemname STR_VAR_1, VAR_0x8005
	call_if_eq VAR_0x8004, 1, GoldenrodCity_RadioTower_1F_EventScript_TwoDigitMatch
	call_if_eq VAR_0x8004, 2, GoldenrodCity_RadioTower_1F_EventScript_ThreeDigitMatch
	call_if_eq VAR_0x8004, 3, GoldenrodCity_RadioTower_1F_EventScript_FourDigitMatch
	call_if_eq VAR_0x8004, 4, GoldenrodCity_RadioTower_1F_EventScript_FullMatch
	giveitem VAR_0x8005
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_RadioTower_1F_EventScript_RecordPrizeNoRoom
	special TryPutLotteryWinnerReportOnAir
	goto GoldenrodCity_RadioTower_1F_EventScript_PleaseVisitAgain2
	end

GoldenrodCity_RadioTower_1F_EventScript_TicketMatchPartyMon::
	msgbox GoldenrodCity_RadioTower_1F_Text_TicketMatchesPartyMon, MSGBOX_DEFAULT
	return

GoldenrodCity_RadioTower_1F_EventScript_TicketMatchPCMon::
	msgbox GoldenrodCity_RadioTower_1F_Text_TicketMatchesPCMon, MSGBOX_DEFAULT
	return

GoldenrodCity_RadioTower_1F_EventScript_ComeBackTomorrow::
	msgbox GoldenrodCity_RadioTower_1F_Text_ComeBackTomorrow, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_RadioTower_1F_EventScript_PleaseVisitAgain::
	msgbox GoldenrodCity_RadioTower_1F_Text_PleaseVisitAgain, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_RadioTower_1F_EventScript_NoMatch::
	msgbox GoldenrodCity_RadioTower_1F_Text_NoNumbersMatched, MSGBOX_DEFAULT
	goto GoldenrodCity_RadioTower_1F_EventScript_PleaseVisitAgain2
	end

GoldenrodCity_RadioTower_1F_EventScript_PleaseVisitAgain2::
	msgbox GoldenrodCity_RadioTower_1F_Text_PleaseVisitAgain2, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_RadioTower_1F_EventScript_TwoDigitMatch::
	msgbox GoldenrodCity_RadioTower_1F_Text_TwoDigitsMatched, MSGBOX_DEFAULT
	return

GoldenrodCity_RadioTower_1F_EventScript_ThreeDigitMatch::
	msgbox GoldenrodCity_RadioTower_1F_Text_ThreeDigitsMatched, MSGBOX_DEFAULT
	return

GoldenrodCity_RadioTower_1F_EventScript_FourDigitMatch::
	msgbox GoldenrodCity_RadioTower_1F_Text_FourDigitsMatched, MSGBOX_DEFAULT
	return

GoldenrodCity_RadioTower_1F_EventScript_FullMatch::
	msgbox GoldenrodCity_RadioTower_1F_Text_AllFiveDigitsMatched, MSGBOX_DEFAULT
	return

GoldenrodCity_RadioTower_1F_EventScript_RecordPrizeNoRoom::
	copyvar VAR_POKELOT_PRIZE_PLACE, VAR_0x8004
	copyvar VAR_POKELOT_PRIZE_ITEM, VAR_0x8005
	goto GoldenrodCity_RadioTower_1F_EventScript_NoRoomForPrize
	end

GoldenrodCity_RadioTower_1F_EventScript_NoRoomForPrize::
	msgbox GoldenrodCity_RadioTower_1F_Text_NoRoomForThis, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_RadioTower_1F_EventScript_GivePrizeFromEarlier::
	msgbox GoldenrodCity_RadioTower_1F_Text_PrizeWeveBeenHolding, MSGBOX_DEFAULT
	giveitem VAR_POKELOT_PRIZE_ITEM
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_RadioTower_1F_EventScript_NoRoomForPrize
	copyvar VAR_0x8004, VAR_POKELOT_PRIZE_PLACE
	copyvar VAR_0x8005, VAR_POKELOT_PRIZE_ITEM
	special TryPutLotteryWinnerReportOnAir
	setvar VAR_POKELOT_PRIZE_ITEM, ITEM_NONE
	setvar VAR_POKELOT_PRIZE_PLACE, 0
	release
	end

GoldenrodCity_RadioTower_1F_Text_LotteryCornerDrawTicket:
	.string "Das ist die Pokémon-Lotterie.\p"
	.string "wenn die Nummer des Tickets\n"
	.string "mit der eines deiner Pokémon\l"
	.string "übereinstimmt, gewinnst du einen\p"
	.string "Preis.\p"
	.string "Möchtest du teilnehmen??$"

GoldenrodCity_RadioTower_1F_Text_ComeBackTomorrow:
	.string "Bitte komm morgen wieder.$"

GoldenrodCity_RadioTower_1F_Text_PleaseVisitAgain:
	.string "Komm gerne wieder.$"

GoldenrodCity_RadioTower_1F_Text_PleasePickTicket:
	.string "Bitte wähle ein LOTO TICKET.\n"
	.string "…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}$"

GoldenrodCity_RadioTower_1F_Text_TicketNumberIsXPleaseWait:
	.string "Die Nummer ist {STR_VAR_1}.\p"
	.string "Ich prüfe die Nummer,\n"
	.string "ob sie mit einem deiner\l"
	.string "Pokémon übereinstimmt. Warte bitte.$"

GoldenrodCity_RadioTower_1F_Text_TicketMatchesPartyMon:
	.string "Glückwunsch!\p"
	.string "Die ID-Nummer deines\n"
	.string "{STR_VAR_1} stimmt mit\l"
	.string "deinem Ticket überein!$"

GoldenrodCity_RadioTower_1F_Text_TicketMatchesPCMon:
	.string "Glückwunsch!\p"
	.string "Die ID-Nummer deines\n"
	.string "{STR_VAR_1} stimmt mit\l"
	.string "deinem Ticket überein!$"

GoldenrodCity_RadioTower_1F_Text_NoNumbersMatched:
	.string "Tut mir leid.\n"
	.string "Leider kein Treffer.$"

GoldenrodCity_RadioTower_1F_Text_TwoDigitsMatched:
	.string "Zwei Nummern sind identisch,\n"
	.string "du gewinnst den Trostpreis!\l"
	.string "Du gewinnst {STR_VAR_1}!$"

GoldenrodCity_RadioTower_1F_Text_ThreeDigitsMatched:
	.string "Drei Nummern sind identisch,\n"
	.string "zweiter Preis!\l"
	.string "Du gewinnst {STR_VAR_1}!$"

GoldenrodCity_RadioTower_1F_Text_FourDigitsMatched:
	.string "Vier nummern sind identisch,\n"
	.string "Erster Preis!\l"
	.string "Du gewinnst {STR_VAR_1}!$"

GoldenrodCity_RadioTower_1F_Text_AllFiveDigitsMatched:
	.string "Oh mein Gott! Volltreffer!\p"
	.string "Du gewinnst den Jackpot!\n"
	.string "Du gewinnst {STR_VAR_1}!$"

GoldenrodCity_RadioTower_1F_Text_NoRoomForThis:
	.string "Oh?\n"
	.string "Du hast dafür keinen Platz.\p"
	.string "Bitte schaffe Platz in\n"
	.string "deiner Tasche.$"

GoldenrodCity_RadioTower_1F_Text_PrizeWeveBeenHolding:
	.string "{PLAYER}?\n"
	.string "Ich habe dich erwartet.\p"
	.string "Hier ist der Preis, den wir\n"
	.string "für dich aufbewahrt haben.$"

GoldenrodCity_RadioTower_1F_Text_PleaseVisitAgain2:
	.string "Besuch uns gern wieder.$"


