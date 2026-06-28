Route32_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route32_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route32_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route32_EventScript_FisherJustin::
	trainerbattle_single TRAINER_JUSTIN_HNS, Route32_Text_FisherJustin_Seen, Route32_Text_FisherJustin_Beaten
	msgbox Route32_Text_FisherJustin_After, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_FisherRalph::
	trainerbattle_single TRAINER_RALPH_HNS, Route32_Text_FisherRalph1_Seen, Route32_Text_FisherRalph1_Beaten, Route32_EventScript_RegisterRalph
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route32_EventScript_RematchRalph
	msgbox Route32_Text_FisherRalph1_After, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_RegisterRalph::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route32_Text_RalphRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_RALPH_HNS
	release
	end

Route32_EventScript_RematchRalph::
	trainerbattle_rematch TRAINER_RALPH_HNS, Route32_Text_RalphRematchIntro, Route32_Text_RalphRematchDefeat
	msgbox Route32_Text_RalphPostRematch, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_FisherHenry::
	trainerbattle_single TRAINER_HENRY_HNS, Route32_Text_FisherHenry_Seen, Route32_Text_FisherHenry_Beaten
	msgbox Route32_Text_FisherHenry_After, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_YoungsterAlbert::
	trainerbattle_single TRAINER_ALBERT_HNS, Route32_Text_YoungsterAlbert_Seen, Route32_Text_YoungsterAlbert_Beaten
	msgbox Route32_Text_YoungsterAlbert_After, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_YoungsterGordon::
	trainerbattle_single TRAINER_GORDON_HNS, Route32_Text_YoungsterGordon_Seen, Route32_Text_YoungsterGordon_Beaten
	msgbox Route32_Text_YoungsterGordon_After, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_CamperRoland::
	trainerbattle_single TRAINER_ROLAND_HNS, Route32_Text_CamperRoland_Seen, Route32_Text_CamperRoland_Beaten
	msgbox Route32_Text_CamperRoland_After, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_PicnickerLiz::
	trainerbattle_single TRAINER_LIZ_HNS, Route32_Text_PicnickerLiz1_Seen, Route32_Text_PicnickerLiz1_Beaten, Route32_EventScript_RegisterLiz
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route32_EventScript_RematchLiz
	msgbox Route32_Text_PicnickerLiz1_After, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_RegisterLiz::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route32_Text_LizRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_LIZ_HNS
	release
	end

Route32_EventScript_RematchLiz::
	trainerbattle_rematch TRAINER_LIZ_HNS, Route32_Text_LizRematchIntro, Route32_Text_LizRematchDefeat
	msgbox Route32_Text_LizPostRematch, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_BirdkeeperPeter::
	trainerbattle_single TRAINER_PETER_HNS, Route32_Text_BirdKeeperPeter_Seen, Route32_Text_BirdKeeperPeter_Beaten
	msgbox Route32_Text_BirdKeeperPeter_After, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_Roar::
	lock
	faceplayer
	checkitem ITEM_TM_ROAR
	goto_if_eq VAR_RESULT, TRUE, Route32_EventScript_Roar2
	msgbox Route32_Text_RoarIntro, MSGBOX_DEFAULT
	giveitem ITEM_TM_ROAR
	msgbox Route32_Text_RoarOutro, MSGBOX_DEFAULT
	closemessage
	release
	end
Route32_EventScript_Roar2::
	msgbox Route32_Text_RoarOutro, MSGBOX_DEFAULT
	closemessage
	release
	end

Route32_EventScript_SlowpokeTail_TriggerLeft::
	lock
	turnobject LOCALID_SLOWPOKETAIL_MAN, DIR_EAST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	playse SE_PIN
	applymovement LOCALID_SLOWPOKETAIL_MAN, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_SLOWPOKETAIL_MAN, Route32_Movement_SlowpokeLeft
	waitmovement 0
	goto Route32_EventScript_SlowpokeTail_Trigger

Route32_EventScript_SlowpokeTail_TriggerMid::
	lock
	turnobject LOCALID_SLOWPOKETAIL_MAN, DIR_EAST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	playse SE_PIN
	applymovement LOCALID_SLOWPOKETAIL_MAN, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_SLOWPOKETAIL_MAN, Route32_Movement_SlowpokeMid
	waitmovement 0
	goto Route32_EventScript_SlowpokeTail_Trigger

