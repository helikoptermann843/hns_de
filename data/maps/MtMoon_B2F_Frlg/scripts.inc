MtMoon_B2F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_B2F_OnTransition
	.byte 0

MtMoon_B2F_OnTransition::
	call_if_unset FLAG_GOT_FOSSIL_FROM_MT_MOON, MtMoon_B2F_EventScript_ShowFossils
	end

MtMoon_B2F_EventScript_ShowFossils::
	clearflag FLAG_HIDE_DOME_FOSSIL
	clearflag FLAG_HIDE_HELIX_FOSSIL
	return

MtMoon_B2F_EventScript_MiguelTrigger::
	lockall
	applymovement LOCALID_MIGUEL, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	call MtMoon_B2F_EventScript_BattleMiguel
	releaseall
	end

MtMoon_B2F_EventScript_Miguel::
	lock
	faceplayer
	goto_if_set FLAG_GOT_FOSSIL_FROM_MT_MOON, MtMoon_B2F_EventScript_MiguelFossilPicked
	goto_if_defeated TRAINER_SUPER_NERD_MIGUEL, MtMoon_B2F_EventScript_MiguelGoPickFossil
	call MtMoon_B2F_EventScript_BattleMiguel
	release
	end

MtMoon_B2F_EventScript_BattleMiguel::
	textcolor NPC_TEXT_COLOR_MALE
	message MtMoon_B2F_Text_MiguelIntro
	waitmessage
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
	waitbuttonpress
	setvar VAR_LAST_TALKED, LOCALID_MIGUEL
	trainerbattle_no_intro TRAINER_SUPER_NERD_MIGUEL, MtMoon_B2F_Text_MiguelDefeat
	setvar VAR_MAP_SCENE_MT_MOON_B2F, 1
	msgbox MtMoon_B2F_Text_WellEachTakeAFossil
	return

MtMoon_B2F_EventScript_MiguelFossilPicked::
	msgbox MtMoon_B2F_Text_LabOnCinnabarRegeneratesFossils
	release
	end

MtMoon_B2F_EventScript_MiguelGoPickFossil::
	msgbox MtMoon_B2F_Text_WellEachTakeAFossil
	release
	end

MtMoon_B2F_EventScript_DomeFossil::
	lock
	faceplayer
	msgbox MtMoon_B2F_Text_YouWantDomeFossil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MtMoon_B2F_EventScript_DontTakeFossil
	removeobject LOCALID_DOME_FOSSIL
	giveitem_msg MtMoon_B2F_Text_ObtainedDomeFossil, ITEM_DOME_FOSSIL, 1, MUS_RG_OBTAIN_KEY_ITEM
	closemessage
	delay 10
	applymovement LOCALID_MIGUEL, MtMoon_B2F_Movement_MiguelToHelixFossil
	waitmovement 0
	copyobjectxytoperm LOCALID_MIGUEL
	textcolor NPC_TEXT_COLOR_MALE
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
	message MtMoon_B2F_Text_ThenThisFossilIsMine
	waitmessage
	waitfanfare
	removeobject LOCALID_HELIX_FOSSIL
	setflag FLAG_GOT_DOME_FOSSIL
	setflag FLAG_GOT_FOSSIL_FROM_MT_MOON
	release
	end

MtMoon_B2F_Movement_MiguelToHelixFossil::
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

MtMoon_B2F_EventScript_HelixFossil::
	lock
	faceplayer
	msgbox MtMoon_B2F_Text_YouWantHelixFossil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MtMoon_B2F_EventScript_DontTakeFossil
	removeobject LOCALID_HELIX_FOSSIL
	giveitem_msg MtMoon_B2F_Text_ObtainedHelixFossil, ITEM_HELIX_FOSSIL, 1, MUS_RG_OBTAIN_KEY_ITEM
	closemessage
	delay 10
	applymovement LOCALID_MIGUEL, MtMoon_B2F_Movement_MiguelToDomeFossil
	waitmovement 0
	copyobjectxytoperm LOCALID_MIGUEL
	textcolor NPC_TEXT_COLOR_MALE
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
	message MtMoon_B2F_Text_ThenThisFossilIsMine
	waitmessage
	waitfanfare
	removeobject LOCALID_DOME_FOSSIL
	setflag FLAG_GOT_HELIX_FOSSIL
	setflag FLAG_GOT_FOSSIL_FROM_MT_MOON
	release
	end

