ViridianCity_Gym_Frlg_MapScripts::
	.byte 0

ViridianCity_Gym_EventScript_Giovanni::
	famechecker FAMECHECKER_GIOVANNI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	trainerbattle_single TRAINER_LEADER_GIOVANNI, ViridianCity_Gym_Text_GiovanniIntro, ViridianCity_Gym_Text_GiovanniDefeat, ViridianCity_Gym_EventScript_DefeatedGiovanni, NO_MUSIC
	goto_if_unset FLAG_GOT_TM26_FROM_GIOVANNI, ViridianCity_Gym_EventScript_GiveTM26
	msgbox ViridianCity_Gym_Text_GiovanniPostBattle
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_VIRIDIAN_GIOVANNI
	fadescreen FADE_FROM_BLACK
	release
	end

ViridianCity_Gym_EventScript_DefeatedGiovanni::
	famechecker FAMECHECKER_GIOVANNI, 3
	setflag FLAG_HIDE_MISC_KANTO_ROCKETS
	setflag FLAG_DEFEATED_LEADER_GIOVANNI
	setflag FLAG_BADGE08_GET
	setvar VAR_MAP_SCENE_ROUTE22, 3
	set_gym_trainers_frlg 8
	goto ViridianCity_Gym_EventScript_GiveTM26
	end

ViridianCity_Gym_EventScript_GiveTM26::
	msgbox ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis
	checkitemspace ITEM_TM26
	goto_if_eq VAR_RESULT, FALSE, ViridianCity_Gym_EventScript_NoRoomForTM26
	giveitem_msg ViridianCity_Gym_Text_ReceivedTM26FromGiovanni, ITEM_TM26
	setflag FLAG_GOT_TM26_FROM_GIOVANNI
	msgbox ViridianCity_Gym_Text_ExplainTM26
	release
	end

ViridianCity_Gym_EventScript_NoRoomForTM26::
	msgbox ViridianCity_Gym_Text_YouDoNotHaveSpace
	release
	end

ViridianCity_Gym_EventScript_Jason::
	trainerbattle_single TRAINER_TAMER_JASON, ViridianCity_Gym_Text_JasonIntro, ViridianCity_Gym_Text_JasonDefeat
	msgbox ViridianCity_Gym_Text_JasonPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_EventScript_Cole::
	trainerbattle_single TRAINER_TAMER_COLE, ViridianCity_Gym_Text_ColeIntro, ViridianCity_Gym_Text_ColeDefeat
	msgbox ViridianCity_Gym_Text_ColePostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_EventScript_Atsushi::
	trainerbattle_single TRAINER_BLACK_BELT_ATSUSHI, ViridianCity_Gym_Text_AtsushiIntro, ViridianCity_Gym_Text_AtsushiDefeat
	msgbox ViridianCity_Gym_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_EventScript_Kiyo::
	trainerbattle_single TRAINER_BLACK_BELT_KIYO, ViridianCity_Gym_Text_KiyoIntro, ViridianCity_Gym_Text_KiyoDefeat
	msgbox ViridianCity_Gym_Text_KiyoPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_EventScript_Takashi::
	trainerbattle_single TRAINER_BLACK_BELT_TAKASHI, ViridianCity_Gym_Text_TakashiIntro, ViridianCity_Gym_Text_TakashiDefeat
	msgbox ViridianCity_Gym_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_EventScript_Samuel::
	trainerbattle_single TRAINER_COOLTRAINER_SAMUEL, ViridianCity_Gym_Text_SamuelIntro, ViridianCity_Gym_Text_SamuelDefeat
	msgbox ViridianCity_Gym_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_EventScript_Yuji::
	trainerbattle_single TRAINER_COOLTRAINER_YUJI, ViridianCity_Gym_Text_YujiIntro, ViridianCity_Gym_Text_YujiDefeat
	msgbox ViridianCity_Gym_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_EventScript_Warren::
	trainerbattle_single TRAINER_COOLTRAINER_WARREN, ViridianCity_Gym_Text_WarrenIntro, ViridianCity_Gym_Text_WarrenDefeat
	msgbox ViridianCity_Gym_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LEADER_GIOVANNI, ViridianCity_Gym_EventScript_GymGuyPostVictory
	msgbox ViridianCity_Gym_Text_GymGuyAdvice
	release
	end

