Route41_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route41_MapScript_OnTransition
	.byte 0

Route41_MapScript_OnTransition::
	goto_if_eq VAR_COMPLETED_LUGIA, 4, Route41_MapScript_DoNothing
	goto_if_ge VAR_OLIVINE_CITY_STATE, 5, OlivineCity_MapScript_ClearWeather
	end

Route41_MapScript_DoNothing::
	end

Route41_EventScript_Charlie::
	trainerbattle_single TRAINER_CHARLIE_HNS, Route41_Text_SwimmermCharlieSeen, Route41_Text_SwimmermCharlieBeaten
	msgbox Route41_Text_SwimmermCharlieAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmermCharlieSeen:
	.string "Das Wasser ist\n"
	.string "schön warm. Ich bin also sehr locker\n"
	.string "und gelenk.\p"
	.string "Natürlich trete ich gegen dich an!$"

Route41_Text_SwimmermCharlieBeaten:
	.string "Oje! Ich habe eine Gänsehaut!$"

Route41_Text_SwimmermCharlieAfter:
	.string "Ist es nicht entspannend,\n"
	.string "sich so treiben zu lassen?$"

Route41_EventScript_George::
	trainerbattle_single TRAINER_GEORGE_HNS, Route41_Text_SwimmermGeorgeSeen, Route41_Text_SwimmermGeorgeBeaten
	msgbox Route41_Text_SwimmermGeorgeAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmermGeorgeSeen:
	.string "Ich bin etwas\n"
	.string "müde. Wenn ich gewinne, leihst du mir\l"
	.string "dein Pokémon.$"

Route41_Text_SwimmermGeorgeBeaten:
	.string "Keuch, japs…$"

Route41_Text_SwimmermGeorgeAfter:
	.string "Es ist weit bis nach Anemonia.\p"
	.string "Aber der Weg zurück nach\n"
	.string "Oliviana genauso.\p"
	.string "Was mach ich bloß?$"

Route41_EventScript_Berke::
	trainerbattle_single TRAINER_BERKE_HNS, Route41_Text_SwimmermBerkeSeen, Route41_Text_SwimmermBerkeBeaten
	msgbox Route41_Text_SwimmermBerkeAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmermBerkeSeen:
	.string "Siehst du diese\n"
	.string "Inseln, die von den Strudeln blockiert\n"
	.string "werden?\p"
	.string "Dort gibt es bestimmt ein Geheimnis!$"

Route41_Text_SwimmermBerkeBeaten:
	.string "Was ist das Geheimnis deiner Stärke?$"

Route41_Text_SwimmermBerkeAfter:

Route41_EventScript_Kirk::
	trainerbattle_single TRAINER_KIRK_HNS, Route41_Text_SwimmermKirkSeen, Route41_Text_SwimmermKirkBeaten
	msgbox Route41_Text_SwimmermKirkAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmermKirkSeen:
	.string "Hier gibt es hohe Wellen.\p"
	.string "Das macht dich schnell müde.$"

Route41_Text_SwimmermKirkBeaten:
	.string "Ich bin besiegt!$"

Route41_Text_SwimmermKirkAfter:
	.string "Die Strömung lässt mich\n"
	.string "die Insel nicht erreichen.$"

Route41_EventScript_Mathew::
	trainerbattle_single TRAINER_MATHEW_HNS, Route41_Text_SwimmermMathewSeen, Route41_Text_SwimmermMathewBeaten
	msgbox Route41_Text_SwimmermMathewAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmermMathewSeen:
	.string "Suchst du die\n"
	.string "Geheimnisse der STRUDELINSELN?$"

Route41_Text_SwimmermMathewBeaten:
	.string "Ach. Du hast viel Ausdauer!$"

Route41_Text_SwimmermMathewAfter:
	.string "Ein Geheimnis über die Strudelinseln…\n"
	.string "\p"
	.string "drinnen ist es Stockfinster!$"

Route41_EventScript_Kaylee::
	trainerbattle_single TRAINER_KAYLEE_HNS, Route41_Text_SwimmerfKayleeSeen, Route41_Text_SwimmerfKayleeBeaten
	msgbox Route41_Text_SwimmerfKayleeAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmerfKayleeSeen:
	.string "Ich bin auf dem\n"
	.string "Weg zu den STRUDELINSELN.\p"
	.string "Ich gehe mit\n"
	.string "meinen Kameraden auf Erkundungsreise.$"

Route41_Text_SwimmerfKayleeBeaten:
	.string "Ist es so richtig?$"

Route41_Text_SwimmerfKayleeAfter:

Route41_EventScript_Susie::
	trainerbattle_single TRAINER_SUSIE_HNS, Route41_Text_SwimmerfSusieSeen, Route41_Text_SwimmerfSusieBeaten
	msgbox Route41_Text_SwimmerfSusieAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmerfSusieSeen:
	.string "Du gleitest so\n"
	.string "elegant auf deinem Pokémon dahin.$"

Route41_Text_SwimmerfSusieBeaten:
	.string "Ich bin geschlagen…$"

Route41_Text_SwimmerfSusieAfter:

Route41_EventScript_Denise::
	trainerbattle_single TRAINER_DENISE_HNS, Route41_Text_SwimmerfDeniseSeen, Route41_Text_SwimmerfDeniseBeaten
	msgbox Route41_Text_SwimmerfDeniseAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmerfDeniseSeen:
	.string "Das Wetter ist so\n"
	.string "herrlich. Ich bin richtig benommen!$"

Route41_Text_SwimmerfDeniseBeaten:
	.string "Ohhh!$"

