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
	.string "Schon viele Leute haben Dinge auf\n"
	.string "dem Tunnelpfad verloren.$"

SafariZone_East_Text_CaughtChanseyAllWorthwhile::
	.string "Wie geht es {PLAYER}?\p"
	.string "Mein {PLAYER} fühlt sich super!$"

SafariZone_East_Text_TiredFromAllTheFun::
	.string "Ein verschlafenes Pokémon ist in\n"
	.string "Prismania City aufgetaucht!$"

