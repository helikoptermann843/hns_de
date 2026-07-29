FiveIsland_ResortGorgeous_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FiveIsland_ResortGorgeous_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FiveIsland_ResortGorgeous_OnFrame
	.byte 0

FiveIsland_ResortGorgeous_OnWarp::
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth
	.2byte 0

FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

FiveIsland_ResortGorgeous_OnFrame::
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene
	.2byte 0

FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene::
	lockall
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow
	closemessage
	applymovement LOCALID_RESORT_GORGEOUS_SELPHY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	opendoor 39, 8
	waitdooranim
	applymovement LOCALID_RESORT_GORGEOUS_SELPHY, FiveIsland_ResortGorgeous_Movement_SelphyEnterHome
	waitmovement 0
	closedoor 39, 8
	waitdooranim
	removeobject LOCALID_RESORT_GORGEOUS_SELPHY
	clearflag FLAG_HIDE_RESORT_GORGEOUS_INSIDE_SELPHY
	setvar VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 2
	releaseall
	end

FiveIsland_ResortGorgeous_Movement_SelphyEnterHome::
	walk_up
	set_invisible
	step_end

FiveIsland_ResortGorgeous_EventScript_SelphysHouseSign::
	msgbox FiveIsland_ResortGorgeous_Text_SelphysHouse, MSGBOX_SIGN
	end

FiveIsland_ResortGorgeous_Text_DaisyIntro::
	.string "Mit diesen Händen werde ich\n"
	.string "den Sieg herbeiführen.$"

FiveIsland_ResortGorgeous_Text_DaisyDefeat::
	.string "Diese Schande…\n"
	.string "Ich werde rot…$"

FiveIsland_ResortGorgeous_Text_DaisyPostBattle::
	.string "Ugh! Meine Farbeimer sind\n"
	.string "überall verstreut.$"

FiveIsland_ResortGorgeous_Text_CelinaIntro::
	.string "Entschuldigung!\n"
	.string "Ich versuche zu malen.\l"
	.string "Geh mir bitte aus der Sicht!$"

FiveIsland_ResortGorgeous_Text_CelinaDefeat::
	.string "Diese Niederlage…\n"
	.string "Mir wird so schwindlig…$"

FiveIsland_ResortGorgeous_Text_CelinaPostBattle::
	.string "Gillian?\n"
	.string "Bitte beweg deinen Kopf ein wenig…\l"
	.string "Genau! Dieser Blick ist es!$"

FiveIsland_ResortGorgeous_Text_RaynaIntro::
	.string "Hmm…\n"
	.string "Der Winkel ist noch nicht perfekt…$"

FiveIsland_ResortGorgeous_Text_RaynaDefeat::
	.string "Oh…\n"
	.string "Meine Emotionen sind blau…$"

FiveIsland_ResortGorgeous_Text_RaynaPostBattle::
	.string "Der Himmel und das Meer…\n"
	.string "Sie sind so wankelmütig.\p"
	.string "Ihr ständig wechselnder Ausdruck\n"
	.string "macht es nicht leicht, sie\l"
	.string "malerisch einzufangen.$"

FiveIsland_ResortGorgeous_Text_JackiIntro::
	.string "Ich besuche das Sommerhaus\n"
	.string "meines Freundes, wenn\l"
	.string "du fragst.$"

FiveIsland_ResortGorgeous_Text_JackiDefeat::
	.string "Oh, du bist stark!$"

FiveIsland_ResortGorgeous_Text_JackiPostBattle::
	.string "Ich finde es angenehm, bei einer\n"
	.string "sanften Meeresbrise zum\l"
	.string "Spaß zu kämpfen.$"

FiveIsland_ResortGorgeous_Text_GillianIntro::
	.string "Ich denke darüber nach, einen\n"
	.string "Pool nur für Pokémon\l"
	.string "einzurichten.$"

FiveIsland_ResortGorgeous_Text_GillianDefeat::
	.string "Oh, meine Güte!$"

FiveIsland_ResortGorgeous_Text_GillianPostBattle::
	.string "Ein Pool wäre cool, aber ein\n"
	.string "Solarium wäre noch besser.$"

FiveIsland_ResortGorgeous_Text_DestinIntro::
	.string "Ich bin ein starker Sprinter.\n"
	.string "Ich bin wirklich schnell!$"

FiveIsland_ResortGorgeous_Text_DestinDefeat::
	.string "Ups!\n"
	.string "Ich war zu schnell!$"

FiveIsland_ResortGorgeous_Text_DestinPostBattle::
	.string "Wenn ich mit dem Wind renne,\n"
	.string "fühlt es sich an, als ob ich\l"
	.string "fliegen würde…$"

FiveIsland_ResortGorgeous_Text_TobyIntro::
	.string "Das maritime Leben hier sagt\n"
	.string "mir zu!$"

FiveIsland_ResortGorgeous_Text_TobyDefeat::
	.string "Das ist Wahnsinn!\n"
	.string "Du machst Witze!$"

FiveIsland_ResortGorgeous_Text_TobyPostBattle::
	.string "Das so ernst zu nehmen…\n"
	.string "Wie unsensibel.$"

FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow::
	.string "Kea: Danke!\p"
	.string "Du darfst jetzt gehen!$"

FiveIsland_ResortGorgeous_Text_SelphysHouse::
	.string "Ich reise immer mit Knuddeluff!$"

