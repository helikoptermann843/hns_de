Route27_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route27_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route27_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route27_EventScript_BaobaCall::
	setspeaker Route27_Text_BaobaName
	pokenavcall BlackthornCity_Text_BaobaCall
	waitmessage
	delay 30
	setflag FLAG_SAFARI_ZONE_WEST_EXPANSION
    setvar VAR_ROUTE27_BAOBA_CALL, 1
	end

Route27_Text_BaobaName:
	.string "BAOBA$"

Route27_EventScript_FirstSteps::
    lock
    playse SE_PIN
    setflag FLAG_VISITED_KANTO
    applymovement2 LOCALID_ROUTE27_FATMAN, Common_Movement_ExclamationMark
    turnobject LOCALID_ROUTE27_FATMAN, DIR_WEST
    delay 30
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_1, 24, Route27_EventScript_FirstStepsWalkTop
    call_if_eq VAR_TEMP_1, 25, Route27_EventScript_FirstStepsWalkBot

    msgbox Route27_Text_FisherHey, MSGBOX_DEFAULT
    msgbox Route27_Text_FisherMessage, MSGBOX_DEFAULT
    closemessage
    turnobject LOCALID_ROUTE27_FATMAN, DIR_SOUTH

    @integrated flagheap
    setflag FLAG_HIDE_VICTORY_ROAD_SILVER
    setflag FLAG_HIDE_INDIGO_PLATEAU_SILVER
    setflag FLAG_HIDE_INDIGO_PLATEAU_MARY_OAK
    
    clearflag FLAG_GOT_TM_SANDSTORM
    clearflag FLAG_INDIGOJUNCTION_HIDE_SILVER_GUARD
    clearflag FLAG_INDIGOJUNCTION_HIDE_KANTO_GUARD

    setvar VAR_ROUTE27_STATE, 1
    release
    end

Route27_EventScript_FirstStepsWalkTop::
    applymovement2 LOCALID_ROUTE27_FATMAN, Route27_Movement_WalkTop
    waitmovement 0
    return
Route27_EventScript_FirstStepsWalkBot::
    applymovement2 LOCALID_ROUTE27_FATMAN, Route27_Movement_WalkBot
    waitmovement 0
    return

Route27_Movement_WalkTop:
    face_left
    walk_left
    step_end

Route27_Movement_WalkBot:
    walk_down
    walk_left
    step_end

Route27_EventScript_Item_Moonstone::
    finditem ITEM_MOON_STONE
    end

Route27_EventScript_Item_RareCandy::
    finditem ITEM_RARE_CANDY
    end

Route27_EventScript_Item_DragonClaw::
    finditem ITEM_TM_DRAGON_CLAW
    end

Route27_EventScript_Item_Destiny_Knot::
    finditem ITEM_DESTINY_KNOT
    end

Route27_EventScript_Fatman::
    msgbox Route27_Text_FisherMessage, MSGBOX_NPC
    end

Route27_EventScript_Blake::
	trainerbattle_single TRAINER_BLAKE_HNS, Route27_Text_CooltrainermBlakeSeen, Route27_Text_CooltrainermBlakeBeaten
	msgbox Route27_Text_CooltrainermBlakeAfter, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_Brian::
	trainerbattle_single TRAINER_BRIAN_HNS, Route27_Text_CooltrainermBrianSeen, Route27_Text_CooltrainermBrianBeaten
	msgbox Route27_Text_CooltrainermBrianAfter, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_Reena::
	trainerbattle_single TRAINER_REENA_HNS, Route27_Text_CooltrainerfReenaSeen, Route27_Text_CooltrainerfReenaBeaten, Route27_EventScript_RegisterReena
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route27_EventScript_RematchReena
	msgbox Route27_Text_CooltrainerfReenaAfter, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_RegisterReena::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route27_Text_ReenaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_REENA_HNS
	release
	end

