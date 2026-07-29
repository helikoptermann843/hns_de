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
	.string "Scheinbar ist der Duellturm\n"
	.string "{STR_VAR_1} im Moment der\l"
	.string "angesagteste Ort.$"

BattleFrontier_Lounge2_Text_SalonMaidenIsThere::
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-Trainer, die Scott die\n"
	.string "Kampfkoryphäen nennt, ist hier.\p"
	.string "Ein sehr geheimnisvoller Trainer…\n"
	.string "Der Kampfkoloss, der hier alles leitet.$"

BattleFrontier_Lounge2_Text_SalonMaidenSilverMons::
	.string "Bist du schon gegen den Kampfkoloss\n"
	.string "angetreten?\p"
	.string "Er schätzt seine Gegner ab und setzt\n"
	.string "die folgenden drei Pokémon ein:\p"
	.string "Ein PSI-Pokémon, Typ Psycho.\n"
	.string "Ein Vulkan-Pokémon, Typ Feuer.\p"
	.string "Und ein Tagträumer-Pokémon,\n"
	.string "Typ Normal.$"

BattleFrontier_Lounge2_Text_SalonMaidenGoldMons::
	.string "Bist du dem Kampfkoloss schon\n"
	.string "begegnet, wenn er ernsthaft kämpft?\p"
	.string "In dem Fall setzt er folgende Pokémon\n"
	.string "ein:\p"
	.string "Ein Äon-Pokémon, Typ Drache & Psycho.\n"
	.string "Ein Donner-Pokémon, Typ Elektro.\l"
	.string "Und ein Tagträumer-Pokémon,\l"
	.string "Typ Normal.$"

BattleFrontier_Lounge2_Text_DomeAceIsThere::
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-Trainer, die Scott die\n"
	.string "Kampfkoryphäen nennt, ist hier.\p"
	.string "Ein großspuriger Trainer…\n"
	.string "Der Stadionstar, der hier alles leitet.$"

BattleFrontier_Lounge2_Text_DomeAceSilverMons::
	.string "Bist du schon gegen den Stadionstar\n"
	.string "angetreten?\p"
	.string "Er tritt mit folgenden Pokémon gegen\n"
	.string "seine Herausforderer an:\p"
	.string "Ein Drache-Pokémon, Typ Drache & Flug.\n"
	.string "Ein Lehmhüpfer-Pokémon, Typ Wasser\l"
	.string "& Boden.\p"
	.string "Und ein Flamme-Pokémon, Typ\n"
	.string "Feuer & Flug.$"

BattleFrontier_Lounge2_Text_DomeAceGoldMons::
	.string "Bist du schon gegen den Stadionstar\n"
	.string "angetreten, wenn er ernsthaft kämpft?\p"
	.string "Dann zeigt er dem Gegner mit den\n"
	.string "folgenden 3 Pokémon seine Strategie:\p"
	.string "Ein Äon-Pokémon, Typ Drache & Psycho.\n"
	.string "Ein Lehmhüpfer-Pokémon, Typ Wasser\l"
	.string "& Boden.\p"
	.string "Und ein Eisenfuss-Pokémon, Typ\n"
	.string "Stahl & Psycho.$"

BattleFrontier_Lounge2_Text_FactoryHeadIsThere::
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-Trainer, die Scott die\n"
	.string "Kampfkoryphäen nennt, ist hier.\p"
	.string "Ein sehr geheimnisvoller Trainer…\n"
	.string "Der Fabrikleiter, der hier alles leitet.$"

BattleFrontier_Lounge2_Text_FactoryHeadSilverMons::
	.string "Bist du schon gegen den Fabrikleiter\n"
	.string "angetreten?\p"
	.string "Lass mich mal nachdenken… Er geht\n"
	.string "immer mit drei Leih-Pkmn in den Kampf.\p"
	.string "Er kämpft also fast unter den gleichen\n"
	.string "Bedingungen wie du.$"

