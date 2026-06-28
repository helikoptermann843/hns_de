OldaleTown_House2_MapScripts::
	.byte 0

OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
	end

OldaleTown_House2_EventScript_Man::
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
	end

OldaleTown_House2_Text_PokemonLevelUp:
	.string "Während eines Kampfes können POKéMON\n"
	.string "manchmal einen Level dazugewinnen und\l"
	.string "stärker werden.$"

OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
	.string "Sobald deine Team-POKéMON stärker\n"
	.string "geworden sind, kannst du auch andere\l"
	.string "Orte bereisen.$"

