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
	.string "Alle Flegmon sind aus der Stadt\n"
	.string "verschwunden.\p"
	.string "Der Beschützer des Waldes muss\n"
	.string "wütend auf uns sein…\p"
	.string "Das könnte ein schlechtes Omen sein.\n"
	.string "Wir sollten drinnen bleiben.$"

CharcoalKiln_Text_Boss2:
	.string "Die Flegmon sind zurück…$"

CharcoalKiln_Text_Boss3:
	.string "Die Flegmon sind zurück…\p"
	.string "Aber mein Lehrling ist noch nicht\n"
	.string "aus dem Steineichenwald zurück.\p"
	.string "Wo steckt dieser faule Kerl nur?$"

CharcoalKiln_Text_Boss4:
	.string "Du hast TEAM ROCKET verjagt und\n"
	.string "bist alleine in den Steineichenwald?\p"
	.string "Das erfordert Mut! Das gefällt mir.\p"
	.string "Komm und trainier mit uns.$"

CharcoalKiln_Text_Apprentice1:
	.string "Wo sind all die Flegmon hin?\p"
	.string "Spielen sie irgendwo?$"

CharcoalKiln_Text_Apprentice2:
	.string "Die Flegmon sind wieder da!$"

CharcoalKiln_Text_Apprentice3:
	.string "E-Entschuldige, ich habe vergessen\n"
	.string "mich zu bedanken.\p"
	.string "Das hier ist Holzkohle, es verstärkt\n"
	.string "Feuer-Attacken. gib es einem POKéMON.$"

CharcoalKiln_Text_Apprentice4:
	.string "Die Flegmon sind zurück, und du\n"
	.string "hast sogar Porenta gefunden!\p"
	.string "Du bist so cool!$"

CharcoalKiln_Text_Farfetchd:
	.string "Porenta: Kwaa!$"
