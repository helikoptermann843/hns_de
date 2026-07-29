NationalPark_Normal_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NationalPark_Normal_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

NationalPark_Normal_OnTransition:
	callnative SetTimeBasedEncounters
	end

NationalPark_Normal_EventScript_Lass::
	lock
	faceplayer
	msgbox NationalPark_Normal_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_Normal_EventScript_Youngster1::
	lock
	faceplayer
	msgbox NationalPark_Normal_Text_Youngster1, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_Normal_EventScript_Youngster2::
	lock
	faceplayer
	msgbox NationalPark_Normal_Text_Youngster2, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_Normal_EventScript_Teacher2::
	lock
	faceplayer
	msgbox NationalPark_Normal_Text_Teacher2, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	release
	end

NationalPark_Normal_EventScript_TeacherQuickclaw::
	lock
	faceplayer
	goto_if_set FLAG_GOT_QUICK_CLAW, NationalPark_Normal_EventScript_TeacherQuickclaw2
	msgbox NationalPark_Normal_Text_Teacher1, MSGBOX_DEFAULT
	giveitem ITEM_QUICK_CLAW
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	setflag FLAG_GOT_QUICK_CLAW
NationalPark_Normal_EventScript_TeacherQuickclaw2::
	msgbox NationalPark_Normal_Text_Teacher1_QuickClaw, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_Normal_EventScript_Persian::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PERSIAN, CRY_MODE_NORMAL
	msgbox NationalPark_Normal_Text_Persian, MSGBOX_DEFAULT
	waitmoncry
	release
	end



NationalPark_Normal_Text_Lass:
	.string "Sieh dir meine Tasche an!\p"
	.string "Ich habe meine Lieblinge aus dem\p"
	.string "Pokédex gedruckt\n"
	.string "und auf meine Tasche geklebt.$"

NationalPark_Normal_Text_PokefanF:
	.string "Das ist ein\n"
	.string "Brief von meiner Tochter. Das macht\l"
	.string "mir Freude.$"

NationalPark_Normal_Text_Teacher1:
	.string "So, jetzt mal hergehört, Herrschaften!\p"
	.string "…Oh, Entschuldigung. Ich muss echt\n"
	.string "mal dieses Lehrergehabe loswerden.\p"
	.string "Du bist ein Pokémon-Trainer, stimmt's?\p"
	.string "Du scheinst sehr hart zu arbeiten.\n"
	.string "Hier, nimm das als Belohnung!$"

NationalPark_Normal_Text_Teacher1_QuickClaw:
	.string "Gib diese Flinkklaue einem deiner\n"
	.string "Pokémon, und es wird mit ihrer Hilfe\l"
	.string "im Kampf ab und zu die Initiative\l"
	.string "erhalten!$"

NationalPark_Normal_Text_Youngster1:
	.string "Ich spiele mit\n"
	.string "Stickern, die ich aus meinem Dex\l"
	.string "gedruckt habe.$"

NationalPark_Normal_Text_Youngster2:
	.string "Falls ich gewinne,\n"
	.string "erhalte ich die Dex-Sticker meines\l"
	.string "Gegners.$"

NationalPark_Normal_Text_Teacher2:
	.string "Ich gehe oft im Park spazieren,\p"
	.string "aber ich meide das hohe Gras.\p"
	.string "Trainer möchten immer kämpfen…$"

NationalPark_Normal_Text_Persian:
	.string "Snobilikat: Snooobi, snobi!$"

NationalPark_Normal_EventScript_Jack::
	trainerbattle_single TRAINER_JACK_HNS, NationalPark_Normal_Text_SchoolboyJack1_Seen, NationalPark_Normal_Text_SchoolboyJack1_Beaten, NationalPark_Normal_EventScript_RegisterJack
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, NationalPark_Normal_EventScript_RematchJack
	msgbox NationalPark_Normal_Text_SchoolboyJack_After, MSGBOX_AUTOCLOSE
	end

