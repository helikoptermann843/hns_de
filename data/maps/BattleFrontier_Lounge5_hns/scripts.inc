BattleFrontier_Lounge5_hns_MapScripts::
	.byte 0

BattleFrontier_Lounge5_EventScript_NatureGirl_hns::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge5_Text_NatureGirlGreeting_hns, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge5_EventScript_NatureGirl_hnsNoneShown_hns
	chooseboxmon
	waitstate
	lock
	faceplayer
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge5_EventScript_NatureGirl_hnsNoneShown_hns
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge5_EventScript_NatureGirl_hnsEgg_hns
	special ShowNatureGirlMessage
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge5_EventScript_NatureGirl_hnsEgg_hns::
	msgbox BattleFrontier_Lounge5_Text_NatureGirlEgg_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge5_EventScript_NatureGirl_hnsNoneShown_hns::
	msgbox BattleFrontier_Lounge5_Text_NatureGirlNoneShown_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge5_EventScript_Gentleman_hns::
	msgbox BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon_hns, MSGBOX_NPC
	end

BattleFrontier_Lounge5_EventScript_BlackBelt_hns::
	msgbox BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound_hns, MSGBOX_NPC
	end

BattleFrontier_Lounge5_EventScript_LittleBoy_hns::
	msgbox BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot_hns, MSGBOX_NPC
	end

BattleFrontier_Lounge5_Text_NatureGirlGreeting_hns::
	.string "Hihihi! Ich kann die Gedanken\n"
	.string "von Pokémon lesen!\p"
	.string "Bitte! Darf ich deine Pokémon mal\n"
	.string "sehen? Bitte, bitte, bitte, bitte…$"

BattleFrontier_Lounge5_Text_NatureGirlNoneShown_hns::
	.string "Booh!\n"
	.string "Fiesling!$"

BattleFrontier_Lounge5_Text_NatureGirlAttackHighAttackLow_hns::
	.string "Hmhm…\p"
	.string "Dieses hier sagt, es kämpft gern!\n"
	.string "Es kämpft sogar, wenn es viele\l"
	.string "Wehwehchen hat!$"

BattleFrontier_Lounge5_Text_NatureGirlAttackHighDefenseLow_hns::
	.string "Hmhm…\p"
	.string "Dieses hier sagt, es kämpft gern!\n"
	.string "Aber wenn es genug Wehwehchen hat,\l"
	.string "macht es sich Sorgen um sich selbst!$"

BattleFrontier_Lounge5_Text_NatureGirlAttackHighSupportLow_hns::
	.string "Hmhm…\p"
	.string "Dieses hier sagt, es kämpft gern!\n"
	.string "Aber wenn es genug Wehwehchen hat,\l"
	.string "wird es heimtückisch!$"

BattleFrontier_Lounge5_Text_NatureGirlDefenseHighAttackLow_hns::
	.string "Hmhm…\p"
	.string "Dieses hier sagt, es passt auf\n"
	.string "sich auf!\l"
	.string "Aber wenn es genug Wehwehchen hat,\l"
	.string "schlägt es zurück!$"

BattleFrontier_Lounge5_Text_NatureGirlDefenseHighDefenseLow_hns::
	.string "Hmhm…\p"
	.string "Dieses hier sagt, es passt auf\n"
	.string "sich auf!\l"
	.string "Es macht sich Sorgen um sich selbst,\l"
	.string "egal wie viele Wehwehchen es hat!$"

BattleFrontier_Lounge5_Text_NatureGirlDefenseHighSupportLow_hns::
	.string "Hmhm…\p"
	.string "Dieses hier sagt, es passt auf\n"
	.string "sich auf!\l"
	.string "Aber wenn es genug Wehwehchen hat,\l"
	.string "wird es heimtückisch!$"

BattleFrontier_Lounge5_Text_NatureGirlSupportHighAttackLow_hns::
	.string "Hmhm…\p"
	.string "Dieses hier sagt, es ist gern\n"
	.string "heimtückisch!\l"
	.string "Aber wenn es genug Wehwehchen hat,\l"
	.string "schlägt es zurück!$"

BattleFrontier_Lounge5_Text_NatureGirlSupportHighDefenseLow_hns::
	.string "Hmhm…\p"
	.string "Dieses hier sagt, es ist gern\n"
	.string "heimtückisch!\l"
	.string "Aber wenn es genug Wehwehchen hat,\l"
	.string "macht es sich Sorgen um sich selbst!$"

BattleFrontier_Lounge5_Text_NatureGirlSupportHighSupportLow_hns::
	.string "Hmhm…\p"
	.string "Dieses hier sagt, es ist gern\n"
	.string "heimtückisch!\l"
	.string "Es ist auch mit vielen Wehwehchen\l"
	.string "noch heimtückisch!$"

BattleFrontier_Lounge5_Text_NatureGirlEgg_hns::
	.string "Du bist komisch! Das ist ein Ei. Das\n"
	.string "schläft doch! Wie soll ich damit reden?!$"

BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon_hns::
	.string "Wie charmant!\n"
	.string "Diese kleine Dame hier behauptet, sie\l"
	.string "könne die Pokémon verstehen!$"

BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound_hns::
	.string "Ich habe das Gefühl, dies kleine\n"
	.string "Mädchen sagt profunde Dinge!$"

BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot_hns::
	.string "Ich weiß was! Ich weiß was!\p"
	.string "Das kleine Mädchen spielt ganz oft\n"
	.string "im roten Haus!$"

