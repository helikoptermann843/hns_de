LilycoveCity_CoveLilyMotel_1F_MapScripts::
	.byte 0

LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner::
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_CoveLilyMotel_1F_EventScript_GameClear
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_CoveLilyMotel_1F_EventScript_AquaHideoutBusted
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot, MSGBOX_DEFAULT
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_AquaHideoutBusted::
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem, MSGBOX_DEFAULT
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_GameClear::
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar, MSGBOX_DEFAULT
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV::
	lockall
	playse SE_PIN
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, LilycoveCity_CoveLilyMotel_1F_Movement_PlayerPushFromTV
	applymovement LOCALID_MOTEL_OWNER, LilycoveCity_CoveLilyMotel_1F_Movement_OwnerPushPlayer
	waitmovement 0
	applymovement LOCALID_MOTEL_OWNER, LilycoveCity_CoveLilyMotel_1F_Movement_OwnerReturn
	waitmovement 0
	release
	end

LilycoveCity_CoveLilyMotel_1F_Movement_PlayerPushFromTV:
	face_right
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

LilycoveCity_CoveLilyMotel_1F_Movement_OwnerPushPlayer:
	walk_up
	step_end

LilycoveCity_CoveLilyMotel_1F_Movement_OwnerReturn:
	face_down
	walk_down
	face_up
	step_end

LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot:
	.string "Hm, so haben sie also die Anzahl der\n"
	.string "Gäste verdoppelt. Indem sie POKéMON\l"
	.string "als Attraktion präsentieren?\p"
	.string "Hm, vielleicht sollte ich ein\n"
	.string "niedliches\n"
	.string "POKéMON zum Maskottchen meines\l"
	.string "Gasthofes machen…\p"
	.string "Ich frage mich, ob ich so mehr\n"
	.string "Gäste hätte?$"

LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua:
	.string "Oh, tut mir Leid, tut mir Leid!\n"
	.string "Ich habe so konzentriert ferngesehen!\n"
	.string "\p"
	.string "Seit TEAM AQUA in diesem Ort ist,\n"
	.string "bleiben die Gäste aus.$"

LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV:
	.string "Hey, geh weg da!\n"
	.string "Du bist doch nicht aus Glas!$"

LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem:
	.string "Interessant! Du sagst, ein POKéMON\n"
	.string "hat ein Item gefunden, das jemand ver-\l"
	.string "loren hat?\p"
	.string "Das ist ja was! Wenn wir auch so\n"
	.string "clevere POKéMON hätten…\p"
	.string "Dann könnten wir alles wiederfinden,\n"
	.string "was unsere Gäste verloren haben.$"

LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted:
	.string "Oh, tut mir Leid, tut mir Leid!\n"
	.string "Ich habe so konzentriert ferngesehen!\n"
	.string "\p"
	.string "Ich habe gehört, dass jemand das VER-\n"
	.string "STECK von TEAM AQUA auffliegen ließ.\p"
	.string "Gut! Dadurch haben wir endlich Gäste.\n"
	.string "Eine ganze Gruppe hat reserviert!\p"
	.string "Das sind Angestellte einer Firma… Äh…\n"
	.string "GAME irgendwas…$"

LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar:
	.string "Irre! Ein POKéMON, das das Haus be-\n"
	.string "wachte, hat Einbrecher geschnappt?\p"
	.string "Klasse! Wir sollten auch über einen\n"
	.string "Wachschutz durch POKéMON nachdenken.\p"
	.string "Dadurch könnten wir unseren Gästen\n"
	.string "viel mehr Sicherheit bieten.$"

LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner:
	.string "Oh, tut mir Leid, tut mir Leid!\n"
	.string "Ich habe so konzentriert ferngesehen!\n"
	.string "\p"
	.string "Oh, ja. Eine große Gruppe von Gästen\n"
	.string "ist vor kurzem hier eingetroffen.\p"
	.string "Sie haben sich als GAME FREAK einge-\n"
	.string "tragen. Ich denke, sie entwickeln\l"
	.string "Spiele.\p"
	.string "Oh oh, ich sollte mich besser um ihr\n"
	.string "Abendessen kümmern!$"

