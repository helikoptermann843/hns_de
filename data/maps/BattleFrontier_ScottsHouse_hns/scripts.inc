BattleFrontier_ScottsHouse_hns_MapScripts::
	.byte 0

BattleFrontier_ScottsHouse_EventScript_Scott_hns::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_4, BattleFrontier_ScottsHouse_EventScript_GivenBerry_hns
	goto_if_set FLAG_TEMP_3, BattleFrontier_ScottsHouse_EventScript_GivenShield_hns
	goto_if_set FLAG_TEMP_2, BattleFrontier_ScottsHouse_EventScript_GivenBattlePoints_hns
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_hns
	end

BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_hns::
	goto_if_unset FLAG_SCOTT_GIVES_BATTLE_POINTS, BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_hns
	goto_if_unset FLAG_COLLECTED_ALL_SILVER_SYMBOLS, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_hns
	goto_if_unset FLAG_COLLECTED_ALL_GOLD_SYMBOLS, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_hns
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_hns
	end

BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_hns::
	goto_if_unset FLAG_RECEIVED_SILVER_SHIELD, BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_hns
	goto_if_unset FLAG_RECEIVED_GOLD_SHIELD, BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_hns
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment_hns
	end

BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_hns::
	goto_if_unset FLAG_SYS_TOWER_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_hns
	goto_if_unset FLAG_SYS_DOME_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_hns
	goto_if_unset FLAG_SYS_PALACE_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_hns
	goto_if_unset FLAG_SYS_ARENA_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_hns
	goto_if_unset FLAG_SYS_FACTORY_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_hns
	goto_if_unset FLAG_SYS_PIKE_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_hns
	goto_if_unset FLAG_SYS_PYRAMID_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_hns
	msgbox BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols_hns, MSGBOX_DEFAULT
	giveitem ITEM_LANSAT_BERRY
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_BerryPocketFull_hns
	setflag FLAG_COLLECTED_ALL_SILVER_SYMBOLS
	setflag FLAG_TEMP_4
	release
	end

BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_hns::
	goto_if_unset FLAG_SYS_TOWER_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_hns
	goto_if_unset FLAG_SYS_DOME_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_hns
	goto_if_unset FLAG_SYS_PALACE_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_hns
	goto_if_unset FLAG_SYS_ARENA_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_hns
	goto_if_unset FLAG_SYS_FACTORY_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_hns
	goto_if_unset FLAG_SYS_PIKE_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_hns
	goto_if_unset FLAG_SYS_PYRAMID_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_hns
	msgbox BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols_hns, MSGBOX_DEFAULT
	giveitem ITEM_STARF_BERRY
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_BerryPocketFull_hns
	setflag FLAG_COLLECTED_ALL_GOLD_SYMBOLS
	setflag FLAG_TEMP_4
	release
	end

BattleFrontier_ScottsHouse_EventScript_BerryPocketFull_hns::
	msgbox BattleFrontier_ScottsHouse_Text_BerryPocketStuffed_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ScottsHouse_EventScript_GivenBerry_hns::
	msgbox BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ScottsHouse_EventScript_RandomComment_hns::
	random 3
	goto_if_eq VAR_RESULT, 1, BattleFrontier_ScottsHouse_EventScript_FrontierBrainComment_hns
	goto_if_eq VAR_RESULT, 2, BattleFrontier_ScottsHouse_EventScript_ArtisanCaveComment_hns
	msgbox BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ScottsHouse_EventScript_FrontierBrainComment_hns::
	msgbox BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ScottsHouse_EventScript_ArtisanCaveComment_hns::
	msgbox BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_hns::
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
	tower_get TOWER_DATA_WIN_STREAK
	goto_if_ge VAR_RESULT, 50, BattleFrontier_ScottsHouse_EventScript_GiveSilverShield_hns
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
	tower_get TOWER_DATA_WIN_STREAK
	goto_if_ge VAR_RESULT, 50, BattleFrontier_ScottsHouse_EventScript_GiveSilverShield_hns
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment_hns
	end

BattleFrontier_ScottsHouse_EventScript_GiveSilverShield_hns::
	msgbox BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow_hns, MSGBOX_DEFAULT
	givedecoration DECOR_SILVER_SHIELD
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_NoRoomForShield_hns
	setflag FLAG_RECEIVED_SILVER_SHIELD
	setflag FLAG_TEMP_3
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield_hns
	end

