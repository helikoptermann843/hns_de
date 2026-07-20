Route29_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route29_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route29_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route29_Trigger_Monview::
	special SpawnCameraObject
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp1 
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp1
	waitmovement 0
	message Route29_Text_PressAorB
	waitbuttonpress
	closemessage
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown1
	waitmovement 0
	special RemoveCameraObject
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	waitmovement 0
	end

Route29_Text_PressAorB:
	.string "Drücke A oder B um nicht mehr zu\n"
	.string "schauen.$"

Route29_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, Route29_EventScript_OldMan2
	msgbox Route29_Text_OldMan1, MSGBOX_DEFAULT
	closemessage
	release
	end

Route29_EventScript_OldMan2::
	msgbox Route29_Text_OldMan2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route29_EventScript_OldMan_Tutorial
	waitmessage
	msgbox Route29_Text_OldManDeclined, MSGBOX_DEFAULT
	closemessage
	release
	end

Route29_EventScript_OldMan_Tutorial::
	msgbox Route29_Text_OldManExplanation, MSGBOX_DEFAULT
	closemessage
	release
	end

Route29_EventScript_Lass::
	lock
	faceplayer
	msgbox Route29_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

Route29_EventScript_Youngster::
	lock
	faceplayer
	msgbox Route29_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end


Route29_EventScript_Tuscany::
	lock
	faceplayer
	goto_if_set FLAG_GOT_SILK_SCARF, Route29_EventScript_TuscanyCompleted
	msgbox Route29_Text_MeetTuscany, MSGBOX_DEFAULT
	closemessage
	multichoice 20, 0, MULTI_DAYS_OF_WEEK, FALSE
	switch VAR_RESULT
	case 0, Route29_EventScript_TuscanyNope
	case 1, Route29_EventScript_TuscanyNope
	case 2, Route29_EventScript_TuscanyYes
	case 3, Route29_EventScript_TuscanyNope
	case 4, Route29_EventScript_TuscanyNope
	case 5, Route29_EventScript_TuscanyNope
	case 6, Route29_EventScript_TuscanyNope
	case 7 Route29_EventScript_TuscanyCancel
	case MULTI_B_PRESSED, Route29_EventScript_TuscanyCancel
	closemessage
	release
	end
Route29_EventScript_TuscanyYes::
	msgbox Route29_Text_TuscanyGivesGift, MSGBOX_DEFAULT
	giveitem ITEM_SILK_SCARF
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_SILK_SCARF
	msgbox Route29_Text_TuscanyGaveGift, MSGBOX_DEFAULT
	closemessage
	release
	end
Route29_EventScript_TuscanyNope::
	msgbox Route29_Text_TuscanyNope, MSGBOX_DEFAULT
	closemessage
	release
	end
Route29_EventScript_TuscanyCancel::
	closemessage
	release
	end
Route29_EventScript_TuscanyCompleted::
	msgbox Route29_Text_TuscanyTuesday, MSGBOX_DEFAULT
	closemessage
	release
	end



Route29_EventScript_Girl::
	lock
	faceplayer
	msgbox Route29_Text_Girl, MSGBOX_DEFAULT
	closemessage
	release
	end

Route29_EventScript_Boy::
	lock
	faceplayer
	goto_if_set FLAG_NIGHT_POKEMON, Route29_EventScript_Boy2
	msgbox Route29_Text_Boy_WaitingForDay, MSGBOX_DEFAULT
	closemessage
	release
	end

Route29_EventScript_Boy2::
	msgbox Route29_Text_Boy_WaitingForNight, MSGBOX_DEFAULT
	closemessage
	release
	end

Route29_EventScript_Sign::
	lock
	msgbox Route29_Text_Sign1, MSGBOX_SIGN
	closemessage
	release
	end

Route29_EventScript_ItemPotion::
	finditem ITEM_POTION
	end

