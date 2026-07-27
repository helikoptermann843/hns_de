SevenIsland_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SevenIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
	end

SevenIsland_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

SevenIsland_PokemonCenter_1F_EventScript_OldMan::
	msgbox SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections, MSGBOX_NPC
	end

SevenIsland_PokemonCenter_1F_EventScript_Sailor::
	msgbox SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere, MSGBOX_NPC
	end

SevenIsland_PokemonCenter_1F_EventScript_Beauty::
	msgbox SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower, MSGBOX_NPC
	end

SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections::
	.string "Oh, ja, genau!\p"
	.string "Du tust mir Leid. Nein, wirklich!\n"
	.string "Du mühst dich immer so ab.\p"
	.string "Darum will ich dir einen Gefallen\n"
	.string "tun und schenke dir das!$"

SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere::
	.string "Ein redseliges Plappermaul wie du!\n"
	.string "Das ist wie für dich geschaffen!\p"
	.string "Ich brauche es nicht, da ich mich\n"
	.string "nicht um die anderen schere.\p"
	.string "In Ordnung! Jetzt muss ich aber\n"
	.string "wirklich gehen. Tschüss!$"

SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower::
	.string "O.K.! Ich gebe die gestohlene TM\n"
	.string "zurück!$"

