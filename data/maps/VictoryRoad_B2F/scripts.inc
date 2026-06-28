VictoryRoad_B2F_MapScripts::
	.byte 0

VictoryRoad_B2F_EventScript_Vito::
	trainerbattle_single TRAINER_VITO, VictoryRoad_B2F_Text_VitoIntro, VictoryRoad_B2F_Text_VitoDefeat
	msgbox VictoryRoad_B2F_Text_VitoPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Owen::
	trainerbattle_single TRAINER_OWEN, VictoryRoad_B2F_Text_OwenIntro, VictoryRoad_B2F_Text_OwenDefeat
	msgbox VictoryRoad_B2F_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Caroline::
	trainerbattle_single TRAINER_CAROLINE, VictoryRoad_B2F_Text_CarolineIntro, VictoryRoad_B2F_Text_CarolineDefeat
	msgbox VictoryRoad_B2F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Julie::
	trainerbattle_single TRAINER_JULIE, VictoryRoad_B2F_Text_JulieIntro, VictoryRoad_B2F_Text_JulieDefeat
	msgbox VictoryRoad_B2F_Text_JuliePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Felix::
	trainerbattle_single TRAINER_FELIX, VictoryRoad_B2F_Text_FelixIntro, VictoryRoad_B2F_Text_FelixDefeat
	msgbox VictoryRoad_B2F_Text_FelixPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Dianne::
	trainerbattle_single TRAINER_DIANNE, VictoryRoad_B2F_Text_DianneIntro, VictoryRoad_B2F_Text_DianneDefeat
	msgbox VictoryRoad_B2F_Text_DiannePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_Text_VitoIntro:
	.string "Ich habe mit meiner Familie trainiert,\n"
	.string "mit jedem einzelnen Mitglied!\l"
	.string "Ich verliere gegen niemanden!$"

VictoryRoad_B2F_Text_VitoDefeat:
	.string "Besser als meine Familie?\n"
	.string "Ist das möglich?$"

VictoryRoad_B2F_Text_VitoPostBattle:
	.string "Ich war besser als jeder andere aus\n"
	.string "meiner Familie. Ich habe nie verloren!\n"
	.string "\p"
	.string "Ich habe mein Selbstvertrauen ver-\n"
	.string "loren. Ich gehe nach Hause…$"

VictoryRoad_B2F_Text_OwenIntro:
	.string "Ich habe gehört, dass sich hier ein\n"
	.string "sehr\l"
	.string "starkes Kind herumtreibt. Bist du das?$"

VictoryRoad_B2F_Text_OwenDefeat:
	.string "Diese kleine Kröte ist echt stark!$"

VictoryRoad_B2F_Text_OwenPostBattle:
	.string "Das Gerücht sagt, das Kind käme aus\n"
	.string "BLÜTENBURG CITY.$"

VictoryRoad_B2F_Text_CarolineIntro:
	.string "Du musst doch langsam mal müde werden.$"

VictoryRoad_B2F_Text_CarolineDefeat:
	.string "Keine Anzeichen von Müdigkeit…$"

VictoryRoad_B2F_Text_CarolinePostBattle:
	.string "Die SIEGESSTRASSE und die POKéMON\n"
	.string "LIGA sind große und langwierige\n"
	.string "Heraus-\l"
	.string "forderungen. Werde bloß nicht müde!!!$"

VictoryRoad_B2F_Text_JulieIntro:
	.string "Du solltest nicht selbstzufrieden\n"
	.string "werden, nur weil du viele ORDEN der\l"
	.string "ARENen besitzt.\p"
	.string "Es wird immer jemanden geben, der\n"
	.string "besser ist als du!$"

VictoryRoad_B2F_Text_JulieDefeat:
	.string "Du bist besser als ich!$"

VictoryRoad_B2F_Text_JuliePostBattle:
	.string "Schau dir deine ORDEN an - erinnere\n"
	.string "dich\l"
	.string "an die TRAINER, die du getroffen hast.$"

VictoryRoad_B2F_Text_FelixIntro:
	.string "Ich bin weit gekommen, aber die\n"
	.string "Anspannung verursacht mir\l"
	.string "Magenschmerzen…$"

VictoryRoad_B2F_Text_FelixDefeat:
	.string "Ooh… Es tut weh…$"

VictoryRoad_B2F_Text_FelixPostBattle:
	.string "Ich kann nicht anders. Hier in der\n"
	.string "Nähe\n"
	.string "der POKéMON LIGA bin ich total nervös\l"
	.string "und angespannt.\p"
	.string "Ich tue so, als sei ich die Ruhe\n"
	.string "selbst.$"

VictoryRoad_B2F_Text_DianneIntro:
	.string "Die Elite der Elite versammelt sich in\n"
	.string "dieser Höhle.\p"
	.string "Wie findest du das?$"

VictoryRoad_B2F_Text_DianneDefeat:
	.string "Nicht ein bisschen erschüttert.$"

VictoryRoad_B2F_Text_DiannePostBattle:
	.string "Du hast echt Nerven! Das mag ich!\n"
	.string "Mach weiter so!$"

