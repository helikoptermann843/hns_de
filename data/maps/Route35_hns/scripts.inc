Route35_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route35_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route35_OnTransition: 
	callnative SetTimeBasedEncounters
	end	

Route35_EventScript_CamperIvan::
	trainerbattle_single TRAINER_IVAN_HNS, Route35_Text_CamperIvanSeen, Route35_Text_CamperIvanBeaten
	msgbox Route35_Text_CamperIvanAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_CamperElliot::
	trainerbattle_single TRAINER_ELLIOT_HNS, Route35_Text_CamperElliotSeen, Route35_Text_CamperElliotBeaten
	msgbox Route35_Text_CamperElliotAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_PicnickerBrooke::
	trainerbattle_single TRAINER_BROOKE_HNS, Route35_Text_PicnickerBrookeSeen, Route35_Text_PicnickerBrookeBeaten
	msgbox Route35_Text_PicnickerBrookeAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_PicnickerKim::
	trainerbattle_single TRAINER_KIM_HNS, Route35_Text_PicnickerKimSeen, Route35_Text_PicnickerKimBeaten
	msgbox Route35_Text_PicnickerKimAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_BirdKeeperBryan::
	trainerbattle_single TRAINER_BRYAN_HNS, Route35_Text_BirdKeeperBryanSeen, Route35_Text_BirdKeeperBryanBeaten
	msgbox Route35_Text_BirdKeeperBryanAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_JugglerIrwin::
	trainerbattle_single TRAINER_IRWIN_HNS, Route35_Text_JugglerIrwinSeen, Route35_Text_JugglerIrwinBeaten
	msgbox Route35_Text_JugglerIrwinAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_BugCatcherArnie::
	trainerbattle_single TRAINER_ARNIE_HNS, Route35_Text_BugCatcherArnieSeen, Route35_Text_BugCatcherArnieBeaten, Route35_EventScript_RegisterArnie
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route35_EventScript_RematchArnie
	msgbox Route35_Text_BugCatcherArnieAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_RegisterArnie::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route35_Text_ArnieRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ARNIE_HNS
	release
	end

Route35_EventScript_RematchArnie::
	trainerbattle_rematch TRAINER_ARNIE_HNS, Route35_Text_ArnieRematchIntro, Route35_Text_ArnieRematchDefeat
	msgbox Route35_Text_ArniePostRematch, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_FirebreatherWalt::
	trainerbattle_single TRAINER_WALT_HNS, Route35_Text_FirebreatherWaltSeen, Route35_Text_FirebreatherWaltBeaten
	msgbox Route35_Text_FirebreatherWaltAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_PolicemanDirk::
	trainerbattle_single TRAINER_DIRK_HNS, Route35_Text_OfficerDirkSeen, Route35_Text_OfficerDirkBeaten
	msgbox Route35_Text_OfficerDirkAfter, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_Sign1::
	lock
	msgbox Route35_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end

Route35_EventScript_Sign2::
	lock
	msgbox Route35_Text_Sign2, MSGBOX_SIGN
	closemessage
	release
	end

Route35_EventScript_Item_Payback::
	finditem ITEM_TM_PAYBACK
	end

Route35_EventScript_Item_Nugget::
	finditem ITEM_BIG_NUGGET
	end

Route35_EventScript_Item_ParalyzeHeal::
	finditem ITEM_PARALYZE_HEAL
	end

Route35_Text_CamperIvanSeen:
	.string "Ich bekomme Informationen zu Pokémon\n"
	.string "aus dem Radio.$"

Route35_Text_CamperIvanBeaten:
	.string "Ich teile aus!$"

Route35_Text_CamperIvanAfter:
	.string "Musik im Radio ändert\n"
	.string "die Laune von wilden Pokémon.$"

Route35_Text_CamperElliotSeen:
	.string "Ich werde meiner\n"
	.string "Freundin zeigen, wie cool ich bin!$"

Route35_Text_CamperElliotBeaten:
	.string "Ach, hättest du doch verloren…$"

Route35_Text_CamperElliotAfter:
	.string "Ich wurde vor meiner Freundin\n"
	.string "gedemütigt…$"

Route35_Text_PicnickerBrookeSeen:
	.string "Mein Freund ist\n"
	.string "schwach. Er kann mich nicht\l"
	.string "beschützen.$"

