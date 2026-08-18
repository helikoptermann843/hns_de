ViridianCity_Gym_hns_MapScripts::
	.byte 0

ViridianCity_Gym_EventScript_Blue::
	lock
	faceplayer
	goto_if_unset FLAG_HIDE_DOJO_BLUE, ViridianCity_Gym_EventScript_BlueAtDojo
	goto_if_set FLAG_DEFEATED_VIRIDIAN_GYM, ViridianCity_Gym_EventScript_BlueGotoDojo
	goto_if_set FLAG_DEFEATED_VIRIDIAN_GYM, ViridianCity_Gym_EventScript_Blue_Defeated
	msgbox ViridianCity_Gym_Text_LeaderBlue_Before, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BLUE_HNS, ViridianCity_Gym_Text_LeaderBlue_Win
	message ViridianCity_Gym_Text_ReceivedEarthBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox ViridianCity_Gym_Text_LeaderBlue_After, MSGBOX_DEFAULT
	msgbox ViridianCity_Gym_Text_LeaderBlue_GiveTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_TRICK_ROOM
	msgbox ViridianCity_Gym_Text_LeaderBlue_ExplainTM, MSGBOX_DEFAULT
	setflag FLAG_BADGE16_GET
	setflag FLAG_DEFEATED_VIRIDIAN_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 16
	call Common_EventScript_SetGymTrainers_hns
	closemessage
	setflag FLAG_HIDE_LEAGUE_BLACKBELT
	setflag FLAG_HIDE_SEAFOAM_BLAINE
	clearflag FLAG_HIDE_CINNABAR_BLAINE
	setvar VAR_OAK_MT_SILVER_CALL, 1
	release
	end

ViridianCity_Gym_EventScript_Blue_Defeated::
	msgbox ViridianCity_Gym_Text_LeaderBlue_Epilogue, MSGBOX_DEFAULT
	closemessage
	release
	end

ViridianCity_Gym_EventScript_BlueGotoDojo::
	msgbox ViridianCity_Gym_Text_BlueGotoDojo, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_DOJO_BLUE
	release
	end

ViridianCity_Gym_Text_BlueGotoDojo:
	.string "Blau: Zurück für mehr?\p"
	.string "Wenn du kämpfen willst,\n"
	.string "komm zum Kampf-Dojo!$"

ViridianCity_Gym_EventScript_BlueAtDojo::
	msgbox ViridianCity_Gym_Text_LeaderBlue_Epilogue, MSGBOX_DEFAULT
	closemessage
	release
	end

ViridianCity_Gym_Text_LeaderBlue_Before:
	.string "Blau: Hey! Da bist du ja!\p"
	.string "Auf der Zinnoberinsel hatte ich ein\n"
	.string "bisschen Bammel, aber inzwischen\l"
	.string "habe ich extrem Lust darauf gekriegt,\l"
	.string "gegen dich zu kämpfen!\p"
	.string "… … …\p"
	.string "Du hast also alle Arenaleiter in Johto\n"
	.string "zu Kleinholz verarbeitet, was?\p"
	.string "Hahaha! Dann müssen das ja alles\n"
	.string "ziemliche Jammerlappen sein!\p"
	.string "Aber warten wir’s mal ab!\n"
	.string "Wenn wir gegeneinander kämpfen,\l"
	.string "werde ich schon sehen, ob du was drauf\l"
	.string "hast oder nur ein Schaumschläger bist!$"

ViridianCity_Gym_Text_LeaderBlue_Win:
	.string "Blau: Was?\p"
	.string "Wie konnte ich gegen dich\n"
	.string "verlieren?\p"
	.string "…\p"
	.string "Tch, na gut… Nimm dies, es ist\n"
	.string "der Erdorden.$"

ViridianCity_Gym_Text_ReceivedEarthBadge:
	.string "{PLAYER} erhält den Erdorden!$"

ViridianCity_Gym_Text_LeaderBlue_After:
	.string "Blau: … … …\p"
	.string "Ich hatte dich unterschätzt.\n"
	.string "Du bist kein Schaumschläger,\l"
	.string "sondern ein fähiger Trainer!\l"
	.string "Ich gebe es offen zu!\p"
	.string "Aber vergiss nicht…\p"
	.string "Irgendwann wird der Tag kommen,\n"
	.string "an dem ich dich besiege!$"

ViridianCity_Gym_Text_LeaderBlue_GiveTM:
	.string "Take this with you.$"

ViridianCity_Gym_Text_LeaderBlue_ExplainTM:
	.string "That's TRICK ROOM.\p"
	.string "All POKEMON in battle will change speed.\n"
	.string "Slow goes first. Fast goes last.\p"
	.string "Use it to turn a battle on its head.$"

ViridianCity_Gym_Text_LeaderBlue_Epilogue:
	.string "Blau: Hör zu.\p"
	.string "Du verlierst besser nicht, bis\n"
	.string "ich dich besiegt habe. Verstanden?$"


ViridianCity_Gym_EventScript_GymGuy::
	goto_if_set FLAG_DEFEATED_VIRIDIAN_GYM, ViridianCity_Gym_EventScript_GymGuyAfter
	msgbox ViridianCity_Gym_Text_Guide, MSGBOX_NPC
	end

ViridianCity_Gym_EventScript_GymGuyAfter::
	msgbox ViridianCity_Gym_Text_Guide_Win, MSGBOX_NPC
	end

ViridianCity_Gym_Text_Guide:
	.string "He! Ein Champ in spe!\p"
	.string "Wie läuft es so?\n"
	.string "Du hast wohl gerade eine\l"
	.string "Glückssträhne.\p"
	.string "Der Arenaleiter hat den Champ\n"
	.string "vor drei Jahren besiegt.\p"
	.string "Das wird kein Kinderspiel!\p"
	.string "Gib alles, was du hast!$"

ViridianCity_Gym_Text_Guide_Win:
	.string "Es ist wahr, du bist wirklich stark!\p"
	.string "Dieser Kampf hat mich emotional\n"
	.string "so mitgenommen, dass mir doch\l"
	.string "glatt die Tränen gekommen sind.$"


ViridianCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE16_GET, ViridianCity_Gym_EventScript_GymStatuePostVictory
	msgbox ViridianCity_Gym_Text_GymStatue
	releaseall
	end

ViridianCity_Gym_EventScript_GymStatuePostVictory::
	msgbox ViridianCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

ViridianCity_Gym_Text_GymStatue::
    .string "Pokémon-Arena von Vertania City\n"
    .string "Leiter: Blau\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot$"

ViridianCity_Gym_Text_GymStatuePlayerWon::
    .string "Pokémon-Arena von Vertania City\n"
    .string "Leiter: Blau\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot, {PLAYER}$"
