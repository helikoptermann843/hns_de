BattleFrontier_OutsideWest_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition
	.byte 0

BattleFrontier_OutsideWest_OnTransition:
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
	end

BattleFrontier_OutsideWest_EventScript_FerryAttendant::
	lock
	faceplayer
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
	checkitem ITEM_SS_TICKET
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_OutsideWest_EventScript_NoSSTicket
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
	waitmessage
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
	end

BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination::
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_OutsideWest_EventScript_FerryToSlateport
	case 1, BattleFrontier_OutsideWest_EventScript_FerryToLilycove
	case 2, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
	end

BattleFrontier_OutsideWest_EventScript_NoSSTicket::
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_FerryToSlateport::
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
	waitstate
	release
	end

BattleFrontier_OutsideWest_EventScript_FerryToLilycove::
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end

BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination::
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
	waitmessage
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
	end

BattleFrontier_OutsideWest_EventScript_BoardFerry::
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
	hideobjectat LOCALID_FRONTIER_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
	setvar VAR_0x8004, LOCALID_FRONTIER_SS_TIDAL
	call Common_EventScript_FerryDepartIsland
	return

BattleFrontier_OutsideWest_EventScript_CancelFerrySelect::
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_BattleDomeSign::
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
	end

BattleFrontier_OutsideWest_EventScript_BattleFactorySign::
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
	end

BattleFrontier_OutsideWest_EventScript_BattlePikeSign::
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
	end

@ Unused. Of note, Battle Tower is in the East section in the final release
BattleFrontier_OutsideWest_EventScript_UnusedNPC1::
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
	end

@ Unused
BattleFrontier_OutsideWest_EventScript_UnusedNPC2::
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Boy1::
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Fisherman2::
	lock
	faceplayer
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
	waitmessage
	applymovement LOCALID_FRONTIER_FISHERMAN_2, Common_Movement_FaceAwayPlayer
	waitmovement 0
	waitbuttonpress
	release
	end

BattleFrontier_OutsideWest_EventScript_Man1::
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Maniac1::
	lock
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
	end

BattleFrontier_OutsideWest_EventScript_Maniac2::
	lock
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
	end

BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk::
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons, MSGBOX_DEFAULT
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons, MSGBOX_DEFAULT
	closemessage
	delay 25
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	release
	end

BattleFrontier_OutsideWest_EventScript_Camper::
	lock
	faceplayer
	delay 20
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_CamperFaceFactory::
	applymovement LOCALID_FRONTIER_CAMPER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory::
	return

BattleFrontier_OutsideWest_EventScript_Girl::
	lock
	faceplayer
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
	waitmessage
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_GirlShudderNorth
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_GirlShudderSouth
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_GirlShudderWest
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_GirlShudderEast
	waitbuttonpress
	release
	end

BattleFrontier_OutsideWest_EventScript_GirlShudderNorth::
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth
	waitmovement 0
	return

BattleFrontier_OutsideWest_EventScript_GirlShudderSouth::
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth
	waitmovement 0
	return

BattleFrontier_OutsideWest_EventScript_GirlShudderWest::
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest
	waitmovement 0
	return

BattleFrontier_OutsideWest_EventScript_GirlShudderEast::
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast
	waitmovement 0
	return

BattleFrontier_OutsideWest_Movement_GirlShudderNorth:
	walk_in_place_faster_down
	walk_in_place_faster_down
	step_end

BattleFrontier_OutsideWest_Movement_GirlShudderSouth:
	walk_in_place_faster_up
	walk_in_place_faster_up
	step_end

BattleFrontier_OutsideWest_Movement_GirlShudderWest:
	walk_in_place_faster_right
	walk_in_place_faster_right
	step_end

BattleFrontier_OutsideWest_Movement_GirlShudderEast:
	walk_in_place_faster_left
	walk_in_place_faster_left
	step_end

BattleFrontier_OutsideWest_EventScript_Woman2::
	lock
	faceplayer
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
	random 2
	goto_if_eq VAR_RESULT, 1, BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors
	end

BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors::
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors::
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_Fisherman1::
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling, MSGBOX_NPC
	end

@ Unused
BattleFrontier_OutsideWest_EventScript_UnusedNPC3::
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Gentleman::
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Lass::
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_ExpertM::
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Man2::
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Woman1::
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_FatMan1::
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_FatMan2::
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Woman3::
	lock
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_Boy2::
	lock
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_OldMan::
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Man4::
	lock
	faceplayer
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FRONTIER_MAN_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

BattleFrontier_OutsideWest_EventScript_PokefanF::
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_Text_BattleDomeSign:
	.string "Dies ist das KAMPFSTADION!\n"
	.string "Dein Weg zum unschlagbaren Superstar!$"

BattleFrontier_OutsideWest_Text_BattleFactorySign:
	.string "Dies ist die KAMPFFABRIK!\n"
	.string "Hier gibt es die härtesten POKéMON!$"

