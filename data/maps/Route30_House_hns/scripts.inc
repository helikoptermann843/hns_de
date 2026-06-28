Route30_House_hns_MapScripts::
	.byte 0

Route30_House_EventScript_BaldMan::
	lock
	faceplayer
	goto_if_set FLAG_GOT_BERRY_ROUTE_30_HOUSE, Route30_House_EventScript_BaldMan2
	msgbox Route30_BerryHouse_Text_MonEatBerries, MSGBOX_DEFAULT
	giveitem ITEM_CHERI_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	closemessage
	setflag FLAG_GOT_BERRY_ROUTE_30_HOUSE
Route30_House_EventScript_BaldMan2::
	msgbox Route30_BerryHouse_Text_CheckTrees, MSGBOX_DEFAULT
	closemessage
	release
	end

Route30_BerryHouse_Text_MonEatBerries:
	.string "Du weißt, dass Pokémon BEEREN fressen,\n"
	.string "oder?\p"
	.string "Die KP meiner Pokémon sind gestiegen,\n"
	.string "weil sie eine BEERE fraßen.\p"
	.string "Hier, ich teile mit dir!$"

Route30_BerryHouse_Text_CheckTrees:
	.string "Suche in Bäumen\n"
	.string "nach BEEREN. Sie fallen einfach\l"
	.string "herunter.$"
