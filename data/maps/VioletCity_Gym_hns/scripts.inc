VioletCity_Gym_hns_MapScripts::
	.byte 0

VioletCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_VIOLET_GYM, VioletCity_Gym_EventScript_GymGuy2
	msgbox VioletGym_Text_GymGuide_Intro, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_Gym_EventScript_GymGuy2::
	msgbox VioletGym_Text_GymGuide_Win, MSGBOX_DEFAULT
	release
	end

VioletCity_Gym_EventScript_Rod::
	trainerbattle_single TRAINER_ROD_HNS, VioletGym_Text_BirdKeeperRod_Seen, VioletGym_Text_BirdKeeperRod_Beaten
	msgbox VioletGym_Text_BirdKeeperRod_After, MSGBOX_AUTOCLOSE
	end

VioletCity_Gym_EventScript_Abe::
	trainerbattle_single TRAINER_ABE_HNS, VioletGym_Text_BirdKeeperAbe_Seen, VioletGym_Text_BirdKeeperAbe_Beaten
	msgbox VioletGym_Text_BirdKeeperAbe_After, MSGBOX_AUTOCLOSE
	end

VioletCity_Gym_EventScript_Falkner::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_VIOLET_GYM, VioletCity_Gym_EventScript_Falkner_Defeated
	msgbox VioletGym_Text_Falkner_Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_FALKNER_1_HNS, VioletGym_Text_Falkner_WinLoss
	message VioletGym_Text_ReceivedZephyrBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox VioletGym_Text_Falkner_BadgeExplain, MSGBOX_DEFAULT
	setflag FLAG_BADGE01_GET
	setflag FLAG_DEFEATED_VIOLET_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 1
	call Common_EventScript_SetGymTrainers_hns
	giveitem ITEM_TM_ROOST
	msgbox VioletGym_Text_Falkner_TMExplain, MSGBOX_DEFAULT
	setvar VAR_VIOLET_CITY_STATE, 3
	setrespawn HEAL_LOCATION_VIOLET_CITY_HNS
	closemessage
	release
	end

VioletCity_Gym_EventScript_Falkner_Defeated::
	msgbox VioletGym_Text_Falkner_AfterFight, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletGym_Text_Falkner_Intro:
	.string "Falk: Ich bin Falk, der Arenaleiter\n"
	.string "von Viola City!\p"
	.string "Viele Leute sagen, mit Elektro-Attacken\n"
	.string "könne man Pokémon vom Typ Flug\l"
	.string "ganz leicht die Flügel stutzen und\l"
	.string "machen sich so über mich lustig…\p"
	.string "Das kann ich so nicht stehen lassen!\p"
	.string "Wenn du erst mal siehst, wie anmutig\n"
	.string "meine Flug-Pokémon durch die Lüfte\l"
	.string "gleiten, weißt du, was wahre Größe ist!$"

VioletGym_Text_Falkner_WinLoss:
	.string "…Mist! Das wertvolle Vogel-\n"
	.string "Pokémon meines Vaters…\p"
	.string "Hier, nimm das.\p"
	.string "Es ist der offizielle\n"
	.string "Flügelorden der Pokémon Liga.$"

VioletGym_Text_ReceivedZephyrBadge:
	.string "{PLAYER} erhält den Flügelorden!$"

VioletGym_Text_Falkner_BadgeExplain:
	.string "Flügelorden erhöht die Attacke\n"
	.string "deiner Pokémon.\p"
	.string "Er erlaubt Pokémon auch Blitz\n"
	.string "einzusetzen, wenn sie es lernen,\l"
	.string "können.\p"
	.string "Hier-nimm das auch.$"

VioletGym_Text_Falkner_TMExplain:
	.string "Mit einer TM lernt ein Pokémon\n"
	.string "sofort eine neue Attacke.\p"
	.string "TM51 enthält Ruheort.\p"
	.string "Damit heilt dein Pokémon die Hälfte\n"
	.string "seiner KP, verliert dafür aber bis\l"
	.string "zum Rundenende den Flug-Typ.$"

VioletGym_Text_Falkner_AfterFight:
	.string "Falk: Du wirst von nun an in den Arenen\n"
	.string "vieler Städte zum Kampf antreten.\p"
	.string "Als Nächstes… ja, als Nächstes nimmst\n"
	.string "du dir am besten Azalea City vor!\p"
	.string "Ich werde noch härter trainieren, um\n"
	.string "der größte Vogelfänger aller Zeiten\l"
	.string "zu werden!$"

VioletGym_Text_Falkner_Rematch:
	.string "Glückwunsch zum Sieg über die\n"
	.string "Top-vier!\p"
	.string "Ich habe meine Vogel-Pokémon\n"
	.string "noch härter trainiert.\p"
	.string "Denkst du, du kannst erneut\n"
	.string "die Kraft der Lüfte meistern?$"

VioletGym_Text_Falkner_RematchLoss:
	.string "Wow… Du hast mich wieder geschlagen.\p"
	.string "Ich werde härter trainieren,\n"
	.string "um der beste Vogel-Meister zu werden!$"

VioletGym_Text_BirdKeeperRod_Seen:
	.string "Das Stichwort ist Mut!\p"
	.string "Hier trainieren sie Tag und Nacht,\n"
	.string "um Vogel-Pokémon zu meistern.\p"
	.string "Los geht’s!$"

VioletGym_Text_BirdKeeperRod_Beaten:
	.string "Urgs!$"

VioletGym_Text_BirdKeeperRod_After:
	.string "Falkners Können ist groß!\p"
	.string "Sei nicht überheblich,\n"
	.string "nur weil du mich geschlagen hast!$"

VioletGym_Text_BirdKeeperAbe_Seen:
	.string "Mal sehen, ob du gut genug bist\n"
	.string "für Falkner!$"

VioletGym_Text_BirdKeeperAbe_Beaten:
	.string "Das kann nicht wahr sein!$"

VioletGym_Text_BirdKeeperAbe_After:
	.string "Peinlich, gegen einen Anfänger-\n"
	.string "Trainer zu verlieren…$"

VioletGym_Text_GymGuide_Intro:
	.string "Hey! Was geht? Ich bin kein\n"
	.string "Trainer, aber ich kann ein paar\l"
	.string "Tipps geben!\p"
	.string "Hörst du zu?\n"
	.string "Dann pass auf.\p"
	.string "Falkners Trumpf ist eine kräftige\n"
	.string "Eule, die gern Beeren frisst.\p"
	.string "Sie ist nicht die stärkste,\n"
	.string "aber kann viel einstecken.\p"
	.string "Wenn du mehr Tipps willst,\n"
	.string "geh zur Pokémon-Akademie.\p"
	.string "Die Schüler dort kennen sich richtig\n"
	.string "gut aus!$"

VioletGym_Text_GymGuide_Win:
	.string "Netter Kampf! Mach immer so\n"
	.string "weiter und aus dir wird schon\l"
	.string "bald ein echter Champ!$"

VioletCity_Gym_EventScript_Statue::
	lock
	goto_if_set FLAG_DEFEATED_VIOLET_GYM, VioletCity_Gym_EventScript_Statue2
	msgbox VioletCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_Gym_EventScript_Statue2::
	msgbox VioletCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_Gym_Text_GymStatue:
	.string "Pokémon-Arena von Viola City$"

VioletCity_Gym_Text_GymStatueCertified:
	.string "Pokémon-Arena von Viola City\p"
	.string "Leiter: Falk\n"
	.string "Anerkannte Trainer:\p"
	.string "{PLAYER}$"
