MtPyre_1F_MapScripts::
	.byte 0

MtPyre_1F_EventScript_CleanseTagWoman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, MtPyre_1F_EventScript_ReceivedCleanseTag
	msgbox MtPyre_1F_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
	giveitem ITEM_CLEANSE_TAG
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_CLEANSE_TAG
	release
	end

MtPyre_1F_EventScript_ReceivedCleanseTag::
	msgbox MtPyre_1F_Text_ExplainCleanseTag, MSGBOX_DEFAULT
	release
	end

MtPyre_1F_EventScript_PokefanF::
	msgbox MtPyre_1F_Text_ComeToPayRespects, MSGBOX_NPC
	end

MtPyre_1F_EventScript_Man::
	msgbox MtPyre_1F_Text_RestingPlaceOfZigzagoon, MSGBOX_NPC
	end

MtPyre_1F_Text_TakeThisForYourOwnGood:
	.string "Auf den Pfaden des PYROBERGs kreucht\n"
	.string "und fleucht alles Mögliche…\p"
	.string "Niemand kann sagen, was passieren\n"
	.string "wird.\l"
	.string "Dies ist für dich, es wird dir helfen.$"

MtPyre_1F_Text_ExplainCleanseTag:
	.string "Lass ein POKéMON das SCHUTZBAND\n"
	.string "tragen.\p"
	.string "Das hilft, wilde POKéMON fern zu\n"
	.string "halten.$"

MtPyre_1F_Text_ComeToPayRespects:
	.string "Bist du hier, um den verstorbenen\n"
	.string "POKéMON deinen Respekt zu zollen?\p"
	.string "Du musst immer sehr fürsorglich zu\n"
	.string "deinen POKéMON sein.$"

MtPyre_1F_Text_RestingPlaceOfZigzagoon:
	.string "Hier ruht mein ZIGZACHS. Ich habe\n"
	.string "es wirklich sehr geliebt…$"

