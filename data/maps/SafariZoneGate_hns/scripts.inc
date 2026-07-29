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
	.string "Das ist also die Safari-Zone…\p"
	.string "Es ist echt seltsam… seit ich hier bin,\n"
	.string "komme ich mir wie auf einem Jahrmarkt in\l"
	.string "einem fremden Land vor - weit, weit weg…$"

SafariZone_Text_SilentNPC:
	.string "… … … (Ich bin nicht sehr gesprächig.)$"

SafariZone_Text_Kangaskhan:
	.string "Kangama: … … …$"

SafariZone_Text_JigglypuffTrainer:
	.string "Junge, Junge, hier in der Safari-Zone\n"
	.string "wird’s einem echt nicht langweilig!\p"
	.string "Ich laufe hier wie besessen nur noch\n"
	.string "irgendwelchen Pokémon hinterher!\p"
	.string "Ich befürchte, dieses Pummeluff hier,\n"
	.string "mein ständiger Begleiter, ist deswegen\l"
	.string "etwas angefressen…$"

SafariZone_Text_FirstCatch:
	.string "Die Entscheidung ist gefallen! Mein\n"
	.string "allererstes Pokémon fange ich mir in der\l"
	.string "Safari-Zone!$"

SafariZone_Text_SlowpokeFan:
	.string "Unter all den vielen Pokémon sind mir\n"
	.string "die Flegmon immer noch am liebsten!\l"
	.string "Diese kleinen Dinger sind einfach zu\l"
	.string "süß!\p"
	.string "Ich höre auch oft von Leuten, dass ich\n"
	.string "selbst wie ein Flegmon aussehe!$"

SafariZone_Text_CustomSystem:
	.string "Du hältst es bestimmt für extrem\n"
	.string "futuristisch, deine Safari-Erfahrung\l"
	.string "genau an deinen Geschmack anpassen zu\l"
	.string "können, oder?\p"
	.string "Tja, aber in Wahrheit…$"

SafariZone_Text_Sign:
	.string "Willkommen in der Safari-Zone!\p"
	.string "Folge dem ungebändigten Ruf der Wildnis\n"
	.string "mit maximalem Komfort!$"


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