Route32_EventScript_SlowpokeTail_TriggerRight::
	lock
	turnobject LOCALID_SLOWPOKETAIL_MAN, DIR_EAST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	playse SE_PIN
	applymovement LOCALID_SLOWPOKETAIL_MAN, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_SLOWPOKETAIL_MAN, Route32_Movement_SlowpokeRight
	waitmovement 0
	goto Route32_EventScript_SlowpokeTail_Trigger

Route32_EventScript_SlowpokeTail_Trigger::
	msgbox Route32_Text_SlowpokeTailOffer, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route32_EventScript_SlowpokeTail_Trigger2
	msgbox Route32_Text_RefusedSlowpokeTail, MSGBOX_DEFAULT
	closemessage
	setvar VAR_SLOWPOKE_TAIL, 1
	release
	end	
Route32_EventScript_SlowpokeTail_Trigger2::
	msgbox Route32_Text_ThoughtKidsLoaded, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 16, Route32_EventScript_Movement_Left
	call_if_eq VAR_TEMP_0, 17, 	Route32_EventScript_Movement_Right
	setvar VAR_SLOWPOKE_TAIL, 1
	release
	end

Route32_EventScript_Movement_Left::
	applymovement LOCALID_SLOWPOKETAIL_MAN, Common_Movement_WalkLeft1
	waitmovement 0
	turnobject LOCALID_SLOWPOKETAIL_MAN, DIR_EAST
	return 

Route32_EventScript_Movement_Right::
	applymovement LOCALID_SLOWPOKETAIL_MAN, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement LOCALID_SLOWPOKETAIL_MAN, Common_Movement_WalkLeft1
	waitmovement 0
	turnobject LOCALID_SLOWPOKETAIL_MAN, DIR_EAST
	return 	

Route32_EventScript_SlowpokeTail::
	lock
	faceplayer
	msgbox Route32_Text_SlowpokeTailOffer, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route32_EventScript_SlowpokeTail2
	msgbox Route32_Text_RefusedSlowpokeTail, MSGBOX_DEFAULT
	closemessage
	release
	end
Route32_EventScript_SlowpokeTail2::
	msgbox Route32_Text_ThoughtKidsLoaded, MSGBOX_DEFAULT
	closemessage
	release
	end


Route32_EventScript_Frieda::
	lock
	faceplayer
	goto_if_set FLAG_GOT_POISON_BARB, Route32_EventScript_FriedaCompleted
	msgbox Route32_Text_MeetFrieda, MSGBOX_DEFAULT
	closemessage
	multichoice 20, 0, MULTI_DAYS_OF_WEEK, FALSE
	switch VAR_RESULT
	case 0, Route32_EventScript_FriedaNope
	case 1, Route32_EventScript_FriedaNope
	case 2, Route32_EventScript_FriedaNope
	case 3, Route32_EventScript_FriedaNope
	case 4, Route32_EventScript_FriedaNope
	case 5, Route32_EventScript_FriedaYes
	case 6, Route32_EventScript_FriedaNope
	case 7, Route32_EventScript_FriedaCancel
	case MULTI_B_PRESSED, Route32_EventScript_FriedaCancel
	closemessage
	release
	end
Route32_EventScript_FriedaYes::
	msgbox Route32_Text_FriedaGivesGift, MSGBOX_DEFAULT
	giveitem ITEM_POISON_BARB
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_POISON_BARB
	msgbox Route32_Text_FriedaGaveGift, MSGBOX_DEFAULT
	closemessage
	release
	end
Route32_EventScript_FriedaNope::
	msgbox Route32_Text_FriedaNope, MSGBOX_DEFAULT
	closemessage
	release
	end
Route32_EventScript_FriedaCancel::
	closemessage
	release
	end
Route32_EventScript_FriedaCompleted::
	msgbox Route32_Text_FriedaFriday, MSGBOX_DEFAULT
	closemessage
	release
	end

Route32_EventScript_BaldingMan::
	lock
	faceplayer
	msgbox Route32_Text_CooltrainerM_Experiences, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_ROUTE32_BALDINGMAN, DIR_EAST
	release
	end

Route32_EventScript_BaldingManTriggerLeft::
	lock
	playse SE_PIN
	applymovement LOCALID_ROUTE32_BALDINGMAN, Common_Movement_ExclamationMark
	delay 60
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	goto Route32_EventScript_BaldingManCheck
	end
