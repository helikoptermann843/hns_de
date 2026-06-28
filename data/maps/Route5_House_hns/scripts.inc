Route5_House_hns_MapScripts::
	.byte 0

Route5_House_EventScript_Granny::
	goto_if_set FLAG_GOT_CLEANSE_TAG, Route5_House_EventScript_GrannyAfter
	msgbox Route5_House_Text_Granny1, MSGBOX_NPC
	giveitem ITEM_CLEANSE_TAG
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	setflag FLAG_GOT_CLEANSE_TAG
	release
	end

Route5_House_EventScript_GrannyAfter::
	msgbox Route5_House_Text_Granny2, MSGBOX_NPC
	end

Route5_House_EventScript_Woman::
	msgbox Route5_House_Text_Woman, MSGBOX_NPC
	end

Route5_House_Text_Granny1:
	.string "Eeyaaaah!\p"
	.string "Ich spüre einen unheilvollen\n"
	.string "Schatten über dir.\l"
	.string "Nimm dies, um ihn zu vertreiben!$"

Route5_House_Text_Granny2:
	.string "Du warst in großer Gefahr,\n"
	.string "doch nun bist du geschützt.$"

Route5_House_Text_Woman:
	.string "Meine Oma vertreibt böse Geister,\n"
	.string "so wie sie glaubt.\p"
	.string "Entschuldige, dass sie dich\n"
	.string "erschreckt hat.$"
