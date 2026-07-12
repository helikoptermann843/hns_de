GoldenrodCity_Gym_hns_MapScripts::
	.byte 0
@Carrie, Bridget, Victoria, Samantha, gym guy


GoldenrodCity_Gym_EventScript_Carrie::
	trainerbattle_single TRAINER_CARRIE_HNS, GoldenrodCity_Gym_Text_LassCarrieSeen, GoldenrodCity_Gym_Text_LassCarrieBeaten
	msgbox GoldenrodCity_Gym_Text_LassCarrieAfter, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_Bridget::
	trainerbattle_single TRAINER_BRIDGET_HNS, GoldenrodCity_Gym_Text_LassBridgetSeen, GoldenrodCity_Gym_Text_LassBridgetBeaten
	msgbox GoldenrodCity_Gym_Text_LassBridgetAfter, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_Victoria::
	trainerbattle_single TRAINER_VICTORIA_HNS, GoldenrodCity_Gym_Text_BeautyVictoriaSeen, GoldenrodCity_Gym_Text_BeautyVictoriaBeaten
	msgbox GoldenrodCity_Gym_Text_BeautyVictoriaAfter, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_Samantha::
	trainerbattle_single TRAINER_SAMANTHA_HNS, GoldenrodCity_Gym_Text_BeautySamanthaSeen, GoldenrodCity_Gym_Text_BeautySamanthaBeaten
	msgbox GoldenrodCity_Gym_Text_BeautySamanthaAfter, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_Gym_Guy::
	lock
	faceplayer
	goto_if_set FLAG_BADGE03_GET, GoldenrodCity_Gym_EventScript_Gym_Guy_After
	msgbox GoldenrodCity_Gym_Text_GymGuide, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_Gym_Guy_After::
	msgbox GoldenrodCity_Gym_Text_GymGuideWin, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_Whitney::
	lock
	faceplayer
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 3, GoldenrodCity_Gym_EventScript_WhitneyCrying
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 4, GoldenrodCity_Gym_EventScript_WhitneyBadge
	goto_if_set FLAG_DEFEATED_GOLDENROD_CITY_GYM, GoldenrodCity_Gym_EventScript_WhitneyDefeated
	msgbox GoldenrodCity_Gym_Text_WhitneyBefore, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_WHITNEY_1_HNS, GoldenrodCity_Gym_Text_WhitneyShouldntBeSoSerious
	msgbox GoldenrodCity_Gym_Text_WhitneyYouMeanie, MSGBOX_DEFAULT
	setvar VAR_GOLDENROD_CITY_STATE, 3
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_WhitneyCrying::
	lock
	faceplayer
	msgbox GoldenrodCity_Gym_Text_WhitneyYouMeanie, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_WhitneyBadge::
	lock
	faceplayer
	msgbox GoldenrodCity_Gym_Text_WhitneyWhatDoYouWant, MSGBOX_DEFAULT
	closemessage
	message GoldenrodCity_Gym_Text_PlayerReceivedPlainBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox GoldenrodCity_Gym_Text_WhitneyPlainBadge, MSGBOX_DEFAULT
	setflag FLAG_BADGE03_GET
	setflag FLAG_DEFEATED_GOLDENROD_CITY_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 3
	call Common_EventScript_SetGymTrainers_hns
	giveitem ITEM_TM_ATTRACT
	msgbox GoldenrodCity_Gym_Text_WhitneyAttract, MSGBOX_DEFAULT
	setvar VAR_GOLDENROD_CITY_STATE, 5
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_WhitneyDefeated::
	lock
	faceplayer
	msgbox GoldenrodCity_Gym_Text_WhitneyGoodCry, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_Trigger::	
	turnobject LOCALID_GOLDENROD_CITY_GYM_BRIDGET DIR_WEST
	msgbox GoldenrodCity_Gym_Text_BridgetWhitneyCries, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	setvar VAR_GOLDENROD_CITY_STATE, 4
	closemessage
	release
	end


GoldenrodCity_Gym_EventScript_Statue::
	lock
	goto_if_set FLAG_DEFEATED_GOLDENROD_CITY_GYM, GoldenrodCity_Gym_EventScript_Statue2
	msgbox GoldenrodCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_Statue2::
	msgbox GoldenrodCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Gym_Text_GymStatue:
	.string "DUKATIA Pokémon Arena$"

GoldenrodCity_Gym_Text_GymStatueCertified:
	.string "DUKATIA CITY Pokémon Arena\p"
	.string "Bianka's zertifizierte Trainer:\n"
	.string "{PLAYER}$"

GoldenrodCity_Gym_Text_WhitneyBefore:
	.string "Hi! Ich bin Bianka!\p"
	.string "Alle mochten Pokémon, also hab\n"
	.string "ich auch angefangen!\p"
	.string "Pokémon sind so niedlich!\p"
	.string "Willst du kämpfen? Pass auf,\n"
	.string "ich bin echt gut!$"

GoldenrodCity_Gym_Text_WhitneyShouldntBeSoSerious:
	.string "Schnief…\p"
	.string "…Waaaaah! Du bist gemein!\p"
	.string "Sei nicht so ernst! Du…\n"
	.string "du Kind, du!$"

