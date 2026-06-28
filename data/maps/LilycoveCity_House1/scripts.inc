LilycoveCity_House1_MapScripts::
	.byte 0

LilycoveCity_House1_EventScript_ExpertM::
	msgbox LilycoveCity_House1_Text_PokemonPartnersNotTools, MSGBOX_NPC
	end

LilycoveCity_House1_EventScript_Kecleon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
	msgbox LilycoveCity_House1_Text_Kecleon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycoveCity_House1_Text_PokemonPartnersNotTools:
	.string "POKéMON sind die Partner der Menschen.\n"
	.string "Sie sind nicht unser Spielzeug!\p"
	.string "Leider gibt es immer wieder Menschen,\n"
	.string "die das nicht begreifen.$"

LilycoveCity_House1_Text_Kecleon:
	.string "KECLEON: Ruroro?$"

