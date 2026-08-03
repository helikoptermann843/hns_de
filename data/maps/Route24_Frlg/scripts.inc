Route24_Frlg_MapScripts::
	.byte 0

Route24_EventScript_Rocket::
	lock
	faceplayer
	goto_if_eq VAR_MAP_SCENE_ROUTE24, 1, Route24_EventScript_RocketPostBattle
	msgbox Route24_Text_JustEarnedFabulousPrize
	checkitemspace ITEM_NUGGET
	goto_if_eq VAR_RESULT, FALSE, Route24_EventScript_NoRoomForNugget
	call Route24_EventScript_BattleRocket
	release
	end

Route24_EventScript_NoRoomForNugget::
	msgbox Route24_Text_YouDontHaveAnyRoom
	release
	end

Route24_EventScript_RocketPostBattle::
	msgbox Route24_Text_YoudBecomeTopRocketLeader
	release
	end

Route24_EventScript_RocketTriggerLeft::
	lockall
	setvar VAR_TEMP_1, 0
	goto Route24_EventScript_RocketTrigger
	end

Route24_EventScript_RocketTriggerRight::
	lockall
	setvar VAR_TEMP_1, 1
	goto Route24_EventScript_RocketTrigger
	end

Route24_EventScript_RocketTrigger::
	textcolor NPC_TEXT_COLOR_MALE
	call_if_eq VAR_TEMP_1, 0, Route24_EventScript_RocketApproachPlayer
	call_if_eq VAR_TEMP_1, 1, Route24_EventScript_RocketMotionToPlayer
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox Route24_Text_JustEarnedFabulousPrize
	checkitemspace ITEM_NUGGET
	goto_if_eq VAR_RESULT, FALSE, Route24_EventScript_NoRoomForNuggetTrigger
	call Route24_EventScript_BattleRocket
	releaseall
	end

Route24_EventScript_BattleRocket::
	giveitem_msg Route24_Text_ReceivedNuggetFromMysteryTrainer, ITEM_NUGGET
	message Route24_Text_JoinTeamRocket
	waitmessage
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
	waitbuttonpress
	setvar VAR_LAST_TALKED, LOCALID_ROUTE24_ROCKET
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_6, Route24_Text_RocketDefeat
	msgbox Route24_Text_YoudBecomeTopRocketLeader
	setvar VAR_MAP_SCENE_ROUTE24, 1
	return

Route24_EventScript_RocketApproachPlayer::
	applymovement LOCALID_ROUTE24_ROCKET, Route24_Movement_RocketApproachPlayer
	waitmovement 0
	return

Route24_EventScript_RocketMotionToPlayer::
	applymovement LOCALID_ROUTE24_ROCKET, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

Route24_EventScript_NoRoomForNuggetTrigger::
	msgbox Route24_Text_YouDontHaveAnyRoom
	closemessage
	applymovement LOCALID_PLAYER, Route24_Movement_WalkDown
	waitmovement 0
	call_if_eq VAR_TEMP_1, 0, Route24_EventScript_RocketWalkBackToPos
	release
	end

Route24_EventScript_RocketWalkBackToPos::
	applymovement LOCALID_ROUTE24_ROCKET, Route24_Movement_RocketWalkBackToPos
	waitmovement 0
	return

Route24_Movement_RocketApproachPlayer::
	walk_left
	step_end

Route24_Movement_RocketWalkBackToPos::
	walk_right
	walk_in_place_faster_left
	step_end

Route24_Movement_WalkDown::
	walk_down
	step_end

Route24_Text_JustEarnedFabulousPrize::
	.string "Herzlichen Glückwunsch!\n"
	.string "Du hast alle fünf Trainer besiegt!\p"
	.string "Du hast einen großartigen Preis\n"
	.string "gewonnen!$"

Route24_Text_ReceivedNuggetFromMysteryTrainer::
	.string "{PLAYER} erhält\n"
	.string "ein Nugget!$"

Route24_Text_YouDontHaveAnyRoom::
	.string "Du hast keinen Platz für weitere\n"
	.string "Items!$"

Route24_Text_JoinTeamRocket::
	.string "Möchtest du auch Mitglied des Team\n"
	.string "Rocket werden?\p"
	.string "Unsere Gruppierung benutzt Pokémon\n"
	.string "für teuflische Zwecke!\p"
	.string "Möchtest du beitreten?\p"
	.string "Wirklich nicht?\p"
	.string "Komm schon, werde Mitglied!\p"
	.string "Ich empfehle dir, ein Mitglied zu\n"
	.string "werden!\p"
	.string "Ich glaube, ich sollte ein wenig\n"
	.string "Überzeugungsarbeit leisten!\p"
	.string "Dieses Angebot kannst du nicht\n"
	.string "ablehnen!$"

Route24_Text_RocketDefeat::
	.string "Arrgh!\n"
	.string "You are good!$"

Route24_Text_YoudBecomeTopRocketLeader::
	.string "Bei deinem Können wärst du im\n"
	.string "Team Rocket leicht die rechte Hand\l"
	.string "vom Boss!\p"
	.string "Denke darüber nach! Lass dir\n"
	.string "diese Chance nicht entgehen!$"

Route24_Text_ShaneIntro::
	.string "Ich habe deine Vorstellung aus dem\n"
	.string "Gras heraus beobachtet!$"

Route24_Text_ShaneDefeat::
	.string "Ich habe wohl doch nichts gesehen!$"

Route24_Text_ShanePostBattle::
	.string "Ich habe mich versteckt, weil mir\n"
	.string "die Leute auf der Brücke Angst\l"
	.string "gemacht haben!$"

Route24_Text_EthanIntro::
	.string "Ich bin Nr. 5!\n"
	.string "Dich mache ich platt!$"

Route24_Text_EthanDefeat::
	.string "Das war zu viel des Guten!$"

Route24_Text_EthanPostBattle::
	.string "Ich habe alles gegeben, ich schäme\n"
	.string "mich nicht!$"

Route24_Text_ReliIntro::
	.string "Ich bin Nr. 4!\n"
	.string "Wirst du müde?$"

Route24_Text_ReliDefeat::
	.string "Ich habe auch verloren!$"

Route24_Text_ReliPostBattle::
	.string "Ich habe alles gegeben, ich schäme\n"
	.string "mich nicht!$"

Route24_Text_TimmyIntro::
	.string "Hier kommt Nr. 3!\n"
	.string "Ich mache dir das Leben schwer!$"

Route24_Text_TimmyDefeat::
	.string "Ah!\n"
	.string "Eiskalt erwischt!$"

Route24_Text_TimmyPostBattle::
	.string "Ich habe alles gegeben, ich schäme\n"
	.string "mich nicht!$"

Route24_Text_AliIntro::
	.string "Ich bin Nr. 2!\n"
	.string "Nun wird es ernst!$"

Route24_Text_AliDefeat::
	.string "Wie konnte ich verlieren?$"

Route24_Text_AliPostBattle::
	.string "Ich habe alles gegeben, ich schäme\n"
	.string "mich nicht!$"

Route24_Text_CaleIntro::
	.string "Das hier ist die Nugget-brücke!\n"
	.string "Wenn du uns fünf Trainer besiegst,\l"
	.string "erhältst du einen wertvollen Preis!\p"
	.string "Willst du dein Glück versuchen?$"

Route24_Text_CaleDefeat::
	.string "Wow!\n"
	.string "Du bist gut!$"

Route24_Text_CalePostBattle::
	.string "Ich habe alles gegeben, ich schäme\n"
	.string "mich nicht!$"
