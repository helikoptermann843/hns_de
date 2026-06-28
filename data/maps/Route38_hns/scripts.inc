Route38_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route38_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route38_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route38_EventScript_Toby::
	trainerbattle_single TRAINER_TOBY_HNS, Route38_Text_BirdKeeperTobySeen, Route38_Text_BirdKeeperTobyBeaten
	msgbox Route38_Text_BirdKeeperTobyAfter, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_Chad::
	trainerbattle_single TRAINER_CHAD_HNS, Route38_Text_SchoolboyChad1Seen, Route38_Text_SchoolboyChad1Beaten, Route38_EventScript_RegisterChad
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route38_EventScript_RematchChad
	msgbox Route38_Text_SchoolboyChadAfter, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_RegisterChad::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route38_Text_ChadRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CHAD_HNS
	release
	end

Route38_EventScript_RematchChad::
	trainerbattle_rematch TRAINER_CHAD_HNS, Route38_Text_ChadRematchIntro, Route38_Text_ChadRematchDefeat
	msgbox Route38_Text_ChadPostRematch, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_Dana::
	trainerbattle_single TRAINER_DANA_HNS, Route38_Text_LassDana1Seen, Route38_Text_LassDana1Beaten, Route38_EventScript_RegisterDana
	goto_if_set FLAG_DANA_HAS_ITEM_HNS, Route38_EventScript_DanaGiveItem
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route38_EventScript_RematchDana
	msgbox Route38_Text_LassDanaAfter, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_RegisterDana::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route38_Text_DanaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_DANA_HNS
	release
	end

Route38_EventScript_RematchDana::
	trainerbattle_rematch TRAINER_DANA_HNS, Route38_Text_DanaRematchIntro, Route38_Text_DanaRematchDefeat
	msgbox Route38_Text_DanaPostRematch, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_DanaGiveItem::
	msgbox Route38_Text_DanaHasItem, MSGBOX_DEFAULT
	giveitem VAR_DANA_ITEM_HNS
	goto_if_eq VAR_RESULT, FALSE, Route38_EventScript_DanaNoRoom
	clearflag FLAG_DANA_HAS_ITEM_HNS
	msgbox Route38_Text_DanaGaveItem, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_DanaNoRoom::
	msgbox Route38_Text_DanaNoRoom, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_Valerie::
	trainerbattle_single TRAINER_VALERIE_HNS, Route38_Text_BeautyValerieSeen, Route38_Text_BeautyValerieBeaten
	msgbox Route38_Text_BeautyValerieAfter, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_Harry::
	trainerbattle_single TRAINER_HARRY_HNS, Route38_Text_SailorHarrySeen, Route38_Text_SailorHarryBeaten
	msgbox Route38_Text_SailorHarryAfter, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_Olivia::
	trainerbattle_single TRAINER_OLIVIA_HNS, Route38_Text_BeautyOliviaSeen, Route38_Text_BeautyOliviaBeaten
	msgbox Route38_Text_BeautyOliviaAfter, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_Sign1::
	lock
	msgbox Route38_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end

Route38_EventScript_Sign2::
	lock
	msgbox Route38_Text_WaterSign, MSGBOX_SIGN
	closemessage
	release
	end

Route38_EventScript_Item_LaxIncense::
	finditem ITEM_LAX_INCENSE
	end

Route38_Text_BirdKeeperTobySeen:
	.string "Fliege hoch in die\n"
	.string "Luft, mein herrliches Vogel-Pokémon!$"

Route38_Text_BirdKeeperTobyBeaten:
	.string "Ich fühle mich,\n"
	.string "als würde ich mich selbst in die Lüfte\l"
	.string "erheben.$"

Route38_Text_BirdKeeperTobyAfter:
	.string "Ich will in Anemonia City trainieren,\n"
	.string "damit meine Pokémon Fliegen lernen.$"

Route38_Text_SchoolboyChad1Seen:
	.string "Jetzt probiere ich\n"
	.string "etwas aus, das ich heute gelernt habe.$"

Route38_Text_SchoolboyChad1Beaten:
	.string "Ich fürchte, ich\n"
	.string "habe noch nicht genug gelernt.$"

Route38_Text_SchoolboyChadAfter:
	.string "Ich muss so viele Tests\n"
	.string "schreiben, da bleibt kaum\l"
	.string "Zeit für Pokémon.\p"
	.string "Wenn ich dann spiele,\n"
	.string "konzentriere ich mich voll.$"

Route38_Text_ChadRegister:
    .string "Ich muss so viele Prüfungen\n"
    .string "schreiben, dass ich kaum Zeit\l"
    .string "für POKéMON habe.\p"
    .string "Darum konzentriere ich mich\n"
    .string "voll und ganz, wenn ich einmal\l"
    .string "spielen kann.$"

