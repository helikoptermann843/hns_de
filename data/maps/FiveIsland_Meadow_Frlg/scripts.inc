FiveIsland_Meadow_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_Meadow_OnLoad
	.byte 0

FiveIsland_Meadow_OnLoad::
	call_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
	end

FiveIsland_Meadow_EventScript_WarehouseDoor::
	lockall
	goto_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen
	goto_if_set FLAG_LEARNED_YES_NAH_CHANSEY, FiveIsland_Meadow_EventScript_OpenWarehouseDoor
	msgbox FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded
	releaseall
	end

FiveIsland_Meadow_EventScript_OpenWarehouseDoor::
	setflag FLAG_UNLOCKED_ROCKET_WAREHOUSE
	message FiveIsland_Meadow_Text_EnteredPasswordDoorOpened
	waitmessage
	delay 60
	call FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
	special DrawWholeMapView
	playse SE_PIN
	waitse
	releaseall
	end

FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen::
	msgbox FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen
	releaseall
	end

FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked::
	setmetatile 12, 21, METATILE_SeviiIslands45_RocketWarehouseDoor_Unlocked, 1
	return

FiveIsland_Meadow_EventScript_Rocket1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_49, FiveIsland_Meadow_Text_Rocket1Intro, FiveIsland_Meadow_Text_Rocket1Defeat
	msgbox FiveIsland_Meadow_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_Meadow_EventScript_Rocket2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_50, FiveIsland_Meadow_Text_Rocket2Intro, FiveIsland_Meadow_Text_Rocket2Defeat
	msgbox FiveIsland_Meadow_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_Meadow_EventScript_Rocket3::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_51, FiveIsland_Meadow_Text_Rocket3Intro, FiveIsland_Meadow_Text_Rocket3Defeat
	msgbox FiveIsland_Meadow_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
	end

@ Unused
FiveIsland_Meadow_Text_DoorNeedsTwoPasswords::
	.string "とびらを　あけるには\n"
	.string "パスワードが　2つ　いるようだ$"

FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded::
	.string "{PLAYER} gab ein Passwort ein.\p"
	.string "“Arbok Kobra”\p"
	.string "…………\n"
	.string "……\p"
	.string "Um die Türe zu öffnen, wird ein\n"
	.string "weiteres Passwort benötigt!$"

FiveIsland_Meadow_Text_EnteredPasswordDoorOpened::
	.string "{PLAYER} entered two passwords.\p"
	.string "“Goldeen need log.”\n"
	.string "“Yes, nah, Chansey.”\p"
	.string "… …  … …  … …\p"
	.string "The Warehouse's door opened!$"

FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen::
	.string "Die Türe zum Lager ist bereits\n"
	.string "offen.$"

FiveIsland_Meadow_Text_Rocket1Intro::
	.string "Zutritt zu diesem Gebiet untersagt!\n"
	.string "Raus, raus!$"

FiveIsland_Meadow_Text_Rocket1Defeat::
	.string "Ist das wahr?$"

FiveIsland_Meadow_Text_Rocket1PostBattle::
	.string "Du hast hier nichts verloren!\n"
	.string "Geh nach Hause!$"

FiveIsland_Meadow_Text_Rocket2Intro::
	.string "Hier gibt es nichts weiter, außer\n"
	.string "unserem Lager.\p"
	.string "Also, was hast du hier zu suchen?$"

FiveIsland_Meadow_Text_Rocket2Defeat::
	.string "Das sollte nicht geschehen…$"

FiveIsland_Meadow_Text_Rocket2PostBattle::
	.string "Du möchtest wissen, was im\n"
	.string "Lager ist?\p"
	.string "Es ist besser, du weißt das nicht.\n"
	.string "Zu deinem Besten, versteht sich!$"

FiveIsland_Meadow_Text_Rocket3Intro::
	.string "Du verschwendest Zeit, auch\n"
	.string "wenn du an mir vorbei kommst.$"

FiveIsland_Meadow_Text_Rocket3Defeat::
	.string "Oh, das macht mich wütend!$"

FiveIsland_Meadow_Text_Rocket3PostBattle::
	.string "Du kommst ohne die Passwörter\n"
	.string "ohnehin nicht hinein.$"

