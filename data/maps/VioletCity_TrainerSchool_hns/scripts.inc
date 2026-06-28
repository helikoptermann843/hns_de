VioletCity_TrainerSchool_hns_MapScripts::
	.byte 0

VioletCity_TrainerSchool_EventScript_Earl::
	lock
	faceplayer
	msgbox VioletCity_TrainerSchool_Text_EarlIntro, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_TrainerSchool_EventScript_Teacher::
	lock
	faceplayer
	msgbox VioletCity_TrainerSchool_Text_Teacher, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_TrainerSchool_EventScript_Boy1::
	lock
	faceplayer
	msgbox VioletCity_TrainerSchool_Text_GameboyKid1, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_TrainerSchool_EventScript_Boy2::
	lock
	faceplayer
	msgbox VioletCity_TrainerSchool_Text_GameboyKid2, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_TrainerSchool_EventScript_Kid::
	lock
	faceplayer
	msgbox VioletCity_TrainerSchool_Text_Youngster1, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_TrainerSchool_EventScript_Girl::
	lock
	faceplayer
	msgbox VioletCity_TrainerSchool_Text_Youngster2, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_TrainerSchool_EventScript_Twin::
	msgbox VioletCity_TrainerSchool_Text_Twin, MSGBOX_NPC
	end

VioletCity_TrainerSchool_EventScript_BlackBoard::
	lock
	msgbox VioletCity_TrainerSchool_Text_Blackboard, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_TrainerSchool_Text_Twin:
	.string "Ich bin kein GBA-Kind, aber\n"
	.string "ich liebe Pokémon-Spiele!\p"
	.string "In alten Spielen musstest du\n"
	.string "gegen viele wilde Pokémon kämpfen,\l"
	.string "um genug EP zu bekommen.\p"
	.string "In neueren Spielen sorgt die EP-Teilen\n"
	.string "Funktion dafür, dass Pokémon\l"
	.string "schneller aufleveln.\p"
	.string "In diesem Spiel ist EP-Teilen so\n"
	.string "ausbalanciert, dass Pokémon das\l"
	.string "richtige Level erreichen oder leicht\l"
	.string "höher, je nachdem, wie viele Kämpfe\l"
	.string "du führst.\p"
	.string "Willst du klassischen GEN 1-4\n"
	.string "EP-Gewinn, schalte EP-TEILEN aus.\p"
	.string "Für ein modernes Spielerlebnis,\n"
	.string "schalte EP-TEILEN an.\p"
	.string "Du entscheidest, wie du spielen\n"
	.string "willst!$"

VioletCity_TrainerSchool_Text_EarlIntro:
	.string "Ich bin Earl!\p"
	.string "Pokémon sind wundervoll, ja!\p"
	.string "Ich lehre dich, ein besserer\n"
	.string "Trainer zu werden!$"

VioletCity_TrainerSchool_Text_Teacher:
	.string "Manche Pokémon starten schwach\n"
	.string "und brauchen viel mehr EP, um\l"
	.string "stark zu werden als andere.\p"
	.string "Zum Beispiel Larvitar ist schwach,\n"
	.string "wird aber später ein mächtiges\l"
	.string "Despotar, auf Kosten vieler EP.\p"
	.string "Nur die engagiertesten Trainer\n"
	.string "sollten so ein Pokémon trainieren.$"

VioletCity_TrainerSchool_Text_TeachHowToWin:
	.string "Gut! Ich lehre dich!\p"
	.string "Im Kampf starten Pokémon, die\n"
	.string "oben in der Liste stehen, zuerst!\p"
	.string "Reihenfolge ändern, Kampf wird\n"
	.string "vielleicht einfacher!\p"
	.string "Willst du noch mehr von mir hören?$"

VioletCity_TrainerSchool_Text_TeachMore:
	.string "Willst du wissen, wie man Pokémon\n"
	.string "richtig trainiert?$"

