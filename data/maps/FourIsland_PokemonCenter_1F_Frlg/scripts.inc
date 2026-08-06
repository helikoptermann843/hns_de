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
	.string "Oh! Ein Pokémon-EI?\n"
	.string "… ich habe keine Ahnung!\p"
	.string "… oh, Moment, in der\n"
	.string "PENSION habe ich etwas darüber\l"
	.string "gehört.\l"
	.string "Sie sagten, sie haben früher\l"
	.string "schon Eier auf ihrem\l"
	.string "Grundstück gefunden!$"

FourIsland_PokemonCenter_1F_Text_NewPokemonJournalHasntArrived::
	.string "Was ist los?\p"
	.string "Die letzte Ausgabe vom Pokémon\n"
	.string "JOURNAL ist noch nicht auf dieser\l"
	.string "Insel angekommen?$"

