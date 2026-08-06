CeladonCity_DepartmentStore_5F_Frlg_MapScripts::
	.byte 0

CeladonCity_DepartmentStore_5F_EventScript_Gentleman::
	msgbox CeladonCity_DepartmentStore_5F_Text_ExplainStatEnhancers, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_5F_EventScript_Sailor::
	msgbox CeladonCity_DepartmentStore_5F_Text_HereForStatEnhancers, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_5F_EventScript_FloorSign::
	msgbox CeladonCity_DepartmentStore_5F_Text_Drugstore, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_5F_EventScript_ClerkXItems::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CeladonCity_DepartmentStore_5F_XItems
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
CeladonCity_DepartmentStore_5F_XItems::
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFEND
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_SPECIAL
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_NONE
	release
	end

CeladonCity_DepartmentStore_5F_EventScript_ClerkVitamins::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CeladonCity_DepartmentStore_5F_Vitamins
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
CeladonCity_DepartmentStore_5F_Vitamins::
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_NONE
	release
	end

CeladonCity_DepartmentStore_5F_Text_ExplainStatEnhancers::
	.string "Nur hier kannst du leistungs-\n"
	.string "fördernde Mittel für deine Pokémon\l"
	.string "kaufen!\p"
	.string "KP-Plus hebt die Basis-KP eines\n"
	.string "Pokémon.\p"
	.string "Kalzium steigert die Stärke von\n"
	.string "Spezial-Attacken!\p"
	.string "Zink hebt den Basis-Wert der\n"
	.string "SP. Ver. eines Pokémon.\p"
	.string "Carbon erhöht die Initiative.$"

CeladonCity_DepartmentStore_5F_Text_HereForStatEnhancers::
	.string "Ich bin wegen der leistungs-\n"
	.string "fördernden Mittel für Pokémon hier.\p"
	.string "PROTEIN steigert die Angriffs-\n"
	.string "STÄRKE.\p"
	.string "EISEN stärkt die Abwehr!$"

CeladonCity_DepartmentStore_5F_Text_Drugstore::
	.string "4S: Drogerie$"

