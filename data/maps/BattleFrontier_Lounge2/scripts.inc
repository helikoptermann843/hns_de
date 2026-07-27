BattleFrontier_Lounge2_MapScripts::
	.byte 0

@ This NPC gives hints about a random facility or battle mode.
@ For battle modes he gives generic advice
@ For facilities, depending on how far the player has progressed he will say either
@    The name of the Frontier Brain there
@    The type and description of the 3 pokemon they use in their silver battle
@    The type and description of the 3 pokemon they use in their gold battle
BattleFrontier_Lounge2_EventScript_FrontierManiac::
	lock
	faceplayer
	goto_if_set FLAG_MET_BATTLE_FRONTIER_MANIAC, BattleFrontier_Lounge2_EventScript_AlreadyMetManiac
	setflag FLAG_MET_BATTLE_FRONTIER_MANIAC
	msgbox BattleFrontier_Lounge2_Text_FrontierManiacIntro, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
	end

BattleFrontier_Lounge2_EventScript_AlreadyMetManiac::
	msgbox BattleFrontier_Lounge2_Text_SwingByForTheLatestWord, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
	end

BattleFrontier_Lounge2_EventScript_GiveAdvice::
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_SINGLES, BattleFrontier_Lounge2_EventScript_BufferSingle
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_DOUBLES, BattleFrontier_Lounge2_EventScript_BufferDouble
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_MULTIS, BattleFrontier_Lounge2_EventScript_BufferMulti
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK, BattleFrontier_Lounge2_EventScript_BufferMultiLink
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME, BattleFrontier_Lounge2_EventScript_BufferBattleDome
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_FACTORY, BattleFrontier_Lounge2_EventScript_BufferBattleFactory
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PALACE, BattleFrontier_Lounge2_EventScript_BufferBattlePalace
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_ARENA, BattleFrontier_Lounge2_EventScript_BufferBattleArena
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PIKE, BattleFrontier_Lounge2_EventScript_BufferBattlePike
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PYRAMID, BattleFrontier_Lounge2_EventScript_BufferBattlePyramid
@ <= FRONTIER_MANIAC_TOWER_LINK is any Battle Tower mode
	call_if_le VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK, BattleFrontier_Lounge2_EventScript_BattleTowerNews
@ >= FRONTIER_MANIAC_DOME is any facility other than Battle Tower
	call_if_ge VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME, BattleFrontier_Lounge2_EventScript_FacilityNews
	special ShowFrontierManiacMessage
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge2_EventScript_BattleTowerNews::
	msgbox BattleFrontier_Lounge2_Text_BattleTowerIsHottest, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge2_EventScript_FacilityNews::
	msgbox BattleFrontier_Lounge2_Text_FacilityIsHottest, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge2_EventScript_BufferSingle::
	bufferstdstring STR_VAR_1, STDSTRING_SINGLE
	return

BattleFrontier_Lounge2_EventScript_BufferDouble::
	bufferstdstring STR_VAR_1, STDSTRING_DOUBLE
	return

BattleFrontier_Lounge2_EventScript_BufferMulti::
	bufferstdstring STR_VAR_1, STDSTRING_MULTI
	return

BattleFrontier_Lounge2_EventScript_BufferMultiLink::
	bufferstdstring STR_VAR_1, STDSTRING_MULTI_LINK
	return

BattleFrontier_Lounge2_EventScript_BufferBattleDome::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_DOME
	return

BattleFrontier_Lounge2_EventScript_BufferBattleFactory::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_FACTORY
	return

BattleFrontier_Lounge2_EventScript_BufferBattlePalace::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PALACE
	return

BattleFrontier_Lounge2_EventScript_BufferBattleArena::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_ARENA
	return

BattleFrontier_Lounge2_EventScript_BufferBattlePike::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PIKE
	return

BattleFrontier_Lounge2_EventScript_BufferBattlePyramid::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PYRAMID
	return

BattleFrontier_Lounge2_EventScript_Maniac1::
	lock
	msgbox BattleFrontier_Lounge2_Text_NewsGatheringPower, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_Maniac2::
	lock
	msgbox BattleFrontier_Lounge2_Text_AmazingPowersOfObservation, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_Maniac3::
	lock
	msgbox BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_TriathleteF::
	msgbox BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe, MSGBOX_NPC
	end

BattleFrontier_Lounge2_Text_FrontierManiacIntro::
	.string "Halli hallo! Wenn du Neuigkeiten über\n"
	.string "die Kampfzone erfahren willst,\l"
	.string "bin ich die Nummer eins für dich!\p"
	.string "Ich bin der Kampfzonen-maniac.\p"
	.string "Nur zur Sicherheit: Du bist doch ein\n"
	.string "Trainer, oder?\p"
	.string "Ich werde dir die neuesten Neuigkeiten\n"
	.string "über die Kampfzone erzählen!$"

