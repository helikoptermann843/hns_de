Route114_LanettesHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_LanettesHouse_OnTransition
	.byte 0

Route114_LanettesHouse_OnTransition:
	setflag FLAG_LANDMARK_LANETTES_HOUSE
	end

Route114_LanettesHouse_EventScript_Lanette::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_DOLL_LANETTE, Route114_LanettesHouse_EventScript_OfferAdvice
	setflag FLAG_SYS_PC_LANETTE
	msgbox Route114_LanettesHouse_Text_EverythingClutteredKeepThis, MSGBOX_DEFAULT
	givedecoration DECOR_LOTAD_DOLL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowNoRoomForDecor
	setflag FLAG_RECEIVED_DOLL_LANETTE
	release
	end

Route114_LanettesHouse_EventScript_OfferAdvice::
	msgbox Route114_LanettesHouse_Text_OrganizeYourBoxes, MSGBOX_DEFAULT
	release
	end

Route114_LanettesHouse_EventScript_Notebook::
	lockall
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route114_LanettesHouse_EventScript_NotebookPage2
	msgbox Route114_LanettesHouse_Text_ClosedTheNotebook, MSGBOX_DEFAULT
	releaseall
	end

Route114_LanettesHouse_EventScript_NotebookPage2::
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage2, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route114_LanettesHouse_EventScript_NotebookPage3
	releaseall
	end

Route114_LanettesHouse_EventScript_NotebookPage3::
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage3, MSGBOX_DEFAULT
	return

Route114_LanettesHouse_EventScript_PC::
	msgbox Route114_LanettesHouse_Text_EmailFromBill, MSGBOX_SIGN
	end

Route114_LanettesHouse_Text_EverythingClutteredKeepThis:
	.string "Lanette: Oh! {PLAYER}{KUN}!\p"
	.string "Entschuldige, dass es hier so\n"
	.string "chaotisch\n"
	.string "aussieht. Immer, wenn ich forsche,\l"
	.string "vergesse ich aufzuräumen…\p"
	.string "Das ist echt peinlich… Erzähl das bloß\n"
	.string "niemandem! Ich gebe dir auch dies\l"
	.string "hier…$"

Route114_LanettesHouse_Text_OrganizeYourBoxes:
	.string "Soll ich dir einige Hinweise zum\n"
	.string "Pokémon-Lagerungs-System geben?\p"
	.string "Du solltest deine Boxen gut verwalten,\n"
	.string "damit du weißt, welche Pokémon sich \l"
	.string "in welcher Box befinden…$"

Route114_LanettesHouse_Text_ResearchNotesPage1:
	.string "Lanettes Forschungs-Aufzeichnungen.\n"
	.string "Das sind Informationen zu den Boxen.\p"
	.string "Es sollten Boxen eingerichtet werden,\n"
	.string "die jeweils 30 Pokémon aufnehmen\l"
	.string "können.\p"
	.string "Jeder Trainer sollte in der Lage sein,\n"
	.string "420 Pokémon im PC-System zu lagern.\p"
	.string "Weiterlesen?$"

Route114_LanettesHouse_Text_ResearchNotesPage2:
	.string "Es muss ein Markierungssystem einge-\n"
	.string "richtet werden, mit dem man eine gute\l"
	.string "Übersicht über die Pokémon bekommt.\p"
	.string "Der Name und der Hintergrund jeder Box\n"
	.string "lassen sich verändern, zur Freude der\l"
	.string "darin gelagerten Pokémon.\p"
	.string "Weiterlesen?$"

Route114_LanettesHouse_Text_ResearchNotesPage3:
	.string "Immer, wenn ein Pokémon gelagert wird,\n"
	.string "wird es in der Box gelagert, die als\l"
	.string "Letzte geöffnet wurde.\p"
	.string "Ist diese Box voll, wird das Pokémon\n"
	.string "in der nächsten Box gelagert.\p"
	.string "Mit anderen Worten, die zuletzt ge-\n"
	.string "öffnete Box wird automatisch gewählt,\l"
	.string "um ein Pokémon zu lagern.$"

Route114_LanettesHouse_Text_ClosedTheNotebook:
	.string "{PLAYER} schließt das Notizbuch.$"

Route114_LanettesHouse_Text_EmailFromBill:
	.string "Da ist eine E-Mail von jemandem\n"
	.string "auf dem PC.\p"
	.string "“… … … … … … …\p"
	.string "Dein Lagerungs-System bietet viel mehr\n"
	.string "Komfort als meines.\p"
	.string "Es besitzt viele anwenderfreundliche\n"
	.string "Features, die nützlich sind und Spaß\l"
	.string "machen.\p"
	.string "Es macht mich stolz, dass ich Teil\n"
	.string "dieser Entwicklung war.\p"
	.string "Ich hoffe sehr, du setzt deine For-\n"
	.string "schungen in diesem Bereich weiter\n"
	.string "fort. \p"
	.string "Bill … … … … … … … …”$"

