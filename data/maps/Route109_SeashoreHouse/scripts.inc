Route109_SeashoreHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_SeashoreHouse_OnTransition
	.byte 0

Route109_SeashoreHouse_OnTransition:
	setflag FLAG_LANDMARK_SEASHORE_HOUSE
	end

Route109_SeashoreHouse_EventScript_Owner::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_6_SODA_POP, Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop
	goto_if_set FLAG_DEFEATED_SEASHORE_HOUSE, Route109_SeashoreHouse_EventScript_DefeatedTrainers
	goto_if_set FLAG_TEMP_2, Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction
	msgbox Route109_SeashoreHouse_Text_SeashoreHouseIntro, MSGBOX_DEFAULT
	setflag FLAG_TEMP_2
	release
	end

Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction::
	msgbox Route109_SeashoreHouse_Text_ShowMeSomeHotMatches, MSGBOX_DEFAULT
	release
	end

Route109_SeashoreHouse_EventScript_DefeatedTrainers::
	msgbox Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles, MSGBOX_DEFAULT
	giveitem ITEM_SODA_POP, 6
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_BagFull
	setflag FLAG_RECEIVED_6_SODA_POP
	release
	end

Route109_SeashoreHouse_EventScript_BagFull::
	msgbox Route109_SeashoreHouse_Text_BagFull, MSGBOX_DEFAULT
	release
	end

Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop::
	showmoneybox 0, 0
	msgbox Route109_SeashoreHouse_Text_WantToBuySodaPop, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route109_SeashoreHouse_EventScript_BuySodaPop
	msgbox Route109_SeashoreHouse_Text_ThatsTooBad, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

Route109_SeashoreHouse_EventScript_BuySodaPop::
	checkmoney 300
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughMoney
	checkitemspace ITEM_SODA_POP
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughSpace
	msgbox Route109_SeashoreHouse_Text_HereYouGo, MSGBOX_DEFAULT
	removemoney 300
	updatemoneybox
.if OW_SHOW_ITEM_DESCRIPTIONS != OW_ITEM_DESCRIPTIONS_OFF
	hidemoneybox
	giveitem ITEM_SODA_POP
.else
	giveitem ITEM_SODA_POP
	hidemoneybox
.endif
	release
	end

Route109_SeashoreHouse_EventScript_NotEnoughMoney::
	msgbox Route109_SeashoreHouse_Text_NotEnoughMoney, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

Route109_SeashoreHouse_EventScript_NotEnoughSpace::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

Route109_SeashoreHouse_EventScript_Dwayne::
	trainerbattle_single TRAINER_DWAYNE, Route109_SeashoreHouse_Text_DwayneIntro, Route109_SeashoreHouse_Text_DwayneDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
	msgbox Route109_SeashoreHouse_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
	end

Route109_SeashoreHouse_EventScript_Johanna::
	trainerbattle_single TRAINER_JOHANNA, Route109_SeashoreHouse_Text_JohannaIntro, Route109_SeashoreHouse_Text_JohannaDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
	msgbox Route109_SeashoreHouse_Text_JohannaPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_SeashoreHouse_EventScript_Simon::
	trainerbattle_single TRAINER_SIMON, Route109_SeashoreHouse_Text_SimonIntro, Route109_SeashoreHouse_Text_SimonDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
	msgbox Route109_SeashoreHouse_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_SeashoreHouse_EventScript_CheckTrainersCompletion::
	goto_if_not_defeated TRAINER_DWAYNE, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
	goto_if_not_defeated TRAINER_JOHANNA, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
	goto_if_not_defeated TRAINER_SIMON, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
	setflag FLAG_DEFEATED_SEASHORE_HOUSE
	release
	end

Route109_SeashoreHouse_EventScript_TrainersNotCompleted::
	release
	end

Route109_SeashoreHouse_Text_SeashoreHouseIntro:
	.string "Ich bin der Besitzer des STRANDHAUSes.\n"
	.string "Du kannst MR. MARE zu mir sagen.\p"
	.string "Heißen POKéMON-Kämpfen zuzusehen,\n"
	.string "liebe ich über alles!\p"
	.string "Zeig mir, wie heiß dein Herz lodert!\p"
	.string "Wenn du alle TRAINER besiegen kannst,\n"
	.string "werde ich dich belohnen!$"

Route109_SeashoreHouse_Text_ShowMeSomeHotMatches:
	.string "Zeig mir heiße Kämpfe!\p"
	.string "Nur für diese habe ich das STRANDHAUS\n"
	.string "überhaupt geöffnet!$"

Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles:
	.string "Du bist brandheiß!\n"
	.string "Die Kämpfe glühen geradezu!\l"
	.string "Ich bin mehr als zufrieden!\p"
	.string "Du hast deine Fertigkeiten bewiesen.\n"
	.string "Zum Dank schenke ich dir etwas.\p"
	.string "Es sind sechs Flaschen SPRUDEL!$"

Route109_SeashoreHouse_Text_BagFull:
	.string "Aber dein BEUTEL ist ja gerammelt\n"
	.string "voll.\l"
	.string "Ich werde sie für dich aufbewahren.$"

Route109_SeashoreHouse_Text_WantToBuySodaPop:
	.string "Möchtest du etwas SPRUDEL kaufen?\n"
	.string "POKéMON lieben ihn!\p"
	.string "Nur ¥300 pro Flasche!\n"
	.string "Kauf doch welchen!$"

Route109_SeashoreHouse_Text_HereYouGo:
	.string "Hier, bitte schön!$"

Route109_SeashoreHouse_Text_NotEnoughMoney:
	.string "Du hast nicht genügend Geld.$"

Route109_SeashoreHouse_Text_ThatsTooBad:
	.string "Nein? Das ist aber wirklich schade.$"

Route109_SeashoreHouse_Text_DwayneIntro:
	.string "Wenn du Lust auf einen heißen Kampf\n"
	.string "auf hoher See hast, findest du keinen\l"
	.string "lodernderen TRAINER als mich!$"

Route109_SeashoreHouse_Text_DwayneDefeated:
	.string "Das war ein heißer Kampf!\n"
	.string "Ich kann die Niederlage verkraften!$"

Route109_SeashoreHouse_Text_DwaynePostBattle:
	.string "Immer wenn ich in GRAPHITPORT CITY\n"
	.string "bin, genieße ich heiße Kämpfe und\l"
	.string "eisgekühlten SPRUDEL!$"

Route109_SeashoreHouse_Text_JohannaIntro:
	.string "Langweilige Kämpfe lohnen sich nicht.\n"
	.string "\p"
	.string "Feurig heiße Kämpfe aber stählen\n"
	.string "TRAINER und POKéMON.$"

Route109_SeashoreHouse_Text_JohannaDefeated:
	.string "Das war brandheiß!$"

Route109_SeashoreHouse_Text_JohannaPostBattle:
	.string "Puh, ich bin am Verdursten.\n"
	.string "Ich sollte SPRUDEL trinken.$"

Route109_SeashoreHouse_Text_SimonIntro:
	.string "Ich werde dir zeigen, wie toll meine\n"
	.string "POKéMON sind. Aber heul bloß nicht\l"
	.string "los!$"

Route109_SeashoreHouse_Text_SimonDefeated:
	.string "Ich habe verloren. Aber ich heule\n"
	.string "nicht!$"

Route109_SeashoreHouse_Text_SimonPostBattle:
	.string "Wenn doch nur eines meiner POKéMON\n"
	.string "wüsste, wie es mich über das Wasser\l"
	.string "tragen kann. Dann wäre ich den\l"
	.string "ollen Schwimmreifen los.$"

