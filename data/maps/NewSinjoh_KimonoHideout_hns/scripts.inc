NewSinjoh_KimonoHideout_hns_MapScripts::
   map_script MAP_SCRIPT_ON_FRAME_TABLE, NewSinjoh_KimonoHideout_OnFrame
    .byte 0


NewSinjoh_KimonoHideout_OnFrame:
	map_script_2 VAR_SINJOH_STORYLINE, 4, NewSinjoh_KimonoHideout_EventScript_PlayerMeetsKimonos
	.2byte 0

@ ============INTRO CUTSCENE=====================================================================================

NewSinjoh_KimonoHideout_EventScript_PlayerMeetsKimonos::
	lock
	msgbox NewSinjoh_KimonoHideout_Text_PlayerMeetsKimonos, MSGBOX_AUTOCLOSE
	applymovement LOCALID_PLAYER, NewSinjoh_KimonoHideout_Movement_PlayerWalksIntoRoom
	waitmovement 0

	playse SE_M_PETAL_DANCE
	applymovement LOCALID_NEWSINJOH_KIMONOHIDEOUT_MIHARU, NewSinjoh_KimonoHideout_Movement_KimonoWalksDown
	waitmovement 0
	msgbox NewSinjoh_KimonoHideout_Text_PlayerMeetsMiharu, MSGBOX_AUTOCLOSE
	playse SE_M_PETAL_DANCE
	applymovement LOCALID_NEWSINJOH_KIMONOHIDEOUT_MIHARU, NewSinjoh_KimonoHideout_Movement_KimonoWalksUp
	waitmovement 0

	playse SE_M_PETAL_DANCE
	applymovement LOCALID_NEWSINJOH_KIMONOHIDEOUT_SHIZUKO, NewSinjoh_KimonoHideout_Movement_KimonoWalksDown
	waitmovement 0
	msgbox NewSinjoh_KimonoHideout_Text_PlayerMeetsShizuko, MSGBOX_AUTOCLOSE
	playse SE_M_PETAL_DANCE
	applymovement LOCALID_NEWSINJOH_KIMONOHIDEOUT_SHIZUKO, NewSinjoh_KimonoHideout_Movement_KimonoWalksUp
	waitmovement 0

	playse SE_M_PETAL_DANCE
	applymovement LOCALID_NEWSINJOH_KIMONOHIDEOUT_YOUKO, NewSinjoh_KimonoHideout_Movement_KimonoWalksDown
	waitmovement 0
	msgbox NewSinjoh_KimonoHideout_Text_PlayerMeetsYouko, MSGBOX_AUTOCLOSE
	playse SE_M_PETAL_DANCE
	applymovement LOCALID_NEWSINJOH_KIMONOHIDEOUT_YOUKO, NewSinjoh_KimonoHideout_Movement_KimonoWalksUp
	waitmovement 0

	setvar VAR_SINJOH_STORYLINE, 5
	release
	end

NewSinjoh_KimonoHideout_Movement_PlayerWalksIntoRoom:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

NewSinjoh_KimonoHideout_Movement_KimonoWalksDown:
	face_right
	delay_8
	face_up
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_up
	delay_8
	face_left
	delay_8
	face_down
	walk_down
	step_end

NewSinjoh_KimonoHideout_Movement_KimonoWalksUp:
	face_right
	delay_8
	face_up
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_up
	delay_8
	face_left
	delay_8
	face_down
	walk_up
	face_down
	step_end

NewSinjoh_KimonoHideout_Text_PlayerMeetsKimonos:
	.string "{PLAYER}.\p"
	.string "Bitte, tritt näher.$"

NewSinjoh_KimonoHideout_Text_PlayerMeetsMiharu:
	.string "Miharu: Willkommen in Neu-Sinjoh,\n"
	.string "{PLAYER}.\p"
	.string "Seit Generationen lebt dieses Dorf\n"
	.string "friedlich mit unermesslich mächtigen\l"
	.string "Pokémon zusammen, verborgen vor\l"
	.string "den neugierigen Blicken der\l"
	.string "Außenwelt.\p"
	.string "Die jüngsten Ereignisse an unserem\n"
	.string "heiligen Tempel und der Zustrom\l"
	.string "ungebetener Gäste drohen nun das\l"
	.string "empfindliche Gleichgewicht zu\l"
	.string "stören, das wir so lange bewahrt\l"
	.string "haben.$"