BattleFrontier_OutsideWest_Text_BattlePikeSign:
	.string "Dies ist die KAMPFIPITIS!\n"
	.string "Welche der drei Bahnen betrittst du?$"

BattleFrontier_OutsideWest_Text_ThisIsBattleTower:
	.string "Dies ist der DUELLTURM.\p"
	.string "TRAINER tragen mit ihren besten\n"
	.string "POKéMON Ausscheidungskämpfe aus.$"

BattleFrontier_OutsideWest_Text_MayISeeYourTicket:
	.string "Hi! Möchtest du mit der Fähre fahren?\n"
	.string "Zeigst du mir bitte dein TICKET?$"

BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard:
	.string "{PLAYER} hat kein TICKET…\p"
	.string "Das tut mir schrecklich Leid.\p"
	.string "Nur mit einem TICKET kannst du mit der\n"
	.string "Fähre fahren.$"

BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo:
	.string "{PLAYER} zückt das TICKET.\p"
	.string "Perfekt! Damit kannst du an Bord!\p"
	.string "Und wo soll die Reise hingehen?$"

BattleFrontier_OutsideWest_Text_SlateportItIs:
	.string "Nach GRAPHITPORT CITY?$"

BattleFrontier_OutsideWest_Text_LilycoveItIs:
	.string "Nach SEEGRASULB CITY?$"

BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime:
	.string "Bitte komm später noch einmal wieder!$"

BattleFrontier_OutsideWest_Text_PleaseBoardFerry:
	.string "Bitte komm an Bord. Wir legen bald ab.$"

BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo:
	.string "Und wo soll die Reise hingehen?$"

BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends:
	.string "Ich bin der Beste aus unserem\n"
	.string "Freundeskreis. Aber hier…\l"
	.string "Hier bin ich echt aufgeschmissen!$"

BattleFrontier_OutsideWest_Text_CantFindBattleTower:
	.string "Ich möchte gerne in den DUELLTURM,\n"
	.string "aber ich finde den einfach nicht,\n"
	.string "obwohl\l"
	.string "ich eine Karte der KAMPFZONE\p"
	.string "habe. Hier ist alles so groß…$"

BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere:
	.string "Ich wollte mich einer Herausforderung\n"
	.string "stellen, sobald ich hier angekommen\n"
	.string "bin. \p"
	.string "Aber auf dem Weg hierhin bin ich\n"
	.string "seekrank geworden… hurps…$"

BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere:
	.string "Weißt du, hier kann nicht einfach\n"
	.string "jeder hinkommen.\p"
	.string "Nur die TRAINER, die durch ihr Talent\n"
	.string "und ihre Stärke aufgefallen sind,\l"
	.string "werden eingeladen.\p"
	.string "Deshalb haben viele TRAINER noch nie\n"
	.string "etwas über die KAMPFZONE gehört.$"

BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons:
	.string "Hey, Brüderchen…\p"
	.string "Bist du sicher, wir können Heraus-\n"
	.string "forderungen annehmen, obwohl wir\l"
	.string "keine POKéMON besitzen?$"

BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons:
	.string "Ääh… Ich bin sicher, dass das geht!\p"
	.string "Denke ich…\p"
	.string "Erinnerst du dich an diesen großen\n"
	.string "unheimlichen Kerl, der sagte “Ich\n"
	.string "leihe\l"
	.string "euch POKéMON!”?$"

BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons:
	.string "Dies ist die KAMPFFABRIK. Hier\n"
	.string "kannst du dir starke POKéMON leihen.\p"
	.string "Ich frage mich nur, wer diese POKéMON\n"
	.string "aufzieht?$"

BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper:
	.string "Ich habe Angst, zur KAMPFIPITIS zu\n"
	.string "gehen. Ich fürchte mich vor VIPITIS…\p"
	.string "Ab-aber ich bin von so weit gekommen,\n"
	.string "ich muss einfach weitergehen!\l"
	.string "… Zitter bibber…$"

BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors:
	.string "Komm, wir spielen Schere Stein Papier!\n"
	.string "Eins, zwei, drei!\p"
	.string "… … … … …\n"
	.string "…$"

BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge:
	.string "Juhuu! Ich habe geeewonnen!!!\n"
	.string "Ich werde die KAMPFIPITIS-Heraus-\l"
	.string "forderung annehmen!$"

BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge:
	.string "Oh jeee…\n"
	.string "Ich habe verloren.\p"
	.string "Heute ist anscheinend nicht mein\n"
	.string "Glückstag. Ich warte mit der Eroberung\l"
	.string "der KAMPFIPITIS bis morgen.$"

BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling:
	.string "Ich glaube, ich bin das einzige Wesen\n"
	.string "hier, das lieber angelt als kämpft.\l"
	.string "Warum auch immer…\p"
	.string "Wie? Hier kann man gar nichts\n"
	.string "fangen?!? Was für eine Enttäuschung…$"

BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol:
	.string "Heute werde ich unter allen Umständen\n"
	.string "so lange kämpfen, bis ich ein SYMBOL\l"
	.string "bekomme!$"

BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome:
	.string "Wie? Du willst dich den Heraus-\n"
	.string "forderungen des KAMPFSTADIONs\l"
	.string "stellen?\p"
	.string "Dann wünsche ich dir viel Glück!\n"
	.string "Wir siegen uns den Weg nach oben und\l"
	.string "treffen uns an der Spitze wieder.$"

BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa:
	.string "Opa, hier drüben!\n"
	.string "Das KAMPFSTADION ist hier!\l"
	.string "Los, Opa, zeig’s ihnen!$"

BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe:
	.string "So, dies ist also das KAMPFSTADION?!?\n"
	.string "Kein GENTLEMAN wird mich besiegen!\p"
	.string "Aber wo ist denn nur der Eingang?$"

BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo:
	.string "Vor nicht allzu langer Zeit gab es\n"
	.string "hier nichts. Nur Ödnis.\p"
	.string "Und nun schau sich einer diesen Ort\l"
	.string "an!\n"
	.string "Unglaublich! Ich werde meine Mutter\p"
	.string "mal\l"
	.string "hierher bringen, damit sie das sieht.$"

BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier:
	.string "Endlich habe ich die KAMPFZONE\n"
	.string "erreicht.\p"
	.string "Mit meinem Aussehen und meinem Talent\n"
	.string "sorge ich bestimmt für Aufsehen.$"

BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople:
	.string "… Kau… … Schmatz…\p"
	.string "Hier sind offensichtlich nur starke\n"
	.string "Typen anwesend.\p"
	.string "… Schmatz… … Kau…$"

BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike:
	.string "… Mampf… … Mampf…\p"
	.string "Vor einiger Zeit habe ich dieses\l"
	.string "ältere\n"
	.string "Mädchen an der KAMPFIPITIS getroffen.\p"
	.string "\p"
	.string "Ihre Augen hatten einen bösartigen\n"
	.string "Ausdruck, sie machte einem richtig\l"
	.string "Angst.\p"
	.string "… Mampf… … Mampf…\p"
	.string "Sie wurde richtig giftig: “KÖNNTEST DU\n"
	.string "WOHL ENDLICH AUFHÖREN ZU ESSEN?!?”\p"
	.string "Dann hat sie sich lustig über mich\n"
	.string "gemacht.\p"
	.string "Das war wirklich haarsträubend\n"
	.string "unheimlich. Ehrlich!\p"
	.string "… Mampf… … Mampf…$"

BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet:
	.string "Was? Hör dir doch mal selber zu!\n"
	.string "Das ist doch wirklich popelig!\p"
	.string "Das letzte Mal als ICH ihm zugejubelt\n"
	.string "habe, haben sich unsere Augen\p"
	.string "getroffen. Es hat richtig gefunkt\n"
	.string "zwischen uns!$"

BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering:
	.string "WIIIIIE BITTE?!?\n"
	.string "HAH! Ha ha ha!\p"
	.string "Der STADIONSTAR hat doch nur in deine\n"
	.string "Richtung geschaut, weil ICH ihm\l"
	.string "zugejubelt habe!$"

BattleFrontier_OutsideWest_Text_DomeAceIsMine:
	.string "Oh, bitte, vertragt euch!\n"
	.string "Hört auf zu streiten!\p"
	.string "Ihr solltet lieber einem ARENALEITER\n"
	.string "zujubeln!\p"
	.string "Der STADIONSTAR ist mein großes Idol!\n"
	.string "Ihr seid zu jung, um sein Talent zu\l"
	.string "verstehen!$"

BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers:
	.string "Diese Leute da, die sich gerade in den\n"
	.string "Haaren liegen…\p"
	.string "Es ist schwer zu glauben, aber das\n"
	.string "waren mal TRAINER. Gute TRAINER sogar!\n"
	.string "\p"
	.string "Sie waren stark und auch berühmt.\p"
	.string "Aber ein bestimmter TRAINER hat sie\n"
	.string "bei\n"
	.string "einem Turnier mit Pauken und Trompeten\l"
	.string "besiegt.\p"
	.string "Trotz ihrer Niederlage haben sie sich\n"
	.string "regelrecht in ihn verliebt.\p"
	.string "Nun leben sie ihr Leben als Fans und\n"
	.string "jubeln diesem TRAINER jeden Tag im\l"
	.string "KAMPFSTADION zu.$"

BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier:
	.string "Ich habe gehört, dass jemand gehört\n"
	.string "hat, ein PKMN mit einem ungewöhnlich\l"
	.string "langen Schweif sei hier in der\p"
	.string "KAMPFZONE aufgetaucht. Das ist\n"
	.string "bestimmt anbetungswürdig…\p"
	.string "Die Herausforderungen können warten.\n"
	.string "Ich will dieses hübsche Geschöpf\l"
	.string "finden!$"

