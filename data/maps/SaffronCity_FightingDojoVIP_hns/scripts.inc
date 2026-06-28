SaffronCity_FightingDojoVIP_hns_MapScripts::
	.byte 0

SaffronCity_FightingDojoVIP_EventScript_Declined::
	closemessage
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Falkner::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Falkner_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_FALKNER_2_HNS, SaffronCity_FightingDojoVIP_Text_Falkner_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Bugsy::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Bugsy_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_BUGSY_2_HNS, SaffronCity_FightingDojoVIP_Text_Bugsy_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Whitney::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Whitney_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_WHITNEY_2_HNS, SaffronCity_FightingDojoVIP_Text_Whitney_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Morty::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Morty_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_MORTY_2_HNS, SaffronCity_FightingDojoVIP_Text_Morty_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Chuck::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Chuck_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_CHUCK_2_HNS, SaffronCity_FightingDojoVIP_Text_Chuck_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Jasmine::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Jasmine_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_JASMINE_2_HNS, SaffronCity_FightingDojoVIP_Text_Jasmine_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Pryce::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Pryce_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_PRYCE_2_HNS, SaffronCity_FightingDojoVIP_Text_Pryce_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Clair::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Clair_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_CLAIR_2_HNS, SaffronCity_FightingDojoVIP_Text_Clair_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Brock::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Brock_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_BROCK_HNS, SaffronCity_FightingDojoVIP_Text_Brock_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Misty::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Misty_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_MISTY_HNS, SaffronCity_FightingDojoVIP_Text_Misty_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Surge::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Surge_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_LTSURGE_HNS, SaffronCity_FightingDojoVIP_Text_Surge_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Erika::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Erika_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_ERIKA_HNS, SaffronCity_FightingDojoVIP_Text_Erika_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Janine::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Janine_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_JANINE_HNS, SaffronCity_FightingDojoVIP_Text_Janine_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Sabrina::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Sabrina_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_SABRINA_HNS, SaffronCity_FightingDojoVIP_Text_Sabrina_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Blaine::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Blaine_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_BLAINE_HNS, SaffronCity_FightingDojoVIP_Text_Blaine_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Blue::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Blue_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_BLUE_HNS, SaffronCity_FightingDojoVIP_Text_Blue_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

@===============MONS===============================================================================================================

SaffronCity_FightingDojoVIP_EventScript_Scizor::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SCIZOR, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Scizor, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Scizor:
	.string "Scherox: Schee-Rox!$"

SaffronCity_FightingDojoVIP_EventScript_Miltank::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Miltank, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Miltank:
	.string "Miltank: MuuhHHO!$"

SaffronCity_FightingDojoVIP_EventScript_Poliwhirl::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POLIWHIRL, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Poliwhirl, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Poliwhirl:
	.string "Quaputzi: Whirl-whirl!$"

SaffronCity_FightingDojoVIP_EventScript_Dewgong::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DEWGONG, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Dewgong, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Dewgong:
	.string "Jugong: Goooooong!$"

SaffronCity_FightingDojoVIP_EventScript_Steelix::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_STEELIX, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Steelix, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Steelix:
	.string "Stahlos: GraaAAANk!$"

SaffronCity_FightingDojoVIP_EventScript_Kingdra::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KINGDRA, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Kingdra, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Kingdra:
	.string "Seedraking: Draaa...$"

SaffronCity_FightingDojoVIP_EventScript_Onix::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Onix, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Onix:
	.string "Onix: Oooonix!$"

SaffronCity_FightingDojoVIP_EventScript_Starmie::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_STARMIE, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Starmie, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Starmie:
	.string "Starmie: Hyaaa!$"

SaffronCity_FightingDojoVIP_EventScript_Victreebel::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_VICTREEBEL, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Victreebel, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Victreebel:
	.string "Sarzenia: Vreeee!$"

