Route44_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route44_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route44_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route44_EventScript_Wilton::
	trainerbattle_single TRAINER_WILTON_HNS, Route44_Text_FisherWilton1Seen, Route44_Text_FisherWilton1Beaten, Route44_EventScript_RegisterWilton
	goto_if_set FLAG_WILTON_HAS_ITEM_HNS, Route44_EventScript_WiltonGiveItem
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route44_EventScript_RematchWilton
	msgbox Route44_Text_FisherWiltonHugePoliwag, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_RegisterWilton::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route44_Text_WiltonRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_WILTON_HNS
	release
	end

Route44_EventScript_RematchWilton::
	trainerbattle_rematch TRAINER_WILTON_HNS, Route44_Text_WiltonRematchIntro, Route44_Text_WiltonRematchDefeat
	msgbox Route44_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_WiltonGiveItem::
	msgbox Route44_Text_WiltonHasItem, MSGBOX_DEFAULT
	giveitem VAR_WILTON_ITEM_HNS
	goto_if_eq VAR_RESULT, FALSE, Route44_EventScript_WiltonNoRoom
	clearflag FLAG_WILTON_HAS_ITEM_HNS
	msgbox Route44_Text_WiltonGaveItem, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_WiltonNoRoom::
	msgbox Route44_Text_WiltonNoRoom, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Edgar::
	trainerbattle_single TRAINER_EDGAR_HNS, Route44_Text_FisherEdgarSeen, Route44_Text_FisherEdgarBeaten
	msgbox Route44_Text_FisherEdgarAfter, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Vance::
	trainerbattle_single TRAINER_VANCE_HNS, Route44_Text_BirdKeeperVance1Seen, Route44_Text_BirdKeeperVance1Beaten, Route44_EventScript_RegisterVance
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route44_EventScript_RematchVance
	msgbox Route44_Text_BirdKeeperVanceBirds, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_RegisterVance::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route44_Text_VanceRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_VANCE_HNS
	release
	end

Route44_EventScript_RematchVance::
	trainerbattle_rematch TRAINER_VANCE_HNS, Route44_Text_VanceRematchIntro, Route44_Text_VanceRematchDefeat
	msgbox Route44_Text_VancePostRematch, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Phil::
	trainerbattle_single TRAINER_PHIL_HNS, Route44_Text_PsychicPhilSeen, Route44_Text_PsychicPhilBeaten
	msgbox Route44_Text_PsychicPhilAfter, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Zach::
	trainerbattle_single TRAINER_ZACH_HNS, Route44_Text_PokemaniacZachSeen, Route44_Text_PokemaniacZachBeaten
	msgbox Route44_Text_PokemaniacZachAfter, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Allen::
	trainerbattle_single TRAINER_ALLEN_HNS, Route44_Text_CooltrainermAllenSeen, Route44_Text_CooltrainermAllenBeaten
	msgbox Route44_Text_CooltrainermAllenAfter, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Cybil::
	trainerbattle_single TRAINER_CYBIL_HNS, Route44_Text_CooltrainerfCybilSeen, Route44_Text_CooltrainerfCybilBeaten
	msgbox Route44_Text_CooltrainerfCybilAfter, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Sign1::
	msgbox Route44_Text_Sign1, MSGBOX_SIGN
	end

Route44_EventScript_Sign2::
	msgbox Route44_Text_Sign2, MSGBOX_SIGN
	end

Route44_EventScript_Item_MaxRepel::
	finditem ITEM_MAX_REPEL
	end

Route44_EventScript_Item_UltraBall::
	finditem ITEM_ULTRA_BALL
	end

Route44_EventScript_Item_Elixir::
	finditem ITEM_ELIXIR
	end

Route44_Text_FisherWilton1Seen:
	.string "Aah! Wegen dir\n"
	.string "habe ich ein QUAPSEL verloren!\p"
	.string "Was wirst du deswegen unternehmen?$"

Route44_Text_FisherWilton1Beaten:
	.string "Vergiss es einfach.$"

Route44_Text_FisherWiltonHugePoliwag:
	.string "Dieses QUAPSEL,\n"
	.string "das geflohen ist… Das war riesig.\p"
	.string "Ich könnte\n"
	.string "schwören, dass es 5 Meter lang war!$"

Route44_Text_WiltonRegister:
    .string "Das QUAPUTZI, das mir entkommen ist…\n"
    .string "es war riesig.\p"
    .string "Ich schwöre, es muss über\n"
    .string "5 Meter groß gewesen sein!$"

Route44_Text_WiltonRematchIntro:
    .string "Aah!\p"
    .string "Wegen dir ist mir ein QUAPUTZI\n"
    .string "entkommen! Was hast du dazu zu sagen?$"

Route44_Text_WiltonRematchDefeat:
    .string "Vergiss es einfach.$"

Route44_Text_WiltonPostRematch:
    .string "Das QUAPUTZI, das mir entkommen ist…\n"
    .string "es war riesig.\p"
    .string "Ich schwöre, es muss über\n"
    .string "5 Meter groß gewesen sein!$"

