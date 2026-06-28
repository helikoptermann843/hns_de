SaffronCity_SilphCo_hns_MapScripts::
	.byte 0

SaffronCity_SilphCo_EventScript_Steven::
	lock 
	msgbox SaffronCity_SilphCo_Text_Steven1, MSGBOX_DEFAULT
	closemessage
	delay 20
	faceplayer
	delay 20
	playse SE_PIN
	applymovement LOCALID_SILPHCO_STEVEN, Common_Movement_ExclamationMark
	delay 60
SaffronCity_SilphCo_EventScript_StevenChooseStone::
	message SaffronCity_SilphCo_Text_Steven2
	waitmessage
	multichoice 20, 0, MULTI_HOENN_STARTERS, FALSE
	switch VAR_RESULT
	case 0, SaffronCity_SilphCo_EventScript_TreeckoChosen
	case 1, SaffronCity_SilphCo_EventScript_TorchicChosen
	case 2, SaffronCity_SilphCo_EventScript_MudkipChosen
	case MULTI_B_PRESSED, SaffronCity_SilphCo_EventScript_Refused

SaffronCity_SilphCo_EventScript_Refused::
	msgbox SaffronCity_SilphCo_Text_Refused, MSGBOX_DEFAULT
	turnobject LOCALID_SILPHCO_STEVEN, DIR_NORTH
	closemessage
	release
	end

SaffronCity_SilphCo_Text_Refused:
	.string "Oh...$"

SaffronCity_SilphCo_EventScript_TreeckoChosen::
	closemessage
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TREECKO
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
	msgbox SaffronCity_SilphCo_Text_Steven3, MSGBOX_DEFAULT
	givemon SPECIES_TREECKO, 5
	call Common_EventScript_GiftMon
	goto SaffronCity_SilphCo_EventScript_AfterStarterGiven
SaffronCity_SilphCo_EventScript_TorchicChosen::
	closemessage
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TORCHIC
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
	msgbox SaffronCity_SilphCo_Text_Steven3, MSGBOX_DEFAULT
	givemon SPECIES_TORCHIC, 5
	call Common_EventScript_GiftMon
	goto SaffronCity_SilphCo_EventScript_AfterStarterGiven
SaffronCity_SilphCo_EventScript_MudkipChosen::
	closemessage
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MUDKIP
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
	msgbox SaffronCity_SilphCo_Text_Steven3, MSGBOX_DEFAULT
	givemon SPECIES_MUDKIP, 5
	call Common_EventScript_GiftMon
	goto SaffronCity_SilphCo_EventScript_AfterStarterGiven

SaffronCity_SilphCo_EventScript_AfterStarterGiven::
	msgbox SaffronCity_SilphCo_Text_Steven4, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, SaffronCity_SilphCo_EventScript_PlayerMove
	applymovement LOCALID_SILPHCO_STEVEN, SaffronCity_SilphCo_Movement_StevenLeave
	waitmovement 0
	playse SE_EXIT
	setflag FLAG_GOT_HOENN_STARTER
	removeobject LOCALID_SILPHCO_STEVEN
	release
	end

SaffronCity_SilphCo_EventScript_PlayerMove:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight1
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	return

SaffronCity_SilphCo_Movement_StevenLeave:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end


SaffronCity_SilphCo_Text_Steven1:
	.string "Hallo…\n"
	.string "Die Verbindung ist schlecht…\l"
	.string "Ich glaube, es liegt an meinem\l"
	.string "Vater.\l"
	.string "Ich verstehe…\n"
	.string "Ich mach mich auf den Weg.\l"
	.string "Bis bald.$"

SaffronCity_SilphCo_Text_Steven2:
	.string "TROY: Du bist… Ich erinnere\n"
	.string "mich an deine Augen.\p"
	.string "Wenn ich einen TRAINER sehe,\n"
	.string "dessen Augen leuchten, vergesse\l"
	.string "ich das nie.\p"
	.string "Du hast einen POKÉDEX! Du bist\n"
	.string "also auch auf der Suche nach\l"
	.string "POKÉMON!\l"
	.string "Lass mich überlegen…\p"
	.string "Ich glaube, ich kann dir dabei\n"
	.string "helfen.\p"
	.string "Stell dir vor, Steine liegen\n"
	.string "vor dir. Welche Farbe würdest\l"
	.string "du wählen?$"

SaffronCity_SilphCo_Text_Steven3:
	.string "Richtig gewählt! Ich gebe dir\n"
	.string "{STR_VAR_1}!$"

SaffronCity_SilphCo_Text_Steven4:
	.string "Pass gut darauf auf. Wenn du\n"
	.string "dich darum kümmerst, freut\l"
	.string "mich das sehr.$"

SaffronCity_SilphCo_EventScript_Receptionist::
	msgbox SilphCo_Text_Receptionist, MSGBOX_NPC
	end
SaffronCity_SilphCo_EventScript_Officer::
	goto_if_set FLAG_GOT_UP_GRADE, SaffronCity_SilphCo_EventScript_OfficerAfter
	msgbox SilphCo_Text_Officer, MSGBOX_NPC
	giveitem ITEM_UP_GRADE
	setflag FLAG_GOT_UP_GRADE
SaffronCity_SilphCo_EventScript_OfficerAfter::
	msgbox SilphCo_Text_Officer_GotUpGrade, MSGBOX_NPC
	end

SaffronCity_SilphCo_EventScript_Sign1::
	msgbox SilphCo_Text_Sign1, MSGBOX_SIGN
	end

SaffronCity_SilphCo_EventScript_Sign2::
	msgbox SilphCo_Text_Sign2, MSGBOX_SIGN
	end

SilphCo_Text_Sign1:
	.string "SILPH CO.\n"
	.string "EG REZEPTION.$"

SilphCo_Text_Sign2:
	.string "SILPH CO.\n"
	.string "FAHRSTUHL AUSSER BETRIEB.$"

SilphCo_Text_Receptionist:
	.string "Willkommen. Das\n"
	.string "ist das BÜROGEBÄUDE der SILPH CO.$"

SilphCo_Text_Officer:
	.string "Nur das Personal\n"
	.string "hat Zutritt zu den oberen Geschossen.\n"
	.string "\p"
	.string "Aber, da du nun schon mal da bist,\p"
	.string "gebe ich dir dieses hübsche Souvenir.$"

SilphCo_Text_Officer_GotUpGrade:
	.string "Das ist das neueste Produkt\p"
	.string "der SILPH CO. Das\n"
	.string "gibt es noch nirgends zu kaufen.$"
