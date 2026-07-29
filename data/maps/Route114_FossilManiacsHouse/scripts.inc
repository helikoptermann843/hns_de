Route114_FossilManiacsHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsHouse_OnTransition
	.byte 0

Route114_FossilManiacsHouse_OnTransition:
	setflag FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE
	end

Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_DIG, Route114_FossilManiacsHouse_EventScript_ReceivedDig
	msgbox Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother, MSGBOX_DEFAULT
	giveitem ITEM_TM_DIG
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_DIG
	release
	end

Route114_FossilManiacsHouse_EventScript_ReceivedDig::
	msgbox Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsHouse_EventScript_RockDisplay::
	msgbox Route114_FossilManiacsHouse_Text_RocksFillDisplayCase, MSGBOX_SIGN
	end

Route114_FossilManiacsHouse_EventScript_Bookshelf::
	msgbox Route114_FossilManiacsHouse_Text_CrammedWithBooks, MSGBOX_SIGN
	end

Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother:
	.string "Mein großer Bruder ist ein Fossil-\n"
	.string "maniac… Er ist ein netter Kerl, der\l"
	.string "Fossilien liebt…\p"
	.string "Er liebt es auch, Löcher zu graben…\n"
	.string "Dieses Loch hat er alleine gegraben!\p"
	.string "Hier, das kannst du haben. Damit\n"
	.string "kannst\l"
	.string "du Löcher graben, wie mein Bruder…$"

Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance:
	.string "Wenn ein Pokémon in einer Höhle\n"
	.string "Schaufler einsetzt, kommst du zum\l"
	.string "Eingang zurück.$"

Route114_FossilManiacsHouse_Text_RocksFillDisplayCase:
	.string "Steine in den unterschiedlichsten\n"
	.string "Formen liegen im Glasschaukasten.$"

Route114_FossilManiacsHouse_Text_CrammedWithBooks:
	.string "Die Zusammensetzung der Erdschicht…\n"
	.string "Wie Regen das Land formt…\l"
	.string "Steine, Boden und Felsen…\p"
	.string "Gerammelt voll mit Büchern.$"

