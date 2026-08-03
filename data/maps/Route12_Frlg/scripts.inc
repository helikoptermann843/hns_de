Route12_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route12_OnResume
	.byte 0

Route12_OnResume::
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route12_EventScript_TryRemoveSnorlax
	end

Route12_EventScript_TryRemoveSnorlax::
	removeobject VAR_LAST_TALKED
	return

Route12_EventScript_Snorlax::
	lock
	faceplayer
	goto_if_unset FLAG_GOT_POKE_FLUTE, Route12_EventScript_SnorlaxNoPokeFlute
	msgbox Text_WantToUsePokeFlute, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route12_EventScript_DontUsePokeFlute
	call EventScript_AwakenSnorlax
	setwildbattle SPECIES_SNORLAX, 30
	waitse
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_HIDE_ROUTE_12_SNORLAX
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag FLAG_WOKE_UP_ROUTE_12_SNORLAX
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route12_EventScript_FoughtSnorlax
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route12_EventScript_FoughtSnorlax
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route12_EventScript_FoughtSnorlax
	release
	end

Route12_EventScript_DontUsePokeFlute::
	release
	end

Route12_EventScript_FoughtSnorlax::
	msgbox Text_SnorlaxReturnedToMountains
	release
	end

Route12_EventScript_SnorlaxNoPokeFlute::
	msgbox Route12_Text_MonSprawledOutInSlumber
	release
	end

Route12_EventScript_RouteSign::
	msgbox Route12_Text_RouteSign, MSGBOX_SIGN
	end

Route12_EventScript_FishingSign::
	msgbox Route12_Text_SportfishingArea, MSGBOX_SIGN
	end

Route12_Text_MonSprawledOutInSlumber::
	.string "Ein schlafendes Pokémon\n"
	.string "versperrt den Weg!$"

Text_SnorlaxWokeUp::
	.string "Relaxo ist aufgewacht!\p"
	.string "Es ist brummig und greift\n"
	.string "verschlafen an!$"

Text_SnorlaxReturnedToMountains::
	.string "Relaxo hat sich wieder beruhigt!\n"
	.string "Es gähnt und läuft in die Berge\l"
	.string "zurück!$"

Text_WantToUsePokeFlute::
	.string "Die Pokéflöte spielen?$"

Text_PlayedPokeFlute::
	.string "{PLAYER} spielt die Pokéflöte.$"

Route12_Text_NedIntro::
	.string "Cool!\n"
	.string "Mir ist etwas ins Netz gegangen!$"

Route12_Text_NedDefeat::
	.string "Mist!\n"
	.string "Bloß ein kleiner Fisch!$"

Route12_Text_NedPostBattle::
	.string "Irgendwann werde ich den großen\n"
	.string "Fang machen!$"

Route12_Text_ChipIntro::
	.string "Nur mit der Ruhe!\n"
	.string "Als Angler muss man geduldig sein!$"

Route12_Text_ChipDefeat::
	.string "Der ist mir entwischt!$"

Route12_Text_ChipPostBattle::
	.string "Hätte ich eine bessere Angel,\n"
	.string "würde ich bessere Pokémon fangen!$"

Route12_Text_JustinIntro::
	.string "Besitzt du einen Mondstein?$"

Route12_Text_JustinDefeat::
	.string "Aua!$"

Route12_Text_JustinPostBattle::
	.string "Wenn ich einen Mondstein hätte,\n"
	.string "könnten sich meine Pokémon\l"
	.string "weiterentwickeln!$"

Route12_Text_LucaIntro::
	.string "Elektrizität ist meine Stärke!$"

Route12_Text_LucaDefeat::
	.string "Stromkreis unterbrochen!$"

Route12_Text_LucaPostBattle::
	.string "Wasser leitet Elektrizität. Greife\n"
	.string "Wasser-Pokémon mit Elektrizität an!$"

Route12_Text_HankIntro::
	.string "Der Angelkönig gegen das Pokémon-\n"
	.string "Kind!$"

Route12_Text_HankDefeat::
	.string "Das war spitze!$"

Route12_Text_HankPostBattle::
	.string "Von Pokémon verstehst du sehr\n"
	.string "viel, doch ich bin der bessere\l"
	.string "Angler!$"

Route12_Text_ElliotIntro::
	.string "Eigentlich würde ich lieber\n"
	.string "arbeiten...$"

Route12_Text_ElliotDefeat::
	.string "Das war wahrlich kein\n"
	.string "Zuckerschlecken!$"

Route12_Text_ElliotPostBattle::
	.string "O.k., mit der Zeit gewöhnt man sich\n"
	.string "daran, zu verlieren!$"

Route12_Text_AndrewIntro::
	.string "Man weiß nie, was der nächste Fang\n"
	.string "sein wird!$"

Route12_Text_AndrewDefeat::
	.string "Ich habe verloren!$"

Route12_Text_AndrewPostBattle::
	.string "Ich fange immer Karpador. Doch\n"
	.string "sie sind so schwach!$"

Route12_Text_RouteSign::
	.string "Route 12\n"
	.string "Norden: Lavandia$"

Route12_Text_SportfishingArea::
	.string "Sportangel-Zone$"

Route12_Text_JesIntro::
	.string "Deniz: Falls ich gewinne, mache\n"
	.string "ich Sira einen Heiratsantrag!$"

Route12_Text_JesDefeat::
	.string "Deniz: Oh, Mist! Warum konntest du\n"
	.string "uns nicht gewinnen lassen?$"

Route12_Text_JesPostBattle::
	.string "Deniz: Oh, Sira, meine Liebste,\n"
	.string "verzeih mir!$"

Route12_Text_JesNotEnoughMons::
	.string "Deniz: Sira und ich werden für\n"
	.string "immer zusammen sein.\p"
	.string "Wir werden nicht kämpfen, ehe du\n"
	.string "nicht zwei Pokémon mitbringst.$"

Route12_Text_GiaIntro::
	.string "Sira: Heh, Deniz…\p"
	.string "wenn wir gewinnen, heiraten wir!$"

Route12_Text_GiaDefeat::
	.string "Sira: Aber warum nur?$"

Route12_Text_GiaPostBattle::
	.string "Sira: Deniz, du Dummerchen!\n"
	.string "Du hast es vermasselt!$"

Route12_Text_GiaNotEnoughMons::
	.string "Sira: Ich ertrage es nicht, ohne\n"
	.string "meinen Deniz zu kämpfen.\p"
	.string "Hast du nicht noch ein weiteres\n"
	.string "Pokémon?$"
