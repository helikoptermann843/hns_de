BattleFrontier_Lounge2_hns_MapScripts::
	.byte 0

@ This NPC gives hints about a random facility or battle mode.
@ For battle modes he gives generic advice
@ For facilities, depending on how far the player has progressed he will say either
@    The name of the Frontier Brain there
@    The type and description of the 3 pokemon they use in their silver battle
@    The type and description of the 3 pokemon they use in their gold battle
BattleFrontier_Lounge2_EventScript_FrontierManiac_hns::
	lock
	faceplayer
	goto_if_set FLAG_MET_BATTLE_FRONTIER_MANIAC, BattleFrontier_Lounge2_EventScript_AlreadyMetManiac_hns
	setflag FLAG_MET_BATTLE_FRONTIER_MANIAC
	msgbox BattleFrontier_Lounge2_Text_FrontierManiacIntro_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_hns
	end

BattleFrontier_Lounge2_EventScript_AlreadyMetManiac_hns::
	msgbox BattleFrontier_Lounge2_Text_SwingByForTheLatestWord_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_hns
	end

BattleFrontier_Lounge2_EventScript_GiveAdvice_hns::
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_SINGLES, BattleFrontier_Lounge2_EventScript_BufferSingle_hns
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_DOUBLES, BattleFrontier_Lounge2_EventScript_BufferDouble_hns
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_MULTIS, BattleFrontier_Lounge2_EventScript_BufferMulti_hns
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK, BattleFrontier_Lounge2_EventScript_BufferMulti_hnsLink_hns
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME, BattleFrontier_Lounge2_EventScript_BufferBattleDome_hns
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_FACTORY, BattleFrontier_Lounge2_EventScript_BufferBattleFactory_hns
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PALACE, BattleFrontier_Lounge2_EventScript_BufferBattlePalace_hns
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_ARENA, BattleFrontier_Lounge2_EventScript_BufferBattleArena_hns
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PIKE, BattleFrontier_Lounge2_EventScript_BufferBattlePike_hns
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PYRAMID, BattleFrontier_Lounge2_EventScript_BufferBattlePyramid_hns
@ <= FRONTIER_MANIAC_TOWER_LINK is any Battle Tower mode
	call_if_le VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK, BattleFrontier_Lounge2_EventScript_BattleTowerNews_hns
@ >= FRONTIER_MANIAC_DOME is any facility other than Battle Tower
	call_if_ge VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME, BattleFrontier_Lounge2_EventScript_FacilityNews_hns
	special ShowFrontierManiacMessage
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge2_EventScript_BattleTowerNews_hns::
	msgbox BattleFrontier_Lounge2_Text_BattleTowerIsHottest_hns, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge2_EventScript_FacilityNews_hns::
	msgbox BattleFrontier_Lounge2_Text_FacilityIsHottest_hns, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge2_EventScript_BufferSingle_hns::
	bufferstdstring STR_VAR_1, STDSTRING_SINGLE
	return

BattleFrontier_Lounge2_EventScript_BufferDouble_hns::
	bufferstdstring STR_VAR_1, STDSTRING_DOUBLE
	return

BattleFrontier_Lounge2_EventScript_BufferMulti_hns::
	bufferstdstring STR_VAR_1, STDSTRING_MULTI
	return

BattleFrontier_Lounge2_EventScript_BufferMulti_hnsLink_hns::
	bufferstdstring STR_VAR_1, STDSTRING_MULTI_LINK
	return

BattleFrontier_Lounge2_EventScript_BufferBattleDome_hns::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_DOME
	return

BattleFrontier_Lounge2_EventScript_BufferBattleFactory_hns::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_FACTORY
	return

BattleFrontier_Lounge2_EventScript_BufferBattlePalace_hns::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PALACE
	return

BattleFrontier_Lounge2_EventScript_BufferBattleArena_hns::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_ARENA
	return

