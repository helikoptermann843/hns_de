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
	.string "Ein beeindruckendes Gebäude, was?\n"
	.string "Das ist der Radioturm von Kanto!$"

LavenderTown_Text_Teacher:
	.string "In Kanto laufen viele gute\n"
	.string "Sendungen im Radio!$"

LavenderTown_Text_Gramps:
	.string "Die Leute kommen von überallher,\n"
	.string "um hier den Seelen dahingegangener\l"
	.string "Pokémon Respekt zu erweisen.$"

LavenderTown_Text_Youngster:
	.string "Um schlafende Pokémon zu wecken, ist\n"
	.string "eine Pokéflöte immer noch am besten!\l"
	.string "Jeder Trainer sollte das wissen!$"

LavenderTown_Text_Sign:
	.string "Lavandia\n"
	.string "Stadt des gewissen Etwas$"

LavenderTown_Text_KantoRadioStationSign:
	.string "Kanto Radio\p"
	.string "Deine liebsten Programme,\n"
	.string "Rund um die Uhr!$"

LavenderTown_Text_VolunteerPokemonHouseSign:
	.string "Ehrenamtlich betriebenes\n"
	.string "Waisenhaus für Pokémon\n$"

LavenderTown_Text_SoulHouseSign:
	.string "Haus der Seelen\p"
	.string "Mögen die Seelen der Pokémon\n"
	.string "in Frieden ruhen$"
