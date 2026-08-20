SaffronCity_Gym_hns_MapScripts::
	.byte 0

SaffronCity_Gym_EventScript_GymGuy::
	goto_if_set FLAG_DEFEATED_SAFFRON_GYM, SaffronCity_Gym_EventScript_GymGuy2
	msgbox SaffronCity_Gym_Text_GymGuideIntro, MSGBOX_NPC
	end

SaffronCity_Gym_EventScript_GymGuy2::
	msgbox SaffronCity_Gym_Text_GymGuideWin, MSGBOX_NPC
	end

SaffronCity_Gym_EventScript_Rebecca::
	trainerbattle_single TRAINER_REBECCA_HNS, SaffronCity_Gym_Text_MediumRebeccaSeen, SaffronCity_Gym_Text_MediumRebeccaBeaten
	msgbox SaffronCity_Gym_Text_MediumRebeccaAfter, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Franklin::
	trainerbattle_single TRAINER_FRANKLIN_HNS, SaffronCity_Gym_Text_PsychicFranklinSeen, SaffronCity_Gym_Text_PsychicFranklinBeaten
	msgbox SaffronCity_Gym_Text_PsychicFranklinAfter, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Doris::
	trainerbattle_single TRAINER_DORIS_HNS, SaffronCity_Gym_Text_MediumDorisSeen, SaffronCity_Gym_Text_MediumDorisBeaten
	msgbox SaffronCity_Gym_Text_MediumDorisAfter, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Jared::
	trainerbattle_single TRAINER_JARED_HNS, SaffronCity_Gym_Text_PsychicJaredSeen, SaffronCity_Gym_Text_PsychicJaredBeaten
	msgbox SaffronCity_Gym_Text_PsychicJaredAfter, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Sabrina::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SAFFRON_GYM, SaffronCity_Gym_EventScript_Sabrina_Defeated
	msgbox SaffronCity_Gym_Text_SabrinaIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SABRINA_HNS, SaffronCity_Gym_Text_SabrinaWinLoss
	message SaffronCity_Gym_Text_ReceivedMarshBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SaffronCity_Gym_Text_MarshBadgeInfo, MSGBOX_DEFAULT
	msgbox SaffronCity_Gym_Text_Sabrina_GiveTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_SKILL_SWAP
	msgbox SaffronCity_Gym_Text_Sabrina_ExplainTM, MSGBOX_DEFAULT
	setflag FLAG_BADGE13_GET
	setflag FLAG_DEFEATED_SAFFRON_GYM
	callnative RevealDexEntries_Saffron
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 13
	call Common_EventScript_SetGymTrainers_hns
	closemessage
	clearflag FLAG_HIDE_OLIVINE_SABRINA
	release
	end

SaffronCity_Gym_EventScript_Sabrina_Defeated::
	msgbox SaffronCity_Gym_Text_SabrinaPostBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_Gym_Text_SabrinaIntro:
	.string "{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}Sabrina: Ich wusste, dass du kommst!\p"
	.string "Ich hatte schon vor drei Jahren eine\n"
	.string "Vision, die mir deine Ankunft ankündigte.\l"
	.string "Du hast es auf meinen Orden abgesehen!\p"
	.string "Kämpfe bereiten mir nur wenig Freude…\p"
	.string "Aber als Leiterin ist es meine Pflicht,\n"
	.string "all denen einen Orden zu überreichen,\l"
	.string "die sich als würdig erweisen.\p"
	.string "Wenn das also dein Wunsch ist, werde\n"
	.string "ich dir meine Psycho-Kräfte zeigen!$"

SaffronCity_Gym_Text_SabrinaWinLoss:
	.string "Sabrina: Diese Stärke… in meiner\n"
	.string "Vision warst du viel schwächlicher!\p"
	.string "Scheinbar kann nicht einmal ich die\n"
	.string "Zukunft vollständig vorhersehen…\p"
	.string "Aber gut. Hier, das ist der Sumpforden.\n"
	.string "Du hast ihn dir verdient.$"

SaffronCity_Gym_Text_ReceivedMarshBadge:
	.string "{PLAYER} erhielt den\n"
	.string "Sumpforden.$"

SaffronCity_Gym_Text_MarshBadgeInfo:
	.string "Sabrina: Der Sumpforden\n"
	.string "weckt deine verborgenen Kräfte…\p"
	.string "Auch wenn ich deine Kraft nicht\n"
	.string "genau vorhersehen konnte, das\l"
	.string "weiß ich mit Sicherheit:\p"
	.string "Du wirst ein gefeierter und\n"
	.string "geliebter Champion!$"

SaffronCity_Gym_Text_Sabrina_GiveTM:
	.string "Here, take this as well.$"

