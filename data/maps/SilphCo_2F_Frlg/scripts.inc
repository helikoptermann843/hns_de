SilphCo_2F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_2F_OnLoad
	.byte 0

SilphCo_2F_OnLoad::
	call_if_unset FLAG_SILPH_2F_DOOR_1, EventScript_Close2FDoor1
	call_if_unset FLAG_SILPH_2F_DOOR_2, EventScript_Close2FDoor2
	end

SilphCo_2F_EventScript_ThunderWaveTutor::
	goto EventScript_ThunderWaveTutor
	end

SilphCo_2F_EventScript_FloorSign::
	msgbox SilphCo_2F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_2F_EventScript_Connor::
	trainerbattle_single TRAINER_SCIENTIST_CONNOR, SilphCo_2F_Text_ConnorIntro, SilphCo_2F_Text_ConnorDefeat
	msgbox SilphCo_2F_Text_ConnorPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_2F_EventScript_Jerry::
	trainerbattle_single TRAINER_SCIENTIST_JERRY, SilphCo_2F_Text_JerryIntro, SilphCo_2F_Text_JerryDefeat
	msgbox SilphCo_2F_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_2F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_23, SilphCo_2F_Text_Grunt1Intro, SilphCo_2F_Text_Grunt1Defeat
	msgbox SilphCo_2F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_2F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_24, SilphCo_2F_Text_Grunt2Intro, SilphCo_2F_Text_Grunt2Defeat
	msgbox SilphCo_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_2F_Text_ConnorIntro::
	.string "Hilfe! Ich bin ein Mitarbeiter der\n"
	.string "Silph Co.!$"

SilphCo_2F_Text_ConnorDefeat::
	.string "Woher wusstest du, dass ich zum\n"
	.string "Team Rocket gehöre?$"

SilphCo_2F_Text_ConnorPostBattle::
	.string "Ich bin ein Spion und infiltriere\n"
	.string "die Silph Co.!$"

SilphCo_2F_Text_JerryIntro::
	.string "Hau ab!\n"
	.string "Du hast keinen Zutritt!$"

SilphCo_2F_Text_JerryDefeat::
	.string "Nicht schlecht, Herr Specht!$"

SilphCo_2F_Text_JerryPostBattle::
	.string "Aber findest du auch durch dieses\n"
	.string "Labyrinth?$"

SilphCo_2F_Text_Grunt1Intro::
	.string "Heh, du hast hier nichts verloren!$"

SilphCo_2F_Text_Grunt1Defeat::
	.string "Das ist hart! Verloren!$"

SilphCo_2F_Text_Grunt1PostBattle::
	.string "Die diamantförmigen Felder sind\n"
	.string "Teleporter!\p"
	.string "Eine Art Hi-Tech-Transportsystem!$"

SilphCo_2F_Text_Grunt2Intro::
	.string "Heh Balg!\n"
	.string "Was machst du hier?$"

SilphCo_2F_Text_Grunt2Defeat::
	.string "Ich bin ein Versager!$"

SilphCo_2F_Text_Grunt2PostBattle::
	.string "Die Silph Co. und das Team Rocket\n"
	.string "werden demnächst fusionieren!$"

Text_ThunderWaveTeach::
	.string "Zu Hilfe! Nein!\n"
	.string "Bitte nicht!\p"
	.string "Du bist gar nicht vom Team Rocket!\n"
	.string "Ich dachte schon, es ginge zu\l"
	.string "Ende!\p"
	.string "Verzeihst du mir, wenn ich einem\n"
	.string "deiner Pokémon Donnerwelle\l"
	.string "beibringe?$"

Text_ThunderWaveDeclined::
	.string "Oh…\n"
	.string "Aber Donnerwelle ist praktisch…$"

Text_ThunderWaveWhichMon::
	.string "Welches Pokémon soll\n"
	.string "Donnerwelle erlernen?$"

Text_ThunderWaveTaught::
	.string "Donnerwelle verursacht\n"
	.string "Paralyse beim Gegner.\p"
	.string "Ein paralysiertes Pokémon kann\n"
	.string "sich im Kampf evtl. nicht bewegen.\p"
	.string "Da es eine Attacke der Element-\n"
	.string "klasse Elektro ist, funktioniert\l"
	.string "sie bei manchen Pokémon nicht.$"

SilphCo_2F_Text_FloorSign::
	.string "Silph Co. Hauptsitz\n"
	.string "1 Og$"

