LavenderTown_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_EventScript_CityEnter
	.byte 0

LavenderTown_EventScript_CityEnter::
	setflag FLAG_VISITED_LAVENDER_TOWN
	end

LavenderTown_EventScript_PokefanM::
	msgbox LavenderTown_Text_PokefanM, MSGBOX_NPC
	end

LavenderTown_EventScript_Teacher::
	msgbox LavenderTown_Text_Teacher, MSGBOX_NPC
	end

LavenderTown_EventScript_Gramps::
	msgbox LavenderTown_Text_Gramps, MSGBOX_NPC
	end

LavenderTown_EventScript_Youngster::
	msgbox LavenderTown_Text_Youngster, MSGBOX_NPC
	end

LavenderTown_EventScript_TownSign::
	msgbox LavenderTown_Text_Sign, MSGBOX_SIGN
	end

LavenderTown_EventScript_RadioTowerSign::
	msgbox LavenderTown_Text_KantoRadioStationSign, MSGBOX_SIGN
	end

LavenderTown_EventScript_VolunteerSign::
	msgbox LavenderTown_Text_VolunteerPokemonHouseSign, MSGBOX_SIGN
	end

LavenderTown_EventScript_SoulHouseSign::
	msgbox LavenderTown_Text_SoulHouseSign, MSGBOX_SIGN
	end

LavenderTown_Text_PokefanM:
	.string "Ein recht beein-\n"
	.string "druckendes Gebäude, nicht?\p"
	.string "Das ist der RADIOTURM von KANTO.$"

LavenderTown_Text_Teacher:
	.string "In KANTO werden\n"
	.string "viele, gute Radioprogramme gesendet.$"

LavenderTown_Text_Gramps:
	.string "Die Leute kommen von überall her,\p"
	.string "um den Seelen\n"
	.string "dahingegangener Pokémon Respekt zu\l"
	.string "erweisen.$"

LavenderTown_Text_Youngster:
	.string "Mit einer -\n"
	.string "FLÖTE weckst du schlafende Pokémon.\p"
	.string "Jeder Trainer muss das wissen!$"

LavenderTown_Text_Sign:
	.string "LAVANDIA\p"
	.string "Die Liebliche Lilafarbene Stadt$"

LavenderTown_Text_KantoRadioStationSign:
	.string "KANTO RADIO STATION\p"
	.string "Your Favorite Programs On-Air\n"
	.string "Around the Clock!$"

LavenderTown_Text_VolunteerPokemonHouseSign:
	.string "WAISENHAUS für Pokémon von LAVANDIA$"

LavenderTown_Text_SoulHouseSign:
	.string "HAUS DER SEELEN\p"
	.string "Mögen die Seelen der Pokémon\n"
	.string "in Frieden ruhen$"
