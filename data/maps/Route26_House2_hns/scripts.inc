Route26_House2_hns_MapScripts::
	.byte 0

Route26_House2_EventScript_Book::
	lock
	msgbox DayOfWeekSiblingsHouse_Text_Pokedex1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE,Route26_House2_EventScript_BookRead
	closemessage
	release
	end

Route26_House2_EventScript_BookRead::
	msgbox DayOfWeekSiblingsHouse_Text_Pokedex2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route26_House2_EventScript_BookRead2
	closemessage
	release
	end
	
Route26_House2_EventScript_BookRead2::
	msgbox DayOfWeekSiblingsHouse_Text_Pokedex3, MSGBOX_DEFAULT
	closemessage
	release
	end

DayOfWeekSiblingsHouse_Text_Pokedex1:
	.string "Hier steht etwas geschrieben.\p"
	.string "Lesen?$"

DayOfWeekSiblingsHouse_Text_Pokedex2:
	.string "An meine Brüder und Schwestern:\p"
	.string "Wir sind stolz\n"
	.string "darauf, PokémonTrainern zu dienen.\p"
	.string "Wenn ein Trainer\n"
	.string "mit dir spricht, gib ihm etwas\n"
	.string "Nützliches.\p"
	.string "Eure MONJA\p"
	.string "Weiterlesen?$"

DayOfWeekSiblingsHouse_Text_Pokedex3:
	.string "Montag, MONJA ROUTE 40\p"
	.string "Dienstag, DIETLINDE ROUTE 29\p"
	.string "Mittwoch, MITKO SEE DES ZORNS\p"
	.string "Donnerstag, DONATUS ROUTE 36\p"
	.string "Freitag, FRIEDA ROUTE 32\p"
	.string "Samstag, SAMSON EBENHOLZ CITY\p"
	.string "Sonntag, SONNFRIED ROUTE 37$"
