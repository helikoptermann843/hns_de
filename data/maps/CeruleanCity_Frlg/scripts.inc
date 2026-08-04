CeruleanCity_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_OnTransition
	.byte 0

CeruleanCity_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_CERULEAN_CITY
	call_if_unset FLAG_GOT_SS_TICKET, CeruleanCity_EventScript_BlockExits
	end

CeruleanCity_EventScript_BlockExits::
	setobjectxyperm LOCALID_CERULEAN_POLICEMAN, 30, 12
	setobjectxyperm LOCALID_CERULEAN_SLOWBRO, 26, 31
	setobjectxyperm LOCALID_CERULEAN_LASS, 27, 31
	return

CeruleanCity_EventScript_RivalTriggerLeft::
	lockall
	setvar VAR_TEMP_1, 0
	goto CeruleanCity_EventScript_Rival
	end

CeruleanCity_EventScript_RivalTriggerMid::
	lockall
	setvar VAR_TEMP_1, 1
	setobjectxyperm LOCALID_CERULEAN_RIVAL, 23, 0
	goto CeruleanCity_EventScript_Rival
	end

CeruleanCity_EventScript_RivalTriggerRight::
	lockall
	setvar VAR_TEMP_1, 2
	setobjectxyperm LOCALID_CERULEAN_RIVAL, 24, 0
	goto CeruleanCity_EventScript_Rival
	end

CeruleanCity_EventScript_Rival::
	textcolor NPC_TEXT_COLOR_MALE
	setvar VAR_MAP_SCENE_ROUTE22, 2
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
	addobject LOCALID_CERULEAN_RIVAL
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalEnter
	waitmovement 0
	msgbox CeruleanCity_Text_RivalIntro
	setvar VAR_LAST_TALKED, LOCALID_CERULEAN_RIVAL
	call_if_eq VAR_STARTER_MON, 2, CeruleanCity_EventScript_RivalSquirtle
	call_if_eq VAR_STARTER_MON, 1, CeruleanCity_EventScript_RivalBulbasaur
	call_if_eq VAR_STARTER_MON, 0, CeruleanCity_EventScript_RivalCharmander
	famechecker FAMECHECKER_BILL, 0
	msgbox CeruleanCity_Text_RivalPostBattle
	closemessage
	playbgm MUS_RG_RIVAL_EXIT, 0
	call_if_eq VAR_TEMP_1, 0, CeruleanCity_EventScript_RivalStartExit
	call_if_eq VAR_TEMP_1, 1, CeruleanCity_EventScript_RivalStartExit
	call_if_eq VAR_TEMP_1, 2, CeruleanCity_EventScript_RivalStartExitRight
	msgbox CeruleanCity_Text_OhRightLittlePresentAsFavor
	setvar VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1
	setflag FLAG_GOT_FAME_CHECKER
	giveitem ITEM_FAME_CHECKER
	msgbox CeruleanCity_Text_ExplainFameCheckerSmellYa
	closemessage
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalExit
	waitmovement 0
	fadedefaultbgm
	removeobject LOCALID_CERULEAN_RIVAL
	releaseall
	end

CeruleanCity_EventScript_RivalSquirtle::
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_SQUIRTLE, CeruleanCity_Text_RivalDefeat
	return

CeruleanCity_EventScript_RivalBulbasaur::
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_BULBASAUR, CeruleanCity_Text_RivalDefeat
	return

CeruleanCity_EventScript_RivalCharmander::
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_CHARMANDER, CeruleanCity_Text_RivalDefeat
	return

CeruleanCity_EventScript_RivalStartExit::
	applymovement LOCALID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExit
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalStartExit
	waitmovement 0
	return

CeruleanCity_EventScript_RivalStartExitRight::
	applymovement LOCALID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExitRight
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalStartExitRight
	waitmovement 0
	return

CeruleanCity_Movement_PlayerWatchRivalExit::
	delay_16
	delay_8
	walk_in_place_faster_right
	delay_16
	walk_in_place_faster_down
	step_end

CeruleanCity_Movement_PlayerWatchRivalExitRight::
	delay_16
	delay_8
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_down
	step_end

CeruleanCity_Movement_RivalEnter::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

CeruleanCity_Movement_RivalStartExit::
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_16
	delay_16
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

CeruleanCity_Movement_RivalStartExitRight::
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_16
	delay_16
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

CeruleanCity_Movement_RivalExit::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

CeruleanCity_EventScript_Grunt::
	lock
	faceplayer
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_EventScript_GruntDefeated
	message CeruleanCity_Text_GruntIntro
	waitmessage
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
	waitbuttonpress
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
	goto CeruleanCity_EventScript_GruntDefeated
	end

