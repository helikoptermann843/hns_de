NewSinjoh_hns_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, NewSinjoh_On_Transition
	.byte 0

NewSinjoh_On_Transition:
    setflag FLAG_VISITED_NEW_SINJOH
	end

NewSinjoh_EventScript_TriggerNorthGate::
	lock
	msgbox NewSinjoh_Text_TriggerNorthGate, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown1
	waitmovement 0
	release
	end

NewSinjoh_Text_TriggerNorthGate:
	.string "Ich sollte die Kimono-Girls nicht\n"
	.string "warten lassen.$"

NewSinjoh_EventScript_PetStantler::
    lock
	faceplayer
	playmoncry SPECIES_STANTLER, 0
	msgbox NewSinjoh_Text_Stantler_Cry, MSGBOX_DEFAULT
	waitmoncry
    closemessage
	release
	end

NewSinjoh_Text_Stantler_Cry:
    .string "Lerrrrr!$"

NewSinjoh_EventScript_Steven::
	msgbox NewSinjoh_Text_Steven, MSGBOX_AUTOCLOSE
	end

NewSinjoh_Text_Steven:
	.string "Troy: Werte Dame, darf ich Sie zur\n"
	.string "Quelle dort drüben begleiten?\p"
	.string "Es scheint reichlich Platz zu geben.$"

NewSinjoh_MilkMan_EventScript_Seller::
	lock
	faceplayer
	checkitem ITEM_MOOMOO_MILK, 99
	goto_if_eq VAR_RESULT, 1, MilkMan_EventScript_Battle
	showmoneybox 0, 0
	msgbox NewSinjoh_MilkMan_text_BuyMilk, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, NewSinjoh_EventScript_MilkMan_BuyMilk
	msgbox NewSinjoh_MilkMan_NoSale, MSGBOX_DEFAULT
	hidemoneybox
	closemessage
	release
	end

NewSinjoh_EventScript_MilkMan_BuyMilk::
	checkmoney 500, 0
	goto_if_eq VAR_RESULT, FALSE, NewSinjoh_MilkMan_NotEnough
	additem ITEM_MOOMOO_MILK
	goto_if_eq VAR_RESULT, FALSE, NewSinjoh_MilkMan_BagFull
	removemoney 500
	updatemoneybox 0
	msgbox NewSinjoh_MilkMan_Text_WouldYouLikeAnother, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, NewSinjoh_EventScript_MilkMan_BuyMilk

	msgbox NewSinjoh_MilkMan_GotMilk, MSGBOX_DEFAULT
	closemessage
	playse MUS_OBTAIN_ITEM
	msgbox NewSinjoh_Text_GotMilk, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	release
	end

NewSinjoh_MilkMan_BagFull::
	msgbox NewSinjoh_MilkMan_NoRoom, MSGBOX_DEFAULT
	hidemoneybox
	closemessage
	release
	end

NewSinjoh_MilkMan_NotEnough::
	msgbox NewSinjoh_MilkMan_NoMoney, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	release
	end

NewSinjoh_MilkMan_text_BuyMilk:
	.string "Ich bin der Milchmann.\p"
	.string "Meine Milch ist köstlich.\p"
	.string "Wenn du heute welche möchtest,\n"
	.string "kostet sie 500 ¥.$"

NewSinjoh_MilkMan_GotMilk:
	.string "Bitte sehr!\n"
	.string "Angereichert mit dem, was die Welt\l"
	.string "braucht.$"

NewSinjoh_MilkMan_NoMoney:
	.string "Tut mir leid.\n"
	.string "Besorg dir Geld, dann kommen wir\l"
	.string "ins Geschäft!$"

NewSinjoh_MilkMan_NoRoom:
	.string "Sieht aus, als wäre dein Beutel voll.$"

NewSinjoh_MilkMan_NoSale:
	.string "Willst du sie etwa nicht?\n"
	.string "Sie enthält, was die Welt verdient.$"

NewSinjoh_MilkMan_Text_WouldYouLikeAnother:
	.string "Wie wäre es mit noch einer?$"

NewSinjoh_Text_GotMilk:
	.string "{PLAYER} erhält Kuhmuh-Milch!$"

MilkMan_EventScript_Battle:: 
    msgbox MilkMan_Battle_text
    Trainerbattle_no_intro TRAINER_MILKMAN_HNS, NewSinjoh_MilkMan_text_Lose
    release
    end

MilkMan_Battle_text:
	.string "Ich bin der Milchmann.\p"
	.string "Meine Milch ist köstlich.\p"
	.string "Heute gibt es eine Sonderlieferung!$"

NewSinjoh_MilkMan_text_Lose:
	.string "Diese Welt ist perfekt.\p"
	.string "Nicht wahr?$"