Route44_Text_WiltonHasItem:
    .string "Hey! Ich habe etwas anderes als\n"
    .string "ein POKéMON an Land gezogen!\p"
    .string "Hier, du kannst es haben!$"

Route44_Text_WiltonGaveItem:
    .string "Ich sage dir Bescheid, wenn ich\n"
    .string "noch etwas aus dem Wasser ziehe!$"

Route44_Text_WiltonNoRoom:
    .string "Hm, dein BEUTEL ist voll.\p"
    .string "Komm wieder, wenn du Platz hast.$"

Route44_Text_FisherEdgarSeen:
	.string "Ich angle so\n"
	.string "lange, bis ich nicht mehr kann.\p"
	.string "Und ich kämpfe bis zum Umfallen.\p"
	.string "So gehe ich\n"
	.string "auch mit meinen Pokémon um.$"

Route44_Text_FisherEdgarBeaten:
	.string "Hmm… Das ist nicht\p"
	.string "richtig.$"

Route44_Text_FisherEdgarAfter:
    .string "Das sind 100 Siege zu 101 Niederlagen.\p"
    .string "Ich werde eine Weile nicht mehr kämpfen.$"

Route44_Text_BirdKeeperVance1Seen:
	.string "Hast du schon von\n"
	.string "dem legendären Vogel-Pokémon gehört?$"

Route44_Text_BirdKeeperVance1Beaten:
	.string "Puh! Du bist nicht\n"
	.string "von schlechten Eltern.$"

Route44_Text_BirdKeeperVanceBirds:
    .string "ARKTOS, ZAPDOS und LAVADOS sind\n"
    .string "die drei legendären Vogel-POKéMON.\p"
    .string "Ich habe gehört, es soll noch andere\n"
    .string "legendäre Vögel geben.$"

Route44_Text_VanceRegister:
    .string "ARKTOS, ZAPDOS und LAVADOS sind\n"
    .string "die drei legendären Vogel-POKéMON.\p"
    .string "Ich habe gehört, es soll noch andere\n"
    .string "legendäre Vögel geben.$"

Route44_Text_VanceRematchIntro:
    .string "Kennst du die legendären\n"
    .string "Vogel-POKéMON?$"

Route44_Text_VanceRematchDefeat:
    .string "Puh! Du bist echt stark.$"

Route44_Text_VancePostRematch:
    .string "ARKTOS, ZAPDOS und LAVADOS sind\n"
    .string "die drei legendären Vogel-POKéMON.\p"
    .string "Ich habe gehört, es soll noch andere\n"
    .string "legendäre Vögel geben.$"

Route44_Text_PsychicPhilSeen:
	.string "Ich gewinne hundertprozentig!$"

Route44_Text_PsychicPhilBeaten:
	.string "Aah… Das ist\n"
	.string "eine schockierende Niederlage…$"

Route44_Text_PsychicPhilAfter:

Route44_Text_PokemaniacZachSeen:
	.string "Ich tue alles,\n"
	.string "um seltene Pokémon in die Finger zu\l"
	.string "bekommen!$"

Route44_Text_PokemaniacZachBeaten:
	.string "Ach, deine Pokémon sind ja niedlich.$"

Route44_Text_PokemaniacZachAfter:
    .string "Wenn ein POKéMON andere Farben als\n"
    .string "üblich hat, ist es wertvoller.\p"
    .string "Was? Du meinst, das stimmt nicht?$"

Route44_Text_CooltrainermAllenSeen:
	.string "Ich kann sehen,\n"
	.string "dass du ein guter Trainer bist.\p"
	.string "Ich kenne mich gut\n"
	.string "mit Pokémon aus und ich sehe, dass du\l"
	.string "das auch tust.$"

Route44_Text_CooltrainermAllenBeaten:
	.string "Puh! Das war ja der totale Reinfall!$"

Route44_Text_CooltrainermAllenAfter:
    .string "Wow. Du hast eine Menge ORDEN.\p"
    .string "Kein Wunder, dass du so stark bist.\p"
    .string "Ob ARENALEITER MORTY aus TEAK CITY\n"
    .string "wohl noch trainiert?\p"
    .string "Der hat mich wirklich fertiggemacht.$"

Route44_Text_CooltrainerfCybilSeen:
	.string "Du siehst sehr stark aus.\p"
	.string "Gute Trainer\n"
	.string "suchen instinktiv nach starken\l"
	.string "Gegnern.$"

Route44_Text_CooltrainerfCybilBeaten:
	.string "Nein! So geht das auf gar keinen Fall.$"

Route44_Text_CooltrainerfCybilAfter:
    .string "Wir alle werden besser, indem wir\n"
    .string "viele Kämpfe erleben.\p"
    .string "Ich habe viele Kämpfe geführt, um\n"
    .string "zu dem zu werden, was ich heute bin -\n"
    .string "eine Elitetrainerin.$"

Route44_Text_Sign1:
	.string "ROUTE 44 EISPFAD VORAUS$"

Route44_Text_Sign2:
	.string "ROUTE 44\p"
	.string "MAHAGONIA CITY - EBENHOLZ CITY$"

