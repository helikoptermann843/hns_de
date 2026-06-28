GoldenrodCity_BillsHouse_hns_MapScripts::
	.byte 0

GoldenrodCity_BillsHouse_EventScript_Sister::
	lock
	faceplayer
	msgbox BillHouse_Text_SisterStorageSystem, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_BillsHouse_EventScript_Mom::
	lock
	faceplayer
	goto_if_set FLAG_SYS_PC_BILL, GoldenrodCity_BillsHouse_EventScript_Mom2
	msgbox BillHouse_Text_MomBeforeEcruteak, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_BillsHouse_EventScript_Mom2::
	msgbox BillHouse_Text_MomAfterEcruteak, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_BillsHouse_EventScript_Bill::
	lock
	faceplayer
	goto_if_unset FLAG_GOT_EEVEE, GoldenrodCity_BillsHouse_EventScript_Bill_Eevee
	msgbox BillHouse_Text_PopWontWork, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_BillsHouse_EventScript_Bill_Eevee::
	msgbox BillHouse_Text_TakeThisEevee, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_BillsHouse_EventScript_Bill_Refused
	msgbox BillHouse_Text_CountingOnYou, MSGBOX_DEFAULT

	@HnS named gift pokemon setup
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_EEVEE
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
	givenamedmon 3
	call Common_EventScript_GiftMonNamed

    

	setflag FLAG_GOT_EEVEE
	msgbox BillHouse_Text_EeveeMayEvolve, MSGBOX_DEFAULT
	closemessage
	release
	end


GoldenrodCity_BillsHouse_EventScript_Bill_Refused::
	msgbox BillHouse_Text_NoEevee, MSGBOX_DEFAULT
	closemessage
	release
	end

BillHouse_Text_TakeThisEevee:
	.string "BILL: Hi, {PLAYER}!\p"
	.string "Tu uns einen Gefallen und nimm dieses\n"
	.string "EVOLI.\p"
	.string "Es kam hierher,\n"
	.string "als ich an der ZEITKAPSEL gearbeitet\l"
	.string "habe.\p"
	.string "Jemand sollte sich darum kümmern,\n"
	.string "aber ich gehe nicht gerne raus.\p"
	.string "Wirst du für mich\n"
	.string "mit ihm spielen, {PLAYER}?$"

BillHouse_Text_CountingOnYou:
	.string "BILL: Ich wusste, dass du es\n"
	.string "schaffst! Noch ein kleines Stück!\p"
	.string "Du bist einzigartig!\p"
	.string "O.K., ich zähle auf dich.\p"
	.string "Pass auf dich auf!$"

BillHouse_Text_ReceivedEevee:
	.string "{PLAYER} erhält Evoli!$"

BillHouse_Text_EeveeMayEvolve:
	.string "BILL: PROF. LIND sagt, EVOLI kann\n"
	.string "sich in neue, unbekannte\l"
	.string "Arten entwickeln.$"

BillHouse_Text_PartyFull:
	.string "Moment! Du hast\n"
	.string "keinen Platz mehr in deinem Team.$"

BillHouse_Text_NoEevee:
	.string "Oh… Was soll ich tun?$"

BillHouse_Text_PopWontWork:
	.string "BILL: Mein Paps arbeitet nicht.\p"
	.string "Er geht den ganzen Tag müßig.\p"
	.string "Er fängt an, zu nerven…$"

BillHouse_Text_MomBeforeEcruteak:
	.string "Oh, du sammelst Pokémon?\p"
	.string "Mein Sohn BILL ist ein Experte.\p"
	.string "Er wurde gerade in das Pokémon-CENTER\n"
	.string "von TEAK CITY gerufen.\p"
	.string "Mein Mann ging in die SPIELHALLE,\p"
	.string "ohne anzurufen…$"

BillHouse_Text_MomAfterEcruteak:
	.string "Mein Mann war als MANIAC bekannt.\p"
	.string "BILL muss nach seinem Vater kommen.$"

BillHouse_Text_SisterUsefulNumber:
	.string "Bist du ein Trainer?\p"
	.string "Ich habe eine\n"
	.string "nützliche Telefonnummer für dich.$"

BillHouse_Text_RecordedBillsNumber:
	.string "{PLAYER} speichert BILLs Nummer.$"

BillHouse_Text_SisterRefusedNumber:
	.string "Mein Bruder hat\n"
	.string "das PC-PokémonLAGERUNGS-SYSTEM\l"
	.string "erfunden.\p"
	.string "Ich wollte dir gerade\n"
	.string "BILLs Nummer geben…$"

BillHouse_Text_SisterPhoneFull:
	.string "Du kannst keine\n"
	.string "Nummern mehr speichern.$"

BillHouse_Text_SisterStorageSystem:
	.string "Mein großer Bruder\n"
	.string "BILL hat das PCPokémon-LAGERUNGSSYSTEM\l"
	.string "erfunden.$"
