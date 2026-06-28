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
	.string "Alph-Ruinen\p"
	.string "Geschichte zum verstehen und\n"
	.string "anfassen!$"

Gate_RuinsOfAlph_Route36_Text_PokefanM:
	.string "Seltsame Ruinen oder?\p"
	.string "Vielleicht finde ich ja etwas.$"

Gate_RuinsOfAlph_Route36_Text_Youngster:
	.string "Es gibt viele unterschiedliche\p"
	.string "ICOGNITO, die wir\n"
	.string "für unsere Geheimcodes benötigen.$"
