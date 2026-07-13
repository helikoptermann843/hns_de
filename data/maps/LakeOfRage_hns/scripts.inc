LakeOfRage_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LakeOfRage_OnTransition
	.byte 0

LakeOfRage_OnTransition::
	setflag FLAG_VISITED_LAKE_OF_RAGE
	call_if_lt VAR_MAHOGANY_TOWN_STATE, 2, LakeOfRage_EventScript_HideLois
	goto_if_lt VAR_MAHOGANY_TOWN_STATE, 14, LakeOfRage_EventScript_SetHighTide
	special UpdateShoalTideFlag
	goto_if_set FLAG_SYS_LAKE_OF_RAGE_TIDE, LakeOfRage_EventScript_SetHighTide
	goto LakeOfRage_EventScript_SetLowTide

LakeOfRage_EventScript_SetLowTide::
	setweather WEATHER_NONE
	setmaplayoutindex LAYOUT_LAKE_OF_RAGE_LOW_TIDE_HNS
	end

LakeOfRage_EventScript_SetHighTide::
	setmaplayoutindex LAYOUT_LAKE_OF_RAGE_HNS
	goto_if_lt VAR_MAHOGANY_TOWN_STATE, 14, LakeOfRage_EventScript_ThunderStorm
	random 2
	goto_if_eq VAR_RESULT, 1, LakeOfRage_EventScript_ThunderStorm
	end

LakeOfRage_EventScript_HideLois::
	setflag FLAG_TEMP_1
	return

LakeOfRage_EventScript_ThunderStorm::
	setweather WEATHER_RAIN_THUNDERSTORM
	end

LakeOfRage_EventScript_Pryce::
    lock
    faceplayer
    msgbox LakeOfRage_Text_Pryce, MSGBOX_DEFAULT
    closemessage
    fadescreenswapbuffers FADE_TO_BLACK
    setflag FLAG_HIDE_LAKE_PRYCE
    removeobject LOCALID_LAKE_PRYCE
    fadescreenswapbuffers FADE_FROM_BLACK
    clearflag FLAG_HIDE_DOJO_PRYCE
    release
    end

LakeOfRage_Text_Pryce:
	.string "{PLAYER}.\p"
	.string "Sogar hier hält mich die Kälte\n"
	.string "wachsam.\p"
	.string "Wenn du wieder kämpfen willst,\n"
	.string "komm zum KAMPF-DOJO.$"

LakeOfRage_EventScript_Gramps::
	goto_if_ge VAR_MAHOGANY_TOWN_STATE, 14, LakeOfRage_EventScript_Gramps2
	msgbox LakeOfRage_Text_Gramps, MSGBOX_NPC
	end

LakeOfRage_EventScript_Gramps2::
	msgbox LakeOfRage_Text_GrampsCleared, MSGBOX_NPC
	end
LakeOfRage_EventScript_Lass::
	msgbox LakeOfRage_Text_CooltrainerF, MSGBOX_NPC
	end

LakeOfRage_EventScript_Nerd::
	msgbox LakeOfRage_Text_SuperNerd, MSGBOX_NPC
	end

LakeOfRage_EventScript_Andre::
	trainerbattle_single TRAINER_ANDRE_HNS, LakeOfRage_Text_FisherAndreSeen, LakeOfRage_Text_FisherAndreBeaten
	msgbox LakeOfRage_Text_FisherAndreAfter, MSGBOX_AUTOCLOSE
	end

LakeOfRage_EventScript_Raymond::
	trainerbattle_single TRAINER_RAYMOND_HNS, LakeOfRage_Text_FisherRaymondSeen, LakeOfRage_Text_FisherRaymondBeaten
	msgbox LakeOfRage_Text_FisherRaymondAfter, MSGBOX_AUTOCLOSE
	end

LakeOfRage_EventScript_Aaron::
	trainerbattle_single TRAINER_AARON_HNS, LakeOfRage_Text_CooltrainermAaronSeen, LakeOfRage_Text_CooltrainermAaronBeaten
	msgbox LakeOfRage_Text_CooltrainermAaronAfter, MSGBOX_AUTOCLOSE
	end

LakeOfRage_EventScript_Lois::
	trainerbattle_single TRAINER_LOIS_HNS, LakeOfRage_Text_CooltrainerfLoisSeen, LakeOfRage_Text_CooltrainerfLoisBeaten
	msgbox LakeOfRage_Text_CooltrainerfLoisAfter, MSGBOX_AUTOCLOSE
	end

