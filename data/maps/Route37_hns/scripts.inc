Route37_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route37_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route37_OnTransition: 
	callnative SetTimeBasedEncounters
	end



Route37_EventScript_TwinAnn::
	trainerbattle_double TRAINER_ANN_AND_ANNE_HNS, Route37_Text_TwinsAnnAndAnne1_Seen, Route37_Text_TwinsAnnAndAnne1_Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route37_Text_TwinsAnnAndAnne1_After, MSGBOX_DEFAULT
	release
	end
	
Route37_EventScript_TwinAnne::
	trainerbattle_double TRAINER_ANN_AND_ANNE_HNS, Route37_Text_TwinsAnnAndAnne2_Seen, Route37_Text_TwinsAnnAndAnne2_Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route37_Text_TwinsAnnAndAnne2_After, MSGBOX_DEFAULT
	release
	end

Route37_EventScript_Greg::
	trainerbattle_single TRAINER_GREG_HNS, Route37_Text_PsychicGreg_Seen, Route37_Text_PsychicGreg_Beaten
	msgbox Route37_Text_PsychicGreg_After, MSGBOX_AUTOCLOSE
	end


Route37_EventScript_Sunny::
	lock
	faceplayer
	goto_if_set FLAG_GOT_MAGNET, Route37_EventScript_SunnyCompleted
	msgbox Route37_Text_Sunny_Meet, MSGBOX_DEFAULT
	closemessage
	multichoice 20, 0, MULTI_DAYS_OF_WEEK, FALSE
	switch VAR_RESULT
	case 0, Route37_EventScript_SunnyYes
	case 1, Route37_EventScript_SunnyNope
	case 2, Route37_EventScript_SunnyNope
	case 3, Route37_EventScript_SunnyNope
	case 4, Route37_EventScript_SunnyNope
	case 5, Route37_EventScript_SunnyNope
	case 6, Route37_EventScript_SunnyNope
	case 7 Route37_EventScript_SunnyCancel
	case MULTI_B_PRESSED, Route37_EventScript_SunnyCancel
	closemessage
	release
	end
Route37_EventScript_SunnyYes::
	msgbox Route37_Text_Sunny_GiveGift2, MSGBOX_DEFAULT
	giveitem ITEM_MAGNET
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_MAGNET
	msgbox Route37_Text_Sunny_GaveGift, MSGBOX_DEFAULT
	closemessage
	release
	end
Route37_EventScript_SunnyNope::
	msgbox Route29_Text_TuscanyNope, MSGBOX_DEFAULT
	closemessage
	release
	end
Route37_EventScript_SunnyCancel::
	closemessage
	release
	end
Route37_EventScript_SunnyCompleted::
	msgbox Route37_Text_Sunny_Sunday, MSGBOX_DEFAULT
	closemessage
	release
	end

Route37_EventScript_Sign::
	lock
	msgbox Route37_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end

Route37_Text_TwinsAnnAndAnne1_Seen:
	.string "Wir arbeiten immer\n"
	.string "zusammen!$"

Route37_Text_TwinsAnnAndAnne1_Beaten:
	.string "Nn… ein wenig zu stark.$"

Route37_Text_TwinsAnnAndAnne1_After:
	.string "Ich weiß genau, was meine\n"
	.string "Schwester und Pokémon denken.$"

Route37_Text_TwinsAnnAndAnne2_Seen:
	.string "Wir arbeiten immer\n"
	.string "zusammen!$"

Route37_Text_TwinsAnnAndAnne2_Beaten:
	.string "Nn… ein wenig zu stark.$"

Route37_Text_TwinsAnnAndAnne2_After:
	.string "Wir fühlen genau wie\n"
	.string "unsere Pokémon.$"

Route37_Text_PsychicGreg_Seen:
	.string "Pokémon können\n"
	.string "nicht agieren, wenn sie schlafen.\p"
	.string "Ich werde dir zeigen,\n"
	.string "wie furchterregend das ist!$"

Route37_Text_PsychicGreg_Beaten:
	.string "Ich habe verloren. Wie betrüblich…$"

Route37_Text_PsychicGreg_After:
	.string "Pokémon einzuschläfern oder zu\n"
	.string "paralysieren sind gute\l"
	.string "Kampftechniken.$"

Route37_Text_Sunny_Meet:
	.string "Sonnfried: Hi!\p"
	.string "Ich bin Sonnfried aus der\n"
	.string "WOCHENTAGS-FAMILIE!\p"
	.string "Errätst du meinen Lieblingstag,\n"
	.string "bekommst du ein Geschenk.$"

Route37_Text_Sunny_GiveGift1:
	.string "Man sagte mir, ich soll dir das\n"
	.string "geben, wenn ich dich sehe!$"

Route37_Text_Sunny_GiveGift2:
	.string "Man sagte mir, ich soll dir das\n"
	.string "geben, wenn ich dich sehe!$"

Route37_Text_Sunny_GaveGift:
	.string "Sonnfried: Dieses Ding…\p"
	.string "Ähm…\p"
	.string "… Wie war das noch…\p"
	.string "…\p"
	.string "Oh! Jetzt weiß ich es!\p"
	.string "Ein Pokémon mit Elektro-Attacken\n"
	.string "sollte es tragen.\p"
	.string "Meine Schwester Monja sagt, es\n"
	.string "verstärkt Elektro-Attacken!$"

Route37_Text_Sunny_Sunday:
	.string "Sonnfried: Meine Geschwister sind\n"
	.string "Monja, Dietlinde, Mitko,\l"
	.string "Donatus, Frieda und Samson.\p"
	.string "Sie sind alle älter als ich!$"

Route37_Text_Sunny_NotSunday:
	.string "Sonnfried: Ist heute Sonntag?\n"
	.string "Ähm… hatte ich vergessen!$"

Route37_Text_Sign:
	.string "ROUTE 37$"
