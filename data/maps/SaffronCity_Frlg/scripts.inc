SaffronCity_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_OnTransition
	.byte 0

SaffronCity_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SAFFRON_CITY
	call_if_unset FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_MoveDoorGuardGrunt
	end

SaffronCity_EventScript_MoveDoorGuardGrunt::
	setobjectxyperm LOCALID_SAFFRON_DOOR_GUARD_GRUNT, 33, 31
	return

SaffronCity_EventScript_RocketGrunt1::
	msgbox SaffronCity_Text_WhatDoYouWantGetLost, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt2::
	msgbox SaffronCity_Text_BossTakeTownForTeamRocket, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt3::
	msgbox SaffronCity_Text_DontGetDefiantOrIllHurtYou, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt4::
	msgbox SaffronCity_Text_SaffronBelongsToTeamRocket, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt5::
	msgbox SaffronCity_Text_CriminalLifeMakesMeFeelAlive, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt6::
	msgbox SaffronCity_Text_WatchWhereYoureWalking, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt7::
	msgbox SaffronCity_Text_WeCanExploitMonsAroundWorld, MSGBOX_NPC
	end

SaffronCity_EventScript_DoorGuardGrunt::
	lock
	goto_if_set FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_DoorGuardAsleep
	applymovement LOCALID_SAFFRON_DOOR_GUARD_GRUNT, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SaffronCity_Text_ImASecurityGuard
	release
	end

SaffronCity_EventScript_DoorGuardAsleep::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	msgbox SaffronCity_Text_HesTakingASnooze
	release
	end

SaffronCity_EventScript_WorkerM::
	msgbox SaffronCity_Text_YouBeatTeamRocket, MSGBOX_NPC
	end

SaffronCity_EventScript_Youngster::
	msgbox SaffronCity_Text_SafeToGoOutAgain, MSGBOX_NPC
	end

SaffronCity_EventScript_Lass::
	msgbox SaffronCity_Text_PeopleComingBackToSaffron, MSGBOX_NPC
	end

SaffronCity_EventScript_Boy::
	msgbox SaffronCity_Text_FlewHereOnPidgeot, MSGBOX_NPC
	end

SaffronCity_EventScript_Pidgeot::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
	msgbox SaffronCity_Text_Pidgeot
	waitmoncry
	release
	end

SaffronCity_EventScript_Man::
	msgbox SaffronCity_Text_SawRocketBossEscaping, MSGBOX_NPC
	end

SaffronCity_EventScript_CitySign::
	msgbox SaffronCity_Text_CitySign, MSGBOX_SIGN
	end

SaffronCity_EventScript_DojoSign::
	msgbox SaffronCity_Text_FightingDojo, MSGBOX_SIGN
	end

SaffronCity_EventScript_GymSign::
	lockall
	famechecker FAMECHECKER_SABRINA, 0
	msgbox SaffronCity_Text_GymSign
	releaseall
	end

SaffronCity_EventScript_TrainerTips1::
	msgbox SaffronCity_Text_FullHealCuresStatus, MSGBOX_SIGN
	end

SaffronCity_EventScript_TrainerTips2::
	msgbox SaffronCity_Text_GreatBallImprovedCatchRate, MSGBOX_SIGN
	end

SaffronCity_EventScript_SilphCoSign::
	msgbox SaffronCity_Text_SilphCoSign, MSGBOX_SIGN
	end

SaffronCity_EventScript_MrPsychicsHouseSign::
	msgbox SaffronCity_Text_MrPsychicsHouse, MSGBOX_SIGN
	end

SaffronCity_EventScript_SilphProductSign::
	msgbox SaffronCity_Text_SilphsLatestProduct, MSGBOX_SIGN
	end

SaffronCity_EventScript_TrainerFanClubSign::
	msgbox SaffronCity_Text_TrainerFanClubSign, MSGBOX_SIGN
	end

SaffronCity_Text_WhatDoYouWantGetLost::
	.string "Was willst du noch? Hau ab!$"

SaffronCity_Text_BossTakeTownForTeamRocket::
	.string "Der BOSS hat versprochen, dass wir\n"
	.string "diese Stadt einnehmen werden.$"

SaffronCity_Text_DontGetDefiantOrIllHurtYou::
	.string "Geh aus dem Weg!\n"
	.string "Oder muss ich dir weh tun?$"

SaffronCity_Text_SaffronBelongsToTeamRocket::
	.string "SAFFRONIA CITY\n"
	.string "gehört dem TEAM ROCKET!$"