Route32_EventScript_BaldingManTriggerMid::
	lock
	playse SE_PIN
	applymovement LOCALID_ROUTE32_BALDINGMAN, Common_Movement_ExclamationMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Route32_Movement_StartMid
	waitmovement 0
	goto Route32_EventScript_BaldingManCheck
	end
Route32_EventScript_BaldingManTriggerRight::
	lock
	playse SE_PIN
	applymovement LOCALID_ROUTE32_BALDINGMAN, Common_Movement_ExclamationMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Route32_Movment_StartRight
	waitmovement 0
	goto Route32_EventScript_BaldingManCheck
	end
Route32_EventScript_BaldingManCheck::
	goto_if_unset FLAG_HIDE_SPROUT_TOWER_SILVER, Route32_EventScript_BaldingManTower
	goto_if_unset FLAG_DEFEATED_VIOLET_GYM, Route32_EventScript_BaldingManGym
	goto_if_unset FLAG_RECEIVED_TOGEPI_EGG, Route32_EventScript_BaldingManEgg
	msgbox Route32_Text_CooltrainerM_HaveThisSeed, MSGBOX_DEFAULT
	giveitem ITEM_MIRACLE_SEED
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	closemessage
	setvar VAR_VIOLET_CITY_STATE, 5
	release
	end
Route32_EventScript_BaldingManTower::
	msgbox Route32_Text_CooltrainerM_WhatsTheHurry, MSGBOX_DEFAULT
	msgbox Route32_Text_CooltrainerM_SproutTower, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route32_Movement_Turnback
	waitmovement 0
	release
	end
Route32_EventScript_BaldingManGym::
	msgbox Route32_Text_CooltrainerM_WhatsTheHurry, MSGBOX_DEFAULT
	msgbox Route32_Text_CooltrainerM_VioletGym, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route32_Movement_Turnback
	waitmovement 0
	release
	end
Route32_EventScript_BaldingManEgg::
	msgbox Route32_Text_CooltrainerM_WhatsTheHurry, MSGBOX_DEFAULT
	msgbox Route32_Text_CooltrainerM_AideIsWaiting, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route32_Movement_Turnback
	waitmovement 0
	release
	end

Route32_EventScript_Item_Bullet_Seed::
    finditem ITEM_TM_BULLET_SEED
    end
	
Route32_EventScript_GreatBall::
	finditem ITEM_GREAT_BALL
	end
Route32_EventScript_GreatBallII::
	finditem ITEM_GREAT_BALL
	end
Route32_EventScript_SuperPotion::
	finditem ITEM_SUPER_POTION
	end

Route32_EventScript_Sign1::
	lock
	msgbox Route32_Text_Sign1, MSGBOX_SIGN
	closemessage
	release
	end

Route32_EventScript_Sign2::
	lock
	msgbox Route32_Text_Sign2, MSGBOX_SIGN
	closemessage
	release
	end

Route32_EventScript_Sign3::
	lock
	msgbox Route32_Text_Sign3, MSGBOX_SIGN
	closemessage
	release
	end

Route32_Movement_Turnback:
	walk_up
	step_end

Route32_Movement_StartMid:
	walk_left
	step_end

Route32_Movment_StartRight:
	walk_left
	walk_left
	step_end

Route32_Movement_SlowpokeLeft::
	step_end

Route32_Movement_SlowpokeMid::
	walk_right
	step_end

Route32_Movement_SlowpokeRight::
	walk_right
	walk_right
	step_end

Route32_Text_CooltrainerM_WhatsTheHurry:
	.string "Warte! Warum die Eile?$"

Route32_Text_CooltrainerM_AideIsWaiting:
	.string "{PLAYER}, oder? Ein Typ mit einer\n"
	.string "Brille hat nach dir gefragt.\p"
	.string "Kümmere dich um ihn. Er erwartet\n"
	.string "dich im PokémonCENTER.$"

Route32_Text_CooltrainerM_SproutTower:
	.string "Warst du im KNOFENSA-TURM?\p"
	.string "Wenn du jemals nach VIOLA CITY\n"
	.string "kommst, erwartet man von dir,\l"
	.string "dass du dort trainierst.\p"
	.string "Das ist ein Muss für alle Trainer.\p"
	.string "Geh zum KNOFENSA-TURM!$"

