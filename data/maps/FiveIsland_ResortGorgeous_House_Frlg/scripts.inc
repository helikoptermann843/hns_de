.equ SHOWN_REQUESTED_MON, FLAG_TEMP_2

FiveIsland_ResortGorgeous_House_Frlg_MapScripts::
	.byte 0

FiveIsland_ResortGorgeous_House_EventScript_Selphy::
	lock
	faceplayer
	goto_if_set SHOWN_REQUESTED_MON, FiveIsland_ResortGorgeous_House_EventScript_JustFulfilledRequest
	goto_if_eq VAR_RESORT_GORGEOUS_REQUESTED_MON, 0xFFFF, FiveIsland_ResortGorgeous_House_EventScript_RequestTookTooLong
	goto_if_ne VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE, FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon
	msgbox FiveIsland_ResortGorgeous_House_Text_PleaseHearMyWish
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
	end

FiveIsland_ResortGorgeous_House_EventScript_RequestMon::
	special SampleResortGorgeousMonAndReward
	msgbox FiveIsland_ResortGorgeous_House_Text_WishToSeeMonPlease
	release
	end

FiveIsland_ResortGorgeous_House_EventScript_RequestTookTooLong::
	msgbox FiveIsland_ResortGorgeous_House_Text_OhImTiredOfWaiting
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
	end

FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon::
	copyvar VAR_0x8004, VAR_RESORT_GORGEOUS_REQUESTED_MON
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
	end

FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon::
	special SampleResortGorgeousMonAndReward
	msgbox FiveIsland_ResortGorgeous_House_Text_MonYouCaughtForMeThankYou
	addobject LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerEnter
	waitmovement 0
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerYesMyLady
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyGiveTokenOfAppreciation
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerIShallDoAsYouBid
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerNorth
	call_if_eq VAR_FACING, DIR_SOUTH, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerSouth
	call_if_eq VAR_FACING, DIR_EAST, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerEast
	call_if_eq VAR_FACING, DIR_WEST, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerWest
	copyobjectxytoperm LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerPleaseAcceptThisAsHerThanks
	giveitem VAR_RESORT_GORGEOUS_REWARD
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_ResortGorgeous_House_EventScript_NoRoomForReward
	setflag SHOWN_REQUESTED_MON
	setvar VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
	release
	end

FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerNorth::
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerNorth
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerSouth::
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerSouth
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerEast::
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerEast
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerWest::
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerWest
	waitmovement 0
	return

FiveIsland_ResortGorgeous_House_EventScript_NoRoomForReward::
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerBagAppearsToBeFull
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox FiveIsland_ResortGorgeous_House_Text_OhHowDisappointing
	setflag SHOWN_REQUESTED_MON
	setvar VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
	release
	end

FiveIsland_ResortGorgeous_House_EventScript_JustFulfilledRequest::
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyWishYouBestOfLuck
	release
	end

FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerNorth::
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_right
	step_end

FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerSouth::
	walk_left
	walk_left
	walk_in_place_faster_down
	step_end

FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerEast::
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

@ Very odd. If the player is talking to Selphy facing West, then the player has clipped through the table
@ In this case rather than approach the player the Butler walks up, which clips the Butler into a wall
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerWest::
	walk_up
	step_end

FiveIsland_ResortGorgeous_House_Movement_ButlerEnter::
	walk_in_place_down
	step_end

@ Addressed as "Sebastian" but speaks only as "Butler"
FiveIsland_ResortGorgeous_House_EventScript_Butler::
	msgbox FiveIsland_ResortGorgeous_House_Text_LadySelphySmileHasBrillianceOfSun, MSGBOX_NPC
	end

FiveIsland_ResortGorgeous_House_Text_PleaseHearMyWish::
	.string "Kea: Oh?\n"
	.string "Kenne ich dich von irgendwo?\p"
	.string "Aber das macht nichts!\p"
	.string "Ich langweile mich so.\n"
	.string "Hör bitte meinen Wunsch!$"

FiveIsland_ResortGorgeous_House_Text_WishToSeeMonPlease::
	.string "Ich möchte ein Pokémon sehen.\n"
	.string "Ein bezauberndes {STR_VAR_1}!\p"
	.string "Ich möchte es sofort und hier.\n"
	.string "Bitte, erfülle mir diesen Traum!$"

FiveIsland_ResortGorgeous_House_Text_OhImTiredOfWaiting::
	.string "Kea:Oh, ich bin dessen so müde!\n"
	.string "Ich bin müde, auf dich zu warten!\p"
	.string "Ich verzeihe dir dieses Mal,\n"
	.string "aber bitte enttäusche mich\l"
	.string "beim nächsten Mal nicht mehr!$"

FiveIsland_ResortGorgeous_House_Text_MonYouCaughtForMeThankYou::
	.string "Kea: Oh, hallo!\p"
	.string "Oh, wie grandios! Das muss das\n"
	.string "{STR_VAR_1} sein, das du für mich\l"
	.string "gefangen hast.\l"
	.string "Kicher…\l"
	.string "Es sieht dir ähnlich.\p"
	.string "Vielen Dank, das ist lieb von dir!\p"
	.string "…………\n"
	.string "……\l"
	.string "Ist irgendetwas?\l"
	.string "Du darfst gehen!\p"
	.string "…………\n"
	.string "……\l"
	.string "Oh, ich verstehe!\p"
	.string "Sebastian!\n"
	.string "Du wirst hier dringend gebraucht!$"

FiveIsland_ResortGorgeous_House_Text_ButlerYesMyLady::
	.string "Butler: Sie haben gerufen?$"

FiveIsland_ResortGorgeous_House_Text_SelphyGiveTokenOfAppreciation::
	.string "Kea: Besorgen sie dieser\n"
	.string "Person ein Zeichen meiner\l"
	.string "Wertschätzung!$"

FiveIsland_ResortGorgeous_House_Text_ButlerIShallDoAsYouBid::
	.string "Butler: Wie Sie wünschen!$"

FiveIsland_ResortGorgeous_House_Text_ButlerPleaseAcceptThisAsHerThanks::
	.string "Butler: Vielen Dank, dass sie\n"
	.string "Lady Kea zufrieden stellten!\p"
	.string "Nehmen sie das als kleines\n"
	.string "Dankeschön…$"

FiveIsland_ResortGorgeous_House_Text_ButlerBagAppearsToBeFull::
	.string "Butler: Es scheint, ihr Beutel\n"
	.string "ist bedauerlicherweise voll!$"

FiveIsland_ResortGorgeous_House_Text_OhHowDisappointing::
	.string "Oh…\n"
	.string "Wie schade!$"

FiveIsland_ResortGorgeous_House_Text_SelphyWishYouBestOfLuck::
	.string "Kea: Viel Glück!$"

FiveIsland_ResortGorgeous_House_Text_LadySelphySmileHasBrillianceOfSun::
	.string "Butler: Das Lächeln von Lady\n"
	.string "Kea ist so strahlend wie\l"
	.string "die Sonne.\l"
	.string "Bitte, ich flehe sie an, stimmen\l"
	.string "sie Lady Kea glücklich!$"