LakeOfRage_EventScript_Gyarados::
	lock
	faceplayer
	msgbox LakeOfRage_Text_GyaradosCry, MSGBOX_DEFAULT
	waitse
	playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattleshiny SPECIES_GYARADOS, 30
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, LakeOfRage_EventScript_Defeated_Gyarados
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, LakeOfRage_EventScript_Ran_Gyarados
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, LakeOfRage_EventScript_Ran_Gyarados
LakeOfRage_EventScript_Defeated_Gyarados::
	setflag FLAG_HIDE_LAKE_OF_RAGE_GYARADOS
	clearflag FLAG_TEMP_1
	removeobject LOCALID_LAKEOFRAGE_GYARADOS
	clearflag FLAG_HIDE_LAKE_OF_RAGE_LANCE
	addobject LOCALID_LAKEOFRAGE_LANCE
	giveitem ITEM_RED_SCALE
	setobjectxyperm LOCALID_LAKEOFRAGE_OLDMAN, 32, 38
	setvar VAR_MAHOGANY_TOWN_STATE, 2
	release
	end

LakeOfRage_EventScript_Ran_Gyarados::
	release
	end

LakeOfRage_EventScript_Item_Full_Restore::
	finditem ITEM_FULL_RESTORE
	end
LakeOfRage_EventScript_Item_Secret_Power::
    finditem ITEM_TM_SECRET_POWER
    end
LakeOfRage_EventScript_Item_Red_Flute::
	finditem ITEM_RED_FLUTE
	end

LakeOfRage_EventScript_Dragonite::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DRAGONITE, CRY_MODE_NORMAL
	msgbox LakeOfRage_Text_Dragonite, MSGBOX_DEFAULT
	waitmoncry
	turnobject LOCALID_LAKEOFRAGE_DRAGONITE, DIR_WEST
	release
	end

LakeOfRage_EventScript_Lance::
	lock
	goto_if_eq VAR_MAHOGANY_TOWN_STATE, 3, LakeOfRage_EventScript_Lance_Return
	msgbox LakeOfRage_Text_LanceForcedToEvolve, MSGBOX_DEFAULT
	closemessage
	delay 20
	faceplayer
	turnobject LOCALID_LAKEOFRAGE_OLDMAN, DIR_WEST
	msgbox LakeOfRage_Text_LanceIntro2, MSGBOX_DEFAULT
	setvar VAR_MAHOGANY_TOWN_STATE, 3
	msgbox LakeOfRage_Text_LanceIntro3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, LakeOfRage_EventScript_LancDeclined
LakeOfRage_EventScript_LanceAccept::
	lock
	msgbox LakeOfRage_Text_LanceRadioSignal, MSGBOX_DEFAULT
	closemessage
	goto_if_eq VAR_FACING, DIR_NORTH, LakeOfRage_EventScript_LanceDragoniteLeaveNorth
	applymovement LOCALID_LAKEOFRAGE_LANCE, LakeOfRage_Movement_LanceLeave
	applymovement LOCALID_LAKEOFRAGE_DRAGONITE, LakeOfRage_Movement_DragoniteLeave
	waitmovement LOCALID_LAKEOFRAGE_LANCE
	waitmovement LOCALID_LAKEOFRAGE_DRAGONITE
LakeOfRage_EventScript_EndScene::
	setflag FLAG_HIDE_LAKE_OF_RAGE_LANCE
	removeobject LOCALID_LAKEOFRAGE_LANCE
	removeobject LOCALID_LAKEOFRAGE_DRAGONITE
	setvar VAR_MAHOGANY_TOWN_STATE, 4
	clearflag FLAG_HIDE_MAHOGANY_TOWN_SHOP_NPCS
	release
	end

LakeOfRage_EventScript_Lance_Return::
	lock
	faceplayer
	msgbox LakeOfRage_Text_LanceAskHelp, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, LakeOfRage_EventScript_LanceAccept
	goto_if_eq VAR_RESULT, FALSE, LakeOfRage_EventScript_LancDeclined

LakeOfRage_EventScript_LancDeclined::
	msgbox LakeOfRage_Text_LanceRefused, MSGBOX_DEFAULT
	closemessage
	release
	end


