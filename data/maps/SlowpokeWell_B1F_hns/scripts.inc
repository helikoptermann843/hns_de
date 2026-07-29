SlowpokeWell_B1F_hns_MapScripts::
	.byte 0

SlowpokeWell_B1F_EventScript_Item_Super_Potion_1::
	finditem ITEM_SUPER_POTION
	end

SlowpokeWell_B1F_EventScript_Item_Super_Potion_2::
	finditem ITEM_SUPER_POTION
	end

SlowpokeWell_B1F_EventScript_Item_Great_Ball::
	finditem ITEM_GREAT_BALL
	end

SlowpokeWell_B1F_EventScript_Item_Full_Heal::
	finditem ITEM_FULL_HEAL
	end

SlowpokeWell_B1F_EventScript_Kurt::
	lock
	msgbox SlowpokeWell_B1F_Text_KurtIntro, MSGBOX_DEFAULT
	closemessage
	end

SlowpokeWell_B1F_EventScript_Grunt21::
	trainerbattle_single TRAINER_GRUNT_21_HNS, SlowpokeWell_B1F_Text_GruntM29Seen, SlowpokeWell_B1F_Text_GruntM29Beaten
	msgbox SlowpokeWell_B1F_Text_GruntM29After, MSGBOX_AUTOCLOSE
	end

SlowpokeWell_B1F_EventScript_Grunt22F::
	trainerbattle_single TRAINER_GRUNT_22_HNS, SlowpokeWell_B1F_Text_GruntF1Seen, SlowpokeWell_B1F_Text_GruntF1Beaten
	msgbox SlowpokeWell_B1F_Text_GruntF1After, MSGBOX_AUTOCLOSE
	end

SlowpokeWell_B1F_EventScript_Eto::
	trainerbattle_single TRAINER_ETO_HNS, SlowpokeWell_B1F_Text_GruntM2Seen, SlowpokeWell_B1F_Text_GruntM2Beaten
	msgbox SlowpokeWell_B1F_Text_GruntM2After, MSGBOX_AUTOCLOSE
	end

SlowpokeWell_B1F_EventScript_Proton::
	lock
	faceplayer
	msgbox SlowpokeWell_B1F_Text_ProtonSeen, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_PROTON_1_HNS, SlowpokeWell_B1F_Text_ProtonBeaten
	msgbox SlowpokeWell_B1F_Text_ProtonAfter, MSGBOX_AUTOCLOSE
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_AZALEA_TOWN_ROCKETS
	clearflag FLAG_HIDE_KURT_1
	addobject LOCALID_WELL_KURT
	removeobject 11
	removeobject 12
	removeobject 13
	delay 120
	fadescreen FADE_FROM_BLACK
	special DrawWholeMapView
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	applymovement LOCALID_WELL_KURT, SlowpokeWell_B1F_Movement_Kurt
	waitmovement 0
	msgbox SlowpokeWell_B1F_Text_KurtAfter, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_SLOWPOKE_WELL_KURT
	setflag FLAG_HIDE_KURT_1
	clearflag FLAG_HIDE_KURT_2
	clearflag FLAG_HIDE_AZALEA_TOWN_SLOWPOKE
	setvar VAR_AZALEA_TOWN_STATE, 3
	warp MAP_AZALEA_TOWN_KURTS_HOUSE_HNS, 15, 4
	waitstate
	end

SlowpokeWell_B1F_Movement_Kurt:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	step_end

SlowpokeWell_B1F_Text_KurtIntro:
	.string "Kurt: Oh, du bist es, {PLAYER}.\p"
	.string "Die Wache oben hat sofort\n"
	.string "das Weite gesucht, als ich sie\l"
	.string "zusammengeschrien habe…\p"
	.string "Aber ich bin in den Brunnen gefallen\n"
	.string "und habe mir die Hüfte geprellt.\l"
	.string "Tja, und jetzt sitze ich hier fest.\p"
	.string "Verflixt… wenn ich nur laufen könnte,\n"
	.string "würde ich diese Typen mit meinen\l"
	.string "Pokémon zu Kleinholz verarbeiten…\p"
	.string "Aber es nützt nichts, {PLAYER}!\n"
	.string "Du wirst ihnen an meiner Stelle zeigen\l"
	.string "müssen, was ein wahrer Trainer ist!$"

