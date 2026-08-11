SproutTower_3F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SproutTower_3F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

SproutTower_3F_OnTransition:
	callnative SetTimeBasedEncounters
	end


SproutTower_3F_EventScript_SageJin::
	trainerbattle_single TRAINER_JIN_HNS, SproutTower_Text_SageJin_Seen, SproutTower_Text_SageJin_Beaten
	msgbox SproutTower_Text_SageJin_AfterBattle, MSGBOX_AUTOCLOSE
	end


SproutTower_3F_EventScript_SageNeal::
	trainerbattle_single TRAINER_NEAL_HNS, SproutTower_Text_SageNeal_Seen, SproutTower_Text_SageNeal_Beaten
	msgbox SproutTower_Text_SageNeal_AfterBattle, MSGBOX_AUTOCLOSE
	end

SproutTower_3F_EventScript_SageTroy::
	trainerbattle_single TRAINER_TROY_HNS, SproutTower_Text_SageTroy_Seen, SproutTower_Text_SageTroy_Beaten
	msgbox SproutTower_Text_SageTroy_AfterBattle, MSGBOX_AUTOCLOSE
	end

SproutTower_3F_EventScript_Painting::
	lock
	msgbox SproutTower_Text_3F_Painting, MSGBOX_AUTOCLOSE
	release
	end

SproutTower_3F_EventScript_Potion::
	finditem ITEM_POTION
	end

SproutTower_3F_EventScript_EscapeRope::
	finditem ITEM_ESCAPE_ROPE
	end

SproutTower_3F_EventScript_TriggerSceneLeft::
	lock
	playbgm MUS_HG_ENCOUNTER_RIVAL, FALSE
	applymovement LOCALID_SPROUT_TOWER_SILVER, SproutTower_3F_Movement_Silver1
	waitmovement 0
	msgbox SproutTower_Text_ElderLecturesRival, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_SPROUT_TOWER_SILVER, Common_Movement_ExclamationMark	
	delay 55
	waitmovement LOCALID_SPROUT_TOWER_SILVER
	applymovement LOCALID_SPROUT_TOWER_SILVER, SproutTower_3F_Movement_SilverLeft
	waitmovement 0
	msgbox SproutTower_Text_RivalOnlyCaresStrong, MSGBOX_DEFAULT
	delay 30
	msgbox SproutTower_Text_RivalUsedEscapeRope, MSGBOX_DEFAULT
	applymovement LOCALID_SPROUT_TOWER_SILVER SproutTower_3F_Movement_EscapeRope
	waitmovement 0
	closemessage
	fadescreen FADE_TO_BLACK
	playse SE_EXIT
	setflag FLAG_HIDE_SPROUT_TOWER_SILVER
	removeobject LOCALID_SPROUT_TOWER_SILVER
	delay 55
	fadescreen FADE_FROM_BLACK
	special DrawWholeMapView
	fadedefaultbgm
	setvar VAR_SPROUT_TOWER, 1
	release
	end

SproutTower_3F_EventScript_TriggerSceneRight::
	lock
	playbgm MUS_HG_ENCOUNTER_RIVAL, FALSE
	applymovement LOCALID_SPROUT_TOWER_SILVER, SproutTower_3F_Movement_Silver1
	waitmovement 0
	msgbox SproutTower_Text_ElderLecturesRival, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_SPROUT_TOWER_SILVER, Common_Movement_ExclamationMark	
	delay 55
	waitmovement LOCALID_SPROUT_TOWER_SILVER
	applymovement LOCALID_SPROUT_TOWER_SILVER, SproutTower_3F_Movement_SilverRight
	waitmovement 0
	waitmovement 0
	msgbox SproutTower_Text_RivalOnlyCaresStrong, MSGBOX_DEFAULT
	msgbox SproutTower_Text_RivalUsedEscapeRope, MSGBOX_DEFAULT
	applymovement LOCALID_SPROUT_TOWER_SILVER SproutTower_3F_Movement_EscapeRope
	waitmovement 0
	closemessage
	fadescreen FADE_TO_BLACK
	playse SE_EXIT
	setflag FLAG_HIDE_SPROUT_TOWER_SILVER
	removeobject LOCALID_SPROUT_TOWER_SILVER
	delay 55
	fadescreen FADE_FROM_BLACK
	special DrawWholeMapView
	fadedefaultbgm
	setvar VAR_SPROUT_TOWER, 1
	release
	end

SproutTower_3F_EventScript_SageLi::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_FLASH, SproutTower_3F_EventScript_SageLi_Beaten
	msgbox SproutTower_Text_SageLi_Seen, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_LI_HNS, SproutTower_Text_SageLi_Beaten
	msgbox SproutTower_Text_SageLi_TakeFlash, MSGBOX_DEFAULT
	giveitem ITEM_HM_FLASH
	setflag FLAG_RECEIVED_HM_FLASH
	msgbox SproutTower_Text_SageLi_FlashExplain, MSGBOX_DEFAULT
	closemessage
	release
	end

