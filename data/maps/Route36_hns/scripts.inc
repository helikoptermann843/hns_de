Route36_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route36_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route36_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route36_EventScript_RockSmashGuy::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SUDOWOODO, Route36_EventScript_RockSmashGuy2
	msgbox Route36_Text_RockSmashGuy1, MSGBOX_DEFAULT
	closemessage
	release
	end
Route36_EventScript_RockSmashGuy2::
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, Route36_EventScript_RockSmashGuy3
	msgbox Route36_Text_RockSmashGuy2, MSGBOX_DEFAULT
	giveitem ITEM_HM_ROCK_SMASH
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
Route36_EventScript_RockSmashGuy3::
	msgbox Route36_Text_RockSmashGuy3
	closemessage
	release
	end

Route36_EventScript_Lass::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SUDOWOODO, Route36_EventScript_Lass2
	msgbox Route36_Text_Lass1, MSGBOX_DEFAULT
	closemessage
	release
	end
Route36_EventScript_Lass2::
	msgbox Route36_Text_Lass2_ClearedSudowoodo, MSGBOX_DEFAULT
	closemessage
	release
	end

Route36_EventScript_Arthur::
	lock
	faceplayer
	goto_if_set FLAG_GOT_HARD_STONE, Route36_EventScript_ArthurCompleted
	msgbox Route36_Text_MeetArthur, MSGBOX_DEFAULT
	closemessage
	multichoice 20, 0, MULTI_DAYS_OF_WEEK, FALSE
	switch VAR_RESULT
	case 0, Route36_EventScript_ArthurNope
	case 1, Route36_EventScript_ArthurNope
	case 2, Route36_EventScript_ArthurNope
	case 3, Route36_EventScript_ArthurNope
	case 4, Route36_EventScript_ArthurYes
	case 5, Route36_EventScript_ArthurNope
	case 6, Route36_EventScript_ArthurNope
	case 7, Route36_EventScript_ArthurCancel
	case MULTI_B_PRESSED, Route36_EventScript_ArthurCancel
	closemessage
	release
	end
Route36_EventScript_ArthurYes::
	msgbox Route36_Text_ArthurGivesGift, MSGBOX_DEFAULT
	giveitem ITEM_HARD_STONE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_HARD_STONE
	msgbox Route36_Text_ArthurGaveGift, MSGBOX_DEFAULT
	closemessage
	release
	end
Route36_EventScript_ArthurNope::
	msgbox Route36_Text_ArthurNope, MSGBOX_DEFAULT
	closemessage
	release
	end
Route36_EventScript_ArthurCancel::
	closemessage
	release
	end
Route36_EventScript_ArthurCompleted::
	msgbox Route36_Text_ArthurThursday, MSGBOX_DEFAULT
	closemessage
	release
	end


Route36_EventScript_SudoWoodo::
	lock
	msgbox Route36_Text_OddTree, MSGBOX_DEFAULT
	checkitem ITEM_SQUIRT_BOTTLE
	goto_if_eq VAR_RESULT, TRUE, Route36_EventScript_SudoWoodoChoice
	closemessage
	release
	end
Route36_EventScript_SudoWoodoChoice::
	msgbox Route36_Text_UseSquirtbottle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route36_EventScript_SudoWoodoWater
	closemessage
	release
	end
Route36_EventScript_SudoWoodoWater::
	msgbox Route36_Text_UsedSquirtbottle, MSGBOX_DEFAULT
	playse SE_DOWNPOUR
	waitse
	closemessage
	playse SE_SUDOWOODO_SHAKE	
	applymovement LOCALID_ROUTE36_SUDOWOODO, Route36_Movement_SudoWoodo
	waitmovement 0
	faceplayer
	msgbox Route36_Text_SudowoodoAttacked	
	closemessage
	waitse
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, LOCALID_ROUTE36_SUDOWOODO
	setwildbattle SPECIES_SUDOWOODO, 20
	@setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	@clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route36_EventScript_Defeated_Sudowoodo
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route36_EventScript_RanSudowoodo
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route36_EventScript_RanSudowoodo
Route36_EventScript_Defeated_Sudowoodo::
	setflag FLAG_HIDE_SUDOWOODO
	removeobject LOCALID_ROUTE36_SUDOWOODO
	checkitem ITEM_HM_ROCK_SMASH
	call_if_eq VAR_RESULT, FALSE, Route36_EventScript_RockSmashGuySudoWoodo
	release
	end

