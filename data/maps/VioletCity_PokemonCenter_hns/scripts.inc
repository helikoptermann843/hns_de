VioletCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VioletCity_Pokecenter_OnTransition
	.byte 0

VioletCity_Pokecenter_OnTransition::
	setrespawn HEAL_LOCATION_VIOLET_CITY_HNS
	end

VioletCity_PokemonCenter_EventScript_Aide::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TOGEPI_EGG, VioletCity_PokemonCenter_EventScript_Aide_Received
	specialvar VAR_0x8004, GetMaxPartySize @ tx_randomizer_and_challenges
	goto_if_eq VAR_0x8004, 1, VioletCity_PokemonCenter_EventScript_Aide_Offer @ party limit of 1: the Egg goes to the PC
	getpartysize
	goto_if_eq VAR_RESULT, VAR_0x8004, VioletCity_PokemonCenter_EventScript_AideNoRoom
VioletCity_PokemonCenter_EventScript_Aide_Offer::
	msgbox VioletCity_PokeCenter_Text_ElmsAideFavor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VioletCity_PokemonCenter_EventScript_Aide_Refuse
	goto_if_eq VAR_RESULT, YES, VioletCity_PokemonCenter_EventScript_Aide_Accepted
	release
	end


VioletCity_PokemonCenter_EventScript_Aide_FullParty::
	msgbox VioletCity_PokeCenter_Text_ElmsAideFullParty, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_PokemonCenter_EventScript_AideNoRoom::
	msgbox VioletCity_PokeCenter_Text_ElmsAideNoRoom, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_PokemonCenter_EventScript_Aide_Refuse::
	msgbox VioletCity_PokeCenter_Text_ElmsAideRefuse, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VioletCity_PokemonCenter_EventScript_Aide_Refuse
	goto_if_eq VAR_RESULT, YES, VioletCity_PokemonCenter_EventScript_Aide_Accepted
	release
	end

VioletCity_PokemonCenter_EventScript_Aide_Accepted::
	specialvar VAR_0x8004, GetMaxPartySize @ tx_randomizer_and_challenges
	goto_if_eq VAR_0x8004, 1, VioletCity_PokemonCenter_EventScript_Aide_GiveEgg @ party limit of 1: the Egg goes to the PC
	getpartysize
	goto_if_eq VAR_RESULT, VAR_0x8004, VioletCity_PokemonCenter_EventScript_Aide_FullParty
VioletCity_PokemonCenter_EventScript_Aide_GiveEgg::
	playfanfare MUS_OBTAIN_ITEM
	message LavaridgeTown_Text_ReceivedTheEgg
	waitfanfare
	msgbox VioletCity_PokeCenter_Text_ElmsAideGiveEgg, MSGBOX_DEFAULT
	closemessage
	giveegg SPECIES_TOGEPI
	goto_if_eq VAR_RESULT, MON_CANT_GIVE, Common_EventScript_NoMoreRoomForPokemon @ party limit of 1 and every BOX full
	call_if_eq VAR_RESULT, MON_GIVEN_TO_PC, VioletCity_PokemonCenter_EventScript_Aide_EggSentToPC
	setflag FLAG_RECEIVED_TOGEPI_EGG
	msgbox VioletCity_PokeCenter_Text_ElmsAideGiveItem, MSGBOX_DEFAULT
	giveitem ITEM_EXP_SHARE_SMALL
	setflag FLAG_HIDE_VIOLET_CITY_AIDE
	setvar VAR_VIOLET_CITY_KIMONO_GIRL, 1
	clearflag FLAG_HIDE_VIOLET_CITY_KIMONO_GIRL
	clearflag FLAG_HIDE_NEWBARKTOWN_LAB_AIDE
	release
	end

VioletCity_PokemonCenter_EventScript_Aide_EggSentToPC::
	msgbox VioletCity_PokeCenter_Text_ElmsAideEggToPC, MSGBOX_DEFAULT
	closemessage
	return

VioletCity_PokemonCenter_EventScript_Aide_Received::
	msgbox VioletCity_PokeCenter_Text_ElmsAideGiveEgg, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_PokemonCenter_EventScript_Gentleman::
	lock
	faceplayer
	msgbox VioletCity_PokeCenter_Text_Gentleman, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_PokemonCenter_EVentScript_Kid::
	lock
	faceplayer
	msgbox VioletCity_PokeCenter_Text_GameboyKid, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_PokemonCenter_EventScript_Man::
	lock
	faceplayer
	msgbox VioletCity_PokeCenter_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_PokemonCenter_Text_BookshelfWoman::
	lock
	faceplayer
	msgbox VioletCity_PokeCenter_Text_BooksAreGreat, MSGBOX_DEFAULT
	closemessage
	release
	end


