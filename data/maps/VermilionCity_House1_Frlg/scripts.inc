VermilionCity_House1_Frlg_MapScripts::
	.byte 0

VermilionCity_House1_EventScript_FishingGuru::
	lock
	faceplayer
	goto_if_set FLAG_GOT_OLD_ROD, VermilionCity_House1_EventScript_AlreadyGotOldRod
	msgbox VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, VermilionCity_House1_EventScript_GiveOldRod
	msgbox VermilionCity_House1_Text_OhThatsSoDisappointing
	release
	end

VermilionCity_House1_EventScript_AlreadyGotOldRod::
	msgbox VermilionCity_House1_Text_HowAreTheFishBiting
	release
	end

VermilionCity_House1_EventScript_GiveOldRod::
	checkitemspace ITEM_OLD_ROD
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_House1_EventScript_NoRoomForOldRod
	additem ITEM_OLD_ROD
	msgbox VermilionCity_House1_Text_TakeThisAndFish
	msgreceiveditem VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru, ITEM_OLD_ROD
	setflag FLAG_GOT_OLD_ROD
	msgbox VermilionCity_House1_Text_FishingIsAWayOfLife
	release
	end

VermilionCity_House1_EventScript_NoRoomForOldRod::
	msgbox VermilionCity_House1_Text_NoRoomForNiceGift
	release
	end

VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish::
	.string "Ich bin der Profiangler!\p"
	.string "Ich liebe den Angelsport!\p"
	.string "Angelst du auch gerne?$"

VermilionCity_House1_Text_TakeThisAndFish::
	.string "Klasse!\n"
	.string "Du bist mir sympathisch!\p"
	.string "Nimm das hier und gehe angeln!$"

VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru::
	.string "{PLAYER} erhält\n"
	.string "eine Angel!$"

VermilionCity_House1_Text_FishingIsAWayOfLife::
	.string "Angeln ist meine Leidenschaft!\p"
	.string "Suche in Seen und Flüssen und\n"
	.string "lande den großen Fang!$"

VermilionCity_House1_Text_OhThatsSoDisappointing::
	.string "Oh!\n"
	.string "Das ist so enttäuschend...$"

VermilionCity_House1_Text_HowAreTheFishBiting::
	.string "Hallo, {PLAYER}!\p"
	.string "Wie beißen die Fische?$"

VermilionCity_House1_Text_NoRoomForNiceGift::
	.string "Oh nein!\p"
	.string "Ich habe ein Geschenk für dich!\n"
	.string "Aber du kannst nichts mehr tragen!$"