BattleFrontier_Lounge2_EventScript_BufferBattlePike_hns::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PIKE
	return

BattleFrontier_Lounge2_EventScript_BufferBattlePyramid_hns::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PYRAMID
	return

BattleFrontier_Lounge2_EventScript_Maniac1_hns::
	lock
	msgbox BattleFrontier_Lounge2_Text_NewsGatheringPower_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_Maniac2_hns::
	lock
	msgbox BattleFrontier_Lounge2_Text_AmazingPowersOfObservation_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_Maniac3_hns::
	lock
	msgbox BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_TriathleteF_hns::
	msgbox BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe_hns, MSGBOX_NPC
	end

BattleFrontier_Lounge2_Text_FrontierManiacIntro_hns::
	.string "Howdy! In Sachen KAMPFGRENZE-News\n"
	.string "bin ich die Nr. 1.\p"
	.string "Denk an mich als den\n"
	.string "GRENZ-NARREN.\p"
	.string "Nur zur Sicherheit: Du bist doch\n"
	.string "ein TRAINER, oder?\p"
	.string "Ich teile gern die heißesten News\n"
	.string "über die KAMPFGRENZE mit dir.$"

BattleFrontier_Lounge2_Text_SwingByForTheLatestWord_hns::
	.string "Howdy! Bist du vorbeigekommen, um\n"
	.string "mich nach den neuesten Infos\l"
	.string "auszuquetschen? Na gut!$"

@ Unused
BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight_hns::
	.string "Na? Na? Na?\p"
	.string "Meine Infos waren dir doch sicher\n"
	.string "richtig nützlich, oder?$"

BattleFrontier_Lounge2_Text_FacilityIsHottest_hns::
	.string "Mal sehen…\p"
	.string "Es klingt, als wäre {STR_VAR_1}\n"
	.string "gerade der angesagteste Ort.$"

BattleFrontier_Lounge2_Text_BattleTowerIsHottest_hns::
	.string "Mal sehen…\p"
	.string "Es klingt, als wäre der DUELLTURM\n"
	.string "{STR_VAR_1} gerade am heißesten.$"

BattleFrontier_Lounge2_Text_SalonMaidenIsThere_hns::
	.string "Das wusstest du bestimmt nicht!\p"
	.string "Einer der Toptrainer, die SCOTT\n"
	.string "GRENZGENIES nennt, ist dort.\p"
	.string "Es ist diese geheimnisvolle TRAINERIN\n"
	.string "namens KAMPFKOLOSS, die das Ding leitet.$"

BattleFrontier_Lounge2_Text_SalonMaidenSilverMons_hns::
	.string "Hast du schon gegen den KAMPFKOLOSS\n"
	.string "gekämpft?\p"
	.string "Wenn sie ihren Gegner einschätzt,\n"
	.string "setzt sie angeblich diese POKÉMON ein:\p"
	.string "Ein PSI-POKÉMON vom Typ Psycho,\n"
	.string "ein VULKAN-POKÉMON vom Typ Feuer\l"
	.string "und ein SCHLAF-POKÉMON vom Typ Normal.$"

BattleFrontier_Lounge2_Text_SalonMaidenGoldMons_hns::
	.string "Hast du schon gegen den KAMPFKOLOSS\n"
	.string "gekämpft, wenn sie es ernst meint?\p"
	.string "Wenn sie alles gibt, setzt sie\n"
	.string "angeblich diese POKÉMON ein:\p"
	.string "Ein EWON-POKÉMON vom Typ Drache &\n"
	.string "Psycho, ein DONNER-POKÉMON vom Typ\l"
	.string "Elektro und ein SCHLAF-POKÉMON\l"
	.string "vom Typ Normal.$"

BattleFrontier_Lounge2_Text_DomeAceIsThere_hns::
	.string "Das wusstest du bestimmt nicht!\p"
	.string "Einer der Toptrainer, die SCOTT\n"
	.string "GRENZGENIES nennt, ist dort.\p"
	.string "Es ist dieser extravagante TRAINER\n"
	.string "namens KUPPEL-ASS, der das Ding leitet.$"