BattleFrontier_ScottsHouse_EventScript_NoRoomForShield_hns::
	msgbox BattleFrontier_ScottsHouse_Text_ComeBackForThisLater_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ScottsHouse_EventScript_GivenShield_hns::
	msgbox BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_hns::
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
	tower_get TOWER_DATA_WIN_STREAK
	goto_if_ge VAR_RESULT, 100, BattleFrontier_ScottsHouse_EventScript_GiveGoldShield_hns
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
	tower_get TOWER_DATA_WIN_STREAK
	goto_if_ge VAR_RESULT, 100, BattleFrontier_ScottsHouse_EventScript_GiveGoldShield_hns
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment_hns
	end

BattleFrontier_ScottsHouse_EventScript_GiveGoldShield_hns::
	msgbox BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow_hns, MSGBOX_DEFAULT
	givedecoration DECOR_GOLD_SHIELD
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_NoRoomForShield_hns
	setflag FLAG_RECEIVED_GOLD_SHIELD
	setflag FLAG_TEMP_3
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield_hns
	end

BattleFrontier_ScottsHouse_EventScript_GivenBattlePoints_hns::
	msgbox BattleFrontier_ScottsHouse_Text_ExpectingGreatThings_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_hns::
	msgbox BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier_hns, MSGBOX_DEFAULT
	closemessage
	delay 30
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_ScottsHouse_EventScript_Scott_hnsFaceAwayNorth_hns
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_ScottsHouse_EventScript_Scott_hnsFaceAwaySouth_hns
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_ScottsHouse_EventScript_Scott_hnsFaceAwayEast_hns
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_ScottsHouse_EventScript_Scott_hnsFaceAwayWest_hns
	msgbox BattleFrontier_ScottsHouse_Text_HowMuchEffortItTookToMakeReal_hns, MSGBOX_DEFAULT
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_FacePlayer
	waitmovement 0
	msgbox BattleFrontier_ScottsHouse_Text_HaveThisAsMementoOfOurPathsCrossing_hns, MSGBOX_DEFAULT
	goto_if_eq VAR_SCOTT_STATE, 13, BattleFrontier_ScottsHouse_EventScript_Give4BattlePoints_hns
	goto_if_ge VAR_SCOTT_STATE, 9, BattleFrontier_ScottsHouse_EventScript_Give3BattlePoints_hns
	goto_if_ge VAR_SCOTT_STATE, 6, BattleFrontier_ScottsHouse_EventScript_Give2BattlePoints_hns
	goto BattleFrontier_ScottsHouse_EventScript_Give1BattlePoint_hns
	end

BattleFrontier_ScottsHouse_EventScript_Give4BattlePoints_hns::
	buffernumberstring STR_VAR_1, 4
	setvar VAR_0x8004, 4
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints_hns
	end

BattleFrontier_ScottsHouse_EventScript_Give3BattlePoints_hns::
	buffernumberstring STR_VAR_1, 3
	setvar VAR_0x8004, 3
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints_hns
	end

BattleFrontier_ScottsHouse_EventScript_Give2BattlePoints_hns::
	buffernumberstring STR_VAR_1, 2
	setvar VAR_0x8004, 2
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints_hns
	end

BattleFrontier_ScottsHouse_EventScript_Give1BattlePoint_hns::
	buffernumberstring STR_VAR_1, 1
	setvar VAR_0x8004, 1
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints_hns
	end

BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints_hns::
	special GiveFrontierBattlePoints
	msgbox BattleFrontier_ScottsHouse_Text_ObtainedXBattlePoints_hns, MSGBOX_GETPOINTS
	msgbox BattleFrontier_ScottsHouse_Text_ExplainBattlePoints_hns, MSGBOX_DEFAULT
	setflag FLAG_SCOTT_GIVES_BATTLE_POINTS
	setflag FLAG_TEMP_2
	release
	end

BattleFrontier_ScottsHouse_EventScript_Scott_hnsFaceAwayNorth_hns::
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

BattleFrontier_ScottsHouse_EventScript_Scott_hnsFaceAwaySouth_hns::
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

BattleFrontier_ScottsHouse_EventScript_Scott_hnsFaceAwayEast_hns::
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

BattleFrontier_ScottsHouse_EventScript_Scott_hnsFaceAwayWest_hns::
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier_hns:
	.string "SCOTT: Oh, hallo! Herzlich willkommen!\n"
	.string "Ähähä… Bitte entschuldige die Enge.\p"
	.string "Nun, {PLAYER}{KUN}, ich darf dich\n"
	.string "herzlich\n"
	.string "hier in der KAMPFZONE begrüßen.\p"
	.string "Hier sind meine Träume wahr geworden.\n"
	.string "Jahre um Jahre anstrengender Arbeit,\l"
	.string "aber mein Traum ist Realität geworden!$"