NewSinjoh_KimonoHideout_Text_PlayerMeetsShizuko:
	.string "Shizuko: Unsere Cousinen in Teak\n"
	.string "City haben uns von deiner Verbindung\l"
	.string "zu den legendären Pokémon der\l"
	.string "Johto-Region berichtet - und von\l"
	.string "deinem Können als Trainer.\p"
	.string "Wir glauben, dass du uns in diesen\n"
	.string "schweren Zeiten helfen kannst.$"

NewSinjoh_KimonoHideout_Text_PlayerMeetsYouko:
	.string "Youko: Begib dich zu den Sinjoh-\n"
	.string "Ruinen, nördlich von Route 50.\p"
	.string "Triff dich mit den Forschern dort\n"
	.string "und untersuche die Ereignisse, die\l"
	.string "sie hergeführt haben.\p"
	.string "Die legendären Pokémon dort dürfen\n"
	.string "keinesfalls von Unwürdigen gestört\l"
	.string "werden.$"


@ ============KIMONO GIRL NPCs=====================================================================================

NewSinjoh_KimonoHideout_EventScript_Miharu::
	lock
	faceplayer
	goto_if_ge VAR_SINJOH_STORYLINE, 13, NewSinjoh_KimonoHideout_EventScript_MiharuFinal
	goto_if_defeated TRAINER_MIHARU_HNS, NewSinjoh_KimonoHideout_EventScript_MiharuAfter
	msgbox NewSinjoh_KimonoHideout_Text_PlayerMeetsMiharu, MSGBOX_AUTOCLOSE
	goto_if_not_defeated TRAINER_MIHARU_HNS, NewSinjoh_KimonoHideout_EventScript_TryMiharuBattle
	release
	end
NewSinjoh_KimonoHideout_EventScript_TryMiharuBattle::
	goto_if_eq VAR_SINJOH_STORYLINE, 6, NewSinjoh_KimonoHideout_EventScript_MiharuBattle
	release
	end
NewSinjoh_KimonoHideout_EventScript_MiharuBattle::
	msgbox NewSinjoh_KimonoHideout_Text_MiharuBeforeBattle, MSGBOX_DEFAULT
	closemessage
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 2, 0, 0, 2, 0
	trainerbattle_no_intro TRAINER_MIHARU_HNS, EcruteakCity_Theater_Text_KimonoGirlBeaten
	giveitem ITEM_MEADOW_PLATE
	addvar VAR_PLATECOUNTER, 1
	msgbox NewSinjoh_KimonoHideout_Text_MiharuAfter, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_PLATECOUNTER, 3, SinjohRuins_Lab_EventScript_3Plates
	call_if_eq VAR_PLATECOUNTER, 6, SinjohRuins_Lab_EventScript_6Plates
	call_if_eq VAR_PLATECOUNTER, 9, SinjohRuins_Lab_EventScript_9Plates
	call_if_eq VAR_PLATECOUNTER, 12, SinjohRuins_Lab_EventScript_12Plates
	call_if_eq VAR_PLATECOUNTER, 15, SinjohRuins_Lab_EventScript_15Plates
	call_if_eq VAR_PLATECOUNTER, 16, SinjohRuins_Lab_EventScript_16Plates
	release
	end
NewSinjoh_KimonoHideout_EventScript_MiharuAfter::
	msgbox NewSinjoh_KimonoHideout_Text_MiharuAfter, MSGBOX_AUTOCLOSE
	release
	end

NewSinjoh_KimonoHideout_Text_MiharuBeforeBattle:
	.string "Miharu: Genau wie wir es\n"
	.string "vorausgesehen haben.\p"
	.string "Der Champ der Steine hat dich\n"
	.string "geschickt, die Tafeln zu sammeln.\p"
	.string "Unser Orden hütet diese Tafeln\n"
	.string "seit Jahrhunderten.\p"
	.string "Wir geben sie nicht leichtfertig\n"
	.string "her.$"

NewSinjoh_KimonoHideout_Text_MiharuAfter:
	.string "Miharu: Du bist würdig.$"

