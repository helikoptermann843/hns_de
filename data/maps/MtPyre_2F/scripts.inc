MtPyre_2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
	map_script MAP_SCRIPT_ON_RESUME, MtPyre_2F_SetHoleWarp
	.byte 0

MtPyre_2F_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_MT_PYRE_1F
	end

MtPyre_2F_EventScript_Woman::
	msgbox MtPyre_2F_Text_MemoriesOfSkitty, MSGBOX_NPC
	end

MtPyre_2F_EventScript_PokefanM::
	msgbox MtPyre_2F_Text_TumbledFromFloorAbove, MSGBOX_NPC
	end

MtPyre_2F_EventScript_Mark::
	trainerbattle_single TRAINER_MARK, MtPyre_2F_Text_MarkIntro, MtPyre_2F_Text_MarkDefeat
	msgbox MtPyre_2F_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_EventScript_Luke::
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_LukeIntro, MtPyre_2F_Text_LukeDefeat, MtPyre_2F_Text_LukeNotEnoughMons
	msgbox MtPyre_2F_Text_LukePostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_EventScript_Dez::
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_DezIntro, MtPyre_2F_Text_DezDefeat, MtPyre_2F_Text_DezNotEnoughMons
	msgbox MtPyre_2F_Text_DezPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_EventScript_Leah::
	trainerbattle_single TRAINER_LEAH, MtPyre_2F_Text_LeahIntro, MtPyre_2F_Text_LeahDefeat
	msgbox MtPyre_2F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_EventScript_Zander::
	trainerbattle_single TRAINER_ZANDER, MtPyre_2F_Text_ZanderIntro, MtPyre_2F_Text_ZanderDefeat
	msgbox MtPyre_2F_Text_ZanderPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_Text_MemoriesOfSkitty:
	.string "Die Erinnerungen an meinen Liebling\n"
	.string "ENECO… Ich könnte weinen…$"

MtPyre_2F_Text_TumbledFromFloorAbove:
	.string "Au au au au… Der Boden hat an einigen\n"
	.string "Stellen Löcher.\p"
	.string "Ich habe das nicht gesehen und bin ins\n"
	.string "untere Stockwerk gefallen. Autsch,\l"
	.string "aua.$"

MtPyre_2F_Text_MarkIntro:
	.string "Hey! Suchst du nach POKéMON? Du bist\n"
	.string "mir hinterhergeschlichen! Fiesling!$"

MtPyre_2F_Text_MarkDefeat:
	.string "Oweiowei.\n"
	.string "Tut mir Leid. Entschuldige bitte!$"

MtPyre_2F_Text_MarkPostBattle:
	.string "Hier sind nie viele Leute. Daher soll\n"
	.string "es hier seltene POKéMON geben.$"

MtPyre_2F_Text_LukeIntro:
	.string "LEIF: Wir machen hier eine Mutprobe.\p"
	.string "Hähä, wenn ich zeige, wie cool ich\n"
	.string "bin, wird sie sich sicher in mich\n"
	.string "verlieben! \p"
	.string "Besser: Ich werde dich vernichtend\n"
	.string "schlagen. Dann bin ich echt cool!$"

MtPyre_2F_Text_LukeDefeat:
	.string "LEIF: Huups!$"

MtPyre_2F_Text_LukePostBattle:
	.string "LEIF: Wir haben verloren, aber das\l"
	.string "macht\n"
	.string "nichts! Solange ich nur bei ihr bin.\p"
	.string "Wir\l"
	.string "werden diese Mutprobe bestehen!$"

MtPyre_2F_Text_LukeNotEnoughMons:
	.string "LEIF: Wenn du es mit mir aufnehmen\n"
	.string "willst, brauchst du mehr POKéMON.\p"
	.string "Hast du die nicht, kann ich meiner An-\n"
	.string "gebeteten nicht beweisen, wie cool ich\l"
	.string "bin!$"

MtPyre_2F_Text_DezIntro:
	.string "INA: Ich bin hier, um mit meinem\n"
	.string "Freund eine Mutprobe zu bestehen.\p"
	.string "Es ist unheimlich hier, aber zusammen\n"
	.string "mit meinem Freund ist es schon okay.\p"
	.string "Ich hab’s: Mein Freund soll zeigen,\n"
	.string "wie\l"
	.string "cool er ist, indem er dich besiegt!$"

MtPyre_2F_Text_DezDefeat:
	.string "INA: Uuuaaa! Ich habe Angst.$"

MtPyre_2F_Text_DezPostBattle:
	.string "INA: Wir sind ineinander verliebt,\n"
	.string "daher stört uns eine Niederlage nicht.$"

MtPyre_2F_Text_DezNotEnoughMons:
	.string "INA: Wenn du gegen uns antreten\n"
	.string "willst,\n"
	.string "solltest du mindestens zwei POKéMON\l"
	.string "besitzen.\p"
	.string "Mein Freund ist stark. Daher wirst du\n"
	.string "mit einem POKéMON nichts ausrichten.$"

MtPyre_2F_Text_LeahIntro:
	.string "Dein Anblick ist echt ungewöhnlich…\n"
	.string "Verschwinde, bevor dir irgendwas\l"
	.string "passiert.$"

MtPyre_2F_Text_LeahDefeat:
	.string "Hmm… Ausdauer hast du ja…$"

MtPyre_2F_Text_LeahPostBattle:
	.string "In unserer Familie gibt es schon seit\n"
	.string "Generationen TRAINER, die in dieser\l"
	.string "Gegend leben…\p"
	.string "Es ist eine Pflicht, den Berg zu\n"
	.string "beschützen…$"

MtPyre_2F_Text_ZanderIntro:
	.string "Kiyaaaah!\n"
	.string "Ich bin außer mir vor Schreck.$"

MtPyre_2F_Text_ZanderDefeat:
	.string "Neeeeiiiiiiinnnnn!\n"
	.string "Ich habe meine Intelligenz verloren.$"

MtPyre_2F_Text_ZanderPostBattle:
	.string "Ich mach mir jedes Mal vor Schreck in\n"
	.string "die Hose, wenn sich etwas bewegt…\p"
	.string "Ich hätte nicht hierher kommen dürfen…$"

