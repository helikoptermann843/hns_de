Route45_hns_MapScripts::
	.byte 0

Route45_EventScript_Erik::
	trainerbattle_single TRAINER_ERIK_HNS, Route45_Text_HikerErikSeen, Route45_Text_HikerErikBeaten
	msgbox Route45_Text_HikerErikAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Michael::
	trainerbattle_single TRAINER_MICHAEL_HNS, Route45_Text_HikerMichaelSeen, Route45_Text_HikerMichaelBeaten
	msgbox Route45_Text_HikerMichaelAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Parry::
	trainerbattle_single TRAINER_PARRY_HNS, Route45_Text_HikerParrySeen, Route45_Text_HikerParryBeaten, Route45_EventScript_RegisterParry
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route45_EventScript_RematchParry
	msgbox Route45_Text_HikerParryAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_RegisterParry::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route45_Text_ParryRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_PARRY_HNS
	release
	end

Route45_EventScript_RematchParry::
	trainerbattle_rematch TRAINER_PARRY_HNS, Route45_Text_ParryRematchIntro, Route45_Text_ParryRematchDefeat
	msgbox Route45_Text_ParryPostRematch, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Timothy::
	trainerbattle_single TRAINER_TIMOTHY_HNS, Route45_Text_HikerTimothySeen, Route45_Text_HikerTimothyBeaten
	msgbox Route45_Text_HikerTimothyAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Kenji::
	trainerbattle_single TRAINER_KENJI_HNS, Route45_Text_BlackbeltKenjiSeen, Route45_Text_BlackbeltKenjiBeaten, Route45_EventScript_RegisterKenji
	goto_if_set FLAG_KENJI_HAS_ITEM_HNS, Route45_EventScript_KenjiGiveItem
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route45_EventScript_RematchKenji
	msgbox Route45_Text_BlackbeltKenjiAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_RegisterKenji::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route45_Text_KenjiRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_KENJI_HNS
	release
	end

Route45_EventScript_RematchKenji::
	trainerbattle_rematch TRAINER_KENJI_HNS, Route45_Text_KenjiRematchIntro, Route45_Text_KenjiRematchDefeat
	msgbox Route45_Text_KenjiPostRematch, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_KenjiGiveItem::
	msgbox Route45_Text_KenjiHasItem, MSGBOX_DEFAULT
	giveitem VAR_KENJI_ITEM_HNS
	goto_if_eq VAR_RESULT, FALSE, Route45_EventScript_KenjiNoRoom
	clearflag FLAG_KENJI_HAS_ITEM_HNS
	msgbox Route45_Text_KenjiGaveItem, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_KenjiNoRoom::
	msgbox Route45_Text_KenjiNoRoom, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Ryan::
	trainerbattle_single TRAINER_RYAN_HNS, Route45_Text_CooltrainermRyanSeen, Route45_Text_CooltrainermRyanBeaten
	msgbox Route45_Text_CooltrainermRyanAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Kelly::
	trainerbattle_single TRAINER_KELLY_HNS, Route45_Text_CooltrainerfKellySeen, Route45_Text_CooltrainerfKellyBeaten
	msgbox Route45_Text_CooltrainerfKellyAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Quentin::
	trainerbattle_single TRAINER_QUENTIN_HNS, Route45_Text_CamperQuentinSeen, Route45_Text_CamperQuentinBeaten
	msgbox Route45_Text_CamperQuentinAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Sign::
	msgbox Route45_Text_Sign, MSGBOX_SIGN
	end

Route45_EventScript_Item_Elixir::
	finditem ITEM_ELIXIR
	end

Route45_EventScript_Item_Max_Potion::
	finditem ITEM_MAX_POTION
	end

Route45_EventScript_Item_Full_Heal::
	finditem ITEM_FULL_HEAL
	end

Route45_EventScript_Item_Nugget::
	finditem ITEM_NUGGET
	end

Route45_Text_HikerErikSeen:
	.string "Sei auf alles vorbereitet! Zeig mal, wie\n"
	.string "gut du deine Pokémon trainiert hast!$"

Route45_Text_HikerErikBeaten:
    .string "Oh, ich habe verloren!$"

Route45_Text_HikerErikAfter:
	.string "Ich gehe zum Eispfad bei Ebenholz City,\n"
	.string "um noch etwas mehr zu trainieren.$"

Route45_Text_HikerMichaelSeen:
    .string "Yo! Du hast echt viel Energie!\p"
    .string "Aber weißt du was?\p"
    .string "Was reine Energie angeht, bin\n"
    .string "ich der Mann!$"

Route45_Text_HikerMichaelBeaten:
    .string "Meine Pokémon hatten nicht genug\n"
    .string "Energie!$"

Route45_Text_HikerMichaelAfter:
	.string "Mensch, wie ich diese KP-Plus liebe! Mm,\n"
	.string "lecker!\p"
	.string "Ich trinke immer die von meinen\n"
	.string "Pokémon! Ich kann nichts dagegen tun!$"

Route45_Text_HikerParrySeen:
	.string "Meine Pokémon stecken voller Energie!$"

Route45_Text_HikerParryBeaten:
	.string "Hahaha! Jetzt hast du’s mir aber richtig\n"
	.string "gezeigt!$"

Route45_Text_HikerParryAfter:
	.string "Mein Köpfchen ist nicht das schnellste,\n"
	.string "weißt du? Deswegen setze ich auf Kraft.$"