Route27_EventScript_RematchReena::
	trainerbattle_rematch TRAINER_REENA_HNS, Route27_Text_ReenaRematchIntro, Route27_Text_ReenaRematchDefeat
	msgbox Route27_Text_ReenaPostRematch, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_Megan::
	trainerbattle_single TRAINER_MEGAN_HNS, Route27_Text_CooltrainerfMeganSeen, Route27_Text_CooltrainerfMeganBeaten
	msgbox Route27_Text_CooltrainerfMeganAfter, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_Gilbert::
	trainerbattle_single TRAINER_GILBERT_HNS, Route27_Text_PsychicGilbertSeen, Route27_Text_PsychicGilbertBeaten
	msgbox Route27_Text_PsychicGilbertAfter, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_Jose::
	trainerbattle_single TRAINER_JOSE_HNS, Route27_Text_BirdKeeperJoseSeen, Route27_Text_BirdKeeperJoseBeaten, Route27_EventScript_RegisterJose
	goto_if_set FLAG_JOSE_HAS_ITEM_HNS, Route27_EventScript_JoseGiveItem
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route27_EventScript_RematchJose
	msgbox Route27_Text_BirdKeeperJoseAfter, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_RegisterJose::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route27_Text_JoseRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_JOSE_HNS
	release
	end

Route27_EventScript_RematchJose::
	trainerbattle_rematch TRAINER_JOSE_HNS, Route27_Text_JoseRematchIntro, Route27_Text_JoseRematchDefeat
	msgbox Route27_Text_JosePostRematch, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_JoseGiveItem::
	msgbox Route27_Text_JoseHasItem, MSGBOX_DEFAULT
	giveitem VAR_JOSE_ITEM_HNS
	goto_if_eq VAR_RESULT, FALSE, Route27_EventScript_JoseNoRoom
	clearflag FLAG_JOSE_HAS_ITEM_HNS
	msgbox Route27_Text_JoseGaveItem, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_JoseNoRoom::
	msgbox Route27_Text_JoseNoRoom, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_Scott::
	trainerbattle_single TRAINER_SCOTT_HNS, Route27_Text_FisherScottSeen, Route27_Text_FisherScottBeaten
	msgbox Route27_Text_FisherScottAfter, MSGBOX_AUTOCLOSE
	end

Route27_EventScript_TohjoFallsSign::
    msgbox TohjoFalls_Text_Sign, MSGBOX_SIGN
    end

Route27_Text_FisherHey:
	.string "Heh!$"

Route27_Text_FisherMessage:
	.string "Weißt du, was du gerade getan\n"
	.string "hast?\p"
	.string "Du hast deinen ersten Schritt\n"
	.string "nach KANTO gemacht.\p"
	.string "Sieh auf der POKéCOM-KARTE\n"
	.string "nach.$"

Route27_Text_CooltrainermBlakeSeen:
	.string "Du siehst sehr stark aus.\n"
	.string "Ich will gegen dich kämpfen!$"

Route27_Text_CooltrainermBlakeBeaten:
	.string "Juhu!$"

Route27_Text_CooltrainermBlakeAfter:
	.string "Wenn du diesen harten Weg\n"
	.string "bestehst, wird dir die\l"
	.string "Wahrheit offenbart!\p"
	.string "Hey, sorry, ich wollte nur\n"
	.string "etwas Cooles sagen.$"

Route27_Text_CooltrainermBrianSeen:
	.string "Hm? Du bist gut, nicht wahr?$"

Route27_Text_CooltrainermBrianBeaten:
	.string "Wie ich dachte!$"

Route27_Text_CooltrainermBrianAfter:
	.string "Ein guter Trainer erkennt\n"
	.string "andere gute Trainer.$"

Route27_Text_CooltrainerfReenaSeen:
	.string "Du solltest die wilden Pokémon,\n"
	.string "die hier leben, nicht unterschätzen.$"

Route27_Text_CooltrainerfReenaBeaten:
	.string "Oh! Du bist viel zu stark!$"

Route27_Text_CooltrainerfReenaAfter:
	.string "Du bist nur ein Kind, aber\n"
	.string "ich unterschätze dich nicht.$"

Route27_Text_ReenaRegister:
    .string "Du bist zwar noch jung, aber man\n"
    .string "sollte dich nicht unterschätzen.$"

