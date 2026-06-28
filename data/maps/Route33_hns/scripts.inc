Route33_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route33_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route33_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route33_EventScript_HikerAnthony::
	trainerbattle_single TRAINER_ANTHONY_HNS, Route33_Text_HikerAnthony2Seen, Route33_Text_HikerAnthony2Beaten, Route33_EventScript_RegisterAnthony
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route33_EventScript_RematchAnthony
	msgbox Route33_Text_HikerAnthony2After, MSGBOX_AUTOCLOSE
	end

Route33_EventScript_RegisterAnthony::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route33_Text_AnthonyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ANTHONY_HNS
	release
	end

Route33_EventScript_RematchAnthony::
	trainerbattle_rematch TRAINER_ANTHONY_HNS, Route33_Text_AnthonyRematchIntro, Route33_Text_AnthonyRematchDefeat
	msgbox Route33_Text_AnthonyPostRematch, MSGBOX_AUTOCLOSE
	end

Route33_EventScript_Lass::
	lock
	faceplayer
	msgbox Route33_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

Route33_Text_HikerAnthony2Seen:
	.string "Ich bin durch den Tunnel gegangen,\n"
	.string "aber ich habe noch\l"
	.string "viel Energie übrig.$"

Route33_Text_HikerAnthony2Beaten:
	.string "Wow! Du hast mehr Mumm als ich!$"

Route33_Text_HikerAnthony2After:
	.string "In den Bergen sind\n"
	.string "wir WANDERER in unserem Element.$"

Route33_Text_AnthonyRegister:
    .string "Wir WANDERER sind in den Bergen\n"
    .string "in unserem Element.$"

Route33_Text_AnthonyRematchIntro:
    .string "Ich bin durch den Tunnel gekommen,\n"
    .string "habe aber immer noch jede Menge\l"
    .string "Energie übrig.$"

Route33_Text_AnthonyRematchDefeat:
    .string "Wow! Du hast mehr Schwung\n"
    .string "als ich!$"

Route33_Text_AnthonyPostRematch:
    .string "Wir WANDERER sind in den Bergen\n"
    .string "in unserem Element.$"

Route33_Text_HikerAnthonyDunsparce:
	.string "Heh, hast du ein DUMMISEL?\p"
	.string "Ich habe eines.\p"
	.string "Sieh es dir im Licht an.\p"
	.string "Es hat ein lustiges Gesicht!$"

Route33_Text_Lass:
	.string "Hechel, keuch…\p"
	.string "Endlich habe ich\n"
	.string "es durch diese Höhle geschafft!\p"
	.string "Sie war größer, als ich annahm.\p"
	.string "Ich war zu erschöpft, um alles\n"
	.string "zu erkunden, also habe ich sie\l"
	.string "verlassen.$"
