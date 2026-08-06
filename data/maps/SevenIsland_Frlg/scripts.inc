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
	.string "lernen? Sie heißt Schwerttanz!$"

Text_SwordsDanceDeclined::
	.string "Nun, das ist auch gut!$"

Text_SwordsDanceWhichMon::
	.string "In Ordnung, welchem Pokémon\n"
	.string "soll ich die Attacke beibringen?$"

Text_SwordsDanceTaught::
	.string "Wenn wir doch auch immer\n"
	.string "stärker werden könnten!$"

SevenIsland_Text_IslandSign::
	.string "Eiland Sieben\n"
	.string "Die Abenteuerinsel der Unendlichkeit$"

SevenIsland_Text_IslandsMadeInSevenDays::
	.string "Diese Eilande werden Sevii Eiland\n"
	.string "genannt, weil es sieben sind.\p"
	.string "… das glauben zumindest die\n"
	.string "jungen Leute.\p"
	.string "Die Wahrheit ist, dass die Eilande\n"
	.string "so heißen, weil sie in sieben Tagen\l"
	.string "geschaffen wurden.$"

SevenIsland_Text_IslandVirtuallyUntouched::
	.string "Die Natur dieser Insel blieb nahezu\n"
	.string "unangetastet.\p"
	.string "Daher könnte das Wandern hier\n"
	.string "schwierig sein.$"

