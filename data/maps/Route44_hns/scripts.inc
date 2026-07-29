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
	.string "Oh nein! Na, besten Dank! Jetzt ist mir\n"
	.string "das Quapsel durch die Lappen gegangen!\l"
	.string "Das schreit nach Genugtuung!$"

Route44_Text_FisherWilton1Beaten:
	.string "Mir reicht’s langsam…$"

Route44_Text_FisherWiltonHugePoliwag:
	.string "Dieses Quapsel,\n"
	.string "das geflohen ist… Das war riesig.\p"
	.string "Ich könnte\n"
	.string "schwören, dass es 5 Meter lang war!$"

Route44_Text_WiltonRegister:
    .string "Das Quaputzi, das mir entkommen ist…\n"
    .string "es war riesig.\p"
    .string "Ich schwöre, es muss über\n"
    .string "5 Meter groß gewesen sein!$"

Route44_Text_WiltonRematchIntro:
	.string "Oh nein! Na, besten Dank! Jetzt ist mir\n"
	.string "das Quapsel durch die Lappen gegangen!\l"
	.string "Das schreit nach Genugtuung!$"

Route44_Text_WiltonRematchDefeat:
	.string "Mir reicht’s langsam…$"

Route44_Text_WiltonPostRematch:
    .string "Das Quaputzi, das mir entkommen ist…\n"
    .string "es war riesig.\p"
    .string "Ich schwöre, es muss über\n"
    .string "5 Meter groß gewesen sein!$"

Route44_Text_WiltonHasItem:
    .string "Hey! Ich habe etwas anderes als\n"
    .string "ein Pokémon an Land gezogen!\p"
    .string "Hier, du kannst es haben!$"

Route44_Text_WiltonGaveItem:
    .string "Ich sage dir Bescheid, wenn ich\n"
    .string "noch etwas aus dem Wasser ziehe!$"

Route44_Text_WiltonNoRoom:
    .string "Hm, dein Beutel ist voll.\p"
    .string "Komm wieder, wenn du Platz hast.$"

Route44_Text_FisherEdgarSeen:
	.string "Ich angele so lange, bis ich nicht mehr\n"
	.string "kann, und ich kämpfe bis zum Umfallen!\l"
	.string "So handhabe ich das mit meinen Pokémon!$"

Route44_Text_FisherEdgarBeaten:
	.string "Hmm… Irgendwas ist schiefgelaufen.$"

Route44_Text_FisherEdgarAfter:
	.string "Das macht dann 100 Siege und 101\n"
	.string "verlorene Kämpfe.\p"
	.string "Ich höre besser eine Weile mit dem\n"
	.string "Kämpfen auf.$"

Route44_Text_BirdKeeperVance1Seen:
	.string "Hast du schon von den Legendären\n"
	.string "Vogel-Pokémon gehört?$"

Route44_Text_BirdKeeperVance1Beaten:
	.string "Puh! Du machst echt keine halben\n"
	.string "Sachen.$"

Route44_Text_BirdKeeperVanceBirds:
	.string "Man sagt, es gebe drei Arten von\n"
	.string "Legendären Vogel-Pokémon. Arktos,\l"
	.string "Zapdos und Lavados.\p"
	.string "Aber so, wie es aussieht, gibt es noch\n"
	.string "viel mehr als nur diese drei.$"

Route44_Text_VanceRegister:
	.string "Man sagt, es gebe drei Arten von\n"
	.string "Legendären Vogel-Pokémon. Arktos,\l"
	.string "Zapdos und Lavados.\p"
	.string "Aber so, wie es aussieht, gibt es noch\n"
	.string "viel mehr als nur diese drei.$"

Route44_Text_VanceRematchIntro:
	.string "Hast du schon von den Legendären\n"
	.string "Vogel-Pokémon gehört?$"

Route44_Text_VanceRematchDefeat:
	.string "Puh! Du machst echt keine halben\n"
	.string "Sachen.$"

Route44_Text_VancePostRematch:
	.string "Man sagt, es gebe drei Arten von\n"
	.string "Legendären Vogel-Pokémon. Arktos,\l"
	.string "Zapdos und Lavados.\p"
	.string "Aber so, wie es aussieht, gibt es noch\n"
	.string "viel mehr als nur diese drei.$"

Route44_Text_PsychicPhilSeen:
	.string "Ich werde gewinnen! Hundertprozentig!$"

Route44_Text_PsychicPhilBeaten:
	.string "Aaah! Eine schockierende Niederlage!$"

Route44_Text_PsychicPhilAfter:

Route44_Text_PokemaniacZachSeen:
	.string "Ich tue alles, um seltene Pokémon in die\n"
	.string "Finger zu kriegen!$"

Route44_Text_PokemaniacZachBeaten:
	.string "Seufz… so ein tolles Pokémon-Team\n"
	.string "hätte ich auch gern!$"

Route44_Text_PokemaniacZachAfter:
    .string "Wenn ein Pokémon andere Farben als\n"
    .string "üblich hat, ist es wertvoller.\p"
    .string "Was? Du meinst, das stimmt nicht?$"

Route44_Text_CooltrainermAllenSeen:
	.string "Man sieht schon an deinem Auftreten,\n"
	.string "dass du ein guter Trainer bist!\p"
	.string "Ich kenne mich gut mit Pokémon aus,\n"
	.string "dafür habe ich einen Blick entwickelt.$"

Route44_Text_CooltrainermAllenBeaten:
	.string "Puh! Das war ja der totale Reinfall!$"

Route44_Text_CooltrainermAllenAfter:
	.string "Wow, hast du viele Orden! Kein Wunder,\n"
	.string "dass du so stark bist.\p"
	.string "Möchte wissen, ob Jens, der Arenaleiter\n"
	.string "von Teak City, noch immer trainiert? Der\l"
	.string "hat mich wirklich plattgemacht.$"

Route44_Text_CooltrainerfCybilSeen:
	.string "Du siehst sehr stark aus.\p"
	.string "Gute Trainer\n"
	.string "suchen instinktiv nach starken\l"
	.string "Gegnern.$"

Route44_Text_CooltrainerfCybilBeaten:
	.string "Nein! So geht das auf gar keinen Fall.$"

Route44_Text_CooltrainerfCybilAfter:
	.string "Mit den Kämpfen steigt unsere\n"
	.string "Erfahrung und wir werden besser.\p"
	.string "Ich habe viele Kämpfe ausgetragen, um\n"
	.string "zu werden, was ich heute bin - ein Profi.$"

Route44_Text_Sign1:
	.string "Route 44 Eispfad voraus$"

Route44_Text_Sign2:
	.string "Route 44\p"
	.string "Mahagonia City - Ebenholz City$"

