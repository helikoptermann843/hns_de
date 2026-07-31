OlivineCity_Lighthouse_hns_MapScripts::
	.byte 0

OlivineLighthouse_EventScript_Item_Ether::
    finditem ITEM_ETHER
    end

OlivineLighthouse_EventScript_Item_RareCandy::
    finditem ITEM_RARE_CANDY
    end

OlivineLighthouse_EventScript_Item_TMSwagger::
    finditem ITEM_TM_SWAGGER
    end

OlivineLighthouse_EventScript_Item_HyperPotion::
    finditem ITEM_HYPER_POTION
    end

OlivineLighthouse_EventScript_Item_Protein::
    finditem ITEM_PROTEIN
    end

OlivineLighthouse_EventScript_1FSailor::
	lock
	faceplayer
	msgbox OlivineLighthouse_Text_1FSailor, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_EventScript_1FPokefanF::
	lock
	faceplayer
	msgbox OlivineLighthouse_Text_1FPokefanF, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_1FSailor:
	.string "Die Leute kommen zum\n"
	.string "Leuchtturm, um zu trainieren.\p"
	.string "Aufgrund der vielen Trainer\n"
	.string "ist es nicht einfach,\l"
	.string "sich bis ganz nach oben vorzukämpfen.$"

OlivineLighthouse_Text_1FPokefanF:
	.string "Früher haben Pokémon nachts die\n"
	.string "Gewässer um Oliviana City erhellt.\p"
	.string "Der Leuchtturm wurde errichtet,\n"
	.string "um diese Pokémon zu ehren.$"

@2nd floor==============================================================================================================================

OlivineLighthouse_EventScript_Huey::
	trainerbattle_single TRAINER_HUEY_HNS, OlivineLighthouse_Text_SailorHueySeen, OlivineLighthouse_Text_SailorHueyBeaten, OlivineLighthouse_EventScript_RegisterHuey
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, OlivineLighthouse_EventScript_RematchHuey
	msgbox OlivineLighthouse_Text_SailorHueyAfter, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_EventScript_RegisterHuey::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox OlivineLighthouse_Text_HueyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_HUEY_HNS
	release
	end

OlivineLighthouse_EventScript_RematchHuey::
	trainerbattle_rematch TRAINER_HUEY_HNS, OlivineLighthouse_Text_HueyRematchIntro, OlivineLighthouse_Text_HueyRematchDefeat
	msgbox OlivineLighthouse_Text_HueyPostRematch, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_EventScript_GentlemanAlfred::
    trainerbattle_single TRAINER_ALFRED_HNS, OlivineLighthouse_Text_GentlemanAlfredSeen, OlivineLighthouse_Text_GentlemanAlfredBeaten
    msgbox OlivineLighthouse_Text_GentlemanAlfredAfter, MSGBOX_AUTOCLOSE
    end

OlivineLighthouse_Text_SailorHueySeen:
	.string "Seefahrer sind immer\n"
	.string "wild auf einen guten Kampf!$"

OlivineLighthouse_Text_SailorHueyBeaten:
	.string "Uff!\n"
	.string "Der hat gesessen!$"

OlivineLighthouse_Text_SailorHueyAfter:
	.string "Du bist schwer auf Zack! Möchtest du\n"
	.string "mit mir die Meere unsicher machen?$"

OlivineLighthouse_Text_HueyRegister:
	.string "Du bist schwer auf Zack! Möchtest du\n"
	.string "mit mir die Meere unsicher machen?$"

OlivineLighthouse_Text_HueyRematchIntro:
	.string "Seefahrer sind immer\n"
	.string "wild auf einen guten Kampf!$"

OlivineLighthouse_Text_HueyRematchDefeat:
	.string "Uff!\n"
	.string "Der hat gesessen!$"

OlivineLighthouse_Text_HueyPostRematch:
	.string "Du bist schwer auf Zack! Möchtest du\n"
	.string "mit mir die Meere unsicher machen?$"

OlivineLighthouse_Text_GentlemanAlfredSeen:
	.string "He, du da!\n"
	.string "Wir sind hier nicht auf dem Spielplatz!$"

OlivineLighthouse_Text_GentlemanAlfredBeaten:
	.string "Ah! Ich sehe,\n"
	.string "du meinst es ernst.$"

OlivineLighthouse_Text_GentlemanAlfredAfter:
	.string "Oben ist ein Pokémon, das\n"
	.string "den Leuchtturm erhellt.\p"
	.string "Doch es ist nun krank und\n"
	.string "lässt sich nicht normal heilen.$"

@3rd floor==============================================================================================================================

OlivineLighthouse_EventScript_BirdKeeperTheo::
    trainerbattle_single TRAINER_THEO_HNS, OlivineLighthouse_Text_BirdKeeperTheoSeen, OlivineLighthouse_Text_BirdKeeperTheoBeaten
    msgbox OlivineLighthouse_Text_BirdKeeperTheoAfter, MSGBOX_AUTOCLOSE
    end