BattleFrontier_Lounge2_Text_SwingByForTheLatestWord::
	.string "Halli hallo! Du willst bestimmt die\n"
	.string "neuesten Neuigkeiten aus mir\l"
	.string "herauspressen! Hab ich Recht?$"

@ Unused
BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight::
	.string "Well? Well? Well?\p"
	.string "I'm sure my information's been\n"
	.string "seriously useful to you, right?$"

BattleFrontier_Lounge2_Text_FacilityIsHottest::
	.string "Mal sehen…\p"
	.string "Scheinbar ist {STR_VAR_1}\n"
	.string "im Moment der angesagteste Ort.$"

BattleFrontier_Lounge2_Text_BattleTowerIsHottest::
	.string "Mal sehen…\p"
	.string "Scheinbar ist der DUELLTURM\n"
	.string "{STR_VAR_1} im Moment der\l"
	.string "angesagteste Ort.$"

BattleFrontier_Lounge2_Text_SalonMaidenIsThere::
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-TRAINER, die SCOTT die\n"
	.string "KAMPFKORYPHÄEN nennt, ist hier.\p"
	.string "Ein sehr geheimnisvoller TRAINER…\n"
	.string "Der KAMPFKOLOSS, der hier alles leitet.$"

BattleFrontier_Lounge2_Text_SalonMaidenSilverMons::
	.string "Bist du schon gegen den KAMPFKOLOSS\n"
	.string "angetreten?\p"
	.string "Er schätzt seine Gegner ab und setzt\n"
	.string "die folgenden drei POKéMON ein:\p"
	.string "Ein PSI-POKéMON, Typ PSYCHO.\n"
	.string "Ein VULKAN-POKéMON, Typ FEUER.\p"
	.string "Und ein TAGTRÄUMER-POKéMON,\n"
	.string "Typ NORMAL.$"

BattleFrontier_Lounge2_Text_SalonMaidenGoldMons::
	.string "Bist du dem KAMPFKOLOSS schon\n"
	.string "begegnet, wenn er ernsthaft kämpft?\p"
	.string "In dem Fall setzt er folgende POKéMON\n"
	.string "ein:\p"
	.string "Ein ÄON-POKéMON, Typ DRACHE & PSYCHO.\n"
	.string "Ein DONNER-POKéMON, Typ ELEKTRO.\l"
	.string "Und ein TAGTRÄUMER-POKéMON,\l"
	.string "Typ NORMAL.$"

BattleFrontier_Lounge2_Text_DomeAceIsThere::
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-TRAINER, die SCOTT die\n"
	.string "KAMPFKORYPHÄEN nennt, ist hier.\p"
	.string "Ein großspuriger TRAINER…\n"
	.string "Der STADIONSTAR, der hier alles leitet.$"

BattleFrontier_Lounge2_Text_DomeAceSilverMons::
	.string "Bist du schon gegen den STADIONSTAR\n"
	.string "angetreten?\p"
	.string "Er tritt mit folgenden POKéMON gegen\n"
	.string "seine Herausforderer an:\p"
	.string "Ein DRACHE-POKéMON, Typ DRACHE & FLUG.\n"
	.string "Ein LEHMHÜPFER-POKéMON, Typ WASSER\l"
	.string "& BODEN.\p"
	.string "Und ein FLAMME-POKéMON, Typ\n"
	.string "FEUER & FLUG.$"

BattleFrontier_Lounge2_Text_DomeAceGoldMons::
	.string "Bist du schon gegen den STADIONSTAR\n"
	.string "angetreten, wenn er ernsthaft kämpft?\p"
	.string "Dann zeigt er dem Gegner mit den\n"
	.string "folgenden 3 POKéMON seine Strategie:\p"
	.string "Ein ÄON-POKéMON, Typ DRACHE & PSYCHO.\n"
	.string "Ein LEHMHÜPFER-POKéMON, Typ WASSER\l"
	.string "& BODEN.\p"
	.string "Und ein EISENFUSS-POKéMON, Typ\n"
	.string "STAHL & PSYCHO.$"

BattleFrontier_Lounge2_Text_FactoryHeadIsThere::
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-TRAINER, die SCOTT die\n"
	.string "KAMPFKORYPHÄEN nennt, ist hier.\p"
	.string "Ein sehr geheimnisvoller TRAINER…\n"
	.string "Der FABRIKLEITER, der hier alles leitet.$"

BattleFrontier_Lounge2_Text_FactoryHeadSilverMons::
	.string "Bist du schon gegen den FABRIKLEITER\n"
	.string "angetreten?\p"
	.string "Lass mich mal nachdenken… Er geht\n"
	.string "immer mit drei Leih-PKMN in den Kampf.\p"
	.string "Er kämpft also fast unter den gleichen\n"
	.string "Bedingungen wie du.$"