SproutTower_3F_EventScript_SageLi_Beaten::
	msgbox SproutTower_Text_SageLi_AfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

SproutTower_3F_Movement_Silver1:
	walk_fast_up
	walk_fast_up
	step_end

SproutTower_3F_Movement_SilverLeft:
	face_down
	delay_16
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

SproutTower_3F_Movement_SilverRight:
	face_down
	delay_16
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

SproutTower_3F_Movement_EscapeRope:
	face_right
	face_up
	face_left
	face_down
	face_right
	face_up
	face_left
	face_down
	face_right
	face_up
	face_left
	face_down
	step_end

SproutTower_Text_ElderLecturesRival:
	.string "Weiser: Du bist wirklich\n"
	.string "ein begabter Trainer.\p"
	.string "Wie abgemacht, bekommst du die VM.\p"
	.string "Eines gebe ich dir noch mit:\p"
	.string "Behandle deine Pokémon besser.\p"
	.string "Dein Kampfstil ist zu aggressiv.\p"
	.string "Pokémon sind keine Kampfspielzeuge…$"

SproutTower_Text_RivalOnlyCaresStrong:
	.string "… …Hmpf!\p"
	.string "Er behauptet, ein Weiser zu sein.\p"
	.string "Aber er ist schwach.\p"
	.string "Das muss noch geklärt werden.\p"
	.string "Ich würde nie gegen\n"
	.string "so einen Narren verlieren,\l"
	.string "der mir rät, meine Pokémon\l"
	.string "gut zu behandeln.\p"
	.string "Für mich zählen nur starke Pokémon.\p"
	.string "Schwache Pokémon interessieren mich\n"
	.string "überhaupt gar nicht.$"

SproutTower_Text_RivalUsedEscapeRope:
	.string "{RIVAL} verwendet\n"
	.string "Fluchtseil!$"

SproutTower_Text_SageLi_Seen:
	.string "Sehr gut. Du hast dich\n"
	.string "wacker geschlagen!\p"
	.string "Hier im Knofensa-Turm erarbeiten sich\n"
	.string "Pokémon und Menschen eine strahlende\l"
	.string "gemeinsame Zukunft oder suchen im\l"
	.string "Training Bestätigung.\p"
	.string "Ich werde deine letzte Prüfung sein.\p"
	.string "Erlaube mir, die Freundschaft zwischen\n"
	.string "dir und deinem Team zu erproben!$"

SproutTower_Text_SageLi_Beaten:
	.string "Ah, sehr gut!$"

SproutTower_Text_SageLi_TakeFlash:
	.string "Ich bin sicher,\n"
	.string "du und dein Pokémon-Team werdet\l"
	.string "das hier wohl zu nutzen wissen.\p"
	.string "Nimm die TM Blitz.\n"
	.string "Sie gehört dir.$"

SproutTower_Text_SageLi_FlashExplain:
	.string "Blitz erhellt selbst die\n"
	.string "dunkelsten Orte.\p"
	.string "Um es außerhalb des Kampfes\n"
	.string "zu nutzen, brauchst du den\l"
	.string "Orden aus der Viola City Arena.$"

SproutTower_Text_SageLi_AfterBattle:
	.string "Möge deine Reise einmal\n"
	.string "Früchte tragen!$"

SproutTower_Text_SageJin_Seen:
	.string "Ich wandele auf dem Weg des Pokémon-\n"
	.string "Trainers, um Erleuchtung zu finden!$"

SproutTower_Text_SageJin_Beaten:
	.string "Mein Training ist unvollständig…$"

SproutTower_Text_SageJin_AfterBattle:
	.string "Hinter einem starken Pokémon\n"
	.string "steckt auch ein starker Trainer.\p"
	.string "Nein, halt! Hinter einem starken Trainer\n"
	.string "steckt auch ein starkes Pokémon!$"

SproutTower_Text_SageTroy_Seen:
	.string "Lass mich sehen,\n"
	.string "wie stark dein Glaube\l"
	.string "an deine Pokémon ist!$"

SproutTower_Text_SageTroy_Beaten:
	.string "Ja, du glaubst wirklich\n"
	.string "an dein Pokémon-Team!$"

SproutTower_Text_SageTroy_AfterBattle:
	.string "Es dauert nicht mehr lange,\n"
	.string "bis du dem Weisesten von uns begegnest.$"

SproutTower_Text_SageNeal_Seen:
	.string "Diese TM, die mir der Weiseste\n"
	.string "anvertraut hat, bringt Licht\l"
	.string "selbst in die tiefste Dunkelheit!$"

SproutTower_Text_SageNeal_Beaten:
	.string "Es ist wohl doch nur mein\n"
	.string "Haar, das licht ist.$"

SproutTower_Text_SageNeal_AfterBattle:
	.string "Möge dein Weg\n"
	.string "erleuchtet sein.$"

SproutTower_Text_3F_Painting:
	.string "Hier hat jemand mit kräftigem Strich\n"
	.string "ein Knofensa gezeichnet…$"
