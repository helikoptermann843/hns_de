ViridianCity_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_OnTransition
	.byte 0

ViridianCity_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_CITY
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_SetOldManBlockingRoad
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_SetOldManStandingByRoad
	call_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_SetOldManNormal
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 0, ViridianCity_EventScript_TryUnlockGym
	end

ViridianCity_EventScript_SetOldManNormal::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
	return

ViridianCity_EventScript_SetOldManStandingByRoad::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 8
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_LOOK_AROUND
	return

ViridianCity_EventScript_SetOldManBlockingRoad::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_LYING_DOWN
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 11
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_FACE_DOWN
	return

ViridianCity_EventScript_TryUnlockGym::
	goto_if_unset FLAG_BADGE02_GET, Common_EventScript_NopReturn
	goto_if_unset FLAG_BADGE03_GET, Common_EventScript_NopReturn
	goto_if_unset FLAG_BADGE04_GET, Common_EventScript_NopReturn
	goto_if_unset FLAG_BADGE05_GET, Common_EventScript_NopReturn
	goto_if_unset FLAG_BADGE06_GET, Common_EventScript_NopReturn
	goto_if_unset FLAG_BADGE07_GET, Common_EventScript_NopReturn
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1
	return

ViridianCity_EventScript_GymDoorLocked::
	lockall
	textcolor NPC_TEXT_COLOR_NEUTRAL
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 20
	msgbox ViridianCity_Text_GymDoorsAreLocked
	closemessage
	applymovement LOCALID_PLAYER, ViridianCity_Movement_JumpDownLedge
	waitmovement 0
	releaseall
	end

ViridianCity_Movement_JumpDownLedge::
	jump_2_down
	step_end

ViridianCity_EventScript_CitySign::
	msgbox ViridianCity_Text_CitySign, MSGBOX_SIGN
	end

ViridianCity_EventScript_TrainerTips1::
	msgbox ViridianCity_Text_CatchMonsForEasierBattles, MSGBOX_SIGN
	end

ViridianCity_EventScript_TrainerTips2::
	msgbox ViridianCity_Text_MovesLimitedByPP, MSGBOX_SIGN
	end

ViridianCity_EventScript_GymSign::
	msgbox ViridianCity_Text_GymSign, MSGBOX_SIGN
	end

ViridianCity_EventScript_GymDoor::
	msgbox ViridianCity_Text_GymDoorsAreLocked, MSGBOX_SIGN
	end

ViridianCity_EventScript_Boy::
	msgbox ViridianCity_Text_CanCarryMonsAnywhere, MSGBOX_NPC
	end

@ Other old man, not the tutorial old man
ViridianCity_EventScript_OldMan::
	lock
	faceplayer
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1, ViridianCity_EventScript_OldManGymLeaderReturned
	msgbox ViridianCity_Text_GymClosedWonderWhoLeaderIs
	closemessage
	applymovement LOCALID_VIRIDIAN_OLD_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

ViridianCity_EventScript_OldManGymLeaderReturned::
	msgbox ViridianCity_Text_ViridiansGymLeaderReturned
	release
	end

ViridianCity_EventScript_TutorialOldMan::
	lock
	faceplayer
	goto_if_set FLAG_BADGE01_GET, ViridianCity_EventScript_AskIfTeachyTVHelpful
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_TutorialCompleted
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_TutorialStart
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_TutorialNotReady
	end

ViridianCity_EventScript_AskIfTeachyTVHelpful::
	msgbox ViridianCity_Text_HowsTeachyTVHelping, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_TeachyTVNotHelpful
	msgbox ViridianCity_Text_MyGrandsonOnTheShow
	release
	end

ViridianCity_EventScript_TeachyTVNotHelpful::
	msgbox ViridianCity_Text_TooBusyForTeachyTV
	release
	end

ViridianCity_EventScript_TutorialCompleted::
	msgbox ViridianCity_Text_WeakenMonsFirstToCatch
	release
	end

ViridianCity_EventScript_TutorialStart::
	call ViridianCity_EventScript_DoTutorialBattle
	release
	end

