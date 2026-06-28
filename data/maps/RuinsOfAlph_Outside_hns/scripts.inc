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
	.string "ICOGNITO, die wir\n"
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
	.string "Hm? Das ist doch ein Pokédex,\n"
	.string "nicht wahr? Darf ich ihn sehen?\p"
	.string "Es gibt so viele\n"
	.string "unterschiedliche Pokémon.\p"
	.string "Hm? Was ist das?\p"
	.string "Was ist das für ein Pokémon?\p"
	.string "Es sieht aus wie die merkwürdigen\p"
	.string "Zeichen an den Wänden in den RUINEN.\p"
	.string "Falls diese Zeichen tatsächlich\n"
	.string "Pokémon sind, dann gibt es\l"
	.string "noch viel mehr davon.\p"
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
    .string "Die RUINEN sind etwa 1500 Jahre alt.\p"
    .string "Niemand weiß, wer sie erbaut hat.\p"
    .string "Auch ist unklar, ob die POKéMON-\n"
    .string "Statuen eine Bedeutung haben.\p"
    .string "Alles ist ein großes Rätsel…$"

RuinsOfAlph_Outside_Text_PsychicNathan_Seen:
    .string "Hmm… Das ist ein seltsamer Ort.$"

RuinsOfAlph_Outside_Text_PsychicNathan_Beaten:
    .string "…$"

RuinsOfAlph_Outside_Text_PsychicNathan_After:
	.string "Hier kann ich gut nachdenken.$"

RuinsOfAlph_Outside_Text_MysteryChamberSign:
	.string "RÄTSELSTEIN PUZZLEKAMMER$"

RuinsOfAlph_Outside_Text_MainSign:
	.string "ALPH-RUINEN GÄSTE WILLKOMMEN$"

RuinsOfAlph_Outside_Text_ResearchSign:
	.string "Alph-Ruinen Forschungszentrum\p"
	.string "Die Autorität der Alph-Ruinen$"

RuinsOfAlph_Outside_Text_Fisher1:
	.string "Beim Erkunden der RUINEN haben wir\p"
	.string "plötzlich eine seltsame\n"
	.string "Gegenwart gespürt.\p"
	.string "Alle hatten Angst und liefen davon.\p"
	.string "Du solltest auch vorsichtig sein.$"

RuinsOfAlph_Outside_Text_Fisher2:
	.string "Den RUINEN wohnt\n"
	.string "ein großes Geheimnis inne!\p"
	.string "…Ich denke…$"

RuinsOfAlph_Outside_Text_Youngster1:
	.string "Es gibt viele unterschiedliche\n"
	.string "ICOGNITO, die wir\l"
	.string "für unsere Geheimcodes benötigen.$"

RuinsOfAlph_Outside_Text_Youngster2:
	.string "V… O… R… A… U… S… Hmm…\p"
	.string "Wie?\p"
	.string "Ich dechiffriere diese Nachricht!$"
