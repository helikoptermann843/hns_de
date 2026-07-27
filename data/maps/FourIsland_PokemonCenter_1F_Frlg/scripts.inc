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
	.string "Wir tragen einen BODYSLAM-Kampf\n"
	.string "aus, um herauszufinden, wer als\l"
	.string "Erster umfällt.\l"
	.string "Wenn du mitmachst, wirst du\l"
	.string "allerdings wie ein Käfer\l"
	.string "zerquetscht…\l"
	.string "Soll ich BODYSLAM einem deiner\l"
	.string "POKéMON beibringen?$"

Text_BodySlamDeclined::
	.string "Komme wieder!\n"
	.string "Boing!$"

Text_BodySlamWhichMon::
	.string "Welches POKéMON soll\n"
	.string "BODYSLAM erlernen?$"

Text_BodySlamTaught::
	.string "Hoho!$"

FourIsland_House1_Text_FatMan::
	.string "それ　ぼよーん！\n"
	.string "おまえ　おもいなあー！$"

FourIsland_PokemonCenter_1F_Text_RareIceMonsInCave::
	.string "Dort gibt es eine seltene Art\n"
	.string "EIS-POKéMON in der Höhle.\p"
	.string "Viele Besucher kommen nur,\n"
	.string "um dieses POKéMON zu sehen.$"

FourIsland_PokemonCenter_1F_Text_DayCarePeopleFoundEggBefore::
	.string "Der DONNERORDEN erhöht die\n"
	.string "INITIATIVE deiner POKéMON!\p"
	.string "Außerdem können deine POKéMON nun\n"
	.string "jederzeit FLIEGEN einsetzen!\p"
	.string "Du bist ein besonderes Kind!\n"
	.string "Nimm das hier!$"

FourIsland_PokemonCenter_1F_Text_NewPokemonJournalHasntArrived::
	.string "TM34 ist SCHOCKWELLE!\p"
	.string "ELEKTRO-POKéMON können diese\n"
	.string "Attacke erlernen!$"

