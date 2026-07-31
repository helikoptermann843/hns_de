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
	.string "Das Wasser ist schön warm. Ich\n"
	.string "fühle mich locker und gelenkig.\l"
	.string "Natürlich trete ich gegen dich an!$"

Route41_Text_SwimmermCharlieBeaten:
	.string "Oje! Meine Haut ist\n"
	.string "schon ganz schrumpelig!$"

Route41_Text_SwimmermCharlieAfter:
	.string "Ist es nicht entspannend, sich auf dem\n"
	.string "Wasser treiben zu lassen?$"

Route41_EventScript_George::
	trainerbattle_single TRAINER_GEORGE_HNS, Route41_Text_SwimmermGeorgeSeen, Route41_Text_SwimmermGeorgeBeaten
	msgbox Route41_Text_SwimmermGeorgeAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmermGeorgeSeen:
	.string "Ich bin etwas müde.\n"
	.string "Wenn ich gewinne, leihst du mir\l"
	.string "dann dein Pokémon?$"

Route41_Text_SwimmermGeorgeBeaten:
	.string "Keuch, japs…$"

Route41_Text_SwimmermGeorgeAfter:
	.string "Anemonia City ist noch so weit weg. Aber\n"
	.string "der Rückweg nach Oliviana City ist auch\l"
	.string "nicht viel kürzer… was soll ich tun?$"

Route41_EventScript_Berke::
	trainerbattle_single TRAINER_BERKE_HNS, Route41_Text_SwimmermBerkeSeen, Route41_Text_SwimmermBerkeBeaten
	msgbox Route41_Text_SwimmermBerkeAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmermBerkeSeen:
	.string "Die Inseln hinter den Strudeln bergen\n"
	.string "doch bestimmt irgendein Geheimnis!$"

Route41_Text_SwimmermBerkeBeaten:
	.string "Was ist das Geheimnis deiner Stärke?$"

Route41_Text_SwimmermBerkeAfter:
	.string "Es war eine dunkle und stürmische\n"
	.string "Nacht…\p"
	.string "als ich dieses riesige Pokémon\n"
	.string "über den Inseln aufsteigen sah.\l"
	.string "Aus seinen silbernen Flügeln\l"
	.string "wehten einige Federn durch die Luft.$"

Route41_EventScript_Kirk::
	trainerbattle_single TRAINER_KIRK_HNS, Route41_Text_SwimmermKirkSeen, Route41_Text_SwimmermKirkBeaten
	msgbox Route41_Text_SwimmermKirkAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmermKirkSeen:
	.string "Hier gibt es hohe Wellen.\n"
	.string "Da ist man schnell außer Puste.$"

Route41_Text_SwimmermKirkBeaten:
	.string "I-ich bin fix und fertig!$"

Route41_Text_SwimmermKirkAfter:
	.string "Die Strömung ist zu stark. Ich kann\n"
	.string "die Inseln nicht erreichen.$"

Route41_EventScript_Mathew::
	trainerbattle_single TRAINER_MATHEW_HNS, Route41_Text_SwimmermMathewSeen, Route41_Text_SwimmermMathewBeaten
	msgbox Route41_Text_SwimmermMathewAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmermMathewSeen:
	.string "Versuchst du auch, die Geheimnisse\n"
	.string "der Strudelinseln zu ergründen?$"

Route41_Text_SwimmermMathewBeaten:
	.string "Uff! Vor dir nimmt man sich\n"
	.string "besser in Acht!$"

Route41_Text_SwimmermMathewAfter:
	.string "Ein Geheimnis über die Strudelinseln…\n"
	.string "drinnen ist es Stockfinster!$"

Route41_EventScript_Kaylee::
	trainerbattle_single TRAINER_KAYLEE_HNS, Route41_Text_SwimmerfKayleeSeen, Route41_Text_SwimmerfKayleeBeaten
	msgbox Route41_Text_SwimmerfKayleeAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmerfKayleeSeen:
	.string "Meine Freunde und ich sind unterwegs zu\n"
	.string "den Strudelinseln, auf Erkundungstour.$"