CeruleanCity_EventScript_GruntDefeated::
	msgbox CeruleanCity_Text_OkayIllReturnStolenTM
	checkitemspace ITEM_TM28
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_EventScript_NoRoomForTM28
	giveitem_msg CeruleanCity_Text_RecoveredTM28FromGrunt, ITEM_TM28
	msgbox CeruleanCity_Text_BetterGetMovingBye
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_CERULEAN_GRUNT
	fadescreenswapbuffers FADE_FROM_BLACK
	setflag FLAG_GOT_TM28_FROM_ROCKET
	release
	end

CeruleanCity_EventScript_NoRoomForTM28::
	textcolor NPC_TEXT_COLOR_MALE
	msgbox CeruleanCity_Text_MakeRoomForThisCantRun
	release
	end

CeruleanCity_EventScript_GruntTriggerTop::
	lockall
	setvar VAR_TEMP_1, 0
	applymovement LOCALID_CERULEAN_GRUNT, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	goto CeruleanCity_EventScript_GruntTrigger
	end

CeruleanCity_EventScript_GruntTriggerBottom::
	lockall
	setvar VAR_TEMP_1, 1
	applymovement LOCALID_CERULEAN_GRUNT, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	goto CeruleanCity_EventScript_GruntTrigger
	end

CeruleanCity_EventScript_GruntTrigger::
	textcolor NPC_TEXT_COLOR_MALE
	msgbox CeruleanCity_Text_GruntIntro
	setvar VAR_LAST_TALKED, LOCALID_CERULEAN_GRUNT
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
	goto CeruleanCity_EventScript_GruntDefeated
	end

CeruleanCity_EventScript_Policeman::
	lock
	faceplayer
	msgbox CeruleanCity_Text_PeopleHereWereRobbed
	closemessage
	applymovement LOCALID_CERULEAN_POLICEMAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

CeruleanCity_EventScript_LittleBoy::
	lock
	faceplayer
	goto_if_set FLAG_GOT_SS_TICKET, CeruleanCity_EventScript_LittleBoySlowbroMoved
	msgbox CeruleanCity_Text_IfSlowbroWasntThereCouldCutTree
	release
	end

CeruleanCity_EventScript_LittleBoySlowbroMoved::
	msgbox CeruleanCity_Text_YouCanCutDownSmallTrees
	release
	end

CeruleanCity_EventScript_BaldingMan::
	msgbox CeruleanCity_Text_PokemonEncyclopediaAmusing, MSGBOX_NPC
	end

CeruleanCity_EventScript_Youngster::
	msgbox CeruleanCity_Text_TrainerLifeIsToughIsntIt, MSGBOX_NPC
	end

CeruleanCity_EventScript_CeruleanCaveGuard::
	msgbox CeruleanCity_Text_ThisIsCeruleanCave, MSGBOX_NPC
	end

CeruleanCity_EventScript_Woman::
	lock
	faceplayer
	msgbox CeruleanCity_Text_WantBrightRedBicycle
	closemessage
	applymovement LOCALID_CERULEAN_WOMAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

CeruleanCity_EventScript_Lass::
	lock
	random 3
	copyvar VAR_0x8008, VAR_RESULT
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroCommand1
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroCommand2
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroCommand3
	waitmessage
	delay 40
	playse SE_PIN
	applymovement LOCALID_CERULEAN_SLOWBRO, Common_Movement_QuestionMark
	waitmovement 0
	delay 30
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroFailed1
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroFailed2
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroFailed3
	release
	end

CeruleanCity_EventScript_SlowbroCommand1::
	message CeruleanCity_Text_SlowbroUseSonicboom
	return

CeruleanCity_EventScript_SlowbroCommand2::
	message CeruleanCity_Text_SlowbroPunch
	return

CeruleanCity_EventScript_SlowbroCommand3::
	message CeruleanCity_Text_SlowbroWithdraw
	return

CeruleanCity_EventScript_SlowbroFailed1::
	msgbox CeruleanCity_Text_SlowbroPayAttention
	return

CeruleanCity_EventScript_SlowbroFailed2::
	msgbox CeruleanCity_Text_NoYouBlewItAgain
	return

CeruleanCity_EventScript_SlowbroFailed3::
	msgbox CeruleanCity_Text_HardToControlMonsObedience
	return

CeruleanCity_EventScript_Slowbro::
	lock
	random 4
	copyvar VAR_0x8008, VAR_RESULT
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroText1
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroText2
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroText3
	call_if_eq VAR_0x8008, 3, CeruleanCity_EventScript_SlowbroText4
	release
	end

