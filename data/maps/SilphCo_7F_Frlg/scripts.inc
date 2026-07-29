SilphCo_7F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_7F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_7F_OnTransition
	.byte 0

SilphCo_7F_OnLoad::
	call_if_unset FLAG_SILPH_7F_DOOR_1, EventScript_Close7FDoor1
	call_if_unset FLAG_SILPH_7F_DOOR_2, EventScript_Close7FDoor2
	call_if_unset FLAG_SILPH_7F_DOOR_3, EventScript_Close7FDoor3
	end

SilphCo_7F_OnTransition::
	call_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_7F_EventScript_SetObjRocketsGone
	end

SilphCo_7F_EventScript_SetObjRocketsGone::
	setobjectmovementtype LOCALID_SILPH_CO_7F_WORKER_M2, MOVEMENT_TYPE_FACE_UP
	return

SilphCo_7F_EventScript_RivalTriggerTop::
	lockall
	setvar VAR_TEMP_1, 0
	goto SilphCo_7F_EventScript_RivalScene
	end

SilphCo_7F_EventScript_RivalTriggerBottom::
	lockall
	setvar VAR_TEMP_1, 1
	goto SilphCo_7F_EventScript_RivalScene
	end

SilphCo_7F_EventScript_RivalScene::
	textcolor NPC_TEXT_COLOR_MALE
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
	applymovement LOCALID_SILPH_CO_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_SILPH_CO_RIVAL, Common_Movement_Delay48
	waitmovement 0
	msgbox SilphCo_7F_Text_RivalWhatKeptYou
	call_if_eq VAR_TEMP_1, 0, SilphCo_7F_EventScript_RivalApproachTop
	call_if_eq VAR_TEMP_1, 1, SilphCo_7F_EventScript_RivalApproachBottom
	msgbox SilphCo_7F_Text_RivalIntro
	setvar VAR_LAST_TALKED, LOCALID_SILPH_CO_RIVAL
	call_if_eq VAR_STARTER_MON, 2, SilphCo_7F_EventScript_RivalSquirtle
	call_if_eq VAR_STARTER_MON, 1, SilphCo_7F_EventScript_RivalBulbasaur
	call_if_eq VAR_STARTER_MON, 0, SilphCo_7F_EventScript_RivalCharmander
	msgbox SilphCo_7F_Text_RivalPostBattle
	closemessage
	playbgm MUS_RG_RIVAL_EXIT, 0
	call_if_eq VAR_TEMP_1, 0, SilphCo_7F_EventScript_RivalExitTop
	call_if_eq VAR_TEMP_1, 1, SilphCo_7F_EventScript_RivalExitBottom
	playse SE_WARP_IN
	fadedefaultbgm
	removeobject LOCALID_SILPH_CO_RIVAL
	waitse
	setvar VAR_MAP_SCENE_SILPH_CO_7F, 1
	releaseall
	end

SilphCo_7F_EventScript_RivalApproachTop::
	closemessage
	applymovement LOCALID_SILPH_CO_RIVAL, SilphCo_7F_Movement_RivalApproachTop
	waitmovement 0
	return

SilphCo_7F_EventScript_RivalApproachBottom::
	return

SilphCo_7F_EventScript_RivalSquirtle::
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_SQUIRTLE, SilphCo_7F_Text_RivalDefeat
	return

SilphCo_7F_EventScript_RivalBulbasaur::
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_BULBASAUR, SilphCo_7F_Text_RivalDefeat
	return

SilphCo_7F_EventScript_RivalCharmander::
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_CHARMANDER, SilphCo_7F_Text_RivalDefeat
	return

SilphCo_7F_EventScript_RivalExitTop::
	applymovement LOCALID_SILPH_CO_RIVAL, SilphCo_7F_Movement_RivalExitTop
	waitmovement 0
	return

SilphCo_7F_EventScript_RivalExitBottom::
	applymovement LOCALID_SILPH_CO_RIVAL, SilphCo_7F_Movement_RivalExitBottom
	waitmovement 0
	return

SilphCo_7F_Movement_RivalApproachTop::
	walk_up
	step_end

SilphCo_7F_Movement_RivalExitTop::
	walk_right
	walk_right
	walk_right
	walk_up
	delay_16
	step_end

SilphCo_7F_Movement_RivalExitBottom::
	walk_left
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	delay_16
	step_end

