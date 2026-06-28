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
	release
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
	.string "KURT: Hallo! {PLAYER}!\p"
	.string "Die Wache da oben ist weggelaufen,\n"
	.string "als ich ihn anschrie\p"
	.string "Aber dann bin ich in den\n"
	.string "Brunnen gefallen.\p"
	.string "Ich bin so hart auf meinem Rücken\n"
	.string "gelandet, dass ich mich nicht mehr\l"
	.string "bewegen kann.\p"
	.string "Mist! Wenn ich fit wäre, würden\n"
	.string "meine Pokémon sie bestrafen…\p"
	.string "Ah, kann man nichts machen.\p"
	.string "{PLAYER}, zeig ihnen, wie mutig\n"
	.string "du bist. Tu es für mich!$"

SlowpokeWell_B1F_Text_KurtAfter:
	.string "KURT: Sehr schön, {PLAYER}!\p"
	.string "TEAM ROCKET ist geflohen.\p"
	.string "Meinem Rücken geht es auch.\n"
	.string "schon besser.\p"
	.string "Lass uns rausgehen.$"

SlowpokeWell_B1F_Text_GruntM29Seen:
	.string "Verdammt! Ich stand oben Wache,\n"
	.string "als ein alter Knacker mich anschrie.\p"
	.string "Er hat mich so erschreckt, dass\n"
	.string "ich hier heruntergefallen bin.\p"
	.string "Jetzt werde ich meinen Ärger an\n"
	.string "dir auslassen!$"

SlowpokeWell_B1F_Text_GruntM29Beaten:
	.string "Arrgh! Das ist nicht mein Tag!$"

SlowpokeWell_B1F_Text_GruntM29After:
	.string "Klar, wir hacken Flegmon-Ruten\n"
	.string "ab und verkaufen sie.\p"
	.string "Alles, was wir tun, dient dem\n"
	.string "Profit.\p"
	.string "Richtig! Wir sind TEAM ROCKET\n"
	.string "und tun alles für Geld!$"

SlowpokeWell_B1F_Text_ProtonSeen:
	.string "Was willst du?\p"
	.string "Wenn du unsere Arbeit störst,\n"
	.string "erwarte keine Gnade!$"

SlowpokeWell_B1F_Text_ProtonBeaten:
	.string "Du hast dich gut geschlagen,\n"
	.string "aber warte nur bis zum nächsten Mal!$"

SlowpokeWell_B1F_Text_ProtonAfter:
	.string "Ja, TEAM ROCKET wurde vor drei\n"
	.string "Jahren aufgelöst.\p"
	.string "Der Boss ging ins Exil.\p"
	.string "Aber wir setzten unsere Aktivitäten\n"
	.string "heimlich fort!\p"
	.string "Ein kleines Hindernis wie du\n"
	.string "stellt für uns kein Problem dar.\p"
	.string "Ich rate dir, Angst vor dem zu\n"
	.string "haben, was kommt!$"

SlowpokeWell_B1F_Text_GruntM2Seen:
	.string "Hyuck-hyuck-hyuck!\n"
	.string "Aufhören, FLEGMONROUTEN zu klauen?\p"
	.string "Du bist verrückt!\n"
	.string "Wenn wir dir gehorchen, wäre der\l"
	.string "Ruf von TEAM ROCKET ruiniert!$"

SlowpokeWell_B1F_Text_GruntM2Beaten:
	.string "Hyuck… Zu stark…$"

SlowpokeWell_B1F_Text_GruntM2After:
	.string "Wir brauchen das Geld,\n"
	.string "aber FLEGMONROUTEN verkaufen?\p"
	.string "Schwer, ein ROCKET-Gehilfe zu sein!$"

SlowpokeWell_B1F_Text_GruntF1Seen:
	.string "Aufhören, FLEGMONROUTEN zu klauen?\p"
	.string "Na, versuch doch, uns alle\n"
	.string "aufzuhalten!$"

SlowpokeWell_B1F_Text_GruntF1Beaten:
	.string "Du elendes Gör!$"

SlowpokeWell_B1F_Text_GruntF1After:
	.string "FLEGMONROUTEN wachsen schnell nach!\p"
	.string "Was ist falsch daran,\n"
	.string "sie zu verkaufen?$"

SlowpokeWell_B1F_Text_SlowpokeWithMail:
	.string "Ein FLEGMON mit abgetrennter RUTE…\p"
	.string "Huh? Es trägt\n"
	.string "einen BRIEF. BRIEF lesen?$"

SlowpokeWell_B1F_Text_SlowpokeMail:
	.string "{PLAYER} liest den BRIEF.\p"
	.string "Sei so lieb und kümmere dich bitte\n"
	.string "um Opa und das FLEGMON.\p"
	.string "Danke, Papa$"

SlowpokeWell_B1F_Text_TaillessSlowpoke:
	.string "Ein FLEGMON mit abgetrennter RUTE…$"
