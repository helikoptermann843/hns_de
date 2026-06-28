Route39_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route39_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route39_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route39_EventScript_Item_TM::
	finditem ITEM_TM_DRAIN_PUNCH
	end

Route39_EventScript_Item_Nugget::
	finditem ITEM_BIG_NUGGET
	end

Route39_EventScript_LegendaryTrigger::
	lock
	clearflag FLAG_HIDE_ROUTE39_SHADOW
	addobject LOCALID_R39_SHADOW
	playse SE_M_RAZOR_WIND
	applymovement LOCALID_R39_SHADOW, Route39_Movement_ShadowSlideDown
	waitmovement 0
	setflag FLAG_HIDE_ROUTE39_SHADOW
	removeobject LOCALID_R39_SHADOW
	playse SE_PIN
	applymovement LOCALID_R39_BAOBA, Common_Movement_QuestionMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	turnobject LOCALID_R39_BAOBA DIR_SOUTH
	turnobject OBJ_EVENT_ID_PLAYER DIR_SOUTH
	delay 60

	getplayerxy VAR_TEMP_0, VAR_TEMP_1

	call_if_eq VAR_TEMP_1, 20, Route39_EventScript_BaobaMovement1
	call_if_eq VAR_TEMP_1, 21, Route39_EventScript_BaobaMovement2
	call_if_eq VAR_TEMP_1, 22, Route39_EventScript_BaobaMovement3
	call_if_eq VAR_TEMP_1, 23, Route39_EventScript_BaobaMovement4

	turnobject LOCALID_R39_BAOBA DIR_EAST
	turnobject OBJ_EVENT_ID_PLAYER DIR_WEST
Route39_EventScript_ChooseLegend::
	msgbox Route39_Text_ChooseLegend, MSGBOX_DEFAULT
	multichoice 20, 8, MULTI_GOLDSILVER, FALSE
	switch VAR_RESULT
	case 0, Route39_EventScript_LegendaryTriggerGold
	case 1, Route39_EventScript_LegendaryTriggerSilver
	case MULTI_B_PRESSED, Route39_EventScript_ChooseLegend
	release
	end

Route39_EventScript_BaobaMovement1::
	applymovement LOCALID_R39_BAOBA, Route39_Movement_Baoba1
	waitmovement 0
	return
Route39_EventScript_BaobaMovement2::
	applymovement LOCALID_R39_BAOBA, Route39_Movement_Baoba2
	waitmovement 0
	return
Route39_EventScript_BaobaMovement3::
	applymovement LOCALID_R39_BAOBA, Route39_Movement_Baoba3
	waitmovement 0
	return
Route39_EventScript_BaobaMovement4::
	applymovement LOCALID_R39_BAOBA, Route39_Movement_Baoba4
	waitmovement 0
	return

Route39_Movement_Baoba1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	step_end
Route39_Movement_Baoba2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	step_end
Route39_Movement_Baoba3:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	step_end
Route39_Movement_Baoba4:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

Route39_EventScript_LegendaryTriggerGold::
	setvar VAR_LUGIA_OR_HOOH, 2
	goto Route39_EventScript_BaobaIntro

Route39_EventScript_LegendaryTriggerSilver::
	setvar VAR_LUGIA_OR_HOOH, 1
	goto Route39_EventScript_BaobaIntro

Route39_EventScript_BaobaIntro::
	msgbox Route39_Text_BaobaIntro, MSGBOX_DEFAULT
	playse MUS_HG_POKEGEAR_REGISTERED
	msgbox Route39_Text_Registered, MSGBOX_DEFAULT
	waitse
	msgbox Route39_Text_WillCall, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_R39_BAOBA, Route39_Movement_BaobaLeave
	waitmovement 0
	setflag FLAG_ENABLE_BAOBA_MATCH_CALL
	removeobject LOCALID_R39_BAOBA
	call_if_eq VAR_MAHOGANY_TOWN_STATE, 18, Mahoganytown_EventScript_RocketTrigger
	release
	end