BattleFrontier_Lounge2_Text_FactoryHeadGoldMons::
	.string "Bist du schon gegen den FABRIKLEITER\n"
	.string "angetreten, wenn er ernsthaft kämpft?\p"
	.string "Auch wenn er sich nicht zurückhalten\n"
	.string "will, nimmt er drei Leih-POKéMON mit in\l"
	.string "den Kampf.\p"
	.string "Er kämpft also fast unter den gleichen\n"
	.string "Bedingungen wie du.$"

BattleFrontier_Lounge2_Text_PikeQueenIsThere::
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-TRAINER, die SCOTT die\n"
	.string "KAMPFKORYPHÄEN nennt, ist hier.\p"
	.string "Ein sehr geheimnisvoller TRAINER…\n"
	.string "Die PFIPITISTIN, die hier alles leitet.$"

BattleFrontier_Lounge2_Text_PikeQueenSilverMons::
	.string "Bist du schon mal gegen die\n"
	.string "PFIPITISTIN angetreten?\p"
	.string "Wenn sie gute Laune hat, dann setzt sie\n"
	.string "die folgenden drei POKéMON ein:\p"
	.string "Ein REISSZAHN-POKéMON, Typ GIFT.\n"
	.string "Ein SCHIMMEL-POKéMON, Typ KÄFER &\p"
	.string "GESTEIN sowie ein ZARTHEIT-POKéMON,\n"
	.string "Typ WASSER.$"

BattleFrontier_Lounge2_Text_PikeQueenGoldMons::
	.string "Bist du mal gegen die PFIPITISTIN an-\n"
	.string "getreten, wenn sie ernsthaft kämpft?\p"
	.string "Wenn sie schlechte Laune hat, dann\n"
	.string "setzt sie die folgenden 3 POKéMON ein:\p"
	.string "Ein REISSZAHN-POKéMON, Typ GIFT.\n"
	.string "Ein STAHLBOA-POKéMON, Typ STAHL &\p"
	.string "BODEN sowie ein GRAUSAM-POKéMON,\n"
	.string "Typ WASSER & FLUG.$"

BattleFrontier_Lounge2_Text_ArenaTycoonIsThere::
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-TRAINER, die SCOTT die\n"
	.string "KAMPFKORYPHÄEN nennt, ist hier.\p"
	.string "Ein niedlicher TRAINER…\n"
	.string "Der RINGMEISTER, der hier\l"
	.string "alles leitet.$"

BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons::
	.string "Bist du schon mal gegen den\n"
	.string "RINGMEISTER angetreten?\p"
	.string "Wenn er seinen Gegner abschätzen will,\n"
	.string "setzt er diese drei POKéMON ein:\p"
	.string "Ein EINZELHORN-POKéMON, Typ KÄFER &\n"
	.string "KAMPF. Ein MONDSCHEIN-POKéMON, Typ\p"
	.string "UNLICHT sowie ein HÄUTUNG-POKéMON,\n"
	.string "Typ KÄFER & GEIST.$"

BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons::
	.string "Bist du schon mal gegen den\n"
	.string "RINGMEISTER angetreten, wenn er\l"
	.string "ernsthaft kämpft?\p"
	.string "Er bleibt auch dann noch sehr höflich\n"
	.string "und setzt diese drei POKéMON ein:\p"
	.string "Ein MONDSCHEIN-POKéMON, Typ\n"
	.string "UNLICHT, ein SCHATTEN-POKéMON, Typ\l"
	.string "GEIST & GIFT sowie ein PILZ-POKéMON,\l"
	.string "Typ PFLANZE & KAMPF.$"

BattleFrontier_Lounge2_Text_PalaceMavenIsThere::
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-TRAINER, die SCOTT die\n"
	.string "KAMPFKORYPHÄEN nennt, ist hier.\p"
	.string "Ein sehr hinterhältiger TRAINER…\n"
	.string "Der PALASTREGENT, der hier alles leitet.$"

BattleFrontier_Lounge2_Text_PalaceMavenSilverMons::
	.string "Bist du schon mal gegen den PALAST-\n"
	.string "REGENTEN angetreten?\p"
	.string "Wenn er den Geist seiner Gegner\n"
	.string "abschätzen will, setzt er diese\l"
	.string "3 POKéMON ein:\p"
	.string "Ein FLEDERMAUS-POKéMON, Typ GIFT &\n"
	.string "FLUG. Ein MÜSSIG-POKéMON, Typ\p"
	.string "NORMAL sowie ein TRANSPORT-POKéMON,\n"
	.string "Typ WASSER & EIS.$"

