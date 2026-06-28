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
	.string "Mein Miltank gibt keine\n"
	.string "Milch mehr.\p"
	.string "Diese FARM ist berühmt für\n"
	.string "ihre Milch.\p"
	.string "Fast jeder will was davon.\p"
	.string "Wenn ich ihm viele BEEREN\n"
	.string "gebe, gibt es bestimmt\l"
	.string "wieder reichlich Milch.$"

Route39_Text_FarmerMBuyMilk:
	.string "Wie findest du meine\n"
	.string "KUHMUH-MILCH?\p"
	.string "Darauf bin ich mächtig stolz.\p"
	.string "Gib sie Pokémon, um KP\n"
	.string "aufzufüllen!\p"
	.string "Ich geb sie dir für nur\n"
	.string "¥500.$"

Route39_Text_FarmerMGotMilk:
	.string "Bitte sehr!\n"
	.string "Trink sie und genieß es!$"

Route39_Text_FarmerMNoMoney:
	.string "Tut mir leid.\n"
	.string "Ohne Geld kein Handel!$"

Route39_Text_FarmerMNoRoom:
	.string "Hm, dein BEUTEL ist wohl\n"
	.string "schon voll.$"

Route39_Text_FarmerMNoSale:
	.string "Du willst sie nicht?\n"
	.string "Dann komm später wieder!$"

Route39FarmHouse_Text_WouldYouLikeAnother:
	.string "Wie wär's mit noch einer?$"

Route39_Text_GotMilk:
	.string "{PLAYER} erhielt\n"
	.string "KUHMUH-MILCH.$"

Route39_Text_FarmerMMilking:
	.string "Dann geh ich mal melken.$"

Route39_Text_FarmerFInTrouble:
	.string "Unsere Milch wird\n"
	.string "sogar nach KANTO geliefert.\p"
	.string "Wenn uns unser MILTANK keine\p"
	.string "Milch mehr gibt,\n"
	.string "haben wir echte Probleme.$"

Route39_Text_FarmerFHealedMiltank:
	.string "Du hast unserem MILTANK geholfen!\p"
	.string "Jetzt gibt es wieder Milch!\p"
	.string "Hier, für deine Mühe.$"

Route39_Text_FarmerFSnatchSpeech:
	.string "Das ist ÜBERNAHME.\p"
	.string "Eine knifflige Attacke, mit\n"
	.string "der ein Pokémon die Attacke\l"
	.string "des Gegners kurz vor dem\n"
	.string "Einsatz stiehlt.\p"
	.string "Wenn mehrere Pokémon\n"
	.string "ÜBERNAHME einsetzen,\l"
	.string "stiehlt nur das langsamste\n"
	.string "die Attacke.\p"
	.string "Setz sie klug ein.\n"
	.string "Timing ist alles,\l"
	.string "mein Lieber.$"
