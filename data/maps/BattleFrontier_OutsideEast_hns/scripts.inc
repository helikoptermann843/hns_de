BattleFrontier_OutsideEast_hns_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_OutsideEast_OnResume_hns
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideEast_OnTransition_hns
	.byte 0

BattleFrontier_OutsideEast_OnResume_hns:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo_hns
	end

BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo_hns::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

BattleFrontier_OutsideEast_OnTransition_hns:
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
	call_if_unset FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_ShowSudowoodo_hns
	end

BattleFrontier_OutsideEast_EventScript_ShowSudowoodo_hns::
	clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
	return

BattleFrontier_OutsideEast_EventScript_BattleTowerSign_hns::
	msgbox BattleFrontier_OutsideEast_Text_BattleTowerSign_hns, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_BattlePalaceSign_hns::
	msgbox BattleFrontier_OutsideEast_Text_BattlePalaceSign_hns, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_BattleArenaSign_hns::
	msgbox BattleFrontier_OutsideEast_Text_BattleArenaSign_hns, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_BattlePyramidSign_hns::
	msgbox BattleFrontier_OutsideEast_Text_BattlePyramidSign_hns, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_NinjaBoy_hns::
	msgbox BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Man1_hns::
	msgbox BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Hiker_hns::
	msgbox BattleFrontier_OutsideEast_Text_PyramidTooHarsh_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_HexManiac_hns::
	msgbox BattleFrontier_OutsideEast_Text_ThriveInDarkness_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_BlackBelt1_hns::
	msgbox BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Cook_hns::
	lock
	msgbox BattleFrontier_OutsideEast_Text_BelieveInYouBuddy_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_Zigzagoon_hns::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant_hns, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BattleFrontier_OutsideEast_EventScript_RichBoy_hns::
	msgbox BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_ExpertF_hns::
	msgbox BattleFrontier_OutsideEast_Text_OnceBeatGymLeader_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_TriathleteF_hns::
	msgbox BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Twin_hns::
	msgbox BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Man2_hns::
	lock
	msgbox BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_TriathleteM_hns::
	msgbox BattleFrontier_OutsideEast_Text_DidScottBringYouHere_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Sudowoodo_hns::
	lock
	faceplayer
	waitse
	playse SE_SUDOWOODO_SHAKE
	applymovement LOCALID_FRONTIER_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShake_hns
	waitmovement 0
	release
	end

BattleFrontier_OutsideEast_EventScript_WaterSudowoodo_hns::
	lock
	faceplayer
	special DoWateringBerryTreeAnim
	waitstate
	waitse
	playse SE_SUDOWOODO_SHAKE
	applymovement LOCALID_FRONTIER_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShake_hns
	waitmovement 0
	msgbox gText_Sudowoodo_Attacked, MSGBOX_DEFAULT
	closemessage
	waitse
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, LOCALID_FRONTIER_SUDOWOODO
	setwildbattle SPECIES_SUDOWOODO, 40
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo_hns
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo_hns
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo_hns
	setflag FLAG_DEFEATED_SUDOWOODO
	release
	end

BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo_hns::
	setflag FLAG_DEFEATED_SUDOWOODO
	goto Common_EventScript_RemoveStaticPokemon
	end

BattleFrontier_OutsideEast_Movement_SudowoodoShake_hns:
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	step_end

BattleFrontier_OutsideEast_EventScript_Maniac1_hns::
	msgbox BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Girl_hns::
	msgbox BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_PsychicM_hns::
	msgbox BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Man3_hns::
	msgbox BattleFrontier_OutsideEast_Text_GotWipedOut_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Woman1_hns::
	msgbox BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Woman2_hns::
	msgbox BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_BlackBelt2_hns::
	msgbox BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Maniac2_hns::
	lock
	msgbox BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_Woman3_hns::
	lock
	msgbox BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_RankingHallSign_hns::
	msgbox BattleFrontier_OutsideEast_Text_RankingHallSign_hns, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_ExchangeCornerSign_hns::
	msgbox BattleFrontier_OutsideEast_Text_ExchangeCornerSign_hns, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_Gentleman_hns::
	msgbox BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_OldWoman_hns::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_OldWoman_hnsSudowoodoGone_hns
	msgbox BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_OldWoman_hnsSudowoodoGone_hns::
	msgbox BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_Camper_hns::
	msgbox BattleFrontier_OutsideEast_Text_StickyMonWithLongTail_hns, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_Text_BattleTowerSign_hns:
	.string "DUELLTURM\n"
	.string "“Besiege alle und werde der beste\l"
	.string "TRAINER!”$"

BattleFrontier_OutsideEast_Text_BattlePalaceSign_hns:
	.string "Dies ist der KAMPFPALAST!\n"
	.string "Schaut euch die POKéMON-Kämpfe an!$"

BattleFrontier_OutsideEast_Text_BattleArenaSign_hns:
	.string "Dies ist der KAMPFRING!\n"
	.string "Hier treffen sich die stärksten Teams!$"

