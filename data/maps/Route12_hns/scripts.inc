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
	.string "Du hast deinen ersten Schritt\n"
	.string "in KANTO gemacht.\p"
	.string "Sieh auf die KARTE in deinem COM.$"

Route12_Text_FisherMartinSeen:
	.string "Geduld ist das Zauberwort.\n"
	.string "Das gilt fürs Angeln und für Pokémon.$"

Route12_Text_FisherMartinBeaten:
	.string "Guaah!$"

Route12_Text_FisherMartinAfterBattle:
	.string "Ich bin wohl doch zu ungeduldig\n"
	.string "für das Angeln…$"

Route12_Text_FisherStephenSeen:
	.string "Solange ich beim Angeln meinem Radio\n"
	.string "lauschen kann, bin ich glücklich.$"

Route12_Text_FisherStephenBeaten:
	.string "Das blöde Radio beunruhigt mich!$"

Route12_Text_FisherStephenAfterBattle:
	.string "Wenn du gerade in Kanto bist, senden\n"
	.string "die Radiosender aus Johto ein Spezial-\l"
	.string "programm mit zusätzlichem Lokalteil!\p"
	.string "Äußerst praktisch und vor allem\n"
	.string "hörerfreundlich, findest du nicht?$"

Route12_Text_FisherBarneySeen:
	.string "Was ist in unserem alltäglichen\n"
	.string "Leben am wichtigsten?$"

Route12_Text_FisherBarneyBeaten:
	.string "Meine Antwort hörst du, wenn\n"
	.string "wir hier fertig sind!$"

Route12_Text_FisherBarneyAfterBattle:
	.string "Meiner Meinung nach ist Strom das\n"
	.string "Wichtigste in unserem Leben.\p"
	.string "Wenn dem nicht so wäre, hätten die\n"
	.string "Leute nicht so einen Aufstand\l"
	.string "gemacht, als das Kraftwerk ausfiel.$"

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
	.string "Erinnerst du dich noch?!?$"

Route12_Text_FisherKyleBeaten:
	.string "Du erinnerst dich?!?$"

Route12_Text_FisherKyleAfterBattle:
	.string "Dieses Reißen an der Angel, wenn\n"
	.string "ein Pokémon angebissen hat…\l"
	.string "Das ist das Schönste für einen Angler!$"

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

