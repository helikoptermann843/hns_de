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
	msgbox CeladonCity_Gym_Text_ErikaExplainTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_GIGA_DRAIN
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
	.string "Leiterin der PRISMANIA City Arena.\p"
	.string "…Oh? Ganz aus JOHTO, sagst du?\n"
	.string "Wie schön…\p"
	.string "Oh. Entschuldigung, ich habe nicht\n"
	.string "gemerkt, dass du mich herausfordern\n"
	.string "möchtest.\p"
	.string "Nun gut, aber ich werde nicht\n"
	.string "verlieren.$"

CeladonCity_Gym_Text_ErikaBeaten:
	.string "Erika: Oh! Ich gebe auf…\p"
	.string "Du bist bemerkenswert stark…\p"
	.string "Ich werde dir den Farborden geben…$"

CeladonCity_Gym_Text_PlayerReceivedRainbowBadge:
	.string "{PLAYER} erhielt den Farborden.$"

CeladonCity_Gym_Text_ErikaExplainTM:
	.string "Erika: Das war ein wunderbarer\n"
	.string "Kampf.\p"
	.string "Ich fühlte mich inspiriert. Bitte, ich\n"
	.string "möchte, dass du diese TM erhältst.\p"
	.string "Es ist Gigasauger.\p"
	.string "Es ist eine hervorragende Attacke, die\l"
	.string "die Hälfte des verursachten Schadens\n"
	.string "zur Heilung deiner Pokémon absorbiert.\p"
	.string "\p"
	.string "Bitte benutze sie, wenn sie dir\n"
	.string "gefällt…$"

CeladonCity_Gym_Text_ErikaAfterBattle:
	.string "Erika: Verlieren hinterlässt einen\n"
	.string "bitteren Nachgeschmack…\p"
	.string "Aber zu wissen, dass es starke Trainer\n"
	.string "gibt, spornt mich an, es besser zu\l"
	.string "machen…$"

CeladonCity_Gym_Text_ErikaRematch:
	.string "Erika: Oh, hallo.\p"
	.string "Was für eine Überraschung, KANTO-\n"
	.string "CHAMPION!\p"
	.string "Es ist so schön, dich wiederzusehen.\p"
	.string "Deine Reise muss sehr aufregend\n"
	.string "gewesen sein.\p"
	.string "Auch Champions genießen eine\n"
	.string "Herausforderung.\p"
	.string "Willst du ein Rematch mit mir?$"

CeladonCity_Gym_Text_ErikaRematchDefeat:
	.string "Erika: Verlieren hinterlässt immer\n"
	.string "noch einen\n"
	.string "bitteren Nachgeschmack…\p"
	.string "Aber zu wissen, dass es starke Trainer\n"
	.string "gibt,\l"
	.string "spornt mich an, es besser zu machen…$"

CeladonCity_Gym_EventScript_Michelle::
	trainerbattle_single TRAINER_MICHELLE_HNS, CeladonCity_Gym_Text_LassMichelleSeen, CeladonCity_Gym_Text_LassMichelleBeaten
	msgbox CeladonCity_Gym_Text_LassMichelleAfter, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_LassMichelleSeen:
	.string "Do you think a girls-only Arena is\n"
	.string "rare?$"

CeladonCity_Gym_Text_LassMichelleBeaten:
	.string "Oh, bleah!$"

CeladonCity_Gym_Text_LassMichelleAfter:
	.string "I just got careless, that's all!$"


CeladonCity_Gym_EventScript_Tanya::
	trainerbattle_single TRAINER_TANYA_HNS, CeladonCity_Gym_Text_PicnickerTanyaSeen, CeladonCity_Gym_Text_PicnickerTanyaBeaten
	msgbox CeladonCity_Gym_Text_PicnickerTanyaAfter, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_PicnickerTanyaSeen:
	.string "Oh, a battle? That's kind of scary,\n"
	.string "but OK!$"

CeladonCity_Gym_Text_PicnickerTanyaBeaten:
	.string "Oh, that's it?$"

CeladonCity_Gym_Text_PicnickerTanyaAfter:
	.string "Oh, look at all your BADGES. No\n"
	.string "wonder I couldn't win!$"

CeladonCity_Gym_EventScript_Julia::
	trainerbattle_single TRAINER_JULIA_HNS, CeladonCity_Gym_Text_BeautyJuliaSeen, CeladonCity_Gym_Text_BeautyJuliaBeaten
	msgbox CeladonCity_Gym_Text_BeautyJuliaAfter, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_BeautyJuliaSeen:
	.string "Were you looking at these flowers\n"
	.string "or at me?$"

CeladonCity_Gym_Text_BeautyJuliaBeaten:
	.string "How annoying!$"

CeladonCity_Gym_Text_BeautyJuliaAfter:
	.string "How do I go about becoming\n"
	.string "ladylike like Erika?$"

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
	.string "Oh… Wir haben verloren…$"

CeladonCity_Gym_Text_TwinsJoAndZoe1After:
	.string "Erika wird sich für uns rächen!$"

CeladonCity_Gym_Text_TwinsJoAndZoe2Seen:
	.string "Wir werden Erikas Schild sein!$"

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
    .string "CELADON POKéMON GYM\n"
    .string "LEADER: ERIKA\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED$"

CeladonCity_Gym_Text_GymStatuePlayerWon::
    .string "CELADON POKéMON GYM\n"
    .string "LEADER: ERIKA\p"
    .string "WINNING TRAINERS:\n"
	.string "BLUE, RED, {PLAYER}$"
