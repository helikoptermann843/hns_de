.set SPOKE_TO_WOMAN_LAST,   FLAG_TEMP_2
.set SPOKE_TO_FAT_MAN_LAST, FLAG_TEMP_3

VermilionCity_PokemonFanClub_Frlg_MapScripts::
	.byte 0

VermilionCity_PokemonFanClub_EventScript_Chairman::
	lock
	faceplayer
	goto_if_set FLAG_GOT_BIKE_VOUCHER, VermilionCity_PokemonFanClub_EventScript_AlreadyHeardStory
	msgbox VermilionCity_PokemonFanClub_Text_DidYouComeToHearAboutMyMons, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, VermilionCity_PokemonFanClub_EventScript_ChairmanStory
	msgbox VermilionCity_PokemonFanClub_Text_ComeBackToHearStory
	release
	end

VermilionCity_PokemonFanClub_EventScript_AlreadyHeardStory::
	msgbox VermilionCity_PokemonFanClub_Text_DidntComeToSeeAboutMonsAgain
	release
	end

VermilionCity_PokemonFanClub_EventScript_ChairmanStory::
	msgbox VermilionCity_PokemonFanClub_Text_ChairmansStory
	checkitemspace ITEM_BIKE_VOUCHER
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_PokemonFanClub_EventScript_NoRoomForBikeVoucher
	setflag FLAG_GOT_BIKE_VOUCHER
	giveitem_msg VermilionCity_PokemonFanClub_Text_ReceivedBikeVoucherFromChairman, ITEM_BIKE_VOUCHER, 1, MUS_RG_OBTAIN_KEY_ITEM
	msgbox VermilionCity_PokemonFanClub_Text_ExplainBikeVoucher
	release
	end

VermilionCity_PokemonFanClub_EventScript_NoRoomForBikeVoucher::
	msgbox VermilionCity_PokemonFanClub_Text_MakeRoomForThis
	release
	end

VermilionCity_PokemonFanClub_EventScript_WorkerF::
	lock
	faceplayer
	goto_if_set FLAG_SYS_GAME_CLEAR, VermilionCity_PokemonFanClub_EventScript_WorkerFGameClear
	msgbox VermilionCity_PokemonFanClub_Text_ChairmanVeryVocalAboutPokemon
	release
	end

VermilionCity_PokemonFanClub_EventScript_WorkerFGameClear::
	famechecker FAMECHECKER_DAISY, 1
	msgbox VermilionCity_PokemonFanClub_Text_ChairmanReallyAdoresHisMons
	release
	end

VermilionCity_PokemonFanClub_EventScript_Woman::
	lock
	faceplayer
	goto_if_set SPOKE_TO_FAT_MAN_LAST, VermilionCity_PokemonFanClub_EventScript_WomanSpokeToFatMan
	msgbox VermilionCity_PokemonFanClub_Text_AdoreMySeel
	closemessage
	applymovement LOCALID_POKEMON_FAN_CLUB_WOMAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag SPOKE_TO_WOMAN_LAST
	release
	end

VermilionCity_PokemonFanClub_EventScript_WomanSpokeToFatMan::
	msgbox VermilionCity_PokemonFanClub_Text_SeelFarMoreAttractive
	closemessage
	applymovement LOCALID_POKEMON_FAN_CLUB_WOMAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	clearflag SPOKE_TO_FAT_MAN_LAST
	release
	end

VermilionCity_PokemonFanClub_EventScript_FatMan::
	lock
	faceplayer
	goto_if_set SPOKE_TO_WOMAN_LAST, VermilionCity_PokemonFanClub_EventScript_FatManSpokeToWoman
	msgbox VermilionCity_PokemonFanClub_Text_AdmirePikachusTail
	closemessage
	applymovement LOCALID_POKEMON_FAN_CLUB_FAT_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag SPOKE_TO_FAT_MAN_LAST
	release
	end

VermilionCity_PokemonFanClub_EventScript_FatManSpokeToWoman::
	msgbox VermilionCity_PokemonFanClub_Text_PikachuTwiceAsCute
	closemessage
	applymovement LOCALID_POKEMON_FAN_CLUB_FAT_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	clearflag SPOKE_TO_WOMAN_LAST
	release
	end

VermilionCity_PokemonFanClub_EventScript_Pikachu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox VermilionCity_PokemonFanClub_Text_Pikachu
	waitmoncry
	release
	end

VermilionCity_PokemonFanClub_EventScript_Seel::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SEEL, CRY_MODE_NORMAL
	msgbox VermilionCity_PokemonFanClub_Text_Seel
	waitmoncry
	release
	end

VermilionCity_PokemonFanClub_EventScript_RulesSign1::
	msgbox VermilionCity_PokemonFanClub_Text_ListenPolitelyToOtherTrainers, MSGBOX_SIGN
	end

