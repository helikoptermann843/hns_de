Gate_RuinsOfAlph_Route36_hns_MapScripts::
	.byte 0

Gate_RuinsOfAlph_Route36_EventScript_Officer::
	lock
	faceplayer
	msgbox Gate_RuinsOfAlph_Route36_Text_Officer, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_RuinsOfAlph_Route36_EventScript_PokefanM::
	lock
	faceplayer
	msgbox Gate_RuinsOfAlph_Route36_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_RuinsOfAlph_Route36_EventScript_Youngster::
	lock
	faceplayer
	msgbox Gate_RuinsOfAlph_Route36_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_RuinsOfAlph_Route36_Text_Officer:
	.string "In den Alph-Ruinen wird dir Geschichte\n"
	.string "zum Anfassen und Bestaunen geboten.\p"
	.string "Du darfst gerne auch mal versuchen, die\n"
	.string "Steintafeln zu bewegen!$"

Gate_RuinsOfAlph_Route36_Text_PokefanM:
	.string "Oh, du untersuchst die Ruinen?\n"
	.string "Aus dir wird bestimmt mal ein\l"
	.string "guter Wissenschaftler!$"

Gate_RuinsOfAlph_Route36_Text_Youngster:
	.string "Auf den Steintafeln sind Zeichnungen!\n"
	.string "Ich habe versucht, sie ein bisschen\l"
	.string "zu bewegen, aber ich habe immer noch\l"
	.string "keine Ahnung, zu was sie gut sind.$"
