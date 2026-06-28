MahoganyTown_Gym_hns_MapScripts::
	.byte 0


MahoganyTown_Gym_EventScript_Statue::
	lock
	goto_if_set FLAG_DEFEATED_MAHOGANY_TOWN_GYM,  MahoganyTown_Gym_EventScript_Statue2
	msgbox MahoganyTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
	closemessage
	release
	end

MahoganyTown_Gym_EventScript_Statue2::
	msgbox MahoganyTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	closemessage
	release
	end

MahoganyTown_Gym_Text_GymStatue:
	.string "Mahagonia City Pokémon Arena$"

MahoganyTown_Gym_Text_GymStatueCertified:
	.string "Mahagonia City Pokémon Arena\p"
	.string "Norbert's zertifizierte Trainer:\n"
	.string "{PLAYER}$"


MahoganyTown_GymEventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MAHOGANY_TOWN_GYM, MahoganyTown_Gym_EventScript_GymGuy2
	msgbox MahoganyTown_Gym_Text_Guide, MSGBOX_DEFAULT
	closemessage
	release
	end
	
MahoganyTown_Gym_EventScript_GymGuy2::
	msgbox MahoganyTown_Gym_Text_GuideWin, MSGBOX_DEFAULT
	release
	end	

MahoganyTown_Gym_EventScript_Ronald::
	trainerbattle_single TRAINER_RONALD_HNS, MahoganyTown_Gym_Text_BoarderRonaldSeen, MahoganyTown_Gym_Text_BoarderRonaldBeaten
	msgbox MahoganyTown_Gym_Text_BoarderRonaldAfter, MSGBOX_AUTOCLOSE
	end

MahoganyTown_Gym_EventScript_Brad::
	trainerbattle_single TRAINER_BRAD_HNS, MahoganyTown_Gym_Text_BoarderBradSeen, MahoganyTown_Gym_Text_BoarderBradBeaten
	msgbox MahoganyTown_Gym_Text_BoarderBradAfter, MSGBOX_AUTOCLOSE
	end

MahoganyTown_Gym_EventScript_Douglas::
	trainerbattle_single TRAINER_DOUGLAS_HNS, MahoganyTown_Gym_Text_BoarderDouglasSeen, MahoganyTown_Gym_Text_BoarderDouglasBeaten
	msgbox MahoganyTown_Gym_Text_BoarderDouglasAfter, MSGBOX_AUTOCLOSE
	end

MahoganyTown_Gym_EventScript_Roxanne::
	trainerbattle_single TRAINER_ROXANNE_HNS, MahoganyTown_Gym_Text_SkierRoxanneSeen, MahoganyTown_Gym_Text_SkierRoxanneBeaten
	msgbox MahoganyTown_Gym_Text_SkierRoxanneAfter, MSGBOX_AUTOCLOSE
	end

MahoganyTown_Gym_EventScript_Clarissa::
	trainerbattle_single TRAINER_CLARISSA_HNS, MahoganyTown_Gym_Text_SkierClarissaSeen, MahoganyTown_Gym_Text_SkierClarissaBeaten
	msgbox MahoganyTown_Gym_Text_SkierClarissaAfter, MSGBOX_AUTOCLOSE
	end

MahoganyTown_Gym_EventScript_Pryce::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MAHOGANY_TOWN_GYM, MahoganyTown_Gym_EventScript_Pryce_Defeated
	msgbox MahoganyTown_Gym_Text_PryceIntro, MSGBOX_DEFAULT
	goto_if_set FLAG_DEFEATED_OLIVINE_CITY_GYM, MahoganyTown_Gym_EventScript_OlivineCheckCianwood
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM, MahoganyTown_Gym_EventScript_CianwoodCheckOlivine
	goto MahoganyTown_Gym_EventScript_Pryce_Battle1