NationalPark_Normal_EventScript_RegisterJack::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox NationalPark_Normal_Text_JackRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_JACK_HNS
	release
	end

NationalPark_Normal_EventScript_RematchJack::
	trainerbattle_rematch TRAINER_JACK_HNS, NationalPark_Normal_Text_JackRematchIntro, NationalPark_Normal_Text_JackRematchDefeat
	msgbox NationalPark_Normal_Text_JackPostRematch, MSGBOX_AUTOCLOSE
	end

NationalPark_Normal_EventScript_Beverly::
	trainerbattle_single TRAINER_BEVERLY_HNS, NationalPark_Normal_Text_PokefanFBeverly1_Seen, NationalPark_Normal_Text_PokefanFBeverly1_Beaten, NationalPark_Normal_EventScript_RegisterBeverly
	goto_if_set FLAG_BEVERLY_HAS_ITEM_HNS, NationalPark_Normal_EventScript_BeverlyGiveItem
	msgbox NationalPark_Normal_Text_PokefanFBeverly_After, MSGBOX_AUTOCLOSE
	end

NationalPark_Normal_EventScript_RegisterBeverly::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox NationalPark_Normal_Text_BeverlyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_BEVERLY_HNS
	release
	end

NationalPark_Normal_EventScript_BeverlyGiveItem::
	msgbox NationalPark_Normal_Text_BeverlyHasItem, MSGBOX_DEFAULT
	giveitem VAR_BEVERLY_ITEM_HNS
	goto_if_eq VAR_RESULT, FALSE, NationalPark_Normal_EventScript_BeverlyNoRoom
	clearflag FLAG_BEVERLY_HAS_ITEM_HNS
	msgbox NationalPark_Normal_Text_BeverlyGaveItem, MSGBOX_AUTOCLOSE
	end

NationalPark_Normal_EventScript_BeverlyNoRoom::
	msgbox NationalPark_Normal_Text_BeverlyNoRoom, MSGBOX_AUTOCLOSE
	end

NationalPark_Normal_EventScript_William::
	trainerbattle_single TRAINER_WILLIAM_HNS, NationalPark_Normal_Text_PokefanmWilliam_Seen, NationalPark_Normal_Text_PokefanmWilliam_Beaten
	msgbox NationalPark_Normal_Text_PokefanmWilliam_After, MSGBOX_AUTOCLOSE
	end

NationalPark_Normal_EventScript_Krise::
	trainerbattle_single TRAINER_KRISE_HNS, NationalPark_Normal_Text_LassKrise_Seen, NationalPark_Normal_Text_LassKrise_Beaten
	msgbox NationalPark_Normal_Text_LassKrise_After, MSGBOX_AUTOCLOSE
	end

NationalPark_Normal_EventScript_TM_Dig::
	finditem ITEM_TM_DIG
	end

NationalPark_Normal_EventScript_Item_Soothe_Bell::
	finditem ITEM_SOOTHE_BELL
	end

NationalPark_Normal_Text_SchoolboyJack1_Seen:
	.string "Pokémon sind ein Fass ohne Boden.\n"
	.string "Es gibt noch viel, was wir nicht wissen.\p"
	.string "Aber ich weiß immer noch mehr über sie\n"
	.string "als du! Dass das klar ist!$"

NationalPark_Normal_Text_SchoolboyJack1_Beaten:
	.string "Wa-wa-waas?$"

NationalPark_Normal_Text_SchoolboyJack_After:
	.string "Es gibt noch viel zu lernen!\p"
	.string "Zum Beispiel, dass es 50 verschiedene\n"
	.string "Technische Maschinen gibt,\l"
	.string "oder dass sich Pokémon, die man im\l"
	.string "Tausch erhält, schneller entwickeln.$"