NewSinjoh_Script_TravelMart::
	lock
	faceplayer
	message NewSinjoh_Text_TravelShopGreeting
	waitmessage
	pokemart NewSinjoh_Pokemart_TravelShop
	msgbox NewSinjoh_Text_TravelShopEnd, MSGBOX_DEFAULT
	release
	end

	.align 2
NewSinjoh_Pokemart_TravelShop:
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_ELIXER
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_MAX_LURE
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_NONE

NewSinjoh_Text_TravelShopGreeting:
	.string "Willkommen in meinem kleinen\n"
	.string "Versorgungsladen. Wie kann ich\l"
	.string "helfen?$"

NewSinjoh_Text_TravelShopEnd:
	.string "Komm bald wieder.$"

Script_NewSinjoh_Traveler_Brother::
	lock
	faceplayer
	msgbox NewSinjoh_Text_TravelBrother_Greeting
	release
	end

NewSinjoh_Text_TravelBrother_Greeting:
	.string "All unsere Waren sind hausgemacht\n"
	.string "und stammen aus der Region!\p"
	.string "Meine große Schwester hat diesen\n"
	.string "Laden eröffnet, weil die Supermarkt-\l"
	.string "Kette so weit draußen keine\l"
	.string "Filiale eröffnen will.$"

NewSinjoh_EventScript_Josh::
	msgbox NewSinjoh_Text_Josh, MSGBOX_NPC
	end

NewSinjoh_Text_Josh:
	.string "Dieser Ort ist der Wahnsinn!\p"
	.string "Diese heißen Quellen vor der Welt\n"
	.string "zu verstecken, ist ein Verbrechen.\p"
	.string "Das erzähle ich all meinen Freunden!$"

NewSinjoh_EventScript_Janice::
	goto_if_ge VAR_SINJOH_STORYLINE, 13, NewSinjoh_EventScript_JaniceAfter
	msgbox NewSinjoh_Text_Janice, MSGBOX_NPC
	end
NewSinjoh_EventScript_JaniceAfter::
	msgbox NewSinjoh_Text_JaniceAfter, MSGBOX_NPC
	end

NewSinjoh_Text_Janice:
	.string "Diese Quellen sind magisch,\n"
	.string "aber ich glaube, die Einheimischen\l"
	.string "werfen uns böse Blicke zu.$"
NewSinjoh_Text_JaniceAfter:
	.string "Diese Quellen sind magisch,\n"
	.string "und die Einheimischen sind so\l"
	.string "herzlich, wenn man sie erst\l"
	.string "kennenlernt!$"

NewSinjoh_EventScript_OldLady1::
	msgbox NewSinjoh_Text_OldLady1, MSGBOX_NPC
	end

NewSinjoh_Text_OldLady1:
	.string "Nichts belebt diese alte Seele so\n"
	.string "sehr wie eine schöne Aussicht.$"

NewSinjoh_EventScript_OldLady2::
	goto_if_ge VAR_SINJOH_STORYLINE, 13, NewSinjoh_EventScript_OldLady2Steven
	msgbox NewSinjoh_Text_OldLady2, MSGBOX_NPC
	end
NewSinjoh_EventScript_OldLady2Steven::
	msgbox NewSinjoh_Text_OldLady2Steven, MSGBOX_NPC
	end

NewSinjoh_Text_OldLady2:
	.string "Na toll, jetzt belegen diese\n"
	.string "Touristen unsere heißen Quellen!\p"
	.string "In letzter Zeit kommt wirklich eine\n"
	.string "Plage nach der anderen!$"
NewSinjoh_Text_OldLady2Steven:
	.string "Was für ein stattlicher junger Mann!\p"
	.string "Vielleicht sind diese Touristen doch\n"
	.string "nicht so übel.$"

NewSinjoh_EventScript_OldLady3::
	goto_if_ge VAR_SINJOH_STORYLINE, 13, NewSinjoh_EventScript_OldLady3After
	msgbox NewSinjoh_Text_OldLady3, MSGBOX_NPC
	end
NewSinjoh_EventScript_OldLady3After::
	msgbox NewSinjoh_Text_OldLady3After, MSGBOX_NPC
	end

NewSinjoh_Text_OldLady3:
	.string "Wie kann diese Frau nur so\n"
	.string "unhöflich zu unseren Gästen sein?\p"
	.string "Sie sollte selbst mal in den\n"
	.string "Quellen baden.\p"
	.string "Es ist doch genug Platz für alle da.$"
NewSinjoh_Text_OldLady3After:
	.string "Es scheint, als würden sich hier\n"
	.string "langsam alle aneinander gewöhnen.\p"
	.string "Schön!$"

