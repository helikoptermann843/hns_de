VermilionCity_Mart_Frlg_MapScripts::
	.byte 0

VermilionCity_Mart_EventScript_CooltrainerF::
	msgbox VermilionCity_Mart_Text_MonsGoodOrBadDependingOnTrainer, MSGBOX_NPC
	end

VermilionCity_Mart_EventScript_BaldingMan::
	msgbox VermilionCity_Mart_Text_TeamRocketAreWickedPeople, MSGBOX_NPC
	end

VermilionCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart VermilionCity_Mart_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
VermilionCity_Mart_Items::
	.2byte ITEM_POKE_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_NONE
	release
	end

VermilionCity_Mart_Text_TeamRocketAreWickedPeople::
	.string "Es gibt böse Menschen, die Pokémon\n"
	.string "für Verbrechen missbrauchen.\p"
	.string "Das Team Rocket macht mit seltenen\n"
	.string "Pokémon Geschäfte.\p"
	.string "Die Pokémon, die ihrer Meinung nach\n"
	.string "nicht selten genug sind, werden von\l"
	.string "ihnen ausgesetzt.$"

VermilionCity_Mart_Text_MonsGoodOrBadDependingOnTrainer::
	.string "Pokémon können gut oder böse sein.\n"
	.string "Das hängt ganz von ihrem Trainer\l"
	.string "ab!$"

