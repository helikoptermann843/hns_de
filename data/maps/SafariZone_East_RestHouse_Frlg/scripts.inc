SafariZone_East_RestHouse_Frlg_MapScripts::
	.byte 0

SafariZone_East_RestHouse_EventScript_Rocker::
	msgbox SafariZone_East_Text_CaughtChanseyAllWorthwhile, MSGBOX_NPC
	end

SafariZone_East_RestHouse_EventScript_Scientist::
	msgbox SafariZone_East_Text_HowManyDidYouCatch, MSGBOX_NPC
	end

SafariZone_East_RestHouse_EventScript_BaldingMan::
	msgbox SafariZone_East_Text_TiredFromAllTheFun, MSGBOX_NPC
	end

SafariZone_East_Text_HowManyDidYouCatch::
	.string "Wie viele hast du gefangen?\n"
	.string "Ich bin total erschöpft!$"

SafariZone_East_Text_CaughtChanseyAllWorthwhile::
	.string "Ich habe ein Chaneira gefangen!\p"
	.string "Die Mühe hat sich gelohnt!$"

SafariZone_East_Text_TiredFromAllTheFun::
	.string "Was für ein Spaß!\n"
	.string "Aber jetzt bin ich hundemüde...$"