BattleFrontier_Lounge2_Text_PalaceMavenGoldMons::
	.string "Bist du schon mal gegen den PALAST-\n"
	.string "REGENTEN angetreten, wenn er\l"
	.string "ernsthaft kämpft?\p"
	.string "Wenn er im Kampf alles geben will, setzt\n"
	.string "er diese drei POKéMON ein:\p"
	.string "Ein LEGENDÄRES POKéMON, Typ FEUER.\n"
	.string "Ein MÜSSIG-POKéMON, Typ\p"
	.string "NORMAL sowie ein POLARLICHT-POKéMON,\n"
	.string "Typ WASSER.$"

BattleFrontier_Lounge2_Text_PyramidKingIsThere::
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-TRAINER, die SCOTT die\n"
	.string "KAMPFKORYPHÄEN nennt, ist hier.\p"
	.string "Ein sehr hitzköpfiger TRAINER…\n"
	.string "Der PYRAKÖNIG, der hier alles leitet.$"

BattleFrontier_Lounge2_Text_PyramidKingSilverMons::
	.string "Bist du schon mal gegen den PYRAKÖNIG\n"
	.string "angetreten?\p"
	.string "Wenn er die Kraft seiner Gegner\n"
	.string "abschätzen will, setzt er diese\l"
	.string "3 POKéMON ein:\p"
	.string "Ein STEINGIPFEL-POKéMON, Typ GESTEIN.\n"
	.string "Ein EISBERG-POKéMON, Typ\p"
	.string "EIS sowie ein EISEN-POKéMON,\n"
	.string "Typ STAHL.$"

BattleFrontier_Lounge2_Text_PyramidKingGoldMons::
	.string "Bist du schon mal gegen den PYRAKÖNIG\n"
	.string "angetreten, wenn er ernsthaft\l"
	.string "kämpft?\p"
	.string "Wenn er vor Kraft fast explodiert,\n"
	.string "setzt er diese drei POKéMON ein:\p"
	.string "Ein EIS-POKéMON, Typ EIS & FLUG.\n"
	.string "Ein ELEKTRO-POKéMON, Typ\p"
	.string "ELEKTRO & FLUG sowie ein FLAMME-\n"
	.string "POKéMON, Typ FEUER & FLUG$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice1::
	.string "Natürlich gibt es verschiedene Orte, an\n"
	.string "denen du DOPPELKÄMPFE austragen\l"
	.string "kannst.\p"
	.string "Aber die DOPPELKÄMPFE des\n"
	.string "DUELLTURMs sind klasse!\p"
	.string "Dort kannst du lernen, wie die DOPPEL-\n"
	.string "KÄMPFE hier in der KAMPFZONE\l"
	.string "ausgetragen werden.$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice2::
	.string "Beobachte dich selbst und lerne dazu.\p"
	.string "Die TRAINER hier haben Strategien\n"
	.string "entwickelt, die sie nur hier in\l"
	.string "DOPPELKÄMPFEN einsetzen!$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice3::
	.string "Sobald du Selbstvertrauen gewonnen\n"
	.string "hast und du dich bei DOPPELKÄMPFEN\l"
	.string "auskennst, solltest du andere Orte\l"
	.string "aufsuchen, die diese Kämpfe anbieten.$"

BattleFrontier_Lounge2_Text_MultiBattleAdvice::
	.string "In der TEAMLOUNGE trifft man auf die\n"
	.string "unterschiedlichsten TRAINER.\p"
	.string "Stell dir mal vor! Du triffst vielleicht\n"
	.string "auf einen Freund oder Fans!\l"
	.string "Schau dich gut um!$"

BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice::
	.string "Begleitet dich ein Freund, solltet ihr\n"
	.string "den LINK-MULTIKAMPF-Raum aufsuchen.\p"
	.string "Trittst du mit einem starken Freund\n"
	.string "an, sind auch deine Gegner stark!$"

BattleFrontier_Lounge2_Text_NewsGatheringPower::
	.string "Was für ein Talent, Neuigkeiten aufzu-\n"
	.string "spüren! Niemand kann meinem Mentor\l"
	.string "darin das Wasser reichen!!!$"

BattleFrontier_Lounge2_Text_AmazingPowersOfObservation::
	.string "Was für eine Beobachtungsgabe!\n"
	.string "Niemand kann meinem Mentor\l"
	.string "darin das Wasser reichen!!!$"

BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion::
	.string "Was für eine Überzeugungskraft!\n"
	.string "Niemand kann meinem Mentor\l"
	.string "darin das Wasser reichen!!!$"

BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe::
	.string "Was ist dies für ein Ort?\n"
	.string "Er macht mir Angst…$"