NewSinjoh_EventScript_SpringsSage::
	goto_if_ge VAR_SINJOH_STORYLINE, 13, NewSinjoh_EventScript_SpringsSageAfter
	msgbox NewSinjoh_Text_SpringsSage, MSGBOX_NPC
	end
NewSinjoh_EventScript_SpringsSageAfter::
	msgbox NewSinjoh_Text_SpringsSageAfter, MSGBOX_NPC
	end

NewSinjoh_Text_SpringsSage:
	.string "Seit die Neuankömmlinge hier sind,\n"
	.string "gibt es viel Zwietracht und Streit\l"
	.string "in unserer Gemeinschaft.\p"
	.string "Wie man auch dazu steht: Das\n"
	.string "Gleichgewicht ist eindeutig gestört.\p"
	.string "Sei bitte freundlich zu Einheimischen\n"
	.string "wie zu Touristen.$"
NewSinjoh_Text_SpringsSageAfter:
	.string "Seit die legendären Pokémon\n"
	.string "besänftigt wurden, geht es bergauf.\p"
	.string "Das Gleichgewicht ist nach Sinjoh\n"
	.string "zurückgekehrt.$"

NewSinjoh_EventScript_Sage2::
	msgbox NewSinjoh_Text_Sage2, MSGBOX_NPC
	end

NewSinjoh_Text_Sage2:
	.string "Die Zeiten ändern sich, doch die\n"
	.string "Damhirplex versammeln sich noch\l"
	.string "immer. Dafür können wir dankbar\l"
	.string "sein.$"

NewSinjoh_EventScript_Daughter::
	msgbox NewSinjoh_Text_Daughter, MSGBOX_NPC
	end

NewSinjoh_Text_Daughter:
	.string "Wiiiiii!!\p"
	.string "Schau, Mami!\n"
	.string "Freihändig!\p"
	.string "Genau wie die Snowboarder!$"

NewSinjoh_EventScript_Mother::
	lock
	faceplayer
	msgbox NewSinjoh_Text_Mother, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_NEWSINJOH_MOTHER, DIR_EAST
	release
	end

NewSinjoh_Text_Mother:
	.string "Sieh nur, wie süß mein Schatz\n"
	.string "seine Runden dreht!\p"
	.string "Diese Eisbahn gibt es seit\n"
	.string "Generationen, aber die Kinder haben\l"
	.string "sie nie genutzt, bis die Neuan-\l"
	.string "kömmlinge kamen.$"

NewSinjoh_EventScript_Welcome_Sign::
	msgbox NewSinjoh_Text_Welcome_Sign, MSGBOX_SIGN
	end

NewSinjoh_Text_Welcome_Sign:
	.string "Neu-Sinjoh$"

NewSinjoh_EventScript_Resturant_Sign::
	msgbox NewSinjoh_Text_Resturant_Sign, MSGBOX_SIGN
	end

NewSinjoh_Text_Resturant_Sign:
	.string "FAMILY CAFE$"

NewSinjoh_EventScript_Cave_Sign::
	msgbox NewSinjoh_Text_Cave_Sign, MSGBOX_SIGN
	end

NewSinjoh_Text_Cave_Sign:
	.string "Heiße Quelle - Höhle$"

NewSinjoh_EventScript_Hiker::
	goto_if_ge VAR_SINJOH_STORYLINE, 13, NewSinjoh_EventScript_HikerAfter
	msgbox NewSinjoh_Text_Hiker, MSGBOX_NPC
	end
NewSinjoh_EventScript_HikerAfter::
	msgbox NewSinjoh_Text_HikerAfter, MSGBOX_NPC
	end

NewSinjoh_Text_Hiker:
	.string "Das Geschäft brummt!\n"
	.string "Aber die Preise sind gestiegen,\l"
	.string "seit die Städter sich für unser\l"
	.string "kleines Dorf interessieren.$"
NewSinjoh_Text_HikerAfter:
	.string "Das Geschäft brummt!\p"
	.string "Und bei dem Trinkgeld, das dieser\n"
	.string "silberhaarige Kerl gibt, sind die\l"
	.string "Preise sogar gesunken!$"

NewSinjoh_EventScript_OldLady4::
	goto_if_ge VAR_SINJOH_STORYLINE, 13, NewSinjoh_EventScript_OldLady4After
	msgbox NewSinjoh_Text_OldLady4, MSGBOX_NPC
	end
NewSinjoh_EventScript_OldLady4After::
	msgbox NewSinjoh_Text_OldLady4After, MSGBOX_NPC
	end

NewSinjoh_Text_OldLady4:
	.string "Ich verkaufe nur an Einheimische!$"
NewSinjoh_Text_OldLady4After:
	.string "Ich verkaufe immer noch nur an\n"
	.string "Einheimische!$"

NewSinjoh_EventScript_Item_DuskBall::
	finditem ITEM_DUSK_BALL
    end


