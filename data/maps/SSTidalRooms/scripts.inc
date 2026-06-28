SSTidalRooms_MapScripts::
	.byte 0

SSTidalRooms_EventScript_SnatchGiver::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_SNATCH, SSTidalRooms_EventScript_ExplainSnatch
	msgbox SSTidalRooms_Text_NotSuspiciousTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_SNATCH
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_SNATCH
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
	release
	end

SSTidalRooms_EventScript_ExplainSnatch::
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
	release
	end

SSTidalRooms_EventScript_Bed::
	lockall
	msgbox SSTidalRooms_Text_TakeRestOnBed, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	call SSTidalRooms_EventScript_ProgessCruiseAfterBed
	releaseall
	end

SSTidalRooms_EventScript_Colton::
	trainerbattle_single TRAINER_COLTON, SSTidalRooms_Text_ColtonIntro, SSTidalRooms_Text_ColtonDefeat
	msgbox SSTidalRooms_Text_ColtonPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_Micah::
	trainerbattle_single TRAINER_MICAH, SSTidalRooms_Text_MicahIntro, SSTidalRooms_Text_MicahDefeat
	msgbox SSTidalRooms_Text_MicahPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_Thomas::
	trainerbattle_single TRAINER_THOMAS, SSTidalRooms_Text_ThomasIntro, SSTidalRooms_Text_ThomasDefeat
	msgbox SSTidalRooms_Text_ThomasPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_Jed::
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_JedIntro, SSTidalRooms_Text_JedDefeat, SSTidalRooms_Text_JedNotEnoughMons
	msgbox SSTidalRooms_Text_JedPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_Lea::
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_LeaIntro, SSTidalRooms_Text_LeaDefeat, SSTidalRooms_Text_LeaNotEnoughMons
	msgbox SSTidalRooms_Text_LeaPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_Garret::
	trainerbattle_single TRAINER_GARRET, SSTidalRooms_Text_GarretIntro, SSTidalRooms_Text_GarretDefeat
	msgbox SSTidalRooms_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_Naomi::
	trainerbattle_single TRAINER_NAOMI, SSTidalRooms_Text_NaomiIntro, SSTidalRooms_Text_NaomiDefeat
	msgbox SSTidalRooms_Text_NaomiPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_Text_TakeRestOnBed:
	.string "Da steht ein Bett…\n"
	.string "Eine Pause wäre willkommen.$"

SSTidalRooms_Text_ColtonIntro:
	.string "Ich segle oft nach SEEGRASULB CITY.\p"
	.string "Ich liebe es, an den WETTBEWERBen\n"
	.string "teilzunehmen.$"

SSTidalRooms_Text_ColtonDefeat:
	.string "Das war ein wunderbarer Kampf!$"

SSTidalRooms_Text_ColtonPostBattle:
	.string "Ich bin schon ganz aufgeregt, wenn ich\n"
	.string "mir vorstelle, welche POKéMON ich im\l"
	.string "nächsten WETTBEWERB sehen werde!$"

SSTidalRooms_Text_MicahIntro:
	.string "Sind deine Freunde stark?$"

SSTidalRooms_Text_MicahDefeat:
	.string "Deine Freunde sind in der Tat stark.$"

SSTidalRooms_Text_MicahPostBattle:
	.string "Freunde müssen nicht unbedingt\n"
	.string "menschlich sein. Für mich sind\l"
	.string "POKéMON die besten Freunde.$"

SSTidalRooms_Text_ThomasIntro:
	.string "Kind… Hast du an der Tür geklopft?$"

SSTidalRooms_Text_ThomasDefeat:
	.string "Eine Niederlage muss mit erhobenem\n"
	.string "Haupt akzeptiert werden.$"

SSTidalRooms_Text_ThomasPostBattle:
	.string "In jeder Situation die absolute Ruhe\n"
	.string "zu bewahren, ist die Devise des\l"
	.string "GENTLEMAN.$"

SSTidalRooms_Text_JedIntro:
	.string "UWE: Eigentlich bin ich ja schüchtern…\n"
	.string "Aber die Liebe gibt einem Kraft!$"

SSTidalRooms_Text_JedDefeat:
	.string "UWE: Seufz…$"

SSTidalRooms_Text_JedPostBattle:
	.string "UWE: Zum ersten Mal war unsere Kraft\n"
	.string "der Liebe unterlegen!\l"
	.string "Du bist ein unglaublicher TRAINER!$"

SSTidalRooms_Text_JedNotEnoughMons:
	.string "UWE: Du hast nur ein POKéMON?\n"
	.string "Fühlt es sich nicht sehr einsam?$"

SSTidalRooms_Text_LeaIntro:
	.string "LENA: Ich fühle mich etwas albern,\n"
	.string "aber… Aber die Liebe gibt mir Kraft!$"

SSTidalRooms_Text_LeaDefeat:
	.string "LENA: Oh, buuuuh!$"

SSTidalRooms_Text_LeaPostBattle:
	.string "LENA: Ich kann es einfach nicht\n"
	.string "fassen!\n"
	.string "Die Kraft unserer Liebe reichte nicht…\l"
	.string "Du bist ein unglaublicher TRAINER!$"

SSTidalRooms_Text_LeaNotEnoughMons:
	.string "LENA: Ich möchte kämpfen…\n"
	.string "Aber du hast nur ein POKéMON…$"

SSTidalRooms_Text_GarretIntro:
	.string "Ah, du kommst gerade rechtzeitig.\p"
	.string "Ich langweile mich schrecklich.\n"
	.string "Du musst mich jetzt unterhalten.$"

SSTidalRooms_Text_GarretDefeat:
	.string "… Das reicht.$"

SSTidalRooms_Text_GarretPostBattle:
	.string "Ich muss meinen Vater unbedingt\n"
	.string "fragen, ob er mir eine Yacht schenkt.\l"
	.string "Eine Yacht für mich und meine POKéMON!$"

SSTidalRooms_Text_NaomiIntro:
	.string "Oh, du bist so ein wunderbarer\n"
	.string "TRAINER. Möchtest du eine Tasse Tee?\l"
	.string "Oder möchtest du lieber kämpfen?$"

SSTidalRooms_Text_NaomiDefeat:
	.string "Ich verstehe.\n"
	.string "Du bist eher der aktive Typ.$"

SSTidalRooms_Text_NaomiPostBattle:
	.string "Eine Weltreise auf einem Luxusliner\n"
	.string "hat\n"
	.string "etwas für sich, das muss ich sagen…\p"
	.string "Aber auch eine Fahrt auf der Fähre\n"
	.string "durch HOENN hat etwas.$"

SSTidalRooms_Text_NotSuspiciousTakeThis:
	.string "Äh… Hallo! Ich… Ich verhalte mich\n"
	.string "über-\n"
	.string "haupt nicht verdächtig! Äh… hier, das\l"
	.string "ist für dich! Es kostet dich nichts!\p"
	.string "Es… Ehrlich! Ich habe es nicht von\n"
	.string "jemandem ÜBERNOMMEN! Das würde ich\l"
	.string "nie tun! Es ist sauber! Nimm es ruhig!$"

SSTidalRooms_Text_ExplainSnatch:
	.string "ÜBERNAHME raubt die nächste Attacke\n"
	.string "eines POKéMON und setzt sie dann\l"
	.string "gegen diesen Gegner ein.$"