CeruleanCity_EventScript_SlowbroText1::
	msgbox CeruleanCity_Text_SlowbroTookSnooze
	return

CeruleanCity_EventScript_SlowbroText2::
	msgbox CeruleanCity_Text_SlowbroLoafingAround
	return

CeruleanCity_EventScript_SlowbroText3::
	msgbox CeruleanCity_Text_SlowbroTurnedAway
	return

CeruleanCity_EventScript_SlowbroText4::
	msgbox CeruleanCity_Text_SlowbroIgnoredOrders
	return

CeruleanCity_EventScript_CitySign::
	msgbox CeruleanCity_Text_CitySign, MSGBOX_SIGN
	end

CeruleanCity_EventScript_TrainerTips::
	msgbox CeruleanCity_Text_TrainerTipsHeldItems, MSGBOX_SIGN
	end

CeruleanCity_EventScript_BikeShopSign::
	msgbox CeruleanCity_Text_BikeShopSign, MSGBOX_SIGN
	end

CeruleanCity_EventScript_GymSign::
	lockall
	famechecker FAMECHECKER_MISTY, 0
	msgbox CeruleanCity_Text_GymSign
	releaseall
	end

CeruleanCity_Text_RivalIntro::
	.string "{RIVAL}: Hi, {PLAYER}!\p"
	.string "Du bist also immer noch unterwegs!\p"
	.string "Mir geht es bestens! Ich habe jede\n"
	.string "Menge neue, starke Pokémon\l"
	.string "gefangen!\p"
	.string "Zeig, was du gefangen hast,\n"
	.string "{PLAYER}!$"

CeruleanCity_Text_RivalDefeat::
	.string "Heh, schon gut! Du hast gewonnen!$"

CeruleanCity_Text_RivalPostBattle::
	.string "{RIVAL}: Soll ich dir was\n"
	.string "verraten?\p"
	.string "Ich war bei Bill und habe mir\n"
	.string "seine seltenen Pokémon zeigen\l"
	.string "lassen!\p"
	.string "Das hat mir einige Einträge in\n"
	.string "meinem Pokédex gebracht!\p"
	.string "Bill ist weltweit als Pokémaniac\n"
	.string "bekannt!\p"
	.string "Er hat das Pokémon-Lagerungs-\n"
	.string "System für den PC entwickelt!\p"
	.string "Du kannst dich bei ihm dafür\n"
	.string "bedanken!\p"
	.string "Na ja, ich hau ab!\n"
	.string "Mach es gut!$"

CeruleanCity_Text_OhRightLittlePresentAsFavor::
	.string "Oh, ja, genau!\p"
	.string "Du tust mir Leid. Nein, wirklich!\n"
	.string "Du mühst dich immer so ab.\p"
	.string "Darum will ich dir einen Gefallen\n"
	.string "tun und schenke dir das!$"

CeruleanCity_Text_ExplainFameCheckerSmellYa::
	.string "Ein redseliges Plappermaul wie du!\n"
	.string "Das ist wie für dich geschaffen!\p"
	.string "Ich brauche es nicht, da ich mich\n"
	.string "nicht um die anderen schere.\p"
	.string "In Ordnung! Jetzt muss ich aber\n"
	.string "wirklich gehen. Tschüss!$"

CeruleanCity_Text_GruntIntro::
	.string "He! Bleib draußen! Du hast hier\n"
	.string "nichts zu suchen! Was ich hier tue?\p"
	.string "Ich bin nur ein unschuldiger\n"
	.string "Passant! Was?\p"
	.string "Glaubst du mir etwa nicht?$"

CeruleanCity_Text_GruntDefeat::
	.string "Rüpel: Ist gut!\n"
	.string "Ich gebe auf! Ich verschwinde!$"

CeruleanCity_Text_OkayIllReturnStolenTM::
	.string "O.K.! Ich gebe die gestohlene TM\n"
	.string "zurück!$"

CeruleanCity_Text_RecoveredTM28FromGrunt::
	.string "{PLAYER} erhält\n"
	.string "TM28!$"

CeruleanCity_Text_BetterGetMovingBye::
	.string "Ich gehe wohl besser!\n"
	.string "Tschüss!$"

CeruleanCity_Text_MakeRoomForThisCantRun::
	.string "Mach Platz für dieses coole Item!\p"
	.string "Ich kann erst gehen, wenn ich es\n"
	.string "dir gegeben habe!$"