SilphCo_7F_EventScript_LaprasGuy::
	lock
	faceplayer
	goto_if_set FLAG_GOT_LAPRAS_FROM_SILPH, SilphCo_7F_EventScript_AlreadyGotLapras
	msgbox SilphCo_7F_Text_HaveMonForSavingUs
	setvar VAR_TEMP_1, SPECIES_LAPRAS
	givemon SPECIES_LAPRAS, 25
	goto_if_eq VAR_RESULT, 0, SilphCo_7F_EventScript_ReceiveLaprasParty
	goto_if_eq VAR_RESULT, 1, SilphCo_7F_EventScript_ReceiveLaprasPC
	goto_if_eq VAR_RESULT, 2, Common_EventScript_NoMoreRoomForPokemon
	release
	end

SilphCo_7F_EventScript_ReceiveLaprasParty::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_LEVEL_UP
	message SilphCo_7F_Text_ObtainedLaprasFromEmployee
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_LAPRAS
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SilphCo_7F_EventScript_EndReceiveLapras
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto SilphCo_7F_EventScript_EndReceiveLapras
	end

SilphCo_7F_EventScript_ReceiveLaprasPC::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_LEVEL_UP
	message SilphCo_7F_Text_ObtainedLaprasFromEmployee
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_LAPRAS
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SilphCo_7F_EventScript_LaprasTransferredToPC
	call Common_EventScript_NameReceivedBoxMon
	goto SilphCo_7F_EventScript_LaprasTransferredToPC
	end

SilphCo_7F_EventScript_LaprasTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto SilphCo_7F_EventScript_EndReceiveLapras
	end

SilphCo_7F_EventScript_EndReceiveLapras::
	textcolor NPC_TEXT_COLOR_MALE
	msgbox SilphCo_7F_Text_ExplainLapras
	setflag FLAG_GOT_LAPRAS_FROM_SILPH
	release
	end

SilphCo_7F_EventScript_AlreadyGotLapras::
	msgbox SilphCo_7F_Text_RocketBossWentToBoardroom
	release
	end

SilphCo_7F_EventScript_WorkerM1::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_7F_EventScript_WorkerM1RocketsGone
	msgbox SilphCo_7F_Text_RocketsAfterMasterBall
	release
	end

SilphCo_7F_EventScript_WorkerM1RocketsGone::
	msgbox SilphCo_7F_Text_CanceledMasterBallProject
	release
	end

SilphCo_7F_EventScript_WorkerM2::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_7F_EventScript_WorkerM2RocketsGone
	msgbox SilphCo_7F_Text_BadIfTeamRocketTookOver
	release
	end

SilphCo_7F_EventScript_WorkerM2RocketsGone::
	msgbox SilphCo_7F_Text_WowYouChasedOffTeamRocket
	release
	end

SilphCo_7F_EventScript_WorkerF::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_7F_EventScript_WorkerFRocketsGone
	msgbox SilphCo_7F_Text_ReallyDangerousHere
	release
	end

SilphCo_7F_EventScript_WorkerFRocketsGone::
	msgbox SilphCo_7F_Text_ThankYouSoMuch
	release
	end

SilphCo_7F_EventScript_FloorSign::
	msgbox SilphCo_7F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_7F_EventScript_Joshua::
	trainerbattle_single TRAINER_SCIENTIST_JOSHUA, SilphCo_7F_Text_JoshuaIntro, SilphCo_7F_Text_JoshuaDefeat
	msgbox SilphCo_7F_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_7F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_33, SilphCo_7F_Text_Grunt1Intro, SilphCo_7F_Text_Grunt1Defeat
	msgbox SilphCo_7F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_7F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_34, SilphCo_7F_Text_Grunt2Intro, SilphCo_7F_Text_Grunt2Defeat
	msgbox SilphCo_7F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_7F_EventScript_Grunt3::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_35, SilphCo_7F_Text_Grunt3Intro, SilphCo_7F_Text_Grunt3Defeat
	msgbox SilphCo_7F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_7F_Text_HaveMonForSavingUs::
	.string "Oh! Du bist kein Rocket! Kommst\n"
	.string "du, um uns zu retten? Klasse!\l"
	.string "Vielen Dank!\p"
	.string "Nimm dieses Pokémon als\n"
	.string "Dankeschön.$"

SilphCo_7F_Text_ObtainedLaprasFromEmployee::
	.string "{PLAYER} obtained a Lapras from\n"
	.string "the Silph employee!$"

SilphCo_7F_Text_ExplainLapras::
	.string "Es heißt Lapras und ist sehr\n"
	.string "intelligent.\p"
	.string "Es hat bisher bei uns im Labor\n"
	.string "gelebt. Aber bei dir ist es besser\l"
	.string "aufgehoben!\p"
	.string "Du wirst Lapras sicher ein guter\n"
	.string "Trainer sein!\p"
	.string "Es ist ein guter Schwimmer und\n"
	.string "kann dich übers Wasser tragen!$"

