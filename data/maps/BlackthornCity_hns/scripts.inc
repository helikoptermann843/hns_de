BlackthornCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BlackthornCity_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, BlackthornCity_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, BlackthornCity_EventScript_CityEnter
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

BlackthornCity_OnLoad::
	goto_if_unset FLAG_BADGE05_GET, BlackThornCity_EventScript_MoveGymBoy
	goto_if_unset FLAG_BADGE06_GET, BlackThornCity_EventScript_MoveGymBoy
	goto_if_unset FLAG_BADGE07_GET, BlackThornCity_EventScript_MoveGymBoy
	end

BlackThornCity_EventScript_MoveGymBoy::
	setobjectxyperm LOCALID_BLACKTHORN_BOY, 24, 27
	end

BlackthornCity_OnFrame::
	map_script_2 VAR_BLACKTHORN_CITY_STATE, 4, BlackthornCity_EventScript_Call
	.2byte 0

BlackthornCity_EventScript_CityEnter:: 
	setflag FLAG_VISITED_BLACKTHORN_CITY
	callnative SetTimeBasedEncounters
	end

BlackthornCity_EventScript_Call::
	lock
	pokenavcall BlackthornCity_Text_ElmCall
	waitmessage
	delay 30
	setvar VAR_BLACKTHORN_CITY_STATE, 5
	setvar VAR_NEWBARKTOWN_LABSTATE, 7
	release
	end

BlackthornCity_Text_BaobaCall:
	.string "Aufseher Baoba: {PLAYER}!\p"
	.string "Hier ist Aufseher Baoba.\p"
	.string "Ich rufe dich an um dir\n"
	.string "mitzuteilen das die Safari-Zone!\n"
	.string "vergrößert wurde!\p"
	.string "bitte komm vorbei!$"

BlackthornCity_Text_ElmCall:
	.string "PROF. Lind: Hallo, {PLAYER}?\p"
	.string "Ich habe hier etwas für dich\n"
	.string "Kommst du zu meinem Labor?\p"
	.string "Bis Später!$"

BlackThornCity_EventScript_Sage::
	lock
	faceplayer
	goto_if_eq VAR_BLACKTHORN_CITY_STATE, 1, BlackThornCity_EventScript_SageRefuse
	msgbox BlackthornGrampsGrantsEntryText, MSGBOX_DEFAULT
	closemessage
	release
	end

BlackThornCity_EventScript_SageRefuse::
	msgbox BlackthornGrampsRefusesEntryText, MSGBOX_DEFAULT
	closemessage
	release
	end

BlackThornCity_Trigger_Sage::
	lock
	turnobject LOCALID_BLACKTHORN_SAGE, DIR_EAST
	msgbox BlackthornGrampsRefusesEntryText, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_WalkDown1
	waitmovement 0
	turnobject LOCALID_BLACKTHORN_SAGE, DIR_SOUTH
	release
	end

BlackthornCity_EventScript_GymBoy::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE05_GET, BlackThornCity_EventScript_GymBoyNotReady
	goto_if_unset FLAG_BADGE06_GET, BlackThornCity_EventScript_GymBoyNotReady
	goto_if_unset FLAG_BADGE07_GET, BlackThornCity_EventScript_GymBoyNotReady
	goto_if_eq VAR_BLACKTHORN_CITY_STATE, 1, BlackThornCity_EventScript_GymBoyBefore
	msgbox BlackthornCity_Text_ClairIsBeaten, MSGBOX_DEFAULT
	closemessage
	release
	end	

BlackThornCity_EventScript_GymBoyNotReady::
	msgbox BlackthornCity_Text_ClairNotReady, MSGBOX_DEFAULT
	closemessage
	release
	end

BlackThornCity_EventScript_GymBoyBefore::
	msgbox BlackthornCity_Text_ClairIsIn, MSGBOX_DEFAULT
	closemessage
	release
	end	

BlackthornCity_EventScript_BlackBelt::
	msgbox BlackBeltText_VoicesInMyHead, MSGBOX_NPC
	end

BlackthornCity_EventScript_CoolTrainerF::
	msgbox BlackthornCooltrainerF1Text, MSGBOX_NPC
	end

BlackthornCity_EventScript_Youngster::
	msgbox BlackthornYoungsterText, MSGBOX_NPC
	end

BlackthornCity_EventScript_CoolTrainerF2::
	msgbox BlackthornCooltrainerF2Text, MSGBOX_NPC
	end

BlackthornCity_EventScript_CitySign::
	msgbox BlackthornCitySignText, MSGBOX_SIGN
	end

BlackthornCity_EventScript_GymSign::
	msgbox BlackthornGymSignText, MSGBOX_SIGN
	end

BlackthornCity_EventScript_MoveHouseSign::
	msgbox BlackthornCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
	end

BlackthornCity_EventScript_DragonsDenSign::
	msgbox BlackthornCity_Text_DragonDenSign, MSGBOX_SIGN
	end

