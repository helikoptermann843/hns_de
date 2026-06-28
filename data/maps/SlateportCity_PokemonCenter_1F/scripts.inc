SlateportCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SlateportCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

SlateportCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_SLATEPORT_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_Sailor::
	msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
	end

SlateportCity_PokemonCenter_1F_EventScript_Woman::
	msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
	end

SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon:
	.string "Möchtest du einen Tipp?\p"
	.string "Ich sage dir, es ist wichtig, die\l"
	.string "unter-\n"
	.string "schiedlichsten POKéMON zu trainieren.\p"
	.string "\p"
	.string "Gleichmäßigkeit ist wichtig. Ein\n"
	.string "einzelnes starkes POKéMON reicht\l"
	.string "nicht.\p"
	.string "Wenn es vom Typ her Nachteile besitzt,\n"
	.string "kann auch ein sehr starkes POKéMON\l"
	.string "einen Kampf verlieren.$"

SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend:
	.string "Ich tausche mit Freunden POKéMON.\p"
	.string "Und wenn ein getauschtes POKéMON ein\n"
	.string "Item trägt, bin ich umso glücklicher!$"

