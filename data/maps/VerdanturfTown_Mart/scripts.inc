VerdanturfTown_Mart_MapScripts::
	.byte 0

VerdanturfTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart VerdanturfTown_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
VerdanturfTown_Mart_Pokemart:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_FLUFFY_TAIL
	pokemartlistend

VerdanturfTown_Mart_EventScript_Boy::
	msgbox VerdanturfTown_Mart_Text_XSpecialIsCrucial, MSGBOX_NPC
	end

VerdanturfTown_Mart_EventScript_ExpertF::
	msgbox VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent, MSGBOX_NPC
	end

VerdanturfTown_Mart_EventScript_Lass::
	msgbox VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon, MSGBOX_NPC
	end

VerdanturfTown_Mart_Text_XSpecialIsCrucial:
	.string "X-SPEZIAL ist für jeden POKéMON-Kampf\n"
	.string "äußerst wichtig.\p"
	.string "Es erhöht die Stärke mancher Attacken.\n"
	.string "Aber leider nur für einen Kampf.$"

VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent:
	.string "Strategie-Ratgeber für das KAMPFCAMP\n"
	.string "scheinen sie hier leider nicht zu\p"
	.string "verkaufen… Man muss sich\n"
	.string "auf sich selbst verlassen.$"

VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon:
	.string "Der NESTBALL ist bei schwächeren\n"
	.string "POKéMON hervorragend geeignet.\p"
	.string "Den kannst du nur in WIESENFLUR\n"
	.string "kaufen.$"

