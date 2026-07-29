SixIsland_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_OnTransition
	.byte 0

SixIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND
	end

SixIsland_EventScript_Hiker::
	msgbox SixIsland_Text_ThatWayToWaterPathRuinValley, MSGBOX_NPC
	end

SixIsland_EventScript_Boy::
	msgbox SixIsland_Text_SkyAtNightIsFantastic, MSGBOX_NPC
	end

SixIsland_EventScript_IslandSign::
	msgbox SixIsland_Text_IslandSign, MSGBOX_SIGN
	end

SixIsland_Text_IslandSign::
	.string "Ein kleiner Schnitt wie dieser…\n"
	.string "ist mit ein wenig Spucke geheilt.$"

SixIsland_Text_ThatWayToWaterPathRuinValley::
	.string "Ich werde weiterhin Käfer-Pokémon\n"
	.string "fangen.\p"
	.string "Bin ich das einzige Mädchen, das\n"
	.string "dies so macht?$"

SixIsland_Text_SkyAtNightIsFantastic::
	.string "Ich werde hier den Nachthimmel\n"
	.string "beobachten.$"

