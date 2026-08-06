FiveIsland_MemorialPillar_Frlg_MapScripts::
	.byte 0

FiveIsland_MemorialPillar_EventScript_MemorialMan::
	lock
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_ReturnedForTM42
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrub
	closemessage
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_FacePlayer
	waitmovement 0
	delay 45
	msgbox FiveIsland_MemorialPillar_Text_YourMonsLookHealthy
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix
	release
	end

FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42::
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrubTectonix
	release
	end

FiveIsland_MemorialPillar_EventScript_ReturnedForTM42::
	msgbox FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks
	giveitem ITEM_TM42
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
	release
	end

FiveIsland_MemorialPillar_EventScript_Memorial::
	lockall
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering
	checkitem ITEM_LEMONADE
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade::
	msgbox FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FiveIsland_MemorialPillar_EventScript_PlaceLemonade
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_PlaceLemonade::
	removeitem ITEM_LEMONADE
	msgbox FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade
	closemessage
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 45
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis
	giveitem ITEM_TM42
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_ReceivedTM42::
	msgbox FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	setflag FLAG_GOT_TM42_AT_MEMORIAL_PILLAR
	return

FiveIsland_MemorialPillar_EventScript_NoRoomForTM42::
	setflag FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR
	msgbox FiveIsland_MemorialPillar_Text_DontHaveRoomForIt
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced::
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonix
	releaseall
	end

FiveIsland_MemorialPillar_Text_MiloIntro::
	.string "Ich bin der älteste der\n"
	.string "Vogel-brüder.\p"
	.string "Das Beste an Vögeln…\n"
	.string "Das muss der Schnabel sein.$"

FiveIsland_MemorialPillar_Text_MiloDefeat::
	.string "Oh, so scharf!$"

FiveIsland_MemorialPillar_Text_MiloPostBattle::
	.string "Von hier kannst du nach Eiland\n"
	.string "Vier fliegen.$"

FiveIsland_MemorialPillar_Text_ChazIntro::
	.string "Ich bin der zweitälteste der\n"
	.string "Vogel-brüder.\p"
	.string "Das Beste an Vögeln…\n"
	.string "Das müssen die Flügel sein.$"

FiveIsland_MemorialPillar_Text_ChazDefeat::
	.string "Flatter, flatter!$"

FiveIsland_MemorialPillar_Text_ChazPostBattle::
	.string "Da entlang war ein wahrhaft\n"
	.string "ernster Typ.$"

FiveIsland_MemorialPillar_Text_HaroldIntro::
	.string "Ich bin der jüngste der\n"
	.string "Vogel-brüder.\p"
	.string "Das Beste an Vögeln…\n"
	.string "Das muss das Gefieder sein.$"

FiveIsland_MemorialPillar_Text_HaroldDefeat::
	.string "Die Federn sind so weich…\n"
	.string "Ich könnte schlafen…$"

FiveIsland_MemorialPillar_Text_HaroldPostBattle::
	.string "Es freut mich, wenn Vogel-Pokémon\n"
	.string "verspielt Männchen machen…$"

FiveIsland_MemorialPillar_Text_ScrubScrub::
	.string "Putz, putz…$"

FiveIsland_MemorialPillar_Text_YourMonsLookHealthy::
	.string "Hallo…\n"
	.string "Deine Pokémon sehen gesund aus…$"

FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix::
	.string "Hier habe ich mein Onix begraben…\n"
	.string "Es hieß Tectonix…$"

FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering::
	.string "“Tectonix ruht hier in\n"
	.string "Frieden“ ist in den Stein\l"
	.string "gemeißelt.\p"
	.string "Vor dem Grab wurde eine Limonade\n"
	.string "zum Gedenken dargereicht.$"

FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering::
	.string "Es ist eine Art Maschine. Sie ist\n"
	.string "gewiss beeindruckend.$"

FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade::
	.string "Es ist eine Blaupause mit vielen\n"
	.string "Diagrammen und Text.$"

FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis::
	.string "D-danke…\p"
	.string "Das war das Lieblingsgetränk von\n"
	.string "meinem Tectonix…\p"
	.string "Ich kenne dich nicht, aber du hast\n"
	.string "Edelmut bewiesen…\p"
	.string "Das hat mich aufgemuntert.\p"
	.string "Nimm dies bitte als Zeichen meiner\n"
	.string "Wertschätzung. Danke!$"

FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo::
	.string "Ein Pokémon ist im Fernsehen!\n"
	.string "Es scheint Spaß zu haben!$"

FiveIsland_MemorialPillar_Text_DontHaveRoomForIt::
	.string "Wenn du keinen Platz hast, bewahre\n"
	.string "ich es bis zum nächsten Mal für\l"
	.string "dich auf.$"

FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks::
	.string "Ah, du bist es, von neulich…\p"
	.string "Ich habe es immer noch und du\n"
	.string "solltest es als Zeichen meiner\l"
	.string "Wertschätzung erhalten.$"

FiveIsland_MemorialPillar_Text_ScrubScrubTectonix::
	.string "Putz, putz…\p"
	.string "………\n"
	.string "Tectonix…$"

FiveIsland_MemorialPillar_Text_HereLiesTectonix::
	.string "Die Felsen und Steine bilden eine\n"
	.string "ordentlich angelegte Pyramide.\p"
	.string "“Tectonix ruht hier in\n"
	.string "Frieden“ ist in den Stein\l"
	.string "gemeißelt.$"