BattleFrontier_Lounge2_Text_DomeAceSilverMons_hns::
	.string "Hast du schon gegen das KUPPEL-ASS\n"
	.string "gekämpft?\p"
	.string "Wenn er den Gegner unterschätzt,\n"
	.string "setzt er diese drei POKÉMON ein:\p"
	.string "Ein DRACHEN-POKÉMON vom Typ Drache\n"
	.string "& Flug, ein SCHLAMMFISCH-POKÉMON\l"
	.string "vom Typ Wasser & Boden und ein\l"
	.string "FLAMMEN-POKÉMON vom Typ Feuer & Flug.$"

BattleFrontier_Lounge2_Text_DomeAceGoldMons_hns::
	.string "Hast du schon gegen das KUPPEL-ASS\n"
	.string "gekämpft, wenn er es ernst meint?\p"
	.string "Wenn er seine Strategie zeigt,\n"
	.string "setzt er diese drei POKÉMON ein:\p"
	.string "Ein EWON-POKÉMON vom Typ Drache &\n"
	.string "Flug, ein SCHLAMMFISCH-POKÉMON vom\l"
	.string "Typ Wasser & Boden und ein EISENBEIN-\l"
	.string "POKÉMON vom Typ Stahl & Psycho.$"

BattleFrontier_Lounge2_Text_FactoryHeadIsThere_hns::
	.string "Das wusstest du bestimmt nicht!\p"
	.string "Einer der Toptrainer, die SCOTT\n"
	.string "GRENZGENIES nennt, ist dort.\p"
	.string "Es ist dieser schräge TRAINER\n"
	.string "namens FABRIKCHEF, der das Ding leitet.$"

BattleFrontier_Lounge2_Text_FactoryHeadSilverMons_hns::
	.string "Hast du schon gegen den FABRIKCHEF\n"
	.string "gekämpft?\p"
	.string "Lass mich überlegen… Im Kampf\n"
	.string "wählt er einfach drei Leih-POKÉMON.\p"
	.string "Er kämpft unter ziemlich denselben\n"
	.string "Bedingungen wie du.$"

BattleFrontier_Lounge2_Text_FactoryHeadGoldMons_hns::
	.string "Hast du schon gegen den FABRIKCHEF\n"
	.string "gekämpft, wenn er es ernst meint?\p"
	.string "Auch wenn er alles gibt, wählt er\n"
	.string "noch drei Leih-POKÉMON.\p"
	.string "Er kämpft unter nahezu denselben\n"
	.string "Bedingungen wie du.$"

BattleFrontier_Lounge2_Text_PikeQueenIsThere_hns::
	.string "Das wusstest du bestimmt nicht!\p"
	.string "Einer der Toptrainer, die SCOTT\n"
	.string "GRENZGENIES nennt, ist dort.\p"
	.string "Es ist diese furchteinflößende\n"
	.string "TRAINERIN namens PIKENKÖNIGIN,\l"
	.string "die das Ding leitet.$"

BattleFrontier_Lounge2_Text_PikeQueenSilverMons_hns::
	.string "Hast du schon gegen die\n"
	.string "PIKENKÖNIGIN gekämpft?\p"
	.string "Wenn sie gut gelaunt ist, soll sie\n"
	.string "diese drei POKÉMON einsetzen:\p"
	.string "Ein GIFTSCHLANGEN-POKÉMON vom Typ\n"
	.string "Gift, ein SCHIMMEL-POKÉMON vom Typ\l"
	.string "Käfer & Gestein und ein ZÄRTLICHKEITS-\l"
	.string "POKÉMON vom Typ Wasser.$"

