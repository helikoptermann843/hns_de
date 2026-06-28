SlateportCity_OceanicMuseum_1F_MapScripts::
	.byte 0

SlateportCity_OceanicMuseum_1F_EventScript_EntranceAttendant::
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeLeft::
	lockall
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
	end

SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeRight::
	lockall
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
	end

SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee::
	showmoneybox 0, 0
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee
	closemessage
	hidemoneybox
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
	waitmovement 0
	releaseall
	end

SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee::
	checkmoney 50
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney
	playse SE_SHOP
	removemoney 50
	updatemoneybox
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
	hidemoneybox
	releaseall
	end

SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney::
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway
	msgbox SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
	waitmovement 0
	releaseall
	end

SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway::
	msgbox SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup, MSGBOX_DEFAULT
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
	hidemoneybox
	releaseall
	end

SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter:
	walk_down
	step_end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt1::
	msgbox SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt2::
	msgbox SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt3::
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt4::
	msgbox SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt5::
	msgbox SlateportCity_OceanicMuseum_1F_Text_RustboroBungled, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt6::
	msgbox SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_WhirlpoolExperiment::
	msgbox SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_WaterfallExperiment::
	msgbox SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_OceanSoilDisplay::
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_BeachSandDisplay::
	msgbox SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact1::
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact2::
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact3::
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_FossilDisplay::
	msgbox SlateportCity_OceanicMuseum_1F_Text_FossilDisplay, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_DepthMeasuringMachine::
	msgbox SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron1::
	msgbox SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron2::
	msgbox SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron3::
	msgbox SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron4::
	msgbox SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt::
	lock
	faceplayer
	delay 8
	playse SE_PIN
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, Common_Movement_Delay48
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_THIEF
	goto_if_eq VAR_RESULT, 0, SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief
	setflag FLAG_RECEIVED_TM_THIEF
	msgbox SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain, MSGBOX_DEFAULT
	closemessage
	goto_if_eq VAR_FACING, DIR_NORTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth
	goto_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth
	goto_if_eq VAR_FACING, DIR_WEST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
	goto_if_eq VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
	end

SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth::
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth
	waitmovement 0
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
	end

SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth::
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
	waitmovement 0
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
	end

SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast::
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
	waitmovement 0
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
	end

SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited::
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT
	playse SE_EXIT
	removeobject LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT
	release
	end

SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief::
	msgbox SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis, MSGBOX_DEFAULT
	release
	end

SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth:
	delay_16
	delay_8
	delay_4
	walk_in_place_faster_down
	step_end

SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast:
	delay_16
	walk_in_place_faster_down
	step_end

SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit:
	face_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_8
	step_end

SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_8
	step_end

SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter:
	.string "Willkommen im OZEANMUSEUM.\p"
	.string "Der Eintritt kostet ¥50.\n"
	.string "Hast du Interesse?$"

SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself:
	.string "Viel Vergnügen!$"

SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney:
	.string "Oh. Tut mir Leid, aber du hast\n"
	.string "anscheinend nicht genug Geld bei dir.$"

SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup:
	.string "Oh. Du gehörst zu der Gruppe, die\n"
	.string "gerade hineingegangen ist?\p"
	.string "Sie sind alle schon drin. Beeil dich,\n"
	.string "sonst verlierst du die Gruppe.$"

SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll:
	.string "Wir, TEAM AQUA, bestehen zum Besten\n"
	.string "für alle!$"

SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere:
	.string "Uns wurde befohlen, uns hier zu\n"
	.string "versammeln. Das taten wir, aber...\p"
	.string "Unser BOSS, der Galgenvogel, ist nicht\n"
	.string "hier.$"

SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich:
	.string "Wenn ich diese ganzen Sachen an mich\n"
	.string "reißen würde, wäre ich dann reich?$"

SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds:
	.string "Was ich hier lerne, kann ich für meine\n"
	.string "ruchlosen Taten gut gebrauchen…$"

SlateportCity_OceanicMuseum_1F_Text_RustboroBungled:
	.string "Wenn dieser Idiot die Sache in\n"
	.string "METAROST CITY nicht vermasselt hätte,\l"
	.string "wären wir jetzt nicht hier.$"

SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney:
	.string "Ich hatte keine ¥50, daher habe ich\n"
	.string "Ewigkeiten gebraucht, an der Rezeption\l"
	.string "vorbeizukommen.$"

SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling:
	.string "Ich möchte etwas über das Meer lernen\n"
	.string "und dieses Wissen in Kämpfen\l"
	.string "einsetzen.$"

SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel:
	.string "Mir wird ganz schwindelig und rühr-\n"
	.string "selig, wenn ich das Meer erblicke!\p"
	.string "Für mich ist KAPT. BRIGG das absolute\n"
	.string "Vorbild!$"

SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow:
	.string "Das Meer ist erbarmungslos rau und\n"
	.string "unendlich tief…\p"
	.string "In ihm müssen viele POKéMON leben, die\n"
	.string "wir bisher noch nicht kennen.$"

SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon:
	.string "Ich möchte ein POKéMON aus dem Meer\n"
	.string "haben.\p"
	.string "Wenn man das umarmt, ist es bestimmt\n"
	.string "schön kalt und wunderbar glitschig.$"

SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis:
	.string "Aiyeeh! Was machst du hier?\p"
	.string "Ich? Ich bin von TEAM AQUA. Du hast\n"
	.string "mich in den Boden gestampft. Erinnerst\l"
	.string "du dich? Im METAFLURTUNNEL?\p"
	.string "Hier, das ist für dich!\n"
	.string "Vergeben und vergessen!$"

SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain:
	.string "Mit dieser TM kannst du mehr anfangen,\n"
	.string "als ich es kann.\p"
	.string "Ich hoffe, du läufst mir nie mehr über\n"
	.string "den Weg! Muahahahaha!$"

SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis:
	.string "Oooch, komm schon!\n"
	.string "Nimm es und lass mich gehen!$"

SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment:
	.string "Eine blaue Flüssigkeit bewegt sich\n"
	.string "spiralförmig in einem Glasgefäß.\p"
	.string "“Dies ist ein Experiment, das einen\n"
	.string "künstlichen WHIRLPOOL mit Hilfe von\l"
	.string "Wind erzeugt.”$"

SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment:
	.string "Ein roter Ball hüpft in dem Glasgefäß\n"
	.string "auf und ab.\p"
	.string "“Dies ist ein Experiment, das eine\n"
	.string "künstliche KASKADE mit Hilfe des\l"
	.string "Ballauftriebs erzeugt.”$"

SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay:
	.string "Dies ist eine Probe vom Meeresboden.\p"
	.string "“Über viele Jahre haben sich die\n"
	.string "Spuren\n"
	.string "allen Lebens als Sedimente auf dem\l"
	.string "Grund des Meeres abgelagert.\p"
	.string "Analysen dieser Proben geben einen\n"
	.string "Einblick in längst vergangenes Leben.”$"

SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay:
	.string "Dies ist eine Probe vom Sand der\n"
	.string "Küste. \p"
	.string "“Die Gesteinsschichten der Berge\n"
	.string "wurden im Laufe der Jahre durch Wasser\l"
	.string "abgetragen und am Boden abgelagert.\p"
	.string "Nun sind sie nur noch kleine Körnchen,\n"
	.string "die den Sand an der Küste bilden.”$"

SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1:
	.string "“MEERESKUNDE FAKT 1”\n"
	.string "Warum ist das Wasser im Meer blau?\p"
	.string "“Licht setzt sich aus vielen\n"
	.string "Farben zusammen.\p"
	.string "Scheint das Licht durch Wasser, so\n"
	.string "gehen einige Farben verloren.\p"
	.string "Der Blauanteil des Lichts bleibt aber\n"
	.string "erhalten, das Wasser erscheint blau.”$"

SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2:
	.string "“MEERESKUNDE FAKT 2”\n"
	.string "Warum ist das Meer salzig?\p"
	.string "“Meerwasser enthält gelöste Salzionen\n"
	.string "in Form von Natrium und Chlorid.\p"
	.string "Diese Ionen wurden durch den Regen\n"
	.string "aus Gesteinsschichten herausgespült.\p"
	.string "Die Konzentration des aufgelösten\n"
	.string "Salzes macht das Meer salzig.”$"

SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3:
	.string "“MEERESKUNDE FAKT 3”\n"
	.string "Was ist größer? Das Meer oder das\n"
	.string "Land? \p"
	.string "“Die Erde ist zu 70 % von Wasser\n"
	.string "bedeckt, der Rest ist Land.\p"
	.string "Das Meer ist also mehr als doppelt\n"
	.string "so groß wie das Land.”$"

SlateportCity_OceanicMuseum_1F_Text_FossilDisplay:
	.string "Das ist ein Fossil mit vielen Furchen.\n"
	.string "\p"
	.string "“Das Erdreich des Meeresbodens wird\n"
	.string "durch die Gezeiten abgetragen.\p"
	.string "Die Bewegungen des Wassers zeichnen\n"
	.string "Rillen und Wellen in den Meeresboden.\n"
	.string "\p"
	.string "Wenn der Meeresboden versteinert, wird\n"
	.string "ein Bodenrelief sichtbar.”$"

SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine:
	.string "Eine seltsame Vorrichtung rotiert\n"
	.string "unter einer Glaskuppel.\p"
	.string "Vielleicht misst sie die Tiefe von\n"
	.string "irgendetwas…$"

