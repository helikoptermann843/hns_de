.equ RECEIVED_TOWN_MAP, VAR_TEMP_1

PalletTown_RivalsHouse_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_RivalsHouse_OnTransition
	.byte 0

PalletTown_RivalsHouse_OnTransition::
	call_if_lt VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_MoveDaisyToTable
	call_if_ge VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap
	end

PalletTown_RivalsHouse_EventScript_MoveDaisyToTable::
	setobjectmovementtype LOCALID_DAISY, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm LOCALID_DAISY, 5, 4
	return

PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap::
	setvar RECEIVED_TOWN_MAP, TRUE
	return

PalletTown_RivalsHouse_EventScript_Daisy::
	lock
	faceplayer
	famechecker FAMECHECKER_DAISY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_RivalsHouse_EventScript_GroomMon
	goto_if_eq RECEIVED_TOWN_MAP, TRUE, PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_ExplainTownMap
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_GiveTownMap
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_RivalsHouse_EventScript_HeardBattledRival
	msgbox PalletTown_RivalsHouse_Text_HiBrothersAtLab
	closemessage
	applymovement LOCALID_DAISY, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PalletTown_RivalsHouse_EventScript_HeardBattledRival::
	msgbox PalletTown_RivalsHouse_Text_HeardYouBattledRival
	release
	end

PalletTown_RivalsHouse_EventScript_GroomMon::
	goto_if_lt VAR_MASSAGE_COOLDOWN_STEP_COUNTER, 500, PalletTown_RivalsHouse_EventScript_RateMonFriendship
	msgbox PalletTown_RivalsHouse_Text_LikeMeToGroomMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PalletTown_RivalsHouse_EventScript_DeclineGrooming
	msgbox PalletTown_RivalsHouse_Text_GroomWhichOne
	special ChoosePartyMon
	waitstate
	lock
	faceplayer
	goto_if_ge VAR_0x8004, PARTY_SIZE, PalletTown_RivalsHouse_EventScript_DeclineGrooming
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, PalletTown_RivalsHouse_EventScript_CantGroomEgg
	msgbox PalletTown_RivalsHouse_Text_LookingNiceInNoTime
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special DaisyMassageServices
	fadescreen FADE_FROM_BLACK
	special BufferMonNickname
	msgbox PalletTown_RivalsHouse_Text_ThereYouGoAllDone
	release
	end

PalletTown_RivalsHouse_EventScript_CantGroomEgg::
	msgbox PalletTown_RivalsHouse_Text_CantGroomAnEgg
	release
	end

PalletTown_RivalsHouse_EventScript_DeclineGrooming::
	msgbox PalletTown_RivalsHouse_Text_DontNeedAnyGrooming
	release
	end

PalletTown_RivalsHouse_EventScript_RateMonFriendship::
	msgbox PalletTown_RivalsHouse_Text_MayISeeFirstMon
	specialvar VAR_RESULT, GetLeadMonFriendship
	switch VAR_RESULT
	case 0, PalletTown_RivalsHouse_EventScript_MonFriendshipLowest
	case 1, PalletTown_RivalsHouse_EventScript_MonFriendshipLower
	case 2, PalletTown_RivalsHouse_EventScript_MonFriendshipLow
	case 3, PalletTown_RivalsHouse_EventScript_MonFriendshipMid
	case 4, PalletTown_RivalsHouse_EventScript_MonFriendshipHigh
	case 5, PalletTown_RivalsHouse_EventScript_MonFriendshipHigher
	case 6, PalletTown_RivalsHouse_EventScript_MonFriendshipHighest
	end

PalletTown_RivalsHouse_EventScript_MonFriendshipLowest::
	msgbox PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch
	release
	end

PalletTown_RivalsHouse_EventScript_MonFriendshipLower::
	msgbox PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou
	release
	end

PalletTown_RivalsHouse_EventScript_MonFriendshipLow::
	msgbox PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet
	release
	end