OlivineLighthouse_EventScript_SailorTerrell::
    trainerbattle_single TRAINER_TERRELL_HNS, OlivineLighthouse_Text_SailorTerrellSeen, OlivineLighthouse_Text_SailorTerrellBeaten
    msgbox OlivineLighthouse_Text_SailorTerrellAfter, MSGBOX_AUTOCLOSE
    end

OlivineLighthouse_EventScript_GentlemanPreston::
    trainerbattle_single TRAINER_PRESTON_HNS, OlivineLighthouse_Text_GentlemanPrestonSeen, OlivineLighthouse_Text_GentlemanPrestonBeaten
    msgbox OlivineLighthouse_Text_GentlemanPrestonAfter, MSGBOX_AUTOCLOSE
    end


OlivineLighthouse_Text_BirdKeeperTheoSeen:
	.string "Warum bist du hier? Willst du\n"
	.string "nur glotzen? Geh besser weg!$"

OlivineLighthouse_Text_BirdKeeperTheoBeaten:
	.string "Du sorgst dich wirklich um\n"
	.string "das kranke Pokémon…$"

OlivineLighthouse_Text_BirdKeeperTheoAfter:
	.string "Wie zum Henker kommt man bloß da hoch?\n"
	.string "Ich will das kranke Pokémon besuchen,\l"
	.string "aber ich finde den Weg zur Spitze nicht.$"

OlivineLighthouse_Text_SailorTerrellSeen:
	.string "Seeleute sind hart und zart in einem.\n"
	.string "Eine perfekte Mischung, wie ich meine.\l"
	.string "Wie steht es mit dir?$"

OlivineLighthouse_Text_SailorTerrellBeaten:
	.string "Aaah, du gehörst also auch\n"
	.string "zu den Harten und den Zarten.$"

OlivineLighthouse_Text_SailorTerrellAfter:
	.string "Jedes Mal, wenn ich nach Oliviana City\n"
	.string "komme, gehe ich in die Pokémon-Arena.\p"
	.string "Aber dass der Pokémon-Typ der Arena-\n"
	.string "leiterin sich geändert hat, war mir neu.$"

OlivineLighthouse_Text_GentlemanPrestonSeen:
	.string "Ich bereise die Welt, um\n"
	.string "meine Pokémon zu trainieren.\l"
	.string "Ich möchte mit dir kämpfen.$"

OlivineLighthouse_Text_GentlemanPrestonBeaten:
	.string "… Seufz…\n"
	.string "Immer noch nicht genug trainiert…$"

OlivineLighthouse_Text_GentlemanPrestonAfter:
	.string "Jasmin war ursprünglich auf\n"
	.string "Gestein-Pokémon wie Onix spezialisiert.$"

@4th floor==============================================================================================================================

OlivineLighthouse_EventScript_SailorKent::
    trainerbattle_single TRAINER_KENT_HNS, OlivineLighthouse_Text_SailorKentSeen, OlivineLighthouse_Text_SailorKentBeaten
    msgbox OlivineLighthouse_Text_SailorKentAfter, MSGBOX_AUTOCLOSE
    end

OlivineLighthouse_EventScript_LassConnie::
    trainerbattle_single TRAINER_CONNIE_HNS, OlivineLighthouse_Text_LassConnieSeen, OlivineLighthouse_Text_LassConnieBeaten
    msgbox OlivineLighthouse_Text_LassConnieAfter, MSGBOX_AUTOCLOSE
    end


OlivineLighthouse_Text_SailorKentSeen:
	.string "Jasmin muss krank vor Sorge\n"
	.string "um das Pokémon sein.\l"
	.string "Man sieht sie nicht einmal mehr lächeln.$"

OlivineLighthouse_Text_SailorKentBeaten:
	.string "Ich habe aber gerade auch nicht viel\n"
	.string "Grund zu lachen…$"

OlivineLighthouse_Text_SailorKentAfter:
	.string "Apropos krank: Mir ist zu Ohren\n"
	.string "gekommen, dass es in Anemonia City\l"
	.string "eine gute Apotheke geben soll.$"

OlivineLighthouse_Text_LassConnieSeen:
	.string "Jasmin leitet die Arena hier\n"
	.string "in dieser Stadt.\p"
	.string "Ich werde sie zurückholen. Besser,\n"
	.string "du stellst dich mir nicht in den Weg!$"

OlivineLighthouse_Text_LassConnieBeaten:
	.string "Aaah! Was machst du da\n"
	.string "mit meinem Pokémon?$"

