.equ PLAYER_X_POS, VAR_0x8004
.equ PLAYER_Y_POS, VAR_0x8005

FiveIsland_RocketWarehouse_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_RocketWarehouse_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_RocketWarehouse_OnTransition
	.byte 0

FiveIsland_RocketWarehouse_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND_ROCKET_WAREHOUSE
	end

FiveIsland_RocketWarehouse_OnLoad::
	call_if_defeated TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
	end

FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry::
	setmetatile 26, 20, METATILE_SilphCo_Arrow_Up, 0
	setmetatile 27, 20, METATILE_SilphCo_Arrow_Up, 0
	return

FiveIsland_RocketWarehouse_EventScript_Cage::
	lockall
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FiveIsland_RocketWarehouse_EventScript_CageUnlocked
	msgbox FiveIsland_RocketWarehouse_Text_ManyMonsLockedInPen
	releaseall
	end

FiveIsland_RocketWarehouse_EventScript_CageUnlocked::
	msgbox FiveIsland_RocketWarehouse_Text_PenUnlockedMonsFled
	releaseall
	end

FiveIsland_RocketWarehouse_EventScript_Computer::
	msgbox FiveIsland_RocketWarehouse_Text_ReportWithGraphsAndText, MSGBOX_SIGN
	end

FiveIsland_RocketWarehouse_EventScript_Admin2Trigger::
	lockall
	applymovement LOCALID_WAREHOUSE_ADMIN2, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
	releaseall
	end

FiveIsland_RocketWarehouse_EventScript_Gideon::
	trainerbattle_single TRAINER_SCIENTIST_GIDEON, FiveIsland_RocketWarehouse_Text_GideonIntro, FiveIsland_RocketWarehouse_Text_GideonDefeat, FiveIsland_RocketWarehouse_EventScript_DefeatedGideon
	goto_if_set FLAG_IS_CHAMPION, FiveIsland_RocketWarehouse_EventScript_MentionGiovannisKid
	msgbox FiveIsland_RocketWarehouse_Text_GetLostLeaveMeBe, MSGBOX_AUTOCLOSE
	end

FiveIsland_RocketWarehouse_EventScript_MentionGiovannisKid::
	famechecker FAMECHECKER_GIOVANNI, 5
	msgbox FiveIsland_RocketWarehouse_Text_GiovannisKidHasRedHair, MSGBOX_AUTOCLOSE
	end

FiveIsland_RocketWarehouse_EventScript_DefeatedGideon::
	msgbox FiveIsland_RocketWarehouse_Text_GideonPostBattle
	setflag FLAG_RECOVERED_SAPPHIRE
	giveitem ITEM_SAPPHIRE
	release
	end

FiveIsland_RocketWarehouse_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_47, FiveIsland_RocketWarehouse_Text_Grunt2Intro, FiveIsland_RocketWarehouse_Text_Grunt2Defeat
	msgbox FiveIsland_RocketWarehouse_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_RocketWarehouse_EventScript_Grunt3::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_48, FiveIsland_RocketWarehouse_Text_Grunt3Intro, FiveIsland_RocketWarehouse_Text_Grunt3Defeat
	msgbox FiveIsland_RocketWarehouse_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_RocketWarehouse_EventScript_Admin2::
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN_2, FiveIsland_RocketWarehouse_Text_Admin2Intro, FiveIsland_RocketWarehouse_Text_Admin2Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2::
	getplayerxy PLAYER_X_POS, PLAYER_Y_POS
	call_if_le PLAYER_X_POS, 24, FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin2
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_WAREHOUSE_GRUNT2
	removeobject LOCALID_WAREHOUSE_GRUNT3
	removeobject LOCALID_WAREHOUSE_ADMIN2
	removeobject LOCALID_WAREHOUSE_ADMIN1
	setflag FLAG_HIDE_FIVE_ISLAND_ROCKETS
	fadescreen FADE_FROM_BLACK
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
	setflag FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE
	release
	end

FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin2::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

