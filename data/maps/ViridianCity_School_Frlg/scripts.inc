ViridianCity_School_Frlg_MapScripts::
	.byte 0

ViridianCity_School_EventScript_Lass::
	lock
	faceplayer
	msgbox ViridianCity_School_Text_TryingToMemorizeNotes
	closemessage
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	release
	end

ViridianCity_School_EventScript_Woman::
	lock
	faceplayer
	msgbox ViridianCity_School_Text_ReadBlackboardCarefully
	closemessage
	applymovement LOCALID_SCHOOL_WOMAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

ViridianCity_School_EventScript_Notebook::
	lockall
	msgbox ViridianCity_School_Text_NotebookFirstPage
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
	msgbox ViridianCity_School_Text_NotebookSecondPage
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
	msgbox ViridianCity_School_Text_NotebookThirdPage
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
	msgbox ViridianCity_School_Text_NotebookFourthPage
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox ViridianCity_School_Text_HeyDontLookAtMyNotes
	releaseall
	end

ViridianCity_School_EventScript_StopReadingNotebook::
	releaseall
	end

ViridianCity_School_EventScript_Blackboard::
	lockall
	msgbox ViridianCity_School_Text_BlackboardListsStatusProblems
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end

ViridianCity_School_EventScript_ChooseBlackboardTopic::
	message ViridianCity_School_Text_ReadWhichTopic
	waitmessage
	multichoicegrid 7, 1, MULTI_STATUS_INFO, 3, FALSE
	switch VAR_RESULT
	case 0, ViridianCity_School_EventScript_ReadSleep
	case 1, ViridianCity_School_EventScript_ReadPoison
	case 2, ViridianCity_School_EventScript_ReadParalysis
	case 3, ViridianCity_School_EventScript_ReadBurn
	case 4, ViridianCity_School_EventScript_ReadFreeze
	case 5, ViridianCity_School_EventScript_ExitBlackboard
	case 127, ViridianCity_School_EventScript_ExitBlackboard
	end

ViridianCity_School_EventScript_ReadSleep::
	msgbox ViridianCity_School_Text_ExplainSleep
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end

ViridianCity_School_EventScript_ReadBurn::
	msgbox ViridianCity_School_Text_ExplainBurn
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end

ViridianCity_School_EventScript_ReadPoison::
	msgbox ViridianCity_School_Text_ExplainPoison
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end

ViridianCity_School_EventScript_ReadFreeze::
	msgbox ViridianCity_School_Text_ExplainFreeze
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end

ViridianCity_School_EventScript_ReadParalysis::
	msgbox ViridianCity_School_Text_ExplainParalysis
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end

ViridianCity_School_EventScript_ExitBlackboard::
	releaseall
	end

ViridianCity_School_Text_TryingToMemorizeNotes::
	.string "Puh! Ich versuche, meine Notizen\n"
	.string "auswendig zu lernen.$"

ViridianCity_School_Text_ReadBlackboardCarefully::
	.string "O.K.!\p"
	.string "Lies sorgfältig den Text auf der\n"
	.string "Tafel!$"

ViridianCity_School_Text_NotebookFirstPage::
	.string "Du schaust in das Notizbuch!\p"
	.string "Erste Seite...\p"
	.string "Zum Fangen von POKéMON benutzt\n"
	.string "man POKéBÄLLE.\p"
	.string "Man kann bis zu sechs POKéMON auf\n"
	.string "einmal tragen.\p"
	.string "POKéMON TRAINER ziehen POKéMON\n"
	.string "groß und trainieren sie.$"

ViridianCity_School_Text_NotebookSecondPage::
	.string "Zweite Seite...\p"
	.string "Ein POKéMON bei voller Stärke ist\n"
	.string "schwer zu fangen!\l"
	.string "Man sollte es erst schwächen.\p"
	.string "Feuer, Gift und andere Attacken\n"
	.string "wirken Wunder!$"

ViridianCity_School_Text_NotebookThirdPage::
	.string "Dritte Seite...\p"
	.string "POKéMON TRAINER suchen einander\n"
	.string "und lassen ihre POKéMON kämpfen.\p"
	.string "In den POKéMON-ARENEN finden stets\n"
	.string "Kämpfe statt.$"

ViridianCity_School_Text_NotebookFourthPage::
	.string "Vierte Seite...\p"
	.string "Das Ziel jedes POKéMON TRAINERs\n"
	.string "ist es, die acht Leiter der\l"
	.string "POKéMON-ARENEN zu besiegen.\p"
	.string "Nur dann darf er den TOP VIER in\n"
	.string "der POKéMON LIGA gegenübertreten!$"

ViridianCity_School_Text_TurnThePage::
	.string "Umblättern?$"

ViridianCity_School_Text_HeyDontLookAtMyNotes::
	.string "MÄDCHEN: Heh!\n"
	.string "Lass die Finger von meinen Notizen!$"

ViridianCity_School_Text_BlackboardListsStatusProblems::
	.string "Die Tafel zeigt Statuswechsel der\n"
	.string "POKéMON während des Kampfes an.$"

ViridianCity_School_Text_ReadWhichTopic::
	.string "Welches Thema möchtest du lesen?$"

ViridianCity_School_Text_ExplainSleep::
	.string "Wenn ein POKéMON schläft, kann es\n"
	.string "nicht angreifen!\p"
	.string "Ein schlafendes POKéMON wacht auch\n"
	.string "nach dem Kampf nicht auf.\p"
	.string "Benutze AUFWECKER, damit es\n"
	.string "aufwacht.$"

ViridianCity_School_Text_ExplainBurn::
	.string "Eine Verbrennung vermindert Kraft\n"
	.string "und Stärke. Die KP sinken stetig.\p"
	.string "Verbrennungen dauern auch nach\n"
	.string "einem Kampf an.\p"
	.string "Man heilt sie mit FEUERHEILER.$"

ViridianCity_School_Text_ExplainPoison::
	.string "Ein vergiftetes POKéMON verliert\n"
	.string "stetig KP.\p"
	.string "Die Wirkung des Giftes hält auch\n"
	.string "nach einem Kampf an.\l"
	.string "GEGENGIFT heilt Vergiftungen.$"

ViridianCity_School_Text_ExplainFreeze::
	.string "Ein eingefrorenes POKéMON ist\n"
	.string "bewegungsunfähig.\p"
	.string "Es behält auch nach dem Kampf\n"
	.string "diesen Zustand bei.\p"
	.string "Nur der EISHEILER kann es wieder\n"
	.string "auftauen!$"

ViridianCity_School_Text_ExplainParalysis::
	.string "Ein paralysiertes POKéMON verliert\n"
	.string "an Treffgenauigkeit!\p"
	.string "Die Paralyse hält auch nach einem\n"
	.string "Kampf an. Man behandelt sie mit\l"
	.string "PARA-HEILER.$"

