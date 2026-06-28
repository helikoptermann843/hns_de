SootopolisCity_House2_MapScripts::
	.byte 0

SootopolisCity_House2_EventScript_ExpertF::
	lock
	faceplayer
	msgbox SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, SootopolisCity_House2_EventScript_KnowAboutOrbs
	call_if_eq VAR_RESULT, NO, SootopolisCity_House2_EventScript_DontKnowAboutOrbs
	release
	end

SootopolisCity_House2_EventScript_KnowAboutOrbs::
	msgbox SootopolisCity_House2_Text_YesTwoOrbsSideBySide, MSGBOX_DEFAULT
	return

SootopolisCity_House2_EventScript_DontKnowAboutOrbs::
	msgbox SootopolisCity_House2_Text_OughtToVisitAndSee, MSGBOX_DEFAULT
	return

SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs:
	.string "PYROBERG…\p"
	.string "Auf seiner Spitze sind 2 Kugeln neben-\n"
	.string "einander angebracht. Wusstest du das?$"

SootopolisCity_House2_Text_YesTwoOrbsSideBySide:
	.string "Ja, genau. 2 Kugeln nebeneinander…\p"
	.string "Der Anblick dieser beiden…\n"
	.string "Irgendwie wirkt er beruhigend…$"

SootopolisCity_House2_Text_OughtToVisitAndSee:
	.string "Ehrlich?\n"
	.string "Du solltest dir das mal selber\l"
	.string "ansehen…$"