NationalPark_Normal_Text_JackRegister:
	.string "Es gibt noch viel zu lernen!\p"
	.string "Zum Beispiel, dass es 50 verschiedene\n"
	.string "Technische Maschinen gibt,\l"
	.string "oder dass sich Pokémon, die man im\l"
	.string "Tausch erhält, schneller entwickeln.$"

NationalPark_Normal_Text_JackRematchIntro:
	.string "Ich habe viel seit dem letzten\n"
	.string "Mal gelernt! Na Los!$"

NationalPark_Normal_Text_JackRematchDefeat:
	.string "Wa-wa-was?$"

NationalPark_Normal_Text_JackPostRematch:
	.string "Es gibt noch viel zu lernen!\p"
	.string "Zum Beispiel, dass es 50 verschiedene\n"
	.string "Technische Maschinen gibt,\l"
	.string "oder dass sich Pokémon, die man im\l"
	.string "Tausch erhält, schneller entwickeln.$"

NationalPark_Normal_Text_PokefanFBeverly1_Seen:
	.string "Meine Pokémon sind einfach\n"
	.string "hinreißend.\p"
	.string "Ich zeige dir, wie stolz\n"
	.string "mich meine Lieblinge machen.$"

NationalPark_Normal_Text_PokefanFBeverly1_Beaten:
	.string "Im Kampf bin ich der Verlierer, aber in\n"
	.string "Sachen Stolz bin ich unschlagbar!$"

NationalPark_Normal_Text_PokefanFBeverly_After:
	.string "Ich muss zugeben… dein Pokémon-\n"
	.string "Team ist auch sehr süß.$"

NationalPark_Normal_Text_PokefanmWilliam_Seen:
	.string "Wir bewundern unsere Pokémon,\n"
	.string "auch wenn sie uns nicht mögen!\l"
	.string "Das macht den wahren Pokéfan aus!$"

NationalPark_Normal_Text_PokefanmWilliam_Beaten:
	.string "M-mein Pokémon!$"

NationalPark_Normal_Text_PokefanmWilliam_After:
	.string "Ich habe zwar den Kampf verloren,\n"
	.string "aber mein Pokémon gewinnt den\l"
	.string "Schönheitspreis.$"

NationalPark_Normal_Text_LassKrise_Seen:
	.string "Was ist?\n"
	.string "Warum starrst du mich so an?\p"
	.string "Oh, ein Kampf?$"

NationalPark_Normal_Text_LassKrise_Beaten:
	.string "…Hmmm…$"

NationalPark_Normal_Text_LassKrise_After:
	.string "Ich dachte, du starrst mich an,\n"
	.string "weil ich so süß bin!$"

NationalPark_Normal_Text_Sign_RelaxationSquare:
	.string "Der Nationalpark\n"
	.string "Ein öffentlicher Ort der Erholung$"

NationalPark_Normal_Text_Sign_BattleNotice:
	.string "Da ist ein Flugblatt…\p"
	.string "Kämpfe sind nur im\n"
	.string "hohen Gras gestattet.\l"
	.string "- Das Büro des Wächters$"

NationalPark_Normal_Text_TrainerTips:
	.string "Tipps für Trainer\p"
	.string "Möchtest du deine\n"
	.string "Briefe drucken, öffne sie und drücke\l"
	.string "Start.$"

NationalPark_Normal_Text_BeverlyRegister:
	.string "Ich muss zugeben… dein Pokémon-\n"
	.string "Team ist auch sehr süß.$"

NationalPark_Normal_Text_BeverlyHasItem:
	.string "Oh, hallo! Ich habe etwas\n"
	.string "für dich.\p"
	.string "Bitte nimm es als Zeichen\n"
	.string "meiner Dankbarkeit!$"

NationalPark_Normal_Text_BeverlyGaveItem:
	.string "Meine Pokémon und ich\n"
	.string "werden dich anfeuern!$"

NationalPark_Normal_Text_BeverlyNoRoom:
	.string "Hmm, dein Beutel ist voll.\p"
	.string "Komm wieder wenn du Platz hast.$"
