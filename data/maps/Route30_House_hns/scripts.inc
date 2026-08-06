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
	.string "Folgst du dem Weg nach Norden,\n"
	.string "erreichst du Mr. Pokémons Haus.\p"
	.string "Doch zuvor erzähle ich dir noch\n"
	.string "etwas über Beeren!\p"
	.string "Pokémon werden gesünder, wenn\n"
	.string "sie Beeren fressen.\p"
	.string "Sie fressen sogar Beeren, die sie\n"
	.string "im Kampf tragen.\p"
	.string "Aus Beeren macht Kurt in Azalea\n"
	.string "City außerdem Bälle.\p"
	.string "Hier, ich teile mit dir!$"

Route30_BerryHouse_Text_CheckTrees:
	.string "Suche in Bäumen\n"
	.string "nach Beeren. Sie fallen einfach\l"
	.string "herunter.$"
