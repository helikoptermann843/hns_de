Route30_MrPokemonsHouse_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MrPokemonHouse_OnFrame
	.byte 0

MrPokemonHouse_OnFrame::
	map_script_2 VAR_CHERRYGROVE_CITY_STATE, 1, MrPokemonHouse_EventScript_GiveEgg
	.2byte 0

MrPokemonHouse_EventScript_GiveEgg::
	lock
	playse SE_PIN
	applymovement LOCALID_MRPOKEMON, Common_Movement_ExclamationMark
	delay 60
	turnobject LOCALID_MRPOKEMON, DIR_SOUTH
	msgbox MrPokemonHouse_Text_Intro1, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MrPokemonHouse_Movement_MeetMrPokemon
	waitmovement 0
	msgbox MrPokemonHouse_Text_Intro2, MSGBOX_DEFAULT

	giveitem ITEM_MYSTERY_EGG

	msgbox MrPokemonHouse_Text_Intro3, MSGBOX_DEFAULT
	msgbox MrPokemonHouse_Text_Intro4, MSGBOX_DEFAULT
	turnobject LOCALID_ROUTE30_OAK, DIR_WEST
	msgbox MrPokemonHouse_Text_Intro5, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_HG_OAK, TRUE
	applymovement LOCALID_ROUTE30_OAK, MrPokemonHouse_Movement_OakToPlayer
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	msgbox MrPokemonHouse_Text_OakIntro, MSGBOX_DEFAULT


	playfanfare MUS_OBTAIN_ITEM
	message MrPokemonHouse_Text_GetDex
	waitfanfare


	msgbox MrPokemonHouse_Text_OakParting, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROUTE30_OAK, MrPokemonHouse_Movement_OakLeave
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_ROUTE30_OAK
	setflag FLAG_DELIVERED_EGG
	turnobject OBJ_EVENT_ID_PLAYER DIR_NORTH
	fadedefaultbgm
	msgbox MrPokemonHouse_Text_Heal, MSGBOX_DEFAULT
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox MrPokemonHouse_Text_DependingOnYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MRPOKEMON, MrPokemonHouse_Movement_MrPokemon_Leave
	waitmovement 0
	removeobject LOCALID_MRPOKEMON
	clearflag FLAG_HIDE_MRPOKEMON
	addobject LOCALID_MRPOKEMON2

	setvar VAR_NEWBARKTOWN_LABSTATE, 4
	setflag FLAG_HIDE_SILVER_NEWBARKTOWN
	setflag FLAG_SYS_POKEDEX_GET
	checkrandomizer
	call_if_eq VAR_RESULT, TRUE, MrPokemonHouse_EventScript_GiveNatDexRandomizer
	clearflag FLAG_HIDE_LAB_POLICEMAN
	setvar VAR_CHERRYGROVE_CITY_STATE, 2
	setrespawn HEAL_LOCATION_CHERRYGROVE_CITY_HNS
	clearflag FLAG_HIDE_SILVER_CHERRYGROVE
	setflag FLAG_HIDE_GUIDE_GENT_CHERRYGROVE
	clearflag FLAG_HIDE_CHERRYGROVE_GUIDE_GENT_HOUSE
	release
	end

MrPokemonHouse_EventScript_GiveNatDexRandomizer::
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	return

MrPokemonHouse_EventScript_MrPokemon::
	lock
	faceplayer
	checkitem ITEM_RED_SCALE
	goto_if_eq VAR_RESULT, TRUE, MrPokemonHouse_EventScript_MrPokemon_RedScale
	msgbox MrPokemonHouse_Text_AlwaysNewDiscoveries, MSGBOX_DEFAULT
	closemessage
	release
	end

MrPokemonHouse_EventScript_MrPokemon_RedScale::
	msgbox MrPokemonHouse_Text_GimmeTheScale, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, MrPokemonHouse_EventScript_MrPokemon_RedScale_Accepted
	msgbox MrPokemonHouse_Text_Disappointed, MSGBOX_DEFAULT
	closemessage
	release
	end

MrPokemonHouse_EventScript_MrPokemon_RedScale_Accepted::
	removeitem ITEM_RED_SCALE
	giveitem ITEM_EXP_SHARE_SMALL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	release
	end


MrPokemonHouse_EventScript_Computer::
	lock
	msgbox MrPokemonHouse_Text_BrokenComputer, MSGBOX_SIGN
	release
	end

MrPokemonHouse_EventScript_Magazine::
	lock
	msgbox MrPokemonHouse_Text_ForeignMagazines, MSGBOX_SIGN
	release
	end

MrPokemonHouse_EventScript_Coins::
	lock
	msgbox MrPokemonHouse_Text_StrangeCoins, MSGBOX_SIGN
	release
	end

MrPokemonHouse_Movement_MeetMrPokemon:
	walk_up
	walk_up
	walk_right
	walk_right
	face_up
	step_end

MrPokemonHouse_Movement_OakToPlayer:
	walk_down
	face_left
	step_end

MrPokemonHouse_Movement_OakLeave:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_in_place_down
	step_end

MrPokemonHouse_Movement_MrPokemon_Leave:
	walk_up
	walk_left
	walk_left
	step_end

MrPokemonHouse_Text_Intro1:
	.string "Hallo! Du musst {PLAYER} sein.\p"
	.string "Prof. Lind sagte,\n"
	.string "dass du vorbeikommen würdest.$"

