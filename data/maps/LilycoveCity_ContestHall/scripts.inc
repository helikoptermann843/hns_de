@ All the LOCALID constants used in this file are essentially redundant.
@ They're all used to have the NPC the player talked to turn back so they're facing
@ their original direction (because they're watching/participating in the contests).
@ They could all be substituted for VAR_LAST_TALKED.
LilycoveCity_ContestHall_MapScripts::
	.byte 0

LilycoveCity_ContestHall_EventScript_Boy1::
	msgbox LilycoveCity_ContestHall_Text_TodayWonSmartnessContest, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_Boy2::
	msgbox LilycoveCity_ContestHall_Text_EnteredBunchOfContests, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_Girl::
	msgbox LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_Sailor::
	msgbox LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_SmartContestMC::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_MC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestJudge::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_JUDGE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant1::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_EnteredWrongContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_RaisedMonToBeSmart, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant4::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience1::
	msgbox LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_AUDIENCE_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_AUDIENCE_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience4::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_StillLoveSmartnessContests, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_AUDIENCE_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestMC::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_MC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestJudge::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_JUDGE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant1::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_OverdidGrooming, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant4::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestAudience1::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_AUDIENCE_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestAudience2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_AUDIENCE_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestAudience3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_AUDIENCE_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestMC::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_InTheMiddleOfContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_MC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestJudge::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_JUDGE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant1::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_MyAzurillWasDistracted, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_NeverWonBattleButContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_PetalDanceIsMarvel, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant4::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestAudience1::
	lockall
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_ContestHall_Text_MyChildIsInContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	delay 25
	msgbox LilycoveCity_ContestHall_Text_ComeOnDear, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestHall_EventScript_CuteContestAudience2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_AUDIENCE_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestAudience3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_AUDIENCE_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyStageSign::
	msgbox LilycoveCity_ContestHall_Text_BeautyContestStage, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_EventScript_CuteStageSign::
	msgbox LilycoveCity_ContestHall_Text_CuteContestStage, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_EventScript_SmartStageSign::
	msgbox LilycoveCity_ContestHall_Text_SmartContestStage, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_Text_TodayWonSmartnessContest:
	.string "Dieses POKéMON hat den vorherigen\n"
	.string "SCHÖNHEITSWETTBEWERB gewonnen.\p"
	.string "Weißt du was? Heute werde ich den\n"
	.string "KLUGHEITS-WETTBEWERB gewinnen!\p"
	.string "Meine Fähigkeiten erstaunen sogar\n"
	.string "mich…$"

LilycoveCity_ContestHall_Text_EnteredBunchOfContests:
	.string "Ich habe einige WETTBEWERBe mitge-\n"
	.string "macht, weil ich wissen wollte, wie\l"
	.string "das so läuft.\p"
	.string "Wenn du an einem COOLNESS-WETTBEWERB\n"
	.string "teilnimmst, zählen COOLe Attacken.\p"
	.string "Anmutige oder kluge Attacken sind\n"
	.string "dagegen nicht so angesagt.$"

LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks:
	.string "Der junge Mann, der vor kurzem hier\n"
	.string "ge-\n"
	.string "wonnen hat, hatte viele verschiedene\l"
	.string "{POKEBLOCK} bei sich.\p"
	.string "Ob man gewinnt, wenn man genug dieser\n"
	.string "Items dabei hat?$"

LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous:
	.string "Wow, dieser Ort ist einfach riesig!\p"
	.string "Diese Spannung in der Luft… Das ist\n"
	.string "kein Vergleich zu einer WETTBEWERBs-\l"
	.string "HALLE in der tiefsten Provinz.$"

LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal:
	.string "MC: Okay, KLUGe POKéMON und TRAINER.\n"
	.string "Seid ihr bereit?!?\p"
	.string "Gebt euer Bestes!\n"
	.string "Es geht um den Ausdruck!$"

LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest:
	.string "JUROR: Gefällt euch dieser\n"
	.string "WETTBEWERB?\p"
	.string "Komm mit drei Freunden wieder her,\n"
	.string "dann könnt ihr alle gemeinsam am\l"
	.string "WETTBEWERB teilnehmen.$"

LilycoveCity_ContestHall_Text_EnteredWrongContest:
	.string "Eieieiei…\n"
	.string "Ich habe am falschen WETTBEWERB teil-\l"
	.string "genommen. Hach…\p"
	.string "Ich habe dieses starke POKéMON in\n"
	.string "einen KLUGHEITS-WETTBEWERB\l"
	.string "geschickt.\p"
	.string "Los, beeindrucke mit einem\n"
	.string "klugen ZERTRÜMMERER.$"

LilycoveCity_ContestHall_Text_RaisedMonToBeSmart:
	.string "Ich habe viele Jahre und all meine\n"
	.string "Weisheit gebraucht, um dieses POKéMON\l"
	.string "KLUG zu machen.\p"
	.string "Damit mache ich es den jungen Spunden\n"
	.string "nicht leicht, mein POKéMON zu über-\l"
	.string "trumpfen.\p"
	.string "Mein holdes Weib, siehst du das?$"

LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext:
	.string "Das ist es!\p"
	.string "Wenn mein POKéMON eine kluge Attacke\n"
	.string "vorführt, wird das Publikum ausflippen\l"
	.string "vor Begeisterung!$"

LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife:
	.string "Oh, du liebe Güte, nein!\p"
	.string "Der BLUTSAUGER meines ZUBAT ist\n"
	.string "wirklich anmutig, daher setze ich ihn\l"
	.string "immer wieder ein!\p"
	.string "Aber diese gemeinen Leute wissen das\n"
	.string "überhaupt nicht zu schätzen!$"

LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa:
	.string "Kiaaayh! Du bist wunderbar, Opa!$"

LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves:
	.string "Selbst wenn die TRAINER die gleichen\n"
	.string "POKéMON einsetzen, so führen sie doch\l"
	.string "unterschiedliche Attacken vor.\p"
	.string "Das ist so wie bei den Kämpfen: Jeder\n"
	.string "hat seinen eigenen Stil.$"

LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers:
	.string "Ich denke, die POKéMON machen einen\n"
	.string "klügeren Eindruck als ihre TRAINER.$"

LilycoveCity_ContestHall_Text_StillLoveSmartnessContests:
	.string "Jetzt, wo alles vorbei ist, liebe ich\n"
	.string "KLUGHEITS-WETTBEWERBe noch immer.\p"
	.string "Diese intellektuelle, grüne Farbe…\n"
	.string "Das ist so… so… so cooool!$"

LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest:
	.string "MC: Nimmst du auch am SCHÖNHEITS-\n"
	.string "WETTBEWERB teil? Viel Glück!$"

LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty:
	.string "JUROR: Ah, jedes POKéMON ist ein\n"
	.string "Beispiel makelloser Schönheit!\p"
	.string "Huch, fast hätte ich vergessen, sie zu\n"
	.string "bewerten…$"

LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty:
	.string "Ein POKéMON von dieser Schönheit…\n"
	.string "Es gibt keines wie dieses.\p"
	.string "Jedem werden die Augen übergehen, wenn\n"
	.string "er diese Schönheit betrachtet.$"

LilycoveCity_ContestHall_Text_OverdidGrooming:
	.string "Aaaaargh!\p"
	.string "Ich habe mein POKéMON für diesen WETT-\n"
	.string "BEWERB sorgfältig gebürstet und\l"
	.string "gestriegelt.\p"
	.string "Dabei habe ich wohl übertrieben…\n"
	.string "Das Fell meines POKéMON ist nun ganz\l"
	.string "voller Fusseln…\p"
	.string "Was soll ich jetzt nur tun?$"

LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam:
	.string "Der AURORASTRAHL ist eine so blendende\n"
	.string "Erscheinung, dass der JUROR sie nicht\l"
	.string "sehen wird.\p"
	.string "Äh, einen Moment mal…\n"
	.string "Dann ist sie ja völlig sinnlos…$"

LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe:
	.string "Dieses hübsche POKéMON sieht genauso\n"
	.string "aus wie ich, als ich jünger war.\p"
	.string "Als ich das zu meinem Mann sagte, hat\l"
	.string "er\n"
	.string "den Kaffee, den er trank, ausgespuckt.\p"
	.string "\p"
	.string "Was ist daran so lustig?$"

LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy:
	.string "Natürlich, als Frau wäre ich\n"
	.string "überglück-\n"
	.string "lich, wenn ich den SCHÖNHEITS-\l"
	.string "WETTBEWERB gewinnen würde.$"

LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon:
	.string "Ahahahahaha!\p"
	.string "Wirf mal einen Blick auf all diese\n"
	.string "schönen POKéMON!\l"
	.string "Ich liebe diesen Liebreiz!$"

LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone:
	.string "Du kannst nicht immer nur aufgrund von\n"
	.string "Schönheit gewinnen.\p"
	.string "Du musst dein POKéMON striegeln, damit\n"
	.string "es so schön und glänzend ist wie\l"
	.string "meines.$"

LilycoveCity_ContestHall_Text_InTheMiddleOfContest:
	.string "MC: Oh oh! Hallo!\n"
	.string "Wir sind mitten in einem WETTBEWERB!\p"
	.string "Lass dich bitte zuerst am Schalter\n"
	.string "registrieren und komm dann wieder, ja?$"

LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals:
	.string "JUROR: Oh, was für reizende und\n"
	.string "anmutige Ausdrücke!\p"
	.string "Oh, meine Güte! Was für ein perfekter\n"
	.string "NASSMACHER-Ausdruck!$"

LilycoveCity_ContestHall_Text_MyAzurillWasDistracted:
	.string "Oh, nein… Mein AZURILL wurde von\n"
	.string "einem anderen POKéMON abgelenkt.$"

LilycoveCity_ContestHall_Text_NeverWonBattleButContest:
	.string "Mein POKéMON hat noch nie einen Kampf\n"
	.string "gewonnen. Aber geh mit ihm in einen\l"
	.string "WETTBEWERB und pass auf, was passiert.$"

LilycoveCity_ContestHall_Text_PetalDanceIsMarvel:
	.string "Der BLÄTTERTANZ meines POKéMON ist der\n"
	.string "Inbegriff von Eleganz.\p"
	.string "Ich lasse es nicht zu, dass irgend-\n"
	.string "jemand es dabei stört.$"

LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter:
	.string "All diese POKéMON sind anmutig.\p"
	.string "Aber, wenn mein POKéMON einen\n"
	.string "anmutigen Ausdruck vorführt…\p"
	.string "Ich bin sicher, dass es dann anmutiger\n"
	.string "als all die anderen POKéMON sein wird.$"

LilycoveCity_ContestHall_Text_MyChildIsInContest:
	.string "Mein Kind nimmt an diesem WETTBEWERB\n"
	.string "teil.$"

LilycoveCity_ContestHall_Text_ComeOnDear:
	.string "Los, mein Schatz! Zeig es ihnen!\n"
	.string "Dein POKéMON ist das Beste!$"

LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest:
	.string "Ich finde, das Mädchen dort drüben ist\n"
	.string "das anmutigste Geschöpf von allen.\p"
	.string "Wie bitte? Sie bewerten die POKéMON\n"
	.string "nach ihrer Anmut?!?$"

LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn:
	.string "Oooh, all diese anmutigen POKéMON!\n"
	.string "Ich möchte auch gerne eines haben!\p"
	.string "Ich werde mir jetzt eines fangen.$"

LilycoveCity_ContestHall_Text_BeautyContestStage:
	.string "BÜHNE DES SCHÖNHEITSWETTBEWERBS\n"
	.string "SEI GEBLENDET VON SCHÖNEN POKéMON!$"

LilycoveCity_ContestHall_Text_CuteContestStage:
	.string "BÜHNE DES ANMUTWETTBEWERBS\n"
	.string "SEI GEFESSELT VON ANMUTIGEN POKéMON!$"

LilycoveCity_ContestHall_Text_SmartContestStage:
	.string "BÜHNE DES KLUGHEITS-WETTBEWERBS\n"
	.string "SEI BEEINDRUCKT VON KLUGEN POKéMON!$"