VioletCity_PokeCenter_Text_ElmsAideFavor:
	.string "{PLAYER}, lange nicht gesehen.\p"
	.string "Prof. Lind hat mich gebeten,\n"
	.string "nach dir zu suchen.\p"
	.string "Er hat noch eine Bitte an dich.\p"
	.string "Nimm bitte das Pokémon-Ei!$"

VioletCity_PokeCenter_Text_ElmsAideNoRoom:
	.string "{PLAYER}, lange nicht gesehen.\p"
	.string "Prof. Lind hat mich gebeten,\n"
	.string "nach dir zu suchen.\p"
	.string "Er hat noch eine Bitte an dich.\p"
	.string "Nimm bitte das Pokémon-Ei!\p"
	.string "Oh, du hast keinen Platz mehr\n"
	.string "für ein weiteres Pokémon.\p"
	.string "Ich warte hier, bis du Platz für\n"
	.string "das Ei geschaffen hast.$"

VioletCity_PokeCenter_Text_ElmsAideGiveEgg:
	.string "Wir haben entdeckt, dass ein\n"
	.string "Pokémon erst schlüpft, nachdem\l"
	.string "es im Ei gewachsen ist.\p"
	.string "Außerdem muss es sich in der Nähe\n"
	.string "anderer Pokémon\l"
	.string "befinden, um zu schlüpfen.\p"
	.string "Du bist die einzige Person,\n"
	.string "auf die wir uns verlassen können.\p"
	.string "Bitte ruf Prof. Lind an,\n"
	.string "wenn das Ei so weit ist!$"

VioletCity_PokeCenter_Text_ElmsAideGiveItem:
	.string "Oh, das hier könnte helfen,\n"
	.string "wenn es geschlüpft ist.$"

VioletCity_PokeCenter_Text_ElmsAideFullParty:
	.string "Oh, du hast keinen Platz\n"
	.string "mehr für ein weiteres Pokémon.\p"
	.string "Ich warte hier,\n"
	.string "bis du Platz für das Ei geschaffen\l"
	.string "hast.$"

VioletCity_PokeCenter_Text_ElmsAideEggToPC:
	.string "Oh, but you can't carry any more\n"
	.string "POKéMON with you.\p"
	.string "Don't worry--I sent the EGG to\n"
	.string "BILL'S PC for you.$"

VioletCity_PokeCenter_Text_ElmsAideRefuse:
	.string "A-Aber… Prof. Lind hat\n"
	.string "nach dir gefragt…$"

VioletCity_PokeCenter_Text_BooksAreGreat:
	.string "Während meine Pokémon sich\n"
	.string "erholen, lese ich gerne ein\l"
	.string "gutes Buch.$"

VioletCity_PokeCenter_Text_MobileAdapter:
	.string "Woran denkst du,\n"
	.string "wenn du versuchst,\p"
	.string "daran zu denken, nicht daran zu denken,\l"
	.string "dass du denkst,\n"
	.string "dass du dumm bist,\p"
	.string "obwohl du nicht dumm bist?\n"
	.string "Hähhhh?$"

VioletCity_PokeCenter_Text_GameboyKid:
	.string "Ein Kerl namens Bill hat das\n"
	.string "PC-Pokémon-Lagerungssystem\l"
	.string "erfunden.$"

VioletCity_PokeCenter_Text_Gentleman:
	.string "Es war vor etwa drei Jahren.\p"
	.string "Team Rocket hatte\n"
	.string "etwas Übles mit den Pokémon vor.\p"
	.string "Aber die Gerechtigkeit\n"
	.string "hat gesiegt! Ein junger\l"
	.string "Trainer hat sie zerschlagen.$"

VioletCity_PokeCenter_Text_Youngster:
	.string "Pokémon sind schlau.\n"
	.string "Sie gehorchen nur Trainern,\l"
	.string "vor denen sie auch Respekt haben.\p"
	.string "Hat der Trainer nicht genug Orden,\n"
	.string "machen sie, was sie wollen.$"
