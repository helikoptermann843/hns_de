ThreeIsland_BerryForest_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_BerryForest_OnTransition
	.byte 0

ThreeIsland_BerryForest_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND_BERRY_FOREST
	setescapewarp MAP_THREE_ISLAND_BOND_BRIDGE, 12, 6
	end

ThreeIsland_BerryForest_EventScript_Lostelle::
	lock
	faceplayer
	msgbox ThreeIsland_BerryForest_Text_HelpScaryPokemon
	playse SE_PIN
	applymovement LOCALID_BERRY_FOREST_LOSTELLE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_BERRY_FOREST_LOSTELLE, ThreeIsland_BerryForest_Movement_LostelleLookAround
	waitmovement 0
	msgbox ThreeIsland_BerryForest_Text_HereItComesAgain
	waitse
	playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_HYPNO, 30
	dowildbattle
	applymovement LOCALID_BERRY_FOREST_LOSTELLE, Common_Movement_FacePlayer
	waitmovement 0
	msgbox ThreeIsland_BerryForest_Text_ThankYouHaveThis
	giveitem ITEM_IAPAPA_BERRY
	call_if_eq VAR_RESULT, FALSE, ThreeIsland_BerryForest_EventScript_NoRoomForBerry
	special GetPlayerBigGuyGirlString
	msgbox ThreeIsland_BerryForest_Text_LetsGoHome
	closemessage
	setflag FLAG_RESCUED_LOSTELLE
	setflag FLAG_HIDE_LOSTELLE_IN_BERRY_FOREST
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2
	clearflag FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
	warp MAP_TWO_ISLAND_JOYFUL_GAME_CORNER, 6, 6
	waitstate
	release
	end

ThreeIsland_BerryForest_EventScript_NoRoomForBerry::
	msgbox ThreeIsland_BerryForest_Text_BerryPouchIsFull
	return

ThreeIsland_BerryForest_Movement_LostelleLookAround::
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_right
	delay_8
	walk_in_place_faster_left
	step_end

ThreeIsland_BerryForest_EventScript_WelcomeSign::
	msgbox ThreeIsland_BerryForest_Text_WelcomeToBerryForest, MSGBOX_SIGN
	end

ThreeIsland_BerryForest_EventScript_BewareSign::
	msgbox ThreeIsland_BerryForest_Text_BewareWildBerryLovingMons, MSGBOX_SIGN
	end

ThreeIsland_BerryForest_Text_HelpScaryPokemon::
	.string "IRRMA: Wimmer… schnief…\n"
	.string "Oh! Hilf mir bitte!\p"
	.string "Ein Angst einflößendes POKéMON ist\n"
	.string "dort vor kurzem aufgetaucht.\p"
	.string "Es war so gruselig.\n"
	.string "Es hat IRRMA Angst gemacht.\p"
	.string "Ich bin zu verängstigt, um mich\n"
	.string "zu bewegen! Aber ich möchte\l"
	.string "nach Hause gehen…$"

ThreeIsland_BerryForest_Text_HereItComesAgain::
	.string "Oh! Hier ist es wieder! Nein!\n"
	.string "Verschwinde! Es macht mir Angst!\p"
	.string "Wahhhhhhhhhhh!\n"
	.string "Ich will zu meinem Papa!$"

ThreeIsland_BerryForest_Text_ThankYouHaveThis::
	.string "Oh! Das war so gruselig!\n"
	.string "Dankeschön!\p"
	.string "IRRMA wollte hier BEEREN\n"
	.string "pflücken.\p"
	.string "Das ist für dich!$"

ThreeIsland_BerryForest_Text_LetsGoHome::
	.string "Wie heißt du?\p"
	.string "IRRMA ist so verängstigt!\n"
	.string "Bringst du mich nach Hause?\p"
	.string "O.K.!\n"
	.string "Lass uns nach Hause gehen!$"

ThreeIsland_BerryForest_Text_BerryPouchIsFull::
	.string "Deine BEERENTÜTE ist voll.\n"
	.string "Ich denke, du willst das nicht.$"

ThreeIsland_BerryForest_Text_WelcomeToBerryForest::
	.string "Willkommen im BEERENFORST!\p"
	.string "Sei freundlich und teile die BEEREN\n"
	.string "mit Anderen und POKéMON!$"

ThreeIsland_BerryForest_Text_BewareWildBerryLovingMons::
	.string "Nimm dich vor wilden POKéMON,\n"
	.string "die BEEREN lieben, in Acht!$"