BattleFrontier_Lounge2_Text_FactoryHeadGoldMons::
	.string "Bist du schon gegen den Fabrikleiter\n"
	.string "angetreten, wenn er ernsthaft kämpft?\p"
	.string "Auch wenn er sich nicht zurückhalten\n"
	.string "will, nimmt er drei Leih-Pokémon mit in\l"
	.string "den Kampf.\p"
	.string "Er kämpft also fast unter den gleichen\n"
	.string "Bedingungen wie du.$"

BattleFrontier_Lounge2_Text_PikeQueenIsThere::
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-Trainer, die Scott die\n"
	.string "Kampfkoryphäen nennt, ist hier.\p"
	.string "Ein sehr geheimnisvoller Trainer…\n"
	.string "Die Pfipitistin, die hier alles leitet.$"

BattleFrontier_Lounge2_Text_PikeQueenSilverMons::
	.string "Bist du schon mal gegen die\n"
	.string "Pfipitistin angetreten?\p"
	.string "Wenn sie gute Laune hat, dann setzt sie\n"
	.string "die folgenden drei Pokémon ein:\p"
	.string "Ein Reißzahn-Pokémon, Typ Gift.\n"
	.string "Ein Schimmel-Pokémon, Typ Käfer &\p"
	.string "Gestein sowie ein Zartheit-Pokémon,\n"
	.string "Typ Wasser.$"

BattleFrontier_Lounge2_Text_PikeQueenGoldMons::
	.string "Bist du mal gegen die Pfipitistin an-\n"
	.string "getreten, wenn sie ernsthaft kämpft?\p"
	.string "Wenn sie schlechte Laune hat, dann\n"
	.string "setzt sie die folgenden 3 Pokémon ein:\p"
	.string "Ein Reißzahn-Pokémon, Typ Gift.\n"
	.string "Ein Stahlboa-Pokémon, Typ Stahl &\p"
	.string "Boden sowie ein Grausam-Pokémon,\n"
	.string "Typ Wasser & Flug.$"

BattleFrontier_Lounge2_Text_ArenaTycoonIsThere::
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-Trainer, die Scott die\n"
	.string "Kampfkoryphäen nennt, ist hier.\p"
	.string "Ein niedlicher Trainer…\n"
	.string "Der Ringmeister, der hier\l"
	.string "alles leitet.$"

BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons::
	.string "Bist du schon mal gegen den\n"
	.string "Ringmeister angetreten?\p"
	.string "Wenn er seinen Gegner abschätzen will,\n"
	.string "setzt er diese drei Pokémon ein:\p"
	.string "Ein Einzelhorn-Pokémon, Typ Käfer &\n"
	.string "Kampf. Ein Mondschein-Pokémon, Typ\p"
	.string "Unlicht sowie ein Häutung-Pokémon,\n"
	.string "Typ Käfer & Geist.$"

BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons::
	.string "Bist du schon mal gegen den\n"
	.string "Ringmeister angetreten, wenn er\l"
	.string "ernsthaft kämpft?\p"
	.string "Er bleibt auch dann noch sehr höflich\n"
	.string "und setzt diese drei Pokémon ein:\p"
	.string "Ein Mondschein-Pokémon, Typ\n"
	.string "Unlicht, ein Schatten-Pokémon, Typ\l"
	.string "Geist & Gift sowie ein Pilz-Pokémon,\l"
	.string "Typ Pflanze & Kampf.$"

BattleFrontier_Lounge2_Text_PalaceMavenIsThere::
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-Trainer, die Scott die\n"
	.string "Kampfkoryphäen nennt, ist hier.\p"
	.string "Ein sehr hinterhältiger Trainer…\n"
	.string "Der Palastregent, der hier alles leitet.$"