Route38_Text_ChadRematchIntro:
    .string "Ich zeige dir etwas, das ich\n"
    .string "heute gelernt habe.$"

Route38_Text_ChadRematchDefeat:
    .string "Ich habe wohl nicht genug\n"
    .string "gelernt.$"

Route38_Text_ChadPostRematch:
    .string "Ich muss so viele Prüfungen\n"
    .string "schreiben, dass ich kaum Zeit\l"
    .string "für POKéMON habe.\p"
    .string "Darum konzentriere ich mich\n"
    .string "voll und ganz, wenn ich einmal\l"
    .string "spielen kann.$"

Route38_Text_LassDana1Seen:
	.string "Du scheinst gut mit\n"
	.string "Pokémon umgehen zu können.\p"
	.string "Wenn ja, gibst du mir\n"
	.string "ein paar Tipps?$"

Route38_Text_LassDana1Beaten:
	.string "Ich verstehe. So kämpfst du also.$"

Route38_Text_LassDanaAfter:
	.string "Ich weiß etwas Tolles!\p"
	.string "Die Milch der KUHMUH-FARM\n"
	.string "ist für ihren Geschmack berühmt.$"

Route38_Text_BeautyValerieSeen:
	.string "Hallo! Du bist bestimmt so nett\p"
	.string "und zeigst mir deine Pokémon?$"

Route38_Text_BeautyValerieBeaten:
	.string "Ich bin froh, dass\n"
	.string "ich deine Pokémon sehen durfte!$"

Route38_Text_BeautyValerieAfter:
	.string "Wenn ich Pokémon sehe,\n"
	.string "beruhigt das meine Nerven.$"

Route38_Text_SailorHarrySeen:
	.string "Ich war im Ausland. Deswegen\p"
	.string "kenne ich alle Pokémon-Arten!$"

Route38_Text_SailorHarryBeaten:
	.string "Deine Fähigkeiten\n"
	.string "sind Spitzenklasse!$"

Route38_Text_SailorHarryAfter:
	.string "Überall auf der Welt leben\n"
	.string "Menschen glücklich mit\l"
	.string "Pokémon zusammen.$"

Route38_Text_BeautyOliviaSeen:
	.string "Meine Pokémon und\n"
	.string "ich sind wunderschön, nicht wahr?$"

Route38_Text_BeautyOliviaBeaten:
	.string "Wir trinken täglich KUHMUH-MILCH.$"

Route38_Text_BeautyOliviaAfter:
	.string "KUHMUH-MILCH ist gut für\n"
	.string "Schönheit und Gesundheit,\p"
	.string "doch leider wird sie nur\n"
	.string "flaschenweise verkauft.$"

Route38_Text_Sign:
	.string "ROUTE 38\p"
	.string "OLIVIANA CITY - TEAK CITY$"

Route38_Text_TrainerTips:
	.string "TIPPS für TRAINER Wenn sich ein\p"
	.string "Pokémon weiterentwickelt, kannst\p"
	.string "du diesen Prozess aufhalten.\p"
	.string "Drücke während\n"
	.string "der Entwicklung den B-Knopf.\p"
	.string "So wird das Pokémon\n"
	.string "erschreckt und es bricht die\l"
	.string "Entwicklung ab.$"


Route38_Text_WaterSign:
	.string "ROUTE 38\p"
	.string "OLIVIANA CITY - TEAK CITY$"

Route38_Text_DanaRegister:
    .string "Ich kenne etwas wirklich Gutes!\p"
    .string "Die Milch der MUHMUH-FARM ist\n"
    .string "für ihren Geschmack berühmt.$"

Route38_Text_DanaRematchIntro:
    .string "Du scheinst dich gut mit\n"
    .string "POKéMON auszukennen.\p"
    .string "Wenn das so ist, könntest du\n"
    .string "mir vielleicht ein paar Tipps geben?$"

Route38_Text_DanaRematchDefeat:
    .string "Ich verstehe. So kann man also\n"
    .string "kämpfen.$"

Route38_Text_DanaPostRematch:
    .string "Ich kenne etwas wirklich Gutes!\p"
    .string "Die Milch der MUHMUH-FARM ist\n"
    .string "für ihren Geschmack berühmt.$"

Route38_Text_DanaHasItem:
    .string "Hey! Ich habe etwas\n"
    .string "Interessantes gefunden!\p"
    .string "Hier, du kannst es haben!$"

Route38_Text_DanaGaveItem:
    .string "Ich sage dir Bescheid, wenn ich\n"
    .string "noch etwas finde!$"

Route38_Text_DanaNoRoom:
    .string "Hm, dein BEUTEL ist voll.\p"
    .string "Komm wieder, wenn du Platz hast.$"