BattleFrontier_Lounge2_Text_PikeQueenGoldMons_hns::
	.string "Hast du schon gegen die\n"
	.string "PIKENKÖNIGIN gekämpft, wenn sie\l"
	.string "es ernst meint?\p"
	.string "Wenn sie richtig genervt ist, soll\n"
	.string "sie diese drei POKÉMON einsetzen:\p"
	.string "Ein GIFTSCHLANGEN-POKÉMON vom Typ\n"
	.string "Gift, ein EISENSCHLANGEN-POKÉMON vom\l"
	.string "Typ Stahl & Boden und ein GRÄSSLICH-\l"
	.string "POKÉMON vom Typ Wasser & Flug.$"

BattleFrontier_Lounge2_Text_ArenaTycoonIsThere_hns::
	.string "Das wusstest du bestimmt nicht!\p"
	.string "Einer der Toptrainer, die SCOTT\n"
	.string "GRENZGENIES nennt, ist dort.\p"
	.string "Es ist diese süße TRAINERIN namens\n"
	.string "ARENA-TYCOON, die das Ding leitet.$"

BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons_hns::
	.string "Hast du schon gegen den ARENA-TYCOON\n"
	.string "gekämpft?\p"
	.string "Wenn sie die Fähigkeiten des Gegners\n"
	.string "einschätzt, setzt sie angeblich ein:\p"
	.string "Ein EINHORN-POKÉMON vom Typ Käfer &\n"
	.string "Kampf, ein MONDLICHT-POKÉMON vom Typ\l"
	.string "Unlicht und ein HÄUTUNGS-POKÉMON\l"
	.string "vom Typ Käfer & Geist.$"

BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons_hns::
	.string "Hast du schon gegen den ARENA-TYCOON\n"
	.string "gekämpft, wenn sie es ernst meint?\p"
	.string "Wenn sie mit vollem Einsatz kämpft,\n"
	.string "setzt sie angeblich ein:\p"
	.string "Ein MONDLICHT-POKÉMON vom Typ Unlicht,\n"
	.string "ein SCHATTEN-POKÉMON vom Typ Geist &\l"
	.string "Gift und ein PILZ-POKÉMON vom Typ\l"
	.string "Pflanze & Kampf.$"

BattleFrontier_Lounge2_Text_PalaceMavenIsThere_hns::
	.string "Das wusstest du bestimmt nicht!\p"
	.string "Einer der Toptrainer, die SCOTT\n"
	.string "GRENZGENIES nennt, ist dort.\p"
	.string "Es ist dieser finstere TRAINER\n"
	.string "namens PALASTMEISTER, der das Ding\l"
	.string "leitet.$"

BattleFrontier_Lounge2_Text_PalaceMavenSilverMons_hns::
	.string "Hast du schon gegen den\n"
	.string "PALASTMEISTER gekämpft?\p"
	.string "Wenn er den Geist des Gegners testet,\n"
	.string "setzt er angeblich diese POKÉMON ein:\p"
	.string "Ein FLEDERMAUS-POKÉMON vom Typ Gift\n"
	.string "& Flug, ein FAULTIER-POKÉMON vom Typ\l"
	.string "Normal und ein TRANSPORT-POKÉMON\l"
	.string "vom Typ Wasser & Eis.$"

BattleFrontier_Lounge2_Text_PalaceMavenGoldMons_hns::
	.string "Hast du schon gegen den\n"
	.string "PALASTMEISTER gekämpft, wenn er es\l"
	.string "ernst meint?\p"
	.string "Wenn er seine volle Kraft einsetzt,\n"
	.string "setzt er angeblich diese POKÉMON ein:\p"
	.string "Ein LEGENDÄRES POKÉMON vom Typ Feuer,\n"
	.string "ein FAULTIER-POKÉMON vom Typ Normal\l"
	.string "und ein AURORA-POKÉMON vom Typ Wasser.$"

