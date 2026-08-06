CinnabarIsland_PokemonLab_ResearchRoom_Frlg_MapScripts::
	.byte 0

CinnabarIsland_PokemonLab_ResearchRoom_EventScript_MetronomeTutor::
	goto EventScript_MetronomeTutor
	end

CinnabarIsland_PokemonLab_ResearchRoom_EventScript_Scientist::
	msgbox CinnabarIsland_PokemonLab_ResearchRoom_Text_EeveeCanEvolveIntroThreeMons, MSGBOX_NPC
	end

CinnabarIsland_PokemonLab_ResearchRoom_EventScript_Computer::
	msgbox CinnabarIsland_PokemonLab_ResearchRoom_Text_LegendaryBirdEmail, MSGBOX_SIGN
	end

CinnabarIsland_PokemonLab_ResearchRoom_EventScript_AmberPipe::
	msgbox CinnabarIsland_PokemonLab_ResearchRoom_Text_AnAmberPipe, MSGBOX_SIGN
	end

CinnabarIsland_PokemonLab_ResearchRoom_Text_EeveeCanEvolveIntroThreeMons::
	.string "Evoli kann sich zu einem von drei\n"
	.string "verschiedenen Pokémon entwickeln.$"

CinnabarIsland_PokemonLab_ResearchRoom_Text_LegendaryBirdEmail::
	.string "Eine E-Mail ist angekommen!\p"
	.string "...\p"
	.string "Arktos, Zapdos und Lavados sind\n"
	.string "die drei legendären Vogel-Pokémon.\p"
	.string "Niemand weiß, in welcher Gegend sie\n"
	.string "leben.\p"
	.string "Wir werden als nächstes in der\n"
	.string "Höhle nahe Azuria City suchen.\p"
	.string "\n"
	.string "Von: Pokémon-Forschungsteam\p"
	.string "...$"

CinnabarIsland_PokemonLab_ResearchRoom_Text_AnAmberPipe::
	.string "Eine Pfeife aus Bernstein!$"

