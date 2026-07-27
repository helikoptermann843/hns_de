SSAnne_Kitchen_Frlg_MapScripts::
	.byte 0

SSAnne_Kitchen_EventScript_Chef1::
	msgbox SSAnne_Kitchen_Text_BusyOutOfTheWay, MSGBOX_NPC
	end

SSAnne_Kitchen_EventScript_Chef2::
	msgbox SSAnne_Kitchen_Text_SawOddBerryInTrash, MSGBOX_NPC
	end

SSAnne_Kitchen_EventScript_Chef3::
	msgbox SSAnne_Kitchen_Text_SoBusyImDizzy, MSGBOX_NPC
	end

SSAnne_Kitchen_EventScript_Chef4::
	lock
	faceplayer
	msgbox SSAnne_Kitchen_Text_IAmLeChefMainCourseIs
	random 3
	copyvar VAR_0x8008, VAR_RESULT
	call_if_eq VAR_0x8008, 0, SSAnne_Kitchen_EventScript_SalmonDuSalad
	call_if_eq VAR_0x8008, 1, SSAnne_Kitchen_EventScript_EelsAuBarbecue
	call_if_eq VAR_0x8008, 2, SSAnne_Kitchen_EventScript_PrimeBeefsteak
	release
	end

SSAnne_Kitchen_EventScript_SalmonDuSalad::
	msgbox SSAnne_Kitchen_Text_SalmonDuSalad
	return

SSAnne_Kitchen_EventScript_EelsAuBarbecue::
	msgbox SSAnne_Kitchen_Text_EelsAuBarbecue
	return

SSAnne_Kitchen_EventScript_PrimeBeefsteak::
	msgbox SSAnne_Kitchen_Text_PrimeBeefsteak
	return

SSAnne_Kitchen_EventScript_Chef5::
	msgbox SSAnne_Kitchen_Text_PeelSpudsEveryDay, MSGBOX_NPC
	end

SSAnne_Kitchen_EventScript_Chef6::
	msgbox SSAnne_Kitchen_Text_HearAboutSnorlaxItsAGlutton, MSGBOX_NPC
	end

SSAnne_Kitchen_EventScript_Chef7::
	msgbox SSAnne_Kitchen_Text_OnlyGetToPeelOnions, MSGBOX_NPC
	end

SSAnne_Kitchen_Text_BusyOutOfTheWay::
	.string "Aus dem Weg, du Leichtmatrose!\n"
	.string "Wir sind schwer beschäftigt!$"

SSAnne_Kitchen_Text_SawOddBerryInTrash::
	.string "Im Abfalleimer habe ich eine\n"
	.string "merkwürdige BEERE gesehen!\l"
	.string "Ich frage mich, was das genau\l"
	.string "war!$"

SSAnne_Kitchen_Text_SoBusyImDizzy::
	.string "Es gibt zu viel zu tun, nie kann\n"
	.string "ich mich ausruhen!$"

SSAnne_Kitchen_Text_PeelSpudsEveryDay::
	.string "Was hab ich nur verbrochen?\p"
	.string "Ich muss immer nur Kartoffeln\n"
	.string "schälen...$"

SSAnne_Kitchen_Text_HearAboutSnorlaxItsAGlutton::
	.string "Hast du schon von RELAXO gehört?\p"
	.string "Es schläft und frisst den ganzen\n"
	.string "Tag!$"

SSAnne_Kitchen_Text_OnlyGetToPeelOnions::
	.string "Schnief... ... Schnief...\p"
	.string "Immer muss ich die Zwiebeln\n"
	.string "schälen...$"

SSAnne_Kitchen_Text_IAmLeChefMainCourseIs::
	.string "Ich bin der Chef de Cuisine!\p"
	.string "Der Hauptgang ist…$"

SSAnne_Kitchen_Text_SalmonDuSalad::
	.string "Salmon du Salad!\p"
	.string "Les guests may gripe it's fish\n"
	.string "again, however!$"

SSAnne_Kitchen_Text_EelsAuBarbecue::
	.string "Currywurst!\p"
	.string "Wie kommt eine solche Banalität auf\n"
	.string "meine Karte?$"

SSAnne_Kitchen_Text_PrimeBeefsteak::
	.string "Muschel-Ragout!\p"
	.string "Die Gäste werden es lieben!$"