SaffronCity_Gym_Text_Sabrina_ExplainTM:
	.string "It holds SKILL SWAP.\p"
	.string "It can take your opponents abilities\n"
	.string "away from them and give them your own.\p"
	.string "Use it wisely...$"

SaffronCity_Gym_Text_SabrinaPostBattle:
	.string "Sabrina: Deine Liebe zu deinen\n"
	.string "Pokémon hat meine Psychokraft\l"
	.string "überwältigt…\p"
	.string "Die Kraft der Liebe ist wohl\n"
	.string "auch eine Art Psychokraft…$"

SaffronCity_Gym_Text_SabrinaRematch:
	.string "Sabrina: Ah, der Kanto-champion.\p"
	.string "Ich spürte deine Rückkehr.\p"
	.string "Deine Kraft ist enorm gewachsen.\p"
	.string "Selbst jetzt spüre ich\n"
	.string "deine Aura.\p"
	.string "Möchtest du einen Rückkampf?$"

SaffronCity_Gym_Text_SabrinaRematchDefeat:
	.string "Sabrina: Deine Liebe zu deinen\n"
	.string "Pokémon hat meine Psychokraft\l"
	.string "wieder überwältigt…$"

SaffronCity_Gym_Text_MediumRebeccaSeen:
	.string "Ich spüre, wie die Kraft all derer,\n"
	.string "die du besiegt hast,\l"
	.string "in meinen Körper strömt!$"

SaffronCity_Gym_Text_MediumRebeccaBeaten:
	.string "Du bist stark… viel zu stark!$"

SaffronCity_Gym_Text_MediumRebeccaAfter:
	.string "Sage es mir! Was ist die\n"
	.string "Quelle deiner Kraft?$"

SaffronCity_Gym_Text_PsychicFranklinSeen:
	.string "Psychokraft ist die Kraft\n"
	.string "deiner Seele.$"

SaffronCity_Gym_Text_PsychicFranklinBeaten:
	.string "Du kennst deine Seele besser als ich.\n"
	.string "Deshalb habe ich verloren!$"

SaffronCity_Gym_Text_PsychicFranklinAfter:
	.string "Du hast auch deine Seele gestärkt,\n"
	.string "nicht nur deine Fähigkeiten.$"

SaffronCity_Gym_Text_MediumDorisSeen:
	.string "Hehehehe… ich habe sie\n"
	.string "deutlich vor mir.\p"
	.string "Ich kann in die Tiefen\n"
	.string "deiner Seele blicken!$"

SaffronCity_Gym_Text_MediumDorisBeaten:
	.string "Ich kenne zwar die Tiefen deiner Seele,\n"
	.string "aber verloren ist verloren!$"

SaffronCity_Gym_Text_MediumDorisAfter:
	.string "Mist!\n"
	.string "Dabei hatte ich doch vorausgesehen,\l"
	.string "dass ich gegen dich verlieren würde!\l"
	.string "Ich hatte es bloß verdrängt!$"

SaffronCity_Gym_Text_PsychicJaredSeen:
	.string "Das Karate Dojo nebenan war\n"
	.string "früher die Pokémon-Arena\l"
	.string "der Stadt.$"

SaffronCity_Gym_Text_PsychicJaredBeaten:
	.string "Mit dir kann ich mich nicht messen…$"

SaffronCity_Gym_Text_PsychicJaredAfter:
	.string "Selbst der Karate-Meister, der Leiter\n"
	.string "des Karate Dojo persönlich,\p"
	.string "musste eine ziemlich üble\n"
	.string "Niederlage von Sabrina einstecken.$"

SaffronCity_Gym_Text_GymGuideIntro:
	.string "Hey, du! Zukünftiger Champ!\p"
	.string "Einem Trainer deines Kalibers brauche\n"
	.string "ich sicher nicht erklären, wie man mit\l"
	.string "Psycho-Pokémon umgeht, nicht wahr?\p"
	.string "Ich erwarte Großes von dir!\n"
	.string "Viel Glück!$"

SaffronCity_Gym_Text_GymGuideWin:
	.string "Das war ein fantastischer Kampf!$"

SaffronCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE13_GET, SaffronCity_Gym_EventScript_GymStatuePostVictory
	msgbox SaffronCity_Gym_Text_GymStatue
	releaseall
	end

SaffronCity_Gym_EventScript_GymStatuePostVictory::
	msgbox SaffronCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end


SaffronCity_Gym_Text_GymStatue::
    .string "Pokémon-Arena von Saffronia City\n"
    .string "Leiterin: Sabrina\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot$"

SaffronCity_Gym_Text_GymStatuePlayerWon::
    .string "Pokémon-Arena von Saffronia City\n"
    .string "Leiterin: Sabrina\p"
    .string "Anerkannte Trainer:\n"
	.string "Blau, Rot, {PLAYER}$"