BattleFrontier_Lounge2_Text_PalaceMavenSilverMons::
	.string "Bist du schon mal gegen den Palast-\n"
	.string "regenten angetreten?\p"
	.string "Wenn er den Geist seiner Gegner\n"
	.string "abschätzen will, setzt er diese\l"
	.string "3 Pokémon ein:\p"
	.string "Ein Fledermaus-Pokémon, Typ Gift &\n"
	.string "Flug. Ein müßig-Pokémon, Typ\p"
	.string "Normal sowie ein Transport-Pokémon,\n"
	.string "Typ Wasser & Eis.$"

BattleFrontier_Lounge2_Text_PalaceMavenGoldMons::
	.string "Bist du schon mal gegen den Palast-\n"
	.string "regenten angetreten, wenn er\l"
	.string "ernsthaft kämpft?\p"
	.string "Wenn er im Kampf alles geben will, setzt\n"
	.string "er diese drei Pokémon ein:\p"
	.string "Ein Legendäres Pokémon, Typ Feuer.\n"
	.string "Ein müßig-Pokémon, Typ\p"
	.string "Normal sowie ein Polarlicht-Pokémon,\n"
	.string "Typ Wasser.$"

BattleFrontier_Lounge2_Text_PyramidKingIsThere::
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-Trainer, die Scott die\n"
	.string "Kampfkoryphäen nennt, ist hier.\p"
	.string "Ein sehr hitzköpfiger Trainer…\n"
	.string "Der Pyrakönig, der hier alles leitet.$"

BattleFrontier_Lounge2_Text_PyramidKingSilverMons::
	.string "Bist du schon mal gegen den Pyrakönig\n"
	.string "angetreten?\p"
	.string "Wenn er die Kraft seiner Gegner\n"
	.string "abschätzen will, setzt er diese\l"
	.string "3 Pokémon ein:\p"
	.string "Ein Steingipfel-Pokémon, Typ Gestein.\n"
	.string "Ein Eisberg-Pokémon, Typ\p"
	.string "Eis sowie ein Eisen-Pokémon,\n"
	.string "Typ Stahl.$"

BattleFrontier_Lounge2_Text_PyramidKingGoldMons::
	.string "Bist du schon mal gegen den Pyrakönig\n"
	.string "angetreten, wenn er ernsthaft\l"
	.string "kämpft?\p"
	.string "Wenn er vor Kraft fast explodiert,\n"
	.string "setzt er diese drei Pokémon ein:\p"
	.string "Ein Eis-Pokémon, Typ Eis & Flug.\n"
	.string "Ein Elektro-Pokémon, Typ\p"
	.string "Elektro & Flug sowie ein Flamme-\n"
	.string "Pokémon, Typ Feuer & Flug$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice1::
	.string "Natürlich gibt es verschiedene Orte, an\n"
	.string "denen du Doppelkämpfe austragen\l"
	.string "kannst.\p"
	.string "Aber die Doppelkämpfe des\n"
	.string "Duellturms sind klasse!\p"
	.string "Dort kannst du lernen, wie die Doppel-\n"
	.string "kämpfe hier in der Kampfzone\l"
	.string "ausgetragen werden.$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice2::
	.string "Beobachte dich selbst und lerne dazu.\p"
	.string "Die Trainer hier haben Strategien\n"
	.string "entwickelt, die sie nur hier in\l"
	.string "Doppelkämpfen einsetzen!$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice3::
	.string "Sobald du Selbstvertrauen gewonnen\n"
	.string "hast und du dich bei Doppelkämpfen\l"
	.string "auskennst, solltest du andere Orte\l"
	.string "aufsuchen, die diese Kämpfe anbieten.$"

BattleFrontier_Lounge2_Text_MultiBattleAdvice::
	.string "In der Teamlounge trifft man auf die\n"
	.string "unterschiedlichsten Trainer.\p"
	.string "Stell dir mal vor! Du triffst vielleicht\n"
	.string "auf einen Freund oder Fans!\l"
	.string "Schau dich gut um!$"

BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice::
	.string "Begleitet dich ein Freund, solltet ihr\n"
	.string "den Link-Multikampf-Raum aufsuchen.\p"
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

