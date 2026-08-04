SaffronCity_Gym_Frlg_MapScripts::
	.byte 0

SaffronCity_Gym_EventScript_Sabrina::
	famechecker FAMECHECKER_SABRINA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	trainerbattle_single TRAINER_LEADER_SABRINA, SaffronCity_Gym_Text_SabrinaIntro, SaffronCity_Gym_Text_SabrinaDefeat, SaffronCity_Gym_EventScript_DefeatedSabrina, NO_MUSIC
	goto_if_unset FLAG_GOT_TM04_FROM_SABRINA, SaffronCity_Gym_EventScript_GiveTM04
	msgbox SaffronCity_Gym_Text_ExplainTM04
	release
	end

SaffronCity_Gym_EventScript_DefeatedSabrina::
	famechecker FAMECHECKER_SABRINA, 2
	famechecker FAMECHECKER_SABRINA, 3
	clearflag FLAG_HIDE_SAFFRON_CITY_POKECENTER_SABRINA_JOURNALS
	setflag FLAG_DEFEATED_SABRINA
	setflag FLAG_BADGE06_GET
	set_gym_trainers_frlg 6
	goto SaffronCity_Gym_EventScript_GiveTM04
	end

SaffronCity_Gym_EventScript_GiveTM04::
	msgbox SaffronCity_Gym_Text_ExplainMarshBadgeTakeThis
	checkitemspace ITEM_TM04
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_Gym_EventScript_NoRoomForTM04
	giveitem_msg SaffronCity_Gym_Text_ReceivedTM04FromSabrina, ITEM_TM04
	setflag FLAG_GOT_TM04_FROM_SABRINA
	msgbox SaffronCity_Gym_Text_SabrinaPostBattle
	release
	end

SaffronCity_Gym_EventScript_NoRoomForTM04::
	msgbox SaffronCity_Gym_Text_BagFullOfOtherItems
	release
	end

SaffronCity_Gym_EventScript_Johan::
	trainerbattle_single TRAINER_PSYCHIC_JOHAN, SaffronCity_Gym_Text_JohanIntro, SaffronCity_Gym_Text_JohanDefeat
	msgbox SaffronCity_Gym_Text_JohanPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Tyron::
	trainerbattle_single TRAINER_PSYCHIC_TYRON, SaffronCity_Gym_Text_TyronIntro, SaffronCity_Gym_Text_TyronDefeat
	famechecker FAMECHECKER_SABRINA, 5
	msgbox SaffronCity_Gym_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Cameron::
	trainerbattle_single TRAINER_PSYCHIC_CAMERON, SaffronCity_Gym_Text_CameronIntro, SaffronCity_Gym_Text_CameronDefeat
	msgbox SaffronCity_Gym_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Preston::
	trainerbattle_single TRAINER_PSYCHIC_PRESTON, SaffronCity_Gym_Text_PrestonIntro, SaffronCity_Gym_Text_PrestonDefeat
	msgbox SaffronCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Amanda::
	trainerbattle_single TRAINER_CHANNELER_AMANDA, SaffronCity_Gym_Text_AmandaIntro, SaffronCity_Gym_Text_AmandaDefeat
	msgbox SaffronCity_Gym_Text_AmandaPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Stacy::
	trainerbattle_single TRAINER_CHANNELER_STACY, SaffronCity_Gym_Text_StacyIntro, SaffronCity_Gym_Text_StacyDefeat
	msgbox SaffronCity_Gym_Text_StacyPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Tasha::
	trainerbattle_single TRAINER_CHANNELER_TASHA, SaffronCity_Gym_Text_TashaIntro, SaffronCity_Gym_Text_TashaDefeat
	msgbox SaffronCity_Gym_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SABRINA, SaffronCity_Gym_EventScript_GymGuyPostVictory
	msgbox SaffronCity_Gym_Text_GymGuyAdvice
	release
	end

SaffronCity_Gym_EventScript_GymGuyPostVictory::
	msgbox SaffronCity_Gym_Text_GymGuyPostVictory
	release
	end

SaffronCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE06_GET, SaffronCity_Gym_EventScript_GymStatuePostVictory
	msgbox SaffronCity_Gym_Text_GymStatue
	releaseall
	end

SaffronCity_Gym_EventScript_GymStatuePostVictory::
	msgbox SaffronCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

SaffronCity_Gym_Text_SabrinaIntro::
	.string "{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}Eine Vision hat mir deine Ankunft\n"
	.string "vorausgesagt!\p"
	.string "Ich beherrsche die Psychokinese,\n"
	.string "seit ich ein Kind war.\p"
	.string "Zunächst habe ich gelernt, mit\n"
	.string "Psychokinese Löffel zu verbiegen.\p"
	.string "Ich verabscheue den Kampf!\n"
	.string "Aber wenn du es wünschst, beweise\l"
	.string "ich dir meine Kräfte!{PLAYER}?À$"

SaffronCity_Gym_Text_SabrinaDefeat::
	.string "Ich bin erschüttert!\n"
	.string "Aber verloren ist verloren.\p"
	.string "Ich muss gestehen, ich habe mich\n"
	.string "nicht allzu sehr angestrengt!\p"
	.string "Ich schenke dir den Sumpforden!$"

SaffronCity_Gym_Text_SabrinaPostBattle::
	.string "Theoretisch könnte jeder die\n"
	.string "Psychokinese erlernen.\p"
	.string "Viele wissen es nur nicht!$"

SaffronCity_Gym_Text_ExplainMarshBadgeTakeThis::
	.string "Der Sumpforden lässt Pokémon bis\n"
	.string "Level 70 deinen Befehlen folgen!\p"
	.string "Stärkere Pokémon könnten sich dir\n"
	.string "widersetzen und deine Befehle\l"
	.string "ignorieren!\p"
	.string "Achte darauf, dass du deine\n"
	.string "Pokémon jederzeit unter Kontrolle\l"
	.string "hast!\p"
	.string "Warte! Nimm noch diese TM von mir!$"

