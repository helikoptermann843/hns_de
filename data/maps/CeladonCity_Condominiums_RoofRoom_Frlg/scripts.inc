CeladonCity_Condominiums_RoofRoom_Frlg_MapScripts::
	.byte 0

CeladonCity_Condominiums_RoofRoom_EventScript_BlackBelt::
	msgbox CeladonCity_Condominiums_RoofRoom_Text_TheresNothingIDontKnow, MSGBOX_NPC
	end

CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall::
	lock
	faceplayer
	setvar VAR_TEMP_1, SPECIES_EEVEE
	givemon SPECIES_EEVEE, 25
	goto_if_eq VAR_RESULT, 0, CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty
	goto_if_eq VAR_RESULT, 1, CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC
	goto_if_eq VAR_RESULT, 2, Common_EventScript_NoMoreRoomForPokemon
	release
	end

CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty::
	removeobject LOCALID_EEVEE_POKEBALL
	playfanfare MUS_LEVEL_UP
	message CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
	end

CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC::
	removeobject LOCALID_EEVEE_POKEBALL
	playfanfare MUS_LEVEL_UP
	message CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC
	call Common_EventScript_NameReceivedBoxMon
	goto CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC
	end

CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC::
	call Common_EventScript_TransferredToPC
	goto CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
	end

CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee::
	setflag FLAG_GOT_EEVEE
	release
	end

CeladonCity_Condominiums_RoofRoom_EventScript_TMsPamphlet::
	msgbox CeladonCity_Condominiums_RoofRoom_Text_PamphletOnTMs, MSGBOX_SIGN
	end

CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard::
	lockall
	msgbox CeladonCity_Condominiums_RoofRoom_Text_WirelessAdapterLecture
	message CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading
	waitmessage
	setvar VAR_0x8004, 4
	multichoice 0, 0, MULTI_LINKED_DIRECT_UNION, FALSE
	switch VAR_RESULT
	case 0, CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub
	case 1, CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner
	case 2, CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom
	case 3, CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
	case 127, CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
	end

CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading::
	message CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading
	waitmessage
	multichoice 0, 0, MULTI_LINKED_DIRECT_UNION, FALSE
	switch VAR_RESULT
	case 0, CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub
	case 1, CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner
	case 2, CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom
	case 3, CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
	case 127, CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
	end

CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub::
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainWirelessClub
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
	end

CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner::
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainDirectCorner
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
	end

CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom::
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainUnionRoom
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
	end

CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard::
	releaseall
	end

CeladonCity_Condominiums_RoofRoom_Text_TheresNothingIDontKnow::
	.string "Ich kenne jedes Detail der\n"
	.string "Pokémon-Welt in deinem Game Boy\l"
	.string "Advance!\p"
	.string "Triff dich mit Freunden und tausche\n"
	.string "Pokémon!$"

CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee::
	.string "{PLAYER} erhält ein Evoli!$"

CeladonCity_Condominiums_RoofRoom_Text_BoxIsFull::
	.string "ポケモンが　いっぱいだ\n"
	.string "ボックスを　かえて　きなさい$"

CeladonCity_Condominiums_RoofRoom_Text_WirelessAdapterLecture::
	.string "Pokémon Lektüre\p"
	.string "Spielen mit dem Drahtlosen Adapter$"

CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading::
	.string "Wähle bitte ein Themengebiet aus.$"

CeladonCity_Condominiums_RoofRoom_Text_ExplainWirelessClub::
	.string "Der Pokémon Drahtlosklub\n"
	.string "befindet sich im oberen Stockwerk\l"
	.string "jedes Pokémon-Centers.\l"
	.string "Tritt dem Klub bei, um Freunde\l"
	.string "via Drahtlosem Adapter zu treffen.$"

CeladonCity_Condominiums_RoofRoom_Text_ExplainDirectCorner::
	.string "Um nur einen Freund zu treffen,\n"
	.string "kannst du in den Direktklub\l"
	.string "gehen.\l"
	.string "Das ist der rechte Schalter im\l"
	.string "Pokémon Drahtlosklub.\p"
	.string "Triff deinen Freund in der\n"
	.string "Tauschbörse oder im\l"
	.string "Kolosseum!$"

CeladonCity_Condominiums_RoofRoom_Text_ExplainUnionRoom::
	.string "Um dich mit vielen Freunden zu\n"
	.string "treffen, kannst du in den\l"
	.string "Konnex-Klub gehen.\l"
	.string "Das ist der linke Schalter im\l"
	.string "Pokémon Drahtlosklub.\p"
	.string "Im Konnex-Klub triffst\n"
	.string "du andere Trainer.$"

CeladonCity_Condominiums_RoofRoom_Text_PamphletOnTMs::
	.string "Ein Infoblatt über TM.\p"
	.string "……\p"
	.string "Es gibt insgesamt 50 TM.\p"
	.string "Außerdem gibt es sieben VM, die\n"
	.string "mehrfach nutzbar sind.\p"
	.string "Silph Co.$"