VermilionCity_PokemonFanClub_EventScript_RulesSign2::
	msgbox VermilionCity_PokemonFanClub_Text_SomeoneBragsBragBack, MSGBOX_SIGN
	end

VermilionCity_PokemonFanClub_Text_AdmirePikachusTail::
	.string "Hat mein PIKACHU nicht einen\n"
	.string "wunderschönen Schweif?$"

VermilionCity_PokemonFanClub_Text_PikachuTwiceAsCute::
	.string "Hmpf!\p"
	.string "Mein PIKACHU ist viel süßer als ihr\n"
	.string "POKéMON!$"

VermilionCity_PokemonFanClub_Text_AdoreMySeel::
	.string "Ich liebe mein JUROB!\p"
	.string "Es quiekt, wenn ich es in den Arm\n"
	.string "nehme!$"

VermilionCity_PokemonFanClub_Text_SeelFarMoreAttractive::
	.string "Du meine Güte!\p"
	.string "Mein JUROB ist viel hübscher!$"

VermilionCity_PokemonFanClub_Text_Pikachu::
	.string "PIKACHU: Pi! Pi-ka-chu!$"

VermilionCity_PokemonFanClub_Text_Seel::
	.string "JUROB: JUROB!$"

VermilionCity_PokemonFanClub_Text_DidYouComeToHearAboutMyMons::
	.string "Ich bin der Vorsitzende des\n"
	.string "POKéMON-FANCLUBs!\p"
	.string "Ich habe mehr als 100 POKéMON\n"
	.string "gefangen!\p"
	.string "Ich bin sehr kleinlich, wenn es um\n"
	.string "POKéMON geht!\p"
	.string "Also...\p"
	.string "Bist du hergekommen, um etwas über\n"
	.string "meine POKéMON zu hören?$"

VermilionCity_PokemonFanClub_Text_ChairmansStory::
	.string "Sehr schön!\n"
	.string "Dann höre mir zu!\p"
	.string "Am liebsten mag ich GALLOPA!\p"
	.string "Es ist... süß... schön... klug...\n"
	.string "und... aufregend!\l"
	.string "Stimmst du mir zu?\l"
	.string "Es... ist... majestätisch...\l"
	.string "freundlich... ich liebe es!\p"
	.string "Wenn... es... schläft... warm\n"
	.string "und kuschelig... spektakulär...\l"
	.string "hinreißend...\l"
	.string "Ups! Wie die Zeit vergeht! Ich\l"
	.string "halte dich auf!\p"
	.string "Danke, dass du mir zugehört hast!\n"
	.string "Nimm dieses Geschenk von mir!$"

VermilionCity_PokemonFanClub_Text_ReceivedBikeVoucherFromChairman::
	.string "{PLAYER} received a BIKE VOUCHER\n"
	.string "from the CHAIRMAN.$"

VermilionCity_PokemonFanClub_Text_ExplainBikeVoucher::
	.string "Zeige den RAD-COUPON im\n"
	.string "FAHRRADLADEN von AZURIA CITY.\p"
	.string "Du erhältst dafür ein FAHRRAD!\p"
	.string "Sorge dich nicht um mich, ich kann\n"
	.string "mit meinem IBITAK FLIEGEN!\p"
	.string "Ich brauche also kein FAHRRAD!\p"
	.string "Ich hoffe, du fährst gerne Rad!$"

VermilionCity_PokemonFanClub_Text_ComeBackToHearStory::
	.string "Oh. Komm wieder vorbei, wenn ich\n"
	.string "dir etwas erzählen soll!$"

VermilionCity_PokemonFanClub_Text_DidntComeToSeeAboutMonsAgain::
	.string "Hallo, {PLAYER}!\p"
	.string "Soll ich dir von meinen POKéMON\n"
	.string "erzählen?\p"
	.string "Nein? Schade!$"

VermilionCity_PokemonFanClub_Text_MakeRoomForThis::
	.string "Du solltest etwas Platz schaffen!$"

VermilionCity_PokemonFanClub_Text_ChairmanVeryVocalAboutPokemon::
	.string "Der Vorsitzende redet sehr gerne\n"
	.string "über POKéMON!$"

VermilionCity_PokemonFanClub_Text_ListenPolitelyToOtherTrainers::
	.string "Hört anderen TRAINERn aufmerksam\n"
	.string "zu!$"

VermilionCity_PokemonFanClub_Text_SomeoneBragsBragBack::
	.string "Wenn jemand prahlt, dann prahle\n"
	.string "zurück!$"

VermilionCity_PokemonFanClub_Text_ChairmanReallyAdoresHisMons::
	.string "Der Vorsitzende redet sehr gerne\n"
	.string "über POKéMON!\p"
	.string "Aber die Person, die von den\n"
	.string "POKéMON am meisten\l"
	.string "geliebt wird, ist SARAH!$"
