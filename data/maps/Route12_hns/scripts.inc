Route12_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route12_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route12_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route12_EventScript_Martin::
	trainerbattle_single TRAINER_MARTIN_HNS, Route12_Text_FisherMartinSeen, Route12_Text_FisherMartinBeaten
	msgbox Route12_Text_FisherMartinAfterBattle, MSGBOX_AUTOCLOSE
	end

Route12_EventScript_Stephen::
	trainerbattle_single TRAINER_STEPHEN_HNS, Route12_Text_FisherStephenSeen, Route12_Text_FisherStephenBeaten
	msgbox Route12_Text_FisherStephenAfterBattle, MSGBOX_AUTOCLOSE
	end

Route12_EventScript_Barney::
	trainerbattle_single TRAINER_BARNEY_HNS, Route12_Text_FisherBarneySeen, Route12_Text_FisherBarneyBeaten
	msgbox Route12_Text_FisherBarneyAfterBattle, MSGBOX_AUTOCLOSE
	end

Route12_EventScript_Kyle::
	trainerbattle_single TRAINER_KYLE_HNS, Route12_Text_FisherKyleSeen, Route12_Text_FisherKyleBeaten, Route12_EventScript_RegisterKyle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route12_EventScript_RematchKyle
	msgbox Route12_Text_FisherKyleAfterBattle, MSGBOX_AUTOCLOSE
	end

Route12_EventScript_RegisterKyle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route12_Text_KyleRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_KYLE_HNS
	release
	end

Route12_EventScript_RematchKyle::
	trainerbattle_rematch TRAINER_KYLE_HNS, Route12_Text_KyleRematchIntro, Route12_Text_KyleRematchDefeat
	msgbox Route12_Text_KylePostRematch, MSGBOX_AUTOCLOSE
	end

Route12_EventScript_NewFisher::
	msgbox Route12_Text_NewFisher, MSGBOX_NPC
	end

Route12_EventScript_Elixir::
	finditem ITEM_ELIXIR
	end

Route12_EventScript_Calcium::
	finditem ITEM_CALCIUM
	end

Route12_EventScript_Tentacruel::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TENTACRUEL, CRY_MODE_NORMAL
	msgbox Route41_Text_Tentacruel, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route12_Text_NewFisher:
	.string "Weißt du, was du gerade getan hast?\p"
	.string "Du hast deinen\n"
	.string "ersten Schritt in KANTO gemacht.\p"
	.string "Sieh auf die KARTE in deinem COM.$"

Route12_Text_FisherMartinSeen:
	.string "Geduld ist das\n"
	.string "Zauberwort. Das gilt fürs Angeln und\l"
	.string "für Pokémon.$"

Route12_Text_FisherMartinBeaten:
	.string "Guaah!$"

Route12_Text_FisherMartinAfterBattle:
	.string "Ich bin zu unge-\n"
	.string "duldig für das Angeln…$"

Route12_Text_FisherStephenSeen:
	.string "Wenn ich beim\n"
	.string "Angeln Radio hören kann, bin ich\l"
	.string "glücklich.$"

Route12_Text_FisherStephenBeaten:
	.string "Das blöde Radio beunruhigt mich!$"

Route12_Text_FisherStephenAfterBattle:
	.string "Kennst du schon die Radiosender\p"
	.string "aus KANTO? Es gibt viele hier.$"

Route12_Text_FisherBarneySeen:
	.string "Was ist in unserem\n"
	.string "alltäglichen Leben am wichtigsten?$"

Route12_Text_FisherBarneyBeaten:
	.string "Die Antwort gibt es demnächst!$"

Route12_Text_FisherBarneyAfterBattle:
	.string "Meiner Meinung nach ist Strom\p"
	.string "das Wichtigste in unserem Leben.\p"
	.string "Wenn dem nicht so wäre, hätten die\p"
	.string "Leute nicht so einen Aufstand\p"
	.string "fabriziert, als\n"
	.string "das KRAFTWERK außer Betrieb war.$"

Route12_Text_KyleRegister:
	.string "Ich werde mir das merken.\n"
	.string "Gib mir deine Nummer!$"

Route12_Text_KyleRematchIntro:
	.string "Hast du es vergessen?\n"
	.string "Lass sehen!$"

Route12_Text_KyleRematchDefeat:
	.string "Du hast nicht vergessen.$"

Route12_Text_KylePostRematch:
	.string "Der Nervenkitzel des Kampfes\n"
	.string "ist wie ein großer Fang!$"

Route12_Text_FisherKyleSeen:
	.string "Weißt du noch?$"

Route12_Text_FisherKyleBeaten:
	.string "Du erinnerst dich?$"

Route12_Text_FisherKyleAfterBattle:
	.string "Das Reißen an der ANGEL, wenn du\p"
	.string "ein Pokémon fangen möchtest…\p"
	.string "Das ist das\n"
	.string "Schönste für einen Angler wie mich.$"

Route12_EventScript_Sign::
	msgbox Route12_Text_Sign, MSGBOX_SIGN
	end

Route12_EventScript_FishingSign::
	msgbox Route12_Text_FishingSpotSign, MSGBOX_SIGN
	end

Route12_Text_Sign:
	.string "ROUTE 12 NORDEN: LAVANDIA$"

Route12_Text_FishingSpotSign:
	.string "ANGELPLATZ$"