@ Unused
ViridianCity_EventScript_WatchToLearnBasics::
	msgbox ViridianCity_Text_WatchThatToLearnBasics
	release
	end

@ Unused. Starts battle after the post battle text, which is odd.
ViridianCity_EventScript_TutorialUnused::
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
	special StartOldManTutorialBattle
	waitstate
	release
	end

ViridianCity_EventScript_TutorialNotReady::
	msgbox ViridianCity_Text_ThisIsPrivateProperty
	closemessage
	release
	end

ViridianCity_EventScript_Youngster::
	lock
	faceplayer
	msgbox ViridianCity_Text_WantToKnowAboutCaterpillarMons, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, ViridianCity_EventScript_YoungsterExplainCaterpillars
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_YoungsterDeclineExplanation
	end

ViridianCity_EventScript_YoungsterExplainCaterpillars::
	msgbox ViridianCity_Text_ExplainCaterpieWeedle
	release
	end

ViridianCity_EventScript_YoungsterDeclineExplanation::
	msgbox ViridianCity_Text_OhOkayThen
	release
	end

ViridianCity_EventScript_Woman::
	lock
	faceplayer
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_WomanRoadBlocked
	msgbox ViridianCity_Text_GoShoppingInPewterOccasionally
	release
	end

ViridianCity_EventScript_WomanRoadBlocked::
	msgbox ViridianCity_Text_GrandpaHasntHadCoffeeYet
	closemessage
	applymovement LOCALID_VIRIDIAN_WOMAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

ViridianCity_EventScript_DreamEaterTutor::
	goto EventScript_DreamEaterTutor
	end

ViridianCity_EventScript_RoadBlocked::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	msgbox ViridianCity_Text_ThisIsPrivateProperty
	closemessage
	applymovement LOCALID_PLAYER, ViridianCity_Movement_WalkDown
	waitmovement 0
	releaseall
	end

ViridianCity_Movement_WalkDown::
	walk_down
	step_end

ViridianCity_EventScript_TutorialTriggerLeft::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	call ViridianCity_EventScript_DoTutorialBattle
	release
	end

ViridianCity_EventScript_TutorialTriggerRight::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	call ViridianCity_EventScript_DoTutorialBattle
	release
	end

ViridianCity_EventScript_DoTutorialBattle::
	msgbox ViridianCity_Text_ShowYouHowToCatchMons
	closemessage
	special StartOldManTutorialBattle
	waitstate
	lock
	faceplayer
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
	giveitem ITEM_TEACHY_TV
	msgbox ViridianCity_Text_WatchThatToLearnBasics
	return

ViridianCity_Text_CanCarryMonsAnywhere::
	.string "Diese Pokébälle an deinem Gürtel\n"
	.string "zeigen mir, dass du Pokémon\l"
	.string "besitzt!\p"
	.string "Es ist Klasse, dass man jederzeit\n"
	.string "Pokémon tragen und einsetzen kann,\l"
	.string "nicht wahr?$"

ViridianCity_Text_GymClosedWonderWhoLeaderIs::
	.string "Diese Pokémon-Arena ist stets\n"
	.string "geschlossen!\p"
	.string "Ich frage mich, wer hier wohl der\n"
	.string "Arenaleiter sein mag?$"

ViridianCity_Text_ViridiansGymLeaderReturned::
	.string "Der Arenaleiter von Vertania City\n"
	.string "ist zurück!$"

ViridianCity_Text_WantToKnowAboutCaterpillarMons::
	.string "Möchtest du etwas über die zwei\n"
	.string "Raupen-Pokémon erfahren?$"

ViridianCity_Text_OhOkayThen::
	.string "O.K., alles klar!$"

ViridianCity_Text_ExplainCaterpieWeedle::
	.string "Raupy ist nicht giftig, aber\n"
	.string "Hornliu!\p"
	.string "Achte auf seinen Giftstachel!$"

ViridianCity_Text_GrandpaHasntHadCoffeeYet::
	.string "Großvater!\n"
	.string "Sei nicht so gemein!\p"
	.string "Er hatte noch keinen Kaffee!!!$"