FiveIsland_RocketWarehouse_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_42, FiveIsland_RocketWarehouse_Text_Grunt1Intro, FiveIsland_RocketWarehouse_Text_Grunt1Defeat
	msgbox FiveIsland_RocketWarehouse_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_RocketWarehouse_EventScript_Admin1::
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_Text_Admin1Intro, FiveIsland_RocketWarehouse_Text_Admin1Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough, MSGBOX_AUTOCLOSE
	end

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1::
	getplayerxy PLAYER_X_POS, PLAYER_Y_POS
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_NORTH, FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1
	msgbox FiveIsland_RocketWarehouse_Text_Admin1PostBattle
	closemessage
	call_if_le PLAYER_X_POS, 24, FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitchFar
	call_if_eq PLAYER_X_POS, 25, FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitch
	call_if_eq PLAYER_X_POS, 26, FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch
	call_if_eq PLAYER_X_POS, 27, FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch
	playse SE_PIN
	call FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
	special DrawWholeMapView
	waitse
	call_if_le PLAYER_X_POS, 24, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
	call_if_eq PLAYER_X_POS, 25, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
	call_if_eq PLAYER_X_POS, 26, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
	call_if_eq PLAYER_X_POS, 27, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerDown
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough
	release
	end

FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1::
	goto_if_eq PLAYER_X_POS, 27, Common_EventScript_NopReturn
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitchFar::
	applymovement LOCALID_WAREHOUSE_ADMIN1, FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitchFar
	waitmovement 0
	return

FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitch::
	applymovement LOCALID_WAREHOUSE_ADMIN1, FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitch
	waitmovement 0
	return

FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch::
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft::
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerDown::
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitchFar::
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitch::
	walk_right
	walk_in_place_faster_up
	step_end

FiveIsland_RocketWarehouse_Text_ManyMonsLockedInPen::
	.string "Viele POKéMON sind in diesem\n"
	.string "Schuppen eingesperrt…$"

FiveIsland_RocketWarehouse_Text_PenUnlockedMonsFled::
	.string "Die Tür ist unverschlossen.\n"
	.string "Die POKéMON sind geflohen.$"

FiveIsland_RocketWarehouse_Text_Grunt2Intro::
	.string "Wusstest du, dass dies das Lager\n"
	.string "von Team Rocket ist, ehe du\l"
	.string "hierher kamst?$"

FiveIsland_RocketWarehouse_Text_Grunt2Defeat::
	.string "Was glaubst du, was du tust?$"

FiveIsland_RocketWarehouse_Text_Grunt2PostBattle::
	.string "Team Rocket wurde zerschlagen?\n"
	.string "Auf welchem Planeten lebst du?$"

FiveIsland_RocketWarehouse_Text_Grunt1Intro::
	.string "Nun sehen deine Pokémon stark aus.\n"
	.string "Möchtest du sie verkaufen?\p"
	.string "Oh?\n"
	.string "Du möchtest kämpfen?$"

FiveIsland_RocketWarehouse_Text_Grunt1Defeat::
	.string "Oh, aber…\n"
	.string "Zu viel für mich!$"

FiveIsland_RocketWarehouse_Text_Grunt1PostBattle::
	.string "Wir machen dir einen guten Preis.\n"
	.string "Verkaufe uns deine POKéMON!$"

FiveIsland_RocketWarehouse_Text_Grunt3Intro::
	.string "Die anderen haben mir bereits\n"
	.string "von dir erzählt.\l"
	.string "Aber es kann nicht sein, dass ein\l"
	.string "Kind wie du unseren Boss\l"
	.string "Giovanni kennt!$"

FiveIsland_RocketWarehouse_Text_Grunt3Defeat::
	.string "Wage… es… nicht… zu… lachen…$"

FiveIsland_RocketWarehouse_Text_Grunt3PostBattle::
	.string "Misch dich nicht in die\n"
	.string "Angelegenheiten von\l"
	.string "Erwachsenen ein, du Plage!$"

FiveIsland_RocketWarehouse_Text_Admin1Intro::
	.string "Ich weiß nicht und es kümmert mich\n"
	.string "auch nicht, ob das, was ich tue,\l"
	.string "recht oder unrecht ist…\l"
	.string "Ich vertraue Giovanni und befolge\l"
	.string "seine Anweisungen.$"

FiveIsland_RocketWarehouse_Text_Admin1Defeat::
	.string "Ich…\n"
	.string "Ich bin am Boden…$"