ViridianCity_Gym_EventScript_GymGuyPostVictory::
	famechecker FAMECHECKER_GIOVANNI, 4
	msgbox ViridianCity_Gym_Text_GymGuyPostVictory
	release
	end

ViridianCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE08_GET, ViridianCity_Gym_EventScript_GymStatuePostVictory
	msgbox ViridianCity_Gym_Text_GymStatue
	releaseall
	end

ViridianCity_Gym_EventScript_GymStatuePostVictory::
	msgbox ViridianCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

ViridianCity_Gym_Text_GiovanniIntro::
	.string "{PLAY_BGM}{MUS_RG_ENCOUNTER_ROCKET}Haha! Willkommen in meinem\n"
	.string "Geheimversteck!\p"
	.string "Hier wollte ich das Team Rocket\n"
	.string "wiederauferstehen lassen!\p"
	.string "Aber du hast mich schon wieder\n"
	.string "aufgespürt! Also gut! Dieses Mal\l"
	.string "kenne ich keine Gnade!\p"
	.string "Ich, Giovanni, der größte aller\n"
	.string "Trainer, fordere Revanche!{PLAY_BGM}éÀ$"

ViridianCity_Gym_Text_GiovanniDefeat::
	.string "Ha!\n"
	.string "Der Kampf war hart, aber fair!\l"
	.string "Du hast gewonnen!\p"
	.string "Nimm bitte den Erdorden zum\n"
	.string "Zeichen meiner Anerkennung!\n"
	.string "{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}$"

ViridianCity_Gym_Text_GiovanniPostBattle::
	.string "Ich habe meinen Meister gefunden!\n"
	.string "Meine Taten waren schlecht...\l"
	.string "Ich löse das TEAM ROCKET auf!\p"
	.string "Von nun an widme ich mein Leben\n"
	.string "dem Studium der POKéMON!\p"
	.string "Vielleicht sehen wir uns eines\n"
	.string "Tages wieder! Lebe wohl!$"

ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis::
	.string "Als Träger des ERDORDENS werden\n"
	.string "dir alle POKéMON jeglichen Levels\l"
	.string "gehorchen!\p"
	.string "Er stellt den Beweis deines Könnens\n"
	.string "als POKéMON TRAINER dar!\p"
	.string "Außerdem gewährt er dir den Zugang\n"
	.string "zur POKéMON LIGA!\p"
	.string "Nimm dieses Geschenk mit in dein\n"
	.string "POKéMON LIGA-Abenteuer!$"

ViridianCity_Gym_Text_ReceivedTM26FromGiovanni::
	.string "{PLAYER} received TM26\n"
	.string "from GIOVANNI.$"

ViridianCity_Gym_Text_ExplainTM26::
	.string "TM26 ist ERDBEBEN!\p"
	.string "Eine sehr starke Attacke, die ein\n"
	.string "starkes Beben verursacht.\p"
	.string "Ich habe sie vor langer Zeit\n"
	.string "geschaffen, als ich hier noch\l"
	.string "ARENALEITER war.$"

ViridianCity_Gym_Text_YouDoNotHaveSpace::
	.string "Du kannst keine weiteren Items mehr\n"
	.string "tragen!$"

ViridianCity_Gym_Text_YujiIntro::
	.string "Hehe!\n"
	.string "So langsam geht dir die Luft aus!$"

ViridianCity_Gym_Text_YujiDefeat::
	.string "Mir gehen die Pokémon aus!!!$"

ViridianCity_Gym_Text_YujiPostBattle::
	.string "Du musst stark sein, um unserem\n"
	.string "Arenaleiter entgegenzutreten!$"

ViridianCity_Gym_Text_AtsushiIntro::
	.string "Kiai! Mit diesem Kampfschrei\n"
	.string "mobilisiere ich meine Kräfte!$"

