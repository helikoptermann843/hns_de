GoldenrodCity_UndergroundStorage_hns_MapScripts::
	.byte 0

GoldenrodCity_UndergroundStorage_EventScript_Director::
    lock
    faceplayer
    checkitem ITEM_CARD_KEY
    goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_UndergroundStorage_EventScript_Director2
    msgbox RadioTowerBasement_Text_DirectorIntro, MSGBOX_DEFAULT
    closemessage
    giveitem ITEM_CARD_KEY
    msgbox RadioTowerBasement_Text_DirectorCardKey, MSGBOX_DEFAULT
    closemessage
    release
    end

GoldenrodCity_UndergroundStorage_EventScript_Director2::
    msgbox RadioTowerBasement_Text_DirectorAfter, MSGBOX_DEFAULT
    closemessage
    release
    end

GoldenrodCity_UndergroundStorage_EventScript_Grunt19::
    trainerbattle_single TRAINER_GRUNT_19_HNS, RadioTowerBasement_Text_GruntM24Seen, RadioTowerBasement_Text_GruntM24Beaten
	msgbox RadioTowerBasement_Text_GruntM24After, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_UndergroundStorage_EventScript_Grunt12::
    trainerbattle_single TRAINER_GRUNT_12_HNS, RadioTowerBasement_Text_GruntM14Seen, RadioTowerBasement_Text_GruntM14Beaten
	msgbox RadioTowerBasement_Text_GruntM14After, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_UndergroundStorage_EventScript_Eto::
    trainerbattle_single TRAINER_ETO_3_HNS, RadioTowerBasement_Text_GruntM15Seen, RadioTowerBasement_Text_GruntM15Beaten
	msgbox RadioTowerBasement_Text_GruntM15After, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_UndergroundStorage_EventScript_Item_TM_CALM_MIND::
    finditem ITEM_TM_CALM_MIND
    end

GoldenrodCity_UndergroundStorage_EventScript_Item_UltraBall::
    finditem ITEM_ULTRA_BALL
    end

GoldenrodCity_UndergroundStorage_EventScript_Item_MaxEther::
    finditem ITEM_MAX_ETHER
    end

RadioTowerBasement_Text_GruntM24Seen:
	.string "Wie bist du so weit gekommen?\p"
	.string "Na gut… Dann werde ich dich\n"
	.string "beseitigen.$"

RadioTowerBasement_Text_GruntM24Beaten:
	.string "Ich wurde beseitigt…$"

RadioTowerBasement_Text_GruntM24After:
	.string "TEAM ROCKET macht weiter und\n"
	.string "wartet auf Giovannis Rückkehr.\p"
	.string "Wir tun, was immer nötig ist.$"

RadioTowerBasement_Text_GruntM14Seen:
	.string "Keinen Schritt weiter!\p"
	.string "Ich kenne keine Gnade für meine\n"
	.string "Feinde - auch nicht für Göre!$"

RadioTowerBasement_Text_GruntM14Beaten:
	.string "Verflixt!$"

RadioTowerBasement_Text_GruntM14After:
	.string "Ich habe verloren…\p"
	.string "Bitte verzeih mir, Giovanni!$"

RadioTowerBasement_Text_GruntM15Seen:
	.string "Hihihi! Schau mal, wer da ist!\p"
	.string "Bereit? Ich bin jetzt richtig\n"
	.string "stark!$"

RadioTowerBasement_Text_GruntM15Beaten:
	.string "Hihihi! Du bist echt gut!\p"
	.string "TEAM ROCKET war nur ein Job…\n"
	.string "aber ich sehe, dass es anderen\n"
	.string "wehtut.\p"
	.string "Na gut, Ich höre auf.\p"
	.string "Danke dir. Sorry, Giovanni!$"

RadioTowerBasement_Text_GruntM15After:
	.string "Hihihi! Das war ein Spaß!\n"
	.string "Ich vergesse dich nicht!$"

RadioTowerBasement_Text_DirectorIntro:
	.string "INTENDANT: Wer? Was? Du bist\n"
	.string "gekommen, um mich zu retten?\p"
	.string "Danke!\p"
	.string "Der Radioturm!\p"
	.string "Was geht dort vor?\p"
	.string "TEAM ROCKET hat ihn besetzt?\p"
	.string "Hier. Nimm diese Schlüsselkarte.$"

RadioTowerBasement_Text_DirectorCardKey:
	.string "INTENDANT: Damit kannst du die\n"
	.string "Tore in 2S öffnen.$"

RadioTowerBasement_Text_DirectorAfter:
	.string "Bitte, hilf uns!\p"
	.string "Niemand weiß, was sie tun werden,\n"
	.string "wenn sie den Sender kontrollieren.\p"
	.string "Sie könnten mit einem Signal\n"
	.string "sogar Pokémon steuern!\p"
	.string "Nur auf dich kann ich zählen.\p"
	.string "Rette den Radioturm…\p"
	.string "und alle Pokémon im ganzen Land!$"