ViridianCity_Text_GoShoppingInPewterOccasionally::
	.string "Wenn ich zum Einkaufen nach\n"
	.string "Marmoria City möchte, muss ich\l"
	.string "immer durch den Vertania-Wald\l"
	.string "gehen.$"

ViridianCity_Text_ThisIsPrivateProperty::
	.string "Du kannst hier nicht durch!\p"
	.string "Das ist ein Privatgelände!$"

ViridianCity_Text_ShowYouHowToCatchMons::
	.string "Nun, jetzt hatte ich meinen\n"
	.string "Kaffee und das ist alles, was\l"
	.string "ich brauche, um loszulegen!\l"
	.string "Hmm?\l"
	.string "Was ist das für eine rote Box?\p"
	.string "Ah, du arbeitest an einem\n"
	.string "Pokédex.\p"
	.string "Dann will ich dir einen Ratschlag\n"
	.string "geben.\p"
	.string "Der Pokédex wird mit jedem neu\n"
	.string "gefangenen Pokémon aktualisiert.\p"
	.string "… du weißt nicht, wie man\n"
	.string "Pokémon fängt?\p"
	.string "Ich sollte es dir wohl besser\n"
	.string "zeigen!$"

ViridianCity_Text_ThatWasEducationalTakeThis::
	.string "So! Das war doch perfekter\n"
	.string "Anschauungsunterricht, oder?\p"
	.string "Und hier, nimm dies auch noch!$"

ViridianCity_Text_WatchThatToLearnBasics::
	.string "Falls es etwas gibt, das du nicht\n"
	.string "verstehst, dann schau da rein!\l"
	.string "Dort erfährst du die Grundlagen\l"
	.string "über den Beruf eines Pokémon\l"
	.string "Trainers.$"

ViridianCity_Text_WeakenMonsFirstToCatch::
	.string "Ahh, ich habe endlich meinen\n"
	.string "Kaffee bekommen!\l"
	.string "Aber er war zu stark. Jetzt habe\l"
	.string "ich Kopfschmerzen…\p"
	.string "Vervollständigst du zufällig einen\n"
	.string "Pokédex?\p"
	.string "Konzentriere dich zunächst darauf,\n"
	.string "das Pokémon zu schwächen, ehe\l"
	.string "du es fangen möchtest.$"

ViridianCity_Text_HowsTeachyTVHelping::
	.string "Ahh, ich habe endlich meinen\n"
	.string "Kaffee bekommen!\p"
	.string "Aber er war zu stark. Jetzt habe\n"
	.string "ich Kopfschmerzen…\p"
	.string "Hilft dir mein Lehrkanal?$"

ViridianCity_Text_MyGrandsonOnTheShow::
	.string "Wahaha!\n"
	.string "Mein Enkel ist im Fernsehen!\p"
	.string "Da er den Unterricht leitet,\n"
	.string "musst du lernen.$"

ViridianCity_Text_TooBusyForTeachyTV::
	.string "Hm… du hast keine Zeit, um\n"
	.string "den Lehrkanal anzuschauen…\l"
	.string "Zeit ist Geld und keines davon\l"
	.string "sollte man leichtsinnig\l"
	.string "verschwenden…$"

ViridianCity_Text_CitySign::
	.string "Vertania City\n"
	.string "Das immergrüne Paradies!$"

ViridianCity_Text_CatchMonsForEasierBattles::
	.string "Tipps für Trainer\p"
	.string "Fange Pokémon, um deine Sammlung\n"
	.string "zu erweitern!\p"
	.string "Je mehr du besitzt, desto leichter\n"
	.string "werden die Kämpfe!$"

ViridianCity_Text_MovesLimitedByPP::
	.string "Tipps für Trainer\p"
	.string "Die Attacken der Pokémon werden\n"
	.string "durch ihre Angriffspunkte, AP,\l"
	.string "limitiert.\p"
	.string "Um die AP wieder aufzufüllen, musst\n"
	.string "du die Pokémon in ein Pokémon-\l"
	.string "Center bringen!$"

ViridianCity_Text_GymSign::
	.string "Vertania City Pokémon-Arena$"

ViridianCity_Text_GymDoorsAreLocked::
	.string "Die Türen der Arena sind\n"
	.string "verschlossen...$"

