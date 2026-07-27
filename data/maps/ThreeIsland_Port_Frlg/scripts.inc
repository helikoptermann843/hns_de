ThreeIsland_Port_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_Port_OnTransition
	.byte 0

ThreeIsland_Port_OnTransition::
	clearflag FLAG_SYS_PC_STORAGE_DISABLED
	setflag FLAG_SEVII_DETOUR_FINISHED
	end

ThreeIsland_Port_EventScript_Woman::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, ThreeIsland_Port_EventScript_WomanLostelleFound
	goto_if_ge VAR_MAP_SCENE_THREE_ISLAND, 4, ThreeIsland_Port_EventScript_WomanBikersGone
	msgbox ThreeIsland_Port_Text_IllCallThePolice
	release
	end

ThreeIsland_Port_EventScript_WomanLostelleFound::
	msgbox ThreeIsland_Port_Text_EverythingTurnedOutForBest
	release
	end

ThreeIsland_Port_EventScript_WomanBikersGone::
	msgbox ThreeIsland_Port_Text_ThankGoodnessBikersGone
	release
	end

ThreeIsland_Port_EventScript_Biker1::
	msgbox ThreeIsland_Port_Text_WereKantoRiderFederation, MSGBOX_NPC
	end

ThreeIsland_Port_EventScript_Biker2::
	lock
	msgbox ThreeIsland_Port_Text_ForkOverMoney
	release
	end

ThreeIsland_Port_Text_WereKantoRiderFederation::
	.string "Wir sind der MOTORRADKLUB aus\n"
	.string "KANTO! Töff! Töfftööööfff! Töff!\p"
	.string "Mein Motorrad hat einen kleinen\n"
	.string "Motor, daher muss ich die\l"
	.string "Geräusche selbst machen!$"

ThreeIsland_Port_Text_ForkOverMoney::
	.string "Heh, Lady!\n"
	.string "Haste mal einen POKéDOLLAR?$"

ThreeIsland_Port_Text_IllCallThePolice::
	.string "Heija!\p"
	.string "W-wer bist du?\n"
	.string "Ich… ich rufe die Polizei!$"

ThreeIsland_Port_Text_ThankGoodnessBikersGone::
	.string "Diese BIKER…\n"
	.string "Sind sie weg?\p"
	.string "Oh, Gott sei Dank!\n"
	.string "Die haben mir Angst eingejagt!$"

ThreeIsland_Port_Text_EverythingTurnedOutForBest::
	.string "Die BIKER sind verduftet und\n"
	.string "IRRMA war in Sicherheit.\p"
	.string "Jetzt ist alles gut!$"

