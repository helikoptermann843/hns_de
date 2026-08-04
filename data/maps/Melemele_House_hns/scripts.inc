Melemele_House_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Melemele_House_hns_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Melemele_House_hns_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_MELEMELE_ISLE_HNS
	end


Alola_Melemele_Pokecenter_AceTrainer::
	lock
	faceplayer
	msgbox Alola_Melemele_Pokecenter_AceTrainer_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Alola_Melemele_Pokecenter_BugCatcher::
	lock
	faceplayer
	msgbox Alola_Melemele_Pokecenter_BugCatcher_Text_0, MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement Melemele_PokecenterGrubbin, Alola_Melemele_Pokecenter_BugCatcher_Movement_0
	waitmovement 0
	waitse
	playmoncry SPECIES_AIPOM, 0
	waitmoncry
	release
	end


Alola_Melemele_Pokecenter_Grubbin::
	lock
	faceplayer
	playmoncry SPECIES_AIPOM, 0
	msgbox Alola_Melemele_Pokecenter_Grubbin_Text_0, MSGBOX_AUTOCLOSE
	waitmoncry
	release
	end


Alola_Melemele_Pokecenter_BugCatcher_Movement_0:
	face_up
	emote_exclamation_mark
	step_end

Alola_Melemele_Pokecenter_AceTrainer_Text_0:
	.string "Hier gibt es jede Menge einzigartige\n"
	.string "Pokémon!\p"
	.string "Ich fange sie alle!$"

Alola_Melemele_Pokecenter_BugCatcher_Text_0:
	.string "Ich habe hier auf den Inseln ganz\n"
	.string "neue Pokémon entdeckt!\p"
	.string "Wie meinen neuen Freund Griffel\nhier!$"

Alola_Melemele_Pokecenter_Grubbin_Text_0:
	.string "Aiip!$"