Route32_Text_CooltrainerM_VioletGym:
	.string "Warst du schon in der PKMN-ARENA?\p"
	.string "Dort kannst du deine Pokémon\n"
	.string "und dich auf die Probe stellen.\p"
	.string "Es ist eine Art\n"
	.string "Ritus für alle Trainer!$"

Route32_Text_CooltrainerM_HaveThisSeed:
	.string "Du besitzt einige gute Pokémon.\p"
	.string "Sie sind bestimmt wegen der vielen\n"
	.string "Kämpfe, die du mit ihnen in\l"
	.string "VIOLA CITY absolviert hast, so gut.\p"
	.string "Das Training in der PKMN-ARENA\n"
	.string "muss von großem Nutzen gewesen sein.\p"
	.string "Nimm dies als Andenken\n"
	.string "an VIOLA CITY.\p"
	.string "Damit werden Pflanzen-Attacken\n"
	.string "verstärkt.$"

Route32_Text_CooltrainerM_Experiences:
	.string "Die Erfahrungen von VIOLA CITY\n"
	.string "werden dir auf deiner Reise\l"
	.string "von großem Nutzen sein.$"

Route32_Text_SlowpokeTailOffer:
	.string "Hättest du gern diese leckere,\n"
	.string "nahrhafte Flegmonrute?\p"
	.string "Für dich jetzt sofort, nur\n"
	.string "¥1.000.000!\p"
	.string "Die willst du doch!$"

Route32_Text_ThoughtKidsLoaded:
	.string "Tz! Ich dachte, die Kids\n"
	.string "heutzutage hätten Kohle…$"

Route32_Text_RefusedSlowpokeTail:
	.string "Du willst sie nicht?\n"
	.string "Dann hau ab. Scher dich weg!$"

Route32_Text_FisherJustin_Seen:
	.string "Wow!\p"
	.string "Wegen dir habe ich\n"
	.string "den Fisch verloren!$"

Route32_Text_FisherJustin_Beaten:
	.string "Platsch!$"

Route32_Text_FisherJustin_After:
	.string "Geduld… Die Voraussetzung\n"
	.string "für das Angeln und\l"
	.string "für Pokémon ist dieselbe.$"

Route32_Text_FisherRalph1_Seen:
	.string "Ich beherrsche beides,\n"
	.string "Angeln und Pokémon.\p"
	.string "Darum werde ich nicht verlieren!$"

Route32_Text_FisherRalph1_Beaten:
	.string "Ts! Ich wollte\n"
	.string "die Sache beschleunigen…$"

Route32_Text_FisherRalph1_After:
	.string "Angeln ist eine lebenslange Passion.\p"
	.string "Pokémon sind lebenslange Freunde!$"

Route32_Text_RalphRegister:
    .string "Angeln ist eine Leidenschaft\n"
    .string "fürs ganze Leben.\p"
    .string "POKéMON sind Freunde fürs Leben!$"

Route32_Text_RalphRematchIntro:
    .string "Ich bin sowohl im Angeln als\n"
    .string "auch mit POKéMON richtig gut.\p"
    .string "Gegen irgendein Kind verliere\n"
    .string "ich ganz bestimmt nicht!$"

Route32_Text_RalphRematchDefeat:
    .string "Tz! Ich wollte wohl zu schnell\n"
    .string "vorankommen…$"

Route32_Text_RalphPostRematch:
    .string "Angeln ist eine Leidenschaft\n"
    .string "fürs ganze Leben.\p"
    .string "POKéMON sind Freunde fürs Leben!$"

Route32_Text_FisherHenry_Seen:
	.string "Meine Pokémon? Frisch gefangen!$"

Route32_Text_FisherHenry_Beaten:
	.string "PLATSCHER?$"

Route32_Text_FisherHenry_After:
	.string "Frisch gefangene Pokémon können\n"
	.string "gut trainierten nicht Paroli bieten.$"

Route32_Text_YoungsterAlbert_Seen:
	.string "Ich habe dich hier noch nie gesehen.\p"
	.string "Du denkst also, du bist stark?$"

Route32_Text_YoungsterAlbert_Beaten:
	.string "Du bist stark!$"

Route32_Text_YoungsterAlbert_After:
	.string "Ich versuche, mit meinen\n"
	.string "Lieblingen der Beste zu sein.\p"
	.string "Ich setze nicht auf zähe Pokémon,\n"
	.string "wie die anderen.$"

