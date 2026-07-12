EcruteakCity_Gym_hns_MapScripts::
	.byte 0

EcruteakCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ECRUTEAK_CITY_GYM, EcruteakCity_Gym_EventScript_GymGuy2
	msgbox EcruteakCity_GymGuideText, MSGBOX_DEFAULT
	closemessage
	release
	end
	
EcruteakCity_Gym_EventScript_GymGuy2::
	msgbox EcruteakCity_GymGuideWinText, MSGBOX_DEFAULT
	release
	end	

EcruteakCity_Gym_EventScript_Jeffrey::
	trainerbattle_single TRAINER_JEFFREY_HNS, SageJeffreySeenText, SageJeffreyBeatenText
	msgbox SageJeffreyAfterBattleText, MSGBOX_AUTOCLOSE
	end
EcruteakCity_Gym_EventScript_Ping::
	trainerbattle_single TRAINER_PING_HNS, SagePingSeenText, SagePingBeatenText
	msgbox SagePingAfterBattleText, MSGBOX_AUTOCLOSE
	end

EcruteakCity_Gym_EventScript_Martha::
	trainerbattle_single TRAINER_MARTHA_HNS, MediumMarthaSeenText, MediumMarthaBeatenText
	msgbox MediumMarthaAfterBattleText, MSGBOX_AUTOCLOSE
	end

EcruteakCity_Gym_EventScript_Grace::
	trainerbattle_single TRAINER_GRACE_HNS, MediumGraceSeenText, MediumGraceBeatenText
	msgbox MediumGraceAfterBattleText, MSGBOX_AUTOCLOSE
	end

EcruteakCity_Gym_EventScript_Morty::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ECRUTEAK_CITY_GYM, EcruteakCity_Gym_EventScript_Morty_Defeated
	msgbox MortyIntroText, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_MORTY_1_HNS, MortyWinLossText
	message Text_ReceivedFogBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MortyText_FogBadgeSpeech, MSGBOX_DEFAULT
	setflag FLAG_BADGE04_GET
	setflag FLAG_DEFEATED_ECRUTEAK_CITY_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 4
	call Common_EventScript_SetGymTrainers_hns
	giveitem ITEM_TM_SHADOW_BALL
	msgbox MortyText_ShadowBallSpeech, MSGBOX_DEFAULT
	setvar VAR_ECRUTEAK_CITY_STATE, 4
	closemessage
	release
	end

EcruteakCity_Gym_EventScript_Morty_Defeated::
	msgbox MortyFightDoneText, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Gym_EventScript_Statue::
	lock
	goto_if_set FLAG_DEFEATED_ECRUTEAK_CITY_GYM, EcruteakCity_Gym_EventScript_Statue2
	msgbox EcruteakCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Gym_EventScript_Statue2::
	msgbox EcruteakCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Gym_Text_GymStatue:
	.string "Teak City Pokémon Arena$"

EcruteakCity_Gym_Text_GymStatueCertified:
	.string "Teak City Pokémon Arena\p"
	.string "Jens's zertifizierte Trainer:\n"
	.string "{PLAYER}$"

MortyIntroText:
	.string "Schön, dass du gekommen bist.\p"
	.string "Hier in TEAK CITY werden POKéMON\n"
	.string "seit jeher verehrt.\p"
	.string "Man sagt, ein regenbogenfarbenes\n"
	.string "POKéMON erscheint nur einem\l"
	.string "wahrhaftig würdigen Trainer.\p"
	.string "Ich glaubte diese Legende und\n"
	.string "trainierte hier im Verborgenen.\p"
	.string "Nun kann ich Dinge sehen,\n"
	.string "die anderen verborgen bleiben.\p"
	.string "Nur noch ein kleines Stück...\p"
	.string "Mit etwas mehr könnte ich die\n"
	.string "Zukunft sehen, in der ich dem\l"
	.string "Regenbogen-POKéMON begegne.\p"
	.string "Du wirst mir helfen,\n"
	.string "dieses Ziel zu erreichen!$"

MortyWinLossText:
	.string "Ich bin noch nicht gut genug...\p"
	.string "In Ordnung.\n"
	.string "Dieser ORDEN gehört dir.$"

Text_ReceivedFogBadge:
	.string "{PLAYER} erhielt den PHANTOMORDEN.$"

