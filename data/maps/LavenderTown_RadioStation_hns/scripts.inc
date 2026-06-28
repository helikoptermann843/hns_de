LavenderTown_RadioStation_hns_MapScripts::
	.byte 0

LavenderTown_RadioStation_EventScript_Officer::
	msgbox LavenderTown_RadioStation_Text_Officer, MSGBOX_NPC
	end

LavenderTown_RadioStation_EventScript_Receptionist::
	msgbox LavenderTown_RadioStation_Text_Receptionist, MSGBOX_NPC
	end

LavenderTown_RadioStation_EventScript_SuperNerd::
	msgbox LavenderTown_RadioStation_Text_SuperNerd1, MSGBOX_NPC
	end

LavenderTown_RadioStation_EventScript_Director::
	lock
	faceplayer
	goto_if_set FLAG_KANTO_RADIO_GOT, LavenderTown_RadioStation_EventScript_DirectorGotRadio
	goto_if_set FLAG_RETURNED_MACHINE_PART, LavenderTown_RadioStation_EventScript_DirectorReturnedMachinePart
	msgbox LavenderTown_RadioStation_Text_Gentleman, MSGBOX_NPC
	end
LavenderTown_RadioStation_EventScript_DirectorReturnedMachinePart::
	msgbox LavenderTown_RadioStation_Text_Gentleman_ReturnedMachinePart, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	msgbox LavendertownRadioStation_Text_Upgraded_Radio, MSGBOX_DEFAULT
	waitfanfare
	msgbox LavenderTown_RadioStation_Text_Gentleman_GotExpnCard, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_KANTO_RADIO_GOT
	release
	end
LavenderTown_RadioStation_EventScript_DirectorGotRadio::	
	msgbox LavenderTown_RadioStation_Text_Gentleman_GotExpnCard, MSGBOX_NPC
	end

LavenderTown_RadioStation_EventScript_Host::
	goto_if_set FLAG_KANTO_RADIO_GOT, LavenderTown_RadioStation_EventScript_Host2
	msgbox LavenderTown_RadioStation_Text_SuperNerd2, MSGBOX_NPC
	end
LavenderTown_RadioStation_EventScript_Host2::
	msgbox LavenderTown_RadioStation_Text_SuperNerd2_GotExpnCard, MSGBOX_NPC
	end

LavenderTown_RadioStation_EventScript_Directory::
	msgbox LavenderTown_RadioStation_Text_Directory, MSGBOX_SIGN
	end
LavenderTown_RadioStation_EventScript_Sign::
	msgbox LavenderTown_RadioStation_Text_PokeFluteSign, MSGBOX_SIGN
	end
LavenderTown_RadioStation_EventScript_Library::
	msgbox LavenderTown_RadioStation_Text_ReferenceLibrary, MSGBOX_SIGN
	end

LavenderTown_RadioStation_Text_Receptionist:
	.string "Willkommen! Schauen Sie sich\n"
	.string "hier auf diesem Stockwerk um.$"

LavenderTown_RadioStation_Text_Officer:
	.string "Tut mir leid, hier darfst du\n"
	.string "nur das EG besichtigen.\p"
	.string "Seitdem der Radioturm von Johto von\n"
	.string "Verbrechern eingenommen\l"
	.string "wurde, haben wir die Sicherheit\p"
	.string "verstärkt.$"

LavenderTown_RadioStation_Text_SuperNerd1:
	.string "Viele Leute arbeiten hier hart\n"
	.string "im Radioturm.\p"
	.string "Sie tun ihr Bestes, gute Sendungen\n"
	.string "zu machen.$"

LavenderTown_RadioStation_Text_Gentleman:
	.string "Oh nein, oh nein, oh nein!\p"
	.string "Seit das Kraftwerk stillsteht,\n"
	.string "sind wir nicht auf Sendung.\p"
	.string "Alle meine Mühen wären umsonst,\n"
	.string "wenn ich nicht senden kann.\p"
	.string "Ich bin ruiniert!$"

LavenderTown_RadioStation_Text_Gentleman_ReturnedMachinePart:
	.string "Ah! Also bist du {PLAYER}, der\n"
	.string "das Problem im Kraftwerk löste?\p"
	.string "Dank dir habe ich meinen Job\n"
	.string "nicht verloren.\p"
	.string "Du bist ein echter Retter!\p"
	.string "Bitte nimm dies als Dank.$"

LavendertownRadioStation_Text_Upgraded_Radio:
	.string "{PLAYER} erhielt das\n"
	.string "RADIO-Up-Grade!$"

LavenderTown_RadioStation_Text_Gentleman_GotExpnCard:
	.string "Damit kannst du die Radiosendungen\n"
	.string "hier in Kanto empfangen.\p"
	.string "Gahahahaha!$"

LavenderTown_RadioStation_Text_SuperNerd2:
	.string "Hallo!\p"
	.string "Ich bin der Musikdirektor!\p"
	.string "Was? Dein Radio empfängt meine\n"
	.string "Programme nicht? Wie schade!\p"
	.string "Mit einer EXPN-Karte kannst du\n"
	.string "sie empfangen. Hol dir besser eine!$"

LavenderTown_RadioStation_Text_SuperNerd2_GotExpnCard:
	.string "Hallo!\p"
	.string "Ich bin der Musikdirektor!\p"
	.string "Ich sorge für die tollen Melodien\n"
	.string "über die Luft.\p"
	.string "Sei kein Langweiler. Hol dir die\n"
	.string "Musik vom Äther!$"

LavenderTown_RadioStation_Text_Directory:
	.string "EGF EMPFANG 1S VERKAUF\p"
	.string "2S PERSONAL 3S PRODUKTION\p"
	.string "4S BÜRO DES INTENDANTEN$"

LavenderTown_RadioStation_Text_PokeFluteSign:
	.string "Wecke Pokémon mit sanften\n"
	.string "Tönen der Pokéflöte auf\l"
	.string "KANAL 20$"

LavenderTown_RadioStation_Text_ReferenceLibrary:
	.string "Wow! Ein ganzes Regal voller\n"
	.string "Pokémon-CDs und Videos.\p"
	.string "Das muss die Referenzbibliothek\n"
	.string "sein.$"