VioletCity_TrainerSchool_Text_TeachRaiseWell:
	.string "Gut! Ich lehre dich!\p"
	.string "Wenn Pokémon kurz im Kampf sind,\n"
	.string "bekommen sie EP-Punkte.\p"
	.string "Schwache Pokémon oben in die Liste\n"
	.string "setzen, schnell im Kampf tauschen!\p"
	.string "So werden schwache Pokémon stark!$"

VioletCity_TrainerSchool_Text_NoMoreToTeach:
	.string "Oh! Kluger Schüler!\n"
	.string "Mehr lehre ich nicht!\p"
	.string "Wenn du mehr willst, rede mit\n"
	.string "anderen Schülern!$"

VioletCity_TrainerSchool_Text_Youngster1:
	.string "Manche Pokémon, von denen man dachte,\n"
	.string "sie entwickeln sich nur durch Tausch,\l"
	.string "entwickeln sich jetzt auch\l"
	.string "durch Levelaufstieg.\p"
	.string "Maschock und Georok entwickeln\n"
	.string "sich auf LVL 38, Kadabra und\l"
	.string "Alpollo auf LVL 42.\p"
	.string "Manche Items, wie METALLMANTEL, lassen\n"
	.string "bestimmte Pokémon sich entwickeln,\l"
	.string "wenn sie gehalten und trainiert werden.$"

VioletCity_TrainerSchool_Text_GameboyKid1:
	.string "Bemerkenswerte Pokémon in einem\n"
	.string "Gebiet kann man in der\l"
	.string "Overworld sehen!\p"
	.string "Schaue die Routen bei TAG\n"
	.string "und NACHT an!$"

VioletCity_TrainerSchool_Text_GameboyKid2:
	.string "Beeren in JOHTO heilen oder\n"
	.string "machen Pokébälle.\p"
	.string "Beeren in KANTO senken\n"
	.string "Statuswerte eines Pokémon.\p"
	.string "Das DOJO in KANTO hilft Pokémon,\n"
	.string "perfekte Statuswerte zu erlangen.$"

VioletCity_TrainerSchool_Text_Youngster2:
	.string "Achte darauf, dass Gegner\n"
	.string "jetzt Teams mit besseren Typen\l"
	.string "benutzen.\p"
	.string "Erwarte eine deutlich schwerere Reise.$"

VioletCity_TrainerSchool_Text_Blackboard:
	.string "Die Tafel beschreibt VM-Attacken\n"
	.string "von Pokémon.\p"
	.string "VM, einmal freigeschaltet, müssen\n"
	.string "nicht beigebracht werden,\l"
	.string "sie funktionieren trotzdem.$"

VioletCity_TrainerSchool_Text_Notebook:
	.string "Das ist das Notizbuch des Schülers…\p"
	.string "Fange Pokémon mit POKéBÄLLEN.\p"
	.string "Maximal sechs in deiner Party.\p"
	.string "Weiter lesen?$"

VioletCity_TrainerSchool_Text_Notebook1:
	.string "Bevor du einen Pokéball wirfst,\n"
	.string "schwäche das Ziel zuerst.\p"
	.string "Vergiftete oder verbrannte\n"
	.string "Pokémon lassen sich leichter fangen.\p"
	.string "Weiter lesen?$"

VioletCity_TrainerSchool_Text_Notebook2:
	.string "Manche Attacken können\n"
	.string "Verwirren verursachen.\p"
	.string "Verwirrung lässt ein Pokémon\n"
	.string "sich selbst angreifen.\p"
	.string "Verlassen des Kampfes beseitigt\n"
	.string "Verwirrung.\p"
	.string "Weiter lesen?$"

VioletCity_TrainerSchool_Text_Notebook3:
	.string "Wer Pokémon fängt und im\n"
	.string "Kampf benutzt, ist Trainer.\p"
	.string "Sie besuchen Arenen und besiegen\n"
	.string "andere Trainer.\p"
	.string "Die nächste Seite ist leer!\p"
	.string "Junge: E-he-he…\p"
	.string "Ich habe nichts weiter geschrieben…$"

VioletCity_TrainerSchool_Text_StickerMachine:
	.string "Diese Maschine druckt Daten\n"
	.string "als Sticker aus!$"
