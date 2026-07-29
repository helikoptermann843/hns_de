MtMoon_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_1F_OnTransition
	.byte 0

MtMoon_1F_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_MT_MOON_1F
	end

MtMoon_1F_EventScript_ZubatSign::
	msgbox MtMoon_1F_Text_ZubatIsABloodsucker, MSGBOX_SIGN
	end

MtMoon_1F_EventScript_Marcos::
	trainerbattle_single TRAINER_HIKER_MARCOS, MtMoon_1F_Text_MarcosIntro, MtMoon_1F_Text_MarcosDefeat
	msgbox MtMoon_1F_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_1F_EventScript_Josh::
	trainerbattle_single TRAINER_YOUNGSTER_JOSH, MtMoon_1F_Text_JoshIntro, MtMoon_1F_Text_JoshDefeat
	msgbox MtMoon_1F_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_1F_EventScript_Miriam::
	trainerbattle_single TRAINER_LASS_MIRIAM, MtMoon_1F_Text_MiriamIntro, MtMoon_1F_Text_MiriamDefeat
	msgbox MtMoon_1F_Text_MiriamPostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_1F_EventScript_Iris::
	trainerbattle_single TRAINER_LASS_IRIS, MtMoon_1F_Text_IrisIntro, MtMoon_1F_Text_IrisDefeat
	msgbox MtMoon_1F_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_1F_EventScript_Jovan::
	trainerbattle_single TRAINER_SUPER_NERD_JOVAN, MtMoon_1F_Text_JovanIntro, MtMoon_1F_Text_JovanDefeat
	msgbox MtMoon_1F_Text_JovanPostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_1F_EventScript_Kent::
	trainerbattle_single TRAINER_BUG_CATCHER_KENT, MtMoon_1F_Text_KentIntro, MtMoon_1F_Text_KentDefeat
	msgbox MtMoon_1F_Text_KentPostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_1F_EventScript_Robby::
	trainerbattle_single TRAINER_BUG_CATCHER_ROBBY, MtMoon_1F_Text_RobbyIntro, MtMoon_1F_Text_RobbyDefeat
	msgbox MtMoon_1F_Text_RobbyPostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_1F_Text_MarcosIntro::
	.string "Hilfe! Überfall!\n"
	.string "Ach, du bist ja nur ein Kind!$"

MtMoon_1F_Text_MarcosDefeat::
	.string "Wow!\n"
	.string "Du hast mich total überrumpelt!!!$"

MtMoon_1F_Text_MarcosPostBattle::
	.string "Hier ist kein Spielplatz.\n"
	.string "Zieh Leine, Kiddie!$"

MtMoon_1F_Text_JoshIntro::
	.string "Bist du auch auf Forschungsreise?$"

MtMoon_1F_Text_JoshDefeat::
	.string "So ein Mist!\n"
	.string "Verloren!$"

MtMoon_1F_Text_JoshPostBattle::
	.string "Ich bin hier, weil die Mädchen auf\n"
	.string "harte Kerle wie mich stehen!$"

MtMoon_1F_Text_MiriamIntro::
	.string "Wow, hier drinnen kann man sich\n"
	.string "leicht verlaufen!$"

MtMoon_1F_Text_MiriamDefeat::
	.string "Nein!\n"
	.string "Ich habe verloren!$"

MtMoon_1F_Text_MiriamPostBattle::
	.string "Ich werde fleißig üben, damit ich\n"
	.string "ein guter Trainer werde!$"

MtMoon_1F_Text_JovanIntro::
	.string "Heh!\n"
	.string "Schleich nicht so herum!$"

MtMoon_1F_Text_JovanDefeat::
	.string "Meine Pokémon bringen es nicht!$"

MtMoon_1F_Text_JovanPostBattle::
	.string "Ich muss stärkere Pokémon fangen!$"

MtMoon_1F_Text_IrisIntro::
	.string "Was gibt's? Meine Kumpels müssten\n"
	.string "gleich hier sein.$"

MtMoon_1F_Text_IrisDefeat::
	.string "Ich hab verloren?$"

MtMoon_1F_Text_IrisPostBattle::
	.string "Du hast diese Orden im Kampf\n"
	.string "gegen Arenaleiter gewonnen, oder?$"

MtMoon_1F_Text_KentIntro::
	.string "Wer da? Wohin man schaut: Überall\n"
	.string "nur zwielichtige Gestalten!$"

MtMoon_1F_Text_KentDefeat::
	.string "Du hast mich eiskalt erwischt!$"

MtMoon_1F_Text_KentPostBattle::
	.string "Ohne Zweifel!\n"
	.string "Die Typen waren vom Team Rocket!$"

MtMoon_1F_Text_RobbyIntro::
	.string "Du erreichst Azuria City, wenn du\n"
	.string "es durch diese Höhle schaffst!$"

MtMoon_1F_Text_RobbyDefeat::
	.string "Ich hab verloren...$"

MtMoon_1F_Text_RobbyPostBattle::
	.string "Zubat ist recht widerspenstig, kann\n"
	.string "im Kampf jedoch sehr nützlich sein!$"

MtMoon_1F_Text_ZubatIsABloodsucker::
	.string "Ich bin besiegt!\n"
	.string "Ich werde nach Hause fliegen!$"

MtMoon_1F_Text_BrockHelpsExcavateFossils::
	.string "Hallo! Ich grabe Fossilien hier am\n"
	.string "Mondberg aus.\p"
	.string "Manchmal hilft mir Rocko, der\n"
	.string "Arenaleiter von Marmoria City.$"
