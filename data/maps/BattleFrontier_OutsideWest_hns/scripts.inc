BattleFrontier_OutsideWest_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition_hns
	.byte 0

BattleFrontier_OutsideWest_OnTransition_hns:
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
	end

BattleFrontier_OutsideWest_EventScript_EventScript_Sailor_hns::
	lock
	faceplayer
	msgbox FarawayIsland_Entrance_Text_SailorReturn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_AsYouLike_hns
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	hideobjectat LOCALID_BATTLE_FRONTIER_SAILOR_HNS, MAP_BATTLE_FRONTIER_OUTSIDE_WEST_HNS
	setvar VAR_0x8004, LOCALID_FARAWAY_BATTLE_FRONTIER_HNS_SS_TIDAL
	call Common_EventScript_FerryDepartIsland
	warpsilent MAP_OLIVINE_CITY_PORT_INSIDE_HNS, 8, 16
	waitstate
	release
	end

BattleFrontier_OutsideWest_EventScript_AsYouLike_hns::
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_BattleDomeSign_hns::
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign_hns, MSGBOX_SIGN
	end

BattleFrontier_OutsideWest_EventScript_BattleFactorySign_hns::
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign_hns, MSGBOX_SIGN
	end

BattleFrontier_OutsideWest_EventScript_BattlePikeSign_hns::
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign_hns, MSGBOX_SIGN
	end

@ Unused. Of note, Battle Tower is in the East section in the final release
BattleFrontier_OutsideWest_EventScript_UnusedNPC1_hns::
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower_hns, MSGBOX_NPC
	end

@ Unused
BattleFrontier_OutsideWest_EventScript_UnusedNPC2_hns::
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Boy1_hns::
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Fisherman2_hns::
	lock
	faceplayer
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere_hns
	waitmessage
	applymovement LOCALID_FRONTIER_FISHERMAN_2, Common_Movement_FaceAwayPlayer
	waitmovement 0
	waitbuttonpress
	release
	end

BattleFrontier_OutsideWest_EventScript_Man1_hns::
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Maniac1_hns::
	lock
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk_hns
	end

BattleFrontier_OutsideWest_EventScript_Maniac2_hns::
	lock
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk_hns
	end

BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk_hns::
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons_hns, MSGBOX_DEFAULT
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons_hns, MSGBOX_DEFAULT
	closemessage
	delay 25
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	release
	end

BattleFrontier_OutsideWest_EventScript_Camper_hns::
	lock
	faceplayer
	delay 20
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_Camper_hnsFaceFactory_hns
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_Camper_hnsAlreadyFacingFactory_hns
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_Camper_hnsFaceFactory_hns
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_Camper_hnsFaceFactory_hns
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_Camper_hnsFaceFactory_hns::
	applymovement LOCALID_FRONTIER_CAMPER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

BattleFrontier_OutsideWest_EventScript_Camper_hnsAlreadyFacingFactory_hns::
	return

BattleFrontier_OutsideWest_EventScript_Girl_hns::
	lock
	faceplayer
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper_hns
	waitmessage
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_Girl_hnsShudderNorth_hns
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_Girl_hnsShudderSouth_hns
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_Girl_hnsShudderWest_hns
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_Girl_hnsShudderEast_hns
	waitbuttonpress
	release
	end

BattleFrontier_OutsideWest_EventScript_Girl_hnsShudderNorth_hns::
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth_hns
	waitmovement 0
	return

BattleFrontier_OutsideWest_EventScript_Girl_hnsShudderSouth_hns::
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth_hns
	waitmovement 0
	return

BattleFrontier_OutsideWest_EventScript_Girl_hnsShudderWest_hns::
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest_hns
	waitmovement 0
	return

BattleFrontier_OutsideWest_EventScript_Girl_hnsShudderEast_hns::
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast_hns
	waitmovement 0
	return

BattleFrontier_OutsideWest_Movement_GirlShudderNorth_hns:
	walk_in_place_faster_down
	walk_in_place_faster_down
	step_end

BattleFrontier_OutsideWest_Movement_GirlShudderSouth_hns:
	walk_in_place_faster_up
	walk_in_place_faster_up
	step_end

BattleFrontier_OutsideWest_Movement_GirlShudderWest_hns:
	walk_in_place_faster_right
	walk_in_place_faster_right
	step_end

BattleFrontier_OutsideWest_Movement_GirlShudderEast_hns:
	walk_in_place_faster_left
	walk_in_place_faster_left
	step_end

BattleFrontier_OutsideWest_EventScript_Woman2_hns::
	lock
	faceplayer
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors_hns, MSGBOX_DEFAULT
	random 2
	goto_if_eq VAR_RESULT, 1, BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors_hns
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors_hns
	end

BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors_hns::
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors_hns::
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_Fisherman1_hns::
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling_hns, MSGBOX_NPC
	end

@ Unused
BattleFrontier_OutsideWest_EventScript_UnusedNPC3_hns::
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Gentleman_hns::
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Lass_hns::
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_ExpertM_hns::
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Man2_hns::
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Woman1_hns::
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_FatMan1_hns::
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_FatMan2_hns::
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Woman3_hns::
	lock
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_Boy2_hns::
	lock
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_OldMan_hns::
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Man4_hns::
	lock
	faceplayer
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FRONTIER_MAN_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

BattleFrontier_OutsideWest_EventScript_PokefanF_hns::
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_Text_BattleDomeSign_hns:
	.string "Dies ist das KAMPFSTADION!\n"
	.string "Dein Weg zum unschlagbaren Superstar!$"

BattleFrontier_OutsideWest_Text_BattleFactorySign_hns:
	.string "Dies ist die KAMPFFABRIK!\n"
	.string "Hier gibt es die härtesten POKéMON!$"

BattleFrontier_OutsideWest_Text_BattlePikeSign_hns:
	.string "Dies ist die KAMPFIPITIS!\n"
	.string "Welche der drei Bahnen betrittst du?$"

BattleFrontier_OutsideWest_Text_ThisIsBattleTower_hns:
	.string "Dies ist der DUELLTURM.\p"
	.string "TRAINER tragen mit ihren besten\n"
	.string "POKéMON Ausscheidungskämpfe aus.$"

BattleFrontier_OutsideWest_Text_MayISeeYourTicket_hns:
	.string "Hi! Möchtest du mit der Fähre fahren?\n"
	.string "Zeigst du mir bitte dein TICKET?$"

BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard_hns:
	.string "{PLAYER} hat kein TICKET…\p"
	.string "Das tut mir schrecklich Leid.\p"
	.string "Nur mit einem TICKET kannst du mit der\n"
	.string "Fähre fahren.$"

BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo_hns:
	.string "{PLAYER} zückt das TICKET.\p"
	.string "Perfekt! Damit kannst du an Bord!\p"
	.string "Und wo soll die Reise hingehen?$"

BattleFrontier_OutsideWest_Text_SlateportItIs_hns:
	.string "Nach GRAPHITPORT CITY?$"

BattleFrontier_OutsideWest_Text_LilycoveItIs_hns:
	.string "Nach SEEGRASULB CITY?$"

BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime_hns:
	.string "Bitte komm später noch einmal wieder!$"

BattleFrontier_OutsideWest_Text_PleaseBoardFerry_hns:
	.string "Bitte komm an Bord. Wir legen bald ab.$"

BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo_hns:
	.string "Und wo soll die Reise hingehen?$"

BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends_hns:
	.string "Ich bin der Beste aus unserem\n"
	.string "Freundeskreis. Aber hier…\l"
	.string "Hier bin ich echt aufgeschmissen!$"

BattleFrontier_OutsideWest_Text_CantFindBattleTower_hns:
	.string "Ich möchte gerne in den DUELLTURM,\n"
	.string "aber ich finde den einfach nicht,\n"
	.string "obwohl\l"
	.string "ich eine Karte der KAMPFZONE\p"
	.string "habe. Hier ist alles so groß…$"

BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere_hns:
	.string "Ich wollte mich einer Herausforderung\n"
	.string "stellen, sobald ich hier angekommen\n"
	.string "bin. \p"
	.string "Aber auf dem Weg hierhin bin ich\n"
	.string "seekrank geworden… hurps…$"

BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere_hns:
	.string "Weißt du, hier kann nicht einfach\n"
	.string "jeder hinkommen.\p"
	.string "Nur die TRAINER, die durch ihr Talent\n"
	.string "und ihre Stärke aufgefallen sind,\l"
	.string "werden eingeladen.\p"
	.string "Deshalb haben viele TRAINER noch nie\n"
	.string "etwas über die KAMPFZONE gehört.$"

BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons_hns:
	.string "Hey, Brüderchen…\p"
	.string "Bist du sicher, wir können Heraus-\n"
	.string "forderungen annehmen, obwohl wir\l"
	.string "keine POKéMON besitzen?$"

BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons_hns:
	.string "Ääh… Ich bin sicher, dass das geht!\p"
	.string "Denke ich…\p"
	.string "Erinnerst du dich an diesen großen\n"
	.string "unheimlichen Kerl, der sagte “Ich\n"
	.string "leihe\l"
	.string "euch POKéMON!”?$"

BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons_hns:
	.string "Dies ist die KAMPFFABRIK. Hier\n"
	.string "kannst du dir starke POKéMON leihen.\p"
	.string "Ich frage mich nur, wer diese POKéMON\n"
	.string "aufzieht?$"

BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper_hns:
	.string "Ich habe Angst, zur KAMPFIPITIS zu\n"
	.string "gehen. Ich fürchte mich vor VIPITIS…\p"
	.string "Ab-aber ich bin von so weit gekommen,\n"
	.string "ich muss einfach weitergehen!\l"
	.string "… Zitter bibber…$"

BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors_hns:
	.string "Komm, wir spielen Schere Stein Papier!\n"
	.string "Eins, zwei, drei!\p"
	.string "… … … … …\n"
	.string "…$"

BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge_hns:
	.string "Juhuu! Ich habe geeewonnen!!!\n"
	.string "Ich werde die KAMPFIPITIS-Heraus-\l"
	.string "forderung annehmen!$"

BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge_hns:
	.string "Oh jeee…\n"
	.string "Ich habe verloren.\p"
	.string "Heute ist anscheinend nicht mein\n"
	.string "Glückstag. Ich warte mit der Eroberung\l"
	.string "der KAMPFIPITIS bis morgen.$"

BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling_hns:
	.string "Ich glaube, ich bin das einzige Wesen\n"
	.string "hier, das lieber angelt als kämpft.\l"
	.string "Warum auch immer…\p"
	.string "Wie? Hier kann man gar nichts\n"
	.string "fangen?!? Was für eine Enttäuschung…$"

BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol_hns:
	.string "Heute werde ich unter allen Umständen\n"
	.string "so lange kämpfen, bis ich ein SYMBOL\l"
	.string "bekomme!$"

BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome_hns:
	.string "Wie? Du willst dich den Heraus-\n"
	.string "forderungen des KAMPFSTADIONs\l"
	.string "stellen?\p"
	.string "Dann wünsche ich dir viel Glück!\n"
	.string "Wir siegen uns den Weg nach oben und\l"
	.string "treffen uns an der Spitze wieder.$"

BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa_hns:
	.string "Opa, hier drüben!\n"
	.string "Das KAMPFSTADION ist hier!\l"
	.string "Los, Opa, zeig’s ihnen!$"

BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe_hns:
	.string "So, dies ist also das KAMPFSTADION?!?\n"
	.string "Kein GENTLEMAN wird mich besiegen!\p"
	.string "Aber wo ist denn nur der Eingang?$"

BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo_hns:
	.string "Vor nicht allzu langer Zeit gab es\n"
	.string "hier nichts. Nur Ödnis.\p"
	.string "Und nun schau sich einer diesen Ort\l"
	.string "an!\n"
	.string "Unglaublich! Ich werde meine Mutter\p"
	.string "mal\l"
	.string "hierher bringen, damit sie das sieht.$"

BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier_hns:
	.string "Endlich habe ich die KAMPFZONE\n"
	.string "erreicht.\p"
	.string "Mit meinem Aussehen und meinem Talent\n"
	.string "sorge ich bestimmt für Aufsehen.$"

BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople_hns:
	.string "… Kau… … Schmatz…\p"
	.string "Hier sind offensichtlich nur starke\n"
	.string "Typen anwesend.\p"
	.string "… Schmatz… … Kau…$"

BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike_hns:
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

BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet_hns:
	.string "Was? Hör dir doch mal selber zu!\n"
	.string "Das ist doch wirklich popelig!\p"
	.string "Das letzte Mal als ICH ihm zugejubelt\n"
	.string "habe, haben sich unsere Augen\p"
	.string "getroffen. Es hat richtig gefunkt\n"
	.string "zwischen uns!$"

BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering_hns:
	.string "WIIIIIE BITTE?!?\n"
	.string "HAH! Ha ha ha!\p"
	.string "Der STADIONSTAR hat doch nur in deine\n"
	.string "Richtung geschaut, weil ICH ihm\l"
	.string "zugejubelt habe!$"

BattleFrontier_OutsideWest_Text_DomeAceIsMine_hns:
	.string "Oh, bitte, vertragt euch!\n"
	.string "Hört auf zu streiten!\p"
	.string "Ihr solltet lieber einem ARENALEITER\n"
	.string "zujubeln!\p"
	.string "Der STADIONSTAR ist mein großes Idol!\n"
	.string "Ihr seid zu jung, um sein Talent zu\l"
	.string "verstehen!$"

BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers_hns:
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

BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier_hns:
	.string "Ich habe gehört, dass jemand gehört\n"
	.string "hat, ein PKMN mit einem ungewöhnlich\l"
	.string "langen Schweif sei hier in der\p"
	.string "KAMPFZONE aufgetaucht. Das ist\n"
	.string "bestimmt anbetungswürdig…\p"
	.string "Die Herausforderungen können warten.\n"
	.string "Ich will dieses hübsche Geschöpf\l"
	.string "finden!$"

