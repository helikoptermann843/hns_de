BlackthornCity_House3_hns_MapScripts::
	.byte 0

BlackthornCity_MoveDeletersHouse_EventScript_MoveDeleter::
	lockall
	applymovement LOCALID_MOVE_DELETER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox BlackthornCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, BlackthornCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	case NO, BlackthornCity_MoveDeletersHouse_EventScript_ComeAgain
	releaseall
	end

BlackthornCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget::
	msgbox BlackthornCity_MoveDeletersHouse_Text_WhichMonShouldForget, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BlackthornCity_MoveDeletersHouse_EventScript_ComeAgain
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, BlackthornCity_MoveDeletersHouse_EventScript_EggCantForgetMoves
	special GetNumMovesSelectedMonHas
	goto_if_eq VAR_RESULT, 1, BlackthornCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove
	msgbox BlackthornCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special MoveDeleterChooseMoveToForget
	fadescreen FADE_FROM_BLACK
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, BlackthornCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	special BufferMoveDeleterNicknameAndMove
	msgbox BlackthornCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, BlackthornCity_MoveDeletersHouse_EventScript_TryForgetMove
	case NO, BlackthornCity_MoveDeletersHouse_EventScript_ComeAgain
	releaseall
	end

BlackthornCity_MoveDeletersHouse_EventScript_TryForgetMove::
	special IsLastMonThatKnowsSurf
	goto_if_eq VAR_RESULT, TRUE, BlackthornCity_MoveDeletersHouse_EventScript_LastMonWithSurf
	special MoveDeleterForgetMove
	playfanfare MUS_MOVE_DELETED
	waitfanfare
	msgbox BlackthornCity_MoveDeletersHouse_Text_MonHasForgottenMove, MSGBOX_DEFAULT
	releaseall
	end

BlackthornCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove::
	special BufferMoveDeleterNicknameAndMove
	msgbox BlackthornCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
	releaseall
	end

BlackthornCity_MoveDeletersHouse_EventScript_EggCantForgetMoves::
	msgbox BlackthornCity_MoveDeletersHouse_Text_EggCantForgetMoves, MSGBOX_DEFAULT
	releaseall
	end

BlackthornCity_MoveDeletersHouse_EventScript_ComeAgain::
	msgbox BlackthornCity_MoveDeletersHouse_Text_ComeAgain, MSGBOX_DEFAULT
	releaseall
	end

BlackthornCity_MoveDeletersHouse_EventScript_LastMonWithSurf::
	special BufferMoveDeleterNicknameAndMove
	msgbox BlackthornCity_MoveDeletersHouse_Text_CantForgetSurf, MSGBOX_DEFAULT
	releaseall
	end

BlackthornCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove:
	.string "Äh… Oh, ja, ich bin der Attacken-\n"
	.string "verlerner.\p"
	.string "Ich kann Pokémon ihre Attacken\n"
	.string "vergessen lassen.\p"
	.string "Möchtest du das?$"

BlackthornCity_MoveDeletersHouse_Text_WhichMonShouldForget:
	.string "Welches Pokémon soll eine Attacke\n"
	.string "vergessen?$"

BlackthornCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten:
	.string "Welche Attacke soll vergessen\n"
	.string "werden?$"

BlackthornCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove:
	.string "Dieses Pokémon kennt nur eine Attacke,\n"
	.string "daher kann es keine vergessen…$"

BlackthornCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten:
	.string "Hm! {STR_VAR_1}?\n"
	.string "Diese Attacke vergessen?$"

BlackthornCity_MoveDeletersHouse_Text_MonHasForgottenMove:
	.string "Perfekt gelungen!\p"
	.string "{STR_VAR_1} hat\n"
	.string "{STR_VAR_2} komplett vergessen.$"

BlackthornCity_MoveDeletersHouse_Text_ComeAgain:
	.string "Komm wieder, wenn es Attacken gibt,\n"
	.string "die vergessen werden sollen.$"

BlackthornCity_MoveDeletersHouse_Text_EggCantForgetMoves:
	.string "Was?\n"
	.string "Ein Ei kennt doch keine Attacken!$"

BlackthornCity_MoveDeletersHouse_Text_CantForgetSurf:
	.string "Hm!\p"
	.string "Dein {STR_VAR_1} scheint Surfer\n"
	.string "nicht vergessen zu wollen.$"

