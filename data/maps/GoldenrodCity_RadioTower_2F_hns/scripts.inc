GoldenrodCity_RadioTower_2F_hns_MapScripts::
	.byte 0

GoldenrodRaidoTower2_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_3_HNS, GoldenrodCity_RadioTower_2F_Text_GruntM4Seen, GoldenrodCity_RadioTower_2F_Text_GruntM4Beaten
	msgbox GoldenrodCity_RadioTower_2F_Text_GruntM4After, MSGBOX_AUTOCLOSE
	end
GoldenrodRaidoTower2_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_4_HNS, GoldenrodCity_RadioTower_2F_Text_GruntM5Seen, GoldenrodCity_RadioTower_2F_Text_GruntM5Beaten
	msgbox GoldenrodCity_RadioTower_2F_Text_GruntM5After, MSGBOX_AUTOCLOSE
	end
GoldenrodRaidoTower2_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_5_HNS, GoldenrodCity_RadioTower_2F_Text_GruntM6Seen, GoldenrodCity_RadioTower_2F_Text_GruntM6Beaten
	msgbox GoldenrodCity_RadioTower_2F_Text_GruntM6After, MSGBOX_AUTOCLOSE
	end
GoldenrodRaidoTower2_EventScript_GruntF2::
	trainerbattle_single TRAINER_GRUNT_26_HNS, GoldenrodCity_RadioTower_2F_Text_GruntF2Seen, GoldenrodCity_RadioTower_2F_Text_GruntF2Beaten
	msgbox GoldenrodCity_RadioTower_2F_Text_GruntF2After, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_RadioTower_2F_EventScript_Sign1::
	lock
	msgbox GoldenrodCity_RadioTower_2F_Text_SalesSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_Sign2::
	lock
	msgbox GoldenrodCity_RadioTower_2F_Text_OakTalkSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_Boy::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_2F_Text_SuperNerd, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_Policeman::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_2F_Text_Policeman, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_Buena::
	lock
	faceplayer
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 6, GoldenrodCity_RadioTower_2F_EventScript_BuenaRocket
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 7, GoldenrodCity_RadioTower_2F_EventScript_BuenaRocket
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 8, GoldenrodCity_RadioTower_2F_EventScript_BuenaRocket
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 9, GoldenrodCity_RadioTower_2F_EventScript_BuenaRocket
	goto_if_set FLAG_DAILY_BUENAS_PASSWORD_GUESSED, GoldenrodCity_RadioTower_2F_EventScript_BuenaAlreadyPlayed
	goto_if_unset FLAG_DAILY_BUENAS_PASSWORD, GoldenrodCity_RadioTower_2F_EventScript_BuenaNoShow
	msgbox GoldenrodCity_RadioTower_2F_Text_BuenaAskPassword, MSGBOX_DEFAULT
	special Special_BuenaPasswordShowMultichoice
	waitstate
	compare VAR_RESULT, 127
	goto_if_eq GoldenrodCity_RadioTower_2F_EventScript_BuenaCancelled
	special Special_BuenaCheckAnswer
	compare VAR_RESULT, TRUE
	goto_if_eq GoldenrodCity_RadioTower_2F_EventScript_BuenaCorrect
	setflag FLAG_DAILY_BUENAS_PASSWORD_GUESSED
	msgbox GoldenrodCity_RadioTower_2F_Text_BuenaWrong, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_BuenaCorrect::
	special Special_BuenaRollReward
	copyvar VAR_0x8004, VAR_RESULT
	checkitemspace VAR_0x8004, 1
	compare VAR_RESULT, FALSE
	goto_if_eq GoldenrodCity_RadioTower_2F_EventScript_BuenaBagFull
	giveitem VAR_0x8004, 1
	setflag FLAG_DAILY_BUENAS_PASSWORD_GUESSED
	msgbox GoldenrodCity_RadioTower_2F_Text_BuenaCorrect, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_BuenaBagFull::
	msgbox GoldenrodCity_RadioTower_2F_Text_BuenaBagFull, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_BuenaCancelled::
	msgbox GoldenrodCity_RadioTower_2F_Text_BuenaComeBack, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_BuenaAlreadyPlayed::
	msgbox GoldenrodCity_RadioTower_2F_Text_BuenaAlreadyPlayed, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_BuenaNoShow::
	msgbox GoldenrodCity_RadioTower_2F_Text_BuenaShowPromo, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_BuenaRocket::
	msgbox RadioTower2FBuenaPasswordIsHelpText, MSGBOX_DEFAULT
	closemessage
	release
	end


GoldenrodCity_RadioTower_2F_EventScript_Teacher::
	lock
	faceplayer
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 6, GoldenrodCity_RadioTower_2F_EventScript_Teacher2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 7, GoldenrodCity_RadioTower_2F_EventScript_Teacher2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 8, GoldenrodCity_RadioTower_2F_EventScript_Teacher2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 9, GoldenrodCity_RadioTower_2F_EventScript_Teacher2
	msgbox GoldenrodCity_RadioTower_2F_Text_Teacher, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_Teacher2::
	msgbox GoldenrodCity_RadioTower_2F_Text_TeacherRockets, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_Jigglypuff::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_JIGGLYPUFF, CRY_MODE_NORMAL
	msgbox GoldenrodCity_RadioTower_2F_Text_Jigglypuff, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RadioTower2FBuenaPasswordIsHelpText:
	.string "Buena: Was fragst du da?\n"
	.string "Wie das heutige Passwort lautet?\p"
	.string "Zu Hilfe natürlich!$"

GoldenrodCity_RadioTower_2F_Text_SuperNerd:
	.string "Du kannst überall Radio hören.\n"
	.string "Stell einfach ein!$"

