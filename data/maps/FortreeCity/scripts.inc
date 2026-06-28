FortreeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_OnResume
	.byte 0

FortreeCity_OnTransition:
	setflag FLAG_VISITED_FORTREE_CITY
	end

FortreeCity_OnResume:
	setstepcallback STEP_CB_FORTREE_BRIDGE
	end

FortreeCity_EventScript_Man::
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
	end

FortreeCity_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_WomanGymAccessible
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_WomanGymAccessible::
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_Girl::
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
	end

FortreeCity_EventScript_OldMan::
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
	end

FortreeCity_EventScript_Boy::
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
	end

FortreeCity_EventScript_GameboyKid::
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
	end

FortreeCity_EventScript_CitySign::
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
	end

FortreeCity_EventScript_GymSign::
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
	end

FortreeCity_EventScript_Kecleon::
	lock
	faceplayer
	checkitem ITEM_DEVON_SCOPE
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_EventScript_AskUseDevonScope
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_AskUseDevonScope::
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FortreeCity_EventScript_UseDevonScope
	release
	end

FortreeCity_EventScript_UseDevonScope::
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
	waitmovement 0
	waitse
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
	waitmovement 0
	removeobject VAR_LAST_TALKED
	setflag FLAG_KECLEON_FLED_FORTREE
	release
	end

FortreeCity_Movement_KecleonFlee:
	walk_right
	step_end

FortreeCity_Text_SawGiganticPokemonInSky:
	.string "Niemand glaubt mir. Aber ich habe\n"
	.string "wirklich ein riesiges POKéMON am\l"
	.string "Himmel gesehen!\p"
	.string "Als es Richtung ROUTE 131 flog, schien\n"
	.string "es sich zu winden.\p"
	.string "Schnüffel…\n"
	.string "Äh… Du, uh… riechst angesengt.\p"
	.string "Warst du auf einem Vulkan oder so?$"

FortreeCity_Text_SomethingBlockingGym:
	.string "Ich wollte zur POKéMON ARENA, aber\n"
	.string "irgendetwas blockiert den Weg.\p"
	.string "Und das, nachdem ich auf der ROUTE 120\n"
	.string "so fleißig trainiert habe…$"

FortreeCity_Text_ThisTimeIllBeatWinona:
	.string "Dieses POKéMON ist mein ganzer Stolz!\n"
	.string "Diesmal werde ich WIBKE besiegen!$"

FortreeCity_Text_TreesGrowByDrinkingRainwater:
	.string "Der Boden nimmt das Regenwasser auf,\n"
	.string "die Bäume trinken es und wachsen…\p"
	.string "Unser BAUMHAUSEN CITY existiert, weil\n"
	.string "es genügend Wasser und Boden gibt.$"

FortreeCity_Text_EveryoneHealthyAndLively:
	.string "Die STADT besteht aus Häusern, die auf\n"
	.string "Bäumen gebaut sind.\p"
	.string "Aufgrund dieser Lebensweise ist jeder\n"
	.string "hier gesund und munter.\p"
	.string "Und auch ich fühle mich, als sei ich\n"
	.string "30 Jahre jünger geworden.$"

FortreeCity_Text_BugPokemonComeThroughWindow:
	.string "Auf Bäumen zu leben, ist klasse.\p"
	.string "Aber manchmal kommen KÄFER-POKéMON\n"
	.string "durch die Fenster herein.\l"
	.string "Das kann einen ganz schön erschrecken.$"

FortreeCity_Text_PokemonThatEvolveWhenTraded:
	.string "Manche POKéMON entwickeln sich, wenn\n"
	.string "man sie tauscht. Das habe ich\l"
	.string "jedenfalls gehört.$"

FortreeCity_Text_SomethingUnseeable:
	.string "Etwas Unsichtbares blockiert den Weg.$"

FortreeCity_Text_UnseeableUseDevonScope:
	.string "Etwas Unsichtbares blockiert den Weg.\n"
	.string "\p"
	.string "Willst du das DEVON-SCOPE einsetzen?$"

FortreeCity_Text_UsedDevonScopePokemonFled:
	.string "{PLAYER} setzt das DEVON-SCOPE ein.\p"
	.string "Ein unsichtbares POKéMON ist sichtbar\n"
	.string "geworden!\p"
	.string "Das erschrockene POKéMON flieht!$"

FortreeCity_Text_CitySign:
	.string "BAUMHAUSEN CITY\n"
	.string "“Die Stadt in den Baumkronen,\l"
	.string "verbrüdert mit der Natur.”$"

FortreeCity_Text_GymSign:
	.string "POKéMON ARENA von BAUMHAUSEN CITY\n"
	.string "LEITERIN: WIBKE\p"
	.string "“Die Vogel-Liebhaberin hebt ab zum\n"
	.string "Flug in die Welt.”$"