BattleFrontier_OutsideEast_Text_BattlePyramidSign_hns:
	.string "Dies ist die KAMPFPYRAMIDE!\n"
	.string "Geh in das Abenteuer Kampfforschung!$"

BattleFrontier_OutsideEast_Text_RankingHallSign_hns:
	.string "KAMPFZONE ERGEBNISHALLE\n"
	.string "Schau dir die neuesten Rekorde an!$"

BattleFrontier_OutsideEast_Text_ExchangeCornerSign_hns:
	.string "GEWINNPUNKTE TAUSCHECKE\n"
	.string "Löse deine Gewinnpunkte ein!$"

BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial_hns:
	.string "Wow! Ist das riiiiesig!\p"
	.string "Der DUELLTURM hat eine besondere\n"
	.string "Atmosphäre. Ganz anders als die\l"
	.string "anderen Orte.$"

BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier_hns:
	.string "Ich habe Großes vor! Ich will die\n"
	.string "KAMPF-\n"
	.string "ZONE und die POKéMON LIGA erobern!\p"
	.string "Und wenn dieser Traum wahr wird…\p"
	.string "Dann werde ich… meine Nachbarin MIMI\n"
	.string "fragen, ob sie meine Freundin wird!$"

BattleFrontier_OutsideEast_Text_PyramidTooHarsh_hns:
	.string "Die KAMPFPYRAMIDE ist wirklich\n"
	.string "hammerhart! Ich schaff das nicht!\p"
	.string "Wenn ich es auf dem normalen Weg nicht\n"
	.string "nach oben schaffe… vielleicht sollte\l"
	.string "ich dann einfach außen hochklettern?!?$"

BattleFrontier_OutsideEast_Text_ThriveInDarkness_hns:
	.string "Ich lebe von der Dunkelheit…\n"
	.string "Ja… Und welche Herausforderung ist\l"
	.string "gerade gut genug für mich?\p"
	.string "Die KAMPFPYRAMIDE! Liebst du nicht\n"
	.string "auch die Dunkelheit? Die Verzweiflung\l"
	.string "und das Ungewisse?$"

BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam_hns:
	.string "Es hat mich eine Woche Schlaf\n"
	.string "gekostet,\n"
	.string "aber jetzt habe ich es zusammen… Das\p"
	.string "ultimative Team!!! Ich sehe mich als\n"
	.string "Sieger, und nur als Sieger, kein Witz!\n"
	.string "\p"
	.string "Wir werden den KAMPFRING wie ein\n"
	.string "Orkan durchfegen und gewinnen!$"

BattleFrontier_OutsideEast_Text_DidScottBringYouHere_hns:
	.string "Hat SCOTT dich auch hierher einge-\n"
	.string "laden? Wie macht er das nur?\p"
	.string "Er scheint ein Auge für talentierte\n"
	.string "TRAINER zu haben, aber…\p"
	.string "Ich habe ihn selbst noch nie kämpfen\n"
	.string "gesehen…$"

BattleFrontier_OutsideEast_Text_BelieveInYouBuddy_hns:
	.string "ZIGG!\n"
	.string "Ich glaube an dich, mein kleiner\n"
	.string "Freund! \p"
	.string "Und wenn du gewinnst, werde ich dich\n"
	.string "mit allem, was du magst, verwöhnen!$"

BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant_hns:
	.string "ZIGZACHS schaut erwartungsvoll…$"

BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody_hns:
	.string "Die anderen sagen, ich wäre eine\n"
	.string "Nervensäge, die sich überall\n"
	.string "einmischt. \p"
	.string "Aber wenn ich ihnen nicht sage, wo\n"
	.string "es langgeht, wer dann?\l"
	.string "… \p"
	.string "Du da, dein Hut sitzt schief!\n"
	.string "Du da, wirf keinen Müll auf den Boden!\l"
	.string "Du da, du machst das ja ganz falsch!\p"
	.string "Ich glaube nicht, dass ich es jemals\n"
	.string "schaffen werde, im KAMPFPALAST\l"
	.string "still zu sein und zuzuschauen…$"

BattleFrontier_OutsideEast_Text_OnceBeatGymLeader_hns:
	.string "Heute ist das vielleicht schwer\n"
	.string "vorstellbar, aber ich habe mal einen\l"
	.string "ARENALEITER besiegt!\p"
	.string "Wer weiß? Vielleicht sollte ich es\n"
	.string "noch einmal versuchen?!?$"

BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles_hns:
	.string "Ich bin schnell mit meinem Fahrrad…\n"
	.string "Und genauso schnell bin ich auch im\p"
	.string "Kampf! Ich brauche nur eine\n"
	.string "Millisekunde für den Sieg!$"

BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon_hns:
	.string "Ich kann besser mit POKéMON umgehen\n"
	.string "als mein Vati.$"

BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy_hns:
	.string "Los, meine kleine Prinzessin! Besiege\n"
	.string "die TRAINER und mach deinen Vati\n"
	.string "stolz! \p"
	.string "Du bist deiner Mutti sehr ähnlich. Du\n"
	.string "bist dominant, du wirst das schaffen!$"

BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena_hns:
	.string "Ich wusste, der Weg hierher ist sehr\n"
	.string "schwierig zu meistern. Aber ich hatte\l"
	.string "gehört, dass hier ein umwerfend süßes\n"
	.string "\p"
	.string "Mädchen im KAMPFRING sein soll.\n"
	.string "Und weißt du, auf wen ich getroffen\n"
	.string "bin,\l"
	.string "als ich dann endlich hier ankam?!?\p"
	.string "Auf ein Team stinkender, schwitzender,\n"
	.string "primitiver und nervtötender\l"
	.string "Kampfsportler. Ich könnte platzen…$"

BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere_hns:
	.string "Manchmal läuft hier ein wichtig\n"
	.string "aussehender, älterer Herr herum.\p"
	.string "Er hat wirklich beeindruckende POKéMON\n"
	.string "und er scheint sehr nett zu sein.$"

BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid_hns:
	.string "Hast du schon mal etwas über die\n"
	.string "Legende der KAMPFPYRAMIDE gehört?\p"
	.string "Wenn ein überzeugender TRAINER den\n"
	.string "goldenen Gipfel erreicht, dann\l"
	.string "erscheint der TRAINER aller TRAINER.\p"
	.string "Wie, das wusstest du nicht?\n"
	.string "Natürlich nicht!\l"
	.string "Das habe ich doch gerade erfunden!\p"
	.string "Was das heißen soll? Hähähä, das ist\n"
	.string "mein Geheimnis!$"

BattleFrontier_OutsideEast_Text_GotWipedOut_hns:
	.string "Grummel… Motz…\n"
	.string "Ich habe bisher noch nie verloren!\p"
	.string "Aber diesmal bin ich vom Platz gefegt\n"
	.string "worden. Meine Würde ist dahin…\p"
	.string "Und dann wird mir noch an den Kopf\n"
	.string "geworfen, ich hätte kein Talent?!?\l"
	.string "Argh… Motz… Meuter…$"

BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower_hns:
	.string "Er ist auf einen mordsmäßig starken\n"
	.string "TRAINER getroffen, als er sich durch\l"
	.string "den DUELLTURM gekämpft hat.\p"
	.string "Und nun schau ihn dir an…\n"
	.string "Ein Häufchen Elend…\p"
	.string "Du musst auf alles gefasst sein, wenn\n"
	.string "du den DUELLTURM betrittst!$"

BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll_hns:
	.string "Ja!\n"
	.string "Endlich habe ich genug Gewinnpunkte!\p"
	.string "Ich werde mir eine riesige, niedliche\n"
	.string "Plüschpuppe holen!$"

BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere_hns:
	.string "Oh, yeah, okay!\n"
	.string "Dies ist also die ERGEBNISHALLE!\p"
	.string "Ich will in die Geschichte eingehen!\n"
	.string "Als\n"
	.string "Superchamp! Ich will meinen Namen für\l"
	.string "die Nachwelt verewigen.$"

BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou_hns:
	.string "Mit dir an meiner Seite…\n"
	.string "kann ich alles schaffen!!!$"

BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome_hns:
	.string "Oh, Liebling, du bist wundervoll!\p"
	.string "Oh, ich kann nicht länger warten!\p"
	.string "Lass uns sofort zu den MULTIKÄMPFEN\n"
	.string "gehen!\p"
	.string "Wenn wir zusammen in der TEAMLOUNGE\n"
	.string "sind… wird die Macht unserer Liebe\n"
	.string "alle\l"
	.string "Hindernisse beseitigen!\p"
	.string "Sie werden umfallen wie 1000 Domino-\n"
	.string "steine in einer Reihe, Liebling!$"

BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers_hns:
	.string "Die KAMPFZONE steht nicht nur\n"
	.string "starken TRAINERn offen.\p"
	.string "Hier sind auch viele, die sich durch\n"
	.string "besondere Eigenschaften und\l"
	.string "Fähigkeiten auszeichnen.\p"
	.string "Dieser SCOTT…\p"
	.string "Er hat diesen Ort mit Sicherheit\n"
	.string "gebaut,\l"
	.string "weil er etwas Höheres im Sinn hat…$"

BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle_hns:
	.string "Entschuldige! Du bist jung! Deine\n"
	.string "Augen sind bestimmt hervorragend?!?\p"
	.string "Da vorne ist ein komischer Baum, und\n"
	.string "meine müden Augen scheinen zu sehen,\l"
	.string "dass er sich bewegt.$"

BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere_hns:
	.string "Entschuldige! Du bist noch jung. Dein\n"
	.string "Gedächtnis ist bestimmt sehr gut.\p"
	.string "War hier nicht früher ein merkwürdiger\n"
	.string "Baum?!?$"

BattleFrontier_OutsideEast_Text_StickyMonWithLongTail_hns:
	.string "Ich… Ich habe es genau gesehen!!!\p"
	.string "Da vorne war ein merkwürdiges POKéMON\n"
	.string "mit einem langen Schweif!\p"
	.string "Es hatte sich unter einem Felsen\n"
	.string "versteckt und starrte mich an!$"
