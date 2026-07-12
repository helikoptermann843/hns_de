Route42_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route42_MapScript_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route42_MapScript_OnTransition::
	call_if_set FLAG_HIDE_ROUTE42_SUICUNE, Route42_MapScript_HideTrigger
	callnative SetTimeBasedEncounters
	end

Route42_MapScript_HideTrigger::
	setvar VAR_TEMP_0, 1
	return

Route42_EventScript_Suicune_Trigger::
	lock
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement LOCALID_ROUTE42_SUICUNE, Route42_Movement_Suicune1
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	waitmovement 0
	waitmoncry
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_ROUTE42_SUICUNE, Route42_Movement_Suicune2
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	waitmovement 0

	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement LOCALID_ROUTE42_SUICUNE, Route42_Movement_Suicune3
	applymovement OBJ_EVENT_ID_PLAYER, Route42_Movement_Player
	playse SE_LEDGE
	delay 60
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	waitmovement LOCALID_ROUTE42_SUICUNE
	waitmovement 0
	delay 60
	removeobject LOCALID_ROUTE42_SUICUNE
	setflag FLAG_HIDE_ROUTE42_SUICUNE
	clearflag FLAG_HIDE_ROUTE42_EUSINE
	addobject LOCALID_ROUTE42_EUSINE
	playse SE_EXIT
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	applymovement LOCALID_ROUTE42_EUSINE, Route42_Movement_Eusine1
	waitmovement 0
	msgbox Route42_Text_EusineAdmireSuicune, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_ROUTE42_EUSINE, DIR_WEST
	msgbox Route42_Text_EusineJealous, MSGBOX_DEFAULT
	turnobject LOCALID_ROUTE42_EUSINE, DIR_EAST
	msgbox Route42_Text_EusineWontGiveUp, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROUTE42_EUSINE, Route42_Movement_Eusine2
	waitmovement 0
	setflag FLAG_HIDE_ROUTE42_EUSINE
	removeobject LOCALID_ROUTE42_EUSINE
	setvar VAR_TEMP_0, 1
	call_if_eq VAR_SUICUNE_ENCOUNTERS, 2, Route42_EventScript_DoneJohtoSuicune
	release
	end

Route42_EventScript_DoneJohtoSuicune::
	setvar VAR_SUICUNE_ENCOUNTERS, 3
	return

Route42_Movement_Suicune1:
	jump_in_place_right_left
	jump_in_place_right_left
	step_end

Route42_Movement_Suicune2:
	jump_2_left
	jump_2_left
	jump_2_left
	jump_2_up
	step_end

Route42_Movement_Suicune3:
	jump_in_place_up
	delay_2
	face_up
	jump_2_up
	jump_2_right
	jump_2_right
	jump_2_right
	jump_2_right
	jump_2_right
	step_end

Route42_Movement_Player:
	lock_facing_direction
	delay_2
	jump_2_up
	unlock_facing_direction
	step_end

Route42_Movement_Eusine1:
	walk_down
	walk_down
	walk_left
	face_right
	step_end

Route42_Movement_Eusine2:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route42_Text_EusineAdmireSuicune:
    .string "EUSIN: SUICUNE...\n"
    .string "Wie mutig es ist!\p"
    .string "Wie erhaben es wirkt!\n"
    .string "Wie wunderschön es ist!\p"
    .string "Und wie unglaublich schnell\n"
    .string "es sich bewegt!$"

Route42_Text_EusineJealous:
    .string "{PLAYER}!\p"
    .string "Du scheinst immer dort zu sein,\n"
    .string "wo SUICUNE auftaucht.\p"
    .string "Nun gut. Mein Verlangen,\n"
    .string "SUICUNE zu finden,\l"
    .string "übertrifft deines bei\p"
    .string "Weitem...\p"
    .string "Mein Großvater war...\n"
    .string "sehr von Legenden begeistert.\p"
    .string "Ich habe von ihm unzählige\n"
    .string "Geschichten über SUICUNE gehört.$"

Route42_Text_EusineWontGiveUp:
    .string "SUICUNE...\n"
    .string "Ich werde dir weiter folgen,\l"
    .string "bis ich herausgefunden habe,\p"
    .string "wonach du suchst...\p"
    .string "Hörst du mich!$"


Route42_EventScript_Tully::
	trainerbattle_single TRAINER_TULLY_HNS, Route42_Text_FisherTullySeen, Route42_Text_FisherTullyBeaten, Route42_EventScript_RegisterTully
	goto_if_set FLAG_TULLY_HAS_ITEM_HNS, Route42_EventScript_TullyGiveItem
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route42_EventScript_RematchTully
	msgbox Route42_Text_FisherTullyAfter, MSGBOX_AUTOCLOSE
	end

Route42_EventScript_RegisterTully::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route42_Text_TullyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_TULLY_HNS
	release
	end

