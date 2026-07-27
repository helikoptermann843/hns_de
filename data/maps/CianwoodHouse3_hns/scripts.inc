CianwoodHouse3_hns_MapScripts::
	.byte 0

CianwoodCity_EventScript_Kirk::
	lock
	faceplayer
	goto_if_eq VAR_SHUCKIE, 1, CianwoodCity_EventScript_KirkGivenShuckie
	goto_if_eq VAR_SHUCKIE, 3, CianwoodCity_EventScript_KirkReturnedShuckie
	msgbox CianwoodCity_Text_ManiacAskShuckle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, CianwoodCity_EventScript_KirkDeclined

	@HnS named gift pokemon setup
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SHUCKLE
	bufferspeciesname STR_VAR_1, SPECIES_SHUCKLE
	givenamedmon 2
	call Common_EventScript_GiftMonNamed

	setvar VAR_SHUCKIE, 1
	release
	end

CianwoodCity_EventScript_KirkDeclined::
	msgbox CianwoodCity_Text_ManiacIfHeComesBack, MSGBOX_DEFAULT
	closemessage
	end

CianwoodCity_EventScript_KirkGivenShuckie::
	goto_if_set FLAG_BADGE01_GET, CianwoodCity_EventScript_KirkReturnShuckie
	msgbox CianwoodCity_Text_ManiacHowsdoing, MSGBOX_DEFAULT
	closemessage
	end

CianwoodCity_EventScript_KirkReturnShuckie::
	msgbox CianwoodCity_Text_ManiacAskReturn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, CianwoodCity_EventScript_KirkDeclineReturnShuckie
	removenamedmon 2
	goto_if_eq VAR_RESULT, MON_CANT_GIVE, CianwoodCity_EventScript_KirkNotRight
	goto_if_eq VAR_RESULT, 3, CianwoodCity_EventScript_KirkKeepShuckie
	playse MUS_OBTAIN_ITEM
	callnative UpdateFollowingPokemon
	msgbox CianwoodCity_Text_ManiacReturnedMon, MSGBOX_DEFAULT
	waitse
	msgbox CianwoodCity_Text_ManiacThankYou, MSGBOX_DEFAULT
	setvar VAR_SHUCKIE, 3
	release
	end

CianwoodCity_EventScript_KirkDeclineReturnShuckie::
	msgbox CianwoodCity_Text_ManiacRobbed2, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_EventScript_KirkNotRight::
	msgbox CianwoodCity_Text_ManiacRobbed, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_EventScript_KirkKeepShuckie::
	msgbox CianwoodCity_Text_ManiacShuckleLikesYou, MSGBOX_DEFAULT
	closemessage
	setvar VAR_SHUCKIE, 3
	release
	end

CianwoodCity_EventScript_KirkReturnedShuckie::
	msgbox CianwoodCity_Text_ManiacHappinessSpeech, MSGBOX_DEFAULT
	closemessage
	end

CianwoodCity_Text_ManiacAskShuckle:
	.string "I-ich bin mit den Nerven am Ende…\p"
	.string "Irgend so ein fürchterlicher Junge in\n"
	.string "deinem Alter mit einem finsteren Blick\l"
	.string "und langen Haaren hat mir einfach meine\l"
	.string "preisgekrönten Pokémon weggenommen!\p"
	.string "Eins habe ich zwar noch übrig, aber ich\n"
	.string "habe Angst, dass er wieder zuschlägt!\p"
	.string "Du siehst stark aus! Bitte passe\n"
	.string "eine Weile auf dieses Pokémon auf!$"

CianwoodCity_Text_ManiacTakeCareShuckle:
	.string "V-v-vielen herzlichen Dank!\n"
	.string "Bitte pass gut darauf auf!$"

CianwoodCity_Text_ManiacGotShuckle:
	.string "{PLAYER} erhält das Pokémon\n"
	.string "des Sammlers.$"

CianwoodCity_Text_ManiacPartyFull:
	.string "In deinem Team ist kein Platz mehr.$"

CianwoodCity_Text_ManiacIfHeComesBack:
	.string "U-u-und was soll ich dann tun, wenn er\n"
	.string "zurückkommt und wieder zuschlägt?$"

CianwoodCity_Text_ManiacHowsdoing:
	.string "Wie geht es meinem Pokémon?$"

CianwoodCity_Text_ManiacAskReturn:
	.string "Wie geht es meinem Pokémon?\p"
	.string "So langsam ist die Gefahr wohl gebannt.\n"
	.string "Kann ich jetzt mein Pokémon wieder\l"
	.string "zurückhaben?$"

CianwoodCity_Text_ManiacThankYou:
	.string "DANKE SCHÖN$"

CianwoodCity_Text_ManiacShuckleNotThere:
	.string "Hey, du hast mein Pokémon nicht\n"
	.string "bei dir.$"

CianwoodCity_Text_ManiacShuckleLikesYou:
	.string "Mein Pokémon scheint dich ja richtig\n"
	.string "ins Herz geschlossen zu haben!\p"
	.string "In Ordnung, du kannst es behalten.\n"
	.string "Aber versprich mir, dass du es auch\l"
	.string "immer gut behandeln wirst!$"

CianwoodCity_Text_ManiacRobbed:
	.string "Huh, irgendwas stimmt nicht.$"

CianwoodCity_Text_ManiacRobbed2:
	.string "D-d-da hätte ich mich auch gleich von\n"
	.string "diesem Jungen berauben lassen können!$"

CianwoodCity_Text_ManiacHappinessSpeech:
	.string "Für Pokémon ist es das höchste Glück,\n"
	.string "wenn sie bei jemandem sein dürfen,\l"
	.string "der sie gut behandelt.$"

CianwoodCity_Text_ManiacLastMon:
	.string "Wenn ich mein Pokémon zurücknehme,\n"
	.string "was wirst du im Kampf benutzen?$"


CianwoodCity_Text_ManiacReturnedMon:
	.string "{PLAYER} gab SHUCKIE zurück.$"
