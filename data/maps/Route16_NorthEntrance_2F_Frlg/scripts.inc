.equ REQUIRED_CAUGHT_MONS, 40

Route16_NorthEntrance_2F_Frlg_MapScripts::
	.byte 0

Route16_NorthEntrance_2F_EventScript_LittleBoy::
	msgbox Route16_NorthEntrance_2F_Text_OnBikeRideWithGirlfriend, MSGBOX_NPC
	end

Route16_NorthEntrance_2F_EventScript_LittleGirl::
	msgbox Route16_NorthEntrance_2F_Text_RidingTogetherOnNewBikes, MSGBOX_NPC
	end

Route16_NorthEntrance_2F_EventScript_LeftBinoculars::
	msgbox Route16_NorthEntrance_2F_Text_ItsCeladonDeptStore, MSGBOX_SIGN
	end

Route16_NorthEntrance_2F_EventScript_RightBinoculars::
	msgbox Route16_NorthEntrance_2F_Text_LongPathOverWater, MSGBOX_SIGN
	end

Route16_NorthEntrance_2F_EventScript_Aide::
	lock
	faceplayer
	call Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo
	goto_if_set FLAG_GOT_AMULET_COIN_FROM_OAKS_AIDE, Route16_NorthEntrance_2F_EventScript_AlreadyGotAmuletCoin
	msgbox Route16_NorthEntrance_2F_Text_GiveAmuletCoinIfCaught40, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetFrlgPokedexCount
	buffernumberstring STR_VAR_3, VAR_0x8006
	call Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo
	goto_if_lt VAR_0x8006, REQUIRED_CAUGHT_MONS, Aide_EventScript_HaventCaughtEnough
	msgbox Route16_NorthEntrance_2F_Text_GreatHereYouGo
	checkitemspace ITEM_AMULET_COIN
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
	giveitem_msg Route16_NorthEntrance_2F_Text_ReceivedAmuletCoinFromAide, ITEM_AMULET_COIN
	setflag FLAG_GOT_AMULET_COIN_FROM_OAKS_AIDE
	msgbox Route16_NorthEntrance_2F_Text_ExplainAmuletCoin
	release
	end

Route16_NorthEntrance_2F_EventScript_AlreadyGotAmuletCoin::
	msgbox Route16_NorthEntrance_2F_Text_ExplainAmuletCoin
	release
	end

Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo::
	buffernumberstring STR_VAR_1, REQUIRED_CAUGHT_MONS
	bufferitemname STR_VAR_2, ITEM_AMULET_COIN
	return

Route16_NorthEntrance_2F_Text_OnBikeRideWithGirlfriend::
	.string "Ich mache mit meiner Freundin einen\n"
	.string "Ausflug!$"

Route16_NorthEntrance_2F_Text_RidingTogetherOnNewBikes::
	.string "Wir werden mit dem Rad fahren!$"

Route16_NorthEntrance_2F_Text_ItsCeladonDeptStore::
	.string "Du schaust durch das Fernrohr.\p"
	.string "Du siehst das Einkaufszentrum von\n"
	.string "Prismania City!$"

Route16_NorthEntrance_2F_Text_LongPathOverWater::
	.string "Du schaust durch das Fernrohr.\p"
	.string "Dort führt ein langer Weg über das\n"
	.string "Wasser!$"

Route16_NorthEntrance_2F_Text_GiveAmuletCoinIfCaught40::
	.string "Hallo! Erinnerst du dich?\n"
	.string "Ich bin Prof. Eichs\l"
	.string "Assistent!\p"
	.string "Wenn du mindestens 40 verschiedene\n"
	.string "Pokémon gefangen hast, habe ich\l"
	.string "ein Geschenk für dich: Münzamulett\p"
	.string "Also, {PLAYER}, hast du 40\n"
	.string "unterschiedliche Pokémon gefangen?$"

Route16_NorthEntrance_2F_Text_GreatHereYouGo::
	.string "Ah! Bisasam soll es sein!\n"
	.string "Es ist leicht zu trainieren!\p"
	.string "{STR_VAR_3}, du möchtest also das\n"
	.string "Pflanzen-Pokémon Bisasam?$"

Route16_NorthEntrance_2F_Text_ReceivedAmuletCoinFromAide::
	.string "{PLAYER} erhält\n"
	.string "Münzamulett!$"

Route16_NorthEntrance_2F_Text_ExplainAmuletCoin::
	.string "Ein Münzamulett kann von\n"
	.string "einem Pokémon getragen werden.\p"
	.string "Nimmt das Pokémon an einem\n"
	.string "siegreichen Kampf teil, verdoppelt\l"
	.string "sich das Preisgeld.$"

