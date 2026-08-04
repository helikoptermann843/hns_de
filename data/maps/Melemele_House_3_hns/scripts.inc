Melemele_House_3_hns_MapScripts::
	.byte 0


Melemele_House3_Woman::
	lock
	faceplayer
	msgbox Melemele_House3_Woman_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Melemele_House3_Man::
	lock
	faceplayer
	msgbox Melemele_House3_Man_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Melemele_House3_Woman_Text_0:
	.string "Das Inselleben hier ist so\nfriedlich!\p"
	.string "Und meine Enkel in Kanto sind nur\n"
	.string "eine kurze Bootsfahrt entfernt!$"

Melemele_House3_Man_Text_0:
	.string "Diese verflixten Touristen!\p"
	.string "Mein Makler meinte, hier sei es\n"
	.string "ruhig… Aber die Reise hierher ist\l"
	.string "wohl billiger als bis nach Alola.$"
