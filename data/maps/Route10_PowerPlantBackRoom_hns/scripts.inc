Route10_PowerPlantBackRoom_hns_MapScripts::
	.byte 0


Route10_PowerPlantBackRoom_EventScript_Manager::
	lock
	faceplayer
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 0, Route10_PowerPlantBackRoom_EventScript_ManagerInitial
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 1, Route10_PowerPlantBackRoom_EventScript_ManagerDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 2, Route10_PowerPlantBackRoom_EventScript_ManagerDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 3, Route10_PowerPlantBackRoom_EventScript_ManagerDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 4, Route10_PowerPlantBackRoom_EventScript_ManagerDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 5, Route10_PowerPlantBackRoom_EventScript_ManagerDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 6, Route10_PowerPlantBackRoom_EventScript_ManagerCheckPart
	goto_if_ge VAR_KANTO_ROCKET_STORY_STATE, 7, Route10_PowerPlantBackRoom_EventScript_ManagerDone
	msgbox Route10_PowerPlantBackRoom_Text_ManagerMyBelovedGenerator, MSGBOX_DEFAULT
	closemessage
	release
	end

Route10_PowerPlantBackRoom_EventScript_ManagerInitial::
	msgbox Route10_PowerPlantBackRoom_Text_ManagerWhoWouldRuinMyGenerator, MSGBOX_DEFAULT
	closemessage
	setvar VAR_KANTO_ROCKET_STORY_STATE, 1
	release
	end

Route10_PowerPlantBackRoom_EventScript_ManagerDuringRocket::
	msgbox Route10_PowerPlantBackRoom_Text_ManagerIWontForgiveCulprit, MSGBOX_DEFAULT
	closemessage
	release
	end

Route10_PowerPlantBackRoom_EventScript_ManagerCheckPart::
	checkitem ITEM_MACHINE_PART
	goto_if_eq VAR_RESULT, FALSE, Route10_PowerPlantBackRoom_EventScript_ManagerDuringRocket
	removeitem ITEM_MACHINE_PART
	msgbox Route10_PowerPlantBackRoom_Text_ManagerThatsThePart, MSGBOX_DEFAULT
	msgbox Route10_PowerPlantBackRoom_Text_ManagerTakeThisTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_THUNDER
	msgbox Route10_PowerPlantBackRoom_Text_ManagerTM07IsZapCannon, MSGBOX_DEFAULT
	closemessage
	setvar VAR_KANTO_ROCKET_STORY_STATE, 7
	clearflag FLAG_HIDE_ROUTE25_MISTY
	setvar VAR_CERULEAN_CITY_STATE, 2
	setflag FLAG_HIDE_POWER_PLANT_ENGINEER
	setflag FLAG_RETURNED_MACHINE_PART
	release
	end

Route10_PowerPlantBackRoom_EventScript_ManagerDone::
	msgbox Route10_PowerPlantBackRoom_Text_ManagerMyBelovedGenerator, MSGBOX_DEFAULT
	closemessage
	release
	end

Route10_PowerPlantBackRoom_EventScript_Engineer::
	msgbox Route10_PowerPlantBackRoom_Text_Engineer, MSGBOX_NPC
	end

Route10_PowerPlantBackRoom_Text_ManagerWhoWouldRuinMyGenerator:
	.string "DIREKTOR: Ich, ich\n"
	.string "werde ihm nie verzeihen!\p"
	.string "Wer wagt es,\n"
	.string "meinen Generator zu demolieren?\p"
	.string "Ich habe so lange daran gearbeitet!\p"
	.string "Wenn ich den erwische, dann\p"
	.string "lernt er meine BLITZKANONE kennen!$"

Route10_PowerPlantBackRoom_Text_ManagerIWontForgiveCulprit:
	.string "DIREKTOR: Das kann\n"
	.string "ich ihm nicht verzeihen!\p"
	.string "Der Schurke kann weinen und sich\p"
	.string "entschuldigen, ich\n"
	.string "werde ihn trotzdem bestrafen!\p"
	.string "Uahahaha!$"

Route10_PowerPlantBackRoom_Text_ManagerThatsThePart:
	.string "MANAGER: Ah! Ja!\p"
	.string "Das ist das fehlende TEIL von\n"
	.string "meinem geliebten Generator!\p"
	.string "Du hast es gefunden?$"

Route10_PowerPlantBackRoom_Text_ManagerTakeThisTM:
	.string "Wahaha! Danke!\p"
	.string "Hier! Nimm diese TM als\n"
	.string "Belohnung!$"

Route10_PowerPlantBackRoom_Text_ManagerTM07IsZapCannon:
	.string "DIREKTOR: TM07\n"
	.string "enthält BLITZKANONE. Eine sehr\p"
	.string "starke Attacke! Sie ist nicht sehr\p"
	.string "präzise, aber du kannst jemanden\p"
	.string "damit ordentlich schmoren!$"

Route10_PowerPlantBackRoom_Text_ManagerMyBelovedGenerator:
	.string "DIREKTOR: Mein geliebter Generator!\p"
	.string "Produziere weiter viel Energie!$"

Route10_PowerPlantBackRoom_Text_Engineer:
	.string "Die Tür ist ohne Strom gefährlich.$"

