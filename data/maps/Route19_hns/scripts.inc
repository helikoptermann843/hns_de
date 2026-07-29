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
	.string "Bist du schon einmal nachts\n"
	.string "im Meer geschwommen?$"

Route19_Text_SwimmermHaroldBeaten:
	.string "Schluck…$"

Route19_Text_SwimmermHaroldAfterBattle:
	.string "Nachts ist das Meer pechschwarz. Ganz\n"
	.string "so, als wollte es dich verschlingen.$"

Route19_Text_SwimmermTuckerSeen:
	.string "Röchel, röchel… Nur… noch… ein… kleines\n"
	.string "Stück… bis… Fuchsania City…$"

Route19_Text_SwimmermTuckerBeaten:
	.string "Ich ertrinke!$"

Route19_Text_SwimmermTuckerAfterBattle:
	.string "Ich… hab meiner Freundin gesagt…\n"
	.string "ich schwimme… bis nach Fuchsania City.\l"
	.string "Wirklich… großartige… Idee…$"

Route19_Text_SwimmerfDawnSeen:
	.string "Schwächlinge\n"
	.string "widern mich an!$"

Route19_Text_SwimmerfDawnBeaten:
	.string "Beim Schwimmen hätte ich dich\n"
	.string "locker in die Tasche gesteckt!$"

Route19_Text_SwimmerfDawnAfterBattle:
	.string "Von Fuchsania City bis zu den See-\n"
	.string "schauminseln schwimmt sich's doch im Nu!\l"
	.string "Jetzt stell dich mal nicht so an!$"

Route19_Text_SwimmermJeromeSeen:
	.string "Schwimmen?\n"
	.string "Ich bin ein miserabler Schwimmer.\l"
	.string "Ich plansche lieber im seichten Wasser.$"

Route19_Text_SwimmermJeromeBeaten:
	.string "Und ich dachte, ich könnte gewinnen…\n"
	.string "So kann man sich irren.$"

Route19_Text_SwimmermJeromeAfterBattle:
	.string "Schwimmen mag nicht meine Stärke sein,\n"
	.string "aber ich liebe das Meer!$"

Route19_Text_Fisher1:
	.string "Hier kommst du nicht weiter, weil hier\n"
	.string "gerade Planierarbeiten im Gange sind.\l"
	.string "Um zur Zinnoberinsel zu gelangen, musst\l"
	.string "du den Umweg über Alabastia machen.$"

Route19_Text_Kingler:
	.string "Kingler: Keeeeeeeeeeee$"

Route19_Text_Fisher1_RocksCleared:
	.string "Ich habe so viel geschwitzt,\n"
	.string "dass jetzt ein paar Runden im\l"
	.string "Wasser sicher nicht verkehrt wären.$"

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
	.string "Route 19\n"
	.string "Süden: Die Seeschauminseln$"

Route19_Text_CarefulSwimmingSign:
	.string "Da ist ein Flugblatt…\p"
	.string "Wer vorhat, zu den Seeschauminseln\n"
	.string "hinauszuschwimmen, wird gebeten,\l"
	.string "äußerst vorsichtig zu sein!\l"
	.string "- Das Ordnungsamt von Fuchsania City$"

