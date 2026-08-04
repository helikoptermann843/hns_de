RustboroCity_Gym_MapScripts::
	.byte 0

RustboroCity_Gym_EventScript_Roxanne::
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_RoxanneDefeated::
	message RustboroCity_Gym_Text_ReceivedStoneBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_BADGE01_GET
	setvar VAR_RUSTBORO_CITY_STATE, 1
	addvar VAR_PETALBURG_GYM_STATE, 1
	setvar VAR_0x8008, 1
	call Common_EventScript_SetGymTrainers
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	goto RustboroCity_Gym_EventScript_GiveRockTomb
	end

RustboroCity_Gym_EventScript_GiveRockTomb::
	giveitem ITEM_TM_ROCK_TOMB
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_RoxanneRematch::
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Josh::
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Tommy::
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Marc::
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_GymGuidePostVictory::
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
	goto RustboroCity_Gym_EventScript_GymStatue
	end

RustboroCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
	goto RustboroCity_Gym_EventScript_GymStatue
	end

RustboroCity_Gym_EventScript_GymStatueCertified::
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_GymStatue::
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_RegisterRoxanne::
	lockall
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
	waitmessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	releaseall
	end

RustboroCity_Gym_Text_GymGuideAdvice:
	.string "Hi, wie geht’s?\p"
	.string "Hör zu, mein Freund!\n"
	.string "Würdest du gerne Champ werden?\p"
	.string "Ich bin kein Trainer. Ich nicht. Aber\n"
	.string "ich kann dir trotzdem einen nützlichen\l"
	.string "Rat geben.\p"
	.string "Also, abgemacht! Wir werden zusammen\n"
	.string "nach der Pokémon Meisterschaft\l"
	.string "streben!\p"
	.string "Als Trainer musst du die Orden der\n"
	.string "Arenen sammeln, habe ich Recht?\p"
	.string "Aber die Arenaleiter sind nicht gerade\n"
	.string "einfach zu besiegen!\p"
	.string "Und hier komme ich ins Spiel!\n"
	.string "Ich werde dir einen Expertentipp geben!\p"
	.string "Felizia, die Arenaleiterin, setzt\n"
	.string "Gestein-Pokémon ein.\p"
	.string "Ein Gestein-Pokémon ist sehr zäh,\n"
	.string "hat aber gegen Wasser- und Pflanzen-\l"
	.string "Attacken keine Chance.\p"
	.string "Komm wieder vorbei, wenn du die Arena-\n"
	.string "leiterin besiegt hast.\p"
	.string "Nun zeig, was du drauf hast!$"

RustboroCity_Gym_Text_GymGuidePostVictory:
	.string "Hui! Was für ein atemberaubender Sieg!\n"
	.string "Meine Zurufe müssen gewirkt haben!\p"
	.string "Großartig!\n"
	.string "Schau mal auf deinen Trainerpass.\p"
	.string "Der Steinorden, den du gerade bekommen\n"
	.string "hast, müsste dort schon vermerkt sein.\n"
	.string "\p"
	.string "Nun hast du den ersten Schritt zur\n"
	.string "Meisterschaft schon erfolgreich\l"
	.string "hinter dir!\p"
	.string "Ein großartiges Gefühl!$"

RustboroCity_Gym_Text_JoshIntro:
	.string "Unterschätze die Trainer einer Arena\n"
	.string "nicht! Ich zeige dir, warum wir die\l"
	.string "Besten sind!$"

RustboroCity_Gym_Text_JoshDefeat:
	.string "Du warst viel zu gut für mich…$"

RustboroCity_Gym_Text_JoshPostBattle:
	.string "Du hast noch gar nicht gesehen, was\n"
	.string "Gestein-Pokémon alles können.$"

RustboroCity_Gym_Text_TommyIntro:
	.string "Wenn du mich nicht besiegen kannst,\n"
	.string "hast du keine Chance gegen Felizia.$"

RustboroCity_Gym_Text_TommyDefeat:
	.string "Wow! Du hast wirklich Talent!$"

RustboroCity_Gym_Text_TommyPostBattle:
	.string "Felizia ist um ein Vielfaches stärker\n"
	.string "als ich.\p"
	.string "Du solltest dich besser wappnen!$"

RustboroCity_Gym_Text_MarcIntro:
	.string "Wir sind hier mitten in einer Stadt,\n"
	.string "na und?!?\p"
	.string "Meine Gestein-Pokémon müssen sich\n"
	.string "einfach austoben!$"

RustboroCity_Gym_Text_MarcDefeat:
	.string "Mann! Mann! Mann! Unser Herausforderer\n"
	.string "ist aber ein lebhaftes Wesen!$"

RustboroCity_Gym_Text_MarcPostBattle:
	.string "Ich muss es unserer Leiterin\n"
	.string "überlassen.\p"
	.string "Sie ist clever und geschickt, da sie\n"
	.string "in ihrem zarten Alter schon Gestein-\l"
	.string "Pokémon aufzieht.$"

RustboroCity_Gym_Text_RoxanneIntro:
	.string "Hallo, ich bin Felizia, die Leiterin der\n"
	.string "Arena von Metarost City.\p"
	.string "Ich wurde Arenaleiterin, um mein\n"
	.string "Wissen, das ich in der Pokémon Trainer-\l"
	.string "schule erworben habe, umzusetzen.\p"
	.string "Würdest du mir bitte zeigen, wie du\n"
	.string "kämpfst und mit welchen Pokémon?$"

