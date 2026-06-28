Gate_Route29_Route46_hns_MapScripts::
	.byte 0

Gate_Route29_Route46_EventScript_Officer::
	lock
	faceplayer
	msgbox Gate_Route29_Route46_Text_Officer, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_Route29_Route46_EventScript_Youngster::
	lock
	faceplayer
	msgbox Gate_Route29_Route46_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_Route29_Route46_Text_Officer:
	.string "Du kannst diese Stufen\n"
	.string "nicht hinaufklettern.\p"
	.string "Du kannst sie aber hinabspringen,\n"
	.string "um sie als Abkürzung zu benutzen.$"

Gate_Route29_Route46_Text_Youngster:
	.string "Verschiedene Pokémon tauchen hier auf.\p"
	.string "Wenn du alle schnappen möchtest,\n"
	.string "dann musst du überall suchen.$"
