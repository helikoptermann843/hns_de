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
	.string "Oh, ein Besucher! Leute wie dich\n"
	.string "sieht man hier nur äußerst selten!\p"
	.string "Als ich noch jung war, habe ich auf\n"
	.string "meinen Reisen als Pokémon-Trainerin\l"
	.string "auch nichts unversucht gelassen.\p"
	.string "Ich habe versucht, Türme zu erklimmen\n"
	.string "und die Tiefen des Meeres zu ergründen.\p"
	.string "Aber inzwischen bin ich schon damit\n"
	.string "zufrieden, an diesem Strand den Wellen\l"
	.string "und der Meeresbrise zu lauschen und ein\l"
	.string "gemütliches Leben zu führen.$"

CianwoodCity_Text_BellTowerStory:
	.string "Kennst du den Glockenturm in Teak City?\p"
	.string "An seiner Spitze gibt es ein Artefakt,\n"
	.string "das man die Klarglocke nennt.\p"
	.string "Aber egal, wie stark der Wind auch sein\n"
	.string "mag, der dort weht, sie gibt nie auch\l"
	.string "nur einen Laut von sich.\p"
	.string "Es gibt allerdings eine Möglichkeit,\n"
	.string "sie zum Klingen zu bringen.\p"
	.string "Soll ich dir sagen, wie das geht?\p"
	.string "Indem du dir eine weitere Klarglocke\n"
	.string "besorgst, die mit der an der Spitze\l"
	.string "des Turms identisch ist!\p"
	.string "Auch ich habe vor langer Zeit einmal\n"
	.string "versucht, die Glocke in meinen Besitz zu\l"
	.string "bringen, doch es sollte wohl nicht sein.$"

CianwoodCity_Text_WhirlIslandsStory:
	.string "Sag, kennst du den Wasserfall tief\n"
	.string "unter den Strudelinseln?\p"
	.string "An seinem Grund gibt es ein Artefakt,\n"
	.string "das man die Gischtglocke nennt.\p"
	.string "Aber egal, wie stark die See dort auch\n"
	.string "wütet, sie gibt nie auch nur einen Laut\l"
	.string "von sich.\p"
	.string "Es gibt allerdings eine Möglichkeit,\n"
	.string "sie zum Klingen zu bringen.\p"
	.string "Soll ich dir sagen, wie das geht?\p"
	.string "Indem du dir eine weitere Gischtglocke\n"
	.string "besorgst, die mit der am Grund des\l"
	.string "Wasserfalls identisch ist!\p"
	.string "Auch ich habe vor langer Zeit einmal\n"
	.string "versucht, die Glocke in meinen Besitz zu\l"
	.string "bringen, doch es sollte wohl nicht sein.$"

CianwoodCity_Text_ClearBellReaction:
	.string "Oh! Soll das etwa heißen, dass du\n"
	.string "die Klarglocke gefunden hast?\p"
	.string "Du hast geschafft, was mir nie\n"
	.string "vergönnt war…\p"
	.string "Ich verstehe. Du kannst…\p"
	.string "… … …\n"
	.string "Du kannst ihn wohl hören…\p"
	.string "Du kannst den Klang der Klarglocke\n"
	.string "hören, den der Wind vom Glockenturm\l"
	.string "herabweht…$"

CianwoodCity_Text_TidalBellReaction:
	.string "Oh! Soll das etwa heißen, dass du\n"
	.string "die Gischtglocke gefunden hast?\p"
	.string "Du hast geschafft, was mir nie\n"
	.string "vergönnt war…\p"
	.string "Ich verstehe. Du kannst…\p"
	.string "… … …\n"
	.string "Du kannst ihn wohl hören…\p"
	.string "Du kannst den Klang der Gischtglocke\n"
	.string "hören, den die Meeresbrise aus den\l"
	.string "Tiefen der Strudelinseln heraufbläst…$"