SaffronCity_Text_CriminalLifeMakesMeFeelAlive::
	.string "Ich fühle mich wunderbar, wenn ich\n"
	.string "böse bin!$"

SaffronCity_Text_WatchWhereYoureWalking::
	.string "Au!\n"
	.string "Pass auf, wo du hintrittst!$"

SaffronCity_Text_WeCanExploitMonsAroundWorld::
	.string "Wenn wir erst die SILPH CO. unter\n"
	.string "Kontrolle haben, können wir in der\l"
	.string "ganzen Welt mit POKéMON handeln!$"

SaffronCity_Text_YouBeatTeamRocket::
	.string "Du hast das TEAM ROCKET besiegt?\n"
	.string "Unglaublich!!!$"

SaffronCity_Text_SafeToGoOutAgain::
	.string "Hurra! Das TEAM ROCKET ist fort!\n"
	.string "Jetzt fühlt man sich auf der\l"
	.string "Straße wieder sicher!$"

SaffronCity_Text_PeopleComingBackToSaffron::
	.string "Nun kommen auch wieder Touristen\n"
	.string "nach SAFFRONIA CITY!$"

SaffronCity_Text_FlewHereOnPidgeot::
	.string "Ich flog mit meinem TAUBOSS\n"
	.string "hierher, nachdem ich von der SILPH\l"
	.string "CO. gelesen hatte!\p"
	.string "Ist schon alles vorbei?\n"
	.string "Na toll, dann habe ich wohl das\l"
	.string "Beste verpasst!$"

SaffronCity_Text_Pidgeot::
	.string "TAUBOSS: Tauboss!$"

SaffronCity_Text_SawRocketBossEscaping::
	.string "Der BOSS des TEAM ROCKET ist aus\n"
	.string "dem Gebäude der SILPH CO.\l"
	.string "geflohen!$"

SaffronCity_Text_ImASecurityGuard::
	.string "Ich bin der Wächter.\p"
	.string "Verdächtige Kinder lasse ich nicht\n"
	.string "herein!$"

SaffronCity_Text_HesTakingASnooze::
	.string "...\n"
	.string "Schnarch...\p"
	.string "Ha! Er hält ein Nickerchen!$"

SaffronCity_Text_CitySign::
	.string "SAFFRONIA CITY\n"
	.string "Die goldglänzende Handelsstadt!$"

SaffronCity_Text_FightingDojo::
	.string "KAMPFARENA$"

SaffronCity_Text_GymSign::
	.string "SAFFRONIA CITY POKéMON-ARENA\n"
	.string "ARENALEITERIN: SABRINA\l"
	.string "Die Herrin der PSYCHO-POKéMON!$"

SaffronCity_Text_FullHealCuresStatus::
	.string "TIPPS FÜR TRAINER\p"
	.string "HYPERHEILER kuriert alle \n"
	.string "Verletzungen.\p"
	.string "Er ist teuer, dafür aber sehr\n"
	.string "praktisch.$"

SaffronCity_Text_GreatBallImprovedCatchRate::
	.string "TIPPS FÜR TRAINER\p"
	.string "Der SUPERBALL erhöht die\n"
	.string "Fangquote.\p"
	.string "Probiere ihn bei POKéMON aus, die\n"
	.string "schwer zu fangen sind!$"

SaffronCity_Text_SilphCoSign::
	.string "SILPH CO. BÜROGEBÄUDE$"

SaffronCity_Text_MrPsychicsHouse::
	.string "PSYCHOLOGEN-HAUS$"

SaffronCity_Text_SilphsLatestProduct::
	.string "Das neueste Produkt der SILPH CO.!\n"
	.string "Verkaufsstart: Demnächst!$"

SaffronCity_Text_TrainerFanClubSign::
	.string "POKéMON TRAINER-FANCLUB\p"
	.string "Die Namen von TRAINERn sind auf\n"
	.string "dem Schild eingeritzt.$"

SaffronCity_Text_HowCanClubNotRecognizeLance::
	.string "Dieser FANCLUB…\n"
	.string "Niemand hier weiß Bescheid!\p"
	.string "Wie konnten sie die Genialität\n"
	.string "von SIEGFRIED übersehen?\p"
	.string "Er verkörpert Gerechtigkeit!\n"
	.string "Er ist cool und leidenschaftlich!\l"
	.string "SIEGFRIED ist der Größte!$"

