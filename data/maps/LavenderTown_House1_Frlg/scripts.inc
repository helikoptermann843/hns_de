LavenderTown_House1_Frlg_MapScripts::
	.byte 0

LavenderTown_House1_EventScript_CooltrainerF::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_House1_EventScript_CooltrainerFGhostGone
	msgbox LavenderTown_House1_Text_RocketsKilledCubonesMother
	release
	end

LavenderTown_House1_EventScript_CooltrainerFGhostGone::
	msgbox LavenderTown_House1_Text_GhostOfPokemonTowerIsGone
	release
	end

LavenderTown_House1_EventScript_Cubone::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
	msgbox LavenderTown_House1_Text_Cubone
	waitmoncry
	release
	end

LavenderTown_House1_Text_Cubone::
	.string "Tragosso: Kiajahuu!$"

LavenderTown_House1_Text_RocketsKilledCubonesMother::
	.string "Ich hasse dieses furchtbare Team\n"
	.string "Rocket!\p"
	.string "Die arme Mutter des Tragosso!\p"
	.string "Sie konnte dem Team Rocket nicht\n"
	.string "entkommen!$"

LavenderTown_House1_Text_GhostOfPokemonTowerIsGone::
	.string "Der Geist im Pokémon-Turm ist\n"
	.string "verschwunden!\p"
	.string "Jemand muss seine rastlose Seele\n"
	.string "erlöst haben!$"

