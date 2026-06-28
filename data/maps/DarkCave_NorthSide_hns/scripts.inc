DarkCave_NorthSide_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DarkCave_NorthSide_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

DarkCave_NorthSide_OnTransition: 
	callnative SetTimeBasedEncounters
	end

DarkCave2_EventScript_Item_BlackFlute::
	finditem ITEM_BLACK_FLUTE
	end

DarkCave2_EventScript_Item_StarPiece::
	finditem ITEM_STAR_PIECE
	end

DarkCave2_EventScript_BlackGlasses::
	lock
	faceplayer
	goto_if_set FLAG_GOT_BLACK_GLASSES, DarkCave2_EventScript_BlackGlassesGot
	msgbox DarkCave2_Text_Nerd, MSGBOX_DEFAULT
	giveitem ITEM_BLACK_GLASSES
	setflag FLAG_GOT_BLACK_GLASSES
	closemessage
	release
	end

DarkCave2_EventScript_BlackGlassesGot::
	msgbox DarkCave2_Text_Nerd2, MSGBOX_DEFAULT
	closemessage
	release
	end

DarkCave2_Text_Nerd:
	.string "Whoa! Du hast mich erschreckt!\p"
	.string "Ich hatte meine Schattenbrille\n"
	.string "auf, also habe ich dich gar nicht\n"
	.string "bemerkt.\p"
	.string "Was ich hier mache?\p"
	.string "Hey, mach dir keine Sorgen.\p"
	.string "Ich gebe dir ein Paar\n"
	.string "Schattenbrillen, also vergiss,\l"
	.string "das du mich gesehen hast, OK?$"

DarkCave2_Text_Nerd2:
	.string "Schattenbrille erhöht die\n"
	.string "Stärke von Unlicht-Attacken.$"
