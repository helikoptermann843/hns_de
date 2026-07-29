SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_PokemonTrainerFanClub_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonTrainerFanClub_OnTransition
	.byte 0

SaffronCity_PokemonTrainerFanClub_OnFrame::
	map_script_2 VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1, SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans
	.2byte 0

SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans::
	lockall
	textcolor NPC_TEXT_COLOR_FEMALE
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_Delay48
	waitmovement 0
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HuhYou
	closemessage
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourePlayerWereYourFansNow
	setvar VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2
	releaseall
	end

SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer::
	delay_16
	delay_8
	walk_down
	delay_16
	walk_down
	delay_8
	walk_left
	step_end

SaffronCity_PokemonTrainerFanClub_OnTransition::
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1, SaffronCity_PokemonTrainerFanClub_EventScript_SetMemberPosForFirstMeeting
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2, SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions
	end

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions::
	special Script_TryLoseFansFromPlayTime
	setvar VAR_0x8004, FANCLUB_MEMBER1
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable
	setvar VAR_0x8004, FANCLUB_MEMBER2
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
	setvar VAR_0x8004, FANCLUB_MEMBER3
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable
	setvar VAR_0x8004, FANCLUB_MEMBER4
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
	setvar VAR_0x8004, FANCLUB_MEMBER5
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
	setvar VAR_0x8004, FANCLUB_MEMBER6
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
	setvar VAR_0x8004, FANCLUB_MEMBER7
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
	setvar VAR_0x8004, FANCLUB_MEMBER8
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
	end

SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable::
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, 5, 2
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, MOVEMENT_TYPE_FACE_UP
	return

SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable::
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_YOUNGSTER, 7, 4
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_YOUNGSTER, MOVEMENT_TYPE_FACE_LEFT
	return

SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable::
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_GENTLEMAN, 2, 2
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_GENTLEMAN, MOVEMENT_TYPE_FACE_UP
	return

SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable::
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, 3, 4
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, MOVEMENT_TYPE_FACE_RIGHT
	return

SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable::
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_ROCKER, 4, 6
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_ROCKER, MOVEMENT_TYPE_FACE_UP
	return

SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable::
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_WOMAN, 10, 3
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_WOMAN, MOVEMENT_TYPE_FACE_UP
	return

SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable::
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BEAUTY, 7, 5
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BEAUTY, MOVEMENT_TYPE_FACE_LEFT
	return

SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable::
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BLACK_BELT, 9, 6
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BLACK_BELT, MOVEMENT_TYPE_FACE_LEFT
	return

