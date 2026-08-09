PewterCity_Gym_hns_MapScripts::
	.byte 0



PewterCity_Gym_EventScript_Jerry::
	trainerbattle_single TRAINER_JERRY_HNS, PewterCity_Gym_Text_CamperJerry_Seen, PewterCity_Gym_Text_CamperJerry_Beaten
	msgbox PewterCity_Gym_Text_CamperJerry_AfterBattle, MSGBOX_AUTOCLOSE
	end

PewterCity_Gym_EventScript_Brock::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_PEWTER_GYM, PewterCity_Gym_EventScript_Brock_Defeated
	msgbox PewterCity_Gym_Text_Brock_Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BROCK_HNS, PewterCity_Gym_Text_Brock_WinLoss
	message PewterCity_Gym_Text_ReceivedBoulderBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox PewterCity_Gym_Text_Brock_FightDone, MSGBOX_DEFAULT
	giveitem ITEM_TM_ROCK_SLIDE
	setflag FLAG_BADGE09_GET
	setflag FLAG_DEFEATED_PEWTER_GYM
	callnative RevealDexEntries_Pewter
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 9
	call Common_EventScript_SetGymTrainers_hns
	clearflag FLAG_HIDE_DIGLETT_BROCK
	closemessage
	release
	end

PewterCity_Gym_EventScript_Brock_Defeated::
	goto_if_unset FLAG_HIDE_DOJO_BROCK, PewterCity_Gym_EventScript_Brock_Trade
	msgbox PewterCity_Gym_Text_Brock_FightDone, MSGBOX_DEFAULT
	closemessage
	release
	end


PewterCity_Gym_Text_Brock_Intro:
	.string "Rocko: Wow! Mit Leuten aus Johto habe\n"
	.string "ich es hier nur selten zu tun!\p"
	.string "Mein Name ist Rocko! Ich bin der\n"
	.string "Arenaleiter von Marmoria City.\p"
	.string "Mein Fachgebiet sind Gestein-Pokémon!\p"
	.string "Von ein paar halbherzigen Attacken\n"
	.string "lassen sich meine Pokémon ganz\l"
	.string "bestimmt nicht beeindrucken!\l"
	.string "Das juckt sie nicht im Geringsten!\p"
	.string "Und jetzt los! Lass uns kämpfen!$"

PewterCity_Gym_Text_Brock_WinLoss:
	.string "Rocko: Unglaublich! Die mächtigen\n"
	.string "Attacken deiner Pokémon haben\l"
	.string "meine Verteidigung durchbrochen.\p"
	.string "Hier! Nimm diesen Orden!$"

PewterCity_Gym_Text_ReceivedBoulderBadge:
	.string "{PLAYER} erhält den Felsenorden!$"

PewterCity_Gym_Text_Brock_BoulderBadge:
	.string "Rocko: {PLAYER}, danke.\n"
	.string "Der Kampf hat mir gefallen,\l"
	.string "auch wenn ich etwas enttäuscht bin.\p"
	.string "Der Felsenorden macht deine\n"
	.string "Pokémon noch stärker.$"

PewterCity_Gym_Text_Brock_FightDone:
	.string "Rocko: Es ist eine große, weite Welt!\n"
	.string "Da draußen gibt es bestimmt noch jede\l"
	.string "Menge andere starke Trainer wie dich.\p"
	.string "Auch ich werde an mir feilen, dass ich\n"
	.string "ein noch viel besserer Trainer werde!$"

PewterCity_Gym_Text_CamperJerry_Seen:
	.string "Die Trainer dieser Pokémon-Arena\n"
	.string "setzen Gestein-Pokémon ein.\p"
	.string "Gestein-Pokémon haben hohe\n"
	.string "Verteidigungs-Werte.\p"
	.string "Die Kämpfe können sehr lange dauern.\n"
	.string "Bist du bereit dafür?$"

PewterCity_Gym_Text_CamperJerry_Beaten:
	.string "Ich muss diese\n"
	.string "Kämpfe gewinnen…$"

PewterCity_Gym_Text_CamperJerry_AfterBattle:
	.string "He, du da! Trainer aus Johto! Rocko ist\n"
	.string "stark. Es wird dir übel bekommen,\l"
	.string "wenn du ihn nicht ernst nimmst.$"

