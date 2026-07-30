Route13_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route13_hns_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, Route13_hns_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route13_hns_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route13_hns_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Route13_hns_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Route13_OnTransition
	return

Route13_hns_MapScripts_MAP_SCRIPT_ON_RESUME:
	call SetTimeEncounters
	return

Route13_hns_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ALOLA_TRAVEL, 2, Route13_GetOffBoat
	.2byte 0

Route13_hns_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_ALOLA_TRAVEL, 2, Route13_hns_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

Route13_hns_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
	applymovement Route13_Alola_Captain, Route13_hns_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_Movement_0
	applymovement LOCALID_PLAYER, Route13_hns_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_Movement_0
	return


Route13_OnTransition:
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 77, Route13_OnTransitionBoat
	callnative SetTimeBasedEncounters
	end

Route13_OnTransitionBoat::
	@addobject LOCALID_ROUTE13_BOAT
	clearflag FLAG_HIDE_ROUTE13_BOAT
	setobjectxyperm LOCALID_ROUTE13_BOAT, 78, 28
	return

Route13_EventScript_Alex::
	trainerbattle_single TRAINER_ALEX_HNS, Route13_Text_PokefanmAlexSeen, Route13_Text_PokefanmAlexBeaten, Route13_EventScript_RegisterAlex
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route13_EventScript_RematchAlex
	msgbox Route13_Text_PokefanmAlexAfterBattle, MSGBOX_AUTOCLOSE
	end

Route13_EventScript_RegisterAlex::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route13_Text_AlexRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ALEX_HNS
	release
	end

Route13_EventScript_RematchAlex::
	trainerbattle_rematch TRAINER_ALEX_HNS, Route13_Text_AlexRematchIntro, Route13_Text_AlexRematchDefeat
	msgbox Route13_Text_AlexPostRematch, MSGBOX_AUTOCLOSE
	end

Route13_EventScript_Joshua::
	trainerbattle_single TRAINER_JOSHUA_HNS, Route13_Text_PokefanmJoshuaSeen, Route13_Text_PokefanmJoshuaBeaten
	msgbox Route13_Text_PokefanmJoshuaAfterBattle, MSGBOX_AUTOCLOSE
	end

Route13_EventScript_Perry::
	trainerbattle_single TRAINER_PERRY_HNS, Route13_Text_BirdKeeperPerrySeen, Route13_Text_BirdKeeperPerryBeaten
	msgbox Route13_Text_BirdKeeperPerryAfterBattle, MSGBOX_AUTOCLOSE
	end

Route13_EventScript_Bret::
	trainerbattle_single TRAINER_BRET_HNS, Route13_Text_BirdKeeperBretSeen, Route13_Text_BirdKeeperBretBeaten
	msgbox Route13_Text_BirdKeeperBretAfterBattle, MSGBOX_AUTOCLOSE
	end

Route13_EventScript_Kenny::
	trainerbattle_single TRAINER_KENNY_HNS, Route13_Text_HikerKennySeen, Route13_Text_HikerKennyBeaten, Route13_EventScript_RegisterKenny
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route13_EventScript_RematchKenny
	msgbox Route13_Text_HikerKennyAfterBattle, MSGBOX_AUTOCLOSE
	end

Route13_EventScript_RegisterKenny::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route13_Text_KennyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_KENNY_HNS
	release
	end

Route13_EventScript_RematchKenny::
	trainerbattle_rematch TRAINER_KENNY_HNS, Route13_Text_KennyRematchIntro, Route13_Text_KennyRematchDefeat
	msgbox Route13_Text_KennyPostRematch, MSGBOX_AUTOCLOSE
	end

Route13_EventScript_TrainerTips::
	msgbox Route13_Text_TrainerTips, MSGBOX_SIGN
	end

Route13_EventScript_RouteSign::
	msgbox Route13_Text_Sign, MSGBOX_SIGN
	end

Route13_EventScript_DirectionsSign::
	msgbox Route13_Text_DirectionsSign, MSGBOX_SIGN
	end

Route13_Text_PokefanmAlexSeen:
	.string "Verneige dich vor meinen\n"
	.string "erhabenen Pokémon!$"