Route27_Text_ReenaRematchIntro:
    .string "Die wilden POKéMON in dieser Gegend\n"
    .string "solltest du nicht unterschätzen.$"

Route27_Text_ReenaRematchDefeat:
    .string "Oh! Du bist viel zu stark!$"

Route27_Text_ReenaPostRematch:
    .string "Du bist zwar noch jung, aber man\n"
    .string "sollte dich nicht unterschätzen.$"

Route27_Text_CooltrainerfMeganSeen:
	.string "Hier kommen nur\n"
	.string "selten Menschen vorbei.\p"
	.string "Trainierst du vollkommen allein?$"

Route27_Text_CooltrainerfMeganBeaten:
	.string "Oh! Du bist wirklich stark!$"

Route27_Text_CooltrainerfMeganAfter:
	.string "Ich untersuche Pokémon vor\n"
	.string "und nach ihrer Entwicklung.\p"
	.string "Entwicklung macht Pokémon\n"
	.string "wirklich stärker.\p"
	.string "Doch entwickelte Formen\n"
	.string "lernen Attacken oft später.$"

Route27_Text_PsychicGilbertSeen:
	.string "Sag nichts!\p"
	.string "Lass mich raten, woran du denkst.\p"
	.string "Mmmmmmm…\p"
	.string "Ich weiß! Du denkst darüber\n"
	.string "nach, zur Pokémon LIGA\l"
	.string "zu gehen!$"

Route27_Text_PsychicGilbertBeaten:
	.string "Das ist zuviel!$"

Route27_Text_PsychicGilbertAfter:
	.string "Mit deinen Fähigkeiten wirst\n"
	.string "du in der LIGA bestehen.\p"
	.string "Das sagt meine Vorahnung.$"

Route27_Text_BirdKeeperJoseSeen:
	.string "Zwitscher! Zwitscher!$"

Route27_Text_BirdKeeperJoseBeaten:
	.string "Zwitscher!$"

Route27_Text_BirdKeeperJoseAfter:
    .string "VOGELFÄNGER wie ich ahmen Vogelrufe\n"
    .string "nach, um POKéMON zu befehligen.$"

Route27_Text_JoseRegister:
    .string "VOGELFÄNGER wie ich ahmen Vogelrufe\n"
    .string "nach, um POKéMON zu befehligen.$"

Route27_Text_JoseRematchIntro:
    .string "Zwitscher! Zwitscher! Zwitscheriiit!$"

Route27_Text_JoseRematchDefeat:
    .string "Zwitscher!$"

Route27_Text_JosePostRematch:
    .string "VOGELFÄNGER wie ich ahmen Vogelrufe\n"
    .string "nach, um POKéMON zu befehligen.$"

Route27_Text_JoseHasItem:
    .string "Hey! Beim Beobachten der Vögel habe\n"
    .string "ich etwas Glänzendes gefunden!\p"
    .string "Hier, du kannst es haben!$"

Route27_Text_JoseGaveItem:
    .string "Hier auf ROUTE 27 finde ich die\n"
    .string "verschiedensten Dinge.\p"
    .string "Ich sage dir Bescheid, wenn ich\n"
    .string "wieder etwas finde!$"

Route27_Text_JoseNoRoom:
    .string "Hm, dein BEUTEL ist voll.\p"
    .string "Komm wieder, wenn du Platz hast.$"

TohjoFalls_Text_Sign:
	.string "TOHJO-FÄLLE\p"
	.string "Die Verbindung zwischen\n"
	.string "KANTO und JOHTO$"

Route27_Text_FisherScottSeen:
	.string "Heute fühle ich mich grossartig!\p"
	.string "Ich fühle mich so\n"
	.string "stark, dass ich den LIGA-CHAMP\l"
	.string "besiegen könnte!$"

Route27_Text_FisherScottBeaten:
	.string "Nein! Nicht in diesem Kampf!$"

Route27_Text_FisherScottAfter:
	.string "Genau wie beim Angeln,\n"
	.string "wenn du bei Pokémon aufgibst,\l"
	.string "ist alles vorbei.$"
