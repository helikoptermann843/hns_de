CeladonCity_DepartmentStore_2F_Frlg_MapScripts::
	.byte 0

CeladonCity_DepartmentStore_2F_EventScript_UnusedNPC::
	msgbox CeladonCity_DepartmentStore_2F_Text_SuperRepelMorePowerfulRepel, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_2F_EventScript_Lass::
	msgbox CeladonCity_DepartmentStore_2F_Text_BuyReviveForLongOutings, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_2F_EventScript_FloorSign::
	msgbox CeladonCity_DepartmentStore_2F_Text_FloorSign, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_2F_EventScript_ClerkItems::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CeladonCity_DepartmentStore_2F_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
CeladonCity_DepartmentStore_2F_Items::
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE
	release
	end

CeladonCity_DepartmentStore_2F_EventScript_ClerkTMs::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CeladonCity_DepartmentStore_2F_TMs
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
CeladonCity_DepartmentStore_2F_TMs::
	.2byte ITEM_TM05
	.2byte ITEM_TM15
	.2byte ITEM_TM28
	.2byte ITEM_TM31
	.2byte ITEM_TM43
	.2byte ITEM_TM45
	.2byte ITEM_NONE
	release
	end

CeladonCity_DepartmentStore_2F_Text_SuperRepelMorePowerfulRepel::
	.string "Superschutz hält Pokémon auf\n"
	.string "Distanz...\p"
	.string "Es ist besser als normaler Schutz!$"

CeladonCity_DepartmentStore_2F_Text_BuyReviveForLongOutings::
	.string "Vor längeren Ausflügen solltest du\n"
	.string "Beleber kaufen.$"

CeladonCity_DepartmentStore_2F_Text_FloorSign::
	.string "Nützliche Items für Trainer!\p"
	.string "1S: Zubehör für Trainer$"

CeladonCity_DepartmentStore_2F_Text_LanceComesToBuyCapes::
	.string "Es gibt einen Kunden namens\n"
	.string "Siegfried, der gelegentlich\l"
	.string "vorbeikommt.\l"
	.string "Er kauft stets Umhänge.\p"
	.string "Ich frage mich, ob er\n"
	.string "viele gleiche Umhänge zu\l"
	.string "Hause hat.$"