ViridianCity_Gym_Text_AtsushiDefeat::
	.string "Meister, verzeihe er mir!$"

ViridianCity_Gym_Text_AtsushiPostBattle::
	.string "Ich bin deiner Gnade unwürdig!$"

ViridianCity_Gym_Text_JasonIntro::
	.string "Ich bilde mit meinen Pokémon eine\n"
	.string "Einheit wie Yin und Yang!$"

ViridianCity_Gym_Text_JasonDefeat::
	.string "Deine Pokémon harmonieren gut mit\n"
	.string "dir!$"

ViridianCity_Gym_Text_JasonPostBattle::
	.string "Kennst du die Identität unseres\n"
	.string "Arenaleiters?$"

ViridianCity_Gym_Text_KiyoIntro::
	.string "Karate ist die Königsdisziplin des\n"
	.string "Kampfsports!$"

ViridianCity_Gym_Text_KiyoDefeat::
	.string "Ahh!$"

ViridianCity_Gym_Text_KiyoPostBattle::
	.string "Ach, wären meine POKéMON doch\n"
	.string "auch so starke Karateka wie ich!$"

ViridianCity_Gym_Text_WarrenIntro::
	.string "Der Stil zeichnet einen großen\n"
	.string "Kämpfer aus!$"

ViridianCity_Gym_Text_WarrenDefeat::
	.string "Ich habe den Halt verloren!$"

ViridianCity_Gym_Text_WarrenPostBattle::
	.string "Der Meister wird mich schelten!$"

ViridianCity_Gym_Text_TakashiIntro::
	.string "Ich bin der Karate-könig!\n"
	.string "Ich besiegle dein Schicksal!$"

ViridianCity_Gym_Text_TakashiDefeat::
	.string "Ahh!$"

ViridianCity_Gym_Text_TakashiPostBattle::
	.string "Du willst in die Pokémon Liga? Du?\n"
	.string "Werde bloß nicht größenwahnsinnig!$"

ViridianCity_Gym_Text_ColeIntro::
	.string "Allein mein Anblick lässt deine\n"
	.string "Pokémon schaudern!$"

ViridianCity_Gym_Text_ColeDefeat::
	.string "Sie kringeln sich vor Lachen! Nein!$"

ViridianCity_Gym_Text_ColePostBattle::
	.string "Moment!\n"
	.string "Ich war sorglos!$"

ViridianCity_Gym_Text_SamuelIntro::
	.string "Die Arenahalle von Vertania City\n"
	.string "war lange Zeit geschlossen, doch\l"
	.string "nun ist der Meister zurück!$"

ViridianCity_Gym_Text_SamuelDefeat::
	.string "Ich wurde besiegt?$"

ViridianCity_Gym_Text_SamuelPostBattle::
	.string "Du kannst nur in die Pokémon Liga,\n"
	.string "wenn du unseren Arenaleiter\l"
	.string "besiegst!$"

ViridianCity_Gym_Text_GymGuyAdvice::
	.string "Heh!\n"
	.string "Warte, du Champion in spe!\p"
	.string "Nicht einmal ich kenne die\n"
	.string "Identität des ARENALEITERs\l"
	.string "von VERTANIA CITY!\p"
	.string "Soweit ich weiß, ist er von allen\n"
	.string "ARENALEITERn der gefährlichste!\p"
	.string "Die TRAINER hier setzen gerne\n"
	.string "BODEN-POKéMON ein!$"

ViridianCity_Gym_Text_GymGuyPostVictory::
	.string "Das gibt es nicht!\n"
	.string "GIOVANNI war hier ARENALEITER?$"

ViridianCity_Gym_Text_GymStatue::
	.string "VERTANIA POKéMON-ARENA\n"
	.string "LEITUNG: ?\p"
	.string "BISHERIGE SIEGER:\n"
	.string "{RIVAL}$"

ViridianCity_Gym_Text_GymStatuePlayerWon::
	.string "VERTANIA POKéMON-ARENA\n"
	.string "LEITUNG: GIOVANNI\p"
	.string "BISHERIGE SIEGER:\n"
	.string "{RIVAL}, {PLAYER}$"

