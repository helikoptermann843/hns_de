NewSinjoh_House2_hns_MapScripts::
	.byte 0


NewSinjoh_House2_EventScripts_DeskLady::
    lock
	msgbox NewSinjoh_House2_DeskLady_Text MSGBOX_DEFAULT
	release
	end

NewSinjoh_House2_DeskLady_Text::
	.string "Hallo, Kleines…\p"
	.string "Willkommen in Neu-Sinjohs…\n"
	.string "Nun, man könnte es eine Bibliothek\l"
	.string "nennen.\p"
	.string "Eigentlich bewahren wir hier alle\n"
	.string "Aufzeichnungen zur Geschichte des\l"
	.string "Dorfes auf, dazu sämtliche Literatur,\l"
	.string "die wir aus anderen Regionen\l"
	.string "beziehen…$"

NewSinjoh_House2_EventScript_Torkoal::
	lock
	faceplayer
	playmoncry SPECIES_TORKOAL, 0
	msgbox NewSinjoh_Hosue2_Text_CryTorkoal, MSGBOX_DEFAULT
	waitmoncry
    closemessage
	release
	end

NewSinjoh_Hosue2_Text_CryTorkoal:
	.string "Tooor?$"

NewSinjoh_House2_EventScript_BookShelf_North::
    lock
	msgbox NewSinjoh_House2_Text_Bookshelf_North MSGBOX_DEFAULT
	release
	end

NewSinjoh_House2_Text_Bookshelf_North:
	.string "Vollgestopft mit uralten,\n"
	.string "ledergebundenen Büchern.\p"
	.string "Die Sprache ist nicht zu erkennen.$"

NewSinjoh_House2_EventScript_BookShelf_South::
    lock
	msgbox NewSinjoh_House2_Text_Bookshelf_South MSGBOX_DEFAULT
	release
	end

NewSinjoh_House2_Text_Bookshelf_South:
	.string "Vollgestopft mit Pokémon-Büchern.\p"
	.string "Diese wirken neuer und vertrauter.$"
