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
	.string "Willkommen!\p"
	.string "Das Erdgeschoss ist für Besucher\n"
	.string "frei zu besichtigen!$"

LavenderTown_RadioStation_Text_Officer:
	.string "Nur das Erdgeschoss ist frei begehbar.\p"
	.string "Nachdem der Radioturm in Johto von\n"
	.string "Schurken besetzt wurde, haben wir die\l"
	.string "Sicherheitsvorkehrungen verschärft.$"

LavenderTown_RadioStation_Text_SuperNerd1:
	.string "In diesem Radioturm sollen sehr viele\n"
	.string "Menschen angestellt sein.\p"
	.string "Sie alle geben ihr Bestes, um uns ein\n"
	.string "spannendes Programm bieten zu können!$"

LavenderTown_RadioStation_Text_Gentleman:
	.string "Oh nein! Das ist gar nicht gut!\p"
	.string "Ohne den Strom aus dem Kraftwerk\n"
	.string "können wir nicht auf Sendung gehen!\p"
	.string "Wenn wir nicht senden können, waren\n"
	.string "all meine Bemühungen, diesen Sender\l"
	.string "zu eröffnen, vergebens!\l"
	.string "Ich bin ruiniert!$"

LavenderTown_RadioStation_Text_Gentleman_ReturnedMachinePart:
	.string "Oh! Du bist also dieser {PLAYER},\n"
	.string "der das Problem mit dem Kraftwerk\l"
	.string "gelöst hat!\p"
	.string "Dank dir konnte ich meinen Job behalten.\n"
	.string "Du hast mir das Leben gerettet!\p"
	.string "Hier, als Zeichen meiner Dankbarkeit!\n"
	.string "Nimm schon, es gehört dir!$"

LavendertownRadioStation_Text_Upgraded_Radio:
	.string "{PLAYER} erhielt das\n"
	.string "Radio-Up-Grade!$"

LavenderTown_RadioStation_Text_Gentleman_GotExpnCard:
	.string "Damit kannst du neue Sender auf\n"
	.string "deinem Radio empfangen!\l"
	.string "Hahahahaha!$"

LavenderTown_RadioStation_Text_SuperNerd2:
	.string "Hallihallo! Ich bin der Starredakteur\n"
	.string "unseres Musikprogramms!\p"
	.string "…Oh, tut mir leid, aber mit deinem\n"
	.string "PokéCom kannst du meine Sendung\l"
	.string "nicht empfangen!\p"
	.string "Du wirst vorher erst dein Radio mit\n"
	.string "einem Zusatzset aufrüsten müssen!$"

LavenderTown_RadioStation_Text_SuperNerd2_GotExpnCard:
	.string "Hallihallo! Ich bin der Starredakteur\n"
	.string "unseres Musikprogramms!\p"
	.string "In meinem Programm kriegst du nur\n"
	.string "die schönsten Melodien zu hören!\l"
	.string "Also, nicht vergessen: einschalten!$"

LavenderTown_RadioStation_Text_Directory:
	.string "EG: Rezeption\n"
	.string "1S: Geschäftsabteilung\l"
	.string "2S: Allgemeine Angelegenheiten\l"
	.string "3S: Produktion\l"
	.string "4S: Büro des Intendanten$"

LavenderTown_RadioStation_Text_PokeFluteSign:
	.string "Wecke Pokémon mit sanften\n"
	.string "Tönen der Pokéflöte auf\l"
	.string "Kanal 20$"

LavenderTown_RadioStation_Text_ReferenceLibrary:
	.string "Wow! Ein ganzes Regal voller\n"
	.string "Pokémon-Cds und Videos.\p"
	.string "Das muss die Referenzbibliothek\n"
	.string "sein.$"