Route39_Text_ChooseLegend::
	.string "BAOBA: GRUNDGÜTIGER! Gehört\n"
	.string "dieser Schatten zu einem POKéMON?\p"
	.string "Hast du es sehen können?\n"
	.string "Ich konnte die Farbe nicht erkennen...$"

Route39_Text_BaobaIntro::
	.string "Hmm komisch...\p"
	.string "...Ohh!\n"
	.string "Was du da hast...\l"
	.string "nennen sie... POKéDEX!\p"
	.string "Ich habe ewig keinen gesehen.\p"
	.string "Ich bin BAOBA!\n"
	.string "Ich war mal Wärter der\l"
	.string "SAFARIZONE in FUCHSANIA CITY.\p"
	.string "Aber die geht leider nicht mehr\n"
	.string "mit der Zeit, und ich wollte\l"
	.string "erstmal verreisen um die\p"
	.string "neuesten Technologien in dem\n"
	.string "Bereich zu lernen.\l"
	.string "Wieso tauschen wir nicht unsere\p"
	.string "Nummern im POKéCOM aus?\p"
	.string "Ich arbeite jetzt in der SAFARI in\n"
	.string "Anemonia, ich kann dich anrufen\l"
	.string "sobald sie öffnet!$"

Route39_Text_Registered:
	.string "{PLAYER} registriert Baoba\n"
	.string "im POKéCOM!$"


Route39_Text_WillCall:
	.string "Baoba: Ich gebe dir demnächst\n"
	.string "auf dem POKéCOM bescheid!$"

Route39_Movement_BaobaLeave:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route39_Movement_ShadowSlideDown:
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	step_end

Route39_EventScript_Woman::
	lock
	faceplayer
	msgbox Route39_Text_Woman, MSGBOX_DEFAULT
	closemessage
	release
	end

Route39_Text_Woman:
	.string "Dieser Schatten... war das ein\n"
	.string "riesiges Taubsi?$"

Route39_EventScript_Miltank::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
	msgbox Route39_Text_Miltank, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route39_Text_Miltank:
	.string "MILTANK: Muh!$"

Route39_EventScript_Eugene::
	trainerbattle_single TRAINER_EUGENE_HNS, Route39_Text_SailorEugeneSeen, Route39_Text_SailorEugeneBeaten
	msgbox Route39_Text_SailorEugeneAfter, MSGBOX_AUTOCLOSE
	end

Route39_Text_SailorEugeneSeen:
	.string "Ich bin gerade\n"
	.string "wieder in OLIVIANA angekommen.\p"
	.string "Wie steht es nun\n"
	.string "mit dem PokémonKampf?$"

Route39_Text_SailorEugeneBeaten:
	.string "Aah!$"

Route39_Text_SailorEugeneAfter:

Route39_EventScript_Derek::
	trainerbattle_single TRAINER_DEREK_HNS, Route39_Text_PokefanMDerekSeen, Route39_Text_PokefanMDerekBeaten, Route39_EventScript_RegisterDerek
	goto_if_set FLAG_DEREK_HAS_ITEM_HNS, Route39_EventScript_DerekGiveItem
	msgbox Route39_Text_PokefanMDerekAfter, MSGBOX_AUTOCLOSE
	end

Route39_EventScript_RegisterDerek::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route39_Text_DerekRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_DEREK_HNS
	release
	end

Route39_EventScript_DerekGiveItem::
	msgbox Route39_Text_DerekHasItem, MSGBOX_DEFAULT
	giveitem VAR_DEREK_ITEM_HNS
	goto_if_eq VAR_RESULT, FALSE, Route39_EventScript_DerekNoRoom
	clearflag FLAG_DEREK_HAS_ITEM_HNS
	msgbox Route39_Text_DerekGaveItem, MSGBOX_AUTOCLOSE
	end

Route39_EventScript_DerekNoRoom::
	msgbox Route39_Text_DerekNoRoom, MSGBOX_AUTOCLOSE
	end

Route39_Text_PokefanMDerekSeen:
	.string "Genau der richtige\n"
	.string "Moment, um mit PIKACHU anzugeben!$"

Route39_Text_PokefanMDerekBeaten:
	.string "Ich hatte keine\n"
	.string "Zeit, mit PIKACHU zu prahlen…$"