SaffronCity_FightingDojoVIP_EventScript_Muk::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MUK, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Muk, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Muk:
	.string "Sleimok: Muuuk...$"

SaffronCity_FightingDojoVIP_EventScript_Kadabra::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KADABRA, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Kadabra, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Kadabra:
	.string "Kadabra: Kadabra!$"

SaffronCity_FightingDojoVIP_EventScript_Magmar::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MAGMAR, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Magmar, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Magmar:
	.string "Magmar: Magmaaaar!$"

SaffronCity_FightingDojoVIP_EventScript_Raichu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_RAICHU, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Raichu, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Raichu:
	.string "Raichu: Rai-CHU!$"

SaffronCity_FightingDojoVIP_EventScript_Machamp::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHAMP, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Machamp, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Machamp:
	.string "Machomei: Maa-champ!$"

SaffronCity_FightingDojo_EventScript_Chased::
	msgbox SaffronCity_FightingDojoVIP_Text_Chased, MSGBOX_NPC
	end

SaffronCity_FightingDojoVIP_Text_Chased:
	.string "Help!$"

SaffronCity_FightingDojoVIP_EvetScript_Statue::
	msgbox SaffronCity_FightingDojoVIP_Text_Statue, MSGBOX_SIGN
	end

SaffronCity_FightingDojoVIP_Text_Statue:
	.string "Kampf DOJO VIP LOUNGE$"

SaffronCity_FightingDojoVIP_Text_Falkner_Rematch:
	.string "Glückwunsch zum Sieg gegen\n"
	.string "die ELITE VIER!\p"
	.string "Ich hab meine FLUG-POKÉMON\n"
	.string "noch härter trainiert.\p"
	.string "Kannst du die Kraft des\n"
	.string "Himmels nochmal bezwingen?$"

SaffronCity_FightingDojoVIP_Text_Falkner_RematchDefeat:
	.string "Wow… Du hast mich wieder\n"
	.string "besiegt.\p"
	.string "Ich werde noch härter trainieren,\n"
	.string "um der größte Vogelmeister\l"
	.string "zu werden!$"

SaffronCity_FightingDojoVIP_Text_Bugsy_Rematch:
	.string "Wow, du bist jetzt JOHTO-\n"
	.string "CHAMPION!\p"
	.string "Deine Fähigkeiten sind wirklich\n"
	.string "beeindruckend!\p"
	.string "Ich war mit meiner Forschung\n"
	.string "beschäftigt.\p"
	.string "Ich zeige dir gern meine\n"
	.string "neuen Erkenntnisse.\p"
	.string "Möchtest du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Bugsy_RematchDefeat:
	.string "Wow, du bist wirklich ein\n"
	.string "Experten-TRAINER.\p"
	.string "Meine Forschung muss wohl\n"
	.string "noch nicht vollständig sein…$"

SaffronCity_FightingDojoVIP_Text_Whitney_Rematch:
	.string "Hey! Du bist's!\p"
	.string "Wow, jetzt JOHTO-CHAMPION?\p"
	.string "Du bist wirklich toll!\p"
	.string "Ich will sehen, wie stark du\n"
	.string "bist.\p"
	.string "Möchtest du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Whitney_RematchDefeat:
	.string "Wääääh!\p"
	.string "Wääääh!\p"
	.string "…Schnüff, hicks… …Du Fiesling!$"

SaffronCity_FightingDojoVIP_Text_Morty_Rematch:
	.string "Ah, der JOHTO-CHAMPION!\n"
	.string "Schön, dass du da bist.\p"
	.string "Du hast Stärke und Können\n"
	.string "bewiesen, aber hast du dich\l"
	.string "seit unserem letzten Kampf\l"
	.string "verbessert?\p"
	.string "Ich hab mit meinen GEIST-\n"
	.string "POKÉMON trainiert.\p"
	.string "Kannst du die Schatten\n"
	.string "nochmal überwinden?\p"
	.string "Möchtest du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Morty_RematchDefeat:
	.string "Ich bin noch nicht gut genug…\p"
	.string "Du hast viel mehr erlebt\n"
	.string "als ich.\p"
	.string "Darum beneide ich dich…$"

