FuchsiaCity_Gym_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_Gym_OnTransition
	.byte 0

FuchsiaCity_Gym_OnTransition::
	goto_if_set FLAG_DEFEATED_FUCHSIA_GYM, FuchsiaCity_Gym_OnTransitionAfter
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_7
	call_if_defeated TRAINER_ALICE_HNS, FuchsiaCity_Gym_DefeatedAlice
	call_if_defeated TRAINER_LINDA_HNS, FuchsiaCity_Gym_DefeatedLinda
	call_if_defeated TRAINER_CINDY_HNS, FuchsiaCity_Gym_DefeatedCindy
	call_if_defeated TRAINER_BARRY_HNS, FuchsiaCity_Gym_DefeatedBarry
	end

FuchsiaCity_Gym_OnTransitionAfter::
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_8
	end

FuchsiaCity_Gym_DefeatedAlice::
	setflag FLAG_TEMP_2
	clearflag FLAG_TEMP_1
	return

FuchsiaCity_Gym_DefeatedLinda::
	setflag FLAG_TEMP_4
	clearflag FLAG_TEMP_3
	return

FuchsiaCity_Gym_DefeatedCindy::
	setflag FLAG_TEMP_6
	clearflag FLAG_TEMP_5
	return

FuchsiaCity_Gym_DefeatedBarry::
	setflag FLAG_TEMP_8
	clearflag FLAG_TEMP_7
	return

FuchsiaCity_Gym_EventScript_Janine::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_FUCHSIA_GYM, FuchsiaCity_Gym_EventScript_Janine_Defeated
	msgbox FuchsiaCity_Gym_Text_Janine_DisappointYou, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_JANINE_HNS, FuchsiaCity_Gym_Text_Janine_ToughOne
	message FuchsiaCity_Gym_Text_ReceivedSoulBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox FuchsiaCity_Gym_Text_Janine_ToxicSpeech, MSGBOX_DEFAULT
	giveitem ITEM_TM_POISON_JAB
	setflag FLAG_BADGE14_GET
	setflag FLAG_DEFEATED_FUCHSIA_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 14
	call Common_EventScript_SetGymTrainers_hns
	removeobject LOCALID_FUCHSIAGYM_ALICE_J
	removeobject LOCALID_FUCHSIAGYM_CINDY_J
	removeobject LOCALID_FUCHSIAGYM_LINDA_J
	removeobject LOCALID_FUCHSIAGYM_BARRY_J
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_8
	addobject LOCALID_FUCHSIAGYM_ALICE
	addobject LOCALID_FUCHSIAGYM_CINDY
	addobject LOCALID_FUCHSIAGYM_LINDA
	addobject LOCALID_FUCHSIAGYM_BARRY
	clearflag FLAG_TEMP_1
	clearflag FLAG_TEMP_3
	clearflag FLAG_TEMP_5
	clearflag FLAG_TEMP_7
	clearflag FLAG_HIDE_ROUTE22_JANINE
	closemessage
	release
	end

FuchsiaCity_Gym_EventScript_Janine_Defeated::
	msgbox FuchsiaCity_Gym_Text_Janine_ApplyMyself, MSGBOX_DEFAULT
	closemessage
	release
	end

FuchsiaCity_Gym_Text_Janine_DisappointYou:
	.string "Hehehehe…\n"
	.string "Tut mir leid, aber das stimmt nicht!\p"
	.string "Nein, ich nehme dich nur auf den Arm!\p"
	.string "Ich bin es wirklich! Ich bin Janina,\n"
	.string "die Arenaleiterin von Fuchsania City!$"

FuchsiaCity_Gym_Text_Janine_ToughOne:
	.string "Janina: Du bist hartnäckig.\n"
	.string "Du hast definitiv gewonnen…\p"
	.string "Hier ist der Seelenorden. Nimm ihn.$"

FuchsiaCity_Gym_Text_ReceivedSoulBadge:
	.string "{PLAYER} erhielt den Seelenorden.$"

FuchsiaCity_Gym_Text_Janine_ToxicSpeech:
	.string "Janina: Du bist stark! Ich habe hier ein\n"
	.string "ganz besonderes Geschenk für dich!\p"
	.string "Diese Attacke nennt sich Gifthieb und\n"
	.string "kann deine Gegner vergiften!$"

