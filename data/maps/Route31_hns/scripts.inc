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
	.string "Hm, die Dunkelhöhle…\n"
	.string "Wenn ein Pokémon mithilfe einer Attacke\l"
	.string "da drinnen für Licht sorgen könnte,\l"
	.string "würde ich sie erforschen gehen.$"

Route31_Text_BugCatcherWade1_Seen:
	.string "Ich habe jede Menge Pokémon gefangen!\n"
	.string "Lass uns kämpfen!$"

Route31_Text_BugCatcherWade1_Beaten:
	.string "Also… irgendwas lief hier\n"
	.string "gerade mächtig schief!$"

Route31_Text_BugCatcherWade1_After:
	.string "Du kannst Pokémon fangen, auch wenn\n"
	.string "du bereits sechs bei dir trägst.\p"
	.string "Fängst du eines, wird es automatisch\n"
	.string "in deine Box im PC übertragen.$"

Route31_Text_SleepyMan:
	.string "Murmel, murmel, gähn…\p"
	.string "Ich bin heute auf der Suche nach\n"
	.string "Pokémon viel zu viel gelaufen.\l"
	.string "Meine Füße tun weh und ich bin müde…\p"
	.string "Wenn ich ein wildes Pokémon wäre,\n"
	.string "wäre ich jetzt leichte Beute…\l"
	.string "Gähn… zzz…$"

Route31_Text_SleepyManGotMail:
	.string "…Zzzz… Häh?\p"
	.string "Was ist? Du hast einen BRIEF für mich?$"

Route31_Text_SleepyManFail:
	.string "…Zzzz…$"

Route31_Text_HandOverMailMon:
	.string "{PLAYER} übergibt das Pokémon,\n"
	.string "das den Brief trägt!$"

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
	.string "Die TM44 enthält… gähn…\n"
	.string "Zzzz…\l"
	.string "… … …\p"
	.string "…Huch! Erholung!!! Sie enthält\n"
	.string "natürlich die Attacke Erholung!\p"
	.string "Sie erlaubt deinem Pokémon, sich\n"
	.string "eine Mütze voll Schlaf zu nehmen\l"
	.string "und heilt auf diese Weise seine KP!$"

Route31_Text_WrongMail:
	.string "Dieser Brief scheint nicht an\n"
	.string "mich adressiert zu sein…\p"
	.string "Gähn…$"

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
	.string "Ich habe in der Dunkelhöhle ein\n"
	.string "tolles Pokémon gefangen!\p"
	.string "Ich werde es trainieren, um später\n"
	.string "damit gegen Falk, den Arenaleiter\l"
	.string "von Viola City anzutreten!$"

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
	.string "Dunkelhöhle$"
