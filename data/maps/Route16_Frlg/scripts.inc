Route16_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route16_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, Route16_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route16_OnWarp
	.byte 0

Route16_OnResume::
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route16_EventScript_RemoveSnorlax
	end

Route16_EventScript_RemoveSnorlax::
	removeobject VAR_LAST_TALKED
	return

Route16_OnTransition::
	call_if_eq VAR_MAP_SCENE_ROUTE16, 1, Route16_OnTransitionCyclingRoad
	end

Route16_OnTransitionCyclingRoad::
	setflag FLAG_SYS_ON_CYCLING_ROAD
	return

Route16_OnWarp::
	map_script_2 VAR_MAP_SCENE_ROUTE16, 1, Route16_OnWarpCyclingRoad
	.2byte 0

Route16_OnWarpCyclingRoad::
	special ForcePlayerOntoBike
	end

Route16_EventScript_Snorlax::
	lock
	faceplayer
	goto_if_unset FLAG_GOT_POKE_FLUTE, Route16_EventScript_SnorlaxNoPokeFlute
	msgbox Text_WantToUsePokeFlute, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route16_EventScript_DontUsePokeFlute
	call EventScript_AwakenSnorlax
	setwildbattle SPECIES_SNORLAX, 30
	waitse
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_HIDE_ROUTE_16_SNORLAX
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route16_EventScript_FoughtSnorlax
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route16_EventScript_FoughtSnorlax
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route16_EventScript_FoughtSnorlax
	release
	end

Route16_EventScript_DontUsePokeFlute::
	release
	end

Route16_EventScript_FoughtSnorlax::
	msgbox Text_SnorlaxReturnedToMountains
	release
	end

Route16_EventScript_SnorlaxNoPokeFlute::
	msgbox Route16_Text_MonSprawledOutInSlumber
	release
	end

Route16_EventScript_CyclingRoadSign::
	msgbox Route16_Text_CyclingRoadSign, MSGBOX_SIGN
	end

Route16_EventScript_RouteSign::
	msgbox Route16_Text_RouteSign, MSGBOX_SIGN
	end

Route16_Text_LaoIntro::
	.string "Was willst du?$"

Route16_Text_LaoDefeat::
	.string "Wage ja nicht zu lachen!$"

Route16_Text_LaoPostBattle::
	.string "Wir lungern hier herum!\n"
	.string "Wie sieht es bei dir aus?$"

Route16_Text_KojiIntro::
	.string "Du besitzt ein schönes Fahrrad!\n"
	.string "Her damit!$"

Route16_Text_KojiDefeat::
	.string "K.o.!$"

Route16_Text_KojiPostBattle::
	.string "Na ja, vergiss es!\n"
	.string "Wer braucht schon ein Fahrrad?$"

Route16_Text_LukeIntro::
	.string "Lass uns spielen, Hasenfuß!$"

Route16_Text_LukeDefeat::
	.string "Du kleine Ratte!$"

Route16_Text_LukePostBattle::
	.string "Ich hasse es, zu verlieren!\n"
	.string "Mach, dass du wegkommst!$"

Route16_Text_HideoIntro::
	.string "Heh! Du hast mich angerempelt!$"

Route16_Text_HideoDefeat::
	.string "Rumms! Überrumpelt!$"

Route16_Text_HideoPostBattle::
	.string "Man kann über eine Küstenstraße\n"
	.string "von ORANIA CITY nach FUCHSANIA\l"
	.string "CITY gelangen.$"

Route16_Text_CamronIntro::
	.string "Ich bin furchtbar gemein und\n"
	.string "erfolgssüchtig!$"

Route16_Text_CamronDefeat::
	.string "Nein, nein, nein!$"

Route16_Text_CamronPostBattle::
	.string "Ich mag wilde Pokémon!\n"
	.string "Sie strotzen nur so vor Kraft!$"

Route16_Text_RubenIntro::
	.string "Ja, sicher!\n"
	.string "Ich mache dir Platz!$"

Route16_Text_RubenDefeat::
	.string "Treibe mich nicht in den Wahnsinn!$"

Route16_Text_RubenPostBattle::
	.string "Ich liebe es, andere mit meinen\n"
	.string "bissigen Pokémon zu schikanieren!$"

Route16_Text_MonSprawledOutInSlumber::
	.string "Ein schlafendes POKéMON versperrt\n"
	.string "den Weg!$"

Route16_Text_CyclingRoadSign::
	.string "RADWEG\n"
	.string "Gute Abfahrt!$"

Route16_Text_RouteSign::
	.string "ROUTE 16\n"
	.string "PRISMANIA CITY - FUCHSANIA CITY$"

Route16_Text_JedIntro::
	.string "Uwe: Unsere Liebe kennt keine\n"
	.string "Grenzen. Wir lieben uns und\l"
	.string "zeigen das!$"

Route16_Text_JedDefeat::
	.string "Uwe: Oh, nein! Meine Geliebte hat\n"
	.string "mich verlieren sehen.$"

Route16_Text_JedPostBattle::
	.string "Uwe: Hör zu, Lena! Du solltest\n"
	.string "dich weniger auf mich\l"
	.string "konzentrieren.$"

Route16_Text_JedNotEnoughMons::
	.string "UWE: Du hast nur ein POKéMON?\n"
	.string "Gibt es in deinem Herzen\l"
	.string "keine Liebe?$"

Route16_Text_LeaIntro::
	.string "Lena: Manchmal erschreckt es mich,\n"
	.string "wie intensiv unsere Liebe ist.$"

Route16_Text_LeaDefeat::
	.string "Lena: Oh! Aber Uwe sieht auch bei\n"
	.string "einer Niederlage cool aus!$"

Route16_Text_LeaPostBattle::
	.string "Lena: Äh, es tut mir Leid.\n"
	.string "Uwe ist so cool.$"

Route16_Text_LeaNotEnoughMons::
	.string "LENA: Oh, du hast keine zwei\n"
	.string "POKéMON bei dir?\p"
	.string "Fühlst du dich oder fühlt sich\n"
	.string "dein POKéMON nicht einsam?$"
