Route20_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route20_EventScript_ShellBell::
	finditem ITEM_SHELL_BELL
	end

Route20_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route20_EventScript_Nicole::
	trainerbattle_single TRAINER_NICOLE_HNS, Route20_Text_SwimmerfNicoleSeen, Route20_Text_SwimmerfNicoleBeaten, Route20_EventScript_RegisterNicole
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route20_EventScript_RematchNicole
	msgbox Route20_Text_SwimmerfNicoleAfterBattle, MSGBOX_AUTOCLOSE
	end

Route20_EventScript_RegisterNicole::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route20_Text_NicoleRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_NICOLE_HNS
	release
	end

Route20_EventScript_RematchNicole::
	trainerbattle_rematch TRAINER_NICOLE_HNS, Route20_Text_NicoleRematchIntro, Route20_Text_NicoleRematchDefeat
	msgbox Route20_Text_NicolePostRematch, MSGBOX_AUTOCLOSE
	end

Route20_EventScript_Lori::
	trainerbattle_single TRAINER_LORI_HNS, Route20_Text_SwimmerfLoriSeen, Route20_Text_SwimmerfLoriBeaten
	msgbox Route20_Text_SwimmerfLoriAfterBattle, MSGBOX_AUTOCLOSE
	end	

Route20_EventScript_Cameron::
	trainerbattle_single TRAINER_CAMERON_HNS, Route20_Text_SwimmermCameronSeen, Route20_Text_SwimmermCameronBeaten
	msgbox Route20_Text_SwimmermCameronAfterBattle, MSGBOX_AUTOCLOSE
	end	

Route20_EventScript_SeafoamSign::
	msgbox Route20_Text_SeafoamSign, MSGBOX_SIGN
	end

Route20_EventScript_GymSign::
	msgbox Route20_Text_CinnabarIsland_GymUnusedSign, MSGBOX_SIGN
	end

Route20_EventScript_Seel::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SEEL, CRY_MODE_NORMAL
	msgbox Route20_Text_Seel, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route20_EventScript_Dewgong::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DEWGONG, CRY_MODE_NORMAL
	msgbox Route20_Text_Dewgong, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route20_EventScript_Dennis::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox Route20_Text_Dennis, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route20_EventScript_Headlocker::
	lock
	faceplayer
	msgbox Route20_Text_Headlocker, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_ROUTE20_HEADLOCKER, DIR_SOUTH
	release
	end

Route20_Text_Dennis:

Route20_Text_Headlocker:
	.string "Auf dieser Route gibt es ein\n"
	.string "seltenes Pokémon.\p"
	.string "Manchmal trägt es auch einen\n"
	.string "seltenen Entwicklungsstein.\p"
	.string "Doppelt selten also!\p"
	.string "Ich muss meinen POKéDEX füllen,\n"
	.string "darum angle ich hier schon Stunden!$"

Route20_Text_Seel:
	.string "Jurob: Jurob Jurob!$"

Route20_Text_Dewgong:
	.string "Jugong: Goooong!$"

Route20_Text_SeafoamSign:
	.string "Seeschauminseln$"

Route20_Text_NicoleRegister:
	.string "Deine POKéMON schwimmen echt\n"
	.string "schnell! Gib mir deine Nummer!$"

Route20_Text_NicoleRematchIntro:
	.string "Vom vielen Schwimmen sind meine\n"
	.string "POKéMON stärker geworden! Los!$"

Route20_Text_NicoleRematchDefeat:
	.string "Schon wieder weggespült...$"

Route20_Text_NicolePostRematch:
	.string "Ob Sieg oder Niederlage, meine\n"
	.string "POKéMON und ich werden fitter!$"

Route20_Text_SwimmerfNicoleSeen:
	.string "Im Wasser fühle ich mich so leicht.$"

Route20_Text_SwimmerfNicoleBeaten:
	.string "Oh, nein!$"

Route20_Text_SwimmerfNicoleAfterBattle:
	.string "Beim Schwimmen wird der gesamte\p"
	.string "Körper trainiert.\n"
	.string "Schwimmen ist gesund.$"

Route20_Text_SwimmerfLoriSeen:
	.string "Du besitzt eine umwerfende Anzahl\n"
	.string "ARENA-ORDEN. Lass uns kämpfen!$"

Route20_Text_SwimmerfLoriBeaten:
	.string "Nein!$"

Route20_Text_SwimmerfLoriAfterBattle:
	.string "SURFER ist nicht mehr die\n"
	.string "einzige VM, die du im Wasser\l"
	.string "einsetzen kannst.$"

Route20_Text_SwimmermCameronSeen:
	.string "Ich denke es ist unmöglich, den\n"
	.string "ganzen Weg nach JOHTO zu schwimmen.$"

Route20_Text_SwimmermCameronBeaten:
	.string "Yippie!$"

Route20_Text_SwimmermCameronAfterBattle:
	.string "Ich schwimme auch\n"
	.string "in Teichen und Flüssen.$"

Route20_Text_CinnabarIsland_GymUnusedSign:
	.string "Was steht hier?\p"
	.string "Zinnoberinsel Leiter: Pyro$"

