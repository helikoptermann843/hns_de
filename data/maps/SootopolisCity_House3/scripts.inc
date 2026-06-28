SootopolisCity_House3_MapScripts::
	.byte 0

SootopolisCity_House3_EventScript_Woman::
	lock
	faceplayer
	msgbox SootopolisCity_House3_Text_JuanHasManyFansDoYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SootopolisCity_House3_EventScript_HaveFans
	msgbox SootopolisCity_House3_Text_LonesomeTryWorkingHarder, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House3_EventScript_HaveFans::
	msgbox SootopolisCity_House3_Text_YouMustBePrettyStrong, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House3_EventScript_Girl::
	msgbox SootopolisCity_House3_Text_TrainerFanClubWasWild, MSGBOX_NPC
	end

SootopolisCity_House3_Text_JuanHasManyFansDoYou:
	.string "Du bist ein POKéMON-TRAINER, oder?\p"
	.string "Der ARENALEITER von XENEROVILLE, \n"
	.string "JUAN, hat viele Fans.\p"
	.string "Mehr als sein Schüler WASSILI.\n"
	.string "Hast du auch Fans?$"

SootopolisCity_House3_Text_YouMustBePrettyStrong:
	.string "Oh, dann musst du aber sehr stark\n"
	.string "sein.$"

SootopolisCity_House3_Text_LonesomeTryWorkingHarder:
	.string "Oh, meine Güte…\n"
	.string "Dann stehst du ja ganz alleine da.\p"
	.string "Streng dich einfach mehr an, dann\n"
	.string "bekommst du auch einen Fan.$"

SootopolisCity_House3_Text_TrainerFanClubWasWild:
	.string "Die Fans kommen auch von außerhalb\n"
	.string "von HOENN herbeigeströmt.\p"
	.string "Ich habe den TRAINER-FANCLUB in\n"
	.string "SEEGRASULB CITY besucht.\l"
	.string "Verrückte Sache…$"

