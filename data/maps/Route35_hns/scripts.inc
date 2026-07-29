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
	.string "Ich hole mir meine Pokémon-Info\n"
	.string "immer aus dem Radio.\l"
	.string "Damit bin ich jederzeit gerüstet.$"

Route35_Text_CamperIvanBeaten:
	.string "Ich teile aus!$"

Route35_Text_CamperIvanAfter:
	.string "Die Musik aus dem Radio beeinflusst die\n"
	.string "Stimmung von wilden Pokémon.\l"
	.string "Sie stimmt sie kampflustig oder zahmer!$"

Route35_Text_CamperElliotSeen:
	.string "Ich werde meiner Freundin\n"
	.string "zeigen, wie cool ich bin!$"

Route35_Text_CamperElliotBeaten:
	.string "Ach Mann! Hättest du nicht\n"
	.string "einfach… verlieren können?$"

Route35_Text_CamperElliotAfter:
	.string "Du hast mich vor meiner Freundin\n"
	.string "lächerlich gemacht…$"

Route35_Text_PicnickerBrookeSeen:
	.string "Mein Freund ist ein Schwächling.\n"
	.string "Er kann mich nicht beschützen.$"

Route35_Text_PicnickerBrookeBeaten:
	.string "Meine Güte, bist du stark!$"

Route35_Text_PicnickerBrookeAfter:
	.string "Meine Pokémon meinem Freund vorzu-\n"
	.string "ziehen, war wohl auch nicht gerade klug.$"

Route35_Text_PicnickerKimSeen:
	.string "Bist du auf dem Weg zur Pokémon-Arena?\n"
	.string "Ich auch!$"

Route35_Text_PicnickerKimBeaten:
	.string "Ich gewinne aber auch nie!$"

Route35_Text_PicnickerKimAfter:
	.string "Diese Orden sind so hübsch! Das ist\n"
	.string "auch der Grund, warum ich sie sammele!$"

Route35_Text_BirdKeeperBryanSeen:
	.string "Welche Art von Pokéball\n"
	.string "verwendest du?$"

Route35_Text_BirdKeeperBryanBeaten:
	.string "Mist! Nicht\n"
	.string "schnell genug!$"

Route35_Text_BirdKeeperBryanAfter:
	.string "Wenn du hinter einem Pokémon mit hoher\n"
	.string "Initiative her bist,\l"
	.string "wirkt Kurts Turboball wahre Wunder!\p"
	.string "Sobald ich eine weiße Aprikoko finde,\n"
	.string "bringe ich sie zu Kurt. Er macht\l"
	.string "daraus einen maßgefertigten Pokéball.$"

Route35_Text_JugglerIrwinSeen:
	.string "Sieh meine elegante Ball-Kunst!$"

Route35_Text_JugglerIrwinBeaten:
	.string "Puh, das war ein Schlag!$"

Route35_Text_JugglerIrwinAfter:
	.string "Ich wollte dich mit meinen\n"
	.string "preisgekrönten Pokémon blenden.\l"
	.string "Aber dein Können hat mich elektrisiert.$"

Route35_Text_BugCatcherArnieSeen:
	.string "Mich zieht es überall dort hin, wo es\n"
	.string "Käfer-Pokémon gibt!$"

Route35_Text_BugCatcherArnieBeaten:
	.string "Ich hätte nicht verlieren dürfen…$"

Route35_Text_BugCatcherArnieAfter:
	.string "Mit meinem Bluzuk habe ich das\n"
	.string "Käferturnier im Nationalpark gewonnen.$"

Route35_Text_ArnieRegister:
	.string "Mit meinem Bluzuk habe ich das\n"
	.string "Käferturnier im Nationalpark gewonnen.$"

Route35_Text_ArnieRematchIntro:
	.string "Mich zieht es überall dort hin, wo es\n"
	.string "Käfer-Pokémon gibt!$"

Route35_Text_ArnieRematchDefeat:
    .string "Hä? Das hätte ich doch nicht\n"
    .string "verlieren dürfen…$"

Route35_Text_ArniePostRematch:
	.string "Mit meinem Bluzuk habe ich das\n"
	.string "Käferturnier im Nationalpark gewonnen.$"

Route35_Text_BugCatcherArnieYanma:
	.string "Wow… Sieh, all die Yanma!\p"
	.string "Ich bin über-\n"
	.string "wältigt und kann mich nicht rühren.$"

Route35_Text_FirebreatherWaltSeen:
	.string "Ich übe mich im\n"
	.string "Feuerspucken.$"

Route35_Text_FirebreatherWaltBeaten:
	.string "Aua! Jetzt habe ich mir\n"
	.string "die Nasenspitze verbrannt!$"

Route35_Text_FirebreatherWaltAfter:
	.string "Der Pokémon-Marsch im Radio\n"
	.string "lockt wilde Pokémon an.$"

Route35_Text_OfficerDirkSeen:
	.string "Die Nacht steckt voller Gefahren!$"

Route35_Text_OfficerDirkBeaten:
	.string "Ups!$"

Route35_Text_OfficerDirkAfter:
	.string "Weißt du, die Nacht hat\n"
	.string "auch ihren Reiz.\p"
	.string "Aber übertreib es nicht,\n"
	.string "ja?$"

Route35_Text_OfficerDirkTough:
	.string "Deine Pokémon sehen ziemlich stark aus!\n"
	.string "Mit denen bist du überall sicher!$"

Route35_Text_Sign:
	.string "Route 35$"

Route35_Text_Sign2:
	.string "Nationalpark$"
