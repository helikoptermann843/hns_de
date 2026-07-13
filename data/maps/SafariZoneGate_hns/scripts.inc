SafariZoneGate_hns_MapScripts::
	.byte 0

SafariZoneGate_EventScript_Trigger::
	setflag FLAG_VISITED_SAFARI_ZONE_GATE
	setvar VAR_SAFARI_ZONE_GATE_STATE, 3
	end

SafariZoneGate_EventScript_BackupTrigger::
	setflag FLAG_VISITED_SAFARI_ZONE_GATE
	setvar VAR_TEMP_0, 1
	end

SafariZoneGate_EventScript_WorkerM::
	lock
	faceplayer
	msgbox SafariZone_Text_ForeignFeeling, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_EventScript_Silent::
	lock
	faceplayer
	msgbox SafariZone_Text_SilentNPC, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_EventScript_Kangaskhan::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KANGASKHAN, CRY_MODE_NORMAL
	msgbox SafariZone_Text_Kangaskhan, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SafariZoneGate_EventScript_Engineer::
	lock
	faceplayer
	msgbox SafariZone_Text_JigglypuffTrainer, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_EventScript_Girl::
	lock
	faceplayer
	msgbox SafariZone_Text_FirstCatch, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_EventScript_SlowpokeLady::
	lock
	faceplayer
	msgbox SafariZone_Text_SlowpokeFan, MSGBOX_DEFAULT
	closemessage
	release
	end


SafariZone_Text_ForeignFeeling:
    .string "SAFARI ZONE...\n"
    .string "Sie gibt mir das Gefühl, in einem\l"
    .string "fremden Land zu sein.\p"
    .string "Sie löst ein seltsames Gefühl aus.$"

SafariZone_Text_SilentNPC:
    .string "..................\p"
    .string "(Ich bin nicht Gesprächig.)$"

SafariZone_Text_Kangaskhan:
	.string "KANGAMA: ...............$"

SafariZone_Text_JigglypuffTrainer:
    .string "Diese SAFARI-ZONE ist großartig!\n"
    .string "Ich bin einfach immer weiter hinter\l"
    .string "POKéMON hergegangen!\p"
    .string "Das hat mein Pummeluff aber verärgert.$"

SafariZone_Text_FirstCatch:
    .string "Ich wollte schon immer mein erstes\n"
    .string "POKéMON in der SAFARI-ZONE fangen.$"

SafariZone_Text_SlowpokeFan:
    .string "Es gibt viele POKéMON zur Auswahl,\n"
    .string "aber nichts schlägt die Niedlichkeit\l"
    .string "von FLEGMON.\p"
    .string "Die Leute sagen oft, dass ich selbst\n"
    .string "wie eines aussehe!$"

SafariZone_Text_CustomSystem:
    .string "Du hast vielleicht den Eindruck,\n"
    .string "dass es ein ausgeklügeltes System zur\l"
    .string "Anpassung der SAFARI-ZONE gibt, oder?\p"
    .string "Die Wahrheit ist…$"

SafariZone_Text_Sign:
	.string "Hier ist eine Nachricht…\p"
	.string "Bis auf weiteres bleibt das BÜRO\p"
	.string "der SAFARI-ZONE geschlossen.$"


SafariZoneGate_EventScript_IncenseClerk::
	goto_if_set FLAG_FINITE_TMS, SafariZoneGate_EventScript_IncenseClerkFinite
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SafariZoneGate_Pokemart_Incenses
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SafariZoneGate_Pokemart_Incenses:
	.2byte ITEM_SEA_INCENSE
	.2byte ITEM_LAX_INCENSE
	.2byte ITEM_NONE
	release
	end


SafariZoneGate_EventScript_IncenseClerkFinite::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SafariZoneGate_Pokemart_Incenses2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SafariZoneGate_Pokemart_Incenses2:
	.2byte ITEM_TM_HIDDEN_POWER
	.2byte ITEM_TM_SECRET_POWER
	.2byte ITEM_SEA_INCENSE
	.2byte ITEM_LAX_INCENSE
	.2byte ITEM_NONE
	release
	end

SafariZoneGate_EventScript_VitaminGuru::
	lock
	faceplayer
	message SafariZoneGate_Text_VitaminGuruSellWhatYouNeed
	waitmessage
	pokemart SafariZoneGate_Pokemart_VitaminGuru
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SafariZoneGate_Pokemart_VitaminGuru:
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CARBOS
	.2byte ITEM_ZINC
	.2byte ITEM_CALCIUM
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE
	release
	end


SafariZoneGate_Text_VitaminGuruSellWhatYouNeed:
	.string "Ich bin der Vitamin-Guru\n"
	.string "und verkaufe dir was du brauchst!$"

