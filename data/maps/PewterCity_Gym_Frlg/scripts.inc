PewterCity_Gym_Frlg_MapScripts::
	.byte 0

PewterCity_Gym_EventScript_Brock::
	famechecker FAMECHECKER_BROCK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	trainerbattle_single TRAINER_LEADER_BROCK, PewterCity_Gym_Text_BrockIntro, PewterCity_Gym_Text_BrockDefeat, PewterCity_Gym_EventScript_DefeatedBrock, NO_MUSIC
	goto_if_unset FLAG_GOT_TM39_FROM_BROCK, PewterCity_Gym_EventScript_GiveTM39
	msgbox PewterCity_Gym_Text_BrockPostBattle
	release
	end

PewterCity_Gym_EventScript_DefeatedBrock::
	famechecker FAMECHECKER_BROCK, 1
	setflag FLAG_DEFEATED_BROCK
	setflag FLAG_BADGE01_GET
	setvar VAR_MAP_SCENE_PEWTER_CITY, 1
	setflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
	clearflag FLAG_HIDE_PEWTER_CITY_RUNNING_SHOES_GUY
	set_gym_trainers_frlg 1
	goto PewterCity_Gym_EventScript_GiveTM39
	end

PewterCity_Gym_EventScript_GiveTM39::
	msgbox PewterCity_Gym_Text_TakeThisWithYou
	checkitemspace ITEM_TM39
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Gym_EventScript_NoRoomForTM39
	giveitem_msg PewterCity_Gym_Text_ReceivedTM39FromBrock, ITEM_TM39
	setflag FLAG_GOT_TM39_FROM_BROCK
	msgbox PewterCity_Gym_Text_ExplainTM39
	release
	end

PewterCity_Gym_EventScript_NoRoomForTM39::
	msgbox PewterCity_Gym_Text_DontHaveRoomForThis
	release
	end

PewterCity_Gym_EventScript_Liam::
	trainerbattle_single TRAINER_CAMPER_LIAM, PewterCity_Gym_Text_LiamIntro, PewterCity_Gym_Text_LiamDefeat
	msgbox PewterCity_Gym_Text_LiamPostBattle, MSGBOX_AUTOCLOSE
	end

PewterCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_BROCK, PewterCity_Gym_EventScript_GymGuyPostVictory
	msgbox PewterCity_Gym_Text_LetMeTakeYouToTheTop, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PewterCity_Gym_EventScript_GymGuyTakeMeToTop
	goto_if_eq VAR_RESULT, NO, PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop
	end

PewterCity_Gym_EventScript_GymGuyPostVictory::
	msgbox PewterCity_Gym_Text_YoureChampMaterial
	release
	end

PewterCity_Gym_EventScript_GymGuyTakeMeToTop::
	msgbox PewterCity_Gym_Text_LetsGetHappening
	goto PewterCity_Gym_EventScript_GymGuyAdvice
	end

PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop::
	msgbox PewterCity_Gym_Text_ItsFreeLetsGetHappening
	goto PewterCity_Gym_EventScript_GymGuyAdvice
	end

PewterCity_Gym_EventScript_GymGuyAdvice::
	msgbox PewterCity_Gym_Text_TryDifferentPartyOrders
	release
	end

PewterCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, PewterCity_Gym_EventScript_GymStatuePostVictory
	msgbox PewterCity_Gym_Text_GymStatue
	releaseall
	end

PewterCity_Gym_EventScript_GymStatuePostVictory::
	msgbox PewterCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

PewterCity_Gym_Text_BrockIntro::
	.string "{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}Ich bin der Arenaleiter von\n"
	.string "Marmoria City, Rocko!\p"
	.string "Meine Devise ist eine steinharte\n"
	.string "Verteidigung und felsenfeste\l"
	.string "Entschlossenheit!\p"
	.string "Deshalb trainiere ich Stein-\n"
	.string "Pokémon!\p"
	.string "Willst du es noch immer mit mir\n"
	.string "aufnehmen?\p"
	.string "O.k.! Zeige mir, wie gut du bist!{PLAY_BGM}?À$"

