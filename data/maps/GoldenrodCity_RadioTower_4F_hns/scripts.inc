GoldenrodCity_RadioTower_4F_hns_MapScripts::
	.byte 0

GoldenrodCity_RadioTower_4F4_EventScript_Sign1::
	lock
	msgbox GoldenrodCity_RadioTower_4F4_Text_Studio2Sign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodCity_RadioTower_4F4_EventScript_Sign2::
	lock
	msgbox GoldenrodCity_RadioTower_4F4_Text_ProductionSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodRaidoTower4_EventScript_Grunt28::
	trainerbattle_single TRAINER_GRUNT_28_HNS, GoldenrodCity_RadioTower_4F4_Text_GruntF4Seen, GoldenrodCity_RadioTower_4F4_Text_GruntF4Beaten
	msgbox GoldenrodCity_RadioTower_4F4_Text_GruntF4After, MSGBOX_AUTOCLOSE
	end

GoldenrodRaidoTower4_EventScript_Grunt9::
	trainerbattle_single TRAINER_GRUNT_9_HNS, GoldenrodCity_RadioTower_4F4_Text_GruntM10Seen, GoldenrodCity_RadioTower_4F4_Text_GruntM10Beaten
	msgbox GoldenrodCity_RadioTower_4F4_Text_GruntM10After, MSGBOX_AUTOCLOSE
	end

GoldenrodRaidoTower4_EventScript_Proton::
	trainerbattle_single TRAINER_PROTON_2_HNS, GoldenrodCity_RadioTower_4F4_Text_Proton_Seen, GoldenrodCity_RadioTower_4F4_Text_Proton_Beaten
	msgbox GoldenrodCity_RadioTower_4F4_Text_Proton_After, MSGBOX_AUTOCLOSE
	end


GoldenrodCity_RadioTower_4F4_EventScript_Fisher::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_4F4_Text_Fisher, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_4F4_EventScript_Scientist::
	trainerbattle_single TRAINER_RICH_HNS, GoldenrodCity_RadioTower_4F4_Text_ScientistRichSeen, GoldenrodCity_RadioTower_4F4_Text_ScientistRichBeaten
	msgbox GoldenrodCity_RadioTower_4F4_Text_ScientistRichAfter, MSGBOX_AUTOCLOSE
	end


GoldenrodCity_RadioTower_4F4_EventScript_Mary::
	lock
	faceplayer
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 6, GoldenrodCity_RadioTower_4F4_EventScript_Mary2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 7, GoldenrodCity_RadioTower_4F4_EventScript_Mary2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 8, GoldenrodCity_RadioTower_4F4_EventScript_Mary2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 9, GoldenrodCity_RadioTower_4F4_EventScript_Mary2
	goto_if_unset FLAG_GOT_MARY_BRIGHT_POWDER, GoldenrodCity_RadioTower_4F4_EventScript_Mary3
	msgbox GoldenrodCity_RadioTower_4F4_Text_DJMaryAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_4F4_EventScript_Mary2::
	msgbox GoldenrodCity_RadioTower_4F4_Text_DJMary, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_4F4_EventScript_Mary3::
	msgbox GoldenrodCity_RadioTower_4F4_Text_DJMaryCleared, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_BRIGHT_POWDER
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox GoldenrodCity_RadioTower_4F4_Text_DJMaryPinkBow, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_GOT_MARY_BRIGHT_POWDER
	closemessage
	release
	end

GoldenrodCity_RadioTower_4F4_EventScript_Meowth::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
	msgbox GoldenrodCity_RadioTower_4F4_Text_Meowth, MSGBOX_DEFAULT
	waitmoncry
	release
	end


GoldenrodCity_RadioTower_4F4_Text_Proton_Seen:
	.string "Lance: Halt!\p"
	.string "…Ach? Dich kenne ich doch aus\n"
	.string "dem Flegmon-Brunnen? Dort hast du\l"
	.string "unsere Pläne schon einmal vereitelt…\p"
	.string "Ah, verstehe… du legst es wohl darauf\n"
	.string "an, unseren Zorn zu provozieren?\p"
	.string "Nun gut, ganz wie du willst.\n"
	.string "Spüre die Rache eines Vorstands-\l"
	.string "mitglieds von Team Rocket!$"

GoldenrodCity_RadioTower_4F4_Text_Proton_Beaten:
	.string "Pfuuuh…$"