SaffronCity_FightingDojoVIP_Text_Chuck_Rematch:
	.string "WAHAHAH! JOHTO-CHAMPION!\p"
	.string "Du bist zurückgekommen!\p"
	.string "Deine Fähigkeiten haben sich\n"
	.string "verbessert!\p"
	.string "Bereit zu sehen, wer stärker\n"
	.string "ist?$"

SaffronCity_FightingDojoVIP_Text_Chuck_RematchDefeat:
	.string "Was? Wie? Ich hab verloren?\n"
	.string "Schon wieder?$"

SaffronCity_FightingDojoVIP_Text_Jasmine_Rematch:
	.string "…Herzlichen Glückwunsch,\n"
	.string "JOHTO-CHAMPION.\p"
	.string "Du bist so stark geworden…\p"
	.string "Ich frage mich, ob ich mich\n"
	.string "verbessert habe.\p"
	.string "Möchtest du das testen?\p"
	.string "Möchtest du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Jasmine_RematchDefeat:
	.string "…Du bist ein besserer TRAINER\n"
	.string "als ich,\p"
	.string "sowohl im Können als auch\n"
	.string "in der Güte.$"

SaffronCity_FightingDojoVIP_Text_Pryce_Rematch:
	.string "Ah, JOHTO-CHAMPION!\p"
	.string "Deine Fähigkeiten sind\n"
	.string "wirklich bemerkenswert.\p"
	.string "Ich bin beeindruckt.\p"
	.string "Doch auch jetzt können wir\n"
	.string "noch voneinander lernen.\p"
	.string "Ich, PREIS - der Winter-\n"
	.string "TRAINER - hab noch Tricks.\p"
	.string "Möchtest du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Pryce_RematchDefeat:
	.string "Ah, wieder einmal beeindruckt\n"
	.string "mich dein Können.\p"
	.string "Mit deinem starken Willen\n"
	.string "wirst du alle Hindernisse\l"
	.string "im Leben überwinden.$"

SaffronCity_FightingDojoVIP_Text_Clair_Rematch:
	.string "Du hast es also geschafft?\p"
	.string "Du bist jetzt JOHTO-CHAMPION.\p"
	.string "Du hast deine Stärke bewiesen,\n"
	.string "aber kannst du mich nochmal\l"
	.string "bezwingen?\p"
	.string "Als Drachenmeisterin werde\n"
	.string "ich nicht zurückhalten.\p"
	.string "Diesmal nicht.\p"
	.string "Möchtest du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Clair_RematchDefeat:
	.string "Ich hab verloren?\p"
	.string "Schon wieder?\p"
	.string "Das glaub ich nicht. Das muss\n"
	.string "ein Irrtum sein…$"

SaffronCity_FightingDojoVIP_Text_Brock_Rematch:
	.string "ROCKO: Hey, {PLAYER}!\p"
	.string "Ich hab gehört, du bist jetzt\n"
	.string "KANTO-CHAMPION.\p"
	.string "Das ist unglaublich!\p"
	.string "Du musst jetzt noch stärker\n"
	.string "sein.\p"
	.string "Möchtest du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Brock_RematchDefeat:
	.string "ROCKO: Deine POKÉMON haben\n"
	.string "meine felsenharte Verteidigung\l"
	.string "wieder gebrochen…$"

SaffronCity_FightingDojoVIP_Text_Misty_Rematch:
	.string "MISTY: Wow, du bist jetzt\n"
	.string "KANTO-CHAMPION!\p"
	.string "Toll! Du hast einen langen\n"
	.string "Weg hinter dir, {PLAYER}.\p"
	.string "Aber ich gebe nicht auf.\p"
	.string "Möchtest du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Misty_RematchDefeat:
	.string "MISTY: Du bist wirklich gut…$"

