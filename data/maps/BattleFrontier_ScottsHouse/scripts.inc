BattleFrontier_ScottsHouse_MapScripts::
	.byte 0

BattleFrontier_ScottsHouse_EventScript_Scott::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_4, BattleFrontier_ScottsHouse_EventScript_GivenBerry
	goto_if_set FLAG_TEMP_3, BattleFrontier_ScottsHouse_EventScript_GivenShield
	goto_if_set FLAG_TEMP_2, BattleFrontier_ScottsHouse_EventScript_GivenBattlePoints
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveItems
	end

BattleFrontier_ScottsHouse_EventScript_CheckGiveItems::
	goto_if_unset FLAG_SCOTT_GIVES_BATTLE_POINTS, BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier
	goto_if_unset FLAG_COLLECTED_ALL_SILVER_SYMBOLS, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols
	goto_if_unset FLAG_COLLECTED_ALL_GOLD_SYMBOLS, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	end

BattleFrontier_ScottsHouse_EventScript_CheckGiveShield::
	goto_if_unset FLAG_RECEIVED_SILVER_SHIELD, BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield
	goto_if_unset FLAG_RECEIVED_GOLD_SHIELD, BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
	end

BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols::
	goto_if_unset FLAG_SYS_TOWER_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	goto_if_unset FLAG_SYS_DOME_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	goto_if_unset FLAG_SYS_PALACE_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	goto_if_unset FLAG_SYS_ARENA_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	goto_if_unset FLAG_SYS_FACTORY_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	goto_if_unset FLAG_SYS_PIKE_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	goto_if_unset FLAG_SYS_PYRAMID_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	msgbox BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols, MSGBOX_DEFAULT
	giveitem ITEM_LANSAT_BERRY
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_BerryPocketFull
	setflag FLAG_COLLECTED_ALL_SILVER_SYMBOLS
	setflag FLAG_TEMP_4
	release
	end

BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols::
	goto_if_unset FLAG_SYS_TOWER_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	goto_if_unset FLAG_SYS_DOME_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	goto_if_unset FLAG_SYS_PALACE_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	goto_if_unset FLAG_SYS_ARENA_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	goto_if_unset FLAG_SYS_FACTORY_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	goto_if_unset FLAG_SYS_PIKE_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	goto_if_unset FLAG_SYS_PYRAMID_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	msgbox BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols, MSGBOX_DEFAULT
	giveitem ITEM_STARF_BERRY
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_BerryPocketFull
	setflag FLAG_COLLECTED_ALL_GOLD_SYMBOLS
	setflag FLAG_TEMP_4
	release
	end

BattleFrontier_ScottsHouse_EventScript_BerryPocketFull::
	msgbox BattleFrontier_ScottsHouse_Text_BerryPocketStuffed, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ScottsHouse_EventScript_GivenBerry::
	msgbox BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ScottsHouse_EventScript_RandomComment::
	random 3
	goto_if_eq VAR_RESULT, 1, BattleFrontier_ScottsHouse_EventScript_FrontierBrainComment
	goto_if_eq VAR_RESULT, 2, BattleFrontier_ScottsHouse_EventScript_ArtisanCaveComment
	msgbox BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ScottsHouse_EventScript_FrontierBrainComment::
	msgbox BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ScottsHouse_EventScript_ArtisanCaveComment::
	msgbox BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield::
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
	tower_get TOWER_DATA_WIN_STREAK
	goto_if_ge VAR_RESULT, 50, BattleFrontier_ScottsHouse_EventScript_GiveSilverShield
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
	tower_get TOWER_DATA_WIN_STREAK
	goto_if_ge VAR_RESULT, 50, BattleFrontier_ScottsHouse_EventScript_GiveSilverShield
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
	end

BattleFrontier_ScottsHouse_EventScript_GiveSilverShield::
	msgbox BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow, MSGBOX_DEFAULT
	givedecoration DECOR_SILVER_SHIELD
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_NoRoomForShield
	setflag FLAG_RECEIVED_SILVER_SHIELD
	setflag FLAG_TEMP_3
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield
	end

BattleFrontier_ScottsHouse_EventScript_NoRoomForShield::
	msgbox BattleFrontier_ScottsHouse_Text_ComeBackForThisLater, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ScottsHouse_EventScript_GivenShield::
	msgbox BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield::
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
	tower_get TOWER_DATA_WIN_STREAK
	goto_if_ge VAR_RESULT, 100, BattleFrontier_ScottsHouse_EventScript_GiveGoldShield
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
	tower_get TOWER_DATA_WIN_STREAK
	goto_if_ge VAR_RESULT, 100, BattleFrontier_ScottsHouse_EventScript_GiveGoldShield
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
	end

BattleFrontier_ScottsHouse_EventScript_GiveGoldShield::
	msgbox BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow, MSGBOX_DEFAULT
	givedecoration DECOR_GOLD_SHIELD
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_NoRoomForShield
	setflag FLAG_RECEIVED_GOLD_SHIELD
	setflag FLAG_TEMP_3
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield
	end