Route39_Text_PokefanMDerekAfter:

Route39_EventScript_Ruth::
	trainerbattle_single TRAINER_RUTH_HNS, Route39_Text_PokefanFRuthSeen, Route39_Text_PokefanFRuthBeaten
	msgbox Route39_Text_PokefanFRuthAfter, MSGBOX_AUTOCLOSE
	end

Route39_Text_PokefanFRuthSeen:
	.string "Was für süße Pokémon!\p"
	.string "Zeigen wir uns\n"
	.string "gegenseitig unsere Pokémon, und zwar\l"
	.string "gleichzeitig!$"

Route39_Text_PokefanFRuthBeaten:
	.string "Mir macht es nichts aus, zu verlieren.$"

Route39_Text_PokefanFRuthAfter:
	.string "Kennst du Baby-\n"
	.string "Pokémon?\p"
	.string "Sie sind unfassbar süß!$"

Route39_EventScript_Norman::
	trainerbattle_single TRAINER_NORMAN_HNS, Route39_Text_PsychicNormanSeen, Route39_Text_PsychicNormanBeaten
	msgbox Route39_Text_PsychicNormanAfter, MSGBOX_AUTOCLOSE
	end

Route39_Text_PsychicNormanSeen:
	.string "Zeig doch mal, was\n"
	.string "deine Pokémon drauf haben.$"

Route39_Text_PsychicNormanBeaten:
	.string "He, deine Pokémon sind sehr fähig!$"

Route39_Text_PsychicNormanAfter:

Route39_EventScript_Jamie::
	trainerbattle_single TRAINER_JAMIE_HNS, Route39_Text_PokefanFJaimeSeen, Route39_Text_PokefanFJaimeBeaten
	msgbox Route39_Text_PokefanFJaimeAfter, MSGBOX_AUTOCLOSE
	end

Route39_Text_PokefanFJaimeSeen:
	.string "Du kommst gerade recht.\p"
	.string "Auf in den Kampf.$"

Route39_Text_PokefanFJaimeBeaten:
	.string "Oh, wie ernüchternd…$"

Route39_Text_PokefanFJaimeAfter:

Route39_EventScript_Sign1::
	lock
	msgbox Route39_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end

Route39_Text_Sign:
	.string "ROUTE 39\p"
	.string "OLIVIANA CITY - TEAK CITY$"

Route39_EventScript_Sign2::
	lock
	msgbox Route39_Text_MoomooFarmSign, MSGBOX_SIGN
	closemessage
	release
	end

Route39_Text_MoomooFarmSign:
	.string "Kuhmuh-Farm\p"
	.string "Genießt unsere leckere Milch!$"

Route39_EventScript_Sign3::
	lock
	msgbox Route39_Text_TrainerTips, MSGBOX_SIGN
	closemessage
	release
	end

Route39_Text_TrainerTips:
	.string "TIPPS für TRAINER Benutze KOPFNUSS,\p"
	.string "um Pokémon\n"
	.string "aus den Bäumen zu schütteln.\p"
	.string "Auf den Bäumen\n"
	.string "leben verschiedene Arten von Pokémon.\n"
	.string "\p"
	.string "Benutze KOPFNUSS\n"
	.string "an jedem Baum, den du siehst!$"

Route39_Text_DerekRegister:
    .string "Ich höre mir deine Angeberei\n"
    .string "gar nicht erst an!\p"
    .string "Wir POKéMANIACS haben nämlich\n"
    .string "die Regel, Angebereien zu\l"
    .string "ignorieren!$"

Route39_Text_DerekHasItem:
    .string "Hey! Ich habe mein PIKACHU\n"
    .string "herumgezeigt und dabei etwas\l"
    .string "gefunden.\p"
    .string "Hier, du kannst es haben!$"

Route39_Text_DerekGaveItem:
    .string "PIKACHU ist einfach das Beste!\n"
    .string "Findest du nicht auch?$"

Route39_Text_DerekNoRoom:
    .string "Hm, dein BEUTEL ist voll.\p"
    .string "Komm wieder, wenn du Platz hast.$"
