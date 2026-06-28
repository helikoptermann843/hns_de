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
	.string "Hier kommt die Schlüssel-\n"
	.string "karte hinein.$"

GoldenrodCity_RadioTower_3F_Text_InsertedCardKey:
	.string "{PLAYER} setzte die\n"
	.string "Schlüsselkarte ein.$"
 
GoldenrodCity_RadioTower_3F_Text_Open:
	.string "Das Tor wurde geöffnet.$"

GoldenrodCity_RadioTower_3F_Text_PersonnelSign:
	.string "2S PERSONAL$"

GoldenrodCity_RadioTower_3F_Text_PokemonMusicSign:
	.string "Pokémon-MUSIK mit DJ BEN$"

GoldenrodCity_RadioTower_3F_Text_SuperNerd:
	.string "Wir haben die schreie aller\n"
	.string "POKéMON die wir gefunden haben\l"
	.string "aufgenommen. Bestimmt 400 Stück.$"

GoldenrodCity_RadioTower_3F_Text_GymGuideRockets:
	.string "Für Trainer sind Pokémon wie\n"
	.string "Lebenspartner.\p"
	.string "Schrecklich, wie TEAM ROCKET\n"
	.string "alle Pokémon beherrschen will.$"

GoldenrodCity_RadioTower_3F_Text_GymGuide:
	.string "Wir senden rund um die Uhr,\n"
	.string "damit es nie langweilig wird.\p"
	.string "Ich geb auch mein Bestes,\n"
	.string "den ganzen Tag!$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFPleaseSave:
	.string "Der BOSS von TEAM ROCKET hat\n"
	.string "sich eingeschlossen.\p"
	.string "Nur der INTENDANT kann öffnen.\p"
	.string "Er ist im fünften Stock.\p"
	.string "Bitte rette ihn!$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFDirectorSafe:
	.string "Konntest du den INTENDANTEN\n"
	.string "retten?$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFHeroGift:
	.string "Danke! Du bist mein Held!\p"
	.string "Nimm dies als Dankesgeschenk.$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFSunnyDay:
	.string "Das ist Fähigkeitstausch.\n"
	.string "Es tauscht die Fähigkeit eines\l"
	.string "Pokémon mit der eines anderen.$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFMarvelous:
	.string "Du warst einfach großartig!$"

GoldenrodCity_RadioTower_3F_Text_GruntM7Seen:
	.string "Ich habe strikte Befehle.\p"
	.string "Ich soll jeden zerschmettern,\n"
	.string "der TEAM ROCKET herausfordert!$"

GoldenrodCity_RadioTower_3F_Text_GruntM7Beaten:
	.string "Was?!$"

GoldenrodCity_RadioTower_3F_Text_GruntM7After:
	.string "Ich habe versagt…\p"
	.string "Atlas wird so wütend sein…$"

GoldenrodCity_RadioTower_3F_Text_GruntM8Seen:
	.string "Es fühlt sich großartig an,\n"
	.string "Pokémon Verbrechen begehen\l"
	.string "zu lassen.$"

GoldenrodCity_RadioTower_3F_Text_GruntM8Beaten:
	.string "Das ist doch nicht dein Ernst!$"

GoldenrodCity_RadioTower_3F_Text_GruntM8After:
	.string "Ich fühl mich miserabel…\p"
	.string "Verdammt! Ich hasse nutzlose\n"
	.string "Pokémon!$"

GoldenrodCity_RadioTower_3F_Text_GruntM9Seen:
	.string "Warum ging das Gitter auf?\n"
	.string "Hast du etwas damit zu tun?$"

GoldenrodCity_RadioTower_3F_Text_GruntM9Beaten:
	.string "Ich bin erledigt!$"

GoldenrodCity_RadioTower_3F_Text_GruntM9After:
	.string "Was?! Du kamst an unseren\n"
	.string "Leuten im UNTERGRUND vorbei?\p"
	.string "Wie hast du das geschafft?$"

GoldenrodCity_RadioTower_3F_Text_ScientistMarcSeen:
	.string "Ein fremdes Kind hier drin?\p"
	.string "Wer bist du?$"

GoldenrodCity_RadioTower_3F_Text_ScientistMarcBeaten:
	.string "Tch! Ich hab dich unterschätzt!$"

GoldenrodCity_RadioTower_3F_Text_ScientistMarcAfter:
	.string "Bwahahaha…\p"
	.string "Ich kann von hier aus ein so\n"
	.string "starkes Signal senden, genau\l"
	.string "wie ich es brauche.$"