BattleFrontier_ScottsHouse_EventScript_GivenBattlePoints::
	msgbox BattleFrontier_ScottsHouse_Text_ExpectingGreatThings, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier::
	msgbox BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
	closemessage
	delay 30
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayNorth
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwaySouth
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayEast
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayWest
	msgbox BattleFrontier_ScottsHouse_Text_HowMuchEffortItTookToMakeReal, MSGBOX_DEFAULT
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_FacePlayer
	waitmovement 0
	msgbox BattleFrontier_ScottsHouse_Text_HaveThisAsMementoOfOurPathsCrossing, MSGBOX_DEFAULT
	goto_if_eq VAR_SCOTT_STATE, 13, BattleFrontier_ScottsHouse_EventScript_Give4BattlePoints
	goto_if_ge VAR_SCOTT_STATE, 9, BattleFrontier_ScottsHouse_EventScript_Give3BattlePoints
	goto_if_ge VAR_SCOTT_STATE, 6, BattleFrontier_ScottsHouse_EventScript_Give2BattlePoints
	goto BattleFrontier_ScottsHouse_EventScript_Give1BattlePoint
	end

BattleFrontier_ScottsHouse_EventScript_Give4BattlePoints::
	buffernumberstring STR_VAR_1, 4
	setvar VAR_0x8004, 4
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
	end

BattleFrontier_ScottsHouse_EventScript_Give3BattlePoints::
	buffernumberstring STR_VAR_1, 3
	setvar VAR_0x8004, 3
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
	end

BattleFrontier_ScottsHouse_EventScript_Give2BattlePoints::
	buffernumberstring STR_VAR_1, 2
	setvar VAR_0x8004, 2
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
	end

BattleFrontier_ScottsHouse_EventScript_Give1BattlePoint::
	buffernumberstring STR_VAR_1, 1
	setvar VAR_0x8004, 1
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
	end

BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints::
	special GiveFrontierBattlePoints
	msgbox BattleFrontier_ScottsHouse_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
	msgbox BattleFrontier_ScottsHouse_Text_ExplainBattlePoints, MSGBOX_DEFAULT
	setflag FLAG_SCOTT_GIVES_BATTLE_POINTS
	setflag FLAG_TEMP_2
	release
	end

BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayNorth::
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

BattleFrontier_ScottsHouse_EventScript_ScottFaceAwaySouth::
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayEast::
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayWest::
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier:
	.string "SCOTT: Oh, hallo! Herzlich willkommen!\n"
	.string "Ähähä… Bitte entschuldige die Enge.\p"
	.string "Nun, {PLAYER}{KUN}, ich darf dich\n"
	.string "herzlich\n"
	.string "hier in der KAMPFZONE begrüßen.\p"
	.string "Hier sind meine Träume wahr geworden.\n"
	.string "Jahre um Jahre anstrengender Arbeit,\l"
	.string "aber mein Traum ist Realität geworden!$"

BattleFrontier_ScottsHouse_Text_HowMuchEffortItTookToMakeReal:
	.string "Rückblickend betrachtet war es eine\n"
	.string "lange Reise…\p"
	.string "Ich habe meine Heimat verlassen und\n"
	.string "mich auf die Suche nach starken\l"
	.string "TRAINERn gemacht.\p"
	.string "Niemand kann sich vorstellen, wie viel\n"
	.string "Zeit und wie viel Anstrengungen es\n"
	.string "mich\l"
	.string "gekostet hat, dies hier zu\n"
	.string "realisieren.$"

BattleFrontier_ScottsHouse_Text_HaveThisAsMementoOfOurPathsCrossing:
	.string "Aber lassen wir die Vergangenheit\n"
	.string "ruhen.\p"
	.string "Alles, was ich mir wünsche ist, dass\n"
	.string "du die Kämpfe hier aus vollem Herzen\l"
	.string "genießt.\p"
	.string "{PLAYER}{KUN}! Ich möchte dir dies als\n"
	.string "Andenken geben. Es soll dich daran er-\l"
	.string "innern, wie sich unsere Wege kreuzten.$"

BattleFrontier_ScottsHouse_Text_ObtainedXBattlePoints:
	.string "{PLAYER} erhält {STR_VAR_1}\n"
	.string "Gewinnpunkt(e).$"

BattleFrontier_ScottsHouse_Text_ExplainBattlePoints:
	.string "SCOTT: Du kannst die Anzahl deiner\n"
	.string "Gewinnpunkte auf deinem KAMPFZONEN-\l"
	.string "PASS ablesen.\p"
	.string "Je erfolgreicher du hier in der KAMPF-\n"
	.string "ZONE bist, desto mehr Gewinnpunkte\l"
	.string "erhältst du.\p"
	.string "Verwende sie ganz wie du magst.\n"
	.string "Tausche\l"
	.string "sie zum Beispiel gegen Items ein.$"

