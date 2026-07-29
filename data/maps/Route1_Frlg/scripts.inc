Route1_Frlg_MapScripts::
	.byte 0

Route1_EventScript_MartClerk::
	lock
	faceplayer
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
	msgbox Route1_Text_WorkAtPokeMartTakeSample
	textcolor NPC_TEXT_COLOR_NEUTRAL
	checkitemspace ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
	bufferitemname STR_VAR_2, ITEM_POTION
	playfanfare MUS_LEVEL_UP
	message gText_ObtainedTheItem
	waitmessage
	waitfanfare
	additem ITEM_POTION
	msgbox Route1_Text_PutPotionAway
	call EventScript_RestorePrevTextColor
	setflag FLAG_GOT_POTION_ON_ROUTE_1
	release
	end

Route1_EventScript_AlreadyGotPotion::
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
	release
	end

Route1_EventScript_Boy::
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
	end

Route1_EventScript_RouteSign::
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
	end

Route1_Text_WorkAtPokeMartTakeSample::
	.string "Hi! Ich arbeite in einem Pokémon-\n"
	.string "Supermarkt.\p"
	.string "Wir verkaufen viele praktische\n"
	.string "Dinge!\p"
	.string "Du findest unseren Laden in\n"
	.string "Vertania City.\p"
	.string "Am besten gebe ich dir ein\n"
	.string "Werbegeschenk! Hier, bitte!$"

Route1_Text_ComeSeeUsIfYouNeedPokeBalls::
	.string "Willst du Pokémon fangen? Wir\n"
	.string "haben auch Pokébälle im Sortiment!$"

Route1_Text_PutPotionAway::
	.string "{PLAYER} steckt den Trank in die\n"
	.string "Item-Tasche des Beutels.$"

Route1_Text_CanJumpFromLedges::
	.string "Siehst du die Stufen hier?\p"
	.string "Du kannst nicht hinaufklettern,\n"
	.string "dafür aber herunterspringen!\p"
	.string "So kommst du viel schneller nach\n"
	.string "Alabastia zurück.$"

Route1_Text_RouteSign::
	.string "Route 1\n"
	.string "Alabastia - Vertania City$"