Route13_Text_PokefanmAlexBeaten:
	.string "Wie… wie kannst du es wagen, die\n"
	.string "Monarchie zu verspotten?$"

Route13_Text_PokefanmAlexAfterBattle:
	.string "Möchte nicht jeder eines Tages\n"
	.string "einmal König sein?$"

Route13_Text_AlexRegister:
	.string "Nicht Blaublütig, aber nicht schlecht.\n"
	.string "Gib mir deine Nummer.$"

Route13_Text_AlexRematchIntro:
	.string "Ich habe nun Ritter an meiner\n"
	.string "Tafel, lass uns kämpfen!$"

Route13_Text_AlexRematchDefeat:
	.string "Wieder Entthront…$"

Route13_Text_AlexPostRematch:
	.string "Vielleicht bin ich nur ein Bauer...$"

Route13_Text_PokefanmJoshuaSeen:
	.string "Hihi! Möchtest du\n"
	.string "gegen mein Pikachu-Team antreten?$"

Route13_Text_PokefanmJoshuaBeaten:
	.string "Pi-Pikachu!$"

Route13_Text_PokefanmJoshuaAfterBattle:
	.string "Kann ja sein, dass du viele\n"
	.string "verschiedene Pokémon hast,\l"
	.string "aber Pikachu ist immer noch das Beste.$"

Route13_Text_BirdKeeperPerrySeen:
	.string "Initiative ist die wichtigste\n"
	.string "Eigenschaft von Vogel-Pokémon.$"

Route13_Text_BirdKeeperPerryBeaten:
	.string "Du warst schneller als ich?\n"
	.string "Völlig ausgeschlossen!$"

Route13_Text_BirdKeeperPerryAfterBattle:
	.string "Dein Pokémon-Team ist in der\n"
	.string "Tat sehr gut trainiert.$"

Route13_Text_BirdKeeperBretSeen:
	.string "Schau dir meine Pokémon an. Sieh nur,\n"
	.string "diese Farben und dieses Gefieder!$"

Route13_Text_BirdKeeperBretBeaten:
	.string "Verflixt!\n"
	.string "Mit dir kann ich nicht mithalten!$"

Route13_Text_BirdKeeperBretAfterBattle:
	.string "Behandele deine Pokémon immer\n"
	.string "pfleglich. Sie werden es dir danken.$"

Route13_Text_HikerKennySeen:
	.string "Ich sollte zum Felstunnel gehen\n"
	.string "und mir ein Onix fangen.$"

Route13_Text_HikerKennyBeaten:
	.string "Du hast mich besiegt!$"

Route13_Text_HikerKennyAfterBattle:
	.string "Auf den ersten Blick ändern sich\n"
	.string "geologische Gegebenheiten nie.\p"
	.string "Aber sie tun es eben doch! Nur\n"
	.string "sehr langsam eben! Ganz langsam!$"

Route13_Text_KennyRegister:
	.string "Pokémon ändern sich mit der Zeit.\n"
	.string "Lass uns wieder kämpfen irgendwann!$"

Route13_Text_KennyRematchIntro:
	.string "Ich habe von der Geologie gelernt!\n"
	.string "Lass uns loslegen!$"

Route13_Text_KennyRematchDefeat:
	.string "Nicht genug…$"

Route13_Text_KennyPostRematch:
	.string "Die Kraft der Pokémon ist wie\n"
	.string "rost. Wir werden bestehen!$"

Route13_Text_TrainerTips:
	.string "Tipps für Trainer\p"
	.string "Hier geht’s lang!\n"
	.string "Immer der Nase nach!$"

Route13_Text_Sign:
	.string "Route 13\n"
	.string "Nördlich zur Schweigebrücke$"

Route13_Text_DirectionsSign:
	.string "Nördlich nach Lavandia\n"
	.string "Westlich nach Fuchsania City$"