SlowpokeWell_B1F_Text_KurtAfter:
	.string "Kurt: Gute Arbeit, {PLAYER}!\n"
	.string "Die Typen von Team Rocket\l"
	.string "haben Reißaus genommen!\p"
	.string "Meiner Hüfte geht es auch\n"
	.string "wieder besser. Lass uns gehen.$"

SlowpokeWell_B1F_Text_GruntM29Seen:
	.string "Verflixt! Ich habe oben Wache gehalten,\n"
	.string "und da kam dieser halbwahnsinnige Opa.\p"
	.string "Urplötzlich gibt es einen Schrei, und er\n"
	.string "springt einfach in den Brunnenschacht.\p"
	.string "Egal. Dann reagiere ich meinen\n"
	.string "Frust eben an dir ab!$"

SlowpokeWell_B1F_Text_GruntM29Beaten:
	.string "Ach! Es hilft ja alles nichts!$"

SlowpokeWell_B1F_Text_GruntM29After:
	.string "Klar, wir hacken Flegmon-Ruten\n"
	.string "ab und verkaufen sie.\p"
	.string "Alles, was wir tun, dient dem\n"
	.string "Profit.\p"
	.string "Richtig! Wir sind Team Rocket\n"
	.string "und tun alles für Geld!$"

SlowpokeWell_B1F_Text_ProtonSeen:
	.string "Was willst du?\p"
	.string "Wenn du unsere Arbeit störst,\n"
	.string "erwarte keine Gnade!$"

SlowpokeWell_B1F_Text_ProtonBeaten:
	.string "Du hast dich gut geschlagen,\n"
	.string "aber warte nur bis zum nächsten Mal!$"

SlowpokeWell_B1F_Text_ProtonAfter:
	.string "Lance: …Hehehe!\n"
	.string "Ja, es stimmt. Team Rocket wurde\l"
	.string "vor drei Jahren zerschlagen.\p"
	.string "Aber wir haben unsere Arbeit still\n"
	.string "und leise im Untergrund fortgesetzt.\p"
	.string "Du kannst uns vielleicht das Leben\n"
	.string "schwer machen, aber aufhalten wirst\l"
	.string "du uns niemals!\p"
	.string "Alles, was du tun kannst, ist in\n"
	.string "Schrecken auf das zu warten,\l"
	.string "was wir weiter im Schilde führen!$"

SlowpokeWell_B1F_Text_GruntM2Seen:
	.string "Hyuck-hyuck-hyuck!\n"
	.string "Aufhören, Flegmonruten zu klauen?\p"
	.string "Du bist verrückt!\n"
	.string "Wenn wir dir gehorchen, wäre der\l"
	.string "Ruf von Team Rocket ruiniert!$"

SlowpokeWell_B1F_Text_GruntM2Beaten:
	.string "Hyuck… Zu stark…$"

SlowpokeWell_B1F_Text_GruntM2After:
	.string "Ich sehe ja ein, wir brauchen das Geld.\n"
	.string "Aber mit Flegmon-Ruten?\p"
	.string "Wir Rocket-Rüpel haben es\n"
	.string "auch nicht leicht…$"

SlowpokeWell_B1F_Text_GruntF1Seen:
	.string "Aufhören, Flegmonruten zu klauen?\p"
	.string "Na, versuch doch, uns alle\n"
	.string "aufzuhalten!$"

SlowpokeWell_B1F_Text_GruntF1Beaten:
	.string "Du vorlautes Balg!$"

SlowpokeWell_B1F_Text_GruntF1After:
	.string "Flegmonruten wachsen schnell nach!\p"
	.string "Was ist falsch daran,\n"
	.string "sie zu verkaufen?$"

SlowpokeWell_B1F_Text_SlowpokeWithMail:
	.string "Ein Flegmon mit abgetrennter Rute…\n"
	.string "Huch? Es trägt einen Brief bei sich.\p"
	.string "Willst du ihn lesen?$"

SlowpokeWell_B1F_Text_SlowpokeMail:
	.string "{PLAYER} liest den Brief.\p"
	.string "Bitte kümmere dich gut um Opa und\n"
	.string "das Flegmon, während ich weg bin.\l"
	.string "Danke, dein Papa$"

SlowpokeWell_B1F_Text_TaillessSlowpoke:
	.string "Ein Flegmon mit abgetrennter Rute…$"
