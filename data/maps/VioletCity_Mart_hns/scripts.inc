VioletCity_Mart_hns_MapScripts::
	.byte 0

VioletCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

VioletCity_Mart_EventScript_Granny::
	lock
	faceplayer
	msgbox VioletCity_Mart_Text_Granny, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_Mart_EventScript_Rocker::
	lock
	faceplayer
	msgbox VioletCity_Mart_Text_CooltrainerM, MSGBOX_DEFAULT
	closemessage
	release
	end
	
VioletCity_Mart_Text_Granny:
	.string "Fängst du ein Pokémon,\n"
	.string "ist es vermutlich sehr schwach.\p"
	.string "Aber letztendlich wird es wachsen\n"
	.string "und stärker werden.\p"
	.string "Es ist wichtig,\n"
	.string "Pokémon sehr viel Liebe zu schenken.$"

VioletCity_Mart_Text_CooltrainerM:
	.string "Pokémon können Items wie\n"
	.string "TRANK und GEGENGIFT tragen.\p"
	.string "Aber offenbar sind sie nicht in der\n"
	.string "Lage, künstlich hergestellte Items\l"
	.string "selbst zu benutzen.$"
