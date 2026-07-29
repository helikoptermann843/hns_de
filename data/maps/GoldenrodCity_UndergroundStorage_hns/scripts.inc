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
	.string "Nun gut. Es gibt wohl keine andere\n"
	.string "Lösung, um dich auszuschalten.$"

RadioTowerBasement_Text_GruntM24Beaten:
	.string "Du hast mich ausgeschaltet!$"

RadioTowerBasement_Text_GruntM24After:
	.string "Wir werden Team Rocket beschützen, bis\n"
	.string "Giovanni zu uns zurückkehrt!\p"
	.string "Und dazu ist uns jedes Mittel recht!$"

RadioTowerBasement_Text_GruntM14Seen:
	.string "Keinen Schritt weiter!\p"
	.string "Ich kenne keine Gnade für meine\n"
	.string "Feinde - auch nicht für Göre!$"

RadioTowerBasement_Text_GruntM14Beaten:
	.string "Aaargh!$"

RadioTowerBasement_Text_GruntM14After:
	.string "Ich bin ein Versager… Vergib mir,\n"
	.string "Giovanni!$"

RadioTowerBasement_Text_GruntM15Seen:
	.string "Hihihi! Schau mal, wer da ist!\p"
	.string "Bereit? Ich bin jetzt richtig\n"
	.string "stark!$"

RadioTowerBasement_Text_GruntM15Beaten:
	.string "Hihihi! Du bist echt gut!\p"
	.string "Team Rocket war nur ein Job…\n"
	.string "aber ich sehe, dass es anderen\n"
	.string "wehtut.\p"
	.string "Na gut, Ich höre auf.\p"
	.string "Danke dir. Sorry, Giovanni!$"

RadioTowerBasement_Text_GruntM15After:
	.string "Hihihi! Das war ein Spaß!\n"
	.string "Ich vergesse dich nicht!$"

RadioTowerBasement_Text_DirectorIntro:
	.string "Intendant: W-wer bist du? Was, du bist\n"
	.string "hier, um mich zu retten? Vielen, vielen\l"
	.string "Dank!\p"
	.string "A-aber sag mal… was ist da im Radioturm\n"
	.string "bloß los?\p"
	.string "Was? Dort wimmelt es nur so vor Team\n"
	.string "Rocket-Mitgliedern? Na gut! Hier, nimm\l"
	.string "diesen Türöffner!$"

RadioTowerBasement_Text_DirectorCardKey:
	.string "Intendant: Damit solltest du die Tür im\n"
	.string "zweiten Stock aufbekommen!$"

RadioTowerBasement_Text_DirectorAfter:
	.string "Bitte! Du weißt ja nicht, zu was sie mit\n"
	.string "dem Sender in ihrer Gewalt fähig sind!\p"
	.string "Wenn sie mit diesem seltsamen Signal\n"
	.string "auf Sendung gehen, könnten sie sogar\l"
	.string "Besitz von den Pokémon ergreifen!\p"
	.string "Du bist unsere letzte Hoffnung! Du\n"
	.string "musst den Radioturm… nein, alle Pokémon\l"
	.string "dieser Welt retten!$"
