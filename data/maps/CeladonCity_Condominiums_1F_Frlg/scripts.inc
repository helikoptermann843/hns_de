CeladonCity_Condominiums_1F_Frlg_MapScripts::
	.byte 0

CeladonCity_Condominiums_1F_EventScript_TeaWoman::
	lock
	faceplayer
	goto_if_set FLAG_TALKED_TO_TEA_LADY_AFTER_HOF, CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea
	goto_if_set FLAG_SYS_GAME_CLEAR, CeladonCity_Condominiums_1F_EventScript_TeaWomanMentionDaisy
	goto_if_set FLAG_GOT_TEA, CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea
	msgbox CeladonCity_Condominiums_1F_Text_TryThisDrinkInstead
	setflag FLAG_GOT_TEA
	giveitem ITEM_TEA
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
	msgbox CeladonCity_Condominiums_1F_Text_NothingBeatsThirstLikeTea
	release
	end

CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea::
	msgbox CeladonCity_Condominiums_1F_Text_MyDearMonsKeepMeCompany
	release
	end

CeladonCity_Condominiums_1F_EventScript_TeaWomanMentionDaisy::
	famechecker FAMECHECKER_DAISY, 4
	setflag FLAG_TALKED_TO_TEA_LADY_AFTER_HOF
	msgbox CeladonCity_Condominiums_1F_Text_DaisyComesToBuyTea
	release
	end

CeladonCity_Condominiums_1F_EventScript_Meowth::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
	msgbox CeladonCity_Condominiums_1F_Text_Meowth
	waitmoncry
	release
	end

CeladonCity_Condominiums_1F_EventScript_Clefairy::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
	msgbox CeladonCity_Condominiums_1F_Text_Clefairy
	waitmoncry
	release
	end

CeladonCity_Condominiums_1F_EventScript_Nidoran::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NIDORAN_F, CRY_MODE_NORMAL
	msgbox CeladonCity_Condominiums_1F_Text_Nidoran
	waitmoncry
	release
	end

CeladonCity_Condominiums_1F_EventScript_SuiteSign::
	msgbox CeladonCity_Condominiums_1F_Text_ManagersSuite, MSGBOX_SIGN
	end

CeladonCity_Condominiums_1F_Text_Meowth::
	.string "MAUZI: Miau!$"

CeladonCity_Condominiums_1F_Text_TryThisDrinkInstead::
	.string "Du solltest dein ganzes Geld\n"
	.string "nicht für Getränke ausgeben!\p"
	.string "Versuch das hier!$"

CeladonCity_Condominiums_1F_Text_NothingBeatsThirstLikeTea::
	.string "Gegen Durst ist nichts besser als\n"
	.string "heißer TEE.\p"
	.string "Er ist einfach am besten!$"

CeladonCity_Condominiums_1F_Text_MyDearMonsKeepMeCompany::
	.string "Meine treuen POKéMON leisten mir\n"
	.string "Gesellschaft.\p"
	.string "MAUZI bringt sogar Geld mit nach\n"
	.string "Hause!$"

CeladonCity_Condominiums_1F_Text_DaisyComesToBuyTea::
	.string "Oh, hallo!\n"
	.string "Hat dir mein TEE geschmeckt?\p"
	.string "Apropos, bist du zufällig aus\n"
	.string "ALABASTIA?\p"
	.string "Ein Mädchen aus ALABASTIA\n"
	.string "namens SARAH trinkt jeden Tag\l"
	.string "TEE.\l"
	.string "Sie kommt ins EINKAUFSZENTRUM\l"
	.string "von PRISMANIA CITY, um TEE\l"
	.string "zu kaufen!$"

CeladonCity_Condominiums_1F_Text_Clefairy::
	.string "PIEPI: Pi pippi!$"

CeladonCity_Condominiums_1F_Text_Nidoran::
	.string "NIDORAN♀: NIDORAN!$"

CeladonCity_Condominiums_1F_Text_ManagersSuite::
	.string "PRISMANIA-VILLA\n"
	.string "Manager Suite$"