BlackthornCity_MoveRelearnersHouse_EventScript_MoveRelearner::
	lockall
	faceplayer
	specialvar VAR_RESULT, IsRandomMovesActivated
	goto_if_eq VAR_RESULT, TRUE, BlackthornCity_MoveRelearnersHouse_EventScript_Randomizer
	goto_if_set FLAG_TEMP_1, BlackthornCity_MoveRelearnersHouse_EventScript_AskTeachMove
	msgbox BlackthornCity_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto BlackthornCity_MoveRelearnersHouse_EventScript_AskTeachMove
	end

BlackthornCity_MoveRelearnersHouse_EventScript_AskTeachMove::
	checkitem ITEM_HEART_SCALE
	goto_if_eq VAR_RESULT, FALSE, BlackthornCity_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	msgbox BlackthornCity_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BlackthornCity_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	goto BlackthornCity_MoveRelearnersHouse_EventScript_ChooseMon
	end

BlackthornCity_MoveRelearnersHouse_EventScript_ChooseMon::
	msgbox BlackthornCity_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
	setmoverelearnerstate MOVE_RELEARNER_LEVEL_UP_MOVES
	chooseboxmon SELECT_PC_MON_MOVE_RELEARNER
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BlackthornCity_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, BlackthornCity_MoveRelearnersHouse_EventScript_CantTeachEgg
	special HasMovesToRelearn
	goto_if_eq VAR_RESULT, FALSE, BlackthornCity_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
	goto BlackthornCity_MoveRelearnersHouse_EventScript_ChooseMove
	end

BlackthornCity_MoveRelearnersHouse_EventScript_ChooseMove::
	msgbox BlackthornCity_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, BlackthornCity_MoveRelearnersHouse_EventScript_ChooseMon
	msgbox BlackthornCity_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE
	goto BlackthornCity_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	end

BlackthornCity_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
	msgbox BlackthornCity_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto BlackthornCity_MoveRelearnersHouse_EventScript_ChooseMon
	end

BlackthornCity_MoveRelearnersHouse_EventScript_CantTeachEgg::
	msgbox BlackthornCity_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
	goto BlackthornCity_MoveRelearnersHouse_EventScript_ChooseMon
	end

BlackthornCity_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
	msgbox BlackthornCity_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

BlackthornCity_MoveRelearnersHouse_EventScript_Randomizer::
	msgbox BlackthornCity_MoveRelearnersHouse_Text_SorryCantHelp, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

BlackthornCity_MoveRelearnersHouse_Text_SorryCantHelp:
	.string "Sorry, ich kann dir nicht helfen.$"

BlackthornCity_MoveRelearnersHouse_Text_ImTheMoveTutor:
	.string "Ich bin der Attacken-Tutor.\p"
	.string "Ich kenne alle Attacken, die Pokémon\n"
	.string "lernen--jede einzelne--und ich kann\l"
	.string "Pokémon diese Attacken beibringen.\p"
	.string "Ich kann einem deiner Pokémon eine\n"
	.string "Attacke beibringen, wenn du möchtest.\p"
	.string "Ich tue es für eine Herzschuppe.\n"
	.string "Die sammle ich gerade.$"

BlackthornCity_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
	.string "Oh! Das ist es! Das ist ehrlich und\n"
	.string "wahrhaftig eine Herzschuppe!\l"
	.string "Lass mich raten…\p"
	.string "Ich soll einem Pokémon eine\n"
	.string "alte Attacke beibringen?!?$"

BlackthornCity_MoveRelearnersHouse_Text_TutorWhichMon:
	.string "Welches Pokémon soll sich an\n"
	.string "eine alte Attacke erinnern?$"

BlackthornCity_MoveRelearnersHouse_Text_TeachWhichMove:
	.string "Welchem deiner Pokémon soll ich\n"
	.string "die Attacke beibringen?$"

BlackthornCity_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
	.string "Tut mir leid…\p"
	.string "Anscheinend habe ich keine Attacke,\n"
	.string "die ich diesem Pokémon beibringen\l"
	.string "kann.$"

BlackthornCity_MoveRelearnersHouse_Text_HandedOverHeartScale:
	.string "{STR_VAR_1} gibt im Austausch dafür\n"
	.string "eine Herzschuppe ab.$"

BlackthornCity_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
	.string "Komm mit einer Herzschuppe wieder, wenn\n"
	.string "ich einem deiner Pokémon mit einer alten\l"
	.string "Attacke auf die Sprünge helfen soll!$"

BlackthornCity_MoveRelearnersHouse_Text_CantTeachEgg:
	.string "Hm? Es gibt keine einzige Attacke,\n"
	.string "die ich einem Ei beibringen kann.$"