Route41_Text_SwimmerfDeniseAfter:

Route41_EventScript_Kara::
	trainerbattle_single TRAINER_KARA_HNS, Route41_Text_SwimmerfKaraSeen, Route41_Text_SwimmerfKaraBeaten
	msgbox Route41_Text_SwimmerfKaraAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmerfKaraSeen:
	.string "Wenn du eine Pause\n"
	.string "brauchst, dann halte deinen Kopf über\n"
	.string "Wasser und paddle mit den Füßen.\p"
	.string "Auf diese Weise legst du eine\p"
	.string "Ruhepause ein und sammelst Energie.$"

Route41_Text_SwimmerfKaraBeaten:
	.string "Oh! Du bist ausgeruhter als ich.$"

Route41_Text_SwimmerfKaraAfter:
	.string "Ich habe tief im innern ein\n"
	.string "Brüllen gehört.$"

Route41_EventScript_Wendy::
	trainerbattle_single TRAINER_WENDY_HNS, Route41_Text_SwimmerfWendySeen, Route41_Text_SwimmerfWendyBeaten
	msgbox Route41_Text_SwimmerfWendyAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmerfWendySeen:
	.string "NACHTs sammeln\n"
	.string "sich STERNDU nahe der\l"
	.string "Wasseroberfläche.$"

Route41_Text_SwimmerfWendyBeaten:
	.string "Oje…$"

Route41_Text_SwimmerfWendyAfter:
	.string "Sterndu in Gruppen leuchten\n"
	.string "zur gleichen Zeit.\p"
	.string "Sie sind so wunderschön.$"

Route41_EventScript_Tentacruel1::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TENTACRUEL, CRY_MODE_NORMAL
	goto_if_ge VAR_TEMP_0, 2, Route41_EventScript_TentacruelAttack1
	msgbox Route41_Text_Tentacruel, MSGBOX_DEFAULT
	waitmoncry
	addvar VAR_TEMP_0, 1
	release
	end
Route41_EventScript_TentacruelAttack1::
	msgbox Route41_Text_TentacruelAttack, MSGBOX_DEFAULT
	waitmessage
	setflag FLAG_SYS_NO_CATCHING
	setflag FLAG_NO_SHINY
	setwildbattle SPECIES_TENTACRUEL, 100, ITEM_NONE
	dowildbattle
	closemessage
	clearflag FLAG_SYS_NO_CATCHING
	clearflag FLAG_NO_SHINY
	playse SE_USE_ITEM
	msgbox Route41_Text_TentacruelHeal, MSGBOX_DEFAULT
	setvar VAR_TEMP_0, 0
	closemessage
	release
	end

Route41_EventScript_Tentacruel2::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TENTACRUEL, CRY_MODE_NORMAL
	goto_if_ge VAR_TEMP_1, 2, Route41_EventScript_TentacruelAttack2
	msgbox Route41_Text_Tentacruel, MSGBOX_DEFAULT
	waitmoncry
	addvar VAR_TEMP_1, 1
	release
	end
Route41_EventScript_TentacruelAttack2::
	msgbox Route41_Text_TentacruelAttack, MSGBOX_DEFAULT
	waitmessage
	setwildbattle SPECIES_TENTACRUEL, 100, ITEM_NONE
	dowildbattle
	closemessage
	playse SE_USE_ITEM
	msgbox Route41_Text_TentacruelHeal, MSGBOX_DEFAULT
	setvar VAR_TEMP_1, 0
	closemessage
	release
	end

Route41_EventScript_Tentacruel3::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TENTACRUEL, CRY_MODE_NORMAL
	goto_if_ge VAR_TEMP_2, 2, Route41_EventScript_TentacruelAttack3
	msgbox Route41_Text_Tentacruel, MSGBOX_DEFAULT
	waitmoncry
	addvar VAR_TEMP_2, 1
	release
	end
Route41_EventScript_TentacruelAttack3::
	msgbox Route41_Text_TentacruelAttack, MSGBOX_DEFAULT
	waitmessage
	setwildbattle SPECIES_TENTACRUEL, 100, ITEM_NONE
	dowildbattle
	closemessage
	playse SE_USE_ITEM
	msgbox Route41_Text_TentacruelHeal, MSGBOX_DEFAULT
	setvar VAR_TEMP_2, 0
	closemessage
	release
	end

Route41_EventScript_Tentacruel4::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TENTACRUEL, CRY_MODE_NORMAL
	goto_if_ge VAR_TEMP_3, 2, Route41_EventScript_TentacruelAttack4
	msgbox Route41_Text_Tentacruel, MSGBOX_DEFAULT
	waitmoncry
	addvar VAR_TEMP_3, 1
	release
	end
Route41_EventScript_TentacruelAttack4::
	msgbox Route41_Text_TentacruelAttack, MSGBOX_DEFAULT
	waitmessage
	setwildbattle SPECIES_TENTACRUEL, 100, ITEM_NONE
	dowildbattle
	closemessage
	playse SE_USE_ITEM
	msgbox Route41_Text_TentacruelHeal, MSGBOX_DEFAULT
	setvar VAR_TEMP_3, 0
	closemessage
	release
	end

Route41_Text_Tentacruel:
	.string "Tentoxa: Cruooo...$"

Route41_Text_TentacruelAttack:
	.string "Tentoxa: CRUOOOOOO!$"

Route41_Text_TentacruelHeal:
	.string "Das Tentoxa benutzt Genesung!\n"
	.string "Es ist vollständig geheilt!$"
