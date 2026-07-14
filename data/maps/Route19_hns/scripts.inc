Route19_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route19_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route19_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route19_EventScript_Harold::
	trainerbattle_single TRAINER_HAROLD_HNS, Route19_Text_SwimmermHaroldSeen, Route19_Text_SwimmermHaroldBeaten
	msgbox Route19_Text_SwimmermHaroldAfterBattle, MSGBOX_AUTOCLOSE
	end

Route19_EventScript_Tucker::
	trainerbattle_single TRAINER_TUCKER_HNS, Route19_Text_SwimmermTuckerSeen, Route19_Text_SwimmermTuckerBeaten
	msgbox Route19_Text_SwimmermTuckerAfterBattle, MSGBOX_AUTOCLOSE
	end

Route19_EventScript_Dawn::
	trainerbattle_single TRAINER_DAWN_HNS, Route19_Text_SwimmerfDawnSeen, Route19_Text_SwimmerfDawnBeaten
	msgbox Route19_Text_SwimmerfDawnAfterBattle, MSGBOX_AUTOCLOSE
	end

Route19_EventScript_Jerome::
	trainerbattle_single TRAINER_JEROME_HNS, Route19_Text_SwimmermJeromeSeen, Route19_Text_SwimmermJeromeBeaten
	msgbox Route19_Text_SwimmermJeromeAfterBattle, MSGBOX_AUTOCLOSE
	end

Route19_EventScript_Fatman::
	goto_if_unset FLAG_DEFEATED_CINNABAR_ISLAND_GYM, Route19_EventScript_FatmanBefore
	msgbox Route19_Text_Fisher1_RocksCleared, MSGBOX_NPC
	end

Route19_EventScript_FatmanBefore::
	msgbox Route19_Text_Fisher2, MSGBOX_NPC
	end

Route19_EventScript_Sign::
	msgbox Route19_Text_Sign, MSGBOX_SIGN
	end

Route19_EventScript_SwimSign::
	msgbox Route19_Text_CarefulSwimmingSign, MSGBOX_SIGN
	end

CherryGroveCity_EventScript_Kingler::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KINGLER, CRY_MODE_NORMAL
	msgbox Route19_Text_Kingler, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route19_EventScript_Fisher::
	goto_if_unset FLAG_DEFEATED_CINNABAR_ISLAND_GYM, Route19_EventScript_FisherBefore
	msgbox Route19_Text_Fisher2_RocksCleared, MSGBOX_NPC
	end

Route19_EventScript_FisherBefore::
	msgbox Route19_Text_FisherBefore, MSGBOX_NPC
	end

Route19_EventScript_Item_Brine::
    finditem ITEM_TM_BRINE
    end

Route19_Text_SwimmermHaroldSeen:
	.string "Warst du schon einmal nachts im Meer?$"

Route19_Text_SwimmermHaroldBeaten:
	.string "Gulp…$"

Route19_Text_SwimmermHaroldAfterBattle:
	.string "Nachts wird das Meer schwarz.\p"
	.string "Es scheint, als\n"
	.string "wollte es dich verschlingen.$"

Route19_Text_SwimmermTuckerSeen:
	.string "Uff, uff… Nur… noch… ein\n"
	.string "kleines Stück… bis …FUCHSANIA CITY…$"

Route19_Text_SwimmermTuckerBeaten:
	.string "Ich ertrinke!$"

Route19_Text_SwimmermTuckerAfterBattle:
	.string "Ich… bat meine\n"
	.string "Freundin nach FUCHSANIA CITY… zu\l"
	.string "schwimmen…$"

Route19_Text_SwimmerfDawnSeen:
	.string "Schwächlinge widern mich an!$"

Route19_Text_SwimmerfDawnBeaten:
	.string "Ich schlage dich beim Schwimmen…$"

Route19_Text_SwimmerfDawnAfterBattle:
	.string "Es ist nur eine kurze Distanz\n"
	.string "zwischen FUCHSANIA\l"
	.string "CITY und den SEESCHAUMINSELN…\p"
	.string "Uah, mein Freund ist so groß und\n"
	.string "dennoch ein Schwächling!$"

Route19_Text_SwimmermJeromeSeen:
	.string "Schwimmen? Ich bin\n"
	.string "ein miserabler Schwimmer.\p"
	.string "Ich plansche lieber\n"
	.string "in dieser Riesenpfütze.$"

Route19_Text_SwimmermJeromeBeaten:
	.string "Ich dachte, ich könnte gewinnen.$"

Route19_Text_SwimmermJeromeAfterBattle:
	.string "Schwimmen mag nicht meine\n"
	.string "Stärke sein, dennoch liebe\l"
	.string "ich das Meer.$"

Route19_Text_Fisher1:
	.string "Tut mir Leid.\n"
	.string "Die Straße ist aufgrund von\l"
	.string "Bauarbeiten gesperrt.\p"
	.string "Wenn du zu der ZINNOBERINSEL\n"
	.string "möchtest, gehst du von\l"
	.string "ALABASTIA gen Süden.$"

Route19_Text_Kingler:
	.string "Kingler: KEEEEEEEEEEEE$"

Route19_Text_Fisher1_RocksCleared:
	.string "Ich bin total verschwitzt.\p"
	.string "Es ist Zeit zum Schwimmen.$"

Route19_Text_Fisher2:
	.string "Es würde zu lange\n"
	.string "dauern, diesen Felsen zu bewegen…$"

Route19_Text_FisherBefore:
	.string "Kein Angeln, solange Kingler\n"
	.string "hier sind.$"

Route19_Text_Fisher2_RocksCleared:
	.string "Die Bauarbeiten sind beendet.\p"
	.string "Jetzt kann ich wieder angeln.$"

Route19_Text_Sign:
	.string "ROUTE 19\p"
	.string "FUCHSANIA CITY - SEESCHAUMINSELN$"

Route19_Text_CarefulSwimmingSign:
	.string "Sei auf der Hut,\n"
	.string "wenn du zu den SEESCHAUMINSELN\l"
	.string "schwimmst.\p"
	.string "ORDNUNGSAMT VON FUCHSANIA CITY$"

