MtMortar_B1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtMortar_B1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtMortar_B1F_OnTransition:
	callnative SetTimeBasedEncounters
	end

MtMortar_B1F_EventScript_Item_HyperPotion::
    finditem ITEM_HYPER_POTION
    end

MtMortar_B1F_EventScript_Item_Carbos::
    finditem ITEM_CARBOS
    end

MtMortar_B1F_EventScript_Item_PPUp::
    finditem ITEM_PP_UP
    end

MtMortar_B1F_EventScript_Item_MaxEther::
    finditem ITEM_MAX_ETHER
    end

MtMortar_B1F_EventScript_Item_MaxRevive::
    finditem ITEM_MAX_REVIVE
    end

MountMortar4_EventScript_Kiyo::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TYROGUE, MountMortar4_EventScript_KiyoAfter
	goto_if_set FLAG_BEAT_KIYO, MountMortar4_EventScript_KiyoTryGiveTyrogue
	msgbox MountMortar4_Text_KiyoIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_KIYO_HNS, MountMortar4_Text_KiyoWin
	setflag FLAG_BEAT_KIYO
MountMortar4_EventScript_KiyoTryGiveTyrogue::
	msgbox MountMortar4_Text_KiyoTyrogueReward, MSGBOX_DEFAULT
	@HnS gift pokemon setup
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYROGUE
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
	givemon SPECIES_TYROGUE, 25
	call Common_EventScript_GiftMon
	setflag FLAG_GOT_TYROGUE
MountMortar4_EventScript_KiyoAfter::
	msgbox MountMortar4_Text_KiyoGotTyrogue, MSGBOX_DEFAULT
	closemessage
	release
	end


MountMortar4_Text_KiyoIntro:
	.string "Hey da!\n"
	.string "Ich bin der Karate-Meister!\p"
	.string "Ich trainiere hier ganz alleine in dieser\n"
	.string "düsteren Höhle! So bin ich eben!\p"
	.string "In Ordnung!\n"
	.string "Hergehört!\l"
	.string "Ich will, dass du gegen mich kämpfst!\l"
	.string "Harrrgh!$"

MountMortar4_Text_KiyoWin:
	.string "Waaargh!\n"
	.string "Ich wurde besiegt!$"

MountMortar4_Text_KiyoTyrogueReward:
	.string "Da-da… das ist doch nicht möglich!\n"
	.string "Wie lange soll ich denn noch trainieren?\p"
	.string "Ich sage es nur ungerne, aber ich habe\n"
	.string "verloren. Ich gebe mich geschlagen!\p"
	.string "Hergehört! Als Beweis für deinen Sieg\n"
	.string "will ich dir dieses kostbare\l"
	.string "Kampf-Pokémon überreichen!$"

MountMortar4_Text_ReceiveTyrogue:
	.string "{PLAYER} erhält Rabauz.$"

MountMortar4_Text_KiyoGotTyrogue:
	.string "Rabauz ist ein Pokémon vom Typ Kampf!\p"
	.string "Zieht man es auf, entwickelt es sich\n"
	.string "angeblich zu einem mächtigen Pokémon!\p"
	.string "Also hergehört! Streng dich an!\n"
	.string "Ich setze jetzt auch mein Training fort.\l"
	.string "Hau rein!$"

MountMortar4_Text_KiyoFullParty:
	.string "He!\n"
	.string "Du hast zu viele Pokémon dabei!$"
