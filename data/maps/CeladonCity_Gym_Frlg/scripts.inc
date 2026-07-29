CeladonCity_Gym_Frlg_MapScripts::
	.byte 0

CeladonCity_Gym_EventScript_Erika::
	famechecker FAMECHECKER_ERIKA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	trainerbattle_single TRAINER_LEADER_ERIKA, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
	goto_if_unset FLAG_GOT_TM19_FROM_ERIKA, CeladonCity_Gym_EventScript_GiveTM19
	famechecker FAMECHECKER_ERIKA, 4
	msgbox CeladonCity_Gym_Text_ErikaPostBattle
	release
	end

CeladonCity_Gym_EventScript_DefeatedErika::
	famechecker FAMECHECKER_ERIKA, 1
	clearflag FLAG_HIDE_FAME_CHECKER_ERIKA_JOURNALS
	setflag FLAG_DEFEATED_ERIKA
	setflag FLAG_BADGE04_GET
	set_gym_trainers_frlg 4
	goto CeladonCity_Gym_EventScript_GiveTM19
	end

CeladonCity_Gym_EventScript_GiveTM19::
	msgbox CeladonCity_Gym_Text_ExplainRainbowBadgeTakeThis
	checkitemspace ITEM_TM19
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_Gym_EventScript_NoRoomForTM19
	giveitem_msg CeladonCity_Gym_Text_ReceivedTM19FromErika, ITEM_TM19
	setflag FLAG_GOT_TM19_FROM_ERIKA
	msgbox CeladonCity_Gym_Text_ExplainTM19
	release
	end

CeladonCity_Gym_EventScript_NoRoomForTM19::
	msgbox CeladonCity_Gym_Text_ShouldMakeRoomForThis
	release
	end

CeladonCity_Gym_EventScript_Kay::
	trainerbattle_single TRAINER_LASS_KAY, CeladonCity_Gym_Text_KayIntro, CeladonCity_Gym_Text_KayDefeat
	msgbox CeladonCity_Gym_Text_KayPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Lisa::
	trainerbattle_single TRAINER_LASS_LISA, CeladonCity_Gym_Text_LisaIntro, CeladonCity_Gym_Text_LisaDefeat
	famechecker FAMECHECKER_ERIKA, 2
	msgbox CeladonCity_Gym_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Tina::
	trainerbattle_single TRAINER_PICNICKER_TINA, CeladonCity_Gym_Text_TinaIntro, CeladonCity_Gym_Text_TinaDefeat
	msgbox CeladonCity_Gym_Text_TinaPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Bridget::
	trainerbattle_single TRAINER_BEAUTY_BRIDGET, CeladonCity_Gym_Text_BridgetIntro, CeladonCity_Gym_Text_BridgetDefeat
	msgbox CeladonCity_Gym_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Tamia::
	trainerbattle_single TRAINER_BEAUTY_TAMIA, CeladonCity_Gym_Text_TamiaIntro, CeladonCity_Gym_Text_TamiaDefeat
	famechecker FAMECHECKER_ERIKA, 3
	msgbox CeladonCity_Gym_Text_TamiaPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Lori::
	trainerbattle_single TRAINER_BEAUTY_LORI, CeladonCity_Gym_Text_LoriIntro, CeladonCity_Gym_Text_LoriDefeat
	msgbox CeladonCity_Gym_Text_LoriPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Mary::
	trainerbattle_single TRAINER_COOLTRAINER_MARY, CeladonCity_Gym_Text_MaryIntro, CeladonCity_Gym_Text_MaryDefeat
	msgbox CeladonCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, CeladonCity_Gym_EventScript_GymStatuePostVictory
	msgbox CeladonCity_Gym_Text_GymStatue
	releaseall
	end

CeladonCity_Gym_EventScript_GymStatuePostVictory::
	msgbox CeladonCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

CeladonCity_Gym_Text_ErikaIntro::
	.string "Ist das Wetter nicht wundervoll?\n"
	.string "Einfach herrlich!\p"
	.string "Du meine Güte... ich muss kurz\n"
	.string "eingenickt sein! Willkommen!\p"
	.string "Ich bin Erika, die Arenaleiterin\n"
	.string "von Prismania City!\p"
	.string "Ich liebe die Kräfte der Natur!\n"
	.string "Deshalb trainiere ich Pflanzen-\l"
	.string "Pokémon.\p"
	.string "Du möchtest gegen mich antreten?\n"
	.string "Also gut!\p"
	.string "Ich werde ohnehin nicht verlieren!$"

CeladonCity_Gym_Text_ErikaDefeat::
	.string "Ich muss meine Niederlage\n"
	.string "eingestehen!\p"
	.string "Deine Stärke ist beachtlich!\n"
	.string "Ich übergebe dir den Farborden!$"

CeladonCity_Gym_Text_ErikaPostBattle::
	.string "Du katalogisierst Pokémon?\n"
	.string "Ich bin beeindruckt!\p"
	.string "Ich würde niemals Pokémon sammeln,\n"
	.string "die mich nicht interessieren!$"

