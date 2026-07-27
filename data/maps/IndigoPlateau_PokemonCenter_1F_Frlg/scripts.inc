IndigoPlateau_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

IndigoPlateau_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_INDIGO_PLATEAU
	specialvar VAR_RESULT, IsNationalPokedexEnabled
	call_if_eq VAR_RESULT, TRUE, IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor
	end

IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor::
	goto_if_set FLAG_IS_CHAMPION, Common_EventScript_NopReturn
	setobjectxyperm LOCALID_LEAGUE_DOOR_GUARD, 4, 2
	return

IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard::
	lock
	faceplayer
	specialvar VAR_RESULT, IsNationalPokedexEnabled
	goto_if_eq VAR_RESULT, TRUE, IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
	release
	end

IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete::
	goto_if_set FLAG_IS_CHAMPION, IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete
	msgbox IndigoPlateau_PokemonCenter_1F_Text_LoreleiIsAbsentClosedForTimeBeing
	release
	end

IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete::
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
	release
	end

IndigoPlateau_PokemonCenter_1F_EventScript_GymGuy::
	msgbox IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice, MSGBOX_NPC
	end

IndigoPlateau_PokemonCenter_1F_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart IndigoPlateau_PokemonCenter_1F_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
IndigoPlateau_PokemonCenter_1F_Items::
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_MAX_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
	release
	end

IndigoPlateau_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice::
	.string "Hi! Ich arbeite in einem POKéMON-\n"
	.string "SUPERMARKT.\p"
	.string "Wir verkaufen viele praktische\n"
	.string "Dinge!\p"
	.string "Du findest unseren Laden in\n"
	.string "VERTANIA CITY.\p"
	.string "Am besten gebe ich dir ein\n"
	.string "Werbegeschenk! Hier, bitte!$"

IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck::
	.string "Laufe hier weiter und du erreichst\n"
	.string "den WASSERWEG.\p"
	.string "Wenn du dann noch weiter läufst,\n"
	.string "erreichst du das RUINENTAL.$"

IndigoPlateau_PokemonCenter_1F_Text_LoreleiIsAbsentClosedForTimeBeing::
	.string "Es tut mir Leid, aber du hast deine\n"
	.string "Zeit verschwendet, hier\l"
	.string "herzukommen.\l"
	.string "LORELEI von den TOP VIER ist\l"
	.string "nicht zugegen, weißt du!\p"
	.string "Daher ist die POKéMON LIGA\n"
	.string "vorübergehend geschlossen.$"

IndigoPlateau_PokemonCenter_1F_Text_AgathaWhuppedUs::
	.string "AGATHEs GEIST-POKéMON\n"
	.string "sind erschreckend hartnäckig.\p"
	.string "Ich habe meine KAMPF-POKéMON\n"
	.string "bis zum Äußersten trainiert.\p"
	.string "Ich bin selbstbewusst zu AGATHE\n"
	.string "gegangen, aber sie hat uns mit\l"
	.string "Leichtigkeit besiegt.\l"
	.string "Die alte Dame ist auch leicht\l"
	.string "zu verärgern.\p"
	.string "Es bedarf nur einer Bagatelle und\n"
	.string "die Angst einflößende Dame\l"
	.string "legt los.$"

IndigoPlateau_PokemonCenter_1F_Text_LancesCousinGymLeaderFarAway::
	.string "Vielleicht liegt eine Mitgliedschaft\n"
	.string "bei den TOP VIER in den Genen.\p"
	.string "Ich habe gehört, dass SIEGFRIED\n"
	.string "einen Cousin hat, der irgendwo\l"
	.string "weit weg ARENALEITER ist.$"