MtMoon_B2F_EventScript_DontTakeFossil::
	release
	end

MtMoon_B2F_Movement_MiguelToDomeFossil::
	walk_up
	walk_up
	walk_up
	step_end

MtMoon_B2F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT, MtMoon_B2F_Text_Grunt1Intro, MtMoon_B2F_Text_Grunt1Defeat
	msgbox MtMoon_B2F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_B2F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_2, MtMoon_B2F_Text_Grunt2Intro, MtMoon_B2F_Text_Grunt2Defeat
	msgbox MtMoon_B2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_B2F_EventScript_Grunt3::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_3, MtMoon_B2F_Text_Grunt3Intro, MtMoon_B2F_Text_Grunt3Defeat
	msgbox MtMoon_B2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_B2F_EventScript_Grunt4::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_4, MtMoon_B2F_Text_Grunt4Intro, MtMoon_B2F_Text_Grunt4Defeat
	msgbox MtMoon_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_B2F_Text_MiguelIntro::
	.string "Hey, stop!\p"
	.string "I found these fossils!\n"
	.string "They're both mine!$"

MtMoon_B2F_Text_MiguelDefeat::
	.string "Okay!\n"
	.string "I'll share!$"

MtMoon_B2F_Text_WellEachTakeAFossil::
	.string "Heh, nicht so gierig!\n"
	.string "Ich sagte, ich gebe dir eines ab!$"

MtMoon_B2F_Text_ThenThisFossilIsMine::
	.string "All right.\n"
	.string "Then this fossil is mine!$"

MtMoon_B2F_Text_LabOnCinnabarRegeneratesFossils::
	.string "Auf der fernen Zinnoberinsel\n"
	.string "gibt es ein Pokémon-Labor.\p"
	.string "Dort versucht man, aus fossilem\n"
	.string "Gen-Material Pokémon zu\l"
	.string "erschaffen.$"

MtMoon_B2F_Text_Grunt1Intro::
	.string "Wir vom Team Rocket werden die\n"
	.string "Fossilien finden, die Pokémon wie-\l"
	.string "der beleben und teuer verkaufen!$"

MtMoon_B2F_Text_Grunt1Defeat::
	.string "Grr!\n"
	.string "Das gibt es nicht!$"

MtMoon_B2F_Text_Grunt1PostBattle::
	.string "Du machst mich irre! Das Team\n"
	.string "Rocket wird dich im Auge behalten!$"

MtMoon_B2F_Text_Grunt2Intro::
	.string "Wir sind das Team Rocket, die\n"
	.string "Pokémon-Räuber!$"

MtMoon_B2F_Text_Grunt2Defeat::
	.string "Nein!\n"
	.string "Ich hab es vermasselt!$"

MtMoon_B2F_Text_Grunt2PostBattle::
	.string "Verdammt! Wie erkläre ich das\n"
	.string "meinen Partnern?$"

MtMoon_B2F_Text_Grunt3Intro::
	.string "Wir drehen hier ein dickes Ding!\n"
	.string "Mach dich vom Acker!$"

MtMoon_B2F_Text_Grunt3Defeat::
	.string "Du bist 'ne harte Nuss, Kiddie!$"

MtMoon_B2F_Text_Grunt3PostBattle::
	.string "Wenn du ein Fossil hast, gib es her\n"
	.string "und verschwinde!$"

MtMoon_B2F_Text_Grunt4Intro::
	.string "Geh Erwachsenen nicht auf den\n"
	.string "Wecker, du Nervensäge!$"

MtMoon_B2F_Text_Grunt4Defeat::
	.string "Ich bin sauer!$"

MtMoon_B2F_Text_Grunt4PostBattle::
	.string "Schon lange vor den Menschen\n"
	.string "haben Pokémon hier gelebt...$"

MtMoon_B2F_Text_YouWantDomeFossil::
	.string "Möchtest du das Domfossil?$"

MtMoon_B2F_Text_YouWantHelixFossil::
	.string "Möchtest du das Helixfossil?$"

MtMoon_B2F_Text_ObtainedHelixFossil::
	.string "Obtained the Helix Fossil!$"

MtMoon_B2F_Text_ObtainedDomeFossil::
	.string "Obtained the Dome Fossil!$"

