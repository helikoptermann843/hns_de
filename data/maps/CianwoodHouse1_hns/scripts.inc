CianwoodHouse1_hns_MapScripts::
	.byte 0

CianwoodHouse1_EventScript_Hermit::
	lock
	faceplayer
	msgbox CianwoodCity_Text_OldManIntro, MSGBOX_DEFAULT
	goto_if_eq VAR_LUGIA_OR_HOOH, 2, CianwoodHouse1_EventScript_HermitHooh
	checkitem ITEM_TIDAL_BELL
	goto_if_eq VAR_RESULT, TRUE, CianwoodHouse1_EventScript_HermitTidalBell
	msgbox CianwoodCity_Text_WhirlIslandsStory, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodHouse1_EventScript_HermitTidalBell::
	msgbox CianwoodCity_Text_TidalBellReaction, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodHouse1_EventScript_HermitHooh::
	checkitem ITEM_CLEAR_BELL
	goto_if_eq VAR_RESULT, TRUE, CianwoodHouse1_EventScript_HermitClearBell
	msgbox CianwoodCity_Text_BellTowerStory, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodHouse1_EventScript_HermitClearBell::
	msgbox CianwoodCity_Text_ClearBellReaction, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_OldManIntro:
	.string "Ich erinnere mich nicht mehr,\n"
	.string "wann mich zuletzt jemand besuchte.\p"
	.string "Als ich jung war, war ich auch\n"
	.string "ein Pokémon-Trainer.\p"
	.string "Ich versuchte, den Turm zu erreichen\n"
	.string "und tauchte ins Meer.\p"
	.string "Ich habe mich immer bemüht.p"
	.string "Nun nehme ich die Dinge gelassen,\n"
	.string "höre auf Wellen und Wind hier am\l"
	.string "Strand.$"

CianwoodCity_Text_BellTowerStory:
	.string "Hast du vom Glockenturm in\n"
	.string "Teak-City gehört?\p"
	.string "Oben auf dem Turm hängen die\n"
	.string "Klarglocken.\p"
	.string "Sie machen keinen einzigen Ton,\n"
	.string "selbst bei starkem Wind.\p"
	.string "Es gibt nur einen Weg, sie zum\n"
	.string "Klingen zu bringen.\p"
	.string "Man muss eine weitere Klarglocke\n"
	.string "besorgen, wie die oben am Turm.\l"
	.string "Als ich jung war, suchte ich eine.\p"
	.string "Doch ich bekam keine...$"

CianwoodCity_Text_WhirlIslandsStory:
	.string "Hast du von den Strudelinseln\n"
	.string "gehört?\p"
	.string "Dort gibt es, wie die Seeleute sie\n"
	.string "nennen, Gischtglocken\l"
	.string "im Kaskadenbecken.\p"
	.string "Sie machen keinen Ton bei stürzenden\n"
	.string "Wellen.\p"
	.string "Nur auf eine Weise kann man sie\n"
	.string "zum Klingen bringen.\p"
	.string "Man muss eine weitere Gischtglocke\n"
	.string "besorgen, wie die im Kaskadenbecken.\l"
	.string "Als ich jung war, suchte ich eine.\p"
	.string "Doch ich bekam keine...$"

CianwoodCity_Text_ClearBellReaction:
	.string "Oh! Du hast eine Klarglocke\n"
	.string "erhalten?\p"
	.string "Mein alter Kindheitstraum...\n"
	.string "Ich verstehe...\p"
	.string "Du hast es geschafft...\n"
	.string "...\l"
	.string "...Ich kann sie hören!\p"
	.string "Den Klang der Glocken im Wind,\n"
	.string "es kommt aus Richtung vom...\l"
	.string "Glockenturm$"

CianwoodCity_Text_TidalBellReaction:
	.string "Oh! Du hast eine Gischtglocke\n"
	.string "erhalten?\p"
	.string "Mein alter Kindheitstraum...\n"
	.string "Ich verstehe...\p"
	.string "Du hast es geschafft...\n"
	.string "...\l"
	.string "...Ich kann sie hören!\p"
	.string "Den Klang der Glocken auf der\n"
	.string "Meeresbrise, kommend aus Richtung\l"
	.string "der Strudelinseln$"
