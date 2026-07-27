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
	.string "Gut! So lass misch dir erklärön!\p"
	.string "Im Kampf wird das erste Pokémon\n"
	.string "auf die Liste beginnön. Mit anderö\l"
	.string "Worte also das Pokémon, das du\l"
	.string "führst spazierön, oui?\p"
	.string "Ast du keine andere Wahl, ändere\n"
	.string "die Aufstellung in die Liste, um zu\l"
	.string "werden einö Gewinnère!\p"
	.string "Möschtest du ören noch mehr?$"

VioletCity_TrainerSchool_Text_TeachMore:
	.string "Du möschtest also wissen, wie man\n"
	.string "trainiert Pokémon auf die Art und\l"
	.string "Weisö, die ist rischtisch?$"

VioletCity_TrainerSchool_Text_TeachRaiseWell:
	.string "Très bien! So lass misch erklärön!\p"
	.string "Selbst wenn eine Pokémon nur kurz an\n"
	.string "die Kampf teilnimmt, bekommt es \l"
	.string "zum Schluss ein paar von die EP ab!\p"
	.string "Führe eine schwache Pokémon mit\n"
	.string "dir spazierön und tausche sie dann\l"
	.string "am Anfang von die Kampf mit einö\l"
	.string "andere aus!\p"
	.string "So können auch schwache Pokémon\n"
	.string "werden sehr stark! Mehr vön mir?$"

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
	.string "Das ist das Notizheft dieses Kindes…\p"
	.string "Pokémon fängt man mit Pokébällen.\n"
	.string "Man kann bis zu sechs von ihnen\l"
	.string "gleichzeitig in einem Team aufstellen.\p"
	.string "Weiterlesen?$"

VioletCity_TrainerSchool_Text_Notebook1:
	.string "Bevor man einen Pokéball wirft, sollte\n"
	.string "das Ziel geschwächt werden.\l"
	.string "Ein vergiftetes oder verbranntes\l"
	.string "Pokémon lässt sich leichter fangen!\p"
	.string "Weiterlesen?$"

VioletCity_TrainerSchool_Text_Notebook2:
	.string "Es gibt außerdem auch Attacken, die ein\n"
	.string "Pokémon verwirren können.\p"
	.string "Verwirrte Pokémon fügen sich ab und zu\n"
	.string "versehentlich selbst Schaden zu.\p"
	.string "Ihr Zustand verbessert sich nach einem\n"
	.string "Kampf allerdings wieder…\p"
	.string "Weiterlesen?$"

VioletCity_TrainerSchool_Text_Notebook3:
	.string "Leute, die Pokémon fangen und in\n"
	.string "Kämpfen einsetzen, nennt man\l"
	.string "im Allgemeinen Pokémon-Trainer.\p"
	.string "Das Ziel eines jeden Trainers ist es,\n"
	.string "alle Arenen zu besuchen und gegen\l"
	.string "immer stärkere andere Trainer zu\l"
	.string "gewinnen.\p"
	.string "Weiterlesen… kannst du nicht mehr,\n"
	.string "denn die nächste Seite ist leer!$"

VioletCity_TrainerSchool_Text_StickerMachine:
	.string "Diese Maschine druckt Daten\n"
	.string "als Sticker aus!$"