SaffronCity_PokemonTrainerFanClub_EventScript_SetMemberPosForFirstMeeting::
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl::
	lock
	faceplayer
	setvar VAR_0x8004, FANCLUB_MEMBER1
	special Script_BufferFanClubTrainerName
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayerNotChampion
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyNonFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WasYourFanNotAnymore
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan::
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_IllAlwaysBelieveInYou
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyNonFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryonesYourFanButICantBe
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayerNotChampion::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainersCoolWhenBattling
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl::
	lock
	faceplayer
	setvar VAR_0x8004, FANCLUB_MEMBER4
	special Script_BufferFanClubTrainerName
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeSabrina
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan::
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeYouOneDay
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneButMeStoppedBeingYourFan
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingSabrinasFan
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanIBecomeCoolTrainerOneDay
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_Youngster::
	lock
	faceplayer
	setvar VAR_0x8004, FANCLUB_MEMBER2
	special Script_BufferFanClubTrainerName
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayerNotChampion
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyNonFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksMyHero
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan::
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanYouAutographShorts
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CountingOnYou
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyNonFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksFanToBitterEnd
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayerNotChampion::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksLastWordOnCool
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman::
	lock
	faceplayer
	setvar VAR_0x8004, FANCLUB_MEMBER3
	special Script_BufferFanClubTrainerName
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayerNotChampion
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyNonFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HmmAndYouAre
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan::
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HadPleasureOfWatchingYouBattle
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverSeenTrainerOfYourMagnificence
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyNonFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouveStillAWaysToGo
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayerNotChampion::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YoullBeTalkedAboutIfYouKeepWinning
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_Woman::
	lock
	faceplayer
	setvar VAR_0x8004, FANCLUB_MEMBER6
	special Script_BufferFanClubTrainerName
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainerHasBeenOnFire
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan::
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AdoreWayYouBattle
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourNumberOneFan
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneTalksAboutYou
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_Rocker::
	lock
	faceplayer
	setvar VAR_0x8004, FANCLUB_MEMBER5
	special Script_BufferFanClubTrainerName
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyNonFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_LoveWayTrainerTalks
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan::
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TheWayYouBattleIsCool
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImOnlyOneLeftOfYourFans
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyNonFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImLoneTrainerFan
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_Beauty::
	lock
	faceplayer
	setvar VAR_0x8004, FANCLUB_MEMBER7
	special Script_BufferFanClubTrainerName
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyNonFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WhyCantOthersSeeMastersDignity
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan::
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouReallyAreAmazing
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourOnlyFan
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyNonFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BelieveInMasterWithAllMyHeart
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt::
	lock
	faceplayer
	setvar VAR_0x8004, FANCLUB_MEMBER8
	special Script_BufferFanClubTrainerName
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyNonFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_OnlyMasterHasMyRespect
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan::
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourBattleStyleIsEducational
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingYourFan
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyNonFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverBeFanOfAnyoneButMaster
	release
	end

SaffronCity_PokemonTrainerFanClub_Text_HuhYou::
	.string "Häh?\n"
	.string "Du…$"

SaffronCity_PokemonTrainerFanClub_Text_YourePlayerWereYourFansNow::
	.string "Bist du vielleicht…\n"
	.string "… …\p"
	.string "Du bist es!\n"
	.string "Du bist {PLAYER}!\p"
	.string "Wir haben gerade über dich\n"
	.string "gesprochen!\l"
	.string "Wir sprachen davon, dass ein\l"
	.string "unglaublich starker Trainer\l"
	.string "aufgetaucht ist.\l"
	.string "Und dieser Trainer bist du!\l"
	.string "Du bist so cool!\p"
	.string "Also haben wir beschlossen\n"
	.string "einen Fanclub für dich\l"
	.string "zu gründen!\l"
	.string "Wir hoffen alle, dass du weiter\l"
	.string "kämpfst und uns beweist,\l"
	.string "wie cool du bist.\l"
	.string "So gewinnst du noch mehr Fans!$"

SaffronCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou::
	.string "Ich werde dich immer anfeuern!\p"
	.string "Los, {PLAYER}!$"

SaffronCity_PokemonTrainerFanClub_Text_IllAlwaysBelieveInYou::
	.string "Ich glaube immer fest an dich,\n"
	.string "{PLAYER}!\p"
	.string "Bitte zeige den anderen, wie du\n"
	.string "einen Kampf bestreitest.$"

SaffronCity_PokemonTrainerFanClub_Text_WasYourFanNotAnymore::
	.string "Es tut mir Leid!\n"
	.string "Ich war einst dein Fan!\p"
	.string "Aber es scheint, du hast deine\n"
	.string "Motivation verloren.\p"
	.string "In jüngster Zeit war {STR_VAR_1}\n"
	.string "viel cooler.$"

SaffronCity_PokemonTrainerFanClub_Text_EveryonesYourFanButICantBe::
	.string "Oh!\n"
	.string "{PLAYER}!\p"
	.string "Alle waren in letzter Zeit so\n"
	.string "begeistert von dir!\p"
	.string "Ich kann das gut verstehen!\n"
	.string "Ich weiß, dass du stark bist!\p"
	.string "Aber, weißt du was?\p"
	.string "Ich war einst ein Fan von {STR_VAR_1}\n"
	.string "und seitdem kann ich nicht\l"
	.string "aufhören ein Fan zu sein!$"

