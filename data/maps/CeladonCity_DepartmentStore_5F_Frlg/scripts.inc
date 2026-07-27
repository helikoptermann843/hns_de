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
	.string "fördernde Mittel für deine POKéMON\l"
	.string "kaufen!\p"
	.string "KP-PLUS hebt die Basis-KP eines\n"
	.string "POKéMON.\p"
	.string "KALZIUM steigert die Stärke von\n"
	.string "SPEZIAL-ATTACKEN!\p"
	.string "ZINK hebt den Basis-Wert der\n"
	.string "SP. VER. eines POKéMON.\p"
	.string "CARBON erhöht die INITIATIVE.$"

CeladonCity_DepartmentStore_5F_Text_HereForStatEnhancers::
	.string "Wenn ein POKéMON schläft, kann es\n"
	.string "nicht angreifen!\p"
	.string "Ein schlafendes POKéMON wacht auch\n"
	.string "nach dem Kampf nicht auf.\p"
	.string "Benutze AUFWECKER, damit es\n"
	.string "aufwacht.$"

CeladonCity_DepartmentStore_5F_Text_Drugstore::
	.string "4S: DROGERIE$"

