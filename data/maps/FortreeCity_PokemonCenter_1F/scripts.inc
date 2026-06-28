FortreeCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FortreeCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FORTREE_CITY
	end

FortreeCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_FORTREE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

FortreeCity_PokemonCenter_1F_EventScript_Gentleman::
	msgbox FortreeCity_PokemonCenter_1F_Text_GoToSafariZone, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_EventScript_Man::
	msgbox FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_EventScript_Boy::
	msgbox FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_Text_GoToSafariZone:
	.string "Na, Kindchen, arbeitest du an einem\n"
	.string "POKéDEX?\p"
	.string "Hmm… Ich an deiner Stelle würde mal\n"
	.string "die SAFARI-ZONE auf der ROUTE 121\l"
	.string "besuchen.$"

FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat:
	.string "Hast du schon mal eine\n"
	.string "STATISTIK geTAUSCHt?\p"
	.string "Sehr nützliche Einrichtung! Die\n"
	.string "Erfolge\n"
	.string "eines jeden TRAINERs werden dort ge-\l"
	.string "speichert und miteinander verglichen.\n"
	.string "\p"
	.string "Ich weiß zwar nicht, wie das passiert,\n"
	.string "aber es ist einfach irre. Und\l"
	.string "aufregend!$"

FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav:
	.string "Hey, du hast einen POKéNAV!\n"
	.string "Ich habe auch so einen.\p"
	.string "Kennst du schon das TRAINER/RUF-\n"
	.string "System des POKéNAVs?\p"
	.string "Wenn du das in Betrieb nimmst, kannst\n"
	.string "du jederzeit mit den registrierten\l"
	.string "TRAINERn sprechen.\p"
	.string "Außerdem kannst du sehen, welche\n"
	.string "TRAINER erneut gegen dich antreten\l"
	.string "möchten.\p"
	.string "Ist das nicht einfach super?\n"
	.string "Das muss man DEVON wirklich lassen!$"