Route13_GetOffBoat::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 77
	goto_if_ne Route13_GetOffBoat_2
	compare VAR_TEMP_1, 26
	goto_if_ne Route13_GetOffBoat_2
	delay 30
	applymovement Route13_Alola_Captain, Route13_GetOffBoat_Movement_0
	applymovement LOCALID_PLAYER, Route13_GetOffBoat_Movement_1
	waitmovement 0
	msgbox Route13_GetOffBoat_Text_0, MSGBOX_AUTOCLOSE
	setvar VAR_ALOLA_TRAVEL, 0
	applymovement LOCALID_ROUTE13_BOAT, Route13_TravelToAlola_Movement_2
	waitmovement 0
	setobjectxyperm LOCALID_ROUTE13_BOAT, 89, 28
	removeobject LOCALID_ROUTE13_BOAT
	applymovement LOCALID_PLAYER, Route13_hns_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_Movement_0
	waitmovement 0
	release
	end

Route13_GetOffBoat_2:
	setvar VAR_ALOLA_TRAVEL, 0
	release
	end


Route13_TravelToAlola::
	lock
	faceplayer
	checkitem ITEM_STRANGE_SOUVENIR
	compare VAR_RESULT, 0
	goto_if_ne Route13_TravelToAlola_1
	msgbox Route13_TravelToAlola_Text_4, MSGBOX_AUTOCLOSE
	release
	end

Route13_TravelToAlola_1:
	goto_if_unset FLAG_VISITED_ALOLA, Route13_TravelToAlola_4
	msgbox Route13_TravelToAlola_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route13_TravelToAlola_10
	msgbox Route13_TravelToAlola_Text_2, MSGBOX_AUTOCLOSE
	release
	end

Route13_TravelToAlola_4:
	msgbox Route13_TravelToAlola_Text_0, MSGBOX_DEFAULT
	closemessage
	helpwindow HELP_ALOLA_WINDOW
	msgbox Route13_TravelToAlola_Text_0_5, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route13_TravelToAlola_7
	msgbox Route13_TravelToAlola_Text_2, MSGBOX_AUTOCLOSE
	release
	end

Route13_TravelToAlola_7:
	msgbox Route13_TravelToAlola_Text_1, MSGBOX_AUTOCLOSE
	goto_if_eq VAR_FACING, DIR_SOUTH, Route13_TravelToAlola_14
Route13_TravelToAlola_13:
	addobject LOCALID_ROUTE13_BOAT
	clearflag FLAG_HIDE_ROUTE13_BOAT
	applymovement LOCALID_ROUTE13_BOAT, Route13_Movement_BoatArrive
	waitmovement 0
	applymovement Route13_Alola_Captain, Route13_TravelToAlola_Movement_1
	applymovement LOCALID_PLAYER, Route13_TravelToAlola_Movement_1
	waitmovement 0
	fadescreenswapbuffers FADE_TO_BLACK
	hidefollower
	playse SE_EXIT
	special SpawnCameraObject
	hideobjectat LOCALID_PLAYER, MAP_ROUTE13_HNS
	hideobjectat Route13_Alola_Captain, MAP_ROUTE13_HNS
	applymovement OBJ_EVENT_ID_CAMERA, Route13_TravelToAlola_Movement_1
	waitmovement 0
	waitse
	delay 30
	fadescreenswapbuffers FADE_FROM_BLACK
	playse SE_RG_SS_ANNE_HORN

	playse SE_M_SURF
	applymovement LOCALID_ROUTE13_BOAT, Route13_TravelToAlola_Movement_2
	setvar VAR_ALOLA_TRAVEL, 1
	setflag FLAG_HIDE_MELEMELE_TOTEM
	setflag FLAG_HIDE_AKALA_TOTEM
	setflag FLAG_HIDE_ULAULA_TOTEM
	setflag FLAG_HIDE_PONI_TOTEM
	setflag FLAG_HIDE_SAMSONOAK_INTRO
	setflag FLAG_HIDE_TAPU_KOKO
	setflag FLAG_HIDE_TAPU_LELE
	setflag FLAG_HIDE_TAPU_BULU
	setflag FLAG_HIDE_TAPU_FINI
	setflag FLAG_HIDE_FLYOVER
	setflag FLAG_HIDE_PHANT_OUTSIDE
	setflag FLAG_HIDE_PHANT_INSIDE
	delay 90
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_ROUTE13_BOAT
	special RemoveCameraObject
	warp MAP_MELEMELE_ISLE_HNS, 25, 33
	waitstate
	end