MrPokemonHouse_Text_Intro2:
	.string "Das ist das Objekt, das Professor\n"
	.string "Lind für mich untersuchen soll.$"

MrPokemonHouse_Text_GotEgg:
	.string "{PLAYER} erhält Rätsel-Ei.$"

MrPokemonHouse_Text_Intro3:
	.string "Ich kenne ein Paar,\n"
	.string "das eine Pokémon-Pension leitet.\p"
	.string "Sie gaben mir das Ei.\p"
	.string "Ich war derart fasziniert,\n"
	.string "dass ich Prof. Lind eine\l"
	.string "E-mail schrieb.\p"
	.string "Was die Entwicklung von Pokémon\n"
	.string "betrifft, ist Prof.lind\l"
	.string "wirklich genial.$"


MrPokemonHouse_Text_Intro4:
	.string "Sogar Prof. Eich schätzt ihn sehr.$"

MrPokemonHouse_Text_Intro5:
	.string "Ich gehe davon aus,\n"
	.string "dass Prof. Lind mehr über\l"
	.string "das Ei weiß.$"

MrPokemonHouse_Text_Heal:
	.string "Du gehst jetzt wieder zu Professor Lind\n"
	.string "zurück, habe ich nicht recht?\p"
	.string "Dann solltest du deinem Pokémon aber\n"
	.string "vorher eine kurze Pause gönnen!$"

MrPokemonHouse_Text_DependingOnYou:
	.string "Ich verlasse mich auf dich!$"

MrPokemonHouse_Text_AlwaysNewDiscoveries:
	.string "Das Leben ist schön! Es gibt immer\n"
	.string "etwas Neues zu entdecken!$"

MrPokemonHouse_Text_OakIntro:
	.string "Eich: Aha! Du bist also {PLAYER}!\p"
	.string "Mein Name ist Prof. Eich!\p"
	.string "Ich bin von Beruf Pokémon-Forscher.\p"
	.string "Ich besuche gerade\n"
	.string "meinen alten Freund Mr. Pokémon.\p"
	.string "Ich hörte, du sollst etwas für\n"
	.string "Prof.lind besorgen,\l"
	.string "also habe ich gewartet.\p"
	.string "Oh! Was ist das? Ein seltenes Pokémon!\p"
	.string "Mal sehen…\p"
	.string "Hm, ich verstehe!\p"
	.string "Ich weiß, warum Prof. Lind dir ein\n"
	.string "Pokémon für die Besorgung gab.\p"
	.string "Für Forscher wie Prof. Lind und\n"
	.string "mich sind Pokémon unsere Freunde.\p"
	.string "Er erkannte, dass du deine Pokémon\n"
	.string "liebevoll und umsichtig umsorgst.\p"
	.string "…Ah!\p"
	.string "Du scheinst zuverlässig zu sein.\p"
	.string "Möchtest du mir auch helfen?\p"
	.string "Dies ist die neueste Version des\n"
	.string "Pokédex. Er erfaßt automatisch Daten\l"
	.string "über Pokémon,\l"
	.string "die man gefangen oder gesehen hat!\p"
	.string "Er ist eine Art Hi-Tech-Lexikon!$"

MrPokemonHouse_Text_GetDex:
	.string "{PLAYER} erhält Pokédex!$"

MrPokemonHouse_Text_OakParting:
	.string "Triff viele verschiedene Pokémon\n"
	.string "und vervollständige den Pokédex!\p"
	.string "Aber ich bin schon zu lange\n"
	.string "geblieben.\p"
	.string "Ich muss nach Dukatia City\n"
	.string "zu meiner gewohnten Radiosendung.\p"
	.string "{PLAYER}, ich zähle auf dich!$"

MrPokemonHouse_Text_GimmeTheScale:
	.string "Hm? Diese Schuppe… kann das sein?\n"
	.string "Ja! Die gehörte einem roten Garados!\p"
	.string "Da… das nenne ich mal selten!\n"
	.string "Ich muss sie haben!\p"
	.string "{PLAYER}, würdest du sie mir\n"
	.string "vielleicht im Tausch gegen diesen\l"
	.string "EP-Teiler abtreten, den ich von\l"
	.string "Professor Eich bekommen habe?$"

MrPokemonHouse_Text_Disappointed:
	.string "Oh, in Ordnung. Schade… dieses\n"
	.string "Pokémon ist wirklich sehr selten…$"

MrPokemonHouse_Text_ExpShare:
	.string "Ich habe auch ein spezielles\n"
	.string "Item für dich.$"

MrPokemonHouse_Text_ForeignMagazines:
	.string "Das sind Zeitungen aus aller Welt.\p"
	.string "Ich kann die Schlagzeilen nicht lesen…$"

MrPokemonHouse_Text_BrokenComputer:
	.string "Das ist ein großer Computer.\n"
	.string "Hm, er ist kaputt…$"

MrPokemonHouse_Text_StrangeCoins:
	.string "Ein ganzer Stapel seltsamer Münzen!\n"
	.string "Vielleicht stammen sie ja aus einem\l"
	.string "anderen Land?$"

MrPokemonHouse_Text_GotExpShare:
	.string "{PLAYER} erhält EP-Teiler!$"