Route35_Text_PicnickerBrookeBeaten:
	.string "Meine Güte, bist du stark!$"

Route35_Text_PicnickerBrookeAfter:
	.string "Ich vertraue mehr auf meine Pokémon\n"
	.string "als meinen Freund.$"

Route35_Text_PicnickerKimSeen:
	.string "Gehst du auch zur PKMN-ARENA?$"

Route35_Text_PicnickerKimBeaten:
	.string "Oh, ich habe verloren…$"

Route35_Text_PicnickerKimAfter:
	.string "Arenaorden sind schön.\n"
	.string "ich sammle sie.$"

Route35_Text_BirdKeeperBryanSeen:
	.string "Welche Art von Pokéball benutzt du?$"

Route35_Text_BirdKeeperBryanBeaten:
	.string "Mist! Nicht schnell genug!$"

Route35_Text_BirdKeeperBryanAfter:
	.string "Manche Pokémon fliehen sofort.\p"
	.string "Versuch sie mit Kurts TURBOBALL\n"
	.string "zu fangen.\p"
	.string "Wenn ich eine WEIßE APRIKOKO finde,\n"
	.string "bringe ich sie zu Kurt.\p"
	.string "Er macht daraus einen Ball.$"

Route35_Text_JugglerIrwinSeen:
	.string "Sieh meine elegante BALL-Kunst!$"

Route35_Text_JugglerIrwinBeaten:
	.string "Puh, das war ein Ruck!$"

Route35_Text_JugglerIrwinAfter:
	.string "Ich wollte dich schocken,\n"
	.string "mit meinen schönen Pokémon.\p"
	.string "Aber deine Stärke elektrifiziert mich!$"

Route35_Text_BugCatcherArnieSeen:
	.string "Ich gehe überall-\n"
	.string "hin, wo es KäferPokémon gibt.$"

Route35_Text_BugCatcherArnieBeaten:
	.string "Ich hätte nicht verlieren dürfen…$"

Route35_Text_BugCatcherArnieAfter:
	.string "Mein Bluzuk hat den Käfer-Catching\n"
	.string "Contest im Nationalpark gewonnen.$"

Route35_Text_ArnieRegister:
    .string "Mein ONIX hat mir den Käferturnier-\n"
    .string "Sieg im NATIONALPARK beschert.$"

Route35_Text_ArnieRematchIntro:
    .string "Ich gehe überall hin, wenn es dort\n"
    .string "KÄFER-POKéMON gibt.$"

Route35_Text_ArnieRematchDefeat:
    .string "Hä? Das hätte ich doch nicht\n"
    .string "verlieren dürfen…$"

Route35_Text_ArniePostRematch:
    .string "Mein ONIX hat mir den Käferturnier-\n"
    .string "Sieg im NATIONALPARK beschert.$"

Route35_Text_BugCatcherArnieYanma:
	.string "Wow… Sieh, all die YANMA!\p"
	.string "Ich bin über-\n"
	.string "wältigt und kann mich nicht rühren.$"

Route35_Text_FirebreatherWaltSeen:
	.string "Ich übe mich im Feuerspucken.$"

Route35_Text_FirebreatherWaltBeaten:
	.string "Aua! Ich habe mir\n"
	.string "die Nasenspitze verbrannt!$"

Route35_Text_FirebreatherWaltAfter:
	.string "Der Pokémon-Marsch im Radio\n"
	.string "lockt wilde Pokémon.$"

Route35_Text_OfficerDirkSeen:
	.string "Bei Nacht lauern Gefahren!$"

Route35_Text_OfficerDirkBeaten:
	.string "Schwupps!$"

Route35_Text_OfficerDirkAfter:
	.string "Weißt du, die Nacht hat\n"
	.string "auch ihren Reiz.\p"
	.string "Aber übertreib es nicht,\n"
	.string "ja?$"

Route35_Text_OfficerDirkTough:
	.string "Deine Pokémon sehen ziemlich\n"
	.string "stark aus.\p"
	.string "Du kannst überall sicher\n"
	.string "hingehen.$"

Route35_Text_Sign:
	.string "ROUTE 35$"

Route35_Text_Sign2:
	.string "ROUTE 35$"
