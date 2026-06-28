BattleFrontier_RankingHall_hns_MapScripts::
	.byte 0

BattleFrontier_RankingHall_EventScript_TowerSinglesRecords_hns::
	lockall
	setvar VAR_0x8005, RANKING_HALL_TOWER_SINGLES
	goto BattleFrontier_RankingHall_EventScript_ShowRecords_hns
	end

BattleFrontier_RankingHall_EventScript_TowerDoublesRecords_hns::
	lockall
	setvar VAR_0x8005, RANKING_HALL_TOWER_DOUBLES
	goto BattleFrontier_RankingHall_EventScript_ShowRecords_hns
	end

BattleFrontier_RankingHall_EventScript_TowerMultisRecords_hns::
	lockall
	setvar VAR_0x8005, RANKING_HALL_TOWER_MULTIS
	goto BattleFrontier_RankingHall_EventScript_ShowRecords_hns
	end

BattleFrontier_RankingHall_EventScript_TowerLinkRecords_hns::
	lockall
	setvar VAR_0x8005, RANKING_HALL_TOWER_LINK
	goto BattleFrontier_RankingHall_EventScript_ShowRecords_hns
	end

BattleFrontier_RankingHall_EventScript_ArenaRecords_hns::
	lockall
	setvar VAR_0x8005, RANKING_HALL_ARENA
	goto BattleFrontier_RankingHall_EventScript_ShowRecords_hns
	end

BattleFrontier_RankingHall_EventScript_PalaceRecords_hns::
	lockall
	setvar VAR_0x8005, RANKING_HALL_PALACE
	goto BattleFrontier_RankingHall_EventScript_ShowRecords_hns
	end

BattleFrontier_RankingHall_EventScript_FactoryRecords_hns::
	lockall
	setvar VAR_0x8005, RANKING_HALL_FACTORY
	goto BattleFrontier_RankingHall_EventScript_ShowRecords_hns
	end

BattleFrontier_RankingHall_EventScript_DomeRecords_hns::
	lockall
	setvar VAR_0x8005, RANKING_HALL_DOME
	goto BattleFrontier_RankingHall_EventScript_ShowRecords_hns
	end

BattleFrontier_RankingHall_EventScript_PikeRecords_hns::
	lockall
	setvar VAR_0x8005, RANKING_HALL_PIKE
	goto BattleFrontier_RankingHall_EventScript_ShowRecords_hns
	end

BattleFrontier_RankingHall_EventScript_PyramidRecords_hns::
	lockall
	setvar VAR_0x8005, RANKING_HALL_PYRAMID
	goto BattleFrontier_RankingHall_EventScript_ShowRecords_hns
	end

BattleFrontier_RankingHall_EventScript_ShowRecords_hns::
	special ShowRankingHallRecordsWindow
	waitbuttonpress
	special ScrollRankingHallRecordsWindow
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_RankingHall_EventScript_Attendant_hns::
	msgbox BattleFrontier_RankingHall_Text_ExplainRankingHall_hns, MSGBOX_NPC
	end

BattleFrontier_RankingHall_EventScript_DomePikeFactoryRecordsSign_hns::
	msgbox BattleFrontier_RankingHall_Text_DomePikeFactoryRecords_hns, MSGBOX_SIGN
	end

BattleFrontier_RankingHall_EventScript_PalaceArenaPyramidRecordsSIgn_hns::
	msgbox BattleFrontier_RankingHall_Text_PalaceArenaPyramidRecords_hns, MSGBOX_SIGN
	end

BattleFrontier_RankingHall_EventScript_NinjaBoy_hns::
	lock
	faceplayer
	msgbox BattleFrontier_RankingHall_Text_IsYourNameOnThisList_hns, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BattleFrontier_RankingHall_EventScript_NinjaBoy_hnsNameOnList_hns
	msgbox BattleFrontier_RankingHall_Text_WorkHarderIfYouSawFriendsName_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_RankingHall_EventScript_NinjaBoy_hnsNameOnList_hns::
	msgbox BattleFrontier_RankingHall_Text_WowThatsSuper_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_RankingHall_EventScript_Boy_hns::
	msgbox BattleFrontier_RankingHall_Text_MyNamesNotUpThere_hns, MSGBOX_NPC
	end

BattleFrontier_RankingHall_Text_ExplainRankingHall_hns:
	.string "Dies ist die ERGEBNISHALLE.\n"
	.string "Hier sind die Namen der TRAINER\p"
	.string "verewigt, die sich durch ihre\n"
	.string "Ergebnisse\n"
	.string "bei den KAMPFZONEn-Kämpfen\l"
	.string "unsterblich gemacht haben.$"

BattleFrontier_RankingHall_Text_DomePikeFactoryRecords_hns:
	.string "Ergebnisse: KAMPFSTADION, KAMPFIPITIS\n"
	.string "und KAMPFFABRIK$"

BattleFrontier_RankingHall_Text_PalaceArenaPyramidRecords_hns:
	.string "Ergebnisse: KAMPFPALAST, KAMPF-\n"
	.string "RING und KAMPFPYRAMIDE$"

BattleFrontier_RankingHall_Text_IsYourNameOnThisList_hns:
	.string "Hallo. Steht dein Name auch auf der\n"
	.string "Liste?$"

BattleFrontier_RankingHall_Text_WowThatsSuper_hns:
	.string "Wow, das ist ja super!!!\n"
	.string "Ich werde mich auch anstrengen!$"

BattleFrontier_RankingHall_Text_WorkHarderIfYouSawFriendsName_hns:
	.string "Wirklich?\n"
	.string "Wenn du die Namen deiner Freunde hier\n"
	.string "\p"
	.string "siehst, strengst du dich bestimmt noch\n"
	.string "mehr an.$"

BattleFrontier_RankingHall_Text_MyNamesNotUpThere_hns:
	.string "Hmm…\n"
	.string "Ich kann meinen Namen nicht finden…\p"
	.string "Kein Wunder! Ich habe ja auch noch nie\n"
	.string "an Kämpfen teilgenommen…$"

