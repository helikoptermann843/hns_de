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
	.string "Hinaufklettern kannst du die\n"
	.string "Stufen leider nicht.\p"
	.string "Du kannst sie aber hinabspringen\n"
	.string "und als Abkürzung benutzen!$"

Gate_Route29_Route46_Text_Youngster:
	.string "Von nun an wirst du noch einigen\n"
	.string "anderen Pokémon begegnen.\p"
	.string "Wenn du alle schnappen möchtest,\n"
	.string "musst du überall nach ihnen suchen!$"
