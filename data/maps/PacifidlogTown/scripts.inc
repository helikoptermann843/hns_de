PacifidlogTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
	.byte 0

PacifidlogTown_OnTransition:
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	end

PacifidlogTown_OnResume:
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
	end

PacifidlogTown_EventScript_NinjaBoy::
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Girl::
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Fisherman::
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
	end

PacifidlogTown_EventScript_TownSign::
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
	end

PacifidlogTown_Text_FastRunningCurrent:
	.string "Im Meer zwischen FLOSSBRUNN und\n"
	.string "GRAPHITPORT CITY befinden sich\l"
	.string "reißende Strömungen.\p"
	.string "Wenn du dort SURFER einsetzt, kann es\n"
	.string "sein, dass du fortgetrieben wirst.$"

PacifidlogTown_Text_NeatHousesOnWater:
	.string "Schau mal. Ist das nicht hübsch?\n"
	.string "Die Häuser stehen auf dem Wasser.\p"
	.string "Ich wurde hier geboren.$"

PacifidlogTown_Text_SkyPillarTooScary:
	.string "Der HIMMELTURM?\p"
	.string "Ach, du meinst bestimmt diesen hohen,\n"
	.string "hohen Turm, der sich hier in der Nähe\l"
	.string "befindet.\p"
	.string "Also, wenn du mich fragst - ich würde\n"
	.string "niemals da hochgehen. Da hätte ich\n"
	.string "viel\l"
	.string "zu viel Angst, weil das so hoch ist!\p"
	.string "Leben auf Höhe des Meeresspiegels in\n"
	.string "FLOSSBRUNN, das ist mein Ding.$"

PacifidlogTown_Text_TownSign:
	.string "FLOSSBRUNN\p"
	.string "“Wo die Morgensonne ein Lächeln auf\n"
	.string "das Meer zaubert.”$"

