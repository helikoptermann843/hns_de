RocketHideout_B3F_Frlg_MapScripts::
	.byte 0

RocketHideout_B3F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_14, RocketHideout_B3F_Text_Grunt1Intro, RocketHideout_B3F_Text_Grunt1Defeat
	msgbox RocketHideout_B3F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B3F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_15, RocketHideout_B3F_Text_Grunt2Intro, RocketHideout_B3F_Text_Grunt2Defeat
	msgbox RocketHideout_B3F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B3F_Text_Grunt1Intro::
	.string "Halte dich aus Team Rockets\n"
	.string "Angelegenheiten raus!$"

RocketHideout_B3F_Text_Grunt1Defeat::
	.string "Uff!\n"
	.string "Ich bin am Boden!$"

RocketHideout_B3F_Text_Grunt1PostBattle::
	.string "Das Silph Scope? Das Gerät, das\n"
	.string "der Boss geraubt hat?\p"
	.string "Das ist hier irgendwo...$"

RocketHideout_B3F_Text_Grunt2Intro::
	.string "Wir hörten schon, dass du im\n"
	.string "Anmarsch bist!$"

RocketHideout_B3F_Text_Grunt2Defeat::
	.string "Was?\n"
	.string "Ich hab verloren? Ah!$"

RocketHideout_B3F_Text_Grunt2PostBattle::
	.string "Geh ruhig weiter!\p"
	.string "Du benötigst den Liftöffner und\n"
	.string "der fehlt dir!$"

