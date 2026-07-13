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
	.string "I, ich bin schockiert!\p"
	.string "Ein Typ in deinem Alter mit\n"
	.string "starrem Blick und langen\l"
	.string "Haaren kam herein.\p"
	.string "Er hat mich erschreckt und mein\n"
	.string "wertvolles Pokémon genommen!\p"
	.string "Ich habe noch eins, aber was, wenn\n"
	.string "er zurückkommt?\p"
	.string "Du siehst stark aus. Könntest du\n"
	.string "auf mein Pokémon aufpassen?$"

CianwoodCity_Text_ManiacTakeCareShuckle:
	.string "Oh, danke!\p"
	.string "Pass gut auf es auf, bitte!$"

CianwoodCity_Text_ManiacGotShuckle:
	.string "{PLAYER} erhielt ein Pokémon.$"

CianwoodCity_Text_ManiacPartyFull:
	.string "Dein Team ist voll.$"

CianwoodCity_Text_ManiacIfHeComesBack:
	.string "Oh nein… Was soll ich tun, wenn\n"
	.string "er zurückkommt?$"

CianwoodCity_Text_ManiacHowsdoing:
	.string "Hi! Wie geht es meinem Pokémon?$"

CianwoodCity_Text_ManiacAskReturn:
	.string "Hi! Wie geht es meinem Pokémon?\p"
	.string "Ich glaube, ich bin jetzt sicher,\n"
	.string "also kann ich es zurückhaben?$"

CianwoodCity_Text_ManiacThankYou:
	.string "Danke!$"

CianwoodCity_Text_ManiacShuckleNotThere:
	.string "Hey, du hast mein Pokémon nicht\n"
	.string "bei dir.$"

CianwoodCity_Text_ManiacShuckleLikesYou:
	.string "Mein Pokémon mag dich jetzt.\p"
	.string "Okay, du darfst es behalten.\p"
	.string "Versprich nur, gut zu ihm zu sein!$"

CianwoodCity_Text_ManiacRobbed:
	.string "Huh, irgendwas stimmt nicht.$"

CianwoodCity_Text_ManiacRobbed2:
	.string "Oh nein… Das ist wie beraubt zu\n"
	.string "werden.$"

CianwoodCity_Text_ManiacHappinessSpeech:
	.string "Für Pokémon bedeutet Glück, mit\n"
	.string "einer Person zusammen zu sein,\l"
	.string "die sie gut behandelt.$"

CianwoodCity_Text_ManiacLastMon:
	.string "Wenn ich mein Pokémon zurücknehme,\n"
	.string "was wirst du im Kampf benutzen?$"


CianwoodCity_Text_ManiacReturnedMon:
	.string "{PLAYER} gab SHUCKIE zurück.$"