FuchsiaCity_Gym_Text_Janine_ApplyMyself:
	.string "Janina: Ich werde noch viel mehr\n"
	.string "trainieren und stärker werden!\p"
	.string "Nochmal möchte ich nicht gegen dich\n"
	.string "oder meinen Vater verlieren müssen!$"

FuchsiaCity_Gym_EventScript_Alice_J::
	lock
	faceplayer
	msgbox FuchsiaCity_PokemonCenter1F_Text_JanineImpersonator1, MSGBOX_DEFAULT
	applymovement LOCALID_FUCHSIAGYM_ALICE_J, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_FUCHSIAGYM_ALICE_J
	clearflag FLAG_TEMP_1
	addobject LOCALID_FUCHSIAGYM_ALICE
	applymovement LOCALID_FUCHSIAGYM_ALICE, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_FUCHSIAGYM_ALICE, Common_Movement_FacePlayer
	waitmovement 0
	msgbox FuchsiaCity_Gym_Text_LassAlice_Before, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ALICE_HNS, FuchsiaCity_Gym_Text_LassAlice_Beaten
	msgbox FuchsiaCity_Gym_Text_LassAlice_After, MSGBOX_DEFAULT
	closemessage
	release
	end

FuchsiaCity_Gym_EventScript_Alice::
	msgbox FuchsiaCity_Gym_Text_LassAlice_After, MSGBOX_NPC
	end


FuchsiaCity_Gym_EventScript_Linda_J::
	lock
	faceplayer
	msgbox FuchsiaCity_PokemonCenter1F_Text_JanineImpersonator1, MSGBOX_DEFAULT
	applymovement LOCALID_FUCHSIAGYM_LINDA_J, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_FUCHSIAGYM_LINDA_J
	clearflag FLAG_TEMP_3
	addobject LOCALID_FUCHSIAGYM_LINDA
	applymovement LOCALID_FUCHSIAGYM_LINDA, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_FUCHSIAGYM_LINDA, Common_Movement_FacePlayer
	waitmovement 0
	msgbox FuchsiaCity_Gym_Text_LassLinda_Before, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LINDA_HNS, FuchsiaCity_Gym_Text_LassLinda_Beaten
	msgbox FuchsiaCity_Gym_Text_LassLinda_After, MSGBOX_DEFAULT
	closemessage
	release
	end

FuchsiaCity_Gym_EventScript_Linda::
	msgbox FuchsiaCity_Gym_Text_LassLinda_After, MSGBOX_NPC
	end

FuchsiaCity_Gym_EventScript_Cindy_J::
	lock
	faceplayer
	msgbox FuchsiaCity_PokemonCenter1F_Text_JanineImpersonator1, MSGBOX_DEFAULT
	applymovement LOCALID_FUCHSIAGYM_CINDY_J, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_FUCHSIAGYM_CINDY_J
	clearflag FLAG_TEMP_5
	addobject LOCALID_FUCHSIAGYM_CINDY
	applymovement LOCALID_FUCHSIAGYM_CINDY, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_FUCHSIAGYM_CINDY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox FuchsiaCity_Gym_Text_PicnickerCindy_Before, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_CINDY_HNS, FuchsiaCity_Gym_Text_PicnickerCindy_Beaten
	msgbox FuchsiaCity_Gym_Text_PicnickerCindy_After, MSGBOX_DEFAULT
	closemessage
	release
	end

FuchsiaCity_Gym_EventScript_Cindy::
	msgbox FuchsiaCity_Gym_Text_PicnickerCindy_After, MSGBOX_NPC
	end

FuchsiaCity_Gym_EventScript_Barry_J::
	lock
	faceplayer
	msgbox FuchsiaCity_PokemonCenter1F_Text_JanineImpersonator1, MSGBOX_DEFAULT
	applymovement LOCALID_FUCHSIAGYM_BARRY_J, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_FUCHSIAGYM_BARRY_J
	clearflag FLAG_TEMP_7
	addobject LOCALID_FUCHSIAGYM_BARRY
	applymovement LOCALID_FUCHSIAGYM_BARRY, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_FUCHSIAGYM_BARRY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox FuchsiaCity_Gym_Text_CamperBarry_Before, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BARRY_HNS, FuchsiaCity_Gym_Text_CamperBarry_Beaten
	msgbox FuchsiaCity_Gym_Text_CamperBarry_After, MSGBOX_DEFAULT
	closemessage
	release
	end