NewSinjoh_KimonoHideout_EventScript_MiharuFinal::
	msgbox NewSinjoh_KimonoHideout_Text_MiharuFinal, MSGBOX_AUTOCLOSE
	end

NewSinjoh_KimonoHideout_Text_MiharuFinal:
	.string "Miharu: Du hast unserem Dorf einen\n"
	.string "großen Dienst erwiesen, {PLAYER}.\p"
	.string "Das werden wir nicht vergessen.$"

NewSinjoh_KimonoHideout_EventScript_Youko::
	lock
	faceplayer
	goto_if_ge VAR_SINJOH_STORYLINE, 13, NewSinjoh_KimonoHideout_EventScript_YoukoFinal
	goto_if_defeated TRAINER_YOUKO_HNS, NewSinjoh_KimonoHideout_EventScript_YoukoAfter
	msgbox NewSinjoh_KimonoHideout_Text_PlayerMeetsYouko, MSGBOX_AUTOCLOSE
	goto_if_not_defeated TRAINER_YOUKO_HNS, NewSinjoh_KimonoHideout_EventScript_TryYoukoBattle
	release
	end
NewSinjoh_KimonoHideout_EventScript_TryYoukoBattle::
	goto_if_eq VAR_SINJOH_STORYLINE, 6, NewSinjoh_KimonoHideout_EventScript_YoukoBattle
	release
	end
NewSinjoh_KimonoHideout_EventScript_YoukoBattle::
	msgbox NewSinjoh_KimonoHideout_Text_YoukoBeforeBattle, MSGBOX_DEFAULT
	closemessage
	settotemboost B_POSITION_OPPONENT_LEFT, 0, 2, 1, 2, 2, 2
	trainerbattle_no_intro TRAINER_YOUKO_HNS, EcruteakCity_Theater_Text_KimonoGirlBeaten
	giveitem ITEM_ICICLE_PLATE
	addvar VAR_PLATECOUNTER, 1
	msgbox NewSinjoh_KimonoHideout_Text_YoukoAfter, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_PLATECOUNTER, 3, SinjohRuins_Lab_EventScript_3Plates
	call_if_eq VAR_PLATECOUNTER, 6, SinjohRuins_Lab_EventScript_6Plates
	call_if_eq VAR_PLATECOUNTER, 9, SinjohRuins_Lab_EventScript_9Plates
	call_if_eq VAR_PLATECOUNTER, 12, SinjohRuins_Lab_EventScript_12Plates
	call_if_eq VAR_PLATECOUNTER, 15, SinjohRuins_Lab_EventScript_15Plates
	call_if_eq VAR_PLATECOUNTER, 16, SinjohRuins_Lab_EventScript_16Plates
	release
	end
NewSinjoh_KimonoHideout_EventScript_YoukoAfter::
	msgbox NewSinjoh_KimonoHideout_Text_YoukoAfter, MSGBOX_AUTOCLOSE
	release
	end

NewSinjoh_KimonoHideout_Text_YoukoBeforeBattle:
	.string "Youko: Unsere Cousinen sprechen in\n"
	.string "den höchsten Tönen von dir.\p"
	.string "Ob das stimmt?\p"
	.string "Ich werde es herausfinden.$"

NewSinjoh_KimonoHideout_Text_YoukoAfter:
	.string "Youko: Unsere Cousinen hatten recht\n"
	.string "mit dir.$"

NewSinjoh_KimonoHideout_EventScript_YoukoFinal::
	msgbox NewSinjoh_KimonoHideout_Text_YoukoFinal, MSGBOX_AUTOCLOSE
	end

NewSinjoh_KimonoHideout_Text_YoukoFinal:
	.string "Youko: Anfangs hatte ich meine\n"
	.string "Zweifel.\p"
	.string "Aber nach dem, was du geleistet\n"
	.string "hast, lässt es sich nicht leugnen.$"

NewSinjoh_KimonoHideout_EventScript_Shizuko::
	lock
	faceplayer
	goto_if_ge VAR_SINJOH_STORYLINE, 13, NewSinjoh_KimonoHideout_EventScript_ShizukoFinal
	goto_if_defeated TRAINER_SHIZUKO_HNS, NewSinjoh_KimonoHideout_EventScript_ShizukoAfter
	msgbox NewSinjoh_KimonoHideout_Text_PlayerMeetsShizuko, MSGBOX_AUTOCLOSE
	goto_if_not_defeated TRAINER_SHIZUKO_HNS, NewSinjoh_KimonoHideout_EventScript_TryShizukoBattle
	release
	end
