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
	giveitem ITEM_TM_SKILL_SWAP
	setflag FLAG_BADGE13_GET
	setflag FLAG_DEFEATED_SAFFRON_GYM
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
	.string "SABRINA: Ich wusste, dass du\n"
	.string "kommen würdest…\p"
	.string "Vor drei Jahren hatte ich eine\n"
	.string "Vision von deiner Ankunft.\p"
	.string "Du willst meinen ORDEN.\p"
	.string "Ich kämpfe nicht gern, aber es\n"
	.string "ist meine Pflicht als LEITERIN,\l"
	.string "ORDEN an alle zu verleihen,\l"
	.string "die es verdient haben.\p"
	.string "Wenn du es wünschst, zeige ich\n"
	.string "dir meine Psychokräfte!$"

SaffronCity_Gym_Text_SabrinaWinLoss:
	.string "SABRINA: Deine Kraft…\p"
	.string "Sie übersteigt bei weitem,\n"
	.string "was ich vorausgesehen habe…\p"
	.string "Vielleicht lässt sich die\n"
	.string "Zukunft nicht vollständig\l"
	.string "vorhersagen…\p"
	.string "Du hast gewonnen. Du hast dir\n"
	.string "den SUMPFORDEN verdient.$"

SaffronCity_Gym_Text_ReceivedMarshBadge:
	.string "{PLAYER} erhielt den\n"
	.string "SUMPFORDEN.$"

SaffronCity_Gym_Text_MarshBadgeInfo:
	.string "SABRINA: Der SUMPFORDEN\n"
	.string "weckt deine verborgenen Kräfte…\p"
	.string "Auch wenn ich deine Kraft nicht\n"
	.string "genau vorhersehen konnte, das\l"
	.string "weiß ich mit Sicherheit:\p"
	.string "Du wirst ein gefeierter und\n"
	.string "geliebter CHAMPION!$"

SaffronCity_Gym_Text_SabrinaPostBattle:
	.string "SABRINA: Deine Liebe zu deinen\n"
	.string "POKÉMON hat meine Psychokraft\l"
	.string "überwältigt…\p"
	.string "Die Kraft der Liebe ist wohl\n"
	.string "auch eine Art Psychokraft…$"

SaffronCity_Gym_Text_SabrinaRematch:
	.string "SABRINA: Ah, der KANTO-CHAMPION.\p"
	.string "Ich spürte deine Rückkehr.\p"
	.string "Deine Kraft ist enorm gewachsen.\p"
	.string "Selbst jetzt spüre ich\n"
	.string "deine Aura.\p"
	.string "Möchtest du einen Rückkampf?$"

SaffronCity_Gym_Text_SabrinaRematchDefeat:
	.string "SABRINA: Deine Liebe zu deinen\n"
	.string "POKÉMON hat meine Psychokraft\l"
	.string "wieder überwältigt…$"

SaffronCity_Gym_Text_MediumRebeccaSeen:
	.string "Die Kraft aller Besiegten\n"
	.string "strömt zu mir!$"

SaffronCity_Gym_Text_MediumRebeccaBeaten:
	.string "Stark… Viel zu stark…$"

SaffronCity_Gym_Text_MediumRebeccaAfter:
	.string "Was ist die Quelle deiner Kraft?$"

SaffronCity_Gym_Text_PsychicFranklinSeen:
	.string "Psychokraft ist die Kraft\n"
	.string "deiner Seele.$"

SaffronCity_Gym_Text_PsychicFranklinBeaten:
	.string "Deine Seele ist stärker\n"
	.string "als meine!$"

SaffronCity_Gym_Text_PsychicFranklinAfter:
	.string "Du hast nicht nur deine\n"
	.string "Fähigkeiten, sondern auch\l"
	.string "deine Seele gestärkt.$"

SaffronCity_Gym_Text_MediumDorisSeen:
	.string "Fufufufu… Ich sehe es klar.\p"
	.string "Ich kann in deine Seele\n"
	.string "blicken!$"

SaffronCity_Gym_Text_MediumDorisBeaten:
	.string "Ich hab dich durchschaut und\n"
	.string "trotzdem verloren…$"

SaffronCity_Gym_Text_MediumDorisAfter:
	.string "Mist! Ich hatte vorausgesagt,\n"
	.string "dass ich gegen dich verlieren\l"
	.string "würde - und vergessen!$"

SaffronCity_Gym_Text_PsychicJaredSeen:
	.string "Das KAMPFDOJO nebenan war\n"
	.string "einst die ARENA dieser Stadt.$"

SaffronCity_Gym_Text_PsychicJaredBeaten:
	.string "Ich war chancenlos…$"

SaffronCity_Gym_Text_PsychicJaredAfter:
	.string "KARATEKÖNIG, der Meister des\n"
	.string "KAMPFDOJOS, wurde von\l"
	.string "SABRINA vernichtend geschlagen.$"

SaffronCity_Gym_Text_GymGuideIntro:
	.string "Yo, CHAMP in spe!\p"
	.string "Ein TRAINER wie du weiß\n"
	.string "sicher, wie man mit PSYCHO-\l"
	.string "POKÉMON umgeht, oder?\p"
	.string "Ich erwarte Großes von dir!\p"
	.string "Viel Erfolg!$"

SaffronCity_Gym_Text_GymGuideWin:
	.string "Das war wieder ein\n"
	.string "fantastischer Kampf!$"

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
    .string "SAFFRONIA POKéMON ARENA\n"
    .string "LEITER: SABRINA\p"
	.string "GEWINNER:\n"
	.string "BLUE, RED$"

SaffronCity_Gym_Text_GymStatuePlayerWon::
    .string "SAFFRONIA POKéMON ARENA\n"
    .string "LEITER: SABRINA\p"
    .string "GEWINNER:\n"
	.string "BLAU, ROT, {PLAYER}$"
