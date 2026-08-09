NewSinjoh_House1_hns_MapScripts::
	.byte 0


NewSinjoh__House1_EventScripts_Elizabeth::
    lock
	faceplayer
	goto_if_set FLAG_NEWSINJOH_HOUSE1_ELIZABETH_GAVEWOOPER, NewSinjoh_House1_EventScript_Elizabeth_AfterGift
    msgbox NewSinjoh_House1_Text_Looking4Celebi MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, NewSinjoh_House1_EventScript_Decline
    checkspecies SPECIES_CELEBI
    goto_if_eq VAR_RESULT, TRUE, NewSinjoh_House1_EventScript_GiveWooperPaldea
	msgbox NewSinjoh_House1_Text_NicePokemonButNotCelebi, MSGBOX_DEFAULT
    release
    end

NewSinjoh_House1_EventScript_Decline::
	msgbox NewSinjoh_House1_Text_Decline, MSGBOX_DEFAULT
	closemessage
	release
	end

NewSinjoh_House1_EventScript_GiveWooperPaldea::
	playse SE_PIN
    applymovement LOCALID_NEWSINJOH_HOUSE1_ELIZABETH, Common_Movement_ExclamationMark
	waitmovement LOCALID_NEWSINJOH_HOUSE1_ELIZABETH
    msgbox NewSinjoh_House1_OffersWooper MSGBOX_DEFAULT
    setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_WOOPER_PALDEA
    bufferspeciesname STR_VAR_1, SPECIES_WOOPER_PALDEA
    givemon SPECIES_WOOPER_PALDEA, 5
	call Common_EventScript_GiftMon
	setflag FLAG_NEWSINJOH_HOUSE1_ELIZABETH_GAVEWOOPER
	closemessage
    release
    end

NewSinjoh_House1_Text_Looking4Celebi:
	.string "Hey, Trainer!\p"
	.string "Du kommst den ganzen Weg aus\n"
	.string "Neuborkia?\p"
	.string "Ich habe eine Bitte an jemanden,\n"
	.string "der so weit herumgekommen ist\l"
	.string "wie du.\p"
	.string "Weißt du, mein Lieblings-Pokémon\n"
	.string "auf der ganzen Welt ist zufällig\l"
	.string "das mysteriöse Pokémon Celebi.\p"
	.string "Falls du eines haben solltest:\n"
	.string "Würdest du es mir zeigen?$"

NewSinjoh_House1_Text_NicePokemonButNotCelebi:
	.string "Das ist ein wirklich wundervolles\n"
	.string "Pokémon, aber es ist nicht ganz\l"
	.string "das, wonach ich gesucht habe…$"

NewSinjoh_House1_OffersWooper:
	.string "Das ist es! Ein echtes,\n"
	.string "lebendiges Celebi!!\p"
	.string "Vielen Dank, dass du es den ganzen\n"
	.string "Weg in den Norden gebracht hast.\p"
	.string "Hier, meine Freundin hat auf ihrer\n"
	.string "Reise in eine ferne Region ein paar\l"
	.string "zu viele von denen gefangen…\p"
	.string "Bitte nimm dieses besondere Felino\n"
	.string "als Dank, {PLAYER}.$"

NewSinjoh_House1_Text_Decline:
	.string "Wie schade. Ich hätte wirklich\n"
	.string "gerne eines gesehen.$"

NewSinjoh_House1_Text_TakeCareOfWooper:
	.string "Kümmere dich gut um das Felino,\n"
	.string "ja?$"

NewSinjoh_House1_EventScript_Elizabeth_AfterGift::
	msgbox NewSinjoh_House1_Text_GoodToSeeYouAgain MSGBOX_DEFAULT
	release
	end

NewSinjoh_House1_Text_GoodToSeeYouAgain:
	.string "Schön, dich wiederzusehen,\n"
	.string "{PLAYER}.\p"
	.string "Wie geht es dem Felino denn so?$"

NewSinjoh_House1_Bookshelf::
    lock
	msgbox NewSinjoh_House1_Bookshelf_Text MSGBOX_DEFAULT
	release
	end

NewSinjoh_House1_Bookshelf_Text:
	.string "Ein Regal voller Computerspiele\n"
	.string "und Comics!$"

NewSinjoh_House1_Eevee::
    lock
	faceplayer
	playmoncry SPECIES_EEVEE, 0
	msgbox NewSinjoh_House1_Text_Eevee_Cry, MSGBOX_DEFAULT
	waitmoncry
    closemessage
	release
	end

NewSinjoh_House1_Text_Eevee_Cry:
    .string "Vee Vee?$"
