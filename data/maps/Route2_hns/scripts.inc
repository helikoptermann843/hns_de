Route2_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route2_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route2_EventScript_Rob::
	trainerbattle_single TRAINER_ROB_HNS, Route2_Text_BugCatcherRob_Seen, Route2_Text_BugCatcherRob_Beaten, Route2_EventScript_RegisterRob
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route2_EventScript_RematchRob
	msgbox Route2_Text_BugCatcherRob_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route2_EventScript_RegisterRob::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route2_Text_RobRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ROB_HNS
	release
	end

Route2_EventScript_RematchRob::
	trainerbattle_rematch TRAINER_ROB_HNS, Route2_Text_RobRematchIntro, Route2_Text_RobRematchDefeat
	msgbox Route2_Text_RobPostRematch, MSGBOX_AUTOCLOSE
	goto_if_defeated TRAINER_ROB_2_HNS, Route2_EventScript_RematchRobTryGiveItem
	end

Route2_EventScript_RematchRobTryGiveItem::
	checkitem ITEM_TM_X_SCISSOR
	goto_if_eq VAR_RESULT, TRUE, Common_EventScript_NoOp
	giveitem ITEM_TM_X_SCISSOR
	closemessage
	end

Route2_EventScript_Ed::
	trainerbattle_single TRAINER_ED_HNS, Route2_Text_BugCatcherEd_Seen, Route2_Text_BugCatcherEd_Beaten
	msgbox Route2_Text_BugCatcherEd_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route2_EventScript_Doug::
	trainerbattle_single TRAINER_DOUG_HNS, Route2_Text_BugCatcherDoug_Seen, Route2_Text_BugCatcherDoug_Beaten
	msgbox Route2_Text_BugCatcherDoug_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route2_EventScript_Sign::
	msgbox Route2_Text_Sign, MSGBOX_SIGN
	end

Route2_EventScript_CaveSign::
	msgbox Route2_Text_DiglettsCaveSign, MSGBOX_SIGN
	end

Route2_EventScript_Carbos::
    finditem ITEM_CARBOS
    end

Route2_EventScript_Nugget::
    finditem ITEM_NUGGET
    end

Route2_Text_RobRegister:
    .string "Lass mich deine Nummer\n"
    .string "eintragen!$"

Route2_Text_RobRematchIntro:
    .string "Ich habe noch mehr Käfer-Pokémon\n"
    .string "gefangen! Sieh sie dir an!$"

Route2_Text_RobRematchDefeat:
    .string "Ich brauche bessere Käfer-Pokémon!$"

Route2_Text_RobPostRematch:
    .string "Ich habe jedes Käfer-Pokémon in\n"
    .string "Vertania City gefangen.\p"
    .string "Gibt es irgendwo einen noch\n"
    .string "besseren Wald?$"

Route2_Text_BugCatcherRob_Seen:
	.string "Pass bloß auf!\n"
	.string "Meine Käfer-Pokémon sind zäh!$"

Route2_Text_BugCatcherRob_Beaten:
	.string "Du hast mich erwischt!$"

Route2_Text_BugCatcherRob_AfterBattle:
	.string "Ich werde mir stärkere\n"
	.string "Käfer-Pokémon suchen!$"

Route2_Text_BugCatcherEd_Seen:
	.string "Zerkratzt du dir nicht deine Beine, wenn\n"
	.string "du in Shorts durchs hohe Gras läufst?$"

Route2_Text_BugCatcherEd_Beaten:
	.string "Aua, aua, aua!$"

Route2_Text_BugCatcherEd_AfterBattle:
	.string "So richtig spürt man den Schmerz erst,\n"
	.string "wenn man danach ein Bad nimmt!$"

Route2_Text_BugCatcherDoug_Seen:
	.string "Warum mögen Mädchen\n"
	.string "keine Käfer-Pokémon?$"

Route2_Text_BugCatcherDoug_Beaten:
	.string "Das ging wohl nach hinten los.$"

Route2_Text_BugCatcherDoug_AfterBattle:
	.string "Dieses Gefühl, wenn man ein Käfer-\n"
	.string "Pokémon auf den Bauch drückt…\l"
	.string "Sie sind ganz weich und knubbelig!\l"
	.string "Das mag ich so an ihnen!$"

Route2_Text_Sign:
	.string "Route 2\p"
	.string "Vertania City - Marmoria City$"

Route2_Text_DiglettsCaveSign:
	.string "Digdas Höhle$"