SaffronCity_FightingDojoVIP_Text_Surge_Rematch:
	.string "BOB: Also, du bist jetzt\n"
	.string "KANTO-CHAMPION!\p"
	.string "Beeindruckend, Kid! Aber denk\n"
	.string "nicht, ich bin fertig!\p"
	.string "Wie wär's mit einer Revanche?$"

SaffronCity_FightingDojoVIP_Text_Surge_RematchDefeat:
	.string "BOB: Arrgh! Du bist immer\n"
	.string "noch genauso stark!$"

SaffronCity_FightingDojoVIP_Text_Erika_Rematch:
	.string "ERIKA: Oh, hallo.\p"
	.string "Was für eine Überraschung,\n"
	.string "CHAMPION!\p"
	.string "Wie schön, dich wiederzusehen.\p"
	.string "Deine Reise muss sehr\n"
	.string "aufregend gewesen sein.\p"
	.string "Auch Champions mögen\n"
	.string "Herausforderungen.\p"
	.string "Möchtest du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Erika_RematchDefeat:
	.string "ERIKA: Eine Niederlage\n"
	.string "hinterlässt immer einen\l"
	.string "bitteren Nachgeschmack…\p"
	.string "Doch starke TRAINER spornen\n"
	.string "mich an, besser zu werden…$"

SaffronCity_FightingDojoVIP_Text_Sabrina_Rematch:
	.string "SABRINA: Ah, der CHAMPION.\p"
	.string "Ich spürte deine Rückkehr.\p"
	.string "Deine Kraft ist enorm\n"
	.string "gewachsen.\p"
	.string "Selbst jetzt spüre ich\n"
	.string "deine Aura.\p"
	.string "Möchtest du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Sabrina_RematchDefeat:
	.string "SABRINA: Deine Liebe zu\n"
	.string "deinen POKÉMON hat meine\l"
	.string "Psychokraft wieder\l"
	.string "überwältigt…$"

SaffronCity_FightingDojoVIP_Text_Janine_Rematch:
	.string "Fufufufu…\p"
	.string "Wow, du hast es geschafft!\p"
	.string "Du bist jetzt CHAMPION!\p"
	.string "Ich bin so stolz auf dich!\n"
	.string "Aber ich zeig keine Gnade.\p"
	.string "Möchtest du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Janine_RematchDefeat:
	.string "JANINE: Du bist immer noch\n"
	.string "genauso stark!\p"
	.string "Du hast eindeutig gewonnen…$"

SaffronCity_FightingDojoVIP_Text_Blaine_Rematch:
	.string "PYRO: Whoa!\p"
	.string "Du bist jetzt KANTO-\n"
	.string "CHAMPION!\p"
	.string "Das ist brennend heiß!\p"
	.string "Deine Fähigkeiten sind erstklassig.\p"
	.string "Ich bin immer kampfbereit.\p"
	.string "Möchtest du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Blaine_RematchDefeat:
	.string "PYRO: Deine Fähigkeiten\n"
	.string "sind wirklich feurig!\p"
	.string "Du hast meine Verteidigung\n"
	.string "niedergebrannt.$"

SaffronCity_FightingDojoVIP_Text_Blue_Rematch:
	.string "BLAU: Na, na. CHAMPION!\p"
	.string "Du hast einen langen Weg\n"
	.string "hinter dir.\p"
	.string "Ich hatte diesen Titel auch\n"
	.string "mal. Aber ich zeig keine\l"
	.string "Gnade.\p"
	.string "Mal sehen, ob du's hältst.\p"
	.string "Möchtest du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Blue_RematchDefeat:
	.string "BLAU: Was?\p"
	.string "Wie hab ich schon wieder\n"
	.string "verloren?$"

