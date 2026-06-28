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
	.string "Lance: Moment mal!\p"
	.string "Du bist doch derjenige, der uns am\n"
	.string "Flegmon-Brunnen in die Quere kam!\p"
	.string "Aha… Du tust all das nur, um mich\n"
	.string "wütend zu machen.\p"
	.string "Aber gut… Wenn du es unbedingt\n"
	.string "darauf anlegst,\p"
	.string "zeige ich dir den ganzen Zorn eines\n"
	.string "TEAM-ROCKET-VORSTANDS!$"

GoldenrodCity_RadioTower_4F4_Text_Proton_Beaten:
	.string "Puh…$"

GoldenrodCity_RadioTower_4F4_Text_Proton_After:
	.string "Lance: Diesmal hast du\n"
	.string "vielleicht gewonnen…\p"
	.string "Aber du hast nur den Zorn von\n"
	.string "TEAM ROCKET geschürt.$"

GoldenrodCity_RadioTower_4F4_Text_Fisher:
	.string "Als ich in den Ruinen war\n"
	.string "hörte ich eine seltsame Radiosendung.$"

GoldenrodCity_RadioTower_4F4_Text_DJMary:
	.string "Margit: Warum? Warum muss ich so\n"
	.string "etwas durchmachen?\p"
	.string "Mauzi, hilf mir!$"

GoldenrodCity_RadioTower_4F4_Text_DJMaryCleared:
	.string "Margit: Oh! Mein kleiner Retter!\p"
	.string "Nimm das als Dankeschön!$"

GoldenrodCity_RadioTower_4F4_Text_DJMaryPinkBow:
	.string "Margit: Damit kannst du den Attacken\n"
	.string "des Gegners besser ausweichen.$"

GoldenrodCity_RadioTower_4F4_Text_DJMaryAfter:
	.string "Margit: Hör unbedingt bei PROF.\n"
	.string "EICHs Pokémon-TALK rein!$"

GoldenrodCity_RadioTower_4F4_Text_Meowth:
	.string "Mauzi: Mauzi…$"

GoldenrodCity_RadioTower_4F4_Text_GruntM10Seen:
	.string "Du willst den INTENDANTEN retten?\p"
	.string "Das wird dir nicht gelingen, denn\n"
	.string "ich werde dich besiegen!$"

GoldenrodCity_RadioTower_4F4_Text_GruntM10Beaten:
	.string "Nein! Unglaublich!$"

GoldenrodCity_RadioTower_4F4_Text_GruntM10After:
	.string "Ich fass es nicht! Ich wurde\n"
	.string "besiegt!$"

GoldenrodCity_RadioTower_4F4_Text_ExecutiveM2Seen:
	.string "Stopp! Man nennt mich die\n"
	.string "TEAM-ROCKET-Festung!\p"
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
	.string "Oh nein! Sie sind so nutzlos!$"

GoldenrodCity_RadioTower_4F4_Text_GruntF4After:
	.string "Ich liebe mich selbst!\p"
	.string "Wen interessieren Pokémon?$"

GoldenrodCity_RadioTower_4F4_Text_ScientistRichSeen:
	.string "Ausgezeichnet.\p"
	.string "Dieser Radioturm wird unseren\n"
	.string "großen Plan erfüllen.$"

GoldenrodCity_RadioTower_4F4_Text_ScientistRichBeaten:
	.string "Hmmm…\p"
	.string "Jeder große Plan hat seine\n"
	.string "Schwierigkeiten.$"

GoldenrodCity_RadioTower_4F4_Text_ScientistRichAfter:
	.string "Glaubst du wirklich, du kannst\n"
	.string "TEAM ROCKET aufhalten?$"

GoldenrodCity_RadioTower_4F4_Text_ProductionSign:
	.string "3S PRODUKTION$"

GoldenrodCity_RadioTower_4F4_Text_Studio2Sign:
	.string "3S STUDIO 2$"