PewterCity_Gym_Text_Guide:
	.string "Hey, du! Zukünftiger Champ!\p"
	.string "Heute scheint ja echt dein Tag zu sein!\p"
	.string "Hast du vor, alle Arenaleiter von Kanto\n"
	.string "zum Kampf herauszufordern?\p"
	.string "Sie sind starke Gegner und stehen\n"
	.string "ihren Kollegen aus Johto in nichts nach!$"

PewterCity_Gym_Text_Guide_Win:
	.string "Ja, aus dir wird wirklich mal ein Champ!\n"
	.string "Dieser Kampf war kein Problem für dich.\l"
	.string "Ehrlich, ich bin schwer beeindruckt!$"

PewterCity_Gym_EventScript_GymGuy::
	goto_if_set FLAG_DEFEATED_PEWTER_GYM, PewterCity_Gym_EventScript_GymGuyAfter
	msgbox PewterCity_Gym_Text_Guide, MSGBOX_NPC
	end

PewterCity_Gym_EventScript_GymGuyAfter::
	msgbox PewterCity_Gym_Text_Guide_Win, MSGBOX_NPC
	end


PewterCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE09_GET, PewterCity_Gym_EventScript_GymStatuePostVictory
	msgbox PewterCity_Gym_Text_GymStatue
	releaseall
	end

PewterCity_Gym_EventScript_GymStatuePostVictory::
	msgbox PewterCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

PewterCity_Gym_Text_GymStatue::
    .string "Pokémon-Arena von Marmoria City\n"
    .string "Leiter: Rocko\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot$"

PewterCity_Gym_Text_GymStatuePlayerWon::
    .string "Pokémon-Arena von Marmoria City\n"
    .string "Leiter: Rocko\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot, {PLAYER}$"

PewterCity_Gym_EventScript_Brock_Trade::
	goto_if_set FLAG_PEWTER_GYM_NPC_TRADE_COMPLETED, PewterCity_Gym_EventScript_BrockTradeCompleted
	ingame_trade INGAME_TRADE_BONSLY, PewterCity_Gym_Text_BrockWantToTrade, PewterCity_Gym_EventScript_BrockDeclineTrade, PewterCity_Gym_EventScript_BrockNotRequestedMon, PewterCity_Gym_Text_BrockTakeCare
	setflag FLAG_PEWTER_GYM_NPC_TRADE_COMPLETED
	release
	end

PewterCity_Gym_EventScript_BrockDeclineTrade::
	msgbox PewterCity_Gym_Text_BrockDeclineTrade, MSGBOX_DEFAULT
	release
	end

PewterCity_Gym_EventScript_BrockNotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox PewterCity_Gym_Text_BrockNotRequestedMon, MSGBOX_DEFAULT
	release
	end

PewterCity_Gym_EventScript_BrockTradeCompleted::
	msgbox PewterCity_Gym_Text_BrockTradeCompleted, MSGBOX_DEFAULT
	release
	end

PewterCity_Gym_Text_BrockWantToTrade:
	.string "Rocko: Hey, {PLAYER}. Ich habe\n"
	.string "dieses Mobai gefunden, während\l"
	.string "ich in den Bergen trainierte.\p"
	.string "Es ist süß, braucht aber einen\n"
	.string "anderen Typ Trainer.\p"
	.string "Würdest du ein {STR_VAR_1}\n"
	.string "für mein {STR_VAR_2} tauschen?$"

PewterCity_Gym_Text_BrockTakeCare:
	.string "Rocko: Danke!\n"
	.string "Kümmere dich gut um Woody!$"

PewterCity_Gym_Text_BrockDeclineTrade:
	.string "Rocko: Nein? Das ist ok.\n"
	.string "Woody und ich werden trainieren.$"

PewterCity_Gym_Text_BrockNotRequestedMon:
	.string "Rocko: Das ist kein {STR_VAR_1}.\n"
	.string "Das möchte ich nicht.$"

PewterCity_Gym_Text_BrockTradeCompleted:
	.string "Rocko: Wie geht es Woody?\n"
	.string "Mobai sind härter als sie aussehen!$"