BattleFrontier_Lounge2_Text_PyramidKingIsThere_hns::
	.string "Das wusstest du bestimmt nicht!\p"
	.string "Einer der Toptrainer, die SCOTT\n"
	.string "GRENZGENIES nennt, ist dort.\p"
	.string "Es ist dieser feurige TRAINER\n"
	.string "namens PYRAMIDENKÖNIG, der das\l"
	.string "Ding leitet.$"

BattleFrontier_Lounge2_Text_PyramidKingSilverMons_hns::
	.string "Hast du schon gegen den\n"
	.string "PYRAMIDENKÖNIG gekämpft?\p"
	.string "Wenn er die Stärke des Gegners\n"
	.string "prüft, setzt er angeblich ein:\p"
	.string "Ein FELSBERGGIPFEL-POKÉMON vom Typ\n"
	.string "Gestein, ein EISBERG-POKÉMON vom Typ\l"
	.string "Eis und ein EISEN-POKÉMON vom Typ\l"
	.string "Stahl.$"

BattleFrontier_Lounge2_Text_PyramidKingGoldMons_hns::
	.string "Hast du schon gegen den\n"
	.string "PYRAMIDENKÖNIG gekämpft, wenn er\l"
	.string "es ernst meint?\p"
	.string "Wenn er mit voller Kraft kämpft,\n"
	.string "setzt er angeblich ein:\p"
	.string "Ein FROST-POKÉMON vom Typ Eis & Flug,\n"
	.string "ein ELEKTRO-POKÉMON vom Typ Elektro\l"
	.string "& Flug und ein FLAMMEN-POKÉMON vom\l"
	.string "Typ Feuer & Flug.$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice1_hns::
	.string "Klar, es gibt mehrere Orte für\n"
	.string "DOPPELKÄMPFE.\p"
	.string "Aber die DOPPELKAMPF-Räume des\n"
	.string "DUELLTURMs sind sozusagen das\l"
	.string "Grundlegende!\p"
	.string "Dort solltest du lernen, wie\n"
	.string "DOPPELKÄMPFE hier in der\l"
	.string "KAMPFGRENZE funktionieren.$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice2_hns::
	.string "Pass auf dich in den Kämpfen hier\n"
	.string "auf.\p"
	.string "Ich höre, es gibt TRAINER mit\n"
	.string "Strategien, die sie eigens für\l"
	.string "DOPPELKÄMPFE entwickelt haben.$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice3_hns::
	.string "Wenn du hier sicher und vertraut\n"
	.string "mit DOPPELKÄMPFEN bist, solltest\l"
	.string "du andere Orte mit DOPPELKÄMPFEN\l"
	.string "herausfordern.$"

BattleFrontier_Lounge2_Text_MultiBattleAdvice_hns::
	.string "In der TEAMLOUNGE treffen sich\n"
	.string "alle möglichen TRAINER.\p"
	.string "Stell dir vor - vielleicht triffst\n"
	.string "du Freunde oder Bekannte!\l"
	.string "Schau genau hin!$"

BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice_hns::
	.string "Wenn du mit einem Freund da bist,\n"
	.string "geh in den LINK-MULTIKAMPF-Raum.\p"
	.string "Mit einem starken Freund kannst\n"
	.string "du harte Gegner erwarten!$"

BattleFrontier_Lounge2_Text_NewsGatheringPower_hns::
	.string "Was für eine unglaubliche\n"
	.string "Nachrichtensammlung!\l"
	.string "Mein Mentor ist einmalig!$"

BattleFrontier_Lounge2_Text_AmazingPowersOfObservation_hns::
	.string "Was für unglaubliche\n"
	.string "Beobachtungsgabe!\l"
	.string "Mein Mentor ist einmalig!$"

BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion_hns::
	.string "Was für eine unglaubliche\n"
	.string "Überzeugungskraft!\l"
	.string "Mein Mentor ist einmalig!$"

BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe_hns::
	.string "…Was ist das hier für ein Ort?\n"
	.string "Es macht mir Angst…$"