MortyText_FogBadgeSpeech:
	.string "Mit dem PHANTOMORDEN gehorchen dir\n"
	.string "POKéMON bis Level 50.\p"
	.string "Außerdem können POKéMON mit\n"
	.string "SURFER es jederzeit einsetzen.\p"
	.string "Nimm auch das hier.$"

MortyText_ShadowBallSpeech:
	.string "Das ist SPUKBALL.\n"
	.string "Die Attacke richtet Schaden an\l"
	.string "und kann die Sp.-Vert. senken.\p"
	.string "Nutze sie, wenn sie dir nützt.$"

MortyFightDoneText:
	.string "Ich verstehe...\p"
	.string "Deine Reise führte dich an\n"
	.string "ferne Orte.\p"
	.string "Du hast mehr gesehen,\n"
	.string "als ich je erleben werde.\p"
	.string "Darum beneide ich dich...$"

MortyRematchText:
	.string "Ah, der CHAMPION von JOHTO!\n"
	.string "Schön, dass du gekommen bist.\p"
	.string "Du hast Stärke bewiesen,\n"
	.string "doch bist du seit unserem\l"
	.string "letzten Kampf gewachsen?\p"
	.string "Ich habe seitdem mit meinen\n"
	.string "GEIST-POKéMON trainiert.\p"
	.string "Mal sehen, ob du die Schatten\n"
	.string "erneut überwinden kannst.\p"
	.string "Willst du eine Revanche?$"

Morty_RematchDefeatText:
	.string "Ich bin noch nicht gut genug...\p"
	.string "Du hast mehr gesehen,\n"
	.string "als ich je erleben werde.\p"
	.string "Darum beneide ich dich...$"

SageJeffreySeenText:
	.string "Ich verbrachte den Frühling mit\n"
	.string "meinen POKéMON.\p"
	.string "Dann Sommer, Herbst und Winter...\p"
	.string "Dann kam wieder der Frühling.\n"
	.string "Wir sind schon lange zusammen.$"

SageJeffreyBeatenText:
	.string "Siege und Niederlagen...\n"
	.string "Ich kenne beides.$"

SageJeffreyAfterBattleText:
	.string "Woher stammen POKéMON wohl?$"

SagePingSeenText:
	.string "Kannst du unseren POKéMON\n"
	.string "überhaupt Schaden zufügen?$"

SagePingBeatenText:
	.string "Ah! Gut gemacht!$"

SagePingAfterBattleText:
	.string "Wir nutzen GEIST-POKéMON.\p"
	.string "Normale Attacken können ihnen\n"
	.string "nichts anhaben!$"

MediumMarthaSeenText:
	.string "Ich werde gewinnen!$"

MediumMarthaBeatenText:
	.string "I-ich... habe verloren!$"

MediumMarthaAfterBattleText:
	.string "Wer am meisten gewinnen will,\n"
	.string "wird auch siegen!$"

MediumGraceSeenText:
	.string "Verirrst du dich in unseren\n"
	.string "dunklen Gängen?\p"
	.string "Besiege mich für einen Tipp!$"

MediumGraceBeatenText:
	.string "W-Was?$"

MediumGraceAfterBattleText:
	.string "Gut. Ich verrate dir das\n"
	.string "Geheimnis der Schatten.\p"
	.string "Der Weg liegt direkt vor\n"
	.string "deinen Augen!$"

EcruteakCity_GymGuideText:
	.string "Hey CHAMP! Fast die Hälfte\n"
	.string "ist geschafft!\p"
	.string "Die Trainer hier nutzen GEIST-\n"
	.string "und UNLICHT-POKéMON.\p"
	.string "JENS ist ein Meister der\n"
	.string "GEIST-POKéMON, doch hüte dich\l"
	.string "vor seinem mystischen Hirsch.\p"
	.string "Man sagt, er verursacht\n"
	.string "schreckliche Albträume...$"

EcruteakCity_GymGuideWinText:
	.string "Puh, {PLAYER}!\n"
	.string "Das war großartig!\p"
	.string "Ich habe mich vor lauter Angst\n"
	.string "in der Ecke versteckt!$"

EcruteakCity_GymClosedText:
	.string "JENS, der ARENALEITER,\n"
	.string "ist nicht da.\p"
	.string "Tut mir leid,\n"
	.string "du musst wieder gehen.\p"
	.string "Hohohoho.$"