Route13_TravelToAlola_10:
	msgbox Route13_TravelToAlola_Text_1, MSGBOX_AUTOCLOSE
	goto_if_eq VAR_FACING, DIR_SOUTH, Route13_TravelToAlola_17
Route13_TravelToAlola_16:
	applymovement Route13_Alola_Captain, Route13_TravelToAlola_Movement_1
	applymovement LOCALID_PLAYER, Route13_TravelToAlola_Movement_1
	waitmovement 0
	fadescreenswapbuffers FADE_TO_BLACK
	hidefollower
	playse SE_EXIT
	special SpawnCameraObject
	hideobjectat LOCALID_PLAYER, MAP_ROUTE13_HNS
	hideobjectat Route13_Alola_Captain, MAP_ROUTE13_HNS
	applymovement OBJ_EVENT_ID_CAMERA, Route13_TravelToAlola_Movement_1
	waitmovement 0
	waitse
	delay 30
	fadescreenswapbuffers FADE_FROM_BLACK
	playse SE_RG_SS_ANNE_HORN
	waitse
	playse SE_M_SURF
	applymovement LOCALID_ROUTE13_BOAT, Route13_TravelToAlola_Movement_2
	setvar VAR_ALOLA_TRAVEL, 1
	delay 90
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_ROUTE13_BOAT
	special RemoveCameraObject
	warp MAP_MELEMELE_ISLE_HNS, 25, 33
	waitstate
	end

Route13_TravelToAlola_14:
	applymovement LOCALID_PLAYER, Route13_TravelToAlola_Movement_0
	waitmovement 0
	goto Route13_TravelToAlola_13

Route13_TravelToAlola_17:
	applymovement LOCALID_PLAYER, Route13_TravelToAlola_Movement_0
	waitmovement 0
	goto Route13_TravelToAlola_16


Route13_hns_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_Movement_0:
	face_up
	step_end

Route13_GetOffBoat_Movement_0:
	face_left
	step_end

Route13_GetOffBoat_Movement_1:
	face_right
	step_end

Route13_TravelToAlola_Movement_0:
	walk_left
	walk_down
	step_end

Route13_TravelToAlola_Movement_1:
	walk_down
	step_end

Route13_TravelToAlola_Movement_2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route13_Movement_BoatArrive:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route13_GetOffBoat_Text_0:
	.string "Willkommen zurück auf dem\n"
	.string "Festland von Kanto!\p"
	.string "Komm wieder, wenn du zu den\n"
	.string "Alola-Inseln reisen möchtest!$"

Route13_TravelToAlola_Text_0:
	.string "Ahoi!\p"
	.string "Das ist ja ein seltsames\n"
	.string "Souvenir.\p"
	.string "Du musst von den\n"
	.string "Alola-Inseln stammen!$"

Route13_TravelToAlola_Text_0_5:
	.string "Möchtest du das nächste Schiff\n"
	.string "nehmen?\p"
	.string "Es legt schon bald ab!$"

Route13_TravelToAlola_Text_1:
	.string "Ahoi!\n"
	.string "Dann geh an Bord!$"

Route13_TravelToAlola_Text_2:
	.string "Ahoi!\n"
	.string "Komm wieder,\n"
	.string "wenn du in See stechen willst.$"

Route13_TravelToAlola_Text_3:
	.string "Ah, du schon wieder!\n"
	.string "Willst du zu den\l"
	.string "Alola-Inseln?$"

Route13_TravelToAlola_Text_4:
	.string "Ahoi!\n"
	.string "Dieser Hafen ist nur für\n"
	.string "Einheimische.\p"
	.string "Alle Bewohner dieser Inseln\n"
	.string "tragen... {PAUSE 30}seltsame Souvenirs.\p"
	.string "So erkenne ich sie sofort,\n"
	.string "ganz ohne Fahrkarte!$"
