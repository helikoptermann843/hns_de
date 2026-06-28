LavaridgeTown_HerbShop_MapScripts::
	.byte 0

LavaridgeTown_HerbShop_EventScript_Clerk::
	lock
	faceplayer
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
	waitmessage
	pokemart LavaridgeTown_HerbShop_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LavaridgeTown_HerbShop_Pokemart:
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_REVIVAL_HERB
	pokemartlistend

LavaridgeTown_HerbShop_EventScript_ExpertM::
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
	end

LavaridgeTown_HerbShop_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CHARCOAL, LavaridgeTown_HerbShop_EventScript_ExplainCharcoal
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
	giveitem ITEM_CHARCOAL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_CHARCOAL
	release
	end

LavaridgeTown_HerbShop_EventScript_ExplainCharcoal::
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_HerbShop_Text_WelcomeToHerbShop:
	.string "Willkommen im KRÄUTERLADEN! Dem Heim\n"
	.string "wirkungsvoller und preiswerter\l"
	.string "Medizin!$"

LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine:
	.string "Du kommst nach BAD LAVASTADT, um\n"
	.string "Kräutermedizin zu kaufen?\p"
	.string "Das ist lobenswert!\p"
	.string "Ich finde dich nett! Hier, für dich!$"

LavaridgeTown_HerbShop_Text_ExplainCharcoal:
	.string "Mit dieser HOLZKOHLE wird die Kräuter-\n"
	.string "medizin hergestellt.\p"
	.string "Sie wirkt auch Wunder, wenn sie von\n"
	.string "einem POKéMON getragen wird.\p"
	.string "Sie verstärkt FEUER-Attacken.$"

LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike:
	.string "Kräutermedizin ist erstaunlich\n"
	.string "wirkungsvoll. Aber deine POKéMON mögen\l"
	.string "sie nicht. Sie schmeckt bitter…$"