SaffronCity_PokemonTrainerFanClub_Text_TrainersCoolWhenBattling::
	.string "Ich denke, dass kämpfende\n"
	.string "Trainer cool sind.\p"
	.string "Denkst du genauso?$"

SaffronCity_PokemonTrainerFanClub_Text_CanYouAutographShorts::
	.string "Oh! Es ist {PLAYER}!\n"
	.string "Zu cool!\p"
	.string "Oh!\n"
	.string "Oh, jawohl!\p"
	.string "Gibst du mir ein Autogramm?\n"
	.string "Auf meine Shorts?$"

SaffronCity_PokemonTrainerFanClub_Text_CountingOnYou::
	.string "Wie heiß es auch sein mag…\p"
	.string "Wie kalt es auch sein mag…\p"
	.string "Ich trage immer Shorts!\p"
	.string "Ich verlasse mich darauf, dass\n"
	.string "du weiterhin gewinnst.\p"
	.string "Ich glaube an dich, wie an meine\n"
	.string "Shorts!$"

SaffronCity_PokemonTrainerFanClub_Text_BrocksMyHero::
	.string "Rocko ist mein Held!\n"
	.string "Er ist der Mann unter den Männern!\p"
	.string "Hehe, meine Mutter hat etwas\n"
	.string "für mich gemacht!\p"
	.string "Sie hat mir “Rocko” auf\n"
	.string "meine Shorts gestickt!$"

SaffronCity_PokemonTrainerFanClub_Text_BrocksFanToBitterEnd::
	.string "……\p"
	.string "……\n"
	.string "Ich bin ein Fan von Rocko!\p"
	.string "Auch wenn ich sein einziger\n"
	.string "Fan bin, bleibe ich ihm treu.\l"
	.string "Das schwöre ich bei meinen Shorts.\l"
	.string "Ich werde immer sein Fan bleiben…\l"
	.string "… bis zum bitteren Ende!$"

SaffronCity_PokemonTrainerFanClub_Text_BrocksLastWordOnCool::
	.string "Rocko ist einfach gigacool,\n"
	.string "daran gibt es keinen Zweifel!\p"
	.string "Ich möchte auch gerne so ein\n"
	.string "Kerl sein!$"

SaffronCity_PokemonTrainerFanClub_Text_HadPleasureOfWatchingYouBattle::
	.string "{PLAYER}, ich durfte einem deiner\n"
	.string "Kämpfe beiwohnen.\p"
	.string "Das erinnert mich an meine\n"
	.string "eigene verlorene Jugend.\p"
	.string "Bitte sei weiterhin erfolgreich!\n"
	.string "Ich bin dein Fan!$"

SaffronCity_PokemonTrainerFanClub_Text_NeverSeenTrainerOfYourMagnificence::
	.string "Ich bin weit gereist!\p"
	.string "Nie zuvor habe ich einen Trainer\n"
	.string "wie dich gesehen!\p"
	.string "Glaube an deine Fähigkeiten\n"
	.string "und kämpfe weiter!\p"
	.string "Versprich mir das, mein junges\n"
	.string "Idol!$"

SaffronCity_PokemonTrainerFanClub_Text_HmmAndYouAre::
	.string "Hm…\n"
	.string "Und du bist?\p"
	.string "Wolltest du unserem Fanclub\n"
	.string "beitreten?$"

SaffronCity_PokemonTrainerFanClub_Text_YouveStillAWaysToGo::
	.string "Ah, du bist also {PLAYER}, von dem\n"
	.string "alle reden!\p"
	.string "Du siehst tatsächlich wie ein\n"
	.string "Gewinner aus!\p"
	.string "Aber damit ich dich als eine\n"
	.string "Kapazität für Pokémon ansehe,…\p"
	.string "……\p"
	.string "musst du noch einiges erreichen!$"

SaffronCity_PokemonTrainerFanClub_Text_YoullBeTalkedAboutIfYouKeepWinning::
	.string "Wir alle hier sind Fans von \n"
	.string "Pokémon Trainern!\p"
	.string "Wie sie im Kampf auftreten…\n"
	.string "Sie sind der Inbegriff von\l"
	.string "Coolness!\l"
	.string "Wenn du weiterhin gewinnst, kann\l"
	.string "es sein, dass wir hier über dich\l"
	.string "sprechen!$"

SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeYouOneDay::
	.string "Es ist {PLAYER}!\n"
	.string "Es ist {PLAYER}!\p"
	.string "Ich möchte eines Tages wie\n"
	.string "{PLAYER} sein!$"

SaffronCity_PokemonTrainerFanClub_Text_EveryoneButMeStoppedBeingYourFan::
	.string "Keiner ist mehr ein Fan von\n"
	.string "{PLAYER}…\p"
	.string "Das heißt aber auch, dass ich\n"
	.string "{PLAYER} für mich alleine habe!\p"
	.string "Yo! Los!\n"
	.string "Mein Ein und Alles, {PLAYER}!$"

SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeSabrina::
	.string "Weißt du was?\n"
	.string "Ich will wie Sabrina sein!\p"
	.string "Ich möchte auch ein Psychomädchen\n"
	.string "wie sie sein!$"

SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingSabrinasFan::
	.string "Auch wenn ich der letzte Fan wäre,\n"
	.string "ich würde immer zu Sabrina stehen!\p"
	.string "Ich träume davon wie Sabrina\n"
	.string "zu sein, süß und cool!\p"
	.string "Ich möchte auch ein Psychomädchen\n"
	.string "wie sie sein!$"

SaffronCity_PokemonTrainerFanClub_Text_CanIBecomeCoolTrainerOneDay::
	.string "Ich frage mich, ob ich eines\n"
	.string "Tages auch ein cooler Trainer\l"
	.string "sein werde?$"

SaffronCity_PokemonTrainerFanClub_Text_TheWayYouBattleIsCool::
	.string "Oh Mann!\n"
	.string "Cool! Einfach cool!\p"
	.string "… häh?\n"
	.string "Nein, nicht du!\p"
	.string "Nur dein Kampfstil! Der ist cool!$"

SaffronCity_PokemonTrainerFanClub_Text_ImOnlyOneLeftOfYourFans::
	.string "Yo, {PLAYER}!\p"
	.string "Es scheint, dass ich der letzte\n"
	.string "verbleibende Fan von dir bin!\p"
	.string "Aber ich liebe es, der Einzige zu\n"
	.string "sein…\l"
	.string "Das ist nicht so anstrengend!\p"
	.string "Mach weiter so!$"

SaffronCity_PokemonTrainerFanClub_Text_LoveWayTrainerTalks::
	.string "{STR_VAR_1} ist so cool!\n"
	.string "Ich mag die Sprechweise!\p"
	.string "Ich würde es sehr schätzen, diese\n"
	.string "Person einmal zu treffen.$"

SaffronCity_PokemonTrainerFanClub_Text_ImLoneTrainerFan::
	.string "Häh, kannst du das glauben?\n"
	.string "Alle sind deine Fans!\p"
	.string "Also bin ich nach allem der einzige\n"
	.string "Fan von {STR_VAR_1}?\p"
	.string "He, der Einzige zu sein ist, genau\n"
	.string "nach meinem Geschmack!$"

SaffronCity_PokemonTrainerFanClub_Text_AdoreWayYouBattle::
	.string "Oh, Wahnsinn!\n"
	.string "Du bist es wirklich, {PLAYER}!\p"
	.string "Ich muss dir sagen, dass ich\n"
	.string "deinen Kampfstil sehr bewundere.\p"
	.string "Ich hoffe, du machst so weiter!\n"
	.string "Dein treuester Fan steht vor dir!$"

SaffronCity_PokemonTrainerFanClub_Text_ImYourNumberOneFan::
	.string "Oh, Wahnsinn!\n"
	.string "Wenn das nicht {PLAYER} ist!\p"
	.string "Es ist so traurig… ich musste\n"
	.string "feststellen, dass ich dein bester\l"
	.string "und einziger Fan bin!\l"
	.string "Nun, was soll ich tun?\l"
	.string "Lass mich dich wenigstens anfeuern!\p"
	.string "Los {PLAYER}!$"

