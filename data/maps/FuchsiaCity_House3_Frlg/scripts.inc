FuchsiaCity_House3_Frlg_MapScripts::
	.byte 0

FuchsiaCity_House3_EventScript_MoveDeleter::
	lock
	faceplayer
	msgbox FuchsiaCity_House3_Text_WouldYouLikeToForgetMove, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter
	goto FuchsiaCity_House3_EventScript_CancelForgetMove
	end

FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter::
	msgbox FuchsiaCity_House3_Text_WhichMonShouldForgetMove
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, FuchsiaCity_House3_EventScript_CancelForgetMove
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, FuchsiaCity_House3_EventScript_CantForgetMoveEgg
	special GetNumMovesSelectedMonHas
	goto_if_eq VAR_RESULT, 1, FuchsiaCity_House3_EventScript_CantForgetOnlyMove
	msgbox FuchsiaCity_House3_Text_WhichMoveShouldBeForgotten
	fadescreen FADE_TO_BLACK
	special MoveDeleterChooseMoveToForget
	fadescreen FADE_FROM_BLACK
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter
	special BufferMoveDeleterNicknameAndMove
	msgbox FuchsiaCity_House3_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_House3_EventScript_ForgetMove
	goto FuchsiaCity_House3_EventScript_CancelForgetMove
	end

FuchsiaCity_House3_EventScript_ForgetMove::
	special MoveDeleterForgetMove
	playfanfare MUS_MOVE_DELETED
	waitfanfare
	msgbox FuchsiaCity_House3_Text_MonHasForgottenMoveCompletely
	release
	end

FuchsiaCity_House3_EventScript_CantForgetOnlyMove::
	special BufferMoveDeleterNicknameAndMove
	msgbox FuchsiaCity_House3_Text_MonOnlyKnowsOneMove
	release
	end

FuchsiaCity_House3_EventScript_CantForgetMoveEgg::
	msgbox FuchsiaCity_House3_Text_NoEggShouldKnowMoves
	release
	end

FuchsiaCity_House3_EventScript_CancelForgetMove::
	msgbox FuchsiaCity_House3_Text_ComeAgainToForgetOtherMoves
	release
	end

FuchsiaCity_House3_Text_WouldYouLikeToForgetMove::
	.string "Äh…\n"
	.string "Oh, ja. Ich bin der ATTACKEN-VERLERNER.\p"
	.string "Ich sorge dafür, dass die POKéMON ihre\n"
	.string "Attacken vergessen.\p"
	.string "Möchtest du, dass ich dir helfe?$"

FuchsiaCity_House3_Text_WhichMonShouldForgetMove::
	.string "Welches POKéMON soll eine Attacke\n"
	.string "vergessen?$"

FuchsiaCity_House3_Text_WhichMoveShouldBeForgotten::
	.string "Welche Attacke soll vergessen\n"
	.string "werden?$"

FuchsiaCity_House3_Text_MonOnlyKnowsOneMove::
	.string "{VAR} kennt scheinbar nur eine\n"
	.string "einzige Attacke...$"

FuchsiaCity_House3_Text_MonsMoveShouldBeForgotten::
	.string "Hm! {VAR} von {VAR}?\n"
	.string "Diese Attacke soll vergessen\l"
	.string "werden?$"

FuchsiaCity_House3_Text_MonHasForgottenMoveCompletely::
	.string "Das klappte doch perfekt!\p"
	.string "{STR_VAR_1} hat {STR_VAR_2}\n"
	.string "komplett vergessen.$"

FuchsiaCity_House3_Text_ComeAgainToForgetOtherMoves::
	.string "Komm wieder, wenn es andere\n"
	.string "Attacken gibt, die vergessen werden\l"
	.string "sollen.$"

FuchsiaCity_House3_Text_NoEggShouldKnowMoves::
	.string "Was?\n"
	.string "Ein EI kennt doch keine Attacken!$"