Route41_Text_SwimmerfKayleeBeaten:
	.string "Hmpf, na gut.$"

Route41_Text_SwimmerfKayleeAfter:
	.string "Tief im Inneren der Strudelinseln\n"
	.string "soll ein riesiges Pokémon hausen.\l"
	.string "Was für ein Pokémon das wohl ist?$"

Route41_EventScript_Susie::
	trainerbattle_single TRAINER_SUSIE_HNS, Route41_Text_SwimmerfSusieSeen, Route41_Text_SwimmerfSusieBeaten
	msgbox Route41_Text_SwimmerfSusieAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmerfSusieSeen:
	.string "Du gleitest so elegant auf deinem\n"
	.string "Pokémon dahin.$"

Route41_Text_SwimmerfSusieBeaten:
	.string "Du bist eben einfach umwerfend!$"

Route41_Text_SwimmerfSusieAfter:
	.string "Da gab es doch diesen Song über den\n"
	.string "Jungen, der auf einem Lapras reitet…$"

Route41_EventScript_Denise::
	trainerbattle_single TRAINER_DENISE_HNS, Route41_Text_SwimmerfDeniseSeen, Route41_Text_SwimmerfDeniseBeaten
	msgbox Route41_Text_SwimmerfDeniseAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmerfDeniseSeen:
	.string "Das Wetter ist so herrlich.\n"
	.string "Ich bin richtig verzückt!$"

Route41_Text_SwimmerfDeniseBeaten:
	.string "Hach!$"

Route41_Text_SwimmerfDeniseAfter:
	.string "Sonnenbrand ist sehr schlecht für\n"
	.string "die Haut.\p"
	.string "Aber ich verwende keine Sonnencreme.\n"
	.string "Ich will das Meer nicht verschmutzen.$"

Route41_EventScript_Kara::
	trainerbattle_single TRAINER_KARA_HNS, Route41_Text_SwimmerfKaraSeen, Route41_Text_SwimmerfKaraBeaten
	msgbox Route41_Text_SwimmerfKaraAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmerfKaraSeen:
	.string "Erschöpft? Halte einfach deinen Kopf\n"
	.string "über Wasser und paddle mit den Füßen.\l"
	.string "Dann bist du wieder quietschfidel!$"

Route41_Text_SwimmerfKaraBeaten:
	.string "Ach Mann! Ich glaube, auf dich trifft\n"
	.string "quietschfidel viel eher zu!$"

Route41_Text_SwimmerfKaraAfter:
	.string "Ich habe tief aus dem Inneren der\n"
	.string "Strudelinseln ein Brüllen gehört.$"

Route41_EventScript_Wendy::
	trainerbattle_single TRAINER_WENDY_HNS, Route41_Text_SwimmerfWendySeen, Route41_Text_SwimmerfWendyBeaten
	msgbox Route41_Text_SwimmerfWendyAfter, MSGBOX_AUTOCLOSE
	end

Route41_Text_SwimmerfWendySeen:
	.string "Wenn es Nacht wird, sammeln sich\n"
	.string "Schwärme von Sterndu\l"
	.string "nahe der Küste von Oliviana City.$"

Route41_Text_SwimmerfWendyBeaten:
	.string "Oje…$"

Route41_Text_SwimmerfWendyAfter:
	.string "In der Gruppe fangen Sterndu an zu\n"
	.string "leuchten. Das ist so wunderschön, dass\l"
	.string "man fast schon Angst bekommt!$"

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
	setflag FLAG_NO_WILD_CATCHING
	setflag FLAG_NO_SHINY
	setwildbattle SPECIES_TENTACRUEL, 100, ITEM_NONE
	dowildbattle
	closemessage
	clearflag FLAG_NO_WILD_CATCHING
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
	.string "Tentoxa: Cruooo…$"

Route41_Text_TentacruelAttack:
	.string "Tentoxa: Cruoooooo!$"

Route41_Text_TentacruelHeal:
	.string "Das Tentoxa benutzt Genesung!\n"
	.string "Es ist vollständig geheilt!$"