SaffronCity_PokemonTrainerFanClub_Text_TrainerHasBeenOnFire::
	.string "In letzter Zeit hatte {STR_VAR_1}\n"
	.string "einen Lauf!\l"
	.string "Sein Kampfstil… entspricht\l"
	.string "genau meiner Vorstellung!$"

SaffronCity_PokemonTrainerFanClub_Text_EveryoneTalksAboutYou::
	.string "Oh, hallo!\n"
	.string "Wenn das nicht {PLAYER} ist!\p"
	.string "Seit kurzem sprechen alle über\n"
	.string "dich!\l"
	.string "Ich fühle mich allein, da ich\l"
	.string "{STR_VAR_1}\l"
	.string "bevorzuge!$"

SaffronCity_PokemonTrainerFanClub_Text_YouReallyAreAmazing::
	.string "Wunderbar!\n"
	.string "{PLAYER}, du bist wirklich toll!\p"
	.string "Anstatt nur zuzusehen, sollte ich\n"
	.string "besser auch ein Trainer werden!$"

SaffronCity_PokemonTrainerFanClub_Text_ImYourOnlyFan::
	.string "Ich bin dein einziger Fan…\n"
	.string "Seufz… diese Einsamkeit…\p"
	.string "Kannst du dich nicht ein wenig mehr\n"
	.string "anstrengen, damit die anderen dich\l"
	.string "wahrnehmen?$"

SaffronCity_PokemonTrainerFanClub_Text_WhyCantOthersSeeMastersDignity::
	.string "Mentor {STR_VAR_1} ist so\n"
	.string "würdevoll…\l"
	.string "Er ist genau mein Typ!\l"
	.string "Warum erkennen die anderen nicht\l"
	.string "die Würde, die er personifiziert?$"

SaffronCity_PokemonTrainerFanClub_Text_BelieveInMasterWithAllMyHeart::
	.string "Ich glaube aus tiefstem Herzen\n"
	.string "an meinen Mentor {STR_VAR_1}!\p"
	.string "Auch wenn ich der Einzige bin,\n"
	.string "der an ihn glaubt!\p"
	.string "Ich fühle mich nie alleine!\p"
	.string "Nicht, wenn ich an meinen\n"
	.string "Mentor {STR_VAR_1} denke!$"

SaffronCity_PokemonTrainerFanClub_Text_YourBattleStyleIsEducational::
	.string "Yippie!\p"
	.string "Dein Kampfstil ist belehrend!\p"
	.string "Ich hoffe, deine Siegesserie\n"
	.string "hält an!$"

SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingYourFan::
	.string "Anstatt anderen beim Kämpfen\n"
	.string "zuzusehen, solltest du selbst\l"
	.string "kämpfen!\l"
	.string "… der Dojo Meister hat\l"
	.string "mich so zugerichtet…\p"
	.string "Aber das hält mich nicht ab,\n"
	.string "dein Fan zu sein!\p"
	.string "Ich muss dein Fan sein!$"

SaffronCity_PokemonTrainerFanClub_Text_OnlyMasterHasMyRespect::
	.string "Yippie! Es gibt nur einen Trainer,\n"
	.string "den ich respektiere!\p"
	.string "Das ist kein Geringerer als mein\n"
	.string "Meister im Kampf-Dojo.\p"
	.string "Du solltest wie ich auch ein Fan\n"
	.string "von meinem Meister werden!$"

SaffronCity_PokemonTrainerFanClub_Text_NeverBeFanOfAnyoneButMaster::
	.string "Yippie! Ich respektiere meinen\n"
	.string "Meister im Kampf-Dojo.\p"
	.string "Ich werde immer nur meinem\n"
	.string "Meister folgen!\p"
	.string "Ich schleiche mich sogar aus dem\n"
	.string "Dojo, um allen zu sagen, wie\l"
	.string "großartig er ist.\p"
	.string "Yippie!$"