GoldenrodCity_Gym_Text_WhitneyYouMeanie:
	.string "Waaaaah!\p"
	.string "Waaaaah!\p"
	.string "…Schnief, hic… …Du Gemeiner!$"

GoldenrodCity_Gym_Text_WhitneyWhatDoYouWant:
	.string "…Schnief…\p"
	.string "Was? Was willst du? Einen Orden?\p"
	.string "Ach, richtig. Hab ich vergessen.\n"
	.string "Hier ist der Normalorden.$"

GoldenrodCity_Gym_Text_PlayerReceivedPlainBadge:
	.string "{PLAYER} erhielt Normalorden.$"

GoldenrodCity_Gym_Text_WhitneyPlainBadge:
	.string "Normalorden lässt dein Pokémon\n"
	.string "Stärke auch außerhalb des Kampfes\l"
	.string "einsetzen.\p"
	.string "Erhöht auch die Verteidigung!\p"
	.string "Hier, nimm ihn auch!$"

GoldenrodCity_Gym_Text_WhitneyAttract:
	.string "Das ist Anziehung! Es nutzt den\n"
	.string "Charme eines Pokémon voll aus.\p"
	.string "Perfekt für niedliche Pokémon,\n"
	.string "so wie meine!$"

GoldenrodCity_Gym_Text_WhitneyGoodCry:
	.string "Ah, das war ein gutes Weinen!$"

GoldenrodCity_Gym_Text_WhitneyRematch:
	.string "Hi! Du bist es!\p"
	.string "Wow, JOHTO CHAMPION jetzt?\p"
	.string "Du bist echt stark!\p"
	.string "Ich will sehen, wie stark du bist.\p"
	.string "Willst du ein Rematch mit mir?$"

GoldenrodCity_Gym_Text_WhitneyRematchDefeat:
	.string "Waaaaah!\p"
	.string "Waaaaah!\p"
	.string "…Schnief, hic… …Du Gemeiner!$"

GoldenrodCity_Gym_Text_LassCarrieSeen:
	.string "Lass dich nicht von dem niedlichen\n"
	.string "Aussehen meiner Pokémon täuschen.\p"
	.string "Sie können dich schlagen!$"

GoldenrodCity_Gym_Text_LassCarrieBeaten:
	.string "Oh… ich dachte du wärst schwach…$"

GoldenrodCity_Gym_Text_LassCarrieAfter:
	.string "Denkt mein Pokémon, ich bin süß?$"

GoldenrodCity_Gym_Text_LassBridgetSeen:
	.string "Ich mag niedliche Pokémon lieber\n"
	.string "als starke.\p"
	.string "Aber ich habe starke und niedliche\n"
	.string "Pokémon!$"

GoldenrodCity_Gym_Text_LassBridgetBeaten:
	.string "Oh, nein, nein, nein!$"

GoldenrodCity_Gym_Text_LassBridgetAfter:
	.string "Ich versuche Bianka zu schlagen…\n"
	.string "Es ist deprimierend.\p"
	.string "Aber egal! Wenn ich verliere,\n"
	.string "versuche ich es beim nächsten Mal\l"
	.string "einfach härter!$"

GoldenrodCity_Gym_Text_BridgetWhitneyCries:
	.string "Oh nein. Du hast Bianka zum\n"
	.string "Weinen gebracht.\p"
	.string "Schon gut. Sie hört bald auf.\n"
	.string "Sie weint immer, wenn sie verliert.$"

GoldenrodCity_Gym_Text_BeautyVictoriaSeen:
	.string "Oh, du bist ein süßer Trainer!\p"
	.string "Ich mag dich, aber ich halte mich\n"
	.string "nicht zurück!$"

GoldenrodCity_Gym_Text_BeautyVictoriaBeaten:
	.string "Mal sehen… Ups, vorbei?$"

GoldenrodCity_Gym_Text_BeautyVictoriaAfter:
	.string "Wow, du musst gut sein, um mich\n"
	.string "zu schlagen! Weiter so!$"

GoldenrodCity_Gym_Text_BeautySamanthaSeen:
	.string "Gib dein Bestes, sonst pack ich\n"
	.string "dich!$"

GoldenrodCity_Gym_Text_BeautySamanthaBeaten:
	.string "Nein! Oh, Mauzi, tut mir leid!$"

GoldenrodCity_Gym_Text_BeautySamanthaAfter:
	.string "Ich habe Mauzi Tricks beigebracht,\n"
	.string "um jeden Typ zu besiegen…$"

GoldenrodCity_Gym_Text_GymGuide:
	.string "Yo! CHAMP in spe!\p"
	.string "In dieser PKMN-ARENA\n"
	.string "warten Trainer mit Pokémon des\l"
	.string "Typs Normal auf dich.\p"
	.string "Ich rate dir,\n"
	.string "Kampf-Pokémon einzusetzen.$"

GoldenrodCity_Gym_Text_GymGuideWin:
	.string "Du hast gewonnen?\n"
	.string "Toll! Ich war damit beschäftigt, die\l"
	.string "hübschen Damen hier zu bewundern.$"

