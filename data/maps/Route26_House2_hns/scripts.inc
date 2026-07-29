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
	.string "Wir sind stolz darauf,\n"
	.string "PokémonTrainern zu dienen.\p"
	.string "Wenn ein Trainer mit dir\n"
	.string "spricht, gib ihm etwas\l"
	.string "Nützliches.\p"
	.string "Eure Monja\p"
	.string "Weiterlesen?$"

DayOfWeekSiblingsHouse_Text_Pokedex3:
	.string "Montag, Monja Route 40\p"
	.string "Dienstag, Dietlinde Route 29\p"
	.string "Mittwoch, Mitko See des Zorns\p"
	.string "Donnerstag, Donatus Route 36\p"
	.string "Freitag, Frieda Route 32\p"
	.string "Samstag, Samson Ebenholz City\p"
	.string "Sonntag, Sonnfried Route 37$"
