SevenIsland_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_OnTransition
	.byte 0

SevenIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND
	end

SevenIsland_EventScript_IslandSign::
	msgbox SevenIsland_Text_IslandSign, MSGBOX_SIGN
	end

SevenIsland_EventScript_OldWoman::
	msgbox SevenIsland_Text_IslandsMadeInSevenDays, MSGBOX_NPC
	end

SevenIsland_EventScript_Scientist::
	msgbox SevenIsland_Text_IslandVirtuallyUntouched, MSGBOX_NPC
	end

Text_SwordsDanceTeach::
	.string "Nicht viele Leute kommen hier raus.\p"
	.string "Ich bin überzeugt, dass mich mein\n"
	.string "Training hier immer stärker werden\l"
	.string "lässt.\l"
	.string "Jawohl, immer stärker…\p"
	.string "Möchtest du eine solche Attacke\n"
	.string "lernen? Sie heißt SCHWERTTANZ!$"

Text_SwordsDanceDeclined::
	.string "Nun, das ist auch gut!$"

Text_SwordsDanceWhichMon::
	.string "In Ordnung, welchem POKéMON\n"
	.string "soll ich die Attacke beibringen?$"

Text_SwordsDanceTaught::
	.string "Wenn wir doch auch immer\n"
	.string "stärker werden könnten!$"

SevenIsland_Text_IslandSign::
	.string "Das ist clever!\n"
	.string "Halt dich da raus!$"

SevenIsland_Text_IslandsMadeInSevenDays::
	.string "EILAND DREI ist die beliebteste\n"
	.string "aller Inseln.\p"
	.string "Dennoch könnte dort ein wenig\n"
	.string "mehr geboten werden.\p"
	.string "Aber ich möchte solche Typen\n"
	.string "wie diese BIKER hier nicht noch\l"
	.string "einmal sehen.$"

SevenIsland_Text_IslandVirtuallyUntouched::
	.string "Ich trainiere mein DODU im\n"
	.string "BEERENFORST.\p"
	.string "Sobald es sich entwickelt, spiele\n"
	.string "ich auf EILAND ZWEI.$"