OlivineLighthouse_Text_LassConnieAfter:
	.string "Richtig. Jeder wäre besorgt, wenn\n"
	.string "seine Pokémon verletzt wären.\p"
	.string "Ich werde für die Pokémon hier beten,\n"
	.string "damit Jasmin zurück zur Arena kann.$"

@5th floor==============================================================================================================================

OlivineLighthouse_EventScript_SailorErnest::
    trainerbattle_single TRAINER_ERNEST_HNS, OlivineLighthouse_Text_SailorErnestSeen, OlivineLighthouse_Text_SailorErnestBeaten
    msgbox OlivineLighthouse_Text_SailorErnestAfter, MSGBOX_AUTOCLOSE
    end

OlivineLighthouse_EventScript_BirdKeeperDenis::
    trainerbattle_single TRAINER_DENIS_HNS, OlivineLighthouse_Text_BirdKeeperDenisSeen, OlivineLighthouse_Text_BirdKeeperDenisBeaten
    msgbox OlivineLighthouse_Text_BirdKeeperDenisAfter, MSGBOX_AUTOCLOSE
    end

OlivineLighthouse_Text_SailorErnestSeen:
	.string "Ich hatte vor, gegen Jasmin zu\n"
	.string "kämpfen, aber sie ist nicht da.\l"
	.string "Wie wäre es mit dir?$"

OlivineLighthouse_Text_SailorErnestBeaten:
	.string "Wow, du hast mich\n"
	.string "überwältigt!$"

OlivineLighthouse_Text_SailorErnestAfter:
	.string "Arenaleiter müssen nicht nur stark\n"
	.string "sein. Auch Mitgefühl zeichnet sie aus.$"

OlivineLighthouse_Text_BirdKeeperDenisSeen:
	.string "Wir sind hier ziemlich nah am Himmel.\n"
	.string "Vogel-Pokémon sind da in ihrem Element!$"

OlivineLighthouse_Text_BirdKeeperDenisBeaten:
	.string "Ups…\n"
	.string "Wer hoch steigt, fällt eben auch tief.$"

OlivineLighthouse_Text_BirdKeeperDenisAfter:
	.string "Meine Pokémon lernten Fliegen in\n"
	.string "Anemonia City.\p"
	.string "Da ich ein Verlierer bin, werde ich\n"
	.string "über das Meer fliegen…$"

@6th floor==============================================================================================================================

OlivineLighthouse_EventScript_Jasmine::
	lock
	faceplayer
	goto_if_eq VAR_OLIVINE_CITY_STATE, 3, OlivineLighthouse_EventScript_JasmineGoGetPotion
	goto_if_eq VAR_OLIVINE_CITY_STATE, 4, OlivineLighthouse_EventScript_JasmineDeliverPotion
	msgbox OlivineLighthouse_Text_JasmineCianwoodPharmacy, MSGBOX_DEFAULT
	msgbox OlivineLighthouse_Text_JasmineGetMedicine, MSGBOX_DEFAULT
	closemessage
	setvar VAR_OLIVINE_CITY_STATE, 3
	release
	end
OlivineLighthouse_EventScript_JasmineGoGetPotion::
	msgbox OlivineLighthouse_Text_JasmineGetMedicine2, MSGBOX_DEFAULT
	release
	end


OlivineLighthouse_EventScript_Ampharos::
	lock
	faceplayer
	goto_if_lt VAR_OLIVINE_CITY_STATE, 5, OlivineLighthouse_EventScript_AmpharosSick
	fadescreen FADE_TO_WHITE
	playse SE_M_THUNDERBOLT2
	waitse
	fadescreen FADE_FROM_WHITE
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	msgbox OlivineLighthouse_Text_AmphyPaluPalulu, MSGBOX_DEFAULT
	waitmoncry
	setflag FLAG_AMPHAROS_HEALED
	release
	end

OlivineLighthouse_EventScript_AmpharosSick::
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	msgbox OlivineLighthouse_Text_AmphyPalPaloo, MSGBOX_DEFAULT
	waitmoncry
	msgbox OlivineLighthouse_Text_AmphyBreathingLabored, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_JasmineCianwoodPharmacy:
	.string "Jasmin: Dieses Pokémon hat immer\n"
	.string "das Meer für uns ausgeleuchtet.\p"
	.string "Aber dann…\n"
	.string "wurde es plötzlich sehr krank.\l"
	.string "Seitdem ringt es nur noch nach Luft…\p"
	.string "In Anemonia City, auf der anderen\n"
	.string "Seite des Ozeans, soll es einen\l"
	.string "wundertätigen Apotheker geben, aber…\p"
	.string "…ich kann Amphi nicht einfach\n"
	.string "hier alleine lassen…\p"
	.string "Würdest du mir einen Gefallen tun?\n"
	.string "Könntest du vielleicht für mich\l"
	.string "dort Medizin kaufen gehen?\p"
	.string "Ich halte dir auch den Eingang offen…$"