SaffronCity_Gym_Text_ReceivedTM04FromSabrina::
	.string "{PLAYER} erhält\n"
	.string "TM04!$"

SaffronCity_Gym_Text_ExplainTM04::
	.string "TM04 ist Gedankengut!\p"
	.string "Das Pokémon konzentriert sich,\n"
	.string "um sowohl den SP. ANG.\l"
	.string "als auch die SP. Ver. zu\l"
	.string "steigern.$"

SaffronCity_Gym_Text_BagFullOfOtherItems::
	.string "Dein Rucksack ist zu voll!$"

SaffronCity_Gym_Text_AmandaIntro::
	.string "Sabrina ist jünger als ich.\n"
	.string "Trotzdem habe ich Respekt vor ihr!$"

SaffronCity_Gym_Text_AmandaDefeat::
	.string "Ich bin nicht gut genug!$"

SaffronCity_Gym_Text_AmandaPostBattle::
	.string "Sind zwei Gegner gleich stark, so\n"
	.string "wird der entschlossenere Kämpfer\l"
	.string "gewinnen!\p"
	.string "Wenn du Sabrina schlagen willst,\n"
	.string "konzentriere dich auf den Sieg!$"

SaffronCity_Gym_Text_JohanIntro::
	.string "Machen dir unsere Psykräfte Angst?$"

SaffronCity_Gym_Text_JohanDefeat::
	.string "Ich glaube es nicht:\n"
	.string "Ich hab verloren!$"

SaffronCity_Gym_Text_JohanPostBattle::
	.string "Psycho-Pokémon fürchten sich nur\n"
	.string "vor Käfern und Geistern!$"

SaffronCity_Gym_Text_StacyIntro::
	.string "Pokémon passen sich ihrem Trainer\n"
	.string "an.\p"
	.string "Deine Pokémon müssen demnach sehr\n"
	.string "zäh sein!$"

SaffronCity_Gym_Text_StacyDefeat::
	.string "Ich wusste es!$"

SaffronCity_Gym_Text_StacyPostBattle::
	.string "Meine Pokémon müssen stärkere\n"
	.string "Attacken lernen!$"

SaffronCity_Gym_Text_TyronIntro::
	.string "Du weißt, dass man\n"
	.string "mit Stärke allein\l"
	.string "nicht weit kommt,\l"
	.string "oder?$"

SaffronCity_Gym_Text_TyronDefeat::
	.string "Das ist unfassbar!$"

SaffronCity_Gym_Text_TyronPostBattle::
	.string "Sabrina hat den Karate-meister in\n"
	.string "der Arena nebenan besiegt!$"

SaffronCity_Gym_Text_TashaIntro::
	.string "Du gegen mich!\n"
	.string "Unsere Pokémon sollen kämpfen!$"

SaffronCity_Gym_Text_TashaDefeat::
	.string "Ich habe nun doch verloren!$"

SaffronCity_Gym_Text_TashaPostBattle::
	.string "Ich ahnte, dass es passieren\n"
	.string "würde!$"

SaffronCity_Gym_Text_CameronIntro::
	.string "Obwohl Sabrina noch jung ist, ist\n"
	.string "sie unsere Arenaleiterin!\p"
	.string "Wir lassen dich nicht einfach so zu\n"
	.string "ihr gehen!$"

SaffronCity_Gym_Text_CameronDefeat::
	.string "Ich habe die Konzentration\n"
	.string "verloren!$"

SaffronCity_Gym_Text_CameronPostBattle::
	.string "In Saffronia City gab es zwei\n"
	.string "Pokémon-Arenen.\p"
	.string "Allerdings hat das Kampf-dojo den\n"
	.string "Status als Pokémon-Arena verloren,\l"
	.string "weil wir die Trainer besiegten!$"

SaffronCity_Gym_Text_PrestonIntro::
	.string "Die Pokémon in der Arena von\n"
	.string "Saffronia City sind für ihre\l"
	.string "übernatürlichen Kräfte bekannt!\p"
	.string "Ich weiß, dass du Sabrina\n"
	.string "herausfordern möchtest!$"

SaffronCity_Gym_Text_PrestonDefeat::
	.string "Arrrgh!$"

SaffronCity_Gym_Text_PrestonPostBattle::
	.string "Ich habe deine Gedanken gelesen!$"

SaffronCity_Gym_Text_GymGuyAdvice::
	.string "Heh!\n"
	.string "Warte, du Champion in spe!\p"
	.string "Die Pokémon von Sabrina benutzen\n"
	.string "Psychokinese anstelle von\l"
	.string "physischen Kräften!\p"
	.string "Kampf-Pokémon sind Psychokinese\n"
	.string "nicht gewachsen!\p"
	.string "Sie haben nicht einmal den Hauch\n"
	.string "einer Chance!$"

SaffronCity_Gym_Text_GymGuyPostVictory::
	.string "Psychokinese?\p"
	.string "Wenn ich sie hätte, würde ich in\n"
	.string "der Spielhalle reich werden!$"

SaffronCity_Gym_Text_GymStatue::
	.string "Saffronia Pokémon-Arena\n"
	.string "Leitung: Sabrina\p"
	.string "Bisherige Sieger:\n"
	.string "{RIVAL}$"

SaffronCity_Gym_Text_GymStatuePlayerWon::
	.string "Saffronia Pokémon-Arena\n"
	.string "Leitung: Sabrina\p"
	.string "Bisherige Sieger:\n"
	.string "{RIVAL}, {PLAYER}$"

