PetalburgCity_WallysHouse_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_WallysHouse_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_OnWarp
	.byte 0

PetalburgCity_WallysHouse_OnWarp:
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther
	.2byte 0

PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther::
	turnobject LOCALID_PLAYER, DIR_EAST
	turnobject LOCALID_WALLYS_HOUSE_WALLYS_DAD, DIR_WEST
	end

PetalburgCity_WallysHouse_OnFrame:
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_GiveHMSurf
	.2byte 0

PetalburgCity_WallysHouse_EventScript_GiveHMSurf::
	lockall
	msgbox PetalburgCity_WallysHouse_Text_PleaseExcuseUs, MSGBOX_DEFAULT
	giveitem ITEM_HM_SURF
	setflag FLAG_RECEIVED_HM_SURF
	msgbox PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces, MSGBOX_DEFAULT
	setvar VAR_PETALBURG_CITY_STATE, 5
	releaseall
	end

PetalburgCity_WallysHouse_EventScript_WallysDad::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_PlayedWithWally
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally, MSGBOX_DEFAULT
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
	release
	end

PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf::
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad::
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_EventScript_PlayedWithWally::
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_EventScript_WallysMom::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf::
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally:
	.string "Du…\n"
	.string "Ach, du bist bestimmt {PLAYER}{KUN},\n"
	.string "richtig? \p"
	.string "Danke, dass du dich um HEIKO gekümmert\n"
	.string "hast.\p"
	.string "Er war schon als Baby immer zart und\n"
	.string "kränklich.\p"
	.string "Wir haben ihn für eine Weile zu\n"
	.string "Verwandten nach WIESENFLUR\l"
	.string "geschickt.\p"
	.string "Die Luft ist dort viel sauberer als\n"
	.string "hier. \p"
	.string "Was heißt das? Wo ist HEIKO?\n"
	.string "Er ist fort, unser HEIKO?\p"
	.string "Ich frage mich, wo er jetzt wohl sein\n"
	.string "mag?$"

PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing:
	.string "Ich frage mich, wie es unserem\n"
	.string "HEIKO geht.$"

PetalburgCity_WallysHouse_Text_PleaseExcuseUs:
	.string "Hallo {PLAYER}{KUN}! Bitte\n"
	.string "entschuldige,\n"
	.string "dass wir dich den weiten Weg hierher\l"
	.string "gerufen haben.\p"
	.string "Unser HEIKO ist viel robuster ge-\n"
	.string "worden, seit er in WIESENFLUR ist.\p"
	.string "Das verdanken wir allein dir!\p"
	.string "Als HEIKO den Ort verließ, hast du\n"
	.string "ihm geholfen, ein POKéMON zu fangen,\l"
	.string "stimmt’s?\p"
	.string "Ich glaube, das hat HEIKO richtig\n"
	.string "glücklich gemacht.\p"
	.string "Und nicht nur HEIKO. Auch mich als\n"
	.string "Vater hat es sehr glücklich gemacht.\p"
	.string "Glücklich darüber, dass er einen\n"
	.string "Freund wie dich gefunden hat.\p"
	.string "Das soll jetzt keine Bestechung sein!\n"
	.string "Aber ich möchte dir dies schenken.$"

PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces:
	.string "Wenn dein POKéMON SURFER beherrscht,\n"
	.string "kannst du viele neue Orte bereisen.$"

PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon:
	.string "HEIKO wird bald wieder nach Hause\n"
	.string "kommen. Ich freue mich schon so.$"

PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity:
	.string "Oh! Du hast HEIKO in PRACHTPOLIS CITY\n"
	.string "getroffen?\p"
	.string "Ach, {PLAYER}{KUN}, du willst mich auf\n"
	.string "den Arm\n"
	.string "nehmen!\p"
	.string "Er mag sich gesundheitlich erholt\n"
	.string "haben, aber er wird nicht alleine so\n"
	.string "weit\l"
	.string "fortgegangen sein!$"

PetalburgCity_WallysHouse_Text_WallyWasReallyHappy:
	.string "HEIKO war richtig glücklich, als er\n"
	.string "uns erzählte, dass er ein POKéMON\l"
	.string "gefangen habe.\p"
	.string "Ich habe ihn schon seit Ewigkeiten\n"
	.string "nicht mehr so glücklich erlebt!$"

PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling:
	.string "Ich muss das vor meinem Mann\n"
	.string "verheimlichen…\p"
	.string "Aber unser HEIKO hat WIESENFLUR\n"
	.string "verlassen, ohne jemandem davon zu\l"
	.string "erzählen.\p"
	.string "Weißt du, HEIKO ist nicht kräftig,\n"
	.string "besitzt aber einen starken Willen.\p"
	.string "Ich bin sicher, er wird gesund und\n"
	.string "wohl-\l"
	.string "behalten wieder nach Hause kommen.$"

