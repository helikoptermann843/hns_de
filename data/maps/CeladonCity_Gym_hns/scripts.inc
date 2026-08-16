CeladonCity_Gym_hns_MapScripts::
	.byte 0


CeladonCity_Gym_EventScript_Erika::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_CELADON_GYM, CeladonCity_Gym_EventScript_Erika_Defeated
	msgbox CeladonCity_Gym_Text_ErikaBeforeBattle, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ERIKA_HNS, CeladonCity_Gym_Text_ErikaBeaten
	message CeladonCity_Gym_Text_PlayerReceivedRainbowBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CeladonCity_Gym_Text_Erika_GiveTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_GIGA_DRAIN
	msgbox CeladonCity_Gym_Text_Erika_ExplainTM, MSGBOX_DEFAULT
	setflag FLAG_BADGE12_GET
	setflag FLAG_DEFEATED_CELADON_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 12
	call Common_EventScript_SetGymTrainers_hns
	clearflag FLAG_HIDE_FOUNTAIN_ERIKA
	closemessage
	release
	end

CeladonCity_Gym_EventScript_Erika_Defeated::
	msgbox CeladonCity_Gym_Text_ErikaAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

CeladonCity_Gym_Text_ErikaBeforeBattle:
	.string "Erika: Hallo… Schönes Wetter,\n"
	.string "nicht wahr? So angenehm…\p"
	.string "…Ich fürchte, ich könnte einnicken…\p"
	.string "Mein Name ist Erika. Ich bin die\n"
	.string "Leiterin der Prismania City Arena.\p"
	.string "…Oh? Ganz aus Johto, sagst du?\n"
	.string "Wie schön…\p"
	.string "Oh. Entschuldigung, ich habe nicht\n"
	.string "gemerkt, dass du mich herausfordern\l"
	.string "möchtest.\p"
	.string "Nun gut, aber ich werde nicht\n"
	.string "verlieren.$"

CeladonCity_Gym_Text_ErikaBeaten:
	.string "Erika: Ich gebe mich geschlagen.\n"
	.string "Du bist wirklich sehr stark…\p"
	.string "Hier, nimm diesen Farborden.$"

CeladonCity_Gym_Text_PlayerReceivedRainbowBadge:
	.string "{PLAYER} erhält den Farborden!$"

CeladonCity_Gym_Text_Erika_ExplainTM:
	.string "Die TM19 Gigasauger!\p"
	.string "Wenn eins deiner Pokémon diese Attacke\n"
	.string "einsetzt, erhält es selbst die Hälfte\l"
	.string "des Schadens, den sie angerichtet hat.\l"
	.string "Eine gar teuflische Attacke!$"

CeladonCity_Gym_Text_Erika_GiveTM:
	.string "Erika: Das war ein ganz ausgezeichneter\n"
	.string "Kampf! Ich bin beeindruckt!\p"
	.string "Dafür sollst du etwas ganz Besonderes\n"
	.string "bekommen!$"

CeladonCity_Gym_Text_ErikaAfterBattle:
	.string "Erika: Niemand verliert gerne…\p"
	.string "Aber es wirkt immer anspornend, wenn\n"
	.string "man einem starken Trainer begegnet.$"

CeladonCity_Gym_Text_ErikaRematch:
	.string "Erika: Oh, hallo.\p"
	.string "Was für eine Überraschung, Kanto-\n"
	.string "Champion!\p"
	.string "Es ist so schön, dich wiederzusehen.\p"
	.string "Deine Reise muss sehr aufregend\n"
	.string "gewesen sein.\p"
	.string "Auch Champions genießen eine\n"
	.string "Herausforderung.\p"
	.string "Willst du ein Rematch mit mir?$"

CeladonCity_Gym_Text_ErikaRematchDefeat:
	.string "Erika: Niemand verliert gerne…\p"
	.string "Aber es wirkt immer anspornend, wenn\n"
	.string "man einem starken Trainer begegnet.$"

CeladonCity_Gym_EventScript_Michelle::
	trainerbattle_single TRAINER_MICHELLE_HNS, CeladonCity_Gym_Text_LassMichelleSeen, CeladonCity_Gym_Text_LassMichelleBeaten
	msgbox CeladonCity_Gym_Text_LassMichelleAfter, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_LassMichelleSeen:
	.string "Was guckst du denn so?!\n"
	.string "Noch nie eine Pokémon-Arena\l"
	.string "nur mit Mädchen gesehen?$"

