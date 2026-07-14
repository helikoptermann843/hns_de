ReceptionGate_hns_MapScripts::
	.byte 0

ReceptionGate_EventScript_Janine::
    lock
    faceplayer
    msgbox ReceptionGate_Text_Janine, MSGBOX_DEFAULT
    closemessage
    fadescreenswapbuffers FADE_TO_BLACK
    setflag FLAG_HIDE_ROUTE22_JANINE
    removeobject LOCALID_INDIGOJUNCTION_JANINE
    fadescreenswapbuffers FADE_FROM_BLACK
    clearflag FLAG_HIDE_DOJO_JANINE
    release
    end

ReceptionGate_Text_Janine:
	.string "JANINA: Ich bin auf dem Weg zu\n"
	.string "meinem Vater, um ihm das Mittagessen\l"
	.string "zu bringen.\p"
	.string "Die TOP VIER hat keine Zeit für\n"
	.string "Erholung, Tag oder Nacht.\p"
	.string "Es ist wirklich harte Arbeit, weißt\n"
	.string "du? \p"
	.string "Wenn du bereit für einen weiteren\n"
	.string "Kampf bist, ich bin später im DOJO.$"


ReceptionGate_EventScript_Officer::
    msgbox VictoryRoadGate_Text_EightBadges, MSGBOX_NPC
    end

ReceptionGate_Trigger::
    lock
    playse SE_PIN
    applymovement LOCALID_INDIGOJUNCTION_POLICEMAN, Common_Movement_ExclamationMark
    delay 20
    goto_if_lt VAR_ECRUTEAK_CITY_THEATER, 8, ReceptionGate_EventScript_Kimono
    msgbox VictoryRoadGate_Text_Officer, MSGBOX_DEFAULT
    goto_if_unset FLAG_BADGE08_GET, ReceptionGate_EventScript_NotEnough
    msgbox VictoryRoadGate_Text_EightBadges, MSGBOX_DEFAULT
    closemessage
    setvar VAR_ROUTE27_STATE, 2
    release
    end

ReceptionGate_EventScript_Kimono::
    msgbox VictoryRoadGate_Text_Kimono, MSGBOX_DEFAULT
    closemessage
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
    waitmovement 0
    release
    end 

ReceptionGate_EventScript_NotEnough::
    msgbox VictoryRoadGate_Text_NotEnoughBadges, MSGBOX_DEFAULT
    closemessage
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
    waitmovement 0
    release
    end

ReceptionGate_EventScript_SilverGuard::
    msgbox VictoryRoadGate_Text_LeftBlackBelt, MSGBOX_NPC
    end
ReceptionGate_EventScript_KantoGuard::
    msgbox VictoryRoadGate_Text_RightBlackBelt, MSGBOX_NPC
    end

VictoryRoadGate_Text_Officer:
	.string "Nur Trainer, die\n"
	.string "sich als würdig erwiesen haben, dürfen\l"
	.string "eintreten.$"

VictoryRoadGate_Text_Kimono:
	.string "Entschuldige Kleiner, dieser Weg ist\n"
	.string "geschlossen,\l"
	.string "Bis jemand sich des\p"
	.string "Legendären Pokémon's annimmt...$"

VictoryRoadGate_Text_NotEnoughBadges:
	.string "Du besitzt nicht alle ORDEN von JOHTO.\p"
	.string "Tut mir Leid. Ich\n"
	.string "darf dich nicht passieren lassen.$"

VictoryRoadGate_Text_EightBadges:
	.string "Oh! Alle acht ORDEN von JOHTO!\p"
	.string "Geh bitte weiter!$"

VictoryRoadGate_Text_LeftBlackBelt:
	.string "Dieser Weg führt zum SILBERBERG.\p"
	.string "Dir werden be-\n"
	.string "ängstigend starke Pokémon begegnen.$"

VictoryRoadGate_Text_RightBlackBelt:
	.string "Du bist auf dem\n"
	.string "Weg zur Pokémon LIGA, nicht wahr?\p"
	.string "Die TOP VIER sind so stark, dass es\n"
	.string "einem Angst macht. Sie erwarten dich!$"
