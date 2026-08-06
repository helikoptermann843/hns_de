FiveIsland_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_OnTransition
	.byte 0

FiveIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND
	end

FiveIsland_EventScript_IslandSign::
	msgbox FiveIsland_Text_IslandSign, MSGBOX_SIGN
	end

FiveIsland_EventScript_BugCatcher::
	msgbox FiveIsland_Text_WeirdBuildingInMeadow, MSGBOX_NPC
	end

FiveIsland_EventScript_Fisher::
	msgbox FiveIsland_Text_BeenGettingBusierAroundHere, MSGBOX_NPC
	end

FiveIsland_Text_IslandSign::
	.string "Eiland Fünf\n"
	.string "Chrono-Insel: Wo die Zeit rennt$"

FiveIsland_Text_WeirdBuildingInMeadow::
	.string "Igitt, das stinkt! Ich wollte auf\n"
	.string "der Weide spielen.\p"
	.string "Aber sie haben dort ein merk-\n"
	.string "würdiges Gebäude errichtet und\l"
	.string "ich kann dort nicht spielen.$"

FiveIsland_Text_BeenGettingBusierAroundHere::
	.string "Hier wurde es in letzter Zeit\n"
	.string "geschäftiger.\p"
	.string "Ich habe auch in letzter Zeit\n"
	.string "nicht viele gute Fische gefangen.$"