BattleFrontier_ScottsHouse_Text_ExpectingGreatThings:
	.string "Ich erwarte Großes von dir!$"

BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers:
	.string "SCOTT: Jeder TRAINER ist ein\n"
	.string "Individuum. Sie leben alle ihr Leben.\n"
	.string "\p"
	.string "Aber in Kämpfen ist es völlig egal,\n"
	.string "wer oder was sie sind.\p"
	.string "Sie sind alle gleich!\p"
	.string "Ich liebe die Reinheit der Kämpfe, in\n"
	.string "denen jeder gleich ist.\p"
	.string "Deshalb bin ich immer auf der Suche\n"
	.string "nach TRAINERn, die ihre Sache ernst\l"
	.string "nehmen, und lade sie hierher ein.$"

BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain:
	.string "SCOTT: Hast du schon die KAMPF-\n"
	.string "KORYPHÄEN getroffen?\p"
	.string "Oder hast du SYMBOLE von ihnen\n"
	.string "bekommen?\p"
	.string "Die KAMPFKORYPHÄEN sind handverlesen.\n"
	.string "Ich habe die stärksten TRAINER selbst\l"
	.string "ausgesucht.\p"
	.string "Aber ich bin sicher, deine Stärke wird\n"
	.string "sie zum Zittern bringen!$"

BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier:
	.string "SCOTT: Du trainierst doch nicht nur\n"
	.string "für Kämpfe, oder?\p"
	.string "Ich meine mich zu erinnern, dass du\n"
	.string "auch an deinem POKéDEX arbeitest?\p"
	.string "Soll ich dir was verraten?\p"
	.string "Auch hier in der KAMPFZONE wirst\n"
	.string "du auf wilde POKéMON treffen…\l"
	.string "irgendwo… Ha ha ha ha!$"

BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols:
	.string "SCOTT: Gefällt es dir hier in der\n"
	.string "KAMPFZONE?\p"
	.string "Warte mal!\n"
	.string "Oh…\p"
	.string "Dein KAMPFZONENPASS!\n"
	.string "Du hast ja alle silbernen SYMBOLE\l"
	.string "zusammen!\p"
	.string "Das ist mehr als beeindruckend!\n"
	.string "Du bist stark, genau, wie ich es\l"
	.string "erwartet hatte!\p"
	.string "Normalerweise mache ich so etwas\n"
	.string "nicht,\n"
	.string "aber dies hier ist eine besondere\l"
	.string "Situation.\p"
	.string "Ich möchte dir dies hier schenken!\n"
	.string "Ich bin sicher, du weißt es gut zu\l"
	.string "nutzen.$"

BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols:
	.string "SCOTT: Ich hoffe, es gefällt dir hier\n"
	.string "in der KAMPFZONE?\p"
	.string "Warte mal…\n"
	.string "Ich traue meinen Augen nicht!\p"
	.string "Dein KAMPFZONENPASS!\n"
	.string "Du hast ja alle goldenen SYMBOLE\l"
	.string "zusammen!!!\p"
	.string "Das ist mehr als hervorragend!\n"
	.string "Du bist einfach unglaublich - ich\n"
	.string "hatte\l"
	.string "nichts anderes erwartet!\p"
	.string "… … … …\n"
	.string "…\p"
	.string "{PLAYER}, du musst dies von mir\n"
	.string "annehmen!\p"
	.string "Ich weiß, du wirst den Wert dieses\n"
	.string "Geschenks erkennen!$"

BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere:
	.string "Ich kann von mir behaupten, einen\l"
	.string "guten\n"
	.string "TRAINER auf Anhieb erkennen zu können.\p"
	.string "\p"
	.string "Ich bin froh, dass ich dein Potenzial\n"
	.string "erkannt habe und dich hierher gebeten\l"
	.string "habe!$"

BattleFrontier_ScottsHouse_Text_BerryPocketStuffed:
	.string "Deine BEERENTASCHE scheint voll\n"
	.string "zu sein.$"

BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow:
	.string "SCOTT: Ich habe schon von dir gehört!\n"
	.string "Wie du den DUELLTURM bezwungen hast!\l"
	.string "Du hast 50 TRAINER in Folge besiegt!\p"
	.string "Das ist fantastisch!\n"
	.string "Ich möchte dir dies gerne schenken.$"

BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow:
	.string "SCOTT: Ich habe schon von dir gehört!\n"
	.string "Wie du den DUELLTURM bezwungen hast!\l"
	.string "Du hast 100 TRAINER in Folge besiegt!\n"
	.string "\p"
	.string "Das ist einfach spektakulär!\n"
	.string "Ich muss dir dies einfach schenken!$"

BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings:
	.string "Ich erwarte von dir ab jetzt noch\n"
	.string "größere Taten!$"

BattleFrontier_ScottsHouse_Text_ComeBackForThisLater:
	.string "Oh, schade! Komm doch einfach wieder,\n"
	.string "wenn du Platz geschaffen hast.$"