MahoganyTown_Gym_EventScript_PryceVictory::
	message MahoganyTown_Gym_Text_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MahoganyTown_Gym_Text_GlacierBadgeSpeech, MSGBOX_DEFAULT
	setflag FLAG_BADGE07_GET
	setflag FLAG_DEFEATED_MAHOGANY_TOWN_GYM
    addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 7
	call Common_EventScript_SetGymTrainers_hns
	giveitem ITEM_TM_HAIL
	msgbox MahoganyTown_Gym_Text_HailSpeech, MSGBOX_DEFAULT
	setvar VAR_MAHOGANY_TOWN_STATE, 15
    setrespawn HEAL_LOCATION_MAHOGANY_TOWN_HNS
	closemessage
	release
	end

MahoganyTown_Gym_EventScript_OlivineCheckCianwood::
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM, MahoganyTown_Gym_EventScript_Pryce_Battle3
	goto MahoganyTown_Gym_EventScript_Pryce_Battle2

MahoganyTown_Gym_EventScript_CianwoodCheckOlivine::
	goto_if_set FLAG_DEFEATED_OLIVINE_CITY_GYM, MahoganyTown_Gym_EventScript_Pryce_Battle3
	goto MahoganyTown_Gym_EventScript_Pryce_Battle2
	
MahoganyTown_Gym_EventScript_Pryce_Battle1::
	trainerbattle_no_intro TRAINER_PRYCE_1_HNS, MahoganyTown_Gym_Text_PryceImpressed
	goto MahoganyTown_Gym_EventScript_PryceVictory

MahoganyTown_Gym_EventScript_Pryce_Battle2::
	trainerbattle_no_intro TRAINER_PRYCE_1_2_HNS, MahoganyTown_Gym_Text_PryceImpressed
	goto MahoganyTown_Gym_EventScript_PryceVictory

MahoganyTown_Gym_EventScript_Pryce_Battle3::
	trainerbattle_no_intro TRAINER_PRYCE_1_3_HNS, MahoganyTown_Gym_Text_PryceImpressed
	goto MahoganyTown_Gym_EventScript_PryceVictory

MahoganyTown_Gym_EventScript_Pryce_Defeated::
	msgbox MahoganyTown_Gym_Text_CherishPokemon, MSGBOX_DEFAULT
	closemessage
	release
	end

MahoganyTown_Gym_Text_PryceIntro:
	.string "Pokémon erleben vieles im Leben,\n"
	.string "so wie wir Menschen.\p"
	.string "Auch ich habe viel erlebt und\n"
	.string "gelitten.\p"
	.string "Da ich älter bin, will ich dir\n"
	.string "zeigen, was ich meine.\p"
	.string "Ich kenne Pokémon schon seit\n"
	.string "vor deiner Geburt.\p"
	.string "Ich verliere nicht leicht.\p"
	.string "Ich, Norbert--der Wintertrainer--\n"
	.string "zeige dir meine Kraft!$"

MahoganyTown_Gym_Text_PryceImpressed:
	.string "Ah, ich bin beeindruckt von\n"
	.string "deiner Stärke.\p"
	.string "Mit deinem starken Willen wirst\n"
	.string "du alle Hindernisse überwinden.\p"
	.string "Du verdienst diesen Orden!$"

MahoganyTown_Gym_Text_ReceivedBadge:
	.string "{PLAYER} erhielt Gletscherorden.$"

MahoganyTown_Gym_Text_GlacierBadgeSpeech:
	.string "Der Orden erhöht die SPEZIAL-\n"
	.string "ATTACKE deiner Pokémon.\p"
	.string "Er erlaubt deinen Pokémon,\n"
	.string "Whirlpool zu benutzen, um\n"
	.string "echte Strudel zu überqueren.\p"
	.string "Und dies… ist mein Geschenk!$"

MahoganyTown_Gym_Text_HailSpeech:
	.string "Diese TM enthält Hagelsturm.\p"
	.string "Sie fügt 5 Runden lang Schaden zu.\p"
	.string "So zeigt sie die Härte des Winters.$"

MahoganyTown_Gym_Text_CherishPokemon:
	.string "Wenn Eis und Schnee schmelzen,\n"
	.string "kommt der Frühling.\p"
	.string "Du und deine Pokémon werdet viele\n"
	.string "Jahre zusammen verbringen.\p"
	.string "Schätzt eure gemeinsame Zeit!$"

