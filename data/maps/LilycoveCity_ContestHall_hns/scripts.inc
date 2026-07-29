@ All the LOCALID constants used in this file are essentially redundant.
@ They're all used to have the NPC the player talked to turn back so they're facing
@ their original direction (because they're watching/participating in the contests).
@ They could all be substituted for VAR_LAST_TALKED.
LilycoveCity_ContestHall_hns_MapScripts::
	.byte 0

LilycoveCity_ContestHall_EventScript_Boy1_hns::
	msgbox LilycoveCity_ContestHall_Text_TodayWonSmartnessContest_hns, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_Boy2_hns::
	msgbox LilycoveCity_ContestHall_Text_EnteredBunchOfContests_hns, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_Girl_hns::
	msgbox LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks_hns, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_Sailor_hns::
	msgbox LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous_hns, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_SmartContestMC_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_MC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestJudge_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_JUDGE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant1_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_EnteredWrongContest_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant2_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_RaisedMonToBeSmart_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant3_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant4_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience1_hns::
	msgbox LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa_hns, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience2_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_AUDIENCE_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience3_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_AUDIENCE_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience4_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_StillLoveSmartnessContests_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_AUDIENCE_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestMC_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_MC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestJudge_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_JUDGE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant1_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant2_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_OverdidGrooming_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant3_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant4_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestAudience1_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_AUDIENCE_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestAudience2_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_AUDIENCE_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestAudience3_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_AUDIENCE_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestMC_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_InTheMiddleOfContest_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_MC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestJudge_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_JUDGE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant1_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_MyAzurillWasDistracted_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant2_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_NeverWonBattleButContest_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant3_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_PetalDanceIsMarvel_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant4_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestAudience1_hns::
	lockall
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_ContestHall_Text_MyChildIsInContest_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	delay 25
	msgbox LilycoveCity_ContestHall_Text_ComeOnDear_hns, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestHall_EventScript_CuteContestAudience2_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_AUDIENCE_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestAudience3_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_AUDIENCE_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyStageSign_hns::
	msgbox LilycoveCity_ContestHall_Text_BeautyContestStage_hns, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_EventScript_CuteStageSign_hns::
	msgbox LilycoveCity_ContestHall_Text_CuteContestStage_hns, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_EventScript_SmartStageSign_hns::
	msgbox LilycoveCity_ContestHall_Text_SmartContestStage_hns, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_Text_TodayWonSmartnessContest_hns:
	.string "Dieses Pokémon hat den vorherigen\n"
	.string "Schönheitswettbewerb gewonnen.\p"
	.string "Weißt du was? Heute werde ich den\n"
	.string "Klugheits-Wettbewerb gewinnen!\p"
	.string "Meine Fähigkeiten erstaunen sogar\n"
	.string "mich…$"

LilycoveCity_ContestHall_Text_EnteredBunchOfContests_hns:
	.string "Ich habe einige Wettbewerbe mitge-\n"
	.string "macht, weil ich wissen wollte, wie\l"
	.string "das so läuft.\p"
	.string "Wenn du an einem Coolness-Wettbewerb\n"
	.string "teilnimmst, zählen Coole Attacken.\p"
	.string "Anmutige oder kluge Attacken sind\n"
	.string "dagegen nicht so angesagt.$"

LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks_hns:
	.string "Der junge Mann, der vor kurzem hier\n"
	.string "ge-\n"
	.string "wonnen hat, hatte viele verschiedene\l"
	.string "{POKEBLOCK} bei sich.\p"
	.string "Ob man gewinnt, wenn man genug dieser\n"
	.string "Items dabei hat?$"

LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous_hns:
	.string "Wow, dieser Ort ist einfach riesig!\p"
	.string "Diese Spannung in der Luft… Das ist\n"
	.string "kein Vergleich zu einer Wettbewerbs-\l"
	.string "halle in der tiefsten Provinz.$"

LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal_hns:
	.string "MC: Okay, Kluge Pokémon und Trainer.\n"
	.string "Seid ihr bereit?!?\p"
	.string "Gebt euer Bestes!\n"
	.string "Es geht um den Ausdruck!$"

LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest_hns:
	.string "Juror: Gefällt euch dieser\n"
	.string "Wettbewerb?\p"
	.string "Komm mit drei Freunden wieder her,\n"
	.string "dann könnt ihr alle gemeinsam am\l"
	.string "Wettbewerb teilnehmen.$"

LilycoveCity_ContestHall_Text_EnteredWrongContest_hns:
	.string "Eieieiei…\n"
	.string "Ich habe am falschen Wettbewerb teil-\l"
	.string "genommen. Hach…\p"
	.string "Ich habe dieses starke Pokémon in\n"
	.string "einen Klugheits-Wettbewerb\l"
	.string "geschickt.\p"
	.string "Los, beeindrucke mit einem\n"
	.string "klugen Zertrümmerer.$"

LilycoveCity_ContestHall_Text_RaisedMonToBeSmart_hns:
	.string "Ich habe viele Jahre und all meine\n"
	.string "Weisheit gebraucht, um dieses Pokémon\l"
	.string "Klug zu machen.\p"
	.string "Damit mache ich es den jungen Spunden\n"
	.string "nicht leicht, mein Pokémon zu über-\l"
	.string "trumpfen.\p"
	.string "Mein holdes Weib, siehst du das?$"

LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext_hns:
	.string "Das ist es!\p"
	.string "Wenn mein Pokémon eine kluge Attacke\n"
	.string "vorführt, wird das Publikum ausflippen\l"
	.string "vor Begeisterung!$"

LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife_hns:
	.string "Oh, du liebe Güte, nein!\p"
	.string "Der Blutsauger meines Zubat ist\n"
	.string "wirklich anmutig, daher setze ich ihn\l"
	.string "immer wieder ein!\p"
	.string "Aber diese gemeinen Leute wissen das\n"
	.string "überhaupt nicht zu schätzen!$"

LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa_hns:
	.string "Kiaaayh! Du bist wunderbar, Opa!$"

LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves_hns:
	.string "Selbst wenn die Trainer die gleichen\n"
	.string "Pokémon einsetzen, so führen sie doch\l"
	.string "unterschiedliche Attacken vor.\p"
	.string "Das ist so wie bei den Kämpfen: Jeder\n"
	.string "hat seinen eigenen Stil.$"

LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers_hns:
	.string "Ich denke, die Pokémon machen einen\n"
	.string "klügeren Eindruck als ihre Trainer.$"

LilycoveCity_ContestHall_Text_StillLoveSmartnessContests_hns:
	.string "Jetzt, wo alles vorbei ist, liebe ich\n"
	.string "Klugheits-Wettbewerbe noch immer.\p"
	.string "Diese intellektuelle, grüne Farbe…\n"
	.string "Das ist so… so… so cooool!$"

LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest_hns:
	.string "MC: Nimmst du auch am Schönheits-\n"
	.string "wettbewerb teil? Viel Glück!$"

LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty_hns:
	.string "Juror: Ah, jedes Pokémon ist ein\n"
	.string "Beispiel makelloser Schönheit!\p"
	.string "Huch, fast hätte ich vergessen, sie zu\n"
	.string "bewerten…$"

LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty_hns:
	.string "Ein Pokémon von dieser Schönheit…\n"
	.string "Es gibt keines wie dieses.\p"
	.string "Jedem werden die Augen übergehen, wenn\n"
	.string "er diese Schönheit betrachtet.$"

LilycoveCity_ContestHall_Text_OverdidGrooming_hns:
	.string "Aaaaargh!\p"
	.string "Ich habe mein Pokémon für diesen Wett-\n"
	.string "bewerb sorgfältig gebürstet und\l"
	.string "gestriegelt.\p"
	.string "Dabei habe ich wohl übertrieben…\n"
	.string "Das Fell meines Pokémon ist nun ganz\l"
	.string "voller Fusseln…\p"
	.string "Was soll ich jetzt nur tun?$"

LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam_hns:
	.string "Der Aurorastrahl ist eine so blendende\n"
	.string "Erscheinung, dass der Juror sie nicht\l"
	.string "sehen wird.\p"
	.string "Äh, einen Moment mal…\n"
	.string "Dann ist sie ja völlig sinnlos…$"

LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe_hns:
	.string "Dieses hübsche Pokémon sieht genauso\n"
	.string "aus wie ich, als ich jünger war.\p"
	.string "Als ich das zu meinem Mann sagte, hat\l"
	.string "er\n"
	.string "den Kaffee, den er trank, ausgespuckt.\p"
	.string "\p"
	.string "Was ist daran so lustig?$"

LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy_hns:
	.string "Natürlich, als Frau wäre ich\n"
	.string "überglück-\n"
	.string "lich, wenn ich den Schönheits-\l"
	.string "wettbewerb gewinnen würde.$"

LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon_hns:
	.string "Ahahahahaha!\p"
	.string "Wirf mal einen Blick auf all diese\n"
	.string "schönen Pokémon!\l"
	.string "Ich liebe diesen Liebreiz!$"

LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone_hns:
	.string "Du kannst nicht immer nur aufgrund von\n"
	.string "Schönheit gewinnen.\p"
	.string "Du musst dein Pokémon striegeln, damit\n"
	.string "es so schön und glänzend ist wie\l"
	.string "meines.$"

LilycoveCity_ContestHall_Text_InTheMiddleOfContest_hns:
	.string "MC: Oh oh! Hallo!\n"
	.string "Wir sind mitten in einem Wettbewerb!\p"
	.string "Lass dich bitte zuerst am Schalter\n"
	.string "registrieren und komm dann wieder, ja?$"

LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals_hns:
	.string "Juror: Oh, was für reizende und\n"
	.string "anmutige Ausdrücke!\p"
	.string "Oh, meine Güte! Was für ein perfekter\n"
	.string "Nassmacher-Ausdruck!$"

LilycoveCity_ContestHall_Text_MyAzurillWasDistracted_hns:
	.string "Oh, nein… Mein Azurill wurde von\n"
	.string "einem anderen Pokémon abgelenkt.$"

LilycoveCity_ContestHall_Text_NeverWonBattleButContest_hns:
	.string "Mein Pokémon hat noch nie einen Kampf\n"
	.string "gewonnen. Aber geh mit ihm in einen\l"
	.string "Wettbewerb und pass auf, was passiert.$"

LilycoveCity_ContestHall_Text_PetalDanceIsMarvel_hns:
	.string "Der Blättertanz meines Pokémon ist der\n"
	.string "Inbegriff von Eleganz.\p"
	.string "Ich lasse es nicht zu, dass irgend-\n"
	.string "jemand es dabei stört.$"

LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter_hns:
	.string "All diese Pokémon sind anmutig.\p"
	.string "Aber, wenn mein Pokémon einen\n"
	.string "anmutigen Ausdruck vorführt…\p"
	.string "Ich bin sicher, dass es dann anmutiger\n"
	.string "als all die anderen Pokémon sein wird.$"

LilycoveCity_ContestHall_Text_MyChildIsInContest_hns:
	.string "Mein Kind nimmt an diesem Wettbewerb\n"
	.string "teil.$"

LilycoveCity_ContestHall_Text_ComeOnDear_hns:
	.string "Los, mein Schatz! Zeig es ihnen!\n"
	.string "Dein Pokémon ist das Beste!$"

LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest_hns:
	.string "Ich finde, das Mädchen dort drüben ist\n"
	.string "das anmutigste Geschöpf von allen.\p"
	.string "Wie bitte? Sie bewerten die Pokémon\n"
	.string "nach ihrer Anmut?!?$"

LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn_hns:
	.string "Oooh, all diese anmutigen Pokémon!\n"
	.string "Ich möchte auch gerne eines haben!\p"
	.string "Ich werde mir jetzt eines fangen.$"

LilycoveCity_ContestHall_Text_BeautyContestStage_hns:
	.string "Bühne des Schönheitswettbewerbs\n"
	.string "Sei Geblendet von Schönen Pokémon!$"

LilycoveCity_ContestHall_Text_CuteContestStage_hns:
	.string "Bühne des Anmutwettbewerbs\n"
	.string "Sei Gefesselt von Anmutigen Pokémon!$"

LilycoveCity_ContestHall_Text_SmartContestStage_hns:
	.string "Bühne des Klugheits-Wettbewerbs\n"
	.string "Sei Beeindruckt von Klugen Pokémon!$"