Route36_EventScript_RanSudowoodo::
	turnobject LOCALID_ROUTE36_SUDOWOODO, DIR_NORTH
	release
	end

Route36_EventScript_RockSmashGuySudoWoodo:
	playse SE_PIN
	applymovement LOCALID_ROUTE36_ROCKSMASHGUY, Common_Movement_ExclamationMark
	turnobject LOCALID_ROUTE36_ROCKSMASHGUY, DIR_WEST
	waitmovement 0
	applymovement LOCALID_ROUTE36_ROCKSMASHGUY, Route36_Movement_RockSmashGuy
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitmovement 0
	return

Route36_Movement_RockSmashGuy:
	jump_in_place_left
	delay_2
	jump_in_place_left
	delay_2
	jump_in_place_left
	delay_2
	jump_in_place_left
	step_end

Route36_EventScript_Mark::
	trainerbattle_single TRAINER_MARK_HNS, Route36_Text_PsychicMarkSeen, Route36_Text_PsychicMarkBeaten
	msgbox Route36_Text_PsychicMarkAfter, MSGBOX_AUTOCLOSE
	end

Route36_EventScript_Schoolboy::
	trainerbattle_single TRAINER_ALAN_HNS, Route36_Text_SchoolboyAlan1Seen, Route36_Text_SchoolboyAlan1Beaten, Route36_EventScript_RegisterAlan
	goto_if_set FLAG_ALAN_HAS_ITEM_HNS, Route36_EventScript_AlanGiveItem
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route36_EventScript_RematchAlan
	msgbox Route36_Text_SchoolboyAlanAfter, MSGBOX_AUTOCLOSE
	end

Route36_EventScript_RegisterAlan::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route36_Text_AlanRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ALAN_HNS
	release
	end

Route36_EventScript_RematchAlan::
	trainerbattle_rematch TRAINER_ALAN_HNS, Route36_Text_AlanRematchIntro, Route36_Text_AlanRematchDefeat
	msgbox Route36_Text_AlanPostRematch, MSGBOX_AUTOCLOSE
	end

Route36_EventScript_AlanGiveItem::
	msgbox Route36_Text_AlanHasItem, MSGBOX_DEFAULT
	giveitem VAR_ALAN_ITEM_HNS
	goto_if_eq VAR_RESULT, FALSE, Route36_EventScript_AlanNoRoom
	clearflag FLAG_ALAN_HAS_ITEM_HNS
	msgbox Route36_Text_AlanGaveItem, MSGBOX_AUTOCLOSE
	end

Route36_EventScript_AlanNoRoom::
	msgbox Route36_Text_AlanNoRoom, MSGBOX_AUTOCLOSE
	end

Route36_EventScript_Sign::
	lock
	msgbox Route36_Text_Sign_RuinsNorth, MSGBOX_SIGN
	closemessage
	release
	end

Route36_EventScript_Sign2::
	lock
	msgbox Route36_Text_Tips1, MSGBOX_SIGN
	closemessage
	release
	end

Route36_Movement_SudoWoodo:
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

Route36_Text_UseSquirtbottle:
	.string "Das ist ein merkwürdiger Baum.\n"
	.string "Möchtest du die SCHIGGYKANNE benutzen?$"

Route36_Text_UsedSquirtbottle:
	.string "{PLAYER} benutzt SCHIGGYKANNE.$"

Route36_Text_SudowoodoAttacked:
	.string "Der merkwürdige\n"
	.string "Baum mag die SCHIGGYKANNE nicht!\p"
	.string "Der merkwürdige Baum greift an!$"

Route36_Text_RockSmashGuy1:
	.string "Wat is los!\p"
	.string "Ich wollte diesen Baum mit\n"
	.string "einem geraden Schlag fällen.\p"
	.string "Aber es ging nicht!\n"
	.string "Ich bin ein Versager!$"

Route36_Text_RockSmashGuy2:
	.string "Hast du diesen lästigen Baum\n"
	.string "beseitigt?\p"
	.string "Ich bin beeindruckt!\n"
	.string "Das hier sollst du haben.$"

Route36_Text_RockSmashGuy3:
	.string "Das ist übrigens ZERTRÜMMRER.\p"
	.string "Damit kannst du Felsen mit\n"
	.string "einem gezielten Hieb zertrümmern.\p"
	.string "Sind dir Steine im Weg,\n"
	.string "schlag sie einfach kaputt!$"

Route36_Text_OddTree:
	.string "Ein seltsamer Baum versperrt\n"
	.string "den Weg.$"

