PalletTown_PlayersHouse_1F_Frlg_MapScripts::
	.byte 0

PalletTown_PlayersHouse_1F_EventScript_Mom::
	lock
	faceplayer
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_1F_EventScript_MomHeal
	checkplayergender
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale
	closemessage
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale::
	msgbox PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou
	return

PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale::
	msgbox PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou
	return

PalletTown_PlayersHouse_1F_EventScript_MomHeal::
	msgbox PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare
	release
	end

@ Displays special text if interacted with from side or back (which are normally inaccessible)
PalletTown_PlayersHouse_1F_EventScript_TV::
	lockall
	goto_if_eq VAR_FACING, DIR_NORTH, PalletTown_PlayersHouse_1F_EventScript_TVScreen
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
	releaseall
	end

PalletTown_PlayersHouse_1F_EventScript_TVScreen::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale
	releaseall
	end

PalletTown_PlayersHouse_1F_EventScript_TVScreenMale::
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
	return

PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale::
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
	return

PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou::
	.string "MUTTER: Richtig. Irgendwann gehen\n"
	.string "alle Kinder fort, um ein Abenteuer\l"
	.string "zu erleben!\p"
	.string "PROF. EICH von nebenan hat nach\n"
	.string "dir gefragt.$"

PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou::
	.string "MUTTER: … genau!\n"
	.string "Jedes Mädchen träumt vom Reisen.\l"
	.string "Das sieht man im Fernsehen.\p"
	.string "Oh, ja, PROF. EICH von nebenan\n"
	.string "hat nach dir gesucht!$"

PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest::
	.string "MUTTER: {VAR}! Du solltest eine\n"
	.string "kurze Pause einlegen.$"

PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare::
	.string "MUTTER: Sehr gut! Du und deine\n"
	.string "POKéMON sehen großartig aus!\l"
	.string "Achte auf dich!$"

PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad::
	.string "Im Fernsehen läuft ein Film.\n"
	.string "Vier Jungen laufen ein Bahngleis\l"
	.string "entlang!\p"
	.string "Den Film kenne ich schon! Ich\n"
	.string "mache mich besser auf den Weg!$"

PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad::
	.string "Es läuft ein Film im TV.\n"
	.string "Ein bezopftes Mädchen läuft\l"
	.string "einen gelben Steinweg entlang.\p"
	.string "… ich breche auch besser auf!$"

PalletTown_PlayersHouse_1F_Text_OopsWrongSide::
	.string "Ups, falsche Richtung!$"