Route45_Text_ParryRegister:
	.string "Mein Köpfchen ist nicht das schnellste,\n"
	.string "weißt du? Deswegen setze ich auf Kraft.$"

Route45_Text_ParryRematchIntro:
	.string "Meine Pokémon stecken voller Energie!$"

Route45_Text_ParryRematchDefeat:
	.string "Hahaha! Jetzt hast du’s mir aber richtig\n"
	.string "gezeigt!$"

Route45_Text_ParryPostRematch:
	.string "Mein Köpfchen ist nicht das schnellste,\n"
	.string "weißt du? Deswegen setze ich auf Kraft.$"

Route45_Text_HikerTimothySeen:
	.string "Warum ich auf Berge klettere? Weil es\n"
	.string "sie gibt.\p"
	.string "Warum ich Pokémon trainiere?\p"
	.string "Weil es sie gibt!$"

Route45_Text_HikerTimothyBeaten:
    .string "Niederlagen… Die gibt es auch!$"

Route45_Text_HikerTimothyAfter:
    .string "Das Beste, was mir je passiert ist,\n"
    .string "war die Entdeckung von Pokémon.$"

Route45_Text_HikerParryGivesIron:
    .string "Ich finde einfach keinen Weg zu\n"
    .string "gewinnen!\p"
    .string "Mach weiter so!\p"
    .string "Oh, und nimm das, das Geschenk,\n"
    .string "das du beim letzten Mal nicht\l"
    .string "annehmen konntest.$"

Route45_Text_BlackbeltKenjiSeen:
    .string "Ich habe hier allein trainiert.\p"
    .string "Sieh die Früchte meiner Arbeit!$"

Route45_Text_BlackbeltKenjiBeaten:
	.string "Neiiin!$"

Route45_Text_BlackbeltKenjiAfter:
	.string "Da helfen nur extreme Trainingsmaßnah-\n"
	.string "men. Ich ziehe mich in die Berge zurück.$"

Route45_Text_KenjiRegister:
	.string "Da helfen nur extreme Trainingsmaßnah-\n"
	.string "men. Ich ziehe mich in die Berge zurück.$"

Route45_Text_KenjiRematchIntro:
    .string "Ich habe hier allein trainiert.\p"
    .string "Sieh die Früchte meiner Arbeit!$"

Route45_Text_KenjiRematchDefeat:
	.string "Neiiin!$"

Route45_Text_KenjiPostRematch:
	.string "Da helfen nur extreme Trainingsmaßnah-\n"
	.string "men. Ich ziehe mich in die Berge zurück.$"

Route45_Text_KenjiHasItem:
    .string "Hey! Ich mache gerade eine Pause\n"
    .string "vom Training.\p"
    .string "Ich habe etwas Gutes gefunden.\n"
    .string "Hier, nimm es!$"

Route45_Text_KenjiGaveItem:
    .string "Benutz es gut!\p"
    .string "Ich muss zurück zum Training.\n"
    .string "Oooooaaarrrgh!$"

Route45_Text_KenjiNoRoom:
    .string "Hm, dein Beutel ist voll.\p"
    .string "Komm wieder, wenn du Platz hast.$"

Route45_Text_BlackbeltKenjiMorning:
    .string "Ich werde noch ein bisschen\n"
    .string "trainieren, bevor ich Mittagspause\l"
    .string "mache.$"

Route45_Text_BlackbeltKenjiNight:
    .string "Wir haben uns beim Mittag gut\n"
    .string "ausgeruht, also sind wir jetzt\l"
    .string "wieder bereit!\p"
    .string "Wir trainieren weiter!$"

Route45_Text_CooltrainermRyanSeen:
	.string "Was ist deine Philosophie, wenn es darum\n"
	.string "geht, Pokémon großzuziehen?$"

Route45_Text_CooltrainermRyanBeaten:
	.string "Du verdienst meinen vollen Respekt!$"

Route45_Text_CooltrainermRyanAfter:
	.string "Wie ich sehe, ziehst du deine Pokémon\n"
	.string "mit Sorgfalt auf.\p"
	.string "Eure Freundschaft wird dich noch aus\n"
	.string "so mancher Gefahr retten!$"

Route45_Text_CooltrainerfKellySeen:
	.string "Welche Strategie verwendest du im\n"
	.string "Kampf?\p"
	.string "Man darf nicht einfach nur willkürlich\n"
	.string "starke Attacken einsetzen!$"

Route45_Text_CooltrainerfKellyBeaten:
	.string "Gut. Dann habe ich eben verloren.$"

Route45_Text_CooltrainerfKellyAfter:
    .string "Ich bin kein Fan übermäßig starker\n"
    .string "Attacken.\p"
    .string "Ich will gewinnen, aber ich will\n"
    .string "Pokémon auch nicht verletzen.$"

Route45_Text_CamperQuentinSeen:
    .string "Ich bin wirklich, wirklich stark!$"

Route45_Text_CamperQuentinBeaten:
    .string "Ich war stark aufm Trainerberg…$"

Route45_Text_CamperQuentinAfter:
    .string "Warst du schon im Trainerberg?\p"
    .string "Dort verliere ich nie, aber…$"

Route45_Text_Sign:
	.string "Route 45 Bergweg voraus$"
