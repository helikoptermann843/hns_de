FourIsland_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FourIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_FOUR_ISLAND
	end

FourIsland_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

FourIsland_PokemonCenter_1F_EventScript_Man::
	msgbox FourIsland_PokemonCenter_1F_Text_RareIceMonsInCave, MSGBOX_NPC
	end

FourIsland_PokemonCenter_1F_EventScript_Woman::
	msgbox FourIsland_PokemonCenter_1F_Text_DayCarePeopleFoundEggBefore, MSGBOX_NPC
	end

FourIsland_PokemonCenter_1F_EventScript_Gentleman::
	msgbox FourIsland_PokemonCenter_1F_Text_NewPokemonJournalHasntArrived, MSGBOX_NPC
	end

@ The 5 texts below are supposed to be in FourIsland_House1
Text_BodySlamTeach::
	.string "Fertig?\n"
	.string "Boing!\p"
	.string "Wir tragen einen Bodyslam-Kampf\n"
	.string "aus, um herauszufinden, wer als\l"
	.string "Erster umfällt.\l"
	.string "Wenn du mitmachst, wirst du\l"
	.string "allerdings wie ein Käfer\l"
	.string "zerquetscht…\l"
	.string "Soll ich Bodyslam einem deiner\l"
	.string "Pokémon beibringen?$"

Text_BodySlamDeclined::
	.string "Komme wieder!\n"
	.string "Boing!$"

Text_BodySlamWhichMon::
	.string "Welches Pokémon soll\n"
	.string "Bodyslam erlernen?$"

Text_BodySlamTaught::
	.string "Hoho!$"

FourIsland_House1_Text_FatMan::
	.string "それ　ぼよーん！\n"
	.string "おまえ　おもいなあー！$"

FourIsland_PokemonCenter_1F_Text_RareIceMonsInCave::
	.string "Dort gibt es eine seltene Art\n"
	.string "Eis-Pokémon in der Höhle.\p"
	.string "Viele Besucher kommen nur,\n"
	.string "um dieses Pokémon zu sehen.$"

FourIsland_PokemonCenter_1F_Text_DayCarePeopleFoundEggBefore::
	.string "Der Donnerorden erhöht die\n"
	.string "Initiative deiner Pokémon!\p"
	.string "Außerdem können deine Pokémon nun\n"
	.string "jederzeit Fliegen einsetzen!\p"
	.string "Du bist ein besonderes Kind!\n"
	.string "Nimm das hier!$"

FourIsland_PokemonCenter_1F_Text_NewPokemonJournalHasntArrived::
	.string "TM34 ist Schockwelle!\p"
	.string "Elektro-Pokémon können diese\n"
	.string "Attacke erlernen!$"

