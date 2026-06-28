VictoryRoad_B1F_MapScripts::
	.byte 0

VictoryRoad_B1F_EventScript_Samuel::
	trainerbattle_single TRAINER_SAMUEL, VictoryRoad_B1F_Text_SamuelIntro, VictoryRoad_B1F_Text_SamuelDefeat
	msgbox VictoryRoad_B1F_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Shannon::
	trainerbattle_single TRAINER_SHANNON, VictoryRoad_B1F_Text_ShannonIntro, VictoryRoad_B1F_Text_ShannonDefeat
	msgbox VictoryRoad_B1F_Text_ShannonPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Michelle::
	trainerbattle_single TRAINER_MICHELLE, VictoryRoad_B1F_Text_MichelleIntro, VictoryRoad_B1F_Text_MichelleDefeat
	msgbox VictoryRoad_B1F_Text_MichellePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Mitchell::
	trainerbattle_single TRAINER_MITCHELL, VictoryRoad_B1F_Text_MitchellIntro, VictoryRoad_B1F_Text_MitchellDefeat
	msgbox VictoryRoad_B1F_Text_MitchellPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Halle::
	trainerbattle_single TRAINER_HALLE, VictoryRoad_B1F_Text_HalleIntro, VictoryRoad_B1F_Text_HalleDefeat
	msgbox VictoryRoad_B1F_Text_HallePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_Text_SamuelIntro:
	.string "Der Gedanke, dass ich der POKéMON LIGA\n"
	.string "immer näher komme…\p"
	.string "Ich bekomme Lampenfieber…$"

VictoryRoad_B1F_Text_SamuelDefeat:
	.string "Ich konnte gar nichts machen…$"

VictoryRoad_B1F_Text_SamuelPostBattle:
	.string "Die POKéMON LIGA rückt in weite Ferne…\n"
	.string "Was für eine Enttäuschung…$"

VictoryRoad_B1F_Text_ShannonIntro:
	.string "Um dich siegreich durch die POKéMON\n"
	.string "LIGA zu kämpfen, brauchst du das\l"
	.string "Vertrauen deiner POKéMON.$"

VictoryRoad_B1F_Text_ShannonDefeat:
	.string "Eure Beziehung ist auf solidem\n"
	.string "Vertrauen aufgebaut.$"

VictoryRoad_B1F_Text_ShannonPostBattle:
	.string "Das Vertrauen zwischen POKéMON und\n"
	.string "TRAINER wächst beständig, da sie immer\l"
	.string "zusammen sind.$"

VictoryRoad_B1F_Text_MichelleIntro:
	.string "Das ist nicht das Ziel. Nur eine\n"
	.string "Zwischenstation auf dem Weg zur\l"
	.string "POKéMON LIGA.$"

VictoryRoad_B1F_Text_MichelleDefeat:
	.string "Das ist der Weg!$"

VictoryRoad_B1F_Text_MichellePostBattle:
	.string "Du wirst dich sehr gut schlagen, das\n"
	.string "ist sicher. Deine POKéMON lieben dich!$"

VictoryRoad_B1F_Text_MitchellIntro:
	.string "Meine POKéMON sind einfach kosmisch!\n"
	.string "Beeindruckend und inspirierend.$"

VictoryRoad_B1F_Text_MitchellDefeat:
	.string "Jemanden wie dich habe ich noch nie\n"
	.string "getroffen.$"

VictoryRoad_B1F_Text_MitchellPostBattle:
	.string "Auch außerhalb eines Kampfes spüre\n"
	.string "ich die Kraft, die von dir und deinen\l"
	.string "POKéMON ausgeht.$"

VictoryRoad_B1F_Text_HalleIntro:
	.string "Du brauchst dich nicht gleich in Pose\n"
	.string "zu schmeißen! Bleib ganz ruhig.$"

VictoryRoad_B1F_Text_HalleDefeat:
	.string "Whoa! Wunderbar!$"

VictoryRoad_B1F_Text_HallePostBattle:
	.string "Sicher, dies ist die SIEGESSTRASSE.\p"
	.string "Aber sie unterscheidet sich nicht viel\n"
	.string "von dem Weg, den du bisher gegangen\l"
	.string "bist.\p"
	.string "Versuch, den Rest des Weges zu\n"
	.string "genießen.$"