OlivineLighthouse_Text_JasmineGetMedicine:
	.string "D-du tust mir doch den Gefallen, oder?\n"
	.string "Du gehst doch für mich Medizin\l"
	.string "kaufen, bitte!$"

OlivineLighthouse_Text_JasmineGetMedicine2:
	.string "In Anemonia City gibt es eine tolle\n"
	.string "Apotheke…\p"
	.string "Aber das ist über das Meer…\n"
	.string "Und Amphy kann ich nicht allein\n"
	.string "lassen… \p"
	.string "…Kannst du bitte Medizin für mich\n"
	.string "holen? Bitte?$"

OlivineLighthouse_Text_JasmineCureAmphy:
	.string "Jasmin: …Kann Amphi mit dieser\n"
	.string "Medizin geheilt werden?$"


OlivineLighthouse_EventScript_JasmineDeliverPotion::
	msgbox OlivineLighthouse_Text_JasmineCureAmphy, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, OlivineLighthouse_EventScript_JasmineRefuse
	playse SE_USE_ITEM
	removeitem ITEM_SECRET_POTION
	msgbox OlivineLighthouse_Text_PlayerHandedSecretpotion, MSGBOX_DEFAULT
	waitse
	msgbox OlivineLighthouse_Text_JasmineDontBeOffended, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_LIGHTHOUSE_JASMINE, DIR_NORTH
	delay 20
	turnobject LOCALID_LIGHTHOUSE_AMPHAROS, DIR_SOUTH
	playse MUS_HEAL
	waitse
	msgbox OlivineLighthouse_Text_JasmineAmphyHowFeeling, MSGBOX_DEFAULT
	fadescreen FADE_TO_WHITE
	playse SE_M_THUNDERBOLT2
	waitse
	fadescreen FADE_FROM_WHITE
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	msgbox OlivineLighthouse_Text_AmphyPaluPalulu, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	applymovement LOCALID_LIGHTHOUSE_AMPHAROS, OlivineLighthouse_Movement_Amphy
	waitmovement 0
	applymovement LOCALID_LIGHTHOUSE_JASMINE, OlivineLighthouse_Movement_Jasmine
	msgbox OlivineLighthouse_Text_JasmineThankYou, MSGBOX_DEFAULT
	closemessage

	fadescreen FADE_TO_BLACK
	playse SE_EXIT
	setflag FLAG_HIDE_LIGHTHOUSE_JASMINE
	removeobject LOCALID_LIGHTHOUSE_JASMINE
	waitse
	delay 50
	fadescreen FADE_FROM_BLACK
	setvar VAR_SAFARI_ZONE_GATE_STATE, 1
	setvar VAR_OLIVINE_CITY_STATE, 5
	setflag FLAG_AMPHAROS_HEALED
	clearflag FLAG_HIDE_OLIVINE_CITY_GYM_JASMINE
	release
	end

OlivineLighthouse_Movement_Jasmine:
	face_player
	step_end

OlivineLighthouse_Movement_Amphy:
	walk_up
	jump_in_place_down
	jump_in_place_left
	jump_in_place_right
	jump_in_place_up
	face_down
	step_end


OlivineLighthouse_EventScript_JasmineRefuse::
	msgbox OlivineLighthouse_Text_JasmineISee, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_PlayerHandedSecretpotion:
	.string "{PLAYER} übergab Jasmin den\n"
	.string "Geheimtrank.$"

OlivineLighthouse_Text_JasmineDontBeOffended:
	.string "Jasmin: Ni-nimm mir das\n"
	.string "bitte nicht übel, ja?\p"
	.string "Amphi lässt sich bloß\n"
	.string "von niemand anderem\l"
	.string "als mir füttern…$"

OlivineLighthouse_Text_JasmineAmphyHowFeeling:
	.string "Jasmin: …\p"
	.string "Wie geht es dir jetzt, Amphi?$"

OlivineLighthouse_Text_JasmineThankYou:
	.string "Jasmin: Oh, so ein Glück!\n"
	.string "Es hat wirklich geklappt!\p"
	.string "Ich bin dir ja so dankbar!\n"
	.string "Das ist alles dein Verdienst!\p"
	.string "…In Ordnung! Dann gehe\n"
	.string "ich jetzt zurück in die Arena!$"

OlivineLighthouse_Text_JasmineISee:
	.string "Jasmine: …Oh mann…\n"
	.string "…Amphy, halt durch!$"

OlivineLighthouse_Text_AmphyPalPaloo:
	.string "Amphi: … …Am… pha…$"

OlivineLighthouse_Text_AmphyBreathingLabored:
	.string "Sein Atem ist schwer…$"

OlivineLighthouse_Text_AmphyPaluPalulu:
	.string "Amphi: Ampha! Ampharos!$"


