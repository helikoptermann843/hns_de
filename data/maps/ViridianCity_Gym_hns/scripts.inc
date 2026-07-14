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
	giveitem ITEM_TM_TRICK_ROOM
	setflag FLAG_BADGE16_GET
	setflag FLAG_DEFEATED_VIRIDIAN_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 16
	call Common_EventScript_SetGymTrainers_hns
	closemessage
	setflag FLAG_HIDE_LEAGUE_BLACKBELT
	setflag FLAG_HIDE_CERULEANCAVE_GUARD
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
	.string "wenn du kämpfen willst,\n"
	.string "komm zum KAMPFDOJO!$"

ViridianCity_Gym_EventScript_BlueAtDojo::
	msgbox ViridianCity_Gym_Text_LeaderBlue_Epilogue, MSGBOX_DEFAULT
	closemessage
	release
	end

ViridianCity_Gym_Text_LeaderBlue_Before:
	.string "Blau: Yo! Endlich hier, was?\p"
	.string "In Zinnober hatte ich keinen\n"
	.string "Bock, aber jetzt bin ich bereit,\l"
	.string "dich zu bekämpfen.\p"
	.string "…\p"
	.string "Sagst du mir etwa, du hast alle\n"
	.string "Arenen in JOHTO geschafft?\p"
	.string "Heh! Dann sind JOHTOs Arenen\n"
	.string "bestimmt ziemlich lahm.\p"
	.string "Hey, mach dir nichts draus.\p"
	.string "Ich merke gleich beim Kampf, ob\n"
	.string "du gut bist oder nicht.\p"
	.string "Bereit, JOHTO CHAMP?$"

ViridianCity_Gym_Text_LeaderBlue_Win:
	.string "Blau: Was?\p"
	.string "Wie konnte ich gegen dich\n"
	.string "verlieren?\p"
	.string "…\p"
	.string "Tch, na gut… Nimm dies--es ist\n"
	.string "der Erdorden.$"

ViridianCity_Gym_Text_ReceivedEarthBadge:
	.string "{PLAYER} erhielt den Erdorden.$"

ViridianCity_Gym_Text_LeaderBlue_After:
	.string "Blau: …\p"
	.string "Okay, ich lag falsch. Du bist\n"
	.string "wirklich ein guter Trainer.\p"
	.string "Aber ich werde dich eines Tages\n"
	.string "besiegen. Vergiss das nicht!$"

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
	.string "He! Ein CHAMP in spe!\p"
	.string "Wie läuft es so?\n"
	.string "Du hast wohl gerade eine\l"
	.string "Glückssträhne.\p"
	.string "Der ARENALEITER hat den CHAMP\n"
	.string "vor drei Jahren besiegt.\p"
	.string "Das wird kein Kinderspiel!\p"
	.string "Gib alles, was du hast!$"

ViridianCity_Gym_Text_Guide_Win:
	.string "Junge, Junge! Du bist sehr stark…\p"
	.string "Das war vielleicht ein erfrischender\n"
	.string "Kampf. Er hat mir Tränen\n"
	.string "in die Augen getrieben.$"


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
    .string "VERTANIA POKéMON ARENA\n"
    .string "LEITER: BLAU\p"
	.string "GEWINNER:\n"
	.string "BLAU, ROT$"

ViridianCity_Gym_Text_GymStatuePlayerWon::
    .string "VERTANIA POKéMON ARENA\n"
    .string "LEITER: BLAU\p"
	.string "GEWINNER:\n"
	.string "BLAU, ROT, {PLAYER}$$"
