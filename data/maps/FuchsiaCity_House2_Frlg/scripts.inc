FuchsiaCity_House2_Frlg_MapScripts::
	.byte 0

FuchsiaCity_House2_EventScript_FishingGurusBrother::
	lock
	faceplayer
	goto_if_set FLAG_GOT_GOOD_ROD, FuchsiaCity_House2_EventScript_AlreadyGotGoodRod
	msgbox FuchsiaCity_House2_Text_DoYouLikeToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_House2_EventScript_GiveGoodRod
	msgbox FuchsiaCity_House2_Text_OhThatsDisappointing
	release
	end

FuchsiaCity_House2_EventScript_AlreadyGotGoodRod::
	msgbox FuchsiaCity_House2_Text_HowAreTheFishBiting
	release
	end

FuchsiaCity_House2_EventScript_GiveGoodRod::
	msgbox FuchsiaCity_House2_Text_LikeYourStyleTakeThis
	checkitemspace ITEM_GOOD_ROD
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_House2_EventScript_NoRoomForGoodRod
	giveitem_msg FuchsiaCity_House2_Text_ReceivedGoodRod, ITEM_GOOD_ROD
	msgbox FuchsiaCity_House2_Text_GoodRodCanCatchBetterMons
	setflag FLAG_GOT_GOOD_ROD
	release
	end

FuchsiaCity_House2_EventScript_NoRoomForGoodRod::
	msgbox FuchsiaCity_House2_Text_YouHaveNoRoomForGift
	release
	end

FuchsiaCity_House2_Text_DoYouLikeToFish::
	.string "Ich bin der\n"
	.string "ältere Bruder des\l"
	.string "Profianglers!\p"
	.string "Ich liebe\n"
	.string "den Angelsport!\p"
	.string "Angelst du auch\n"
	.string "gerne?$"

FuchsiaCity_House2_Text_LikeYourStyleTakeThis::
	.string "Klasse!\n"
	.string "Du bist mir sympathisch!\p"
	.string "Nimm das hier und gehe angeln!$"

FuchsiaCity_House2_Text_ReceivedGoodRod::
	.string "{PLAYER} received a Good Rod from\n"
	.string "the Fishing Guru's brother.$"

FuchsiaCity_House2_Text_GoodRodCanCatchBetterMons::
	.string "Angeln ist meine Leidenschaft!\n"
	.string "Es ist ein Gedicht.\p"
	.string "Mit einer Angel fängst du nur\n"
	.string "Karpador!\p"
	.string "Aber mit der Profiangel kannst\n"
	.string "du bessere Pokémon fangen.$"

FuchsiaCity_House2_Text_OhThatsDisappointing::
	.string "Oh!\n"
	.string "Das ist so enttäuschend...$"

FuchsiaCity_House2_Text_HowAreTheFishBiting::
	.string "Hallo, {PLAYER}!\p"
	.string "Wie beißen die Fische?$"

FuchsiaCity_House2_Text_YouHaveNoRoomForGift::
	.string "Oh nein!\p"
	.string "Ich habe ein Geschenk für dich!\n"
	.string "Aber du kannst nichts mehr tragen!$"

