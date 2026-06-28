Route31_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route31_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route31_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route31_EventScript_Bugcatcher_Wade::
	trainerbattle_single TRAINER_WADE_HNS, Route31_Text_BugCatcherWade1_Seen, Route31_Text_BugCatcherWade1_Beaten, Route31_EventScript_RegisterWade
	goto_if_set FLAG_WADE_HAS_ITEM_HNS, Route31_EventScript_WadeGiveItem
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route31_EventScript_RematchWade
	msgbox Route31_Text_BugCatcherWade1_After, MSGBOX_AUTOCLOSE
	end

Route31_EventScript_RegisterWade::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route31_Text_WadeRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_WADE_HNS
	release
	end

Route31_EventScript_RematchWade::
	trainerbattle_rematch TRAINER_WADE_HNS, Route31_Text_WadeRematchIntro, Route31_Text_WadeRematchDefeat
	msgbox Route31_Text_WadePostRematch, MSGBOX_AUTOCLOSE
	end

Route31_EventScript_WadeGiveItem::
	msgbox Route31_Text_WadeHasItem, MSGBOX_DEFAULT
	giveitem VAR_WADE_ITEM_HNS
	goto_if_eq VAR_RESULT, FALSE, Route31_EventScript_WadeNoRoom
	clearflag FLAG_WADE_HAS_ITEM_HNS
	msgbox Route31_Text_WadeGaveItem, MSGBOX_AUTOCLOSE
	end

Route31_EventScript_WadeNoRoom::
	msgbox Route31_Text_WadeNoRoom, MSGBOX_AUTOCLOSE
	end

Route31_EventScript_Youngster::
	lock
	faceplayer
	msgbox Route31_Text_CooltrainerM, MSGBOX_DEFAULT
	closemessage
	release
	end

Route31_EventScript_SleepyMan::
	lock
	faceplayer
	goto_if_eq VAR_KENYA, 1, Route31_EventScript_SleepyMan_AskForKenya
	msgbox Route31_Text_SleepyMan, MSGBOX_DEFAULT
	closemessage
	release
	end

Route31_EventScript_SleepyMan_AskForKenya::
	msgbox Route31_Text_SleepyManGotMail, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route31_EventScript_SleepyMan_GiveKenya
	msgbox Route31_Text_SleepyManFail, MSGBOX_DEFAULT
	closemessage
	release
	end

Route31_EventScript_SleepyMan_GiveKenya::
	removenamedmon 1
	goto_if_eq VAR_RESULT, MON_CANT_GIVE, Route31_EventScript_SleepyMan_Fail
	msgbox Route31_Text_HandOverMailMon, MSGBOX_DEFAULT
	delay 55
	callnative UpdateFollowingPokemon
	msgbox Route31_Text_ReadingMail, MSGBOX_DEFAULT
	giveitem ITEM_TM_REST
	msgbox Route31_Text_DescribeRest, MSGBOX_DEFAULT
	closemessage
	setvar VAR_KENYA, 2
	release
	end

Route31_EventScript_SleepyMan_Fail::
	msgbox Route31_Text_SleepyManFail, MSGBOX_DEFAULT
	release
	end


Route31_EventScript_Boy::
	lock
	faceplayer
	msgbox Route31_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

Route31_EventScript_DarkCaveSign::
	lock
	msgbox Route31_Text_DarkCaveSign, MSGBOX_SIGN
	closemessage
	release
	end

Route31_EventScript_Sign::
	lock
	msgbox Route31_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end

Route31_EventScript_ItemPokeBall::
	finditem ITEM_POKE_BALL
	end

Route31_EventScript_ItemAntidote::
	finditem ITEM_ANTIDOTE
	end

Route31_Text_CooltrainerM:
	.string "DUNKELHÖHLE…\p"
	.string "Wenn ein Pokémon\n"
	.string "für Licht sorgen könnte,\l"
	.string "würde ich sie erforschen.$"

Route31_Text_BugCatcherWade1_Seen:
	.string "Ich habe einige Pokémon gefangen.\n"
	.string "Lass uns kämpfen!$"

Route31_Text_BugCatcherWade1_Beaten:
	.string "Awwwww…$"

Route31_Text_BugCatcherWade1_After:
	.string "Du kannst Pokémon fangen, auch wenn\n"
	.string "du bereits sechs bei dir trägst.\p"
	.string "Fängst du eines,\n"
	.string "wird es automatisch auf die BOX\l"
	.string "im PC übertragen.$"