GoldenrodCity_RadioTower_4F4_Text_Proton_After:
	.string "Lance: Mich magst du besiegt haben…\n"
	.string "Doch im Endeffekt ziehst du damit bloß\l"
	.string "den Zorn von Team Rocket auf dich!$"

GoldenrodCity_RadioTower_4F4_Text_Fisher:
	.string "Als ich bei den Ruinen mein Radio\n"
	.string "angeschaltet habe, kamen sehr seltsame\l"
	.string "Signale aus den Lautsprechern.$"

GoldenrodCity_RadioTower_4F4_Text_DJMary:
	.string "Margit: Oh nein, wie konnte ich bloß in\n"
	.string "so einen Schlamassel geraten?\p"
	.string "Hilf mir, Mauzi! Hilf mir!$"

GoldenrodCity_RadioTower_4F4_Text_DJMaryCleared:
	.string "Margit: Du bist der Trainer, der\n"
	.string "mich gerettet hat, stimmt’s?\p"
	.string "Hier, nimm!\n"
	.string "Das ist ein Zeichen meines Dankes!$"

GoldenrodCity_RadioTower_4F4_Text_DJMaryPinkBow:
	.string "Margit: Damit kannst du den Attacken\n"
	.string "des Gegners besser ausweichen.$"

GoldenrodCity_RadioTower_4F4_Text_DJMaryAfter:
	.string "Margit: Und hör dir den Pokémon-Talk\n"
	.string "mit Prof. Eich und mir im Radio an, ja?$"

GoldenrodCity_RadioTower_4F4_Text_Meowth:
	.string "Mauzi: …Mauz!$"

GoldenrodCity_RadioTower_4F4_Text_GruntM10Seen:
	.string "Du hast vor, den Intendanten zu\n"
	.string "retten? Das kannst du dir abschminken,\l"
	.string "denn ich werde dich besiegen!$"

GoldenrodCity_RadioTower_4F4_Text_GruntM10Beaten:
	.string "Nein! Unglaublich!$"

GoldenrodCity_RadioTower_4F4_Text_GruntM10After:
	.string "Ich fass es nicht! Ich wurde\n"
	.string "besiegt!$"

GoldenrodCity_RadioTower_4F4_Text_ExecutiveM2Seen:
	.string "Stopp! Man nennt mich die\n"
	.string "Team-Rocket-Festung!\p"
	.string "Keinen Schritt weiter!$"

GoldenrodCity_RadioTower_4F4_Text_ExecutiveM2Beaten:
	.string "Die Festung ist gefallen!$"

GoldenrodCity_RadioTower_4F4_Text_ExecutiveM2After:
	.string "Du hast meinen Respekt.\p"
	.string "Ein Rat:\n"
	.string "Es ist noch nicht zu spät.\l"
	.string "Du kannst immer noch umkehren.$"

GoldenrodCity_RadioTower_4F4_Text_GruntF4Seen:
	.string "Ob ich Pokémon niedlich finde?\p"
	.string "Klar! Meine Pokémon werden sooo\n"
	.string "niedlich sein-\p"
	.string "wenn sie deine besiegt haben!$"

GoldenrodCity_RadioTower_4F4_Text_GruntF4Beaten:
	.string "Tse!\n"
	.string "Was ein nutzloser Haufen!$"

GoldenrodCity_RadioTower_4F4_Text_GruntF4After:
	.string "Ich liebe mich selbst!\p"
	.string "Wen interessieren Pokémon?$"

GoldenrodCity_RadioTower_4F4_Text_ScientistRichSeen:
	.string "Exzellent.\p"
	.string "Mit dem Radioturm können wir\n"
	.string "unser Vorhaben in die Tat umsetzen.$"

GoldenrodCity_RadioTower_4F4_Text_ScientistRichBeaten:
	.string "Hmmm…\n"
	.string "Jeder große Plan\l"
	.string "hat wohl einen Haken.$"

GoldenrodCity_RadioTower_4F4_Text_ScientistRichAfter:
	.string "Glaubst du allen Ernstes, Team\n"
	.string "Rocket aufhalten zu können?$"

GoldenrodCity_RadioTower_4F4_Text_ProductionSign:
	.string "3S: Produktion$"

GoldenrodCity_RadioTower_4F4_Text_Studio2Sign:
	.string "3S Studio 2$"