LakeOfRage_EventScript_LanceDragoniteLeaveNorth::
	applymovement LOCALID_LAKEOFRAGE_LANCE, LakeOfRage_Movement_LanceLeaveNorth
	applymovement LOCALID_LAKEOFRAGE_DRAGONITE, LakeOfRage_Movement_DragoniteLeaveNorth
	waitmovement LOCALID_LAKEOFRAGE_LANCE
	waitmovement LOCALID_LAKEOFRAGE_DRAGONITE
	goto LakeOfRage_EventScript_EndScene

LakeOfRage_Movement_LanceLeaveNorth:
	walk_left
	walk_down
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

LakeOfRage_Movement_DragoniteLeaveNorth:
	delay_16
	delay_16
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

LakeOfRage_Movement_LanceLeave:
	walk_down
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

LakeOfRage_Movement_DragoniteLeave:
	delay_16
	delay_16
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

LakeOfRage_Text_Dragonite:
	.string "Dragoran: RWAAAH!$"

LakeOfRage_Text_LanceForcedToEvolve:
	.string "Dieser See ist voller\n"
	.string "GARADOS. Aber sonst gibt es\l"
	.string "hier nichts…\p"
	.string "Die KARPADOR werden also\n"
	.string "gezwungen, sich zu\l"
	.string "entwickeln…$"

LakeOfRage_Text_LanceIntro1:
	.string "Bist du wegen der Gerüchte hier?\p"
	.string "Du bist {PLAYER}? Ich bin SIEGFRIED,\p"
	.string "ein Trainer wie du.$"

LakeOfRage_Text_LanceIntro2:
	.string "Ich hörte einige Gerüchte.\p"
	.string "Also kam ich hierher, um\n"
	.string "einige Nachforschungen anzustellen…$"

LakeOfRage_Text_LanceIntro3:
	.string "Ich habe gesehen,\n"
	.string "wie du kämpfst, {PLAYER}.\p"
	.string "Man kann sagen,\n"
	.string "dass du ein Trainer von\l"
	.string "bemerkenswertem Format bist.\p"
	.string "Würdest du mir bei meinen\n"
	.string "Nachforschungen helfen?$"

LakeOfRage_Text_LanceRadioSignal:
	.string "SIEGFRIED: Exzellent!\p"
	.string "Es sieht so aus, als würde jemand\p"
	.string "die KARPADOR im SEE zwingen,\n"
	.string "sich zu entwickeln.\p"
	.string "Die Ursache ist das mysteriöse\n"
	.string "Radiosignal aus MAHAGONIA CITY.\p"
	.string "Ich werde auf dich warten,\n"
	.string "{PLAYER}.$"

LakeOfRage_Text_LanceRefused:
	.string "Oh… Solltest du\n"
	.string "deine Meinung ändern, dann hilf mir\l"
	.string "bitte.$"

LakeOfRage_Text_LanceAskHelp:
	.string "SIEGFRIED: Na? Wirst du mir helfen?$"

LakeOfRage_Text_GyaradosCry:
	.string "GARADOS: Gashaa!$"

LakeOfRage_Text_Gramps:
	.string "Die GARADOS sind wütend!\p"
	.string "Das ist ein böses Omen!$"

LakeOfRage_Text_GrampsCleared:
	.string "Die GARADOS sind wütend!\p"
	.string "Das ist ein böses Omen!$"

LakeOfRage_Text_SuperNerd:
	.string "Ich habe gehört,\n"
	.string "dieser See entstand durch\l"
	.string "wütende GARADOS.\p"
	.string "Ich frage mich, ob da eine Verbindung\n"
	.string "zu der momentanen Situation besteht!$"

LakeOfRage_Text_CooltrainerF:
	.string "Täuschen mich meine Augen? Ich sah\n"
	.string "ein rotes GARADOS im SEE…\p"
	.string "Aber ich dachte, GARADOS sind blau!$"


LakeOfRage_Text_FisherAndreSeen:
	.string "Lass mich mit den Pokémon\n"
	.string "kämpfen, die ich gerade fing!$"

LakeOfRage_Text_FisherAndreBeaten:
	.string "Ich bin ein Profiangler, doch\n"
	.string "als Trainer tauge ich nix…$"

LakeOfRage_Text_FisherAndreAfter:
	.string "Als Angler verliere ich nie!\n"
	.string "Ich fange Pokémon den ganzen Tag.$"


LakeOfRage_Text_FisherRaymondSeen:
	.string "Egal was ich tu, ich fange\n"
	.string "immer die gleichen Pokémon…$"

LakeOfRage_Text_FisherRaymondBeaten:
	.string "Meine Schnur ist total verheddert…$"