BlackthornCity_EventScript_Santos::
	lock
	faceplayer
	goto_if_set FLAG_GOT_SPELL_TAG, BlackthornCity_EventScript_SantosCompleted
	msgbox BlackthornCity_MeetSantosText, MSGBOX_DEFAULT
	closemessage
	multichoice 20, 0, MULTI_DAYS_OF_WEEK, FALSE
	switch VAR_RESULT
	case 0, BlackthornCity_EventScript_SantosNope
	case 1, BlackthornCity_EventScript_SantosNope
	case 2, BlackthornCity_EventScript_SantosNope
	case 3, BlackthornCity_EventScript_SantosNope
	case 4, BlackthornCity_EventScript_SantosNope
	case 5, BlackthornCity_EventScript_SantosNope
	case 6, BlackthornCity_EventScript_SantosYes
	case 7 BlackthornCity_EventScript_SantosCancel
	case MULTI_B_PRESSED, BlackthornCity_EventScript_SantosCancel
	closemessage
	release
	end
BlackthornCity_EventScript_SantosYes::
	msgbox BlackthornCity_SantosGivesGiftText, MSGBOX_DEFAULT
	giveitem ITEM_SPELL_TAG
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_SPELL_TAG
	msgbox BlackthornCity_SantosGaveGiftText, MSGBOX_DEFAULT
	closemessage
	release
	end
BlackthornCity_EventScript_SantosNope::
	msgbox BlackthornCity_SantosNopeText, MSGBOX_DEFAULT
	closemessage
	release
	end
BlackthornCity_EventScript_SantosCancel::
	closemessage
	release
	end
BlackthornCity_EventScript_SantosCompleted::
	msgbox BlackthornCity_SantosSaturdayText, MSGBOX_DEFAULT
	closemessage
	release
	end


BlackthornCity_Text_ClairNotReady:
	.string "Sandra, unsere Arenaleiterin, hat\n"
	.string "deinen Fortschritt verfolgt.\p"
	.string "Sie kämpft jedoch nur gegen Trainer,\n"
	.string "die bereits 7 ORDEN besitzen.$"

BlackthornCity_Text_ClairIsIn:
	.string "Sandra, unsere Arenaleiterin, wartet\n"
	.string "auf dich.\p"
	.string "Für einen gewöhnlichen Trainer wäre es\n"
	.string "jedoch unmöglich zu gewinnen.$"

BlackthornCity_Text_ClairIsBeaten:
	.string "Du hast Sandra besiegt?\p"
	.string "Unglaublich!\p"
	.string "Ich habe noch nie gehört, dass sie\n"
	.string "gegen\l"
	.string "jemanden außer Siegfried verloren hat.$"

BlackthornGrampsRefusesEntryText:
	.string "No. Only chosen trainers may train\n"
	.string "here.\p"
	.string "Please leave.$"

BlackthornGrampsGrantsEntryText:
	.string "If CLAIR allows it, her grand-\n"
	.string "father--our MASTER--will also.\p"
	.string "You may enter.$"

BlackBeltText_VoicesInMyHead:
	.string "Arooo! Voices in my head!\p"
	.string "Huh? I'm listening to my radio!$"

BlackthornCooltrainerF1Text:
	.string "Are you going to make your POKéMON\n"
	.string "remember some moves?$"

BlackthornYoungsterText:
	.string "Dragon masters all come from the city\n"
	.string "of BLACKTHORN.$"

BlackthornCity_MeetSantosText:
	.string "SANTOS: …\p"
	.string "I'm SANTOS of the weekday family.\p"
	.string "Take a guess.$"

BlackthornCity_SantosGivesGiftText:
	.string "You can have this…$"

BlackthornCity_SantosGaveGiftText:
	.string "SANTOS: …\p"
	.string "SPELL TAG…\p"
	.string "GHOST-type moves get stronger…\p"
	.string "It will frighten you…$"

BlackthornCity_SantosSaturdayText:
	.string "SANTOS: …\p"
	.string "See you again on another Saturday…\p"
	.string "I won't have any more gifts…$"

BlackthornCity_SantosNopeText:
	.string "SANTOS: No.$"

BlackthornCooltrainerF2Text:
	.string "Wow, you came through the ICE PATH?\p"
	.string "You must be a real hotshot trainer!$"

BlackthornCitySignText:
	.string "BLACKTHORN CITY\p"
	.string "A Quiet Mountain Retreat$"

BlackthornGymSignText:
	.string "BLACKTHORN CITY POKéMON GYM\n"
	.string "LEADER: CLAIR\p"
	.string "The Blessed User of Dragon POKéMON$"

BlackthornCity_Text_MoveDeletersHouseSign:
	.string "ATTACKEN-VERLERNER HAUS$"

BlackthornCity_Text_DragonDenSign:
	.string "DRACHENHÖHLE VORAUS$"

