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
	.string "Huaaah!\p"
	.string "Ich spüre einen dunklen Schatten\n"
	.string "über dir hängen!\l"
	.string "Verwende dies, um ihn loszuwerden!$"

Route5_House_Text_Granny2:
	.string "Das war echt gefährlich!\n"
	.string "Jetzt bist du in Sicherheit!$"

Route5_House_Text_Woman:
	.string "Meine Oma befasst sich mit dem\n"
	.string "Vertreiben böser Geister.\l"
	.string "Es tut mir leid, wenn sie dich\l"
	.string "erschreckt haben sollte.$"
