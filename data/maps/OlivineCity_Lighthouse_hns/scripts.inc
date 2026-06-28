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
	.string "Die Leute kommen\n"
	.string "zum LEUCHTTURM, um zu trainieren.\p"
	.string "Aufgrund der\n"
	.string "vielen Trainer ist es nicht einfach,\l"
	.string "sich bis ganz nach oben vorzukämpfen.$"

OlivineLighthouse_Text_1FPokefanF:
	.string "Früher haben Pokémon nachts die\p"
	.string "Gewässer um OLIVIANA CITY erhellt.\p"
	.string "Der LEUCHTTURM\n"
	.string "wurde errichtet, um diese Pokémon zu\l"
	.string "ehren.$"

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
	.string "Seemänner suchen stets nach\n"
	.string "einem guten Kampf!$"

OlivineLighthouse_Text_SailorHueyBeaten:
	.string "Urf! Ich verliere!$"

OlivineLighthouse_Text_SailorHueyAfter:
	.string "Was für eine Kraft! Willst du\n"
	.string "mit mir die Meere befahren?$"

OlivineLighthouse_Text_HueyRegister:
	.string "Welch Stärke! Wie wärs,\n"
	.string "willst du mit mir segeln?$"

OlivineLighthouse_Text_HueyRematchIntro:
	.string "Männer der See sind immer\n"
	.string "bereit für einen guten Kampf!$"

OlivineLighthouse_Text_HueyRematchDefeat:
	.string "Urf!\n"
	.string "Ich verliere!$"

OlivineLighthouse_Text_HueyPostRematch:
	.string "What power! How would you like\n"
	.string "to sail the seas with me?$"

OlivineLighthouse_Text_GentlemanAlfredSeen:
	.string "Hm? Hier ist kein Ort\n"
	.string "zum Spielen.$"

OlivineLighthouse_Text_GentlemanAlfredBeaten:
	.string "Ah! Ich sehe,\n"
	.string "du meinst es ernst.$"

OlivineLighthouse_Text_GentlemanAlfredAfter:
	.string "Oben ist ein Pokémon, das\n"
	.string "den LEUCHTTURM erhellt.\p"
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
	.string "Wie zum Teufel kommt man hoch?\p"
	.string "Ich will das kranke Pokémon\n"
	.string "besuchen, aber ich komme nicht hin…$"

OlivineLighthouse_Text_SailorTerrellSeen:
	.string "Matrosen sind freundlich und\n"
	.string "stark. Und du?$"

OlivineLighthouse_Text_SailorTerrellBeaten:
	.string "Du bist freundlich und stark…$"

OlivineLighthouse_Text_SailorTerrellAfter:
	.string "Jedes Mal, wenn ich nach OLIVIANA\n"
	.string "zurückkehre, besuche ich die Arena.\p"
	.string "Der Typ der Pokémon des Arenaleiters\n"
	.string "hat sich geändert, ohne dass ich es\l"
	.string "merkte.$"

OlivineLighthouse_Text_GentlemanPrestonSeen:
	.string "Ich reise um die Welt, um meine\n"
	.string "Pokémon zu trainieren. Ich möchte\l"
	.string "gegen dich kämpfen.$"

OlivineLighthouse_Text_GentlemanPrestonBeaten:
	.string "…Seufz… Ich muss noch mehr\n"
	.string "trainieren…$"

OlivineLighthouse_Text_GentlemanPrestonAfter:
	.string "Jasmin nutzte früher Gestein-Pokémon\n"
	.string "wie Onix.$"

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
	.string "JASMIN muss sich um das\n"
	.string "Pokémon hier furchtbar sorgen.\p"
	.string "Sie lächelt heutzutage nicht mal.$"

OlivineLighthouse_Text_SailorKentBeaten:
	.string "Ich schaffe es auch nicht zu lächeln…$"

OlivineLighthouse_Text_SailorKentAfter:
	.string "Apropos krank: Ich hörte, es gibt\n"
	.string "eine gute APOTHEKE in ANEMONIA.$"

OlivineLighthouse_Text_LassConnieSeen:
	.string "JASMIN ist die Arenaleiterin dieser\n"
	.string "Stadt.\p"
	.string "Ich werde sie zurück bringen.\p"
	.string "Niemand soll mir im Weg stehen!$"

