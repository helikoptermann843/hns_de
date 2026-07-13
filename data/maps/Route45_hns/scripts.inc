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
    .string "Sei auf alles vorbereitet!\p"
    .string "Ich will sehen, ob deine POKéMON\n"
    .string "richtig trainiert wurden!$"

Route45_Text_HikerErikBeaten:
    .string "Oh, ich habe verloren!$"

Route45_Text_HikerErikAfter:
    .string "Ich gehe zurück zur EISPFAD in\n"
    .string "EWIGAU und trainiere weiter.$"

Route45_Text_HikerMichaelSeen:
    .string "Yo! Du hast echt viel Energie!\p"
    .string "Aber weißt du was?\p"
    .string "Was reine Energie angeht, bin\n"
    .string "ich der Mann!$"

Route45_Text_HikerMichaelBeaten:
    .string "Meine POKéMON hatten nicht genug\n"
    .string "Energie!$"

Route45_Text_HikerMichaelAfter:
    .string "Oh Mann, ich liebe KP-PLUS! Mmmh,\n"
    .string "lecker!\p"
    .string "Ich trinke ständig das meiner\n"
    .string "POKéMON!\p"
    .string "Ich kann nicht anders!$"

Route45_Text_HikerParrySeen:
    .string "Meine POKéMON sind voll mit Power!$"

Route45_Text_HikerParryBeaten:
    .string "Wahahah! Ich bin der große Verlierer!$"

Route45_Text_HikerParryAfter:
    .string "Ich bin nicht gut im Nachdenken,\n"
    .string "weißt du?\p"
    .string "Also gehe ich einfach mit Kraft\n"
    .string "voran!$"

Route45_Text_ParryRegister:
    .string "Ich bin nicht gut im Nachdenken,\n"
    .string "weißt du?\p"
    .string "Also gehe ich einfach mit Kraft\n"
    .string "voran!$"

Route45_Text_ParryRematchIntro:
    .string "Meine POKéMON sind voll mit Power!$"

Route45_Text_ParryRematchDefeat:
    .string "Wahahah! Ich bin der große Verlierer!$"

Route45_Text_ParryPostRematch:
    .string "Ich bin nicht gut im Nachdenken,\n"
    .string "weißt du?\p"
    .string "Also gehe ich einfach mit Kraft\n"
    .string "voran!$"

Route45_Text_HikerTimothySeen:
    .string "Warum ich Berge besteige?\p"
    .string "Weil sie da sind.\p"
    .string "Warum ich POKéMON trainiere?\p"
    .string "Weil sie da sind!$"

Route45_Text_HikerTimothyBeaten:
    .string "Niederlagen… Die gibt es auch!$"

Route45_Text_HikerTimothyAfter:
    .string "Das Beste, was mir je passiert ist,\n"
    .string "war die Entdeckung von POKéMON.$"

Route45_Text_HikerParryGivesIron:
    .string "Ich finde einfach keinen Weg zu\n"
    .string "gewinnen!\p"
    .string "Mach weiter so!\p"
    .string "Oh, und nimm das -- das Geschenk,\n"
    .string "das du beim letzten Mal nicht\l"
    .string "annehmen konntest.$"

Route45_Text_BlackbeltKenjiSeen:
    .string "Ich habe hier allein trainiert.\p"
    .string "Sieh die Früchte meiner Arbeit!$"

Route45_Text_BlackbeltKenjiBeaten:
    .string "Waaaargh!$"

Route45_Text_BlackbeltKenjiAfter:
    .string "Das erfordert extreme Maßnahmen.\p"
    .string "Ich muss in die Berge ziehen und\n"
    .string "in Einsamkeit trainieren.$"

Route45_Text_KenjiRegister:
    .string "Das erfordert extreme Maßnahmen.\p"
    .string "Ich muss in die Berge ziehen und\n"
    .string "in Einsamkeit trainieren.$"

Route45_Text_KenjiRematchIntro:
    .string "Ich habe hier allein trainiert.\p"
    .string "Sieh die Früchte meiner Arbeit!$"

Route45_Text_KenjiRematchDefeat:
    .string "Waaaargh!$"

Route45_Text_KenjiPostRematch:
    .string "Das erfordert extreme Maßnahmen.\p"
    .string "Ich muss in die Berge ziehen und\n"
    .string "in Einsamkeit trainieren.$"

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
    .string "Hm, dein BEUTEL ist voll.\p"
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
    .string "Was hältst du vom Training von\n"
    .string "POKéMON?$"

Route45_Text_CooltrainermRyanBeaten:
    .string "Du hast meinen Respekt gewonnen.$"

Route45_Text_CooltrainermRyanAfter:
    .string "Ich sehe, du ziehst deine POKéMON\n"
    .string "mit Sorgfalt auf.\p"
    .string "Die Bindung, die du aufbaust,\n"
    .string "hilft dir in schweren Situationen.$"

Route45_Text_CooltrainerfKellySeen:
    .string "Was ist deine Kampfstrategie?\p"
    .string "Es ist töricht, starke Attacken\n"
    .string "unüberlegt einzusetzen.$"

Route45_Text_CooltrainerfKellyBeaten:
    .string "Gut. Ich habe verloren.$"

Route45_Text_CooltrainerfKellyAfter:
    .string "Ich bin kein Fan übermäßig starker\n"
    .string "Attacken.\p"
    .string "Ich will gewinnen, aber ich will\n"
    .string "POKéMON auch nicht verletzen.$"

Route45_Text_CamperQuentinSeen:
    .string "Ich bin wirklich, wirklich stark!$"

Route45_Text_CamperQuentinBeaten:
    .string "Ich war stark aufm TRAINER-HÜGEL…$"

Route45_Text_CamperQuentinAfter:
    .string "Warst du schon im TRAINER-HÜGEL?\p"
    .string "Dort verliere ich nie, aber…$"

Route45_Text_Sign:
	.string "ROUTE 45 BERGWEG VORAUS$"