Route29_Text_OldMan1:
	.string "Pokémon verstecken sich im Gras.\n"
	.string "Wer weiß, wann sie auftauchen…$"

Route29_Text_OldMan2:
	.string "Ich habe dich schon ein paar Mal\n"
	.string "gesehen.\p"
	.string "Wie viele Pokémon hast du\n"
	.string "gefangen?\p"
	.string "Soll ich dir zeigen, wie man\n"
	.string "Pokémon fängt?$"

Route29_Text_OldManExplanation:
	.string "Wenn du sie zuerst schwächst,\n"
	.string "lassen sich Pokémon leichter\l"
	.string "fangen.\p"
	.string "Wirf dann einen Ball aus deinem\n"
	.string "Beutel! Jeder Ball reicht.\p"
	.string "Wenn du mehr lernen willst,\n"
	.string "geh zur AKADEMIE in Viola City!\p"
	.string "Die Schüler dort wissen viel\n"
	.string "über Pokémon.$"

Route29_Text_OldManDeclined:
	.string "Oh… Na gut.\p"
	.string "Untersuche jede Route, um\n"
	.string "verschiedene Pokémon zu finden.\p"
	.string "Dein POKéDEX zeigt dir auch,\n"
	.string "wo sie leben!\p"
	.string "Wenn du mehr lernen willst,\n"
	.string "geh zur AKADEMIE in Viola City!\p"
	.string "Die Schüler wissen viel über\n"
	.string "Pokémon.$"

Route29_Text_Youngster:
	.string "Yo. Wie geht es deinen Pokémon?\p"
	.string "Sind sie schwach und nicht bereit\n"
	.string "zu kämpfen, halte dich vom Gras fern.$"

Route29_Text_Lass:
	.string "Siehst du die Vorsprünge?\n"
	.string "Es ist gruselig, herunter zu springen.\p"
	.string "Aber du kommst nach Neuborkia,\n"
	.string "ohne durchs Gras zu laufen.$"

Route29_Text_Girl:
	.string "Ich wollte eine Pause machen,\n"
	.string "also habe ich gespeichert,\l"
	.string "um meinen Fortschritt festzuhalten.$"

Route29_Text_Boy_WaitingForDay:
	.string "Ich warte auf Pokémon, die nur\n"
	.string "später am Tag erscheinen.$"

Route29_Text_Boy_WaitingForNight:
	.string "Ich warte auf Pokémon,\n"
	.string "die nur nachts erscheinen.$"

Route29_Text_MeetTuscany:
	.string "Dietlinde: Ich glaube, wir treffen\n"
	.string "uns heute zum ersten Mal?\p"
	.string "Ich bin Dietlinde aus der\n"
	.string "WOCHENTAGSFAMILIE.\p"
	.string "Wenn du meinen Lieblingstag\n"
	.string "errätst, gebe ich dir eine Belohnung.$"

Route29_Text_TuscanyNope:
	.string "Nicht ganz!$"

Route29_Text_TuscanyGivesGift:
	.string "Ja! Da wir uns zum ersten Mal sehen,\p"
	.string "schenke ich dir einen SEIDENSCHAL.$"

Route29_Text_TuscanyGaveGift:
	.string "DIETLINDE: Findest du nicht auch,\n"
	.string "dass es sehr schön ist?\p"
	.string "Attacken der Elementklasse\n"
	.string "Normal, werden dadurch stärker.\p"
	.string "Ich bin sicher,\n"
	.string "du kannst es gebrauchen.$"

Route29_Text_TuscanyTuesday:
	.string "Dietlinde: Kennst du Monja,\n"
	.string "meine große Schwester?\p"
	.string "Oder meinen Bruder, Mitko?\p"
	.string "Ich bin das Dritte von\n"
	.string "sieben Kindern.$"

Route29_Text_Sign1:
	.string "ROUTE 29\p"
	.string "ROSALIA CITY - NEUBORKIA$"

