SSAnne_CaptainsOffice_Frlg_MapScripts::
	.byte 0

SSAnne_CaptainsOffice_EventScript_Captain::
	lock
	goto_if_set FLAG_GOT_HM01, SSAnne_CaptainsOffice_EventScript_AlreadyGotCut
	msgbox SSAnne_CaptainsOffice_Text_CaptainIFeelSeasick
	textcolor NPC_TEXT_COLOR_NEUTRAL
	message SSAnne_CaptainsOffice_Text_RubbedCaptainsBack
	waitmessage
	playfanfare MUS_HEAL
	waitfanfare
	call EventScript_RestorePrevTextColor
	delay 50
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SSAnne_CaptainsOffice_Text_ThankYouHaveHMForCut
	giveitem_msg SSAnne_CaptainsOffice_Text_ObtainedHM01FromCaptain, ITEM_HM01, 1, MUS_RG_OBTAIN_KEY_ITEM
	msgbox SSAnne_CaptainsOffice_Text_ExplainCut
	setflag FLAG_GOT_HM01
	setvar VAR_MAP_SCENE_VERMILION_CITY, 1
	release
	end

@ Unused
SSAnne_CaptainsOffice_EventScript_NoRoomForCut::
	msgbox SSAnne_CaptainsOffice_Text_YouHaveNoRoomForThis
	closemessage
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SSAnne_CaptainsOffice_EventScript_AlreadyGotCut::
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SSAnne_CaptainsOffice_Text_SSAnneWillSetSailSoon
	release
	end

SSAnne_CaptainsOffice_EventScript_TrashCan::
	msgbox SSAnne_CaptainsOffice_Text_YuckShouldntHaveLooked, MSGBOX_SIGN
	end

SSAnne_CaptainsOffice_EventScript_Book::
	msgbox SSAnne_CaptainsOffice_Text_HowToConquerSeasickness, MSGBOX_SIGN
	end

SSAnne_CaptainsOffice_Text_CaptainIFeelSeasick::
	.string "Kapitän: Urps...\n"
	.string "Es geht mir gar nicht gut! Urps!$"

SSAnne_CaptainsOffice_Text_RubbedCaptainsBack::
	.string "{PLAYER} rubbed the Captain's\n"
	.string "back!\p"
	.string "Rub-rub…\n"
	.string "Rub-rub…$"

SSAnne_CaptainsOffice_Text_ThankYouHaveHMForCut::
	.string "Kapitän: Ahhhhh! Ich danke dir!\n"
	.string "Es geht mir schon viel besser...\p"
	.string "Möchtest du den Umgang mit dem\n"
	.string "Zerschneider lernen?\p"
	.string "Ich könnte es dir beibringen, aber\n"
	.string "mir ist so übel.\p"
	.string "Genau! Nimm einfach das hier!\p"
	.string "Damit bringst du deinen Pokémon\n"
	.string "den Umgang mit dem Zerschneider\l"
	.string "ganz leicht bei!$"

SSAnne_CaptainsOffice_Text_ObtainedHM01FromCaptain::
	.string "{PLAYER} obtained HM01\n"
	.string "from the Captain!$"

SSAnne_CaptainsOffice_Text_ExplainCut::
	.string "Wenn du den Zerschneider einsetzt,\n"
	.string "kannst du kleine Bäume fällen.\p"
	.string "Probiere es doch bei den Bäumen\n"
	.string "um Orania City aus!$"

SSAnne_CaptainsOffice_Text_SSAnneWillSetSailSoon::
	.string "Kapitän: Super!\p"
	.string "Endlich bin ich nicht mehr krank!\n"
	.string "Es kann losgehen!\p"
	.string "Jetzt kann die M.S. Anne in See\n"
	.string "stechen!\p"
	.string "Auf Wiedersehen! Bis zum nächsten\n"
	.string "Besuch in Orania City!$"

SSAnne_CaptainsOffice_Text_YouHaveNoRoomForThis::
	.string "Oh, nein! Du hast keinen Platz für\n"
	.string "weitere Items!$"

SSAnne_CaptainsOffice_Text_YuckShouldntHaveLooked::
	.string "Buäh! Manche Dinge macht man\n"
	.string "besser nicht...$"

SSAnne_CaptainsOffice_Text_HowToConquerSeasickness::
	.string "1000 natürliche Hausmittel gegen\n"
	.string "Seekrankheit...\l"
	.string "Der Kapitän liest dieses Buch!$"