Route42_EventScript_RematchTully::
	trainerbattle_rematch TRAINER_TULLY_HNS, Route42_Text_TullyRematchIntro, Route42_Text_TullyRematchDefeat
	msgbox Route42_Text_TullyPostRematch, MSGBOX_AUTOCLOSE
	end

Route42_EventScript_TullyGiveItem::
	msgbox Route42_Text_TullyHasItem, MSGBOX_DEFAULT
	giveitem VAR_TULLY_ITEM_HNS
	goto_if_eq VAR_RESULT, FALSE, Route42_EventScript_TullyNoRoom
	clearflag FLAG_TULLY_HAS_ITEM_HNS
	msgbox Route42_Text_TullyGaveItem, MSGBOX_AUTOCLOSE
	end

Route42_EventScript_TullyNoRoom::
	msgbox Route42_Text_TullyNoRoom, MSGBOX_AUTOCLOSE
	end

Route42_EventScript_Ben::
	trainerbattle_single TRAINER_BENJAMIN_HNS, Route42_Text_HikerBenjaminSeen, Route42_Text_HikerBenjaminBeaten
	msgbox Route42_Text_HikerBenjaminAfter, MSGBOX_AUTOCLOSE
	end

Route42_EventScript_Shane::
	trainerbattle_single TRAINER_SHANE_HNS, Route42_Text_PokemaniacShaneSeen, Route42_Text_PokemaniacShaneBeaten
	msgbox Route42_Text_PokemaniacShaneAfter, MSGBOX_AUTOCLOSE
	end

Route42_EventScript_Sign::
	lock
	msgbox Route42_Text_Sign1, MSGBOX_SIGN
	closemessage
	release
	end

Route42_EventScript_MortarSign::
	lock
	msgbox Route42_Text_MtMortarSign1, MSGBOX_SIGN
	closemessage
	release
	end

Route42_EventScript_Item_SuperPotion::
	finditem ITEM_SUPER_POTION
	end
Route42_EventScript_Item_Shadow_Claw::
    finditem ITEM_TM_SHADOW_CLAW
    end
Route42_EventScript_Item_UltraBall::
	finditem ITEM_ULTRA_BALL
	end

Route42_Text_FisherTullySeen:
	.string "Jetzt demonstriere ich dir\n"
	.string "die Kraft des Pokémon, das ich\l"
	.string "gefangen habe!$"

Route42_Text_FisherTullyBeaten:
	.string "Was? Das kann nicht sein.$"

Route42_Text_FisherTullyAfter:
	.string "Ich bin Angler fürs Leben.$"

Route42_Text_HikerBenjaminSeen:
	.string "Ach, ist das schön,\n"
	.string "im Freien zu sein! Ich fühle\l"
	.string "mich so frei!$"

Route42_Text_HikerBenjaminBeaten:
	.string "Hahaha!$"

Route42_Text_HikerBenjaminAfter:
	.string "Humbug!$"

Route42_Text_PokemaniacShaneSeen:
	.string "HEH!\p"
	.string "Das ist mein Geheimversteck!\n"
	.string "Verschwinde von hier,\l"
	.string "du Außenseiter!$"

Route42_Text_PokemaniacShaneBeaten:
	.string "Ich hätte meinen\n"
	.string "MONDSTEIN benutzen sollen…$"

Route42_Text_PokemaniacShaneAfter:

Route42_Text_Sign1:
	.string "ROUTE 42\p"
	.string "TEAK CITY - MAHAGONIA CITY$"

Route42_Text_MtMortarSign1:
	.string "KESSELBERG\p"
	.string "WASSERFALLHÖHLE drinnen$"

Route42_Text_TullyRegister:
    .string "Ich will mit den POKéMON, die\n"
    .string "ich selbst gefangen habe,\l"
    .string "POKéMON-CHAMP werden.\p"
    .string "Das ist das Beste am Angeln!$"

Route42_Text_TullyRematchIntro:
    .string "Ich zeige dir die Kraft der\n"
    .string "POKéMON, die ich gefangen habe!$"

Route42_Text_TullyRematchDefeat:
    .string "Was? Das kann nicht sein.\n"
    .string "Ich glaube es einfach nicht!$"

Route42_Text_TullyPostRematch:
    .string "Ich will mit den POKéMON, die\n"
    .string "ich selbst gefangen habe,\l"
    .string "POKéMON-CHAMP werden.\p"
    .string "Das ist das Beste am Angeln!$"

Route42_Text_TullyHasItem:
    .string "Hey! Ich habe beim Angeln\n"
    .string "etwas gefunden!\p"
    .string "Hier, du kannst es haben!$"

Route42_Text_TullyGaveItem:
    .string "Ich sage dir Bescheid, wenn\n"
    .string "ich noch etwas an Land ziehe!$"

Route42_Text_TullyNoRoom:
    .string "Hm, dein BEUTEL ist voll.\p"
    .string "Komm wieder, wenn du Platz hast.$"