BattleFrontier_ScottsHouse_Text_HowMuchEffortItTookToMakeReal_hns:
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

BattleFrontier_ScottsHouse_Text_HaveThisAsMementoOfOurPathsCrossing_hns:
	.string "Aber lassen wir die Vergangenheit\n"
	.string "ruhen.\p"
	.string "Alles, was ich mir wünsche ist, dass\n"
	.string "du die Kämpfe hier aus vollem Herzen\l"
	.string "genießt.\p"
	.string "{PLAYER}{KUN}! Ich möchte dir dies als\n"
	.string "Andenken geben. Es soll dich daran er-\l"
	.string "innern, wie sich unsere Wege kreuzten.$"

BattleFrontier_ScottsHouse_Text_ObtainedXBattlePoints_hns:
	.string "{PLAYER} erhält {STR_VAR_1}\n"
	.string "Gewinnpunkt(e).$"

BattleFrontier_ScottsHouse_Text_ExplainBattlePoints_hns:
	.string "SCOTT: Du kannst die Anzahl deiner\n"
	.string "Gewinnpunkte auf deinem KAMPFZONEN-\l"
	.string "PASS ablesen.\p"
	.string "Je erfolgreicher du hier in der KAMPF-\n"
	.string "ZONE bist, desto mehr Gewinnpunkte\l"
	.string "erhältst du.\p"
	.string "Verwende sie ganz wie du magst.\n"
	.string "Tausche\l"
	.string "sie zum Beispiel gegen Items ein.$"

BattleFrontier_ScottsHouse_Text_ExpectingGreatThings_hns:
	.string "Ich erwarte Großes von dir!$"

BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers_hns:
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

BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain_hns:
	.string "SCOTT: Hast du schon die KAMPF-\n"
	.string "KORYPHÄEN getroffen?\p"
	.string "Oder hast du SYMBOLE von ihnen\n"
	.string "bekommen?\p"
	.string "Die KAMPFKORYPHÄEN sind handverlesen.\n"
	.string "Ich habe die stärksten TRAINER selbst\l"
	.string "ausgesucht.\p"
	.string "Aber ich bin sicher, deine Stärke wird\n"
	.string "sie zum Zittern bringen!$"

BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier_hns:
	.string "SCOTT: Du trainierst doch nicht nur\n"
	.string "für Kämpfe, oder?\p"
	.string "Ich meine mich zu erinnern, dass du\n"
	.string "auch an deinem POKéDEX arbeitest?\p"
	.string "Soll ich dir was verraten?\p"
	.string "Auch hier in der KAMPFZONE wirst\n"
	.string "du auf wilde POKéMON treffen…\l"
	.string "irgendwo… Ha ha ha ha!$"

BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols_hns:
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

BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols_hns:
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

BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere_hns:
	.string "Ich kann von mir behaupten, einen\l"
	.string "guten\n"
	.string "TRAINER auf Anhieb erkennen zu können.\p"
	.string "\p"
	.string "Ich bin froh, dass ich dein Potenzial\n"
	.string "erkannt habe und dich hierher gebeten\l"
	.string "habe!$"

BattleFrontier_ScottsHouse_Text_BerryPocketStuffed_hns:
	.string "Deine BEERENTASCHE scheint voll\n"
	.string "zu sein.$"

BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow_hns:
	.string "SCOTT: Ich habe schon von dir gehört!\n"
	.string "Wie du den DUELLTURM bezwungen hast!\l"
	.string "Du hast 50 TRAINER in Folge besiegt!\p"
	.string "Das ist fantastisch!\n"
	.string "Ich möchte dir dies gerne schenken.$"

BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow_hns:
	.string "SCOTT: Ich habe schon von dir gehört!\n"
	.string "Wie du den DUELLTURM bezwungen hast!\l"
	.string "Du hast 100 TRAINER in Folge besiegt!\n"
	.string "\p"
	.string "Das ist einfach spektakulär!\n"
	.string "Ich muss dir dies einfach schenken!$"

BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings_hns:
	.string "Ich erwarte von dir ab jetzt noch\n"
	.string "größere Taten!$"

BattleFrontier_ScottsHouse_Text_ComeBackForThisLater_hns:
	.string "Oh, schade! Komm doch einfach wieder,\n"
	.string "wenn du Platz geschaffen hast.$"