SilphCo_7F_Text_RocketBossWentToBoardroom::
	.string "Team Rockets Boss ging in den\n"
	.string "Sitzungssaal!\p"
	.string "Ob unser Präsident wohlauf ist?$"

SilphCo_7F_Text_RocketsAfterMasterBall::
	.string "Das Team Rocket ist hinter dem\n"
	.string "Meisterball her, mit dem man\l"
	.string "jedes Pokémon fangen kann!$"

SilphCo_7F_Text_CanceledMasterBallProject::
	.string "Wir haben das Projekt gestoppt.\n"
	.string "Der Meisterball in Team Rockets\l"
	.string "Händen? Niemals!$"

SilphCo_7F_Text_BadIfTeamRocketTookOver::
	.string "Es wäre fatal, wenn das Team\n"
	.string "Rocket die Silph Co. oder unsere\l"
	.string "Pokémon übernehmen würde!$"

SilphCo_7F_Text_WowYouChasedOffTeamRocket::
	.string "Wow!\p"
	.string "Du bist ganz allein mit dem Team\n"
	.string "Rocket fertig geworden?$"

SilphCo_7F_Text_ReallyDangerousHere::
	.string "Hier ist es sehr gefährlich!\n"
	.string "Du wirst mich nicht retten können!$"

SilphCo_7F_Text_ThankYouSoMuch::
	.string "Ich danke vielmals!$"

SilphCo_7F_Text_Grunt3Intro::
	.string "Du bist ganz schön mutig!$"

SilphCo_7F_Text_Grunt3Defeat::
	.string "Licht aus!$"

SilphCo_7F_Text_Grunt3PostBattle::
	.string "Wenn du nur so durch die Gegend\n"
	.string "läufst, findest du den Boss nie!$"

SilphCo_7F_Text_JoshuaIntro::
	.string "Haha!\p"
	.string "Du dachtest wohl, ich arbeite für\n"
	.string "die Silph Co.?$"

SilphCo_7F_Text_JoshuaDefeat::
	.string "Feierabend! Ich geh nach Hause!$"

SilphCo_7F_Text_JoshuaPostBattle::
	.string "Kaum trocken hinter den Ohren, aber\n"
	.string "schon ein begabter Trainer!$"

SilphCo_7F_Text_Grunt1Intro::
	.string "Ich bin einer der vier berüchtigten\n"
	.string "Rocket-brüder!$"

SilphCo_7F_Text_Grunt1Defeat::
	.string "Tut mir Leid, Brüder...$"

SilphCo_7F_Text_Grunt1PostBattle::
	.string "Warte nur, meine Brüder werden\n"
	.string "mich rächen!!!$"

SilphCo_7F_Text_Grunt2Intro::
	.string "Ein Kind im Gebäude?\n"
	.string "Das musst du sein!$"

SilphCo_7F_Text_Grunt2Defeat::
	.string "Na toll!\n"
	.string "Ich hab verloren!$"

SilphCo_7F_Text_Grunt2PostBattle::
	.string "Geh nach Hause, bevor mein Boss\n"
	.string "dich in den Boden stampft!$"

SilphCo_7F_Text_RivalWhatKeptYou::
	.string "{RIVAL}: Was hat dich aufgehalten,\n"
	.string "{PLAYER}?$"

SilphCo_7F_Text_RivalIntro::
	.string "{RIVAL}: Hahaha! Ich wusste, du\n"
	.string "würdest hier vorbeikommen!\p"
	.string "Ich schätze, das Team Rocket hat\n"
	.string "dir ganz schön zugesetzt!\p"
	.string "Ich hab dich in Saffronia City\n"
	.string "gesehen und mich gefragt, ob du\l"
	.string "seitdem besser geworden bist!$"

SilphCo_7F_Text_RivalDefeat::
	.string "Oh, man!\n"
	.string "So, you are ready for Boss\l"
	.string "Rocket!$"

SilphCo_7F_Text_RivalPostBattle::
	.string "Also, {PLAYER}!\n"
	.string "Ich ziehe dann weiter!\p"
	.string "Wenn ich in den Pokédex sehe,\n"
	.string "erkenne ich, wie stark die Pokémon\l"
	.string "sind und wie sie sich entwickeln!\p"
	.string "Ich werde zur Pokémon Liga gehen.\n"
	.string "Dann werde ich die Top Vier\l"
	.string "ausstechen!\p"
	.string "Bald bin ich der mächtigste\n"
	.string "Trainer der Welt!\p"
	.string "Viel Glück, {PLAYER}!\n"
	.string "Und trainiere schön weiter!\l"
	.string "Ciao!$"

SilphCo_7F_Text_FloorSign::
	.string "Silph Co. Büro des Präsidenten\n"
	.string "6 Og$"

