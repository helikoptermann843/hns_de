Route34_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route34_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route34_OnTransition: 
	specialvar VAR_RESULT, GetDaycareState
	call_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, Route34_MapScript_EggReady
	callnative SetTimeBasedEncounters
	end	

Route34_MapScript_EggReady::
	setobjectxyperm LOCALID_ROUTE34_DAYCAREMAN, 30, 34
	return

Route34_EventScript_YoungsterSamuel::
	trainerbattle_single TRAINER_SAMUEL_HNS, Route34_Text_YoungsterSamuel_Seen, Route34_Text_YoungsterSamuel_Beaten
	msgbox Route34_Text_YoungsterSamuel_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_YoungsterIan::
	trainerbattle_single TRAINER_IAN_HNS, Route34_Text_YoungsterIan_Seen, Route34_Text_YoungsterIan_Beaten
	msgbox Route34_Text_YoungsterIan_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_CamperTodd::
	trainerbattle_single TRAINER_TODD_HNS, Route34_Text_CamperTodd_Seen, Route34_Text_CamperTodd_Beaten, Route34_EventScript_RegisterTodd
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route34_EventScript_RematchTodd
	msgbox Route34_Text_CamperTodd_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_RegisterTodd::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route34_Text_ToddRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_TODD_HNS
	release
	end

Route34_EventScript_RematchTodd::
	trainerbattle_rematch TRAINER_TODD_HNS, Route34_Text_ToddRematchIntro, Route34_Text_ToddRematchDefeat
	msgbox Route34_Text_ToddPostRematch, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_PicnickerGina::
	trainerbattle_single TRAINER_GINA_HNS, Route34_Text_PicnickerGina_Seen, Route34_Text_PicnickerGina_Beaten
	msgbox Route34_Text_PicnickerGina_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_OfficerKeith::
	trainerbattle_single TRAINER_KEITH_HNS, Route34_Text_OfficerKeith_Seen, Route34_Text_OfficerKeith_Win
	msgbox Route34_Text_OfficerKeith_After, MSGBOX_AUTOCLOSE
	end


Route34_EventScript_PokefanMBrandon::
	trainerbattle_single TRAINER_BRANDON_HNS, Route34_Text_PokefanBrandon_Seen, Route34_Text_PokefanBrandon_Beaten
	msgbox Route34_Text_PokefanBrandon_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_Irene::
	trainerbattle_single TRAINER_IRENE_HNS, Route34_Text_CooltrainerIrene_Seen, Route34_Text_CooltrainerIrene_Beaten
	msgbox Route34_Text_CooltrainerIrene_After2, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_Jenn::
	trainerbattle_single TRAINER_JENN_HNS, Route34_Text_CooltrainerJenn_Seen, Route34_Text_CooltrainerJenn_Beaten
	msgbox Route34_Text_CooltrainerJenn_After2, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_Kate::
	trainerbattle_single TRAINER_KATE_HNS, Route34_Text_CooltrainerKate_Seen, Route34_Text_CooltrainerKate_Beaten
	msgbox Route34_Text_CooltrainerKate_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_Sign1::
	lock
	msgbox Route34_Text_Sign_Route34, MSGBOX_SIGN
	closemessage
	release
	end

Route34_EventScript_Sign2::
	lock
	msgbox Route34_Text_Sign_DayCare, MSGBOX_SIGN
	closemessage
	release
	end

Route34_EventScript_Sign3::
	lock
	msgbox Route34_Text_TrainerTips, MSGBOX_SIGN
	closemessage
	release
	end

Route34_EventScript_Item_SoftSand::
	finditem ITEM_SOFT_SAND
	end

Route34_EventScript_Item_RareCandy::
	finditem ITEM_RARE_CANDY
	end
	
Route34_EventScript_Item_Embargo::
    finditem ITEM_TM_EMBARGO
    end


Route34_Text_YoungsterSamuel_Seen:
	.string "Hier trainiere ich!$"

Route34_Text_YoungsterSamuel_Beaten:
	.string "Besiegt von einem Passanten!$"

Route34_Text_YoungsterSamuel_After:
	.string "Ich werde noch härter trainieren.\p"
	.string "Ich möchte doch\n"
	.string "ein ARENALEITER werden.$"

Route34_Text_YoungsterIan_Seen:
	.string "Ich bin der Pokémon-Experte\n"
	.string "in meiner Klasse.$"

Route34_Text_YoungsterIan_Beaten:
	.string "Nein! Es gibt noch bessere Trainer…$"

Route34_Text_YoungsterIan_After:
	.string "Ich strenge mich sehr an,\n"
	.string "damit ich der Star in meiner\l"
	.string "Klasse bin.$"

Route34_Text_CamperTodd_Seen:
	.string "Ich vertraue meinen Fähigkeiten,\n"
	.string "Pokémon zu trainieren.\p"
	.string "Willst du es sehen?$"

Route34_Text_CamperTodd_Beaten:
	.string "Habe ich falsch trainiert?$"

Route34_Text_CamperTodd_After:
	.string "Vielleicht sollte eines zur Pension..$"

Route34_Text_ToddRegister:
    .string "Vielleicht sollte ich eines in die\n"
    .string "PENSION bringen oder ein paar\l"
    .string "Items einsetzen…$"