OlivineLighthouse_Text_LassConnieBeaten:
	.string "Aaack! Meine Pokémon!$"

OlivineLighthouse_Text_LassConnieAfter:
	.string "Richtig. Jeder wäre besorgt, wenn\n"
	.string "seine Pokémon verletzt wären.\p"
	.string "Ich werde für die Pokémon hier beten,\n"
	.string "damit JASMIN zurück zur Arena kann.$"

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
	.string "Ich wollte gegen Jasmin kämpfen,\n"
	.string "aber sie ist gerade nicht bereit.\p"
	.string "Wie sieht's bei dir aus?$"

OlivineLighthouse_Text_SailorErnestBeaten:
	.string "Whoa, whoa. Du bist überwältigend!$"

OlivineLighthouse_Text_SailorErnestAfter:
	.string "Ein Arenaleiter muss nicht nur\n"
	.string "stark sein.\p"
	.string "Ein Leiter muss auch Mitgefühl zeigen.$"

OlivineLighthouse_Text_BirdKeeperDenisSeen:
	.string "Wir sind ziemlich hoch hier.\n"
	.string "Meine Vogel-Pokémon sind topfit.$"

OlivineLighthouse_Text_BirdKeeperDenisBeaten:
	.string "Ups… Sie stürzten ab…$"

OlivineLighthouse_Text_BirdKeeperDenisAfter:
	.string "Meine Pokémon lernten Fliegen in\n"
	.string "ANEMONIA.\p"
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
	.string "Jasmin: …Dieses Pokémon hielt\n"
	.string "das Meer nachts immer erleuchtet.\p"
	.string "…Aber es wurde plötzlich krank…\n"
	.string "Es ringt nach Luft…\p"
	.string "…Ich habe gehört, dass es in ANEMONIA\n"
	.string "eine tolle APOTHEKE gibt…\p"
	.string "Aber das ist über das Meer…\n"
	.string "Und AMPHY kann ich nicht allein\l"
	.string "lassen…$"

OlivineLighthouse_Text_JasmineGetMedicine:
	.string "…Kannst du bitte Medizin für mich\n"
	.string "holen? Bitte?$"

OlivineLighthouse_Text_JasmineGetMedicine2:
	.string "In ANEMONIA gibt es eine tolle\n"
	.string "APOTHEKE…\p"
	.string "Aber das ist über das Meer…\n"
	.string "Und AMPHY kann ich nicht allein\n"
	.string "lassen… \p"
	.string "…Kannst du bitte Medizin für mich\n"
	.string "holen? Bitte?$"

OlivineLighthouse_Text_JasmineCureAmphy:
	.string "Jasmin: …Wird die Medizin AMPHY\n"
	.string "heilen?$"


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
	.string "GEHEIMTRANK.$"

OlivineLighthouse_Text_JasmineDontBeOffended:
	.string "Jasmin: …Bitte sei mir nicht\n"
	.string "böse…\p"
	.string "…AMPHY nimmt nichts von jemandem\n"
	.string "außer von mir…$"

OlivineLighthouse_Text_JasmineAmphyHowFeeling:
	.string "Jasmin: …\p"
	.string "AMPHY, wie fühlst du dich?$"

OlivineLighthouse_Text_JasmineThankYou:
	.string "Jasmin: …Oh, ich bin so erleichtert…\p"
	.string "Das ist einfach wunderbar…\p"
	.string "Vielen, vielen Dank.\p"
	.string "…Ich kehre zur Arena zurück…\p"
	.string "Ich warne dich, Stahl-Typen\n"
	.string "sind sehr stark.$"

OlivineLighthouse_Text_JasmineISee:
	.string "JASMINE: …Oh mann…\n"
	.string "…AMPHY, halt durch!$"

OlivineLighthouse_Text_AmphyPalPaloo:
	.string "AMPHY: …\n"
	.string "…Pa… paloo…$"

OlivineLighthouse_Text_AmphyBreathingLabored:
	.string "Sein Atem ist schwer…$"

OlivineLighthouse_Text_AmphyPaluPalulu:
	.string "AMPHY: Palu! Palulu!$"


