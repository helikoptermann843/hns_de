RuinsOfAlph_Outside_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RuinsOfAlph_Outside_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

RuinsOfAlph_Outside_OnTransition:
	callnative SetTimeBasedEncounters
	end

RuinsOfAlph_Outside_EventScript_Quagsire::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_QUAGSIRE, CRY_MODE_NORMAL
	msgbox RuinsOfAlph_Outside_Text_Quagsire, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RuinsOfAlph_Outside_Text_Quagsire:
	.string "Es gibt viele unterschiedliche\p"
	.string "Icognito, die wir\n"
	.string "für unsere Geheimcodes benötigen.$"

RuinsOfAlph_Outside_EventScript_Stan::
	trainerbattle_single TRAINER_STAN_HNS, RuinsOfAlph_Outside_Text_SuperNerdStan_Seen, RuinsOfAlph_Outside_Text_SuperNerdStan_Beaten
	msgbox RuinsOfAlph_Outside_Text_SuperNerdStan_After, MSGBOX_AUTOCLOSE
	end

RuinsOfAlph_Outside_EventScript_Nathan::
	trainerbattle_single TRAINER_NATHAN_HNS, RuinsOfAlph_Outside_Text_PsychicNathan_Seen, RuinsOfAlph_Outside_Text_PsychicNathan_Beaten
	msgbox RuinsOfAlph_Outside_Text_PsychicNathan_After, MSGBOX_AUTOCLOSE
	end

RuinsOfAlph_Outside_EventScript_Youngster1::
	lock
	faceplayer
	msgbox RuinsOfAlph_Outside_Text_Youngster1, MSGBOX_DEFAULT
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Youngster2::
	lock
	faceplayer
	msgbox RuinsOfAlph_Outside_Text_Youngster2, MSGBOX_DEFAULT
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Fisher1::
	lock
	faceplayer
	msgbox RuinsOfAlph_Outside_Text_Fisher1, MSGBOX_DEFAULT
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Fisher2::
	lock
	faceplayer
	msgbox RuinsOfAlph_Outside_Text_Fisher2, MSGBOX_DEFAULT
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Sign1::
	lock
	msgbox RuinsOfAlph_Outside_Text_MainSign, MSGBOX_SIGN
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Sign2::
	lock
	msgbox RuinsOfAlph_Outside_Text_ResearchSign, MSGBOX_SIGN
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Sign3::
	lock
	msgbox RuinsOfAlph_Outside_Text_MysteryChamberSign, MSGBOX_SIGN
	closemessage
	release
	end

RuinsOfAlph_Outside_Text_Scientist:
	.string "Hm?\n"
	.string "Oh, ist das etwa ein Pokédex?\l"
	.string "Dürfte ich da mal einen Blick reinwerfen?\p"
	.string "Ist ja ein Ding. \n"
	.string "So viele unterschiedliche Pokémon…\p"
	.string "Unglaublich!\p"
	.string "Was ist das denn für ein Pokémon?\p"
	.string "Es sieht aus wie die merkwürdigen\n"
	.string "Zeichen an den Wänden der Ruinen.\p"
	.string "Falls diese Zeichen tatsächlich Pokémon\n"
	.string "sind, dann gibt es noch viel mehr davon.\p"
	.string "Ich weiß!\n"
	.string "Lass mich deinen Pokédex erweitern.\l"
	.string "Mir nach!$"

RuinsOfAlph_Outside_Text_SuperNerdStan_Seen:
    .string "Was willst du? Ich studiere gerade -\n"
    .string "stör mich nicht!$"

RuinsOfAlph_Outside_Text_SuperNerdStan_Beaten:
    .string "Sorry…\n"
    .string "Ich bin frustriert über unser\n"
    .string "mangelndes Verständnis…$"

RuinsOfAlph_Outside_Text_SuperNerdStan_After:
    .string "Die Ruinen sind etwa 1500 Jahre alt.\p"
    .string "Niemand weiß, wer sie erbaut hat.\p"
    .string "Auch ist unklar, ob die Pokémon-\n"
    .string "Statuen eine Bedeutung haben.\p"
    .string "Alles ist ein großes Rätsel…$"

RuinsOfAlph_Outside_Text_PsychicNathan_Seen:
	.string "Hm… dies ist ein merkwürdiger Ort.$"

RuinsOfAlph_Outside_Text_PsychicNathan_Beaten:
    .string "…$"

RuinsOfAlph_Outside_Text_PsychicNathan_After:
	.string "Ich komme oft hierher,\n"
	.string "um nachzudenken.$"

RuinsOfAlph_Outside_Text_MysteryChamberSign:
	.string "Rätselstein Puzzlekammer$"

RuinsOfAlph_Outside_Text_MainSign:
	.string "Alph-Ruinen\p"
	.string "Besucher jederzeit\n"
	.string "willkommen$"

RuinsOfAlph_Outside_Text_ResearchSign:
	.string "Alph-Ruinen Forschungszentrum\p"
	.string "Die Autorität der Alph-Ruinen$"

RuinsOfAlph_Outside_Text_Fisher1:
	.string "Beim Erkunden der Ruinen haben wir\p"
	.string "plötzlich eine seltsame\n"
	.string "Gegenwart gespürt.\p"
	.string "Alle hatten Angst und liefen davon.\p"
	.string "Du solltest auch vorsichtig sein.$"

RuinsOfAlph_Outside_Text_Fisher2:
	.string "Den Ruinen wohnt\n"
	.string "ein großes Geheimnis inne!\p"
	.string "…Ich denke…$"

RuinsOfAlph_Outside_Text_Youngster1:
	.string "Es gibt viele unterschiedliche\n"
	.string "Icognito, die wir\l"
	.string "für unsere Geheimcodes benötigen.$"

RuinsOfAlph_Outside_Text_Youngster2:
	.string "V… O… R… A… U… S… Hmm…\p"
	.string "Wie?\p"
	.string "Ich dechiffriere diese Nachricht!$"
