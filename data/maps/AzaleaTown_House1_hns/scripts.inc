AzaleaTown_House1_hns_MapScripts::
	.byte 0

AzaleaTown_House1_EventScript_Boss::
	lock
	faceplayer
	goto_if_eq VAR_AZALEA_TOWN_STATE, 5, AzaleaTown_House1_EventScript_Boss3
	goto_if_eq VAR_AZALEA_TOWN_STATE, 6, AzaleaTown_House1_EventScript_Boss3
	goto_if_eq VAR_AZALEA_TOWN_STATE, 7, AzaleaTown_House1_EventScript_Boss4
	goto_if_set FLAG_HIDE_AZALEA_TOWN_ROCKETS, AzaleaTown_House1_EventScript_Boss2
	msgbox CharcoalKiln_Text_Boss1, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_House1_EventScript_Boss2::
	msgbox CharcoalKiln_Text_Boss2, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_House1_EventScript_Boss3::
	msgbox CharcoalKiln_Text_Boss3, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_House1_EventScript_Boss4::
	msgbox CharcoalKiln_Text_Boss4, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_House1_EventScript_Apprentice::
	lock
	faceplayer
	goto_if_ge VAR_AZALEA_TOWN_STATE, 7, AzaleaTown_House1_EventScript_Apprentice3
	goto_if_set FLAG_HIDE_AZALEA_TOWN_ROCKETS, AzaleaTown_House1_EventScript_Apprentice2
	msgbox CharcoalKiln_Text_Apprentice1, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_House1_EventScript_Apprentice2::
	msgbox CharcoalKiln_Text_Apprentice2, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_House1_EventScript_Apprentice3::
	goto_if_set FLAG_GOT_CHARCOAL, AzaleaTown_House1_EventScript_Apprentice4
	msgbox CharcoalKiln_Text_Apprentice3, MSGBOX_DEFAULT
	giveitem ITEM_CHARCOAL
	setflag FLAG_GOT_CHARCOAL
	closemessage
	release
	end

AzaleaTown_House1_EventScript_Apprentice4::
	msgbox CharcoalKiln_Text_Apprentice4, MSGBOX_DEFAULT
	closemessage
	release
	end


AzaleaTown_House1_EventScript_Farfetchd::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FARFETCHD, CRY_MODE_NORMAL
	msgbox CharcoalKiln_Text_Farfetchd, MSGBOX_DEFAULT
	waitmoncry
	release
	end



CharcoalKiln_Text_Boss1:
	.string "In der Stadt gibt es kein einziges\n"
	.string "Flegmon mehr.\p"
	.string "Vielleicht haben wir ja den Zorn des\n"
	.string "Schutzpatrons auf uns gezogen?\p"
	.string "Das könnte ein böses Vorzeichen sein.\n"
	.string "Wir sollten auf alles gefasst sein…$"

CharcoalKiln_Text_Boss2:
	.string "Die Flegmon sind zurück…$"

CharcoalKiln_Text_Boss3:
	.string "Die Flegmon sind zurück…\p"
	.string "Aber mein Lehrling ist noch nicht\n"
	.string "aus dem Steineichenwald zurück.\p"
	.string "Wo steckt dieser faule Kerl nur?$"

CharcoalKiln_Text_Boss4:
	.string "Du hast Team Rocket vertrieben und bist\n"
	.string "alleine in den Steineichenwald gegangen.\l"
	.string "Du hast Mumm! Das gefällt mir!\p"
	.string "Was sagst du, würdest du nicht gerne\n"
	.string "bei mir in die Lehre gehen?$"

CharcoalKiln_Text_Apprentice1:
	.string "Wo sind nur all die Flegmon hin?\n"
	.string "Machen sie sich vielleicht irgendwo\l"
	.string "einen schönen Lenz?$"

CharcoalKiln_Text_Apprentice2:
	.string "Die Flegmon sind wieder da!$"

CharcoalKiln_Text_Apprentice3:
	.string "E-Entschuldige, ich habe vergessen\n"
	.string "mich zu bedanken.\p"
	.string "Das hier ist Holzkohle, es verstärkt\n"
	.string "Feuer-Attacken. gib es einem Pokémon.$"

CharcoalKiln_Text_Apprentice4:
	.string "Die Flegmon sind wieder da, und die\n"
	.string "Porenta hast du auch wiedergefunden.\l"
	.string "Du bist echt der Coolste!$"

CharcoalKiln_Text_Farfetchd:
	.string "Porenta: Pooorenta!$"
