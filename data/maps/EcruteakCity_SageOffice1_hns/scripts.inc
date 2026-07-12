EcruteakCity_SageOffice1_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EcruteakCity_SageOffice1_OnTransition
	.byte 0

EcruteakCity_SageOffice1_OnTransition::
	goto_if_set FLAG_HIDE_TINTOWER_GUARD, EcruteakCity_SageOffice1_EventScript_SageAside
	end

EcruteakCity_SageOffice1_EventScript_SageAside::
	setobjectxyperm LOCALID_SAGEOFFICE_SAGE, 15, 2
	end

EcruteakCity_SageOffice1_EventScript_Sign::
	msgbox EcruteakCity_SageOffice1_Text_Sign, MSGBOX_SIGN
	end

EcruteakCity_SageOffice1_Text_Sign:
	.string "The bell of tin rings clearly for\n"
	.string "those under the tower's wing.$"

EcruteakCity_SageOffice2_EventScript_SageA::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_TINTOWER_GUARD, EcruteakCity_SageOffice2_EventScript_SageA4
	checkitem ITEM_CLEAR_BELL
	goto_if_eq VAR_RESULT, TRUE, EcruteakCity_SageOffice2_EventScript_SageA2
	msgbox EcruteakTinTowerEntrance_Text_SageNoBadge, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_SageOffice2_EventScript_SageA2::
	msgbox EcruteakTinTowerEntrance_Text_SageHearsClearBell1, MSGBOX_DEFAULT
	waitmessage
	playse SE_M_PETAL_DANCE
	waitse
	playse SE_PIN
	applymovement LOCALID_SAGEOFFICE_SAGE, Common_Movement_ExclamationMark
	delay 60
	msgbox EcruteakTinTowerEntrance_Text_SageHearsClearBell2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SAGEOFFICE_SAGE, EcruteakCity_SageOffice2_Movement_StandAside
	waitmovement 0
	setobjectxyperm LOCALID_SAGEOFFICE_SAGE, 15, 2
	setflag FLAG_HIDE_TINTOWER_GUARD
	release
	end

EcruteakCity_SageOffice2_EventScript_SageA3::
	msgbox EcruteakTinTowerEntrance_Text_SagePleaseDoGoOn, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_SageOffice2_EventScript_SageA4::
	msgbox EcruteakTinTowerEntrance_Text_SageDone, MSGBOX_DEFAULT
	closemessage
	release
	end
	
EcruteakCity_SageOffice2_EventScript_SageB::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_STATE, 10, EcruteakCity_SageOffice2_EventScript_B2
	goto_if_eq VAR_ECRUTEAK_CITY_STATE, 11, EcruteakCity_SageOffice2_EventScript_B2
	msgbox EcruteakTinTowerEntrance_Text_WanderingSage, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_SageOffice2_EventScript_B2::
	msgbox EcruteakTinTowerEntrance_Text_WanderingSageClearBell, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_SageOffice2_EventScript_SageC::
	lock
	faceplayer
	msgbox EcruteakTinTowerEntrance_Text_Gramps, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_SageOffice2_Movement_StandAside:
	walk_left
	face_down
	step_end

EcruteakTinTowerEntrance_Text_SageNoBadge:
	.string "Wenn du nicht im Besitz des ORDENs\p"
	.string "von TEAK CITY bist, darfst du\p"
	.string "den ZINNTURM nicht betreten.$"

EcruteakTinTowerEntrance_Text_SageWithBadge:
	.string "Wenn du nicht im Besitz des ORDENs\n"
	.string "von TEAK CITY bist, darfst du\l"
	.string "den ZINNTURM nicht betreten.\p"
	.string "Ah! Das ist der ORDEN\n"
	.string "von TEAK CITY! Du darfst passieren.$"

EcruteakTinTowerEntrance_Text_SageNoClearBell:
	.string "Ein denkwürdiger Augenblick.\p"
	.string "Entschuldigung,\n"
	.string "aber ich muss dich bitten zu gehen.\p"
	.string "…Was lindert Seelenschmerzen…\p"
	.string "Das TRIO der WEISEN sagt stets\p"
	.string "Dinge, die sehr schwierig\n"
	.string "zu verstehen sind…$"

EcruteakTinTowerEntrance_Text_SageHearsClearBell1:
	.string "Ein denkwürdiger Augenblick.\p"
	.string "Entschuldigung,\n"
	.string "aber ich muss dich bitten zu gehen.\p"
	.string ".........$"
EcruteakTinTowerEntrance_Text_SageHearsClearBell2:
	.string "Ah!\p"
	.string "Das Läuten der KLARGLOCKE!\p"
	.string "Es… ist erhaben!\p"
	.string "Das schönste Läuten,\n"
	.string "das ich je hörte!\p"
	.string "Dieser Ton sagt alles über\n"
	.string "die Seele des Trägers aus.\p"
	.string "Du…\p"
	.string "Du könntest es durch den\n"
	.string "ZINNTURM schaffen.\p"
	.string "Schreite voran.$"

EcruteakTinTowerEntrance_Text_SagePleaseDoGoOn:
	.string "Schreite voran.$"

EcruteakTinTowerEntrance_Text_SageDone:
	.string "Der Klang dieser Glocke zeigt\n"
	.string "die Reinheit der Seele ihres Trägers.\p"
	.string "Du… Bist wahrlich würdig.$"

EcruteakTinTowerEntrance_Text_WanderingSage:
	.string "Der ZINNTURM da vorne ist ein\n"
	.string "8-stöckiger Turm\l"
	.string "von göttlicher Schönheit.\p"
	.string "Er beruhigt die Seelen derer,\n"
	.string "die ihn betrachten.$"

EcruteakTinTowerEntrance_Text_WanderingSageClearBell:
	.string "Der ZINNTURM bebt! Ein Pokémon muss\n"
	.string "auf der Spitze gelandet sein!$"

EcruteakTinTowerEntrance_Text_Gramps:
	.string "Zwei Türme… Zwei Pokémon…\p"
	.string "Aber als einer niederbrannte,\n"
	.string "flogen beide Pokémon fort\l"
	.string "und kamen nie wieder zurück.$"
