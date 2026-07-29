ViridianForest_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianForest_OnTransition
	.byte 0

ViridianForest_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_FOREST
	end

ViridianForest_EventScript_Youngster::
	msgbox ViridianForest_Text_FriendsItchingToBattle, MSGBOX_NPC
	end

ViridianForest_EventScript_Boy::
	msgbox ViridianForest_Text_RanOutOfPokeBalls, MSGBOX_NPC
	end

ViridianForest_EventScript_TrainerTips1::
	msgbox ViridianForest_Text_AvoidGrassyAreasWhenWeak, MSGBOX_SIGN
	end

ViridianForest_EventScript_TrainerTips2::
	msgbox ViridianForest_Text_UseAntidoteForPoison, MSGBOX_SIGN
	end

ViridianForest_EventScript_TrainerTips3::
	msgbox ViridianForest_Text_ContactOakViaPCToRatePokedex, MSGBOX_SIGN
	end

ViridianForest_EventScript_TrainerTips4::
	msgbox ViridianForest_Text_CantCatchOwnedMons, MSGBOX_SIGN
	end

ViridianForest_EventScript_TrainerTips5::
	msgbox ViridianForest_Text_WeakenMonsBeforeCapture, MSGBOX_SIGN
	end

ViridianForest_EventScript_ExitSign::
	msgbox ViridianForest_Text_LeavingViridianForest, MSGBOX_SIGN
	end

ViridianForest_EventScript_Rick::
	trainerbattle_single TRAINER_BUG_CATCHER_RICK, ViridianForest_Text_RickIntro, ViridianForest_Text_RickDefeat
	msgbox ViridianForest_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_EventScript_Doug::
	trainerbattle_single TRAINER_BUG_CATCHER_DOUG, ViridianForest_Text_DougIntro, ViridianForest_Text_DougDefeat
	msgbox ViridianForest_Text_DougPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_EventScript_Sammy::
	trainerbattle_single TRAINER_BUG_CATCHER_SAMMY, ViridianForest_Text_SammyIntro, ViridianForest_Text_SammyDefeat
	msgbox ViridianForest_Text_SammyPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_EventScript_Anthony::
	trainerbattle_single TRAINER_BUG_CATCHER_ANTHONY, ViridianForest_Text_AnthonyIntro, ViridianForest_Text_AnthonyDefeat
	msgbox ViridianForest_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_EventScript_Charlie::
	trainerbattle_single TRAINER_BUG_CATCHER_CHARLIE, ViridianForest_Text_CharlieIntro, ViridianForest_Text_CharlieDefeat
	msgbox ViridianForest_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end

ViridianForest_Text_FriendsItchingToBattle::
	.string "Meine Freunde und ich wollten hier\n"
	.string "Käfer-Pokémon fangen…\p"
	.string "Unsere Pokémon wollen kämpfen!!!$"

ViridianForest_Text_RickIntro::
	.string "Heh! Du hast auch Pokémon! Los!\n"
	.string "Lass uns kämpfen!$"

ViridianForest_Text_RickDefeat::
	.string "Ah!\n"
	.string "Raupy hat es nicht geschafft!$"

ViridianForest_Text_RickPostBattle::
	.string "Psst! Sei leise!\n"
	.string "Du verjagst alle Käfer...$"

ViridianForest_Text_DougIntro::
	.string "Heh!\n"
	.string "Ein Pokémon Trainer stiehlt sich\l"
	.string "nicht so einfach davon!!!$"

ViridianForest_Text_DougDefeat::
	.string "Oh! Ich habe kein kampfbereites\n"
	.string "Pokémon mehr!$"

ViridianForest_Text_DougPostBattle::
	.string "So ein Mist! Ich muss ein paar\n"
	.string "Stärkere fangen!$"

ViridianForest_Text_SammyIntro::
	.string "Heh, warte!\n"
	.string "Warum die Eile?$"

ViridianForest_Text_SammyDefeat::
	.string "Uff!\n"
	.string "Du bist zu gut! Ich gebe auf!$"

ViridianForest_Text_SammyPostBattle::
	.string "Mit ein bisschen Glück findet man\n"
	.string "unterwegs Items!\p"
	.string "Ich muss hier irgendwo etwas\n"
	.string "verloren haben...$"

ViridianForest_Text_AnthonyIntro::
	.string "Ich bin zwar klein, aber ich will\n"
	.string "nicht, dass du mich deswegen\l"
	.string "gewinnen lässt!$"

ViridianForest_Text_AnthonyDefeat::
	.string "Oh, nein! Alles ist schief\n"
	.string "gegangen!$"

ViridianForest_Text_AnthonyPostBattle::
	.string "Ich habe meinen Kredit\n"
	.string "verspielt…$"

ViridianForest_Text_CharlieIntro::
	.string "Weißt du, dass Pokémon sich\n"
	.string "entwickeln?$"

ViridianForest_Text_CharlieDefeat::
	.string "Oh!\n"
	.string "Ich hab verloren!$"

ViridianForest_Text_CharliePostBattle::
	.string "Käfer-pokémon entwickeln sich\n"
	.string "schnell. Sie sind einfach toll!$"

ViridianForest_Text_RanOutOfPokeBalls::
	.string "Verdammt! Mir sind die Pokébälle\n"
	.string "ausgegangen! Wie fange ich nun\l"
	.string "bloß Pokémon?\p"
	.string "Du solltest immer genug Pokébälle\n"
	.string "bei dir haben!$"

ViridianForest_Text_AvoidGrassyAreasWhenWeak::
	.string "Tipps für Trainer\p"
	.string "Wenn du Kämpfe meiden möchtest,\n"
	.string "bleibe hohem Gras fern!$"

ViridianForest_Text_UseAntidoteForPoison::
	.string "Bei Vergiftungen hat sich das\n"
	.string "Gegengift aus dem Pokémon-\l"
	.string "Supermarkt bewährt.$"

ViridianForest_Text_ContactOakViaPCToRatePokedex::
	.string "Tipps für Trainer\p"
	.string "Du kannst deinen Pokédex jederzeit\n"
	.string "von Prof. Eich via PC bewerten\l"
	.string "lassen!$"

ViridianForest_Text_CantCatchOwnedMons::
	.string "Tipps für Trainer\p"
	.string "Es ist verboten, anderen Trainern\n"
	.string "Pokémon zu stehlen! Fang nur wilde\l"
	.string "Pokémon!$"

ViridianForest_Text_WeakenMonsBeforeCapture::
	.string "Tipps für Trainer\p"
	.string "Geschwächte Pokémon sind leichter\n"
	.string "zu fangen!\p"
	.string "Sind sie bei Kräften, könnten sie\n"
	.string "fliehen!$"

ViridianForest_Text_LeavingViridianForest::
	.string "Auf Wiedersehen im Vertania-Wald\n"
	.string "Der Nächste Ort ist Marmoria\l"
	.string "City.$"

