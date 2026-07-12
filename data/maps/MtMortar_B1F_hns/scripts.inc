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
	.string "Heh!\p"
	.string "Ich bin der KARATE-MEISTER!\p"
	.string "Ich trainiere hier allein im Dunkeln!\p"
	.string "Du! Kämpfe mit mir!\p"
	.string "Arggh!$"

MountMortar4_Text_KiyoWin:
	.string "Waaaarggh! Ich wurde besiegt!$"

MountMortar4_Text_KiyoTyrogueReward:
	.string "Ich… ich bin am Boden zerstört…\p"
	.string "Ich habe nicht gut genug trainiert…\p"
	.string "Eine Niederlage ist nun mal\n"
	.string "eine Niederlage. Das gebe\l"
	.string "ich zu.\p"
	.string "Als Beweis für deinen Sieg gebe\n"
	.string "ich dir dieses seltene KampfPokémon.$"

MountMortar4_Text_ReceiveTyrogue:
	.string "{PLAYER} erhält Rabauz.$"

MountMortar4_Text_KiyoGotTyrogue:
	.string "RABAUZ ist ein Kampf-Pokémon.\p"
	.string "Es entwickelt sich\n"
	.string "zu einem stärkeren Pokémon.\p"
	.string "Arbeite so hart weiter.\p"
	.string "Ich werde auch weiterhin\n"
	.string "trainieren.\p"
	.string "Lebe wohl!$"

MountMortar4_Text_KiyoFullParty:
	.string "Du kannst keine\n"
	.string "weiteren Pokémon mehr tragen!$"