Route36_Text_Lass1:
	.string "Ein merkwürdiger Baum blockiert die\n"
	.string "Straße nach DUKATIA CITY.\p"
	.string "Wegen dieses Baumes kann ich\n"
	.string "nicht Einkaufen gehen.\p"
	.string "Man sollte etwas dagegen tun.$"

Route36_Text_Lass2_ClearedSudowoodo:
	.string "Dieser merkwürdige Baum\n"
	.string "ist spurlos verschwunden.\p"
	.string "Ach! Der Baum war\n"
	.string "in Wirklichkeit ein Pokémon?$"

Route36_Text_PsychicMarkSeen:
	.string "Ich werde jetzt deine Gedanken lesen!$"

Route36_Text_PsychicMarkBeaten:
	.string "Ich habe mich wohl bei dir verlesen!$"

Route36_Text_PsychicMarkAfter:
	.string "Wenn ich doch bloß die Gedanken\n"
	.string "meiner Gegner lesen könnte.$"

Route36_Text_SchoolboyAlan1Seen:
	.string "Dank meiner Studien bin ich\n"
	.string "für jedes Pokémon bereit!$"

Route36_Text_SchoolboyAlan1Beaten:
	.string "Ups! Ein Fehler in der Berechnung?$"

Route36_Text_SchoolboyAlanAfter:
	.string "Mist. Ich lerne fünf\n"
	.string "Stunden am Tag.\p"
	.string "Zum Lernen gehört mehr als\n"
	.string "nur Bücher zu lesen.$"

Route36_Text_MeetArthur:
	.string "Donatus: Wer bist du?\n"
	.string "Ich bin Donatus von der\n"
	.string "WOCHENTAGSFAMILIE.\p"
	.string "Wenn du meinen Lieblingstag errätst,\n"
	.string "gebe ich dir eine Belohnung.$"

Route36_Text_ArthurNope:
	.string "Nicht ganz!$"

Route36_Text_ArthurGivesGift:
	.string "Hier bitte. Das kannst du haben.$"

Route36_Text_ArthurGaveGift:
	.string "Donatus: Ich mag Stein,\n"
	.string "Stein ist schön und stark.\p"
	.string "Huhuhuheheheh.$"

Route36_Text_ArthurThursday:
	.string "Donatus: Ich bin Donatus vom\n"
	.string "Donnerstag.\p"
	.string "Ich in der fünfte Sohn von sieben.$"

Route36_Text_Sign:
	.string "ROUTE 36$"

Route36_Text_Sign_RuinsNorth:
	.string "ALPH-RUINEN EINGANG NORDEN$"

Route36_Text_Tips1:
	.string "TRAINER-TIPPS\n"
	.string "Pokémon-Werte unterscheiden sich,\l"
	.string "selbst bei gleicher Art.\p"
	.string "Anfangs wirken sie ähnlich.\p"
	.string "Doch mit dem Wachstum werden\n"
	.string "die Unterschiede deutlich.$"

Route36_Text_Tips2:
	.string "TRAINER-TIPPS\n"
	.string "Nutze Schaufler, um zum\l"
	.string "Eingang eines Ortes zurückzukehren.\p"
	.string "Sehr praktisch zum Erkunden von\n"
	.string "Höhlen und besonderen Orten.$"

Route36_Text_AlanRegister:
    .string "Verdammt. Ich lerne auch fünf\n"
    .string "Stunden am Tag.\p"
    .string "Zum Lernen gehört mehr, als nur\n"
    .string "Bücher zu lesen.$"

Route36_Text_AlanRematchIntro:
    .string "Dank meines Studiums bin ich auf\n"
    .string "jedes POKéMON vorbereitet!$"

Route36_Text_AlanRematchDefeat:
    .string "Ups! Rechenfehler?$"

Route36_Text_AlanPostRematch:
    .string "Verdammt. Ich lerne auch fünf\n"
    .string "Stunden am Tag.\p"
    .string "Zum Lernen gehört mehr, als nur\n"
    .string "Bücher zu lesen.$"

Route36_Text_AlanHasItem:
    .string "Hey! Ich habe beim Lernen etwas\n"
    .string "gefunden!\p"
    .string "Hier, du kannst es haben!$"

Route36_Text_AlanGaveItem:
    .string "Ich sage dir Bescheid, wenn ich\n"
    .string "noch etwas finde!$"

Route36_Text_AlanNoRoom:
    .string "Hm, dein BEUTEL ist voll.\p"
    .string "Komm wieder, wenn du Platz hast.$"