CeladonCity_Gym_Text_LassMichelleBeaten:
	.string "Nein! Das ist so erniedrigend!$"

CeladonCity_Gym_Text_LassMichelleAfter:
	.string "Ich war nur unvorsichtig!$"


CeladonCity_Gym_EventScript_Tanya::
	trainerbattle_single TRAINER_TANYA_HNS, CeladonCity_Gym_Text_PicnickerTanyaSeen, CeladonCity_Gym_Text_PicnickerTanyaBeaten
	msgbox CeladonCity_Gym_Text_PicnickerTanyaAfter, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_PicnickerTanyaSeen:
	.string "Oh, ein Kampf? Das ist gruselig,\n"
	.string "aber OK!$"

CeladonCity_Gym_Text_PicnickerTanyaBeaten:
	.string "Das war schon alles?$"

CeladonCity_Gym_Text_PicnickerTanyaAfter:
	.string "Oh, du hast viele Orden.\n"
	.string "Da kann ich nicht gewinnen!$"

CeladonCity_Gym_EventScript_Julia::
	trainerbattle_single TRAINER_JULIA_HNS, CeladonCity_Gym_Text_BeautyJuliaSeen, CeladonCity_Gym_Text_BeautyJuliaBeaten
	msgbox CeladonCity_Gym_Text_BeautyJuliaAfter, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_BeautyJuliaSeen:
	.string "Hast du die Blumen betrachtet\n"
	.string "oder mich?$"

CeladonCity_Gym_Text_BeautyJuliaBeaten:
	.string "Wie nervig!$"

CeladonCity_Gym_Text_BeautyJuliaAfter:
	.string "Wie werde ich eine Edeldame\n"
	.string "so wie Erika?$"

CeladonCity_Gym_EventScript_Jo::
	trainerbattle_double TRAINER_JO_AND_ZOE_HNS, CeladonCity_Gym_Text_TwinsJoAndZoe1Seen, CeladonCity_Gym_Text_TwinsJoAndZoe1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox CeladonCity_Gym_Text_TwinsJoAndZoe1After, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Zoe::
	trainerbattle_double TRAINER_JO_AND_ZOE_HNS, CeladonCity_Gym_Text_TwinsJoAndZoe2Seen, CeladonCity_Gym_Text_TwinsJoAndZoe2Beaten, Route104_Text_GinaNotEnoughMons
	msgbox CeladonCity_Gym_Text_TwinsJoAndZoe2After, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_TwinsJoAndZoe1Seen:
	.string "Wir zeigen dir Pokémon-Attacken, die\n"
	.string "Erika uns beigebracht hat!$"

CeladonCity_Gym_Text_TwinsJoAndZoe1Beaten:
	.string "Oh! Wir haben verloren!$"

CeladonCity_Gym_Text_TwinsJoAndZoe1After:
	.string "Erika wird sich für uns rächen!$"

CeladonCity_Gym_Text_TwinsJoAndZoe2Seen:
	.string "Tara: Du wirst sehen!\n"
	.string "Wir werden Erika beschützen!$"

CeladonCity_Gym_Text_TwinsJoAndZoe2Beaten:
	.string "Wir konnten nicht gewinnen…$"

CeladonCity_Gym_Text_TwinsJoAndZoe2After:
	.string "Erika ist viel, viel stärker!$"

CeladonCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE12_GET, CeladonCity_Gym_EventScript_GymStatuePostVictory
	msgbox CeladonCity_Gym_Text_GymStatue
	releaseall
	end

CeladonCity_Gym_EventScript_GymStatuePostVictory::
	msgbox CeladonCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

CeladonCity_Gym_Text_GymStatue::
    .string "Prismania City Pokémon-Arena\n"
    .string "Leiterin: Erika\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot$"

CeladonCity_Gym_Text_GymStatuePlayerWon::
    .string "Prismania City Pokémon-Arena\n"
    .string "Leiterin: Erika\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot, {PLAYER}$"
