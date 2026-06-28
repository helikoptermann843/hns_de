DragonsDen_Cavern_hns_MapScripts::
	@map_script MAP_SCRIPT_ON_FRAME_TABLE, DragonsDen_Cavern_OnFrame
	.byte 0

DragonsDen_Cavern_OnFrame::
	map_script_2 VAR_BLACKTHORN_CITY_STATE, 3, DragonsDen_Cavern_EventScript_Clair
	.2byte 0

DragonsDen_EventScript_ClairRematch::
    lock
    faceplayer
    msgbox DragonsDen_Text_Clair, MSGBOX_DEFAULT
    closemessage
    fadescreenswapbuffers FADE_TO_BLACK
    setflag FLAG_HIDE_DEN_CLAIR
    removeobject LOCALID_DEN_CLAIR
    fadescreenswapbuffers FADE_FROM_BLACK
    clearflag FLAG_HIDE_DOJO_CLAIR
    release
    end

DragonsDen_Text_Clair:
	.string "{PLAYER}… du bist also hier.\p"
	.string "Wenn du denkst, dass du mit mir\n"
	.string "mithalten kannst, komm zum\l"
	.string "Kampf DOJO in Saffronia-City.$"

DragonsDen_Cavern_Trigger_ClairLeft::
	lock
	setflag FLAG_TEMP_HIDE_FOLLOWER 
	playse SE_PIN
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_ExclamationMark
	delay 60
	call DragonsDen_Cavern_EventScript_Clair
	applymovement OBJ_EVENT_ID_PLAYER, DragonsDen_Cavern_Movement_ClairLeaveLeftPLAYER
	waitmovement 0
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, DragonsDen_Cavern_Movement_ClairLeaveLeft
	waitmovement 0
	setflag FLAG_HIDE_DRAGONS_DEN_CAVERN_CLAIR
	removeobject LOCALID_DRAGONSDEN2_CLAIR
	playse SE_EXIT
	setvar VAR_BLACKTHORN_CITY_STATE, 4
	setrespawn HEAL_LOCATION_BLACKTHORN_CITY_HNS
	releaseall
	end

DragonsDen_Cavern_Trigger_ClairMid::
	lock 
	playse SE_PIN
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_ExclamationMark
	delay 60
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_WalkRight1
	call DragonsDen_Cavern_EventScript_Clair
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, DragonsDen_Cavern_Movement_ClairLeaveMid
	waitmovement 0
	setflag FLAG_HIDE_DRAGONS_DEN_CAVERN_CLAIR
	removeobject LOCALID_DRAGONSDEN2_CLAIR
	playse SE_EXIT
	setvar VAR_BLACKTHORN_CITY_STATE, 4
	release
	end

DragonsDen_Cavern_Trigger_ClairRight::
	lock 
	playse SE_PIN
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_ExclamationMark
	delay 60
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_WalkRight1
	waitmovement 0
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_WalkRight1
	call DragonsDen_Cavern_EventScript_Clair
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, DragonsDen_Cavern_Movement_ClairLeaveRight
	waitmovement 0
	setflag FLAG_HIDE_DRAGONS_DEN_CAVERN_CLAIR
	removeobject LOCALID_DRAGONSDEN2_CLAIR
	playse SE_EXIT
	setvar VAR_BLACKTHORN_CITY_STATE, 4
	release
	end


DragonsDen_Cavern_EventScript_Clair::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox DragonsDen_Cavern_Text_ClairGiveDragonclaw, MSGBOX_DEFAULT
	giveitem ITEM_TM_DRAGON_PULSE
	msgbox DragonsDen_Cavern_Text_ClairDescribeDragonclaw, MSGBOX_DEFAULT
	closemessage
	delay 30
	msgbox DragonsDen_Cavern_Text_ClairWhatsTheMatter, MSGBOX_DEFAULT
	closemessage
	delay 10
	clearflag FLAG_GOT_DRATINI
	return

DragonsDen_Cavern_Movement_ClairLeaveLeftPLAYER:
	walk_fast_down
	face_up
	step_end

DragonsDen_Cavern_Movement_ClairLeaveLeft:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DragonsDen_Cavern_Movement_ClairLeaveMid:
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DragonsDen_Cavern_Movement_ClairLeaveRight:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DragonsDen_Cavern_Text_ClairGiveDragonclaw:
	.string "Sandra: WARTE!\p"
	.string "Es tut mir leid.\n"
	.string "Hier, nimm das als Entschuldigung.$"

DragonsDen_Cavern_Text_ClairDescribeDragonclaw:
	.string "Das ist Drachenklaue.\p"
	.string "Nen, es hat nichts mit meinen\n"
	.string "Fingernägeln zu tun.\p"
	.string "Wenn du es nicht willst,\n"
	.string "musst du es nicht nehmen.$"

DragonsDen_Cavern_Text_ClairWhatsTheMatter:
	.string "Was ist los? Gehst du nicht\n"
	.string "weiter zur Pokémon-LIGA?\p"
	.string "Wenn du CHAMPION werden willst,\n"
	.string "kannst du jeden Arenaleiter\n"
	.string "noch einmal herausfordern.\p"
	.string "Geh zur Pokémon-LIGA.\p"
	.string "Weißt du, wie du dorthin kommst?\p"
	.string "Von hier aus nach Neuborkia.\p"
	.string "Dann nach Osten surfen zur\n"
	.string "Pokémon-LIGA.\p"
	.string "Der Weg dorthin ist sehr hart.\p"
	.string "Verlier bloß nicht in der Pokémon-\n"
	.string "LIGA!\p"
	.string "Wenn doch, fühle ich mich noch\n"
	.string "schlechter, weil ich gegen dich\n"
	.string "verloren habe!\p"
	.string "Gib alles, was du hast.$"

