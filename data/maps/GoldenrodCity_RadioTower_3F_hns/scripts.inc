GoldenrodCity_RadioTower_3F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, GoldenrodCity_RadioTower_3F_OnLoad
	.byte 0

GoldenrodCity_RadioTower_3F_OnLoad::
	call_if_set FLAG_HIDE_RADIOTOWER_GATE, GoldenrodCity_RadioTower_3F_HideGate
	end
	
GoldenrodCity_RadioTower_3F_HideGate::
	setmetatile 25, 8, 0x335, FALSE
	setmetatile 25, 9, 0x335, FALSE

	setmetatile 26, 8, 0X334, FALSE
	setmetatile 26, 9, 0X334, FALSE

	setmetatile 27, 8, 0X334, FALSE
	setmetatile 27, 9, 0X334, FALSE

	setmetatile 28, 8, 0X334, FALSE
	setmetatile 28, 9, 0X334, FALSE

	setmetatile 29, 8, 0X334, FALSE
	setmetatile 29, 9, 0X334, FALSE

	setmetatile 30, 8, 0X334, FALSE
	setmetatile 30, 9, 0X334, FALSE

	setmetatile 31, 8, 0X334, FALSE
	setmetatile 31, 9, 0X334, FALSE
	return


GoldenrodRaidoTower3_EventScript_Grunt6::
	trainerbattle_single TRAINER_GRUNT_6_HNS, GoldenrodCity_RadioTower_3F_Text_GruntM7Seen, GoldenrodCity_RadioTower_3F_Text_GruntM7Beaten
	msgbox GoldenrodCity_RadioTower_3F_Text_GruntM7After, MSGBOX_AUTOCLOSE
	end

GoldenrodRaidoTower3_EventScript_Grunt7::
	trainerbattle_single TRAINER_GRUNT_7_HNS, GoldenrodCity_RadioTower_3F_Text_GruntM8Seen, GoldenrodCity_RadioTower_3F_Text_GruntM8Beaten
	msgbox GoldenrodCity_RadioTower_3F_Text_GruntM8After, MSGBOX_AUTOCLOSE
	end

GoldenrodRaidoTower3_EventScript_Grunt8::
	trainerbattle_single TRAINER_GRUNT_8_HNS, GoldenrodCity_RadioTower_3F_Text_GruntM9Seen, GoldenrodCity_RadioTower_3F_Text_GruntM9Beaten
	msgbox GoldenrodCity_RadioTower_3F_Text_GruntM9After, MSGBOX_AUTOCLOSE
	end

GoldenrodRaidoTower3_EventScript_Scientist::
	trainerbattle_single TRAINER_MARC_HNS, GoldenrodCity_RadioTower_3F_Text_ScientistMarcSeen, GoldenrodCity_RadioTower_3F_Text_ScientistMarcBeaten
	msgbox GoldenrodCity_RadioTower_3F_Text_ScientistMarcAfter, MSGBOX_AUTOCLOSE
	end


GoldenrodCity_RadioTower_3F_EventScript_Cooltrainer::
	lock
	faceplayer
	goto_if_set FLAG_GOT_SUNNY_DAY, GoldenrodCity_RadioTower_3F_EventScript_Cooltrainer3
	goto_if_ge VAR_GOLDENROD_CITY_STATE, 10, GoldenrodCity_RadioTower_3F_EventScript_Cooltrainer2

	msgbox GoldenrodCity_RadioTower_3F_Text_CooltrainerFPleaseSave, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Cooltrainer2::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_3F_Text_CooltrainerFHeroGift, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_TM_SUNNY_DAY
	setflag FLAG_GOT_SUNNY_DAY
	msgbox GoldenrodCity_RadioTower_3F_Text_CooltrainerFSunnyDay, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Cooltrainer3::
	msgbox GoldenrodCity_RadioTower_3F_Text_CooltrainerFMarvelous, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Nerd::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_3F_Text_SuperNerd, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Gate::
	lock
	msgbox GoldenrodCity_RadioTower_3F_Text_CardKeySlot, MSGBOX_SIGN
	goto_if_set FLAG_HIDE_RADIOTOWER_GATE, GoldenrodCity_RadioTower_3F_EventScript_GateOpened
	checkitem ITEM_CARD_KEY
	goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_RadioTower_3F_EventScript_OpenGate
	closemessage
	release
	end


GoldenrodCity_RadioTower_3F_EventScript_GateOpened::
	msgbox GoldenrodCity_RadioTower_3F_Text_Open, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_OpenGate::
	msgbox GoldenrodCity_RadioTower_3F_Text_InsertedCardKey, MSGBOX_SIGN
	call GoldenrodCity_RadioTower_3F_HideGate
	playse SE_CLICK
	special DrawWholeMapView
	msgbox GoldenrodCity_RadioTower_3F_Text_Open, MSGBOX_SIGN
	setflag FLAG_HIDE_RADIOTOWER_GATE
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Sign1::
	lock
	msgbox GoldenrodCity_RadioTower_3F_Text_PersonnelSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Sign2::
	lock
	msgbox GoldenrodCity_RadioTower_3F_Text_PokemonMusicSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_Text_CardKeySlot:
	.string "Das ist der Schlitz für den Türöffner!$"

