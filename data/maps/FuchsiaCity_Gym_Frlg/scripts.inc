FuchsiaCity_Gym_Frlg_MapScripts::
	.byte 0

FuchsiaCity_Gym_EventScript_Koga::
	famechecker FAMECHECKER_KOGA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	trainerbattle_single TRAINER_LEADER_KOGA, FuchsiaCity_Gym_Text_KogaIntro, FuchsiaCity_Gym_Text_KogaDefeat, FuchsiaCity_Gym_EventScript_DefeatedKoga, NO_MUSIC
	goto_if_unset FLAG_GOT_TM06_FROM_KOGA, FuchsiaCity_Gym_EventScript_GiveTM06
	msgbox FuchsiaCity_Gym_Text_KogaPostBattle
	release
	end

FuchsiaCity_Gym_EventScript_DefeatedKoga::
	famechecker FAMECHECKER_KOGA, 1
	clearflag FLAG_HIDE_FAME_CHECKER_KOGA_JOURNAL
	setflag FLAG_DEFEATED_KOGA
	setflag FLAG_BADGE05_GET
	set_gym_trainers_frlg 5
	goto FuchsiaCity_Gym_EventScript_GiveTM06
	end

FuchsiaCity_Gym_EventScript_GiveTM06::
	msgbox FuchsiaCity_Gym_Text_KogaExplainSoulBadge
	checkitemspace ITEM_TM06
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_Gym_EventScript_NoRoomForTM06
	giveitem_msg FuchsiaCity_Gym_Text_ReceivedTM06FromKoga, ITEM_TM06
	setflag FLAG_GOT_TM06_FROM_KOGA
	msgbox FuchsiaCity_Gym_Text_KogaExplainTM06
	release
	end

FuchsiaCity_Gym_EventScript_NoRoomForTM06::
	msgbox FuchsiaCity_Gym_Text_MakeSpaceForThis
	release
	end

FuchsiaCity_Gym_EventScript_Phil::
	trainerbattle_single TRAINER_TAMER_PHIL, FuchsiaCity_Gym_Text_PhilIntro, FuchsiaCity_Gym_Text_PhilDefeat
	msgbox FuchsiaCity_Gym_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_Edgar::
	trainerbattle_single TRAINER_TAMER_EDGAR, FuchsiaCity_Gym_Text_EdgarIntro, FuchsiaCity_Gym_Text_EdgarDefeat
	msgbox FuchsiaCity_Gym_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_Kirk::
	trainerbattle_single TRAINER_JUGGLER_KIRK, FuchsiaCity_Gym_Text_KirkIntro, FuchsiaCity_Gym_Text_KirkDefeat
	famechecker FAMECHECKER_KOGA, 2
	msgbox FuchsiaCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_Shawn::
	trainerbattle_single TRAINER_JUGGLER_SHAWN, FuchsiaCity_Gym_Text_ShawnIntro, FuchsiaCity_Gym_Text_ShawnDefeat
	msgbox FuchsiaCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_Kayden::
	trainerbattle_single TRAINER_JUGGLER_KAYDEN, FuchsiaCity_Gym_Text_KaydenIntro, FuchsiaCity_Gym_Text_KaydenDefeat
	msgbox FuchsiaCity_Gym_Text_KaydenPostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_Nate::
	trainerbattle_single TRAINER_JUGGLER_NATE, FuchsiaCity_Gym_Text_NateIntro, FuchsiaCity_Gym_Text_NateDefeat
	msgbox FuchsiaCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_KOGA, FuchsiaCity_Gym_EventScript_GymGuyPostVictory
	msgbox FuchsiaCity_Gym_Text_GymGuyAdvice
	release
	end

FuchsiaCity_Gym_EventScript_GymGuyPostVictory::
	msgbox FuchsiaCity_Gym_Text_GymGuyPostVictory
	release
	end

FuchsiaCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE05_GET, FuchsiaCity_Gym_EventScript_GymStatuePostVictory
	msgbox FuchsiaCity_Gym_Text_GymStatue
	releaseall
	end

FuchsiaCity_Gym_EventScript_GymStatuePostVictory::
	msgbox FuchsiaCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

FuchsiaCity_Gym_Text_KogaIntro::
	.string "{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}Koga: Hahaha!\p"
	.string "Ein Kind fordert einen Ninja-\n"
	.string "Meister zum Kampf heraus?\p"
	.string "Wie du willst! Erlebe eine Welt des\n"
	.string "Schreckens, bevor ich dich\l"
	.string "besiege!\p"
	.string "An meinen Schlaf- und Gift-\n"
	.string "Attacken sollst du verzweifeln!{CTRL}?À$"

FuchsiaCity_Gym_Text_KogaDefeat::
	.string "Na so was!\n"
	.string "Du bist ein würdiger Kämpfer!\p"
	.string "Ich reiche dir den Seelenorden!$"

FuchsiaCity_Gym_Text_KogaPostBattle::
	.string "Wirkt das TOXIN erst einmal,\n"
	.string "leiden POKéMON umso mehr, je\l"
	.string "länger der Kampf dauert!\p"
	.string "Ein wahrer Alptraum für den\n"
	.string "Gegner!$"

