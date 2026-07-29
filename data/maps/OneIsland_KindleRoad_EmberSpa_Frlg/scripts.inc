OneIsland_KindleRoad_EmberSpa_Frlg_MapScripts::
	.byte 0

OneIsland_KindleRoad_EmberSpa_EventScript_OldMan::
	msgbox OneIsland_KindleRoad_EmberSpa_Text_WaterWarmsMeToCore, MSGBOX_NPC
	end

OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan1::
	msgbox OneIsland_KindleRoad_EmberSpa_Text_EnjoyBowlOfChowder, MSGBOX_NPC
	end

OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan2::
	msgbox OneIsland_KindleRoad_EmberSpa_Text_HotSpringIsTherapeutic, MSGBOX_NPC
	end

OneIsland_KindleRoad_EmberSpa_EventScript_OldWoman::
	msgbox OneIsland_KindleRoad_EmberSpa_Text_SeeHowSmoothMySkinIs, MSGBOX_NPC
	end

OneIsland_KindleRoad_EmberSpa_EventScript_BlackBelt::
	lock
	faceplayer
	famechecker FAMECHECKER_BRUNO, 3
	msgbox OneIsland_KindleRoad_EmberSpa_Text_BrunoVisitsSpaOnOccasion
	release
	end

OneIsland_KindleRoad_EmberSpa_EventScript_RockSmashMan::
	lock
	faceplayer
	goto_if_set FLAG_GOT_HM06, OneIsland_KindleRoad_EmberSpa_EventScript_AlreadyGotHM06
	msgbox OneIsland_KindleRoad_EmberSpa_Text_UsedThisToMakeEmberSpa
	giveitem ITEM_HM06
	setflag FLAG_GOT_HM06
	msgbox OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06
	release
	end

OneIsland_KindleRoad_EmberSpa_EventScript_AlreadyGotHM06::
	msgbox OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06
	release
	end

OneIsland_KindleRoad_EmberSpa_EventScript_SpaHeal::
	lockall
	fadescreen FADE_TO_WHITE
	special HealPlayerParty
	fadescreen FADE_FROM_WHITE
	msgbox OneIsland_KindleRoad_EmberSpa_Text_WaterExquisiteFullyRefreshed
	setvar VAR_TEMP_1, 1
	releaseall
	end

OneIsland_KindleRoad_EmberSpa_Text_WaterWarmsMeToCore::
	.string "Hm!\n"
	.string "Hah!\l"
	.string "Argh! Das ist himmlisch!\l"
	.string "Das Wasser wärmt mich überall!\p"
	.string "Spring auch rein!\p"
	.string "Schwimm in die Mitte, entspanne\n"
	.string "und dir wird ganz wohlig warm.$"

OneIsland_KindleRoad_EmberSpa_Text_EnjoyBowlOfChowder::
	.string "Mein Lieblingsteil vom Baden\n"
	.string "kommt jetzt gleich.\p"
	.string "Ich genehmige mir eine sämige\n"
	.string "Fischsuppe, um mich auch von\l"
	.string "innen aufzuwärmen!$"

OneIsland_KindleRoad_EmberSpa_Text_WaterExquisiteFullyRefreshed::
	.string "Das Wasser ist schön warm!\n"
	.string "Genau richtig! Klasse…\p"
	.string "{PLAYER} und das Team fühlen sich\n"
	.string "erfrischt!$"

OneIsland_KindleRoad_EmberSpa_Text_HotSpringIsTherapeutic::
	.string "Ein Thermalbad soll heilende\n"
	.string "Wirkung haben, sagt man.$"

OneIsland_KindleRoad_EmberSpa_Text_SeeHowSmoothMySkinIs::
	.string "Sieh in mein Gesicht! Siehst du,\n"
	.string "wie glatt meine Haut ist?\p"
	.string "Das Wasser vom Thermalbad\n"
	.string "hält meine Haut so jung und straff.$"

OneIsland_KindleRoad_EmberSpa_Text_BrunoVisitsSpaOnOccasion::
	.string "Nach einem harten Trainingstag\n"
	.string "kann einem entspannenden\l"
	.string "Aufenthalt in einem Thermalbad\l"
	.string "nichts das Wasser reichen.\l"
	.string "Bruno, der mir voransteht,\l"
	.string "kommt gelegentlich auch\l"
	.string "in diesen Kurort.\l"
	.string "Er kommt hierher, um seine\l"
	.string "Gebrechen und die seiner\l"
	.string "Pokémon zu lindern.$"

OneIsland_KindleRoad_EmberSpa_Text_UsedThisToMakeEmberSpa::
	.string "Thermalbäder und Vulkane\n"
	.string "gehören zusammen.\p"
	.string "Die Gluttherme hier habe\n"
	.string "ich vor Jahren errichtet.\p"
	.string "Ich habe das Becken mit meinen\n"
	.string "Händen aus einem riesigen\l"
	.string "Stein geformt.\l"
	.string "Damals habe ich dies benutzt. Ich\l"
	.string "denke, ich kann mich davon trennen.$"

OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06::
	.string "Damit pulverisierst du Felsen,\n"
	.string "als wären sie aus Pappe.$"

