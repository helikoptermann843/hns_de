GoldenrodCity_RadioTower_2F_hns_MapScripts::
	.byte 0

GoldenrodRaidoTower2_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_3_HNS, GoldenrodCity_RadioTower_2F_Text_GruntM4Seen, GoldenrodCity_RadioTower_2F_Text_GruntM4Beaten
	msgbox GoldenrodCity_RadioTower_2F_Text_GruntM4After, MSGBOX_AUTOCLOSE
	end
GoldenrodRaidoTower2_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_4_HNS, GoldenrodCity_RadioTower_2F_Text_GruntM5Seen, GoldenrodCity_RadioTower_2F_Text_GruntM5Beaten
	msgbox GoldenrodCity_RadioTower_2F_Text_GruntM5After, MSGBOX_AUTOCLOSE
	end
GoldenrodRaidoTower2_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_5_HNS, GoldenrodCity_RadioTower_2F_Text_GruntM6Seen, GoldenrodCity_RadioTower_2F_Text_GruntM6Beaten
	msgbox GoldenrodCity_RadioTower_2F_Text_GruntM6After, MSGBOX_AUTOCLOSE
	end
GoldenrodRaidoTower2_EventScript_GruntF2::
	trainerbattle_single TRAINER_GRUNT_26_HNS, GoldenrodCity_RadioTower_2F_Text_GruntF2Seen, GoldenrodCity_RadioTower_2F_Text_GruntF2Beaten
	msgbox GoldenrodCity_RadioTower_2F_Text_GruntF2After, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_RadioTower_2F_EventScript_Sign1::
	lock
	msgbox GoldenrodCity_RadioTower_2F_Text_SalesSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_Sign2::
	lock
	msgbox GoldenrodCity_RadioTower_2F_Text_OakTalkSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_Boy::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_2F_Text_SuperNerd, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_Policeman::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_2F_Text_Policeman, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_Buena::
	lock
	faceplayer
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 6, GoldenrodCity_RadioTower_2F_EventScript_Buena2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 7, GoldenrodCity_RadioTower_2F_EventScript_Buena2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 8, GoldenrodCity_RadioTower_2F_EventScript_Buena2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 9, GoldenrodCity_RadioTower_2F_EventScript_Buena2
	msgbox GoldenrodCity_RadioTower_2F_Text_BuenaShowPromo, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_Buena2::
	msgbox RadioTower2FBuenaPasswordIsHelpText, MSGBOX_DEFAULT
	closemessage
	release
	end


GoldenrodCity_RadioTower_2F_EventScript_Teacher::
	lock
	faceplayer
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 6, GoldenrodCity_RadioTower_2F_EventScript_Teacher2
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 7, GoldenrodCity_RadioTower_2F_EventScript_Teacher2 
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 8, GoldenrodCity_RadioTower_2F_EventScript_Teacher2 
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 9, GoldenrodCity_RadioTower_2F_EventScript_Teacher2 
	msgbox GoldenrodCity_RadioTower_2F_Text_Teacher, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_Teacher2::
	msgbox GoldenrodCity_RadioTower_2F_Text_TeacherRockets, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_2F_EventScript_Jigglypuff::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_JIGGLYPUFF, CRY_MODE_NORMAL
	msgbox GoldenrodCity_RadioTower_2F_Text_Jigglypuff, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RadioTower2FBuenaPasswordIsHelpText:
	.string "BUENA: Huh? Today's password?\n"
	.string "HELP, of course!$"

GoldenrodCity_RadioTower_2F_Text_SuperNerd:
	.string "Du kannst überall Radio hören.\n"
	.string "Stell einfach ein!$"

GoldenrodCity_RadioTower_2F_Text_Policeman:
	.string "Zutritt hinter diesem Punkt\n"
	.string "verboten.$"

GoldenrodCity_RadioTower_2F_Text_Teacher:
	.string "Wiegenlieder im Radio lassen\n"
	.string "Pokémon einschlafen.$"

GoldenrodCity_RadioTower_2F_Text_TeacherRockets:
	.string "Warum wollen sie wohl den\n"
	.string "Radioturm übernehmen?$"

GoldenrodCity_RadioTower_2F_Text_Jigglypuff:
	.string "Pummeluff: Puuu…$"

GoldenrodCity_RadioTower_2F_Text_BlackBelt1:
	.string "Sorry. Nur befugtes Personal darf\n"
	.string "weiter.\p"
	.string "Früher war das nicht so.\p"
	.string "Mit dem DIREKTOR stimmt etwas\n"
	.string "nicht…$"

GoldenrodCity_RadioTower_2F_Text_BlackBelt2:
	.string "Schau dich ruhig überall um.\p"
	.string "Der DIREKTOR ist wieder nett,\n"
	.string "so wie früher.$"

GoldenrodCity_RadioTower_2F_Text_GruntM4Seen:
	.string "Vor drei Jahren wurde TEAM\n"
	.string "ROCKET aufgelöst.\p"
	.string "Aber wir kehren hier zurück!$"

GoldenrodCity_RadioTower_2F_Text_GruntM4Beaten:
	.string "Gwah! Werd nicht frech!$"

GoldenrodCity_RadioTower_2F_Text_GruntM4After:
	.string "Wir lassen dich unseren großen\n"
	.string "Plan nicht ruinieren!$"

GoldenrodCity_RadioTower_2F_Text_GruntM5Seen:
	.string "Wir sind TEAM ROCKET, die\n"
	.string "Ausbeuter von Pokémon!\p"
	.string "Wir lieben das Böse!\n"
	.string "Na, Angst?$"

GoldenrodCity_RadioTower_2F_Text_GruntM5Beaten:
	.string "Glaubst du, du bist ein Held?$"

GoldenrodCity_RadioTower_2F_Text_GruntM5After:
	.string "Wir sind nicht immer böse.\n"
	.string "Wir tun, was wir wollen.$"

GoldenrodCity_RadioTower_2F_Text_GruntM6Seen:
	.string "Hey, hey! Bleib uns aus dem Weg!$"

GoldenrodCity_RadioTower_2F_Text_GruntM6Beaten:
	.string "Arrgh. Ich geb auf.$"

GoldenrodCity_RadioTower_2F_Text_GruntM6After:
	.string "Unsere BOSSE versuchen, diesen\n"
	.string "Ort zu übernehmen.\p"
	.string "Sie haben einen großen Plan.\n"
	.string "Was der wohl ist?$"

GoldenrodCity_RadioTower_2F_Text_GruntF2Seen:
	.string "Hahaha!\p"
	.string "Wie langweilig. Es war viel zu\n"
	.string "leicht, diesen Ort zu nehmen!\p"
	.string "Los, unterhalte mich!$"

GoldenrodCity_RadioTower_2F_Text_GruntF2Beaten:
	.string "W-wer bist du?$"

GoldenrodCity_RadioTower_2F_Text_GruntF2After:
	.string "Du hast mich besiegt.\n"
	.string "Ich vergesse das nicht!$"

GoldenrodCity_RadioTower_2F_Text_BuenaShowPromo:
	.string "Buena: Hör in meine\n"
	.string "PASSWORT-SHOW rein!$"

GoldenrodCity_RadioTower_2F_Text_SalesSign:
	.string "1S VERKAUF$"

GoldenrodCity_RadioTower_2F_Text_OakTalkSign:
	.string "PROF. EICHs POKéMON-TALK\p"
	.string "Die heißeste Show im Radio!$"

GoldenrodCity_RadioTower_2F_Text_PokemonRadioSign:
	.string "Überall und jederzeit:\n"
	.string "Pokémon-Radio!$"