FuchsiaCity_Gym_EventScript_Barry::
	msgbox FuchsiaCity_Gym_Text_CamperBarry_After, MSGBOX_NPC
	end

FuchsiaCity_Gym_Text_LassAlice_Before:
	.string "Huhuhuhaha!\n"
	.string "Ich bin Janina, die Arenaleiterin!\l"
	.string "Von wegen!\l"
	.string "Reingefallen!$"

FuchsiaCity_Gym_Text_LassAlice_Beaten:
	.string "Gib's zu, ich hatte dich\n"
	.string "fast so weit!$"

FuchsiaCity_Gym_Text_LassAlice_After:
	.string "Wie willst du die echte Leiterin\n"
	.string "erkennen?$"

FuchsiaCity_Gym_Text_LassLinda_Before:
	.string "Hahahaha! Mann, ist das ein Spaß!$"

FuchsiaCity_Gym_Text_LassLinda_Beaten:
	.string "Oh… ich habe verloren… Ein\n"
	.string "Schwächling bist du jedenfalls nicht.$"

FuchsiaCity_Gym_Text_LassLinda_After:
	.string "Na, wie war mein Kostüm? Die\n"
	.string "meisten Leute sagen, ich sehe\l"
	.string "Janina zum Verwechseln ähnlich!$"

FuchsiaCity_Gym_Text_PicnickerCindy_Before:
	.string "Ich bin Janina!\n"
	.string "Aber woher wusstest du das?\l"
	.string "Egal! Jetzt wird gekämpft!$"

FuchsiaCity_Gym_Text_PicnickerCindy_Beaten:
	.string "Mist! Ich wollte gewinnen!$"

FuchsiaCity_Gym_Text_PicnickerCindy_After:
	.string "Du musst langsam müde werden.$"

FuchsiaCity_Gym_Text_CamperBarry_Before:
	.string "Hahaha!\p"
	.string "Ganz genau! Ich bin die echte Janina!$"

FuchsiaCity_Gym_Text_CamperBarry_Beaten:
	.string "Meine Verkleidung war perfekt!\n"
	.string "Verdammt!$"

FuchsiaCity_Gym_Text_CamperBarry_After:
	.string "Hey du. War meine Verkleidung\n"
	.string "süß oder was?$"

FuchsiaCity_Gym_EventScript_GymGuy::
	goto_if_set FLAG_DEFEATED_FUCHSIA_GYM, FuchsiaCity_Gym_EventScript_GymGuyAfter
	msgbox FuchsiaCity_Gym_Text_Guide, MSGBOX_NPC
	end

FuchsiaCity_Gym_EventScript_GymGuyAfter::
	msgbox FuchsiaCity_Gym_Text_GuideWin, MSGBOX_NPC
	end

FuchsiaCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_DEFEATED_FUCHSIA_GYM, FuchsiaCity_Gym_EventScript_GymStatuePostVictory
	msgbox FuchsiaCity_Gym_Text_GymStatue
	releaseall
	end

FuchsiaCity_Gym_EventScript_GymStatuePostVictory::
	msgbox FuchsiaCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

FuchsiaCity_Gym_Text_GymStatue::
    .string "Fuchsania Pokémon Arena\n"
    .string "Leiter: Janina\p"
	.string "Gewinner:\n"
	.string "Blau, Rot$"

FuchsiaCity_Gym_Text_GymStatuePlayerWon::
    .string "Fuchsania Pokémon Arena\n"
    .string "Leiter: Janina\p"
	.string "Gewinner:\n"
	.string "Blau, Rot, {PLAYER}$"

FuchsiaCity_Gym_Text_Guide:
	.string "Hey, du! Zukünftiger Champ!\p"
	.string "…Hoppla!\n"
	.string "Sieh dich mal genau um!\p"
	.string "Da sind lauter Personen, die genau\n"
	.string "wie Janina, die Arenaleiterin, aussehen!\p"
	.string "Kannst du erkennen, wer von ihnen\n"
	.string "die echte Janina ist?$"

FuchsiaCity_Gym_Text_GuideWin:
	.string "Das war ein hervorragender Kampf,\n"
	.string "Trainer aus Johto!$"