Route32_Text_YoungsterGordon_Seen:
	.string "Ich habe gute Pokémon\n"
	.string "im Gras gefunden!\p"
	.string "Ich denke, sie passen ganz gut zu mir!$"

Route32_Text_YoungsterGordon_Beaten:
	.string "Mist. Ich dachte, ich könnte gewinnen.$"

Route32_Text_YoungsterGordon_After:
	.string "Im Gras findest du viele Dinge.$"

Route32_Text_CamperRoland_Seen:
	.string "Dieser Blick… Wie faszinierend.$"

Route32_Text_CamperRoland_Beaten:
	.string "Hm. Das ist enttäuschend.$"

Route32_Text_CamperRoland_After:
	.string "Wenn du nicht kämpfen möchtest,\n"
	.string "vermeide Blickkontakt.$"

Route32_Text_PicnickerLiz1_Seen:
	.string "A-ha. Ja, du weißt…\p"
	.string "Wie bitte? Kampf? Ich telefoniere.\p"
	.string "Oh, O.K. Aber mach schnell.$"

Route32_Text_PicnickerLiz1_Beaten:
	.string "Ich muss meinem Ärger Luft machen!$"

Route32_Text_PicnickerLiz1_After:
	.string "Ich hatte einen netten Plausch.$"

Route32_Text_LizRegister:
    .string "Ich war gerade so schön am\n"
    .string "Plaudern.$"

Route32_Text_LizRematchIntro:
    .string "Aha. Ja, und weißt du…\p"
    .string "Wie bitte? Kämpfen? Ich telefoniere\n"
    .string "gerade.\p"
    .string "Na gut. Aber mach schnell.$"

Route32_Text_LizRematchDefeat:
    .string "Oh! Jetzt muss ich erst mal\n"
    .string "meinen Ärger loswerden!$"

Route32_Text_LizPostRematch:
    .string "Ich war gerade so schön am\n"
    .string "Plaudern.$"

Route32_Text_BirdKeeperPeter_Seen:
	.string "Dieser ORDEN! Er ist aus VIOLA CITY!\p"
	.string "Du hast FALK besiegt?$"

Route32_Text_BirdKeeperPeter_Beaten:
	.string "Ich kenne meine Schwächen.$"

Route32_Text_BirdKeeperPeter_After:
	.string "Ich sollte in der\n"
	.string "PKMN-ARENA von VIOLA CITY weiter\l"
	.string "trainieren.$"

Route32_Text_RoarIntro:
	.string "WROOOOAR! ALLE rennen, wenn ich\n"
	.string "brülle! ABER DU BIST GEKOMMEN!\p"
	.string "DAS GEFÄLLT MIR! NIMM DAS JETZT!$"

Route32_Text_RoarOutro:
	.string "WROOOOAR! ES BRÜLLT!\p"
	.string "SOGAR Pokémon FLIEHEN VOR EINEM\n"
	.string "GUTEN BRÜLLER!$"

Route32_Text_MeetFrieda:
	.string "Frieda: Juchhu!\p"
	.string "Ich bin Frieda von der\n"
	.string "WOCHENTAGS-FAMILIE!\p"
	.string "Schön, dich zu treffen!\p"
	.string "Errätst du meinen Lieblingstag,\n"
	.string "bekommst du eine Belohnung.$"

Route32_Text_FriedaGivesGift:
	.string "Hier, GIFTSTICH ist für dich!$"

Route32_Text_FriedaGaveGift:
	.string "Frieda: Gib es einem Pokémon,\n"
	.string "das Gift-Attacken beherrscht.\p"
	.string "Oh!\p"
	.string "Es ist fies!\p"
	.string "Du wirst staunen, wie stark\n"
	.string "es Gift-Attacken macht!$"

Route32_Text_FriedaFriday:
	.string "Frieda: Hi! Welchen Tag magst du?\p"
	.string "Ich liebe Freitag. Ganz klar!\p"
	.string "Findest du ihn nicht auch super?$"

Route32_Text_FriedaNope:
	.string "Frieda: Nicht der richtige!$"

Route32_Text_Sign1:
	.string "ROUTE 32\p"
	.string "VIOLA CITY - AZALEA CITY$"

Route32_Text_Sign2:
	.string "ROUTE 32\p"
	.string "ALPH-RUINEN - VIOLA CITY$"

Route32_Text_Sign3:
	.string "ROUTE 32\p"
	.string "EINHEITSTUNNEL - VIOLA CITY$"
