.set REWARD_TYPE, VAR_0x8004
.set REWARD_ITEM, VAR_0x8008

CeruleanCity_House4_Frlg_MapScripts::
	.byte 0

CeruleanCity_House4_EventScript_WonderNewsBerryMan::
	lock
	specialvar REWARD_TYPE, WonderNews_GetRewardInfo
	copyvar REWARD_ITEM, VAR_RESULT
	goto_if_eq REWARD_TYPE, NEWS_REWARD_NONE,       CeruleanCity_House4_EventScript_NoNews
	goto_if_eq REWARD_TYPE, NEWS_REWARD_RECV_SMALL, CeruleanCity_House4_EventScript_Reward_RecvSmall
	goto_if_eq REWARD_TYPE, NEWS_REWARD_RECV_BIG,   CeruleanCity_House4_EventScript_Reward_RecvBig
	goto_if_eq REWARD_TYPE, NEWS_REWARD_WAITING,    CeruleanCity_House4_EventScript_Waiting
	goto_if_eq REWARD_TYPE, NEWS_REWARD_SENT_SMALL, CeruleanCity_House4_EventScript_Reward_SentSmall
	goto_if_eq REWARD_TYPE, NEWS_REWARD_SENT_BIG,   CeruleanCity_House4_EventScript_Reward_SentBig
	goto_if_eq REWARD_TYPE, NEWS_REWARD_AT_MAX,     CeruleanCity_House4_EventScript_AtMax
	end

@ Mystery Gift is not enabled, or the player has no saved Wonder News
CeruleanCity_House4_EventScript_NoNews::
	msgbox CeruleanCity_House4_Text_NothingEntertaining
	release
	end

@ Small reward for receiving Wonder News from friend
CeruleanCity_House4_EventScript_Reward_RecvSmall::
	call CeruleanCity_House4_EventScript_MovementReactionToNews
	msgbox CeruleanCity_House4_Text_NewNewsInformativeHaveThis
	giveitem REWARD_ITEM
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
	release
	end

@ Big reward for receiving Wonder News from non-friend source
CeruleanCity_House4_EventScript_Reward_RecvBig::
	call CeruleanCity_House4_EventScript_MovementReactionToNews
	msgbox CeruleanCity_House4_Text_IncredibleNewsHaveBerries
	giveitem REWARD_ITEM, 4
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
	release
	end

@ Player has not recently sent Wonder News
CeruleanCity_House4_EventScript_Waiting::
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox CeruleanCity_House4_Text_WishCouldShareNewsWithOthers
	release
	end

@ Small reward for sending Wonder News every 1-3 times
CeruleanCity_House4_EventScript_Reward_SentSmall::
	call CeruleanCity_House4_EventScript_MovementReactionToNews
	msgbox CeruleanCity_House4_Text_ThanksForSpreadingNewsTakeThis
	giveitem REWARD_ITEM
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
	release
	end

@ Big reward for sending Wonder News every 4th time
CeruleanCity_House4_EventScript_Reward_SentBig::
	call CeruleanCity_House4_EventScript_MovementReactionToNews
	msgbox CeruleanCity_House4_Text_MagnificentNewsSpreadHaveBerries
	giveitem REWARD_ITEM, 4
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
	release
	end

@ Player has hit reward limit and must wait to receive new rewards
CeruleanCity_House4_EventScript_AtMax::
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox CeruleanCity_House4_Text_EnjoyingMyselfWithAllSortsOfNews
	release
	end

CeruleanCity_House4_EventScript_MovementReactionToNews::
	playse SE_PIN
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_Delay48
	waitmovement 0
	return

CeruleanCity_House4_EventScript_NoRoomForBerries::
	msgbox CeruleanCity_House4_Text_YourBerryPouchIsFull
	release
	end

CeruleanCity_House4_Text_NothingEntertaining::
	.string "Seufz…\n"
	.string "Zu viel Zeit und zu wenig zu tun…\p"
	.string "Passiert nirgendwo etwas, das mich\n"
	.string "unterhalten könnte?$"

CeruleanCity_House4_Text_NewNewsInformativeHaveThis::
	.string "Ah!\n"
	.string "Eine Nachrichtensendung!\p"
	.string "Hm…\p"
	.string "Ich verstehe!\n"
	.string "Das war sehr informativ!\p"
	.string "Ich freue mich, dass selbst junge\n"
	.string "Menschen wie du ein Interesse\l"
	.string "an Nachrichten zeigen.\l"
	.string "Als Zeichen meines Dankes möchte\l"
	.string "ich dir dies geben!$"

CeruleanCity_House4_Text_IncredibleNewsHaveBerries::
	.string "Oh, oh!\n"
	.string "D-die Nachrichtensendung!\p"
	.string "Hm…\p"
	.string "Aufregend!\n"
	.string "Das sind unglaubliche Neuigkeiten!\p"
	.string "Solch eine unglaubliche Nachricht\n"
	.string "habe ich lange nicht mehr gehört!\p"
	.string "Danke, dass du mit mir diese\n"
	.string "Nachricht geteilt hast. Nimm\l"
	.string "ein paar Beeren.$"

CeruleanCity_House4_Text_WishCouldShareNewsWithOthers::
	.string "Es ist so traurig, diese Nachricht\n"
	.string "nicht mit anderen zu teilen…\p"
	.string "Ich wünschte, ich könnte jemandem\n"
	.string "davon erzählen…\l"
	.string "Erzähl du den anderen davon…$"

CeruleanCity_House4_Text_ThanksForSpreadingNewsTakeThis::
	.string "Ah, du hast den anderen die\n"
	.string "Nachricht für mich übermittelt?\p"
	.string "Es lohnt sich, gute Nachrichten mit\n"
	.string "anderen Menschen zu teilen.\p"
	.string "Als Zeichen meines Dankes möchte\n"
	.string "ich dir dies geben!$"

CeruleanCity_House4_Text_MagnificentNewsSpreadHaveBerries::
	.string "Du hast die Nachricht noch weiter\n"
	.string "verbreitet? Wunderbar!\p"
	.string "Es wird der Nachricht gefallen,\n"
	.string "wenn sie alle erreicht!\p"
	.string "Ja, wirklich!\p"
	.string "Die Nachricht und ich wissen\n"
	.string "das zu schätzen und möchten dir\l"
	.string "mehr Beeren als sonst geben.$"

CeruleanCity_House4_Text_EnjoyingMyselfWithAllSortsOfNews::
	.string "Ich amüsiere mich mit allen Arten\n"
	.string "von Neuigkeiten.\p"
	.string "Ja, ich bin zufrieden!\n"
	.string "Ich werde mich eine Zeit lang nicht\l"
	.string "langweilen!$"

CeruleanCity_House4_Text_YourBerryPouchIsFull::
	.string "Hm? Deine Beerentüte ist voll.\n"
	.string "Mein Geschenk kommt nicht an!$"