CeladonCity_Gym_Text_ExplainRainbowBadgeTakeThis::
	.string "Der Farborden lässt Pokémon bis\n"
	.string "Level 50 deinen Befehlen folgen!\p"
	.string "Außerdem können deine Pokémon nun\n"
	.string "Stärke außerhalb von Kämpfen\l"
	.string "anwenden.\p"
	.string "Nimm bitte noch dieses Geschenk:$"

CeladonCity_Gym_Text_ReceivedTM19FromErika::
	.string "{PLAYER} received TM19\n"
	.string "from Erika.$"

CeladonCity_Gym_Text_ExplainTM19::
	.string "TM19 ist Gigasauger.\p"
	.string "Dein Pokémon erhält die Hälfte der\n"
	.string "KP, die diese Attacke dem Gegner\l"
	.string "abzieht!$"

CeladonCity_Gym_Text_ShouldMakeRoomForThis::
	.string "Du solltest etwas Platz schaffen!$"

CeladonCity_Gym_Text_KayIntro::
	.string "Ich sollte dir etwas über diese\n"
	.string "Arena erzählen.\l"
	.string "Nur echte Damen sind hier\l"
	.string "zugelassen!$"

CeladonCity_Gym_Text_KayDefeat::
	.string "Sei nicht so grob zu mir!$"

CeladonCity_Gym_Text_KayPostBattle::
	.string "Buääh!\n"
	.string "Das wird Erika dir heimzahlen!$"

CeladonCity_Gym_Text_BridgetIntro::
	.string "Mir wurde es schon langweilig!$"

CeladonCity_Gym_Text_BridgetDefeat::
	.string "Meine Frisur!\n"
	.string "Ganz zerzaust!$"

CeladonCity_Gym_Text_BridgetPostBattle::
	.string "Pflanzen-pokémon sind gegenüber\n"
	.string "Wasser-pokémon im Vorteil!\p"
	.string "Ebenso sind sie Stein- und\n"
	.string "Boden-pokémon überlegen!$"

CeladonCity_Gym_Text_TinaIntro::
	.string "… hast du nicht schon\n"
	.string "einmal hier herein geschaut?$"

CeladonCity_Gym_Text_TinaDefeat::
	.string "Ich bin schockiert!$"

CeladonCity_Gym_Text_TinaPostBattle::
	.string "Oh, du hast Erika angesehen…\n"
	.string "und nicht mich…$"

CeladonCity_Gym_Text_TamiaIntro::
	.string "Schau dir meine Pflanzen-pokémon\n"
	.string "an!\p"
	.string "Man kann sie ohne Mühe trainieren!$"

CeladonCity_Gym_Text_TamiaDefeat::
	.string "Nein!$"

CeladonCity_Gym_Text_TamiaPostBattle::
	.string "Wir trainieren ausschließlich\n"
	.string "Pflanzen-pokémon in unserer\l"
	.string "Arena!\p"
	.string "Wir lieben die Kräfte der Natur!$"

CeladonCity_Gym_Text_LisaIntro::
	.string "Bringe bloß keine Käfer- oder\n"
	.string "Feuer-pokémon hierher!$"

CeladonCity_Gym_Text_LisaDefeat::
	.string "Oh!\n"
	.string "Du Grobian!$"

CeladonCity_Gym_Text_LisaPostBattle::
	.string "Wenngleich Erika schüchtern wirkt,\n"
	.string "ist sie eine sehr begabte\l"
	.string "Arenaleiterin!$"

CeladonCity_Gym_Text_LoriIntro::
	.string "Ich habe die Ehre... ich liebe\n"
	.string "Pokémon-Kämpfe!$"

CeladonCity_Gym_Text_LoriDefeat::
	.string "Oh!\n"
	.string "Ausgezeichnet!$"

CeladonCity_Gym_Text_LoriPostBattle::
	.string "Es war mir eine Ehre! Wunderbar!\n"
	.string "Mein Benimm-Kurs zeigt Wirkung!$"

CeladonCity_Gym_Text_MaryIntro::
	.string "Willkommen in der Pokémon-Arena\n"
	.string "von Prismania City!\p"
	.string "Unterschätze niemals die Girl-\n"
	.string "Power!$"

CeladonCity_Gym_Text_MaryDefeat::
	.string "Ich habe verloren!$"

CeladonCity_Gym_Text_MaryPostBattle::
	.string "Meine besten Pokémon hatte ich\n"
	.string "nicht dabei!\p"
	.string "Warte nur, beim nächsten Mal…$"

CeladonCity_Gym_Text_GymStatue::
	.string "Prismania Pokémon-Arena\n"
	.string "Leitung: Erika\p"
	.string "Bisherige Sieger:\n"
	.string "{RIVAL}$"

CeladonCity_Gym_Text_GymStatuePlayerWon::
	.string "Prismania Pokémon-Arena\n"
	.string "Leitung: Erika\p"
	.string "Bisherige Sieger:\n"
	.string "{RIVAL}, {PLAYER}$"