DragonsDen_Cavern_EventScript_Darin::
	trainerbattle_single TRAINER_DARIN_HNS, DragonsDen_Cavern_Text_CooltrainermDarinSeen, DragonsDen_Cavern_Text_CooltrainermDarinBeaten
	msgbox DragonsDen_Cavern_Text_CooltrainermDarinAfter, MSGBOX_AUTOCLOSE
	end

DragonsDen_Cavern_EventScript_Cara::
	trainerbattle_single TRAINER_CARA_HNS, DragonsDen_Cavern_Text_CooltrainerfCaraSeen, DragonsDen_Cavern_Text_CooltrainerfCaraBeaten
	msgbox DragonsDen_Cavern_Text_CooltrainerfCaraAfter, MSGBOX_AUTOCLOSE
	end

DragonsDen_Cavern_EventScript_TwinLea::
	trainerbattle_double TRAINER_LEA_AND_PIA_HNS, DragonsDen_Cavern_Text_TwinsLeaandPia1Seen, DragonsDen_Cavern_Text_TwinsLeaandPia1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox DragonsDen_Cavern_Text_TwinsLeaandPia1After, MSGBOX_DEFAULT
	release
	end
	
DragonsDen_Cavern_EventScript_TwinPia::
	trainerbattle_double TRAINER_LEA_AND_PIA_HNS, DragonsDen_Cavern_Text_TwinsLeaandPia2Seen, DragonsDen_Cavern_Text_TwinsLeaandPia2Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox DragonsDen_Cavern_Text_TwinsLeaandPia2After, MSGBOX_DEFAULT
	release
	end

DragonsDen_Cavern_EventScript_Item_Dragon_Fang::
	finditem ITEM_DRAGON_FANG
	end
DragonsDen_Cavern_EventScript_Item_Max_Potion::
	finditem ITEM_MAX_POTION
	end
DragonsDen_Cavern_EventScript_Item_PP_Max::
	finditem ITEM_PP_MAX
	end



DragonsDen_Cavern_Text_DragonShrineSign:
	.string "DRACHEN-SCHREIN\p"
	.string "Ein Schrein zu Ehren der Drachen-\n"
	.string "Pokémon\p"
	.string "die einst in der Drachen-HÖHLE\n"
	.string "lebten.$"

DragonsDen_Cavern_Text_SilverTraining1:
	.string "… Was? {PLAYER}?\p"
	.string "…Nein, ich kämpfe jetzt nicht…\p"
	.string "Meine Pokémon sind noch nicht\n"
	.string "bereit, dich zu besiegen.\p"
	.string "Ich kann sie jetzt nicht zu sehr\n"
	.string "fordern.\p"
	.string "Disziplin ist nötig, um der größte\n"
	.string "Pokémon-Trainer zu werden…$"

DragonsDen_Cavern_Text_SilverTraining2:
	.string "…\p"
	.string "Puh…\p"
	.string "Lern, mir aus dem Weg zu gehen…$"

DragonsDen_Cavern_Text_CooltrainermDarinSeen:
	.string "Du! Wie wagst du es,\n"
	.string "hier ungebeten hereinzuplatzen!$"

DragonsDen_Cavern_Text_CooltrainermDarinBeaten:
	.string "S-stark!$"

DragonsDen_Cavern_Text_CooltrainermDarinAfter:
	.string "Der SCHREIN hier gehört dem\n"
	.string "MEISTER unseres Drachen-Clans.\p"
	.string "Du darfst nicht einfach hineingehen!$"

DragonsDen_Cavern_Text_CooltrainerfCaraSeen:
	.string "Du solltest hier nicht sein!$"

DragonsDen_Cavern_Text_CooltrainerfCaraBeaten:
	.string "Oh nein, ich habe verloren!$"

DragonsDen_Cavern_Text_CooltrainerfCaraAfter:
	.string "Bald bekomme ich die Erlaubnis\n"
	.string "vom MEISTER, Drachen zu nutzen.\p"
	.string "Dann werde ich ein bewunderter\n"
	.string "Drachen-Trainer und erhalte die\l"
	.string "Zustimmung unseres MEISTERS.$"

DragonsDen_Cavern_Text_TwinsLeaandPia1Seen:
	.string "Da ist ein Fremder, den wir\n"
	.string "nicht kennen.$"

DragonsDen_Cavern_Text_TwinsLeaandPia1Beaten:
	.string "Autsch!$"

DragonsDen_Cavern_Text_TwinsLeaandPia1After:
	.string "Es war, als müssten wir gegen\n"
	.string "Siegfried kämpfen.$"

DragonsDen_Cavern_Text_TwinsLeaandPia2Seen:
	.string "Wer seid ihr?$"

DragonsDen_Cavern_Text_TwinsLeaandPia2Beaten:
	.string "Fiesling.$"

DragonsDen_Cavern_Text_TwinsLeaandPia2After:
	.string "Wir werden es dem MEISTER sagen.\p"
	.string "Er wird wütend auf dich sein.$"