NewSinjoh_KimonoHideout_EventScript_TryShizukoBattle::
	goto_if_eq VAR_SINJOH_STORYLINE, 6, NewSinjoh_KimonoHideout_EventScript_ShizukoBattle
	release
	end
NewSinjoh_KimonoHideout_EventScript_ShizukoBattle::
	msgbox NewSinjoh_KimonoHideout_Text_ShizukoBeforeBattle, MSGBOX_DEFAULT
	closemessage
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 1, 0, 0, 1, 0
	trainerbattle_no_intro TRAINER_SHIZUKO_HNS, EcruteakCity_Theater_Text_KimonoGirlBeaten
	giveitem ITEM_PIXIE_PLATE
	addvar VAR_PLATECOUNTER, 1
	msgbox NewSinjoh_KimonoHideout_Text_ShizukoAfter, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_PLATECOUNTER, 3, SinjohRuins_Lab_EventScript_3Plates
	call_if_eq VAR_PLATECOUNTER, 6, SinjohRuins_Lab_EventScript_6Plates
	call_if_eq VAR_PLATECOUNTER, 9, SinjohRuins_Lab_EventScript_9Plates
	call_if_eq VAR_PLATECOUNTER, 12, SinjohRuins_Lab_EventScript_12Plates
	call_if_eq VAR_PLATECOUNTER, 15, SinjohRuins_Lab_EventScript_15Plates
	call_if_eq VAR_PLATECOUNTER, 16, SinjohRuins_Lab_EventScript_16Plates
	release
	end
NewSinjoh_KimonoHideout_EventScript_ShizukoAfter::
	msgbox NewSinjoh_KimonoHideout_Text_ShizukoAfter, MSGBOX_AUTOCLOSE
	release
	end

NewSinjoh_KimonoHideout_Text_ShizukoBeforeBattle:
	.string "Shizuko: Wir sind im Kampf ebenso\n"
	.string "geschult wie im Tanz.\p"
	.string "Die Tafeln zu erhalten, erfordert\n"
	.string "Stärke und Entschlossenheit.$"

NewSinjoh_KimonoHideout_Text_ShizukoAfter:
	.string "Shizuko: Das Band zwischen dir und\n"
	.string "deinen Pokémon ist wahrlich stark.\p"
	.string "Du hast dir diese Tafel verdient.$"

NewSinjoh_KimonoHideout_EventScript_ShizukoFinal::
	msgbox NewSinjoh_KimonoHideout_Text_ShizukoFinal, MSGBOX_AUTOCLOSE
	end

NewSinjoh_KimonoHideout_Text_ShizukoFinal:
	.string "Shizuko: Nur wenige Trainer in\n"
	.string "Sinjohs langer Geschichte haben\l"
	.string "vollbracht, was dir gerade gelungen\l"
	.string "ist.\p"
	.string "Sehr beeindruckend, {PLAYER}.$"

@ =================================================================================================

NewSinjoh_KimonoHideout_EventScript_OldMan::
	msgbox NewSinjoh_KimonoHideout_Text_OldMan, MSGBOX_NPC
	end

NewSinjoh_KimonoHideout_Text_OldMan:
	.string "Die Kimono-Girls wachen über unser\n"
	.string "Dorf, seit es gegründet wurde.\p"
	.string "Sie haben viel geopfert.\p"
	.string "Von den Göttern selbst gesegnet,\n"
	.string "besitzen sie Kräfte, die weit über\l"
	.string "die eines normalen Trainers\l"
	.string "hinausgehen!\p"
	.string "Sei also gewappnet, falls du je\n"
	.string "gegen sie kämpfst, junges Blut.$"

NewSinjoh_KimonoHideout_Text_OldManAfter:
	.string "Du hast die Beschützerinnen unseres\n"
	.string "Dorfes bezwungen.\p"
	.string "Was macht dich das wohl, junges\n"
	.string "Blut?$"
