Route43_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route43_MapScript_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route43_MapScript_OnTransition::
	call_if_set FLAG_HIDE_ROUTE42_SUICUNE, Route42_MapScript_HideTrigger
	callnative SetTimeBasedEncounters
	end

Route43_EventScript_Ben::
	trainerbattle_single TRAINER_BEN_HNS, Route43_Text_PokemaniacBenSeen, Route43_Text_PokemaniacBenBeaten
	msgbox Route43_Text_PokemaniacBenAfter, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_Brent::
	trainerbattle_single TRAINER_BRENT_HNS, Route43_Text_PokemaniacBrentSeen, Route43_Text_PokemaniacBrentBeaten, Route43_EventScript_RegisterBrent
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route43_EventScript_RematchBrent
	msgbox Route43_Text_PokemaniacBrentAfter, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_RegisterBrent::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route43_Text_BrentRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_BRENT_HNS
	release
	end

Route43_EventScript_RematchBrent::
	trainerbattle_rematch TRAINER_BRENT_HNS, Route43_Text_BrentRematchIntro, Route43_Text_BrentRematchDefeat
	msgbox Route43_Text_BrentPostRematch, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_Ron::
	trainerbattle_single TRAINER_RON_HNS, Route43_Text_PokemaniacRonSeen, Route43_Text_PokemaniacRonBeaten
	msgbox Route43_Text_PokemaniacRonAfter, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_Marvin::
	trainerbattle_single TRAINER_MARVIN_HNS, Route43_Text_FisherMarvinSeen, Route43_Text_FisherMarvinBeaten
	msgbox Route43_Text_FisherMarvinAfter, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_Spencer::
	trainerbattle_single TRAINER_SPENCER_HNS, Route43_Text_CamperSpencerSeen, Route43_Text_CamperSpencerBeaten
	msgbox Route43_Text_CamperSpencerAfter, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_Tiffany::
	trainerbattle_single TRAINER_TIFFANY_HNS, Route43_Text_PicnickerTiffanySeen, Route43_Text_PicnickerTiffanyBeaten, Route43_EventScript_RegisterTiffany
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route43_EventScript_RematchTiffany
	msgbox Route43_Text_PicnickerTiffanyWantsPicnic, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_RegisterTiffany::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route43_Text_TiffanyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_TIFFANY_HNS
	release
	end

Route43_EventScript_RematchTiffany::
	trainerbattle_rematch TRAINER_TIFFANY_HNS, Route43_Text_TiffanyRematchIntro, Route43_Text_TiffanyRematchDefeat
	msgbox Route43_Text_TiffanyPostRematch, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_Sign1::
	msgbox Route43_Sign2, MSGBOX_SIGN
	end

Route43_EventScript_Sign2::
	msgbox Route43_TrainerTips, MSGBOX_SIGN
	end

Route43_EventScript_Item_Max_Ether::
	finditem ITEM_MAX_ETHER
	end

Route43_Text_PokemaniacBenSeen:
	.string "Ich liebe mein Pokémon!\p"
	.string "Deshalb will ich auch nie, nie, niemals\n"
	.string "von ihm getrennt sein!$"

Route43_Text_PokemaniacBenBeaten:
	.string "Wie konntest du mir das antun?$"

Route43_Text_PokemaniacBenAfter:
	.string "Was ich außer Pokémon noch mag?\p"
	.string "…Margit aus dem Radio! Die ist bestimmt\n"
	.string "süß!$"

Route43_Text_PokemaniacBrentSeen:
	.string "He! Hast du seltene Pokémon?$"

Route43_Text_PokemaniacBrentBeaten:
	.string "Meine armen Pokémon-Lieblinge!$"

Route43_Text_PokemaniacBrentAfter:
	.string "Ich wäre schon froh, wenn ich nur ein\n"
	.string "einziges seltenes Pokémon hätte.$"

Route43_Text_BrentRegister:
	.string "Ich wäre schon froh, wenn ich nur ein\n"
	.string "einziges seltenes Pokémon hätte.$"