RustboroCity_Gym_Text_RoxanneDefeat:
	.string "So…\n"
	.string "Ich habe verloren…\p"
	.string "Es scheint, ich muss noch eine ganze\n"
	.string "Menge lernen…\p"
	.string "Ich verstehe schon.\p"
	.string "Die Regeln der Pokémon Liga schreiben\n"
	.string "vor, dass Trainer, die einen Arena-\l"
	.string "leiter besiegt haben, dieses erhalten.\p"
	.string "Bitte nimm den offiziellen Pokémon Liga\n"
	.string "Steinorden an!$"

RustboroCity_Gym_Text_ReceivedStoneBadge:
	.string "{PLAYER} hat den Steinorden von\n"
	.string "Felizia erhalten.$"

RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
	.string "Der Steinorden erhöht die Kraft der\n"
	.string "Attacken deiner Pokémon.\p"
	.string "Außerdem sind sie nun in der Lage, die\n"
	.string "VM Zerschneider auch außerhalb eines\l"
	.string "Kampfes einzusetzen.\p"
	.string "Dies möchte ich dir auch noch geben.$"

RustboroCity_Gym_Text_ExplainRockTomb:
	.string "Diese TM39 enthält Felsgrab.\p"
	.string "Sie richtet nicht nur durch das Fallen\n"
	.string "von Steinen Schaden an, sondern\l"
	.string "reduziert auch die Initiative.\p"
	.string "Sobald du eine TM aktivierst, wird die\n"
	.string "Attacke einem Pokémon beigebracht.\p"
	.string "Aber vergiss nicht, dass eine TM nur\n"
	.string "einmal beigebracht werden kann. Ihr\l"
	.string "Einsatz will also überlegt sein.$"

RustboroCity_Gym_Text_RoxannePostBattle:
	.string "Da du so stark bist, solltest du auch\n"
	.string "die anderen Arenaleiter\l"
	.string "herausfordern.\p"
	.string "Du lernst wertvolle Dinge dazu, wenn\n"
	.string "du gegen viele Trainer antrittst.$"

RustboroCity_Gym_Text_GymStatue:
	.string "Pokémon Arena von Metarost City$"

RustboroCity_Gym_Text_GymStatueCertified:
	.string "Pokémon Arena von Metarost City\p"
	.string "Felizias anerkannte Trainer:\n"
	.string "{PLAYER}$"

RustboroCity_Gym_Text_RoxanneRegisterCall:
	.string "… … … … …\n"
	.string "…\l"
	.string "… … … … …\l"
	.string "…\l"
	.string "Piep!\p"
	.string "Felizia: Oh, hallo {PLAYER}.\n"
	.string "Hier ist Felizia aus Metarost City.\p"
	.string "Kamillo hat mir erzählt, dass du\n"
	.string "die Trainer in atemberaubender\l"
	.string "Geschwindigkeit aussuchst und\l"
	.string "besiegst.\p"
	.string "Ich denke aber nicht, dass ich\n"
	.string "gegen dich verlieren werde.\p"
	.string "Ich werde meine Arena wieder\n"
	.string "aufbauen. Dann steht deiner He-\l"
	.string "rausforderung nichts mehr im Weg.\p"
	.string "Du bist doch bestimmt genauso\n"
	.string "ungeduldig wie ich, nicht wahr?\p"
	.string "… … … … …\n"
	.string "…\l"
	.string "… … … … …\l"
	.string "…\l"
	.string "Klick!$"

RustboroCity_Gym_Text_RegisteredRoxanne:
	.string "Arenaleiterin Felizia wurde im\n"
	.string "Pokénav-Verzeichnis eingetragen.$"

RustboroCity_Gym_Text_RoxannePreRematch:
	.string "Felizia: Ich freue mich, dich wieder\n"
	.string "zu sehen. Ich bin die Arenaleiterin\l"
	.string "Felizia.\p"
	.string "Ich bin sicher, wir beide haben seit\n"
	.string "unserer letzten Begegnung viele\l"
	.string "Erfahrungen gesammelt.\p"
	.string "Ich würde gerne sehen, um wie vieles\n"
	.string "besser wir beide geworden sind. Los!$"

RustboroCity_Gym_Text_RoxanneRematchDefeat:
	.string "Grrrrrr…\n"
	.string "Ich habe schon wieder verloren…$"

RustboroCity_Gym_Text_RoxannePostRematch:
	.string "Felizia: Ich muss anscheinend noch\n"
	.string "viel über Pokémon-Kämpfe lernen.\p"
	.string "Aber genau deshalb liebe ich das\n"
	.string "Kämpfen um so mehr.$"

RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
	.string "Felizia: Ich freue mich, dich wieder\n"
	.string "zu sehen. Ich bin die Arenaleiterin\l"
	.string "Felizia.\p"
	.string "Ich bin sicher, wir beide haben seit\n"
	.string "unserer letzten Begegnung viele\l"
	.string "Erfahrungen gesammelt.\p"
	.string "Oh… Schade!\n"
	.string "Du hast ja nur ein Pokémon dabei!\p"
	.string "Bitte komm doch wieder, wenn du\n"
	.string "mindestens zwei dabei hast.$"
