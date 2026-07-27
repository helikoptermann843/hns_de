OneIsland_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_OnFrame
	.byte 0

OneIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_ONE_ISLAND
	end

OneIsland_OnFrame::
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 2, OneIsland_EventScript_EnterOneIslandFirstTime
	.2byte 0

OneIsland_EventScript_EnterOneIslandFirstTime::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_PLAYER, OneIsland_Movement_PlayerExitHarbor
	waitmovement 0
	msgbox OneIsland_Text_BillLetsGoSeeCelio
	closemessage
	applymovement LOCALID_ONE_ISLAND_BILL, OneIsland_Movement_BillWalkToPokeCenter
	applymovement LOCALID_PLAYER, OneIsland_Movement_PlayerWalkToPokeCenter
	waitmovement 0
	opendoor 14, 5
	waitdooranim
	applymovement LOCALID_ONE_ISLAND_BILL, OneIsland_Movement_BillEnterPokeCenter
	applymovement LOCALID_PLAYER, OneIsland_Movement_PlayerEnterPokeCenter
	waitmovement 0
	closedoor 14, 5
	waitdooranim
	removeobject LOCALID_ONE_ISLAND_BILL
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 3
	warp MAP_ONE_ISLAND_POKEMON_CENTER_1F, 9, 9
	waitstate
	releaseall
	end

	.macro walk_to_pokecenter
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	.endm

OneIsland_Movement_PlayerWalkToPokeCenter::
	walk_up
	walk_to_pokecenter
	step_end

OneIsland_Movement_PlayerEnterPokeCenter::
	walk_up
	walk_up
	set_invisible
	step_end

OneIsland_Movement_PlayerExitHarbor::
	walk_up
	step_end

OneIsland_Movement_BillWalkToPokeCenter::
	walk_to_pokecenter
	walk_up
	step_end

OneIsland_Movement_BillEnterPokeCenter::
	walk_up
	set_invisible
	step_end

OneIsland_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, OneIsland_EventScript_OldManLinkHoenn
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_EventScript_OldManLinkKanto
	msgbox OneIsland_Text_LuckyToHaveCelioHere
	release
	end

OneIsland_EventScript_OldManLinkKanto::
	msgbox OneIsland_Text_HavePCLinkageWithKanto
	release
	end

OneIsland_EventScript_OldManLinkHoenn::
	msgbox OneIsland_Text_HavePCLinkageWithHoenn
	release
	end

OneIsland_EventScript_BaldingMan::
	msgbox OneIsland_Text_IsntWarmClimateHereGreat, MSGBOX_NPC
	end

OneIsland_EventScript_IslandSign::
	msgbox OneIsland_Text_IslandSign, MSGBOX_SIGN
	end

OneIsland_EventScript_PokemonNetCenterSign::
	msgbox OneIsland_Text_PokemonNetCenterSign, MSGBOX_SIGN
	end

OneIsland_Text_BillLetsGoSeeCelio::
	.string "BILL: Wir sind da!\n"
	.string "Das ist EILAND EINS!\p"
	.string "Hier gibt es mehrere Inseln und\n"
	.string "diese hier ist eine davon.\p"
	.string "Mein Freund CELIO hat das Schiff\n"
	.string "geschickt, um mich abzuholen.\p"
	.string "Er ist ganz alleine für das PC-\n"
	.string "Netzwerk auf der Insel zuständig.\p"
	.string "… warum ich dir das erzähle?\n"
	.string "Lass uns zu CELIO gehen!$"

Text_WhereDoYouWantToSail::
	.string "Ahoy, there!\n"
	.string "Where do you want to sail?$"

OneIsland_Text_LuckyToHaveCelioHere::
	.string "Wir sind hier auf einer Insel mitten\n"
	.string "im Nichts.\p"
	.string "Wir freuen uns, dass ein aufrechter\n"
	.string "junger Mann wie CELIO bei uns ist.\p"
	.string "Meine Enkelin war ob CELIOs neuem\n"
	.string "Freund ganz aufgeregt.\p"
	.string "Irgendetwas über einen berühmten\n"
	.string "POKéMANIAC.\p"
	.string "Ich bin mir nicht sicher, aber\n"
	.string "CELIO ist der Mann dafür!$"

OneIsland_Text_HavePCLinkageWithKanto::
	.string "Meine Enkelin war ob einer neuen\n"
	.string "Erfindung ganz aufgeregt.\p"
	.string "Sie sagte, dass wir jetzt via PC\n"
	.string "mit den Menschen in KANTO\l"
	.string "verbunden sind.\p"
	.string "Ich bin mir nicht sicher, aber\n"
	.string "CELIO ist der Mann dafür!$"

OneIsland_Text_HavePCLinkageWithHoenn::
	.string "Meine Enkelin war ob einer neuen\n"
	.string "Erfindung ganz aufgeregt.\p"
	.string "Sie sagte, dass wir jetzt via PC\n"
	.string "mit den Menschen in HOENN\l"
	.string "verbunden sind.\p"
	.string "Ich bin mir nicht sicher, aber\n"
	.string "CELIO ist der Mann dafür!$"

OneIsland_Text_IslandSign::
	.string "EILAND EINS\n"
	.string "Freunde treffen sich auf der\l"
	.string "Knoteninsel$"

OneIsland_Text_PokemonNetCenterSign::
	.string "Über die POKéMON-Welt hinaus!\n"
	.string "POKéMON NETZWERK-CENTER$"

@ Unused
OneIsland_Text_ReturnToCinnabar::
	.string "グレンタウンに　もどりますか？$"

OneIsland_Text_IsntWarmClimateHereGreat::
	.string "Hallo, auf Besichtigungstour?\n"
	.string "Ist das warme Klima hier nicht\l"
	.string "großartig?$"