MahoganyTown_Gym_Text_PryceRematch:
	.string "Ah, JOHTO CHAMPION!\p"
	.string "Deine Fähigkeiten sind\n"
	.string "wirklich bemerkenswert.\p"
	.string "Ich bin beeindruckt.\p"
	.string "Doch noch können wir voneinander\n"
	.string "lernen.\p"
	.string "Ich, Norbert--der Wintertrainer--\n"
	.string "habe noch einige Tricks.\p"
	.string "Willst du ein Rückmatch mit mir?$"

MahoganyTown_Gym_Text_PryceRematchDefeat:
	.string "Ah, wieder bin ich beeindruckt\n"
	.string "von deiner Stärke.\p"
	.string "Mit deinem starken Willen wirst\n"
	.string "du alle Hindernisse überwinden.$"

MahoganyTown_Gym_Text_Guide:
	.string "NORBERT ist ein Veteran, der\n"
	.string "seine Pokémon seit fast 50 Jahren\n"
	.string "trainiert.\p"
	.string "Angeblich friert er Gegner gerne\n"
	.string "mit Eis-Attacken ein.\p"
	.string "Also, nutze deinen Ehrgeiz!$"

MahoganyTown_Gym_Text_GuideWin:
	.string "NORBERT ist stark,\n"
	.string "aber du bist besser!\p"
	.string "Ein heißer Kampf, der die\n"
	.string "Generationen überbrückt hat.$"

MahoganyTown_Gym_Text_BoarderRonaldSeen:
	.string "Ich friere deine Pokémon ein,\n"
	.string "damit du nichts tun kannst!$"

MahoganyTown_Gym_Text_BoarderRonaldBeaten:
	.string "Verdammt. Ich konnte nichts tun.$"

MahoganyTown_Gym_Text_BoarderRonaldAfter:
	.string "Vielleicht gibt es eine Attacke,\n"
	.string "die Pokémon anwenden können,\l"
	.string "wenn sie eingefroren sind.$"

MahoganyTown_Gym_Text_BoarderBradSeen:
	.string "Dieser Boden ist rutschig.\p"
	.string "Spaßig, nicht?\p"
	.string "Aber wir spielen hier keine\n"
	.string "Spiele!$"

MahoganyTown_Gym_Text_BoarderBradBeaten:
	.string "Siehst du, wie Ernst wir sind?$"

MahoganyTown_Gym_Text_BoarderBradAfter:
	.string "Diese Arena ist großartig.\n"
	.string "Ich liebe Snowboarden mit meinen\l"
	.string "Pokémon!$"

MahoganyTown_Gym_Text_BoarderDouglasSeen:
	.string "Ich kenne Norberts Geheimnis.$"

MahoganyTown_Gym_Text_BoarderDouglasBeaten:
	.string "Ok. Ich erzähle dir Norberts\n"
	.string "Geheimnis.$"

MahoganyTown_Gym_Text_BoarderDouglasAfter:
	.string "Das Geheimnis von Norberts Kraft…\p"
	.string "Er meditiert täglich unter einer\n"
	.string "Kaskade, um Körper und Geist zu\l"
	.string "stärken.$"

MahoganyTown_Gym_Text_SkierRoxanneSeen:
	.string "Um zu Norbert zu gelangen,\n"
	.string "musst du beim Skaten nachdenken.$"

MahoganyTown_Gym_Text_SkierRoxanneBeaten:
	.string "Ich hätte beim Skifahren nicht\n"
	.string "gegen dich verloren!$"

MahoganyTown_Gym_Text_SkierRoxanneAfter:
	.string "Wer nicht präzise skatet,\n"
	.string "kommt in dieser Arena nicht weit.$"

MahoganyTown_Gym_Text_SkierClarissaSeen:
	.string "Sieh dir meine Parallelkurve an!$"

MahoganyTown_Gym_Text_SkierClarissaBeaten:
	.string "Nein! Du hast mich ausrutschen\n"
	.string "lassen!$"

MahoganyTown_Gym_Text_SkierClarissaAfter:
	.string "Ich hätte nicht mit dem Skaten\n"
	.string "angeben sollen…$"