Route31_Text_SleepyMan:
	.string "…Uargh… Hä?\p"
	.string "Heute bin ich auf\n"
	.string "der Suche nach Pokémon\l"
	.string "zu viel gelaufen.\p"
	.string "Meine Füße schmerzen\n"
	.string "und ich bin müde…\p"
	.string "Wenn ich ein wildes\n"
	.string "Pokémon wäre, würde ich mich\l"
	.string "leicht fangen lassen…\p"
	.string "…Zzzz…$"

Route31_Text_SleepyManGotMail:
	.string "…Zzzz… Häh?\p"
	.string "Was ist? Du hast einen BRIEF für mich?$"

Route31_Text_SleepyManFail:
	.string "…Zzzz…$"

Route31_Text_HandOverMailMon:
	.string "{PLAYER} übergibt\n"
	.string "das Pokémon, das den BRIEF trägt.$"

Route31_Text_ReadingMail:
	.string "Mal sehen…\p"
	.string "…die DUNKELHÖHLE\n"
	.string "führt zu einem anderen Weg…\p"
	.string "Gut zu wissen.\p"
	.string "Danke, dass du mir\n"
	.string "den BRIEF brachtest.\p"
	.string "Mein Freund ist\n"
	.string "ein netter Mensch, genau wie du!\p"
	.string "Ich möchte mich\n"
	.string "bei dir dafür revanchieren!\p"
	.string "Ich hab's! Ich\n"
	.string "möchte dir das hier geben!$"

Route31_Text_DescribeRest:
	.string "...Zzz...\p"
	.string "...Umm... Erholung!\p"
	.string "Eine Attacke um KP zu erholen.$"

Route31_Text_WrongMail:
	.string "Der BRIEF ist nicht für mich.$"

Route31_Text_MissingMail:
	.string "Was ist so besonders\n"
	.string "an diesem Pokémon?\p"
	.string "Es trägt keinen BRIEF.$"

Route31_Text_DeclinedToHandOverMail:
	.string "Was? Du möchtest nichts?$"

Route31_Text_CantTakeLastMon:
	.string "Wenn ich dir dieses Pokémon wegnehme,\n"
	.string "womit willst du dann kämpfen?$"

Route31_Text_Youngster:
	.string "Ich habe ein gutes Pokémon \n"
	.string "in der DUNKELHÖHLE gefunden.\p"
	.string "Ich ziehe es groß,\n"
	.string "um später gegen FALK anzutreten.\p"
	.string "Er ist der ARENALEITER\n"
	.string "von VIOLA CITY.$"

Route31_Text_Sign:
	.string "ROUTE 31\p"
	.string "VIOLA CITY - ROSALIA CITY$"

Route31_Text_WadeRegister:
    .string "Du bist spitze! Ich mag dich!\p"
    .string "Ich suche hier jeden Tag nach\n"
    .string "POKéMON.\p"
    .string "Im hohen Gras finde ich alle\n"
    .string "möglichen BEEREN.\p"
    .string "Wenn du möchtest, teile ich\n"
    .string "sie mit dir.$"

Route31_Text_WadeRematchIntro:
    .string "Ich habe auf dich gewartet.\n"
    .string "Lass uns kämpfen!$"

Route31_Text_WadeRematchDefeat:
    .string "Awwwww…$"

Route31_Text_WadePostRematch:
    .string "Ich melde mich sofort, wenn\n"
    .string "ich etwas finde, das dir\l"
    .string "gefallen könnte.$"

Route31_Text_WadeHasItem:
    .string "Hey! Ich habe nach dir\n"
    .string "gesucht!\p"
    .string "Ich habe etwas gefunden,\n"
    .string "als ich im Gras unterwegs war.\p"
    .string "Hier, du kannst es haben!$"

Route31_Text_WadeGaveItem:
    .string "Ich sage dir Bescheid, wenn\n"
    .string "ich noch etwas finde!$"

Route31_Text_WadeNoRoom:
    .string "Hm, dein BEUTEL scheint\n"
    .string "voll zu sein.\p"
    .string "Komm wieder, wenn du Platz\n"
    .string "hast!$"

Route31_Text_DarkCaveSign:
	.string "DUNKELHÖHLE$"
