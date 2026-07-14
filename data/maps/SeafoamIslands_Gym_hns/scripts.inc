SeafoamIslands_Gym_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SeafoamIslands_Gym_OnTransition
	.byte 0

SeafoamIslands_Gym_OnTransition: 
	setflag FLAG_TEMP_1
	end

SeafoamIslands_Gym_EventScript_Blaine::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_CINNABAR_ISLAND_GYM, SeafoamIslands_Gym_EventScript_Blaine_Defeated
	msgbox SeafoamIslands_Gym_Text_BlaineIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BLAINE_HNS, SeafoamIslands_Gym_Text_BlaineWinLoss
	message SeafoamIslands_Gym_Text_ReceivedVolcanoBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SeafoamIslands_Gym_Text_TM, MSGBOX_DEFAULT
	giveitem ITEM_TM_OVERHEAT
	setflag FLAG_BADGE15_GET
	setflag FLAG_DEFEATED_CINNABAR_ISLAND_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 15
	clearflag FLAG_HIDE_SEAFOAM_GYMGUY
	call Common_EventScript_SetGymTrainers_hns
	closemessage
	release
	end

SeafoamIslands_Gym_EventScript_Blaine_Defeated::
	msgbox SeafoamIslands_Gym_Text_BlaineAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

SeafomIslands2_EventScript_GymGuide::
	goto_if_set FLAG_TEMP_2, SeafomIslands2_EventScript_GymGuide2
	msgbox SeafoamIslands_Gym_Text_GymGuideWin, MSGBOX_NPC
	setflag FLAG_TEMP_2
	end
SeafomIslands2_EventScript_GymGuide2::
	msgbox SeafoamIslands_Gym_Text_GymGuideWin2, MSGBOX_NPC
	end

SeafoamIslands_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE15_GET, SeafoamIslands_Gym_EventScript_GymStatuePostVictory
	msgbox SeafoamIslands_Gym_Text_GymStatue
	releaseall
	end

SeafoamIslands_Gym_EventScript_GymStatuePostVictory::
	msgbox SeafoamIslands_Gym_Text_GymStatuePlayerWon
	releaseall
	end

SeafoamIslands_Gym_Text_GymStatue::
    .string "ZINNOBER POKéMON ARENA\n"
    .string "LEITER: PYRO\p"
	.string "GEWINNER:\n"
	.string "BLAU, ROT$"

SeafoamIslands_Gym_Text_GymStatuePlayerWon::
    .string "ZINNOBER POKéMON ARENA\n"
    .string "LEITER: PYRO\p"
	.string "GEWINNER:\n"
	.string "BLAU, ROT, {PLAYER}$"

SeafoamIslands_Gym_Text_TM:
	.string "Nimm auch das hier. Diese TM\n"
	.string "enthält die mächtige HITZEKOLLER.\p"
	.string "Ich hoffe, dein nächster Gegner\n"
	.string "hat Feuerheiler dabei! Waaah!$"

SeafoamIslands_Gym_Text_BlaineIntro:
	.string "PYRO: Waaah!\p"
	.string "Meine ARENA in LAVADOS ist\n"
	.string "abgebrannt.\p"
	.string "Meine Feuer-POKÉMON und ich sind\n"
	.string "wegen des Vulkans obdachlos.\p"
	.string "Waaah!\p"
	.string "Aber ich bin als ARENA-LEITER\n"
	.string "hier in dieser Höhle zurück.\p"
	.string "Wenn du mich besiegst, bekommst\n"
	.string "du einen ORDEN.\p"
	.string "Ha! Besorg dir lieber\n"
	.string "Feuerheiler!$"

SeafoamIslands_Gym_Text_BlaineWinLoss:
	.string "PYRO: Toll. Ich bin ausgebrannt…\p"
	.string "Du hast den VULKANORDEN\n"
	.string "verdient!$"

SeafoamIslands_Gym_Text_ReceivedVolcanoBadge:
	.string "{PLAYER} erhielt den\n"
	.string "VULKANORDEN.$"

SeafoamIslands_Gym_Text_BlaineAfterBattle:
	.string "PYRO: Ich hab diesmal verloren,\n"
	.string "aber beim nächsten Mal gewinne\l"
	.string "ich.\p"
	.string "Wenn ich meine LAVADOS-ARENA\n"
	.string "wiederaufgebaut habe, kämpfen\l"
	.string "wir nochmal.$"

SeafoamIslands_Gym_Text_BlaineFightDone:
	.string "PYRO: Meine Feuer-POKÉMON\n"
	.string "werden noch stärker.\p"
	.string "Wart's nur ab!$"

SeafoamIslands_Gym_Text_BlaineRematch:
	.string "PYRO: Whoa!\p"
	.string "Du bist jetzt KANTO-CHAMPION!\p"
	.string "Das ist brennend heiß!\p"
	.string "Deine Fähigkeiten sind erstklassig.\p"
	.string "Ich bin immer kampfbereit.\p"
	.string "Möchtest du einen Rückkampf?$"

SeafoamIslands_Gym_Text_BlaineRematchDefeat:
	.string "PYRO: Deine Fähigkeiten\n"
	.string "sind wirklich feurig!\p"
	.string "Du hast meine Verteidigung\n"
	.string "niedergebrannt.$"

SeafoamIslands_Gym_Text_GymGuideWin:
	.string "Yo!\p"
	.string "… Hm? Ist es schon vorbei?\p"
	.string "Sorry, sorry!\p"
	.string "Die ZINNOBER-ARENA war weg, ich\n"
	.string "wusste nicht, wo ich dich finde.\p"
	.string "Aber hey, du bist auch ohne\n"
	.string "meinen Rat stark genug.\l"
	.string "Ich wusste, du gewinnst!$"

SeafoamIslands_Gym_Text_GymGuideWin2:
	.string "Eine POKÉMON-ARENA kann überall\n"
	.string "sein, solange der ARENA-LEITER\l"
	.string "da ist.\p"
	.string "Ein Gebäude braucht es nicht.$"
