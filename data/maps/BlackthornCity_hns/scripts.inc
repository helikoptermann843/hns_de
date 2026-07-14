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
	.string "mitzuteilen das die Safari-Zone\l"
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
	.string "Ich habe noch nie gehört,\n"
	.string "dass sie gegen jemanden\l"
	.string "außer Siegfried verloren hat.$"

BlackthornGrampsRefusesEntryText:
	.string "Nein. Nur wüdige dürfen\n"
	.string "hier trainieren.\p"
	.string "Bitte geh.$"

BlackthornGrampsGrantsEntryText:
	.string "Wenn Sandra es erlaubt,\n"
	.string "wird es ihr großvater, unser\l"
	.string "Meister ebenfalls tun. Tritt ein.$"

BlackBeltText_VoicesInMyHead:
	.string "Arooo! Stimmen in meinem Kopf!\p"
	.string "Huh? Ich höre nur Radio!$"

BlackthornCooltrainerF1Text:
	.string "Wirst du deine POKéMON\n"
	.string "Attacken erinnern lassen?$"

BlackthornYoungsterText:
	.string "Ebenholz-City ist berühmt für\n"
	.string "seine Drachenmeister.$"

BlackthornCity_MeetSantosText:
	.string "SAMSON: …\p"
	.string "Ich bin Samson von der Wochentag-\n"
	.string "Familie. Nun Rate mal.$"

BlackthornCity_SantosGivesGiftText:
	.string "Du kannst das haben…$"

BlackthornCity_SantosGaveGiftText:
	.string "SAMSON: …\p"
	.string "BANNSTICKER…\p"
	.string "Geist-Attacken werden verstärkt…\p"
	.string "Es wird dich gruseln…$"

BlackthornCity_SantosSaturdayText:
	.string "SAMSON: …\p"
	.string "Wir sehen uns ein andermal…\p"
	.string "Ich hab keine Geschenke mehr…$"

BlackthornCity_SantosNopeText:
	.string "SAMSON: Ne.$"

BlackthornCooltrainerF2Text:
	.string "Wow, du kamst durch den Eispfad?\p"
	.string "Du musst ein super Trainer sein!$"

BlackthornCitySignText:
	.string "EBENHOLZ-CITY\p"
	.string "Erholungsort in den Bergen.$"

BlackthornGymSignText:
	.string "EBENHOLZ-CITY POKéMON ARENA\n"
	.string "LEITER: SANDRA\p"
	.string "Die gesegnete Drachenmeisterin.$"

BlackthornCity_Text_MoveDeletersHouseSign:
	.string "ATTACKEN-VERLERNER HAUS$"

BlackthornCity_Text_DragonDenSign:
	.string "DRACHENHÖHLE VORAUS$"