PalletTown_RivalsHouse_EventScript_MonFriendshipMid::
	msgbox PalletTown_RivalsHouse_Text_ItsWarmingUpToYou
	release
	end

PalletTown_RivalsHouse_EventScript_MonFriendshipHigh::
	msgbox PalletTown_RivalsHouse_Text_ItsQuiteFriendly
	release
	end

PalletTown_RivalsHouse_EventScript_MonFriendshipHigher::
	msgbox PalletTown_RivalsHouse_Text_ItLooksVeryHappy
	release
	end

PalletTown_RivalsHouse_EventScript_MonFriendshipHighest::
	msgbox PalletTown_RivalsHouse_Text_CouldntLoveYouMore
	release
	end

PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest::
	msgbox PalletTown_RivalsHouse_Text_PleaseGiveMonsRest
	release
	end

PalletTown_RivalsHouse_EventScript_GiveTownMap::
	msgbox PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp
	closemessage
	checkitemspace ITEM_TOWN_MAP
	goto_if_eq VAR_RESULT, FALSE, PalletTown_RivalsHouse_EventScript_NoRoomForTownMap
	applymovement LOCALID_DAISY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	removeobject LOCALID_TOWN_MAP
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
	delay 15
	applymovement LOCALID_DAISY, Common_Movement_FacePlayer
	waitmovement 0
	delay 12
	giveitem_msg PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy, ITEM_TOWN_MAP, 1, MUS_RG_OBTAIN_KEY_ITEM
	release
	end

PalletTown_RivalsHouse_EventScript_NoRoomForTownMap::
	msgbox PalletTown_RivalsHouse_Text_DontHaveSpaceForThis
	release
	end

PalletTown_RivalsHouse_EventScript_ExplainTownMap::
	msgbox PalletTown_RivalsHouse_Text_ExplainTownMap
	release
	end

PalletTown_RivalsHouse_EventScript_TownMap::
	msgbox PalletTown_RivalsHouse_Text_ItsBigMapOfKanto, MSGBOX_NPC
	end

PalletTown_RivalsHouse_EventScript_Bookshelf::
	msgbox PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks, MSGBOX_SIGN
	end

PalletTown_RivalsHouse_EventScript_Picture::
	msgbox PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy, MSGBOX_SIGN
	end

PalletTown_RivalsHouse_Text_HiBrothersAtLab::
	.string "Sarah: Hallo {PLAYER}!\p"
	.string "{RIVAL} wartet in Opas Labor.$"

PalletTown_RivalsHouse_Text_HeardYouBattledRival::
	.string "Sarah: Hallo {PLAYER}! Ich hörte,\n"
	.string "dass du gegen {RIVAL} \l"
	.string "gekämpft hast.\l"
	.string "Das hätte ich gerne gesehen!$"

PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp::
	.string "Opa hat dich um einen Botengang\n"
	.string "gebeten?\p"
	.string "Hier, das wird dir weiterhelfen!$"

PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy::
	.string "{PLAYER} erhält\n"
	.string "eine Karte!$"

PalletTown_RivalsHouse_Text_DontHaveSpaceForThis::
	.string "Du trägst zu viele Dinge mit dir\n"
	.string "herum!$"

PalletTown_RivalsHouse_Text_ExplainTownMap::
	.string "Benutze die Karte, um deinen\n"
	.string "Standort zu bestimmen.$"

PalletTown_RivalsHouse_Text_PleaseGiveMonsRest::
	.string "Sarah: Wie Menschen sind\n"
	.string "Pokémon Lebewesen!\p"
	.string "Wenn sie erschöpft sind,\n"
	.string "brauchen sie eine Pause!$"

PalletTown_RivalsHouse_Text_ItsBigMapOfKanto::
	.string "Eine große Karte!\n"
	.string "Sie ist nützlich!$"

PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks::
	.string "Wow! Unmengen von Büchern über\n"
	.string "Pokémon!$"

