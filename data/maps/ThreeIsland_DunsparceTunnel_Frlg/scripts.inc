ThreeIsland_DunsparceTunnel_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_DunsparceTunnel_OnTransition
	.byte 0

ThreeIsland_DunsparceTunnel_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND_DUNSPARCE_TUNNEL
	specialvar VAR_RESULT, IsNationalPokedexEnabled
	copyvar VAR_0x8008, VAR_RESULT
	call_if_eq VAR_0x8008, TRUE, ThreeIsland_DunsparceTunnel_EventScript_SetLayoutDugOut
	call_if_eq VAR_0x8008, FALSE, ThreeIsland_DunsparceTunnel_EventScript_MoveProspectorToWall
	end

ThreeIsland_DunsparceTunnel_EventScript_SetLayoutDugOut::
	setmaplayoutindex LAYOUT_THREE_ISLAND_DUNSPARCE_TUNNEL_DUG_OUT
	return

ThreeIsland_DunsparceTunnel_EventScript_MoveProspectorToWall::
	setobjectxyperm LOCALID_PROSPECTOR, 6, 3
	setobjectmovementtype LOCALID_PROSPECTOR, MOVEMENT_TYPE_FACE_RIGHT
	return

ThreeIsland_DunsparceTunnel_EventScript_Prospector::
	lock
	faceplayer
	goto_if_set FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL, ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget
	specialvar VAR_RESULT, IsNationalPokedexEnabled
	goto_if_eq VAR_RESULT, TRUE, ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold
	msgbox ThreeIsland_DunsparceTunnel_Text_ProspectingForGold
	closemessage
	applymovement LOCALID_PROSPECTOR, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold::
	msgbox ThreeIsland_DunsparceTunnel_Text_StruckGoldThisIsForYou
	giveitem ITEM_NUGGET
	goto_if_eq VAR_RESULT, FALSE, ThreeIsland_DunsparceTunnel_EventScript_NoRoomForNugget
	setflag FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL
	goto ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget
	end

ThreeIsland_DunsparceTunnel_EventScript_NoRoomForNugget::
	msgbox ThreeIsland_DunsparceTunnel_Text_WhoopsBagCrammedFull
	release
	end

ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget::
	msgbox ThreeIsland_DunsparceTunnel_Text_ThatsANugget
	release
	end

ThreeIsland_DunsparceTunnel_Text_ProspectingForGold::
	.string "Heh, du!\n"
	.string "Wie geht es dir?\p"
	.string "Du fragst, was ich hier mache?\n"
	.string "Warum? Ich suche nach Gold!\p"
	.string "Wenn ich reich bin, kaufe ich\n"
	.string "ein Haus in KANTO.$"

ThreeIsland_DunsparceTunnel_Text_StruckGoldThisIsForYou::
	.string "Heh, du! Wie geht es dir?\n"
	.string "Hast du schon gehört? Ich habe\l"
	.string "Gold gefunden!\l"
	.string "Erinnerst du dich, dass ich danach\l"
	.string "gesucht habe?\p"
	.string "Du kannst dir gar nicht vorstellen,\n"
	.string "wie glücklich ich bin.\p"
	.string "Ich zeig es dir!\n"
	.string "Das ist für dich!$"

ThreeIsland_DunsparceTunnel_Text_ThatsANugget::
	.string "Das ist ein Nugget.\n"
	.string "Ich kann dir keine weisen Ratschläge\l"
	.string "mitgeben, das hier muss ausreichen!$"

ThreeIsland_DunsparceTunnel_Text_WhoopsBagCrammedFull::
	.string "Ups! Dein BEUTEL ist voll!\n"
	.string "Ich gebe es dir später!$"