FuchsiaCity_Gym_Text_KogaExplainSoulBadge::
	.string "Nun, da du Träger des\n"
	.string "SEELENORDENS bist, wird die\l"
	.string "ABWEHR deiner POKéMON steigen!\p"
	.string "Ferner kannst du SURFER nun auch\n"
	.string "außerhalb von Kämpfen nutzen!\p"
	.string "Bitte nimm auch dieses Geschenk!$"

FuchsiaCity_Gym_Text_ReceivedTM06FromKoga::
	.string "{PLAYER} received TM06\n"
	.string "from KOGA.$"

FuchsiaCity_Gym_Text_KogaExplainTM06::
	.string "TM06 ist TOXIN!\p"
	.string "Es ist eine mehr als 400 Jahre alte\n"
	.string "Technik!$"

FuchsiaCity_Gym_Text_MakeSpaceForThis::
	.string "Schaffe Platz für mein Geschenk!$"

FuchsiaCity_Gym_Text_KaydenIntro::
	.string "Der Erfolg hängt nicht von der\n"
	.string "Stärke deiner Pokémon ab!\p"
	.string "Es kommt auf die Strategie an!\p"
	.string "Intelligenz obsiegt über rohe\n"
	.string "Kraft!$"

FuchsiaCity_Gym_Text_KaydenDefeat::
	.string "Was?\n"
	.string "Außerordentlich!$"

FuchsiaCity_Gym_Text_KaydenPostBattle::
	.string "Du setzt deine Muskeln mit Köpfchen\n"
	.string "ein! Gute Strategie!$"

FuchsiaCity_Gym_Text_KirkIntro::
	.string "Ich möchte später einmal ein Ninja\n"
	.string "werden!$"

FuchsiaCity_Gym_Text_KirkDefeat::
	.string "Ich habe verloren!$"

FuchsiaCity_Gym_Text_KirkPostBattle::
	.string "Ich muss noch eine Menge von KOGA,\n"
	.string "meinem Ninja-Meister, lernen!$"

FuchsiaCity_Gym_Text_NateIntro::
	.string "Kannst du gegen meine Spezial-\n"
	.string "Techniken bestehen?$"

FuchsiaCity_Gym_Text_NateDefeat::
	.string "Du hast mich hereingelegt!$"

FuchsiaCity_Gym_Text_NatePostBattle::
	.string "Ich bevorzuge Schlaf- und Gift-\n"
	.string "Attacken. Ihre Wirkung dauert auch\l"
	.string "nach dem Kampf an!$"

FuchsiaCity_Gym_Text_PhilIntro::
	.string "Bleib stehen!\p"
	.string "Frustrieren dich die unsichtbaren\n"
	.string "Mauern?$"

FuchsiaCity_Gym_Text_PhilDefeat::
	.string "Oh!\n"
	.string "Er hat mich besiegt!$"

FuchsiaCity_Gym_Text_PhilPostBattle::
	.string "Ich bin schwer beeindruckt!\p"
	.string "Ein Tipp: Taste die unsichtbaren\n"
	.string "Mauern nach Durchgängen ab!$"

FuchsiaCity_Gym_Text_EdgarIntro::
	.string "Meister Koga unterweist mich in der\n"
	.string "Kunst des Ninja-Kampfes!\p"
	.string "Der Einsatz von Pokémon ist eine\n"
	.string "sehr alte Ninja-Tradition!$"

FuchsiaCity_Gym_Text_EdgarDefeat::
	.string "Autsch!$"

FuchsiaCity_Gym_Text_EdgarPostBattle::
	.string "Ich muss noch viel lernen!$"

FuchsiaCity_Gym_Text_ShawnIntro::
	.string "Koga ist der Nachfahre einer Reihe\n"
	.string "legendärer Ninja-Kämpfer!\p"
	.string "Wer sind deine Vorfahren?$"

FuchsiaCity_Gym_Text_ShawnDefeat::
	.string "Ich habe es vermasselt!$"

FuchsiaCity_Gym_Text_ShawnPostBattle::
	.string "Wo Licht ist, ist auch Schatten!\p"
	.string "Licht oder Schatten!\n"
	.string "Wähle einen Weg!$"

FuchsiaCity_Gym_Text_GymGuyAdvice::
	.string "Heh!\n"
	.string "Warte, du Champion in spe!\p"
	.string "Die ARENA von FUCHSANIA CITY ist\n"
	.string "voller unsichtbarer Mauern!\p"
	.string "Du kannst KOGA sehen, ihn aber\n"
	.string "nicht erreichen!\p"
	.string "Du musst nach Lücken in den\n"
	.string "unsichtbaren Mauern suchen!$"

FuchsiaCity_Gym_Text_GymGuyPostVictory::
	.string "Selbst wenn man sie besiegt hat,\n"
	.string "wirken die Ninjas noch bedrohlich!$"

FuchsiaCity_Gym_Text_GymStatue::
	.string "FUCHSANIA POKéMON-ARENA\n"
	.string "LEITUNG: KOGA\p"
	.string "BISHERIGE SIEGER:\n"
	.string "{VAR}$"

FuchsiaCity_Gym_Text_GymStatuePlayerWon::
	.string "FUCHSANIA POKéMON-ARENA\n"
	.string "LEITUNG: KOGA\p"
	.string "BISHERIGE SIEGER:\n"
	.string "{VAR}, {VAR}$"