PewterCity_Gym_Text_BrockDefeat::
	.string "Ich habe dich falsch eingeschätzt!\p"
	.string "Nimm den Felsorden als Zeichen\n"
	.string "meiner Ehrerbietung!\p"
	.string "{FONT_NORMAL}{PLAYER} erhält den Felsorden\n"
	.string "von Rocko!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
	.string "{FONT_MALE}Das ist ein offizieller Orden der\n"
	.string "Pokémon Liga!\p"
	.string "Die Pokémon der Person, die den\n"
	.string "Orden trägt, werden stärker!\p"
	.string "Von nun an können deine Pokémon\n"
	.string "jederzeit Blitz einsetzen!\p"
	.string "Natürlich muss die Attacke\n"
	.string "beherrscht werden.$"

PewterCity_Gym_Text_TakeThisWithYou::
	.string "Warte!\n"
	.string "Nimm das hier mit!$"

PewterCity_Gym_Text_ReceivedTM39FromBrock::
	.string "{PLAYER} erhält\n"
	.string "TM39!$"

PewterCity_Gym_Text_ExplainTM39::
	.string "Eine TM enthält Attacken, die\n"
	.string "Pokémon erlernen können!\p"
	.string "Man kann eine TM nur ein einziges\n"
	.string "Mal verwenden! Wähle sorgfältig\l"
	.string "jenes Pokémon aus, dem du eine TM\l"
	.string "geben möchtest!\p"
	.string "TM39 ist Felsgrab!\p"
	.string "Der Gegner wird mit Felsen\n"
	.string "beworfen und unter ihnen begraben.\l"
	.string "Der INIT.-Wert des Gegners wird\l"
	.string "zugleich gesenkt!$"

PewterCity_Gym_Text_BrockPostBattle::
	.string "Es gibt die verschiedensten Trainer\n"
	.string "auf der Welt!\p"
	.string "Du scheinst ein sehr begabter\n"
	.string "Pokémon Trainer zu sein!\p"
	.string "Gehe in die Pokémon-Arena von\n"
	.string "Azuria City und teste dort dein\l"
	.string "Können!$"

PewterCity_Gym_Text_DontHaveRoomForThis::
	.string "Du kannst nichts mehr tragen!$"

PewterCity_Gym_Text_LiamIntro::
	.string "Bleib stehen wo du bist, Kind!\p"
	.string "Es dauert noch Lichtjahre, bis du\n"
	.string "gegen Rocko antreten kannst!$"

PewterCity_Gym_Text_LiamDefeat::
	.string "Mist!\p"
	.string "Lichtjahre messen die Entfernung,\n"
	.string "nicht die Zeit!$"

PewterCity_Gym_Text_LiamPostBattle::
	.string "Du bist ganz gut, aber nicht so gut\n"
	.string "wie Rocko!$"

PewterCity_Gym_Text_LetMeTakeYouToTheTop::
	.string "Hallo!\p"
	.string "Sieht aus, als hättest du das Zeug\n"
	.string "zu einem Pokémon-Champion!\p"
	.string "Ich bin kein Trainer, aber ich kann\n"
	.string "dir ein paar Tipps geben!\p"
	.string "Lass mich dir den Weg zum Erfolg\n"
	.string "zeigen!$"

PewterCity_Gym_Text_LetsGetHappening::
	.string "Alles klar!\n"
	.string "Dann kann es losgehen!$"

PewterCity_Gym_Text_TryDifferentPartyOrders::
	.string "Das Pokémon an der Spitze der\n"
	.string "Pokémon-Liste kämpft als Erstes!\p"
	.string "Wenn du die Reihenfolge der\n"
	.string "Pokémon änderst, könnten Kämpfe\l"
	.string "leichter werden!\p"
	.string "Probiere es aus, um so deinem\n"
	.string "Gegner besser zu trotzen!$"

PewterCity_Gym_Text_ItsFreeLetsGetHappening::
	.string "Der Tipp ist kostenlos!\n"
	.string "Lass uns anfangen!$"

PewterCity_Gym_Text_YoureChampMaterial::
	.string "Ganz wie ich es mir gedacht habe!\n"
	.string "Aus dir kann ein Pokémon-Champion\l"
	.string "werden!$"

PewterCity_Gym_Text_GymStatue::
	.string "Marmoria Pokémon-Arena\n"
	.string "Leitung: Rocko\p"
	.string "Bisherige Sieger:\n"
	.string "{RIVAL}$"

PewterCity_Gym_Text_GymStatuePlayerWon::
	.string "Marmoria Pokémon-Arena\n"
	.string "Leitung: Rocko\p"
	.string "Bisherige Sieger:\n"
	.string "{RIVAL}, {PLAYER}$"

