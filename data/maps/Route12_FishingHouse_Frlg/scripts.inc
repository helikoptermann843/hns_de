Route12_FishingHouse_Frlg_MapScripts::
	.byte 0

Route12_FishingHouse_EventScript_FishingGuruBrother::
	lock
	faceplayer
	goto_if_set FLAG_GOT_SUPER_ROD, Route12_FishingHouse_EventScript_CheckMagikarpRecord
	msgbox Route12_FishingHouse_Text_DoYouLikeToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route12_FishingHouse_EventScript_GiveSuperRod
	msgbox Route12_FishingHouse_Text_OhThatsDisappointing
	release
	end

Route12_FishingHouse_EventScript_GiveSuperRod::
	checkitemspace ITEM_SUPER_ROD
	goto_if_eq VAR_RESULT, FALSE, Route12_FishingHouse_EventScript_NoRoomForSuperRod
	additem ITEM_SUPER_ROD
	msgbox Route12_FishingHouse_Text_TakeThisAndFish
	msgreceiveditem Route12_FishingHouse_Text_ReceivedSuperRod, ITEM_SUPER_ROD
	setflag FLAG_GOT_SUPER_ROD
	msgbox Route12_FishingHouse_Text_IfYouCatchBigMagikarpShowMe
	release
	end

Route12_FishingHouse_EventScript_NoRoomForSuperRod::
	msgbox Route12_FishingHouse_Text_NoRoomForGift
	release
	end

Route12_FishingHouse_EventScript_CheckMagikarpRecord::
	setvar VAR_0x8004, SPECIES_MAGIKARP
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
	goto_if_eq VAR_RESULT, FALSE, Route12_FishingHouse_EventScript_NoMagikarpInParty
	special GetMagikarpSizeRecordInfo
	msgbox Route12_FishingHouse_Text_OhMagikarpAllowMeToSee
	special ChoosePartyMon
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	goto_if_ge VAR_RESULT, PARTY_SIZE, Route12_FishingHouse_EventScript_CancelShowMon
	special CompareMagikarpSize
	goto_if_eq VAR_RESULT, 1, Route12_FishingHouse_EventScript_NotMagikarp
	goto_if_eq VAR_RESULT, 2, Route12_FishingHouse_EventScript_NotRecordMagikarp
	goto_if_eq VAR_RESULT, 3, Route12_FishingHouse_EventScript_NewRecordMagikarp
	goto_if_eq VAR_RESULT, 4, Route12_FishingHouse_EventScript_TieRecordMagikarp
	release
	end

Route12_FishingHouse_EventScript_NoMagikarpInParty::
	msgbox Route12_FishingHouse_Text_TryFishingBringMeMagikarp
	release
	end

Route12_FishingHouse_EventScript_CancelShowMon::
	release
	end

Route12_FishingHouse_EventScript_NotMagikarp::
	msgbox Route12_FishingHouse_Text_DoesntLookLikeMagikarp
	release
	end

Route12_FishingHouse_EventScript_NotRecordMagikarp::
	goto_if_unset FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_NewRecordMagikarp
	msgbox Route12_FishingHouse_Text_HmmXInchesDoesntMeasureUp
	release
	end

Route12_FishingHouse_EventScript_TieRecordMagikarp::
	goto_if_unset FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_NewRecordMagikarp
	msgbox Route12_FishingHouse_Text_HuhXInchesSameSizeAsLast
	release
	end

Route12_FishingHouse_EventScript_NewRecordMagikarp::
	setflag FLAG_GOT_RECORD_SETTING_MAGIKARP
	msgbox Route12_FishingHouse_Text_WhoaXInchesTakeThis
	giveitem ITEM_NET_BALL
	goto_if_eq VAR_RESULT, FALSE, Route12_FishingHouse_EventScript_NoRoomForNetBall
	msgbox Route12_FishingHouse_Text_LookForwardToGreaterRecords
	release
	end

Route12_FishingHouse_EventScript_NoRoomForNetBall::
	msgbox Route12_FishingHouse_Text_NoRoomForGift
	release
	end

Route12_FishingHouse_EventScript_MagikarpRecordSign::
	lockall
	goto_if_set FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_MagikarpRecordSignRecordSet
	msgbox Route12_FishingHouse_Text_BlankChartOfSomeSort
	releaseall
	end

