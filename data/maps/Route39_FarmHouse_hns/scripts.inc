Route39_FarmHouse_hns_MapScripts::
	.byte 0


Route39House_EventScript_FarmerF::
	lock
	faceplayer
	goto_if_eq VAR_ROUTE39_BARN, 5, Route39House_EventScript_FarmerFAfter
	msgbox Route39_Text_FarmerFInTrouble, MSGBOX_DEFAULT
	closemessage
	release
	end

Route39House_EventScript_FarmerFAfter::
	goto_if_set FLAG_GOT_TM_SNATCH, Route39House_EventScript_FarmerFAfterTM
	msgbox Route39_Text_FarmerFHealedMiltank, MSGBOX_DEFAULT
	giveitem ITEM_TM_SNATCH
	msgbox Route39_Text_FarmerFSnatchSpeech, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_GOT_TM_SNATCH
	release
	end

Route39House_EventScript_FarmerFAfterTM::
	msgbox Route39_Text_FarmerFSnatchSpeech, MSGBOX_DEFAULT
	closemessage
	release
	end

Route39_FarmHouse_EventScript_FarmerM::
	lock
	faceplayer
	goto_if_lt VAR_ROUTE39_BARN, 5, Route39_FarmHouse_EventScript_FarmerM_Sick
	showmoneybox 0, 0
	msgbox Route39_Text_FarmerMBuyMilk, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route39_FarmHouse_EventScript_FarmerMBuyMilk
	msgbox Route39_Text_FarmerMNoSale, MSGBOX_DEFAULT
	hidemoneybox
	closemessage
	end

Route39_FarmHouse_EventScript_FarmerMBuyMilk::
	checkmoney 500, 0
	goto_if_eq VAR_RESULT, FALSE, Route39_FarmHouse_EventScript_FarmerM_NotEnough
	additem ITEM_MOOMOO_MILK
	goto_if_eq VAR_RESULT, FALSE, Route39_FarmHouse_EventScript_FarmerM_BagFull
	removemoney 500
	updatemoneybox 0
	msgbox Route39FarmHouse_Text_WouldYouLikeAnother, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route39_FarmHouse_EventScript_FarmerMBuyMilk


	msgbox Route39_Text_FarmerMGotMilk, MSGBOX_DEFAULT
	closemessage
	playse MUS_OBTAIN_ITEM
	msgbox Route39_Text_GotMilk, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	release
	end

Route39_FarmHouse_EventScript_FarmerM_Sick::
	msgbox Route39_Text_FarmerMSickCow, MSGBOX_DEFAULT
	closemessage
	release
	end

Route39_FarmHouse_EventScript_FarmerM_BagFull::
	msgbox Route39_Text_FarmerMNoRoom, MSGBOX_DEFAULT
	hidemoneybox
	closemessage
	release
	end

Route39_FarmHouse_EventScript_FarmerM_NotEnough::
	msgbox Route39_Text_FarmerMNoMoney, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	release
	end

Route39_Text_FarmerMSickCow:
	.string "Unser Miltank gibt keine Milch mehr!\p"
	.string "Diese Farm ist berühmt für die Milch,\n"
	.string "die hier produziert wird. Die Leute\l"
	.string "reißen sich richtiggehend darum!\p"
	.string "Aber wenn wir dem kranken Pokémon\n"
	.string "sehr viele Sinelbeeren zu fressen\l"
	.string "geben, kommt es vielleicht wieder\l"
	.string "auf die Beine!$"

Route39_Text_FarmerMBuyMilk:
	.string "Möchtest du ein bisschen was von der\n"
	.string "berühmten Milch der Kuhmuh-Farm?\p"
	.string "Wenn du sie deinen Pokémon zu trinken\n"
	.string "gibst, werden ihre KP aufgefrischt!\p"
	.string "Eine Flasche macht nur 500 $!$"

Route39_Text_FarmerMGotMilk:
	.string "Bitte sehr, trink aus und genieße!$"

Route39_Text_FarmerMNoMoney:
	.string "Oh, dein Geld reicht leider nicht!$"

Route39_Text_FarmerMNoRoom:
	.string "Hm, dein Beutel ist wohl\n"
	.string "schon voll.$"

Route39_Text_FarmerMNoSale:
	.string "Willst du wirklich keine Milch? Na gut,\n"
	.string "aber komm mal wieder, hörst du?$"

Route39FarmHouse_Text_WouldYouLikeAnother:
	.string "Wie wär's mit noch einer?$"

Route39_Text_GotMilk:
	.string "{PLAYER} erhielt\n"
	.string "Kuhmuh-Milch.$"

Route39_Text_FarmerMMilking:
	.string "Hm, vielleicht sollte ich mal mit dem\n"
	.string "Melken anfangen…$"

Route39_Text_FarmerFInTrouble:
	.string "Unsere Milch wird sogar bis nach\n"
	.string "Kanto geliefert!\p"
	.string "Wenn unser Miltank keine Milch mehr\n"
	.string "gibt, haben wir also echt Probleme!$"

Route39_Text_FarmerFHealedMiltank:
	.string "Dir haben wir zu verdanken, dass unser\n"
	.string "Miltank wieder leckere Milch gibt!\p"
	.string "Hier, das ist für deine Mühen!$"

Route39_Text_FarmerFSnatchSpeech:
	.string "Das ist Übernahme.\p"
	.string "Eine knifflige Attacke, mit\n"
	.string "der ein Pokémon die Attacke\l"
	.string "des Gegners kurz vor dem\p"
	.string "Einsatz stiehlt.\p"
	.string "Wenn mehrere Pokémon Übernahme\n"
	.string "einsetzen, stiehlt nur das\l"
	.string "langsamste die Attacke\p"
	.string "Setz sie klug ein.\p"
	.string "Timing ist alles,\n"
	.string "mein Lieber.$"