Route34_Text_ToddRematchIntro:
    .string "Ich bin überzeugt von meinen\n"
    .string "Fähigkeiten als POKéMON-ZÜCHTER.\p"
    .string "Willst du sie sehen?$"

Route34_Text_ToddRematchDefeat:
    .string "Habe ich beim Training etwas\n"
    .string "falsch gemacht?$"

Route34_Text_ToddPostRematch:
    .string "Vielleicht sollte ich eines in die\n"
    .string "PENSION bringen oder ein paar\l"
    .string "Items einsetzen…$"

Route34_Text_PicnickerGina_Seen:
	.string "Bist du ein Trainer?\p"
	.string "Hast du Lust auf einen Übungskampf?$"

Route34_Text_PicnickerGina_Beaten:
	.string "Oh nein! Ich habe noch nie gewonnen…$"

Route34_Text_PicnickerGina_After:
	.string "Du bist mir zu stark.\n"
	.string "Das ist keine Übung für mich.$"

Route34_Text_OfficerKeith_Seen:
	.string "Wer ist da? Was ist dein Begehr?$"

Route34_Text_OfficerKeith_Win:
	.string "Du bist ein starker, junger Gegner.$"

Route34_Text_OfficerKeith_After:
	.string "Ja, heute scheint alles in Ordnung\n"
	.string "zu sein.\p"
	.string "Benimm dich und halte dich aus\n"
	.string "Schwierigkeiten heraus.$"

Route34_Text_OfficerKeith_Daytime:
	.string "Ich bin auf der\n"
	.string "Suche nach verdächtigen Individuen.$"

Route34_Text_PokefanBrandon_Seen:
	.string "Ich habe gerade mein Pokémon\n"
	.string "aus der PENSION wieder abgeholt.\p"
	.string "Sehen wir mal,\n"
	.string "wie stark es geworden ist!$"

Route34_Text_PokefanBrandon_Beaten:
	.string "Warum muss es auf diese Weise enden?$"

Route34_Text_PokefanBrandon_After:
	.string "Mein Pokémon kannte Attacken,\n"
	.string "von denen ich nicht wusste,\l"
	.string "dass es sie hat.\p"
	.string "Das war überaus erstaunlich!$"

Route34_Text_Sign_IlexForest:
	.string "Zum STEINEICHENWALD\n"
	.string "Durchschreite das Tor$"

Route34_Text_Sign_Route34:
	.string "ROUTE 34\n"
	.string "Dukatia City - Azalea City\p"
	.string "Steineichenwald dazwischen$"

Route34_Text_TrainerTips:
	.string "TIPPS für TRAINER\p"
	.string "Bäume mit BEEREN\n"
	.string "tragen jeden Tag neue BEEREN.\p"
	.string "Merke dir, welche BEEREN\n"
	.string "an den Bäumen wachsen.$"

Route34_Text_CooltrainerIrene_Seen:
	.string "LOLA: Uargh! Wir sind entdeckt!$"

Route34_Text_CooltrainerIrene_Beaten:
	.string "LOLA: Ohhh! Viel zu stark!$"

Route34_Text_CooltrainerIrene_After1:
	.string "LOLA: Du wirst\n"
	.string "meine Schwester EDNA noch\l"
	.string "kennenlernen!$"

Route34_Text_CooltrainerIrene_After2:
	.string "LOLA: Ist dieser\n"
	.string "Strand nicht herrlich?\p"
	.string "Er ist unsere geheime Zuflucht!$"

Route34_Text_CooltrainerJenn_Seen:
	.string "ELSE: Dein Sieg\n"
	.string "über LOLA muss gesühnt werden!$"

Route34_Text_CooltrainerJenn_Beaten:
	.string "ELSE: Es tut mir so Leid,\n"
	.string "Schwesterchen!$"

Route34_Text_CooltrainerJenn_After1:
	.string "ELSE: Bilde dir\n"
	.string "bloß nichts ein! Meine Schwester EDNA\l"
	.string "ist sehr stark!$"

Route34_Text_CooltrainerJenn_After2:
	.string "ELSE: Sonnenlicht\n"
	.string "kräftigt deinen Körper.$"

Route34_Text_CooltrainerKate_Seen:
	.string "EDNA: Du warst wirklich gemein\n"
	.string "zu meinen kleinen Schwestern!$"

Route34_Text_CooltrainerKate_Beaten:
	.string "EDNA: Nein! Ich\n"
	.string "kann nicht glauben,\l"
	.string "dass ich verloren habe.$"

Route34_Text_CooltrainerKate_GiveSoftSand:
	.string "KATE: You're too strong. I didn't\n"
	.string "stand a chance. Here, you deserve\l"
	.string "this.$"

Route34_Text_CooltrainerKate_After:
	.string "EDNA: Bitte entschuldige,\n"
	.string "dass wir dich überfallen haben.\p"
	.string "Wir hätten nicht gedacht,\n"
	.string "dass uns hier jemand findet.\p"
	.string "Du hast uns überrascht.$"


Route34_Text_Sign_DayCare:
	.string "PENSION\p"
	.string "Wir kümmern uns um deine Pokémon!$"