FiveIsland_RocketWarehouse_Text_Admin1PostBattle::
	.string "Du handelst nach bestem Wissen\n"
	.string "und Gewissen.\p"
	.string "Jetzt verstehe ich es…$"

FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough::
	.string "Ich habe es so eingerichtet, dass\n"
	.string "du hier durchkannst, wenn du\l"
	.string "wieder kommst.\l"
	.string "Warum erholst und erfrischst du\l"
	.string "dich nicht, um gewappnet zu sein?\p"
	.string "Der VORS. nach mir ist ein viel\n"
	.string "gewissenhafterer TRAINER als ich.\p"
	.string "Mach dich lieber auf einen harten\n"
	.string "Kampf bereit.$"

FiveIsland_RocketWarehouse_Text_Admin2Intro::
	.string "Du stirbst jetzt den Heldentod,\n"
	.string "Youngster! Dafür sorge ich!\p"
	.string "Das Verbreiten von Lügen über Team\n"
	.string "Rockets Auflösung…\p"
	.string "Das ist so ein offensichtlicher\n"
	.string "Versuch, Unordnung in unsere\l"
	.string "Organisation zu bringen.\l"
	.string "Glücklicherweise schenken wir den\l"
	.string "Lügen eines Kindes keinen Glauben!\p"
	.string "Und nun zeige ich dir, wie grausam\n"
	.string "und wütend ein Erwachsener sein\l"
	.string "kann!$"

FiveIsland_RocketWarehouse_Text_Admin2Defeat::
	.string "Argh…\n"
	.string "Du warst zu stark…\p"
	.string "…\n"
	.string "D-das ist der Orden von Giovanni!\p"
	.string "Es ist also wahr?\n"
	.string "Team Rocket ist Geschichte?$"

FiveIsland_RocketWarehouse_Text_Admin2PostBattle::
	.string "Wir werden dieses Lager verlassen…\p"
	.string "Aber denke bloß nicht, es wäre\n"
	.string "erledigt. Ich lasse nicht zu, dass\l"
	.string "dies das Ende ist.\l"
	.string "Ich werde Giovanni finden. Und\l"
	.string "ich werde Team Rocket aufer-\l"
	.string "stehen lassen! Das werde ich…\p"
	.string "Bis dahin! Leb wohl!$"

FiveIsland_RocketWarehouse_Text_ReportWithGraphsAndText::
	.string "Ein mit Grafiken und Text aus-\n"
	.string "gestatteter Bericht ist auf dem\l"
	.string "PC-Monitor.\l"
	.string ""Der Einfluss von Magnet-\l"
	.string "wellen bei der POKéMON-\l"
	.string "Entwicklung"…\l"
	.string "…………\l"
	.string "……\p"
	.string "Es ist zu schwierig, zu verstehen…$"

FiveIsland_RocketWarehouse_Text_GideonIntro::
	.string "Fast hätte ich den Saphir für viel\n"
	.string "Geld verkaufen können…\p"
	.string "Dann musstest du kommen und alles\n"
	.string "kaputtmachen!\p"
	.string "Fufu… fufufufu…\n"
	.string "Es gibt kein Erbarmen für dich!$"

FiveIsland_RocketWarehouse_Text_GideonDefeat::
	.string "Argh! Mist!\n"
	.string "Mist! Blöder Mist!$"

FiveIsland_RocketWarehouse_Text_GideonPostBattle::
	.string "Wenn ich ihn nicht verkaufen\n"
	.string "kann, ist er wertlos!\l"
	.string "Nimm ihn und lass mich in Ruhe!$"

FiveIsland_RocketWarehouse_Text_GetLostLeaveMeBe::
	.string "Was willst du jetzt?\n"
	.string "Mach schon, hau ab, lass mich!$"

FiveIsland_RocketWarehouse_Text_GiovannisKidHasRedHair::
	.string "Was, du schon wieder?\p"
	.string "Du… du bist nicht das Kind von\n"
	.string "GIOVANNI! Sein Kind ist rothaarig.\p"
	.string "Du hast keinen Grund, mich zu\n"
	.string "ärgern. Lass mich in Frieden!$"