PalletTown_RivalsHouse_Text_LikeMeToGroomMon::
	.string "Sarah: Hi! Gutes Timing. Ich war\n"
	.string "gerade dabei, Tee zu machen.\p"
	.string "Hättest du auch gern eine Tasse\n"
	.string "Tee?\p"
	.string "Oh, deine Pokémon sehen ein\n"
	.string "bisschen mitgenommen aus.\p"
	.string "Möchtest du, dass ich eines für\n"
	.string "dich verschönere?$"

PalletTown_RivalsHouse_Text_DontNeedAnyGrooming::
	.string "Möchtest du keines deiner Pokémon\n"
	.string "verschönern lassen?\l"
	.string "Gut, dann trinken wir eben nur Tee.$"

PalletTown_RivalsHouse_Text_GroomWhichOne::
	.string "Welches soll ich verschönern?$"

PalletTown_RivalsHouse_Text_LookingNiceInNoTime::
	.string "Sarah: Gut. In kürzester Zeit wird\n"
	.string "es hübsch und adrett aussehen.$"

PalletTown_RivalsHouse_Text_ThereYouGoAllDone::
#ifdef BUGFIX @ The localizers missed what should be a textcolor change in the localizations.
	.string "{COLOR DARK_GRAY}{STR_VAR_1} looks dreamily content…\p"
	.string "{COLOR RED}Daisy: There you go! All done.\n"
#else @ In the JP games, gender-based text used a different font instead of different colors.
	.string "{FONT_NORMAL}{STR_VAR_1} looks dreamily content…\p"
	.string "{FONT_FEMALE}Daisy: There you go! All done.\n"
#endif
	.string "See? Doesn't it look nice?\p"
	.string "Giggle…\n"
	.string "It's such a cute Pokémon.$"

PalletTown_RivalsHouse_Text_CantGroomAnEgg::
	.string "Es tut mir Leid, aber ich kann\n"
	.string "wirklich kein Ei verschönern.$"

PalletTown_RivalsHouse_Text_MayISeeFirstMon::
	.string "Sarah: Deine Pokémon werden dich\n"
	.string "lieben, wenn du sie mit Liebe\l"
	.string "trainierst.\l"
	.string "{PLAYER}, darf ich dein erstes\l"
	.string "Pokémon sehen?$"

PalletTown_RivalsHouse_Text_CouldntLoveYouMore::
	.string "Es liebt dich über alles! Das ist\n"
	.string "so wunderbar und toll!\p"
	.string "Dein Pokémon könnte nicht\n"
	.string "glücklicher sein!$"

PalletTown_RivalsHouse_Text_ItLooksVeryHappy::
	.string "Es ist sehr glücklich!\p"
	.string "Ich wünschte, {RIVAL} könnte das\n"
	.string "sehen und etwas daraus lernen.$"

PalletTown_RivalsHouse_Text_ItsQuiteFriendly::
	.string "Es ist ein guter Freund von dir!\n"
	.string "Behandle es weiterhin gut!$"

PalletTown_RivalsHouse_Text_ItsWarmingUpToYou::
	.string "Es nähert sich dir an! Euer gegen-\n"
	.string "seitiges Vertrauen muss noch\l"
	.string "besser werden!$"

PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet::
	.string "Es kennt dich noch nicht gut!\p"
	.string "Pokémon sind zunächst skeptisch,\n"
	.string "wenn man sie fängt!$"

PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou::
	.string "{PLAYER}, ich mag gar nicht, wie es\n"
	.string "dich anschaut!\p"
	.string "Du solltest etwas liebevoller mit\n"
	.string "ihm umgehen!$"

PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch::
	.string "… äh, ich weiß nicht wie ich\n"
	.string "es sagen soll, aber…\p"
	.string "Gibt es einen Grund, warum dich\n"
	.string "dein Pokémon so abgrundtief hasst?$"

PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy::
	.string "Das liebliche, zuckersüße\n"
	.string "Piepi.$"