LakeOfRage_Text_FisherRaymondAfter:
	.string "Warum kann ich keine guten\n"
	.string "Pokémon fangen?$"

LakeOfRage_Text_CooltrainermAaronSeen:
	.string "Trifft ein Trainer auf einen anderen,\n"
	.string "so muss er ihn herausfordern.\p"
	.string "Das ist unsere Bestimmung.$"

LakeOfRage_Text_CooltrainermAaronBeaten:
	.string "Wow… Toller Kampf!$"

LakeOfRage_Text_CooltrainermAaronAfter:
	.string "Pokémon und Trainer werden\n"
	.string "stark durch ständiges Kämpfen.$"

LakeOfRage_Text_CooltrainerfLoisSeen:
	.string "Ein Rotes Garados?\p"
	.string "Wie geht denn sowas…\p"
	.string "Die sind doch Blau!$"

LakeOfRage_Text_CooltrainerfLoisBeaten:
	.string "Gut gemacht!$"

LakeOfRage_Text_CooltrainerfLoisAfter:
	.string "Wenn ich so darüber nachdenke,\n"
	.string "hab ich ein pinkes Smettbo gesehen.$"



LakeOfRage_EventScript_Wesley::
	lock
	faceplayer
	goto_if_set FLAG_GOT_BLACK_BELT, LakeOfRage_EventScript_WesleyCompleted
	msgbox LakeOfRage_Text_MeetWesley, MSGBOX_DEFAULT
	closemessage
	multichoice 20, 0, MULTI_DAYS_OF_WEEK, FALSE
	switch VAR_RESULT
	case 0, LakeOfRage_EventScript_WesleyNope
	case 1, LakeOfRage_EventScript_WesleyNope
	case 2, LakeOfRage_EventScript_WesleyNope
	case 3, LakeOfRage_EventScript_WesleyYes
	case 4, LakeOfRage_EventScript_WesleyNope
	case 5, LakeOfRage_EventScript_WesleyNope
	case 6, LakeOfRage_EventScript_WesleyNope
	case 7 LakeOfRage_EventScript_WesleyCancel
	case MULTI_B_PRESSED, LakeOfRage_EventScript_WesleyCancel
	closemessage
	release
	end
LakeOfRage_EventScript_WesleyYes::
	msgbox LakeOfRage_Text_WesleyGivesGift, MSGBOX_DEFAULT
	giveitem ITEM_BLACK_BELT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_BLACK_BELT
	msgbox LakeOfRage_Text_WesleyGaveGift, MSGBOX_DEFAULT
	closemessage
	release
	end
LakeOfRage_EventScript_WesleyNope::
	msgbox LakeOfRage_Text_WesleyNotWednesday, MSGBOX_DEFAULT
	closemessage
	release
	end
LakeOfRage_EventScript_WesleyCancel::
	closemessage
	release
	end
LakeOfRage_EventScript_WesleyCompleted::
	msgbox LakeOfRage_Text_WesleyWednesday, MSGBOX_DEFAULT
	closemessage
	release
	end

LakeOfRage_Text_MeetWesley:
	.string "Mitko: Na, wie geht's dir?\p"
	.string "Ich gehöre zur Wochentags-Familie!\n"
	.string "Kannst du meinen Lieblingstag erraten?$"

LakeOfRage_Text_WesleyGivesGift:
	.string "Freut mich! Bitte nimm dieses\n"
	.string "Souvenir.$"

LakeOfRage_Text_WesleyGaveGift:
	.string "Mitko: Schwarzgurt erhöht die\n"
	.string "Kraft von Kampf-Attacken.$"

LakeOfRage_Text_WesleyWednesday:
	.string "Mitko: Da du mich gefunden hast,\n"
	.string "hast du meine Brüder und\l"
	.string "Schwestern getroffen.\p"
	.string "Oder hattest du einfach Glück?$"

LakeOfRage_Text_WesleyNotWednesday:
	.string "Mitko: Nicht ganz...$"

LakeOfRage_EventScript_Sign1::
	msgbox LakeOfRage_Text_Sign, MSGBOX_SIGN
	end

LakeOfRage_EventScript_Sign2::
	msgbox LakeOfRage_Text_FishingGuruSign, MSGBOX_SIGN
	end

LakeOfRage_Text_Sign:
	.string "SEE DES ZORNS\n"
	.string "auch bekannt als GARADOS-SEE$"

LakeOfRage_Text_FishingGuruSign:
	.string "HAUS VOM PROFIANGLER$"
