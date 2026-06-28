TrainerHill_Roof_hns_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_OnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Roof_hns_OnLoad
	.byte 0

TrainerHill_Roof_hns_OnLoad::
	setflag FLAG_TEMP_HIDE_FOLLOWER
	end

TrainerHill_Roof_hns_EventScript_Owner::
	trainerhill_settrainerflags
	lock
	faceplayer
	trainerhill_getownerstate
	switch VAR_RESULT
	case 0, TrainerHill_Roof_hns_EventScript_Arrived
	case 1, TrainerHill_Roof_hns_EventScript_GivePrize
	case 2, TrainerHill_Roof_hns_EventScript_AlreadyReceivedPrize
TrainerHill_Roof_hns_EventScript_Arrived::
	msgbox TrainerHill_Roof_hns_Text_YouFinallyCameBravo, MSGBOX_DEFAULT
TrainerHill_Roof_hns_EventScript_GivePrize::
	trainerhill_giveprize
	switch VAR_RESULT
	case 0, TrainerHill_Roof_hns_EventScript_ReceivePrize
	case 1, TrainerHill_Roof_hns_EventScript_NoRoomForPrize
	case 2, TrainerHill_Roof_hns_EventScript_CheckFinalTime
TrainerHill_Roof_hns_EventScript_ReceivePrize::
	msgbox TrainerHill_Roof_hns_Text_HaveTheMostMarvelousGift, MSGBOX_DEFAULT
	playfanfare MUS_LEVEL_UP
	message gText_ObtainedTheItem
	waitfanfare
	waitmessage
	goto TrainerHill_Roof_hns_EventScript_CheckFinalTime

TrainerHill_Roof_hns_EventScript_NoRoomForPrize::
	msgbox TrainerHill_Roof_hns_Text_HaveTheMostMarvelousGift, MSGBOX_DEFAULT
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
	msgbox TrainerHill_Roof_hns_Text_FullUpBeBackLaterForThis, MSGBOX_DEFAULT
	goto TrainerHill_Roof_hns_EventScript_CheckFinalTime

TrainerHill_Roof_hns_EventScript_CheckFinalTime::
	trainerhill_finaltime
	switch VAR_RESULT
	case 0, TrainerHill_Roof_hns_EventScript_NewRecord
	case 1, TrainerHill_Roof_hns_EventScript_NoNewRecord
	case 2, TrainerHill_Roof_hns_EventScript_EndSpeakToOwner
TrainerHill_Roof_hns_EventScript_NewRecord::
	msgbox TrainerHill_Roof_hns_Text_GotHereMarvelouslyQuickly, MSGBOX_DEFAULT
	goto TrainerHill_Roof_hns_EventScript_EndSpeakToOwner
	end

TrainerHill_Roof_hns_EventScript_NoNewRecord::
	msgbox TrainerHill_Roof_hns_Text_YouWerentVeryQuick, MSGBOX_DEFAULT
	goto TrainerHill_Roof_hns_EventScript_EndSpeakToOwner
	end

TrainerHill_Roof_hns_EventScript_EndSpeakToOwner::
	msgbox TrainerHill_Roof_hns_Text_ArriveZippierNextTime, MSGBOX_DEFAULT
	release
	end

TrainerHill_Roof_hns_EventScript_AlreadyReceivedPrize::
	msgbox TrainerHill_Roof_hns_Text_ArriveZippierNextTime, MSGBOX_DEFAULT
	release
	end

TrainerHill_Roof_hns_Text_YouFinallyCameBravo:
	.string "Hm! Hm!\p"
	.string "Du bist endlich angekommen!\n"
	.string "Ja, du hast es geschafft!\p"
	.string "Warte! Sag nichts!\n"
	.string "Ich weiß, warum du ganz\l"
	.string "allein hierher gekommen bist!\p"
	.string "Du wolltest mich sehen,\n"
	.string "den Besitzer des\l"
	.string "TRAINERBERGS, weil…\p"
	.string "Du willst mit mir ein\n"
	.string "DOPPELTEAM bilden!\p"
	.string "Wa-hoo!\p"
	.string "…Wie?\n"
	.string "Das ist es nicht?\p"
	.string "Wie auch immer, ich habe deinen\n"
	.string "Aufstieg beobachtet.\p"
	.string "Wunderbare Kämpfe!\n"
	.string "Bravo, wirklich!$"

TrainerHill_Roof_hns_Text_HaveTheMostMarvelousGift:
	.string "Für jemanden wie dich habe\n"
	.string "ich ein großartiges Geschenk\l"
	.string "und etwas Geld als Belohnung!$"

TrainerHill_Roof_hns_Text_FullUpBeBackLaterForThis:
	.string "Oh nein, du trägst bereits\n"
	.string "zu viele Dinge bei dir!\p"
	.string "Komm später wieder dafür!$"

TrainerHill_Roof_hns_Text_GotHereMarvelouslyQuickly:
	.string "Moment mal! Bist du etwa\n"
	.string "unglaublich schnell hier\l"
	.string "oben angekommen?\p"
	.string "Wie prächtig! Du hättest dich\n"
	.string "nicht so beeilen müssen,\l"
	.string "um mich zu sehen!\p"
	.string "Das erfreut mich sehr.\n"
	.string "Ich lasse die Rangtafel\l"
	.string "sofort aktualisieren!$"

TrainerHill_Roof_hns_Text_YouWerentVeryQuick:
	.string "Aber oh…\n"
	.string "Du warst nicht besonders\n"
	.string "schnell unterwegs.$"

TrainerHill_Roof_hns_Text_ArriveZippierNextTime:
	.string "Vielleicht erfreust du mich\n"
	.string "beim nächsten Mal mit einer\l"
	.string "schnelleren Zeit.\p"
	.string "Dann bilde ich gern ein\n"
	.string "DOPPELTEAM mit dir!\p"
	.string "Bis wir uns wiedersehen,\n"
	.string "Amigo!$"