Route12_FishingHouse_EventScript_MagikarpRecordSignRecordSet::
	special GetMagikarpSizeRecordInfo
	msgbox Route12_FishingHouse_Text_MostGiganticMagikarpXInches
	releaseall
	end

Route12_FishingHouse_Text_DoYouLikeToFish::
	.string "Mein Bruder ist der Profi-Angler!\p"
	.string "Ich liebe den Angelsport!\p"
	.string "Möchtest du auch angeln?$"

Route12_FishingHouse_Text_TakeThisAndFish::
	.string "Klasse!\n"
	.string "Du bist mir sympathisch!\p"
	.string "Nimm das hier und gehe angeln!$"

Route12_FishingHouse_Text_ReceivedSuperRod::
	.string "{PLAYER} received a Super Rod from\n"
	.string "the Fishing Guru's brother.$"

Route12_FishingHouse_Text_IfYouCatchBigMagikarpShowMe::
	.string "Angeln ist nicht nur ein Sport, es\n"
	.string "ist eine Kunst!\p"
	.string "Nun ziehe los, um den großen Fang\n"
	.string "zu landen!\p"
	.string "Ich habe eine Bitte:\p"
	.string "Fängst du mit dieser Angel\n"
	.string "ein großes Karpador, möchte\l"
	.string "ich es sehen.\p"
	.string "Meine Liebe zum Angeln steht\n"
	.string "meiner Liebe für große\l"
	.string "Karpador in nichts nach!$"

Route12_FishingHouse_Text_OhThatsDisappointing::
	.string "Oh!\n"
	.string "Das ist so enttäuschend...$"

Route12_FishingHouse_Text_TryFishingBringMeMagikarp::
	.string "Hallo, {PLAYER}!\p"
	.string "Benutze die Superangel in allen\n"
	.string "Gewässern.\p"
	.string "Du kannst die verschiedensten\n"
	.string "Pokémon damit fangen!\p"
	.string "Und vergiss nicht, ein großes\n"
	.string "Karpador für mich zu fangen.$"

Route12_FishingHouse_Text_OhMagikarpAllowMeToSee::
	.string "Oh? {PLAYER}?\n"
	.string "Wenn das nicht Karpador ist!\p"
	.string "Darf ich es sehen, bitte!$"

Route12_FishingHouse_Text_WhoaXInchesTakeThis::
	.string "……… Wow!\n"
	.string "{STR_VAR_2} cm!\p"
	.string "Du hast eine seltene, elitäre\n"
	.string "Affinität zu den poetischen\l"
	.string "Gesichtspunkten des Angelns!\l"
	.string "Du musst das haben!\l"
	.string "Ich bestehe darauf!$"

Route12_FishingHouse_Text_LookForwardToGreaterRecords::
	.string "Ich freue mich schon auf noch\n"
	.string "bessere Rekorde von dir!$"

Route12_FishingHouse_Text_HuhXInchesSameSizeAsLast::
	.string "Häh!\n"
	.string "{STR_VAR_2} cm?\p"
	.string "Das ist genauso groß, wie zuvor!$"

Route12_FishingHouse_Text_HmmXInchesDoesntMeasureUp::
	.string "Hm…\n"
	.string "Dieses ist {STR_VAR_2} cm groß!\p"
	.string "Das ist weniger als die {STR_VAR_3} cm,\n"
	.string "die du mir zuvor gezeigt hast.$"

Route12_FishingHouse_Text_DoesntLookLikeMagikarp::
	.string "Uh… das sieht gar nicht\n"
	.string "wie ein Karpador aus!$"

Route12_FishingHouse_Text_NoRoomForGift::
	.string "Oh nein!\p"
	.string "Ich habe ein Geschenk für dich!\n"
	.string "Aber du kannst nichts mehr tragen!$"

Route12_FishingHouse_Text_MostGiganticMagikarpXInches::
	.string "Das größte Karpador, das\n"
	.string "ich je sah, hatte…\p"
	.string "{STR_VAR_3} cm!$"

Route12_FishingHouse_Text_BlankChartOfSomeSort::
	.string "Es ist eine leere Tabelle!\p"
	.string "Man kann darin irgendwelche\n"
	.string "Rekorde auflisten!$"