GoldenrodCity_RadioTower_3F_Text_InsertedCardKey:
	.string "{PLAYER} verwendet den Türöffner!$"
 
GoldenrodCity_RadioTower_3F_Text_Open:
	.string "Das Tor wurde geöffnet.$"

GoldenrodCity_RadioTower_3F_Text_PersonnelSign:
	.string "2S: Allgemeine Angelegenheiten$"

GoldenrodCity_RadioTower_3F_Text_PokemonMusicSign:
	.string "Pokémon-Musik\n"
	.string "Moderiert von Ben… jawollja!$"

GoldenrodCity_RadioTower_3F_Text_SuperNerd:
	.string "Wir haben die Rufe von allen\n"
	.string "bekannten Pokémon auf Tonband.\l"
	.string "Es sind circa 200!$"

GoldenrodCity_RadioTower_3F_Text_GymGuideRockets:
	.string "Als Partner sind Pokémon für\n"
	.string "einen Trainer unabdingbar!\p"
	.string "Es tut mir in der Seele weh, wenn\n"
	.string "sie jemand so herumkommandiert.$"

GoldenrodCity_RadioTower_3F_Text_GymGuide:
	.string "Wir sind rund um die Uhr auf Sendung!\p"
	.string "Ich selbst bin auch 24 Stunden am Tag\n"
	.string "darum bemüht, unserem Publikum ein\l"
	.string "spannendes Programm darzubieten!$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFPleaseSave:
	.string "Der Anführer von Team Rocket hat sich\n"
	.string "hinter dieser Tür verbarrikadiert.\p"
	.string "Sie wurde von innen abgeschlossen, aber\n"
	.string "der Intendant könnte sie öffnen!\p"
	.string "Du findest ihn im vierten Stock!\n"
	.string "Oh bitte, du musst ihn retten!$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFDirectorSafe:
	.string "Geht es dem Intendanten gut?$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFHeroGift:
	.string "Danke! Du bist mein Held!\p"
	.string "Nimm dies als Dankesgeschenk.$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFSunnyDay:
	.string "Diese TM enthält die Attacke Sonnentag.\n"
	.string "Mit ihr kannst du temporär Attacken\l"
	.string "vom Typ Feuer verstärken.$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFMarvelous:
	.string "Saubere Arbeit!$"

GoldenrodCity_RadioTower_3F_Text_GruntM7Seen:
	.string "Mir wurden strikte Befehle erteilt.\p"
	.string "Jeder, der Team Rocket in die\n"
	.string "Quere kommt, wird pulverisiert!$"

GoldenrodCity_RadioTower_3F_Text_GruntM7Beaten:
	.string "Hey?$"

GoldenrodCity_RadioTower_3F_Text_GruntM7After:
	.string "Ich habe versagt…\p"
	.string "Atlas wird so wütend sein…$"

GoldenrodCity_RadioTower_3F_Text_GruntM8Seen:
	.string "Es ist ein tolles Gefühl, Pokémon\n"
	.string "für Verbrechen einzusetzen!$"

GoldenrodCity_RadioTower_3F_Text_GruntM8Beaten:
	.string "Du machst Witze!$"

GoldenrodCity_RadioTower_3F_Text_GruntM8After:
	.string "Verlieren dagegen ist ein mieses Gefühl!\n"
	.string "Ach, verflixt!\l"
	.string "Ich hasse unfähige Pokémon!$"

GoldenrodCity_RadioTower_3F_Text_GruntM9Seen:
	.string "Wieso steht die Tür offen? Was geht hier\n"
	.string "vor? Hast du was damit zu tun?$"

GoldenrodCity_RadioTower_3F_Text_GruntM9Beaten:
	.string "Ich bin erledigt!$"

GoldenrodCity_RadioTower_3F_Text_GruntM9After:
	.string "Was?!? Du bist an unseren Männern\n"
	.string "im Untergrund vorbeigekommen?\l"
	.string "Wie hast du das fertiggebracht?$"

GoldenrodCity_RadioTower_3F_Text_ScientistMarcSeen:
	.string "Was macht ein fremdes Kind hier?\n"
	.string "Wer bist du?$"

GoldenrodCity_RadioTower_3F_Text_ScientistMarcBeaten:
	.string "Tse!\n"
	.string "Ich habe dich wohl unterschätzt.$"

GoldenrodCity_RadioTower_3F_Text_ScientistMarcAfter:
	.string "Mwahaha… von hier kann ich Signale\n"
	.string "jeder Stärke aussenden!$"

