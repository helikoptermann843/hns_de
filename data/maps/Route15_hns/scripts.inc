Route15_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route15_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route15_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route15_EventScript_Colette::
	trainerbattle_single TRAINER_COLETTE_HNS, Route15_Text_TeacherColetteSeen, Route15_Text_TeacherColetteBeaten
	msgbox Route15_Text_TeacherColetteAfterBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Hillary::
	trainerbattle_single TRAINER_HILLARY_HNS, Route15_Text_TeacherHillarySeen, Route15_Text_TeacherHillaryBeaten, Route15_EventScript_RegisterHillary
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route15_EventScript_RematchHillary
	msgbox Route15_Text_TeacherHillaryAfterBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_RegisterHillary::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route15_Text_HillaryRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_HILLARY_HNS
	release
	end

Route15_EventScript_RematchHillary::
	trainerbattle_rematch TRAINER_HILLARY_HNS, Route15_Text_HillaryRematchIntro, Route15_Text_HillaryRematchDefeat
	msgbox Route15_Text_HillaryPostRematch, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Kipp::
	trainerbattle_single TRAINER_KIPP_HNS, Route15_Text_SchoolboyKippSeen, Route15_Text_SchoolboyKippBeaten
	msgbox Route15_Text_SchoolboyKippAfterBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Tommy::
	trainerbattle_single TRAINER_TOMMY_HNS, Route15_Text_SchoolboyTommySeen, Route15_Text_SchoolboyTommyBeaten
	msgbox Route15_Text_SchoolboyTommyAfterBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Johnny::
	trainerbattle_single TRAINER_JOHNNY_HNS, Route15_Text_SchoolboyJohnnySeen, Route15_Text_SchoolboyJohnnyBeaten
	msgbox Route15_Text_SchoolboyJohnnyAfterBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Billy::
	trainerbattle_single TRAINER_BILLY_HNS, Route15_Text_SchoolboyBillySeen, Route15_Text_SchoolboyBillyBeaten, Route15_EventScript_RegisterBilly
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route15_EventScript_RematchBilly
	msgbox Route15_Text_SchoolboyBillyAfterBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_RegisterBilly::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route15_Text_BillyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_BILLY_HNS
	release
	end

Route15_EventScript_RematchBilly::
	trainerbattle_rematch TRAINER_BILLY_HNS, Route15_Text_BillyRematchIntro, Route15_Text_BillyRematchDefeat
	msgbox Route15_Text_BillyPostRematch, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Sign::
	msgbox Route15_Text_Sign, MSGBOX_SIGN
	end

Route15_EventScript_PPup::
	finditem ITEM_PP_UP
	end

Route15_Text_TeacherColetteSeen:
	.string "Hast du etwas vergessen?$"

Route15_Text_TeacherColetteBeaten:
	.string "Uah!$"

Route15_Text_TeacherColetteAfterBattle:
	.string "Ehe ich Lehrer wurde, vergaß ich\p"
	.string "immer eine Menge Dinge.$"

Route15_Text_TeacherHillarySeen:
	.string "Bei schönem Wetter würden die Kinder\p"
	.string "lieber im Schulhof spielen, als in\p"
	.string "den Klassenzimmern zu lernen.$"

Route15_Text_TeacherHillaryBeaten:
	.string "Ich wollte nicht verlieren…$"

Route15_Text_TeacherHillaryAfterBattle:
	.string "Lernen ist sehr\n"
	.string "wichtig, aber Bewegung ist genauso\l"
	.string "essentiell.$"

Route15_Text_HillaryRegister:
	.string "Du hast es mir gezeigt!\n"
	.string "Könnte ich deine Nummer haben?$"

Route15_Text_HillaryRematchIntro:
	.string "Dieses mal belehre ich dich!$"

Route15_Text_HillaryRematchDefeat:
	.string "Zurück an die Tafel…$"

Route15_Text_HillaryPostRematch:
	.string "POKéMON und Kinder lernen gleich.\n"
	.string "Immer nur geduldig sein.!$"

Route15_Text_SchoolboyKippSeen:
	.string "Warte! Ich muss meine Mutter anrufen.$"

Route15_Text_SchoolboyKippBeaten:
	.string "Tut mir Leid,\n"
	.string "Mutter! Ich wurde besiegt!$"

Route15_Text_SchoolboyKippAfterBattle:
	.string "Meine Mutter macht sich immer große\p"
	.string "Sorgen um mich.\n"
	.string "Ständig muss ich sie anrufen.$"

Route15_Text_SchoolboyTommySeen:
	.string "Lass uns kämpfen.\n"
	.string "Ich werde nicht verlieren!$"

Route15_Text_SchoolboyTommyBeaten:
	.string "Ich hätte meine\n"
	.string "Hausaufgaben machen sollen!$"

Route15_Text_SchoolboyTommyAfterBattle:
	.string "Sayonara! Das habe\n"
	.string "ich in meinem Japanischkurs gelernt.$"

Route15_Text_SchoolboyJohnnySeen:
	.string "Wir machen einen\n"
	.string "Ausflug zum RADIOTURM in LAVANDIA,\p"
	.string "um dort etwas in\n"
	.string "Sozialkunde zu lernen.$"

Route15_Text_SchoolboyJohnnyBeaten:
	.string "Du bist unheimlich stark!$"

Route15_Text_SchoolboyJohnnyAfterBattle:
	.string "Ich bin müde vom\n"
	.string "Laufen. Ich muss eine Pause machen.$"

Route15_Text_SchoolboyBillySeen:
	.string "Sport ist mein Lieblingsfach!$"

Route15_Text_SchoolboyBillyBeaten:
	.string "Oh, nein! Wie konnte ich nur\p"
	.string "verlieren?$"

Route15_Text_SchoolboyBillyAfterBattle:
	.string "Wenn Pokémon ein\n"
	.string "Unterrichtsfach wäre, dann wäre ich\l"
	.string "bestimmt der Beste!$"

Route15_Text_BillyRegister:
	.string "Ich hätte mehr aufpassen sollen in\n"
	.string "der Klasse.\l"
	.string "Kann ich deine Nummer haben?$"

Route15_Text_BillyRematchIntro:
	.string "Ich habe viel gelernt!\n"
	.string "Lass es mich dir beibringen!$"

Route15_Text_BillyRematchDefeat:
	.string "Ich muss mehr studieren…$"

Route15_Text_BillyPostRematch:
	.string "Bücherschläue ist nicht alles.\n"
	.string "Ich brauche praktische Erfahrung!$"

Route15_Text_Sign:
	.string "ROUTE 15\p"
	.string "FUCHSANIA CITY - LAVANDIA$"

