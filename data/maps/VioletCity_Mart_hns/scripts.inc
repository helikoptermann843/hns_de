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
	.string "Selbst ein schwaches Pokémon wird mit\n"
	.string "dem richtigen Training mal stark!\p"
	.string "Wichtig ist, dass du jedem Pokémon viel\n"
	.string "Zuneigung gibst!$"

VioletCity_Mart_Text_CooltrainerM:
	.string "Du kannst Pokémon auch Items wie\n"
	.string "Trank oder Gegengift geben.\l"
	.string "Aber offenbar wissen sie mit künstlich\l"
	.string "hergestellten Items nichts anzufangen.$"