GoldenrodCity_RadioTower_2F_Text_Policeman:
	.string "Zutritt hinter diesem Punkt\n"
	.string "verboten.$"

GoldenrodCity_RadioTower_2F_Text_Teacher:
	.string "Wiegenlieder im Radio lassen\n"
	.string "Pokémon einschlafen.$"

GoldenrodCity_RadioTower_2F_Text_TeacherRockets:
	.string "Was versprechen sie sich bloß davon,\n"
	.string "den Radiosender zu besetzen?$"

GoldenrodCity_RadioTower_2F_Text_Jigglypuff:
	.string "Pummeluff: Pummel… uff…$"

GoldenrodCity_RadioTower_2F_Text_BlackBelt1:
	.string "Der Zutritt zu den höheren Stockwerken\n"
	.string "ist nur befugtem Personal erlaubt…\p"
	.string "Aber das war nicht immer so! Irgendwas\n"
	.string "stimmt mit unserem Intendanten nicht…$"

GoldenrodCity_RadioTower_2F_Text_BlackBelt2:
	.string "Alle Teile des Senders können frei \n"
	.string "besichtigt werden! Unser Intendant ist\l"
	.string "wieder sein gutmütiges altes Selbst!$"

GoldenrodCity_RadioTower_2F_Text_GruntM4Seen:
	.string "Vor drei Jahren war Team Rocket\n"
	.string "gezwungen, sich aufzulösen…\p"
	.string "Aber unser Comeback ist nur noch\n"
	.string "eine Frage der Zeit!$"

GoldenrodCity_RadioTower_2F_Text_GruntM4Beaten:
	.string "Pah! Keine Zeit für\n"
	.string "Sentimentalitäten!$"

GoldenrodCity_RadioTower_2F_Text_GruntM4After:
	.string "Wir lassen es nicht zu, dass du\n"
	.string "unsere Pläne durchkreuzt!$"

GoldenrodCity_RadioTower_2F_Text_GruntM5Seen:
	.string "Wir sind Team Rocket, die\n"
	.string "Ausbeuter von Pokémon!\p"
	.string "Wir lieben das Böse!\n"
	.string "Na, Angst?$"

GoldenrodCity_RadioTower_2F_Text_GruntM5Beaten:
	.string "Du glaubst wohl, du\n"
	.string "wärst ein Held?$"

GoldenrodCity_RadioTower_2F_Text_GruntM5After:
	.string "Genau genommen tun wir gar\n"
	.string "nichts Böses.\l"
	.string "Wir tun einfach, was wir wollen.$"

GoldenrodCity_RadioTower_2F_Text_GruntM6Seen:
	.string "He! Halte dich aus\n"
	.string "unseren Angelegenheiten raus!$"

GoldenrodCity_RadioTower_2F_Text_GruntM6Beaten:
	.string "Uff. Mir reicht's.$"

GoldenrodCity_RadioTower_2F_Text_GruntM6After:
	.string "Unser Vorstand will die Macht an\n"
	.string "sich reißen. Er hat Großes vor.\l"
	.string "Ich frage mich, was das wohl ist?$"

GoldenrodCity_RadioTower_2F_Text_GruntF2Seen:
	.string "Hehehe!\n"
	.string "Nein, wie öde… hier das Ruder zu\l"
	.string "übernehmen, war viel zu einfach!\p"
	.string "Du da! Willst du mich nicht unterhalten?$"

GoldenrodCity_RadioTower_2F_Text_GruntF2Beaten:
	.string "W-wer bist du denn?$"

GoldenrodCity_RadioTower_2F_Text_GruntF2After:
	.string "Du bist stärker als ich?!?\p"
	.string "Na warte! Das wird dir noch leidtun!$"

GoldenrodCity_RadioTower_2F_Text_BuenaShowPromo:
	.string "Buena: Hör in meine\n"
	.string "Passwort-Show rein!$"
	.string "Höre das heutige\n"
	.string "Passwort!$"

GoldenrodCity_RadioTower_2F_Text_BuenaAskPassword:
	.string "Buena: Hey du!\p"
	.string "So, weißt du das heutige\n"
	.string "Passwort?\p"
	.string "OK! Wie lautet es?$"

GoldenrodCity_RadioTower_2F_Text_BuenaCorrect:
	.string "Buena: Richtig!\p"
	.string "Hier, nimm {STR_VAR_1}\n"
	.string "als deinen Preis!$"

GoldenrodCity_RadioTower_2F_Text_BuenaWrong:
	.string "Buena: Bzzt! Schade!\p"
	.string "Versuche es wieder morgen!$"

GoldenrodCity_RadioTower_2F_Text_BuenaComeBack:
	.string "Buena: Keine Idee?\n"
	.string "Komm später wieder!$"

GoldenrodCity_RadioTower_2F_Text_BuenaAlreadyPlayed:
	.string "Buena: Du hast heute bereits\n"
	.string "das Passwort erraten!\p"
	.string "Schalte morgen wieder ein!$"

GoldenrodCity_RadioTower_2F_Text_BuenaBagFull:
	.string "Buena: Du hast es,\n"
	.string "aber deine Tasche ist voll!\p"
	.string "Schaffe etwas platz\n"
	.string "und komm zurück!$"

GoldenrodCity_RadioTower_2F_Text_SalesSign:
	.string "1S: Geschäftsabteilung$"

GoldenrodCity_RadioTower_2F_Text_OakTalkSign:
	.string "Prof. Eichs Pokémon-Talk\p"
	.string "Die heißeste Show im Radio!$"

GoldenrodCity_RadioTower_2F_Text_PokemonRadioSign:
	.string "Überall und jederzeit:\n"
	.string "Pokémon-Radio!$"
