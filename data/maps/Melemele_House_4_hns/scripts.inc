Melemele_House_4_hns_MapScripts::
	.byte 0


Melemele_House4_Man::
	lock
	faceplayer
	msgbox Melemele_House4_Man_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Melemele_House4_Woman::
	lock
	faceplayer
	msgbox Melemele_House4_Woman_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Melemele_House4_Man_Text_0:
	.string "Wir machen Urlaub auf den Alola-\nInseln!\p"
	.string "Genau wie die Alola-Region, nur\n"
	.string "näher an Kanto!\p"
	.string "Ich habe so viel Reisekosten\ngespart!$"

Melemele_House4_Woman_Text_0:
	.string "Mein Freund sagte, wir fahren nach\n"
	.string "Alola…\p"
	.string "Ich dachte, er meint die Alola-\n"
	.string "Region, nicht die kleinen Inseln\l"
	.string "vor der Küste von Kanto.$"