CeruleanCity_Text_TrainerLifeIsToughIsntIt::
	.string "Du bist auch ein Trainer?\p"
	.string "Zu sammeln und zu kämpfen ist nicht\n"
	.string "immer so leicht!$"

CeruleanCity_Text_YouCanCutDownSmallTrees::
	.string "Pokémon können Büsche mit dem\n"
	.string "Zerschneider klein hacken.\p"
	.string "Auch der kleine Baum vor dem\n"
	.string "Geschäft kann entfernt werden.\p"
	.string "Aber es gibt auch einen anderen\n"
	.string "Weg!$"

CeruleanCity_Text_IfSlowbroWasntThereCouldCutTree::
	.string "Wenn das Lahmus nicht im Weg wäre,\n"
	.string "könntest du den kleinen Baum\l"
	.string "fällen.\p"
	.string "Dann könntest du auf die andere\n"
	.string "Seite.\p"
	.string "Aber es gibt auch einen anderen\n"
	.string "Weg!$"

CeruleanCity_Text_PokemonEncyclopediaAmusing::
	.string "Du erstellst eine Enzyklopädie der\n"
	.string "Pokémon? Das klingt lustig!$"

CeruleanCity_Text_PeopleHereWereRobbed::
	.string "Die Leute hier wurden beraubt.\p"
	.string "Das Team Rocket steckt hinter dem\n"
	.string "abscheulichen Verbrechen!\p"
	.string "Sogar die Polizei ist gegen das\n"
	.string "Team Rocket machtlos!$"

CeruleanCity_Text_SlowbroUseSonicboom::
	.string "Okay! Slowbro!\n"
	.string "Use Sonicboom!$"

CeruleanCity_Text_SlowbroPayAttention::
	.string "Los, mach schon, Lahmus!$"

CeruleanCity_Text_SlowbroPunch::
	.string "Slowbro, punch!$"

CeruleanCity_Text_NoYouBlewItAgain::
	.string "Oh nein!\n"
	.string "Wieder nicht...$"

CeruleanCity_Text_SlowbroWithdraw::
	.string "Slowbro, Withdraw!$"

CeruleanCity_Text_HardToControlMonsObedience::
	.string "Nein, nicht!!! Es ist schwer, ein\n"
	.string "Pokémon zu kontrollieren!\p"
	.string "Ob dein Pokémon gehorcht, hängt\n"
	.string "von deinen Fähigkeiten als Trainer\l"
	.string "ab!$"

CeruleanCity_Text_SlowbroTookSnooze::
	.string "Lahmus macht ein Nickerchen...$"

CeruleanCity_Text_SlowbroLoafingAround::
	.string "Lahmus bummelt herum...$"

CeruleanCity_Text_SlowbroTurnedAway::
	.string "Lahmus wendet sich ab...$"

CeruleanCity_Text_SlowbroIgnoredOrders::
	.string "Lahmus ignoriert die Befehle...$"

CeruleanCity_Text_WantBrightRedBicycle::
	.string "Ich hätte gern ein rotes Fahrrad!\p"
	.string "Aber ich würde nicht damit fahren,\n"
	.string "damit es nicht schmutzig wird!$"

CeruleanCity_Text_ThisIsCeruleanCave::
	.string "Die Azuria Höhle!\n"
	.string "Dort leben extrem starke Pokémon!\p"
	.string "Nur außergewöhnlichen Trainern\n"
	.string "wird der Zutritt gewährt.\p"
	.string "Du musst stark genug sein, um der\n"
	.string "Pokémon Liga-Champion zu\l"
	.string "werden!\p"
	.string "Und du solltest bereits Großes\n"
	.string "geleistet haben.$"

CeruleanCity_Text_CitySign::
	.string "Azuria City\n"
	.string "Eine mysteriöse blaue Aura umgibt\l"
	.string "die Stadt!$"

CeruleanCity_Text_TrainerTipsHeldItems::
	.string "Tipps für Trainer\p"
	.string "Einem Pokémon kann ein\n"
	.string "Item zum Halten gegeben werden.\p"
	.string "Manche Items können sogar vom\n"
	.string "Pokémon im Kampf eingesetzt\l"
	.string "werden.$"

CeruleanCity_Text_BikeShopSign::
	.string "Fahrradladen\n"
	.string "Fahre leicht und schnell mit dem\l"
	.string "Rad durch Höhlen und Gras!$"

CeruleanCity_Text_GymSign::
	.string "Azuria City Pokémon-Arena\n"
	.string "Arenaleiterin: Misty\l"
	.string "Die Burschikose Meerjungfrau!$"