Route43_Text_BrentRematchIntro:
	.string "He! Hast du seltene Pokémon?$"

Route43_Text_BrentRematchDefeat:
	.string "Meine armen Pokémon-Lieblinge!$"

Route43_Text_BrentPostRematch:
	.string "Ich wäre schon froh, wenn ich nur ein\n"
	.string "einziges seltenes Pokémon hätte.$"

Route43_Text_PokemaniacRonSeen:
	.string "Stell dir mal vor!\p"
	.string "so ein Typ namens {RIVAL}\n"
	.string "hat sich über mein Pokémon lustig\l"
	.string "gemacht!\p"
	.string "Unverschämtheit!\n"
	.string "Mein Pokémon ist toll!$"

Route43_Text_PokemaniacRonBeaten:
	.string "Mein Nidoking hat\n"
	.string "sich wacker geschlagen!$"

Route43_Text_PokemaniacRonAfter:
    .string "Es ist okay, wenn Leute\n"
    .string "verschiedene Pokémon-Typen mögen.\p"
    .string "Pokémon bedeutet nicht nur,\n"
    .string "das stärkste zu haben.$"

Route43_Text_FisherMarvinSeen:
	.string "In letzter Zeit habe ich nur Pech. Was\n"
	.string "meinst du? Ob es an meinen Items liegt?\p"
	.string "Egal! Kämpfen wir! Das hebt vielleicht\n"
	.string "meine Laune.$"

Route43_Text_FisherMarvinBeaten:
	.string "Ich habe verloren,\n"
	.string "aber ich fühle mich trotzdem besser.$"

Route43_Text_FisherMarvinAfter:
    .string "Kurts Köderball ist der beste,\n"
    .string "um geangelte Pokémon zu fangen.\p"
    .string "Er ist viel effektiver als ein\n"
    .string "Hyperball.$"

Route43_Text_CamperSpencerSeen:
	.string "Man kann so viel unternehmen mit seinen\n"
	.string "Pokémon. Wir haben immer großen Spaß!$"

Route43_Text_CamperSpencerBeaten:
	.string "Verlieren macht überhaupt keinen Spaß…$"

Route43_Text_CamperSpencerAfter:
	.string "Was geht da vor sich am See des Zorns?\n"
	.string "Wir wollten eigentlich dort zelten.$"

Route43_Text_PicnickerTiffanySeen:
	.string "Gehst du auch zum See des Zorns? Lust\n"
	.string "auf ein kleines Spielchen?$"

Route43_Text_PicnickerTiffanyBeaten:
	.string "Das war wohl zu viel des Guten!$"

Route43_Text_PicnickerTiffanyWantsPicnic:
	.string "Ich mache ein Picknick mit meinem\n"
	.string "Pokémon. Setze dich doch zu uns.$"

Route43_Text_TiffanyRegister:
	.string "Ich mache ein Picknick mit meinem\n"
	.string "Pokémon. Setze dich doch zu uns.$"

Route43_Text_TiffanyRematchIntro:
	.string "Gehst du auch zum See des Zorns? Lust\n"
	.string "auf ein kleines Spielchen?$"

Route43_Text_TiffanyRematchDefeat:
	.string "Das war wohl zu viel des Guten!$"

Route43_Text_TiffanyPostRematch:
	.string "Ich mache ein Picknick mit meinem\n"
	.string "Pokémon. Setze dich doch zu uns.$"

Route43_Sign1:
    .string "Route 43\p"
    .string "See des Zorns - Mahagonia$"

Route43_Sign2:
    .string "Route 43\p"
    .string "See des Zorns - Mahagonia$"

Route43_TrainerTips:
    .string "Trainer Tipps\p"
    .string "Alle Pokémon haben vor-\n"
    .string "und Nachteile, je nach Typ.\p"
    .string "Haben sie unterschiedliche Typen,\n"
    .string "kann auch ein schwächeres gewinnen.$"
