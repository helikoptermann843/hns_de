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
	.string "Fliegt hoch hinaus, meine\n"
	.string "herrlichen Vogel-Pokémon!$"

Route38_Text_BirdKeeperTobyBeaten:
	.string "Ich wünschte, ich könnte mich\n"
	.string "selbst in die Lüfte erheben.$"

Route38_Text_BirdKeeperTobyAfter:
	.string "Ich habe vor, in Anemonia City\n"
	.string "zu trainieren und meinen Pokémon\l"
	.string "das Fliegen beizubringen.$"

Route38_Text_SchoolboyChad1Seen:
	.string "Jetzt probiere ich gleich mal etwas aus,\n"
	.string "das ich heute gelernt habe.$"

Route38_Text_SchoolboyChad1Beaten:
	.string "Ich fürchte, ich habe noch nicht\n"
	.string "genug gelernt.$"

Route38_Text_SchoolboyChadAfter:
	.string "Bei so vielen Klassenarbeiten bleibt\n"
	.string "mir nicht viel Zeit für Pokémon.\p"
	.string "Wenn ich also mal Zeit zum Spielen habe,\n"
	.string "bin ich mit voller Konzentration dabei.$"

Route38_Text_ChadRegister:
    .string "Ich muss so viele Prüfungen\n"
    .string "schreiben, dass ich kaum Zeit\l"
    .string "für Pokémon habe.\p"
    .string "Darum konzentriere ich mich\n"
    .string "voll und ganz, wenn ich einmal\l"
    .string "spielen kann.$"

Route38_Text_ChadRematchIntro:
	.string "Jetzt probiere ich gleich mal etwas aus,\n"
	.string "das ich heute gelernt habe.$"

Route38_Text_ChadRematchDefeat:
	.string "Ich fürchte, ich habe noch nicht genug\n"
	.string "gelernt.$"

Route38_Text_ChadPostRematch:
    .string "Ich muss so viele Prüfungen\n"
    .string "schreiben, dass ich kaum Zeit\l"
    .string "für Pokémon habe.\p"
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
	.string "Ich will dir auch etwas verraten!\p"
	.string "Die Milch von der Kuhmuh-Farm ist\n"
	.string "berühmt für ihren Geschmack!$"

Route38_Text_BeautyValerieSeen:
	.string "Hallöchen!\n"
	.string "Du bist doch bestimmt so nett\p"
	.string "und lässt mich mal sehen, welche\n"
	.string "Pokémon du dabeihast, oder?$"

Route38_Text_BeautyValerieBeaten:
	.string "Ich bin froh, dass ich\n"
	.string "dein Pokémon-Team sehen durfte!$"

Route38_Text_BeautyValerieAfter:
	.string "Wann immer ich Pokémon sehe, fühle ich\n"
	.string "mich so… entspannt.\l"
	.string "Da wird mir gleich ganz warm ums Herz.$"

Route38_Text_SailorHarrySeen:
	.string "Ich habe die ganze Welt bereist.\n"
	.string "Deswegen kenne ich alle Pokémon-Arten!$"

Route38_Text_SailorHarryBeaten:
	.string "Deine Fähigkeiten\n"
	.string "sind Weltklasse!$"

Route38_Text_SailorHarryAfter:
	.string "Alle möglichen Menschen in\n"
	.string "allen möglichen Ländern leben glücklich\l"
	.string "zusammen mit den Pokémon.$"

Route38_Text_BeautyOliviaSeen:
	.string "Meine Pokémon und Ich\n"
	.string "sind wunderschön, nicht wahr?$"

Route38_Text_BeautyOliviaBeaten:
	.string "Wir trinken täglich Kuhmuh-Milch.$"

Route38_Text_BeautyOliviaAfter:
	.string "Kuhmuh-Milch ist gut für\n"
	.string "Schönheit und Gesundheit.\p"
	.string "Doch leider wird sie nur\n"
	.string "flaschenweise verkauft.$"

Route38_Text_Sign:
	.string "Route 38\p"
	.string "Oliviana City - Teak City$"

Route38_Text_TrainerTips:
	.string "Tipps für Trainer\p"
	.string "Wenn du die Entwicklung eines Pokémon\n"
	.string "stoppen willst, musst du den B-Knopf\l"
	.string "drücken, während es sich entwickeln\l"
	.string "will.\p"
	.string "Das Pokémon entwickelt sich dann nicht.\n"
	.string "Das nennt man Entwicklungsstopp.$"


Route38_Text_WaterSign:
	.string "Schwimmen und Angeln verboten.\p"
	.string "Wasser nur für Landwirtschaft.\p"
	.string "Bürgermeister von Teak City$"

Route38_Text_DanaRegister:
    .string "Ich kenne etwas wirklich Gutes!\p"
    .string "Die Milch der Muhmuh-Farm ist\n"
    .string "für ihren Geschmack berühmt.$"

Route38_Text_DanaRematchIntro:
    .string "Du scheinst dich gut mit\n"
    .string "Pokémon auszukennen.\p"
    .string "Wenn das so ist, könntest du\n"
    .string "mir vielleicht ein paar Tipps geben?$"

Route38_Text_DanaRematchDefeat:
	.string "Ich verstehe. So kämpfst du also.$"

Route38_Text_DanaPostRematch:
    .string "Ich kenne etwas wirklich Gutes!\p"
    .string "Die Milch der Muhmuh-Farm ist\n"
    .string "für ihren Geschmack berühmt.$"

Route38_Text_DanaHasItem:
    .string "Hey! Ich habe etwas\n"
    .string "Interessantes gefunden!\p"
    .string "Hier, du kannst es haben!$"

Route38_Text_DanaGaveItem:
    .string "Ich sage dir Bescheid, wenn ich\n"
    .string "noch etwas finde!$"

Route38_Text_DanaNoRoom:
    .string "Hm, dein Beutel ist voll.\p"
    .string "Komm wieder, wenn du Platz hast.$"
