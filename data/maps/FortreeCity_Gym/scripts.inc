FortreeCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FortreeCity_Gym_OnWarp
	.byte 0

FortreeCity_Gym_OnTransition:
	special RotatingGate_InitPuzzle
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower bc of rotating gates
	end

FortreeCity_Gym_OnWarp:
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_EventScript_InitRotatingGates
	.2byte 0

@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_3
FortreeCity_Gym_EventScript_InitRotatingGates::
	special RotatingGate_InitPuzzleAndGraphics
	end

FortreeCity_Gym_EventScript_Winona::
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_Gym_EventScript_WinonaRematch
	goto_if_unset FLAG_RECEIVED_TM_AERIAL_ACE, FortreeCity_Gym_EventScript_GiveAerialAce2
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
	release
	end

FortreeCity_Gym_EventScript_WinonaDefeated::
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_FORTREE_GYM
	setflag FLAG_BADGE06_GET
	setvar VAR_0x8008, 6
	call Common_EventScript_SetGymTrainers
	call FortreeCity_Gym_EventScript_GiveAerialAce
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
	release
	end

FortreeCity_Gym_EventScript_GiveAerialAce2::
	giveitem ITEM_TM_AERIAL_ACE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
	release
	end

FortreeCity_Gym_EventScript_GiveAerialAce::
	giveitem ITEM_TM_AERIAL_ACE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
	return

FortreeCity_Gym_EventScript_WinonaRematch::
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Jared::
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Edwardo::
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Flint::
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Ashley::
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Humberto::
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Darius::
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

FortreeCity_Gym_EventScript_GymGuidePostVictory::
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

FortreeCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
	goto FortreeCity_Gym_EventScript_GymStatue
	end

FortreeCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
	goto FortreeCity_Gym_EventScript_GymStatue
	end

FortreeCity_Gym_EventScript_GymStatueCertified::
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

FortreeCity_Gym_EventScript_GymStatue::
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

FortreeCity_Gym_Text_GymGuideAdvice:
	.string "Na, wie sieht es aus? Auf dem Weg zum\n"
	.string "CHAMP, {PLAYER}?\p"
	.string "Die LEITERIN der ARENA von BAUMHAUSEN\n"
	.string "CITY, WIBKE, ist eine Meisterin der\l"
	.string "FLUG-POKéMON.\p"
	.string "Sie wartet hinten in der ARENA auf\n"
	.string "dich, hinter den Drehtüren.\p"
	.string "Sie wartet auf neue Herausforderer,\n"
	.string "denen sie die Flügel stutzen kann!\p"
	.string "Okay, dann viel Glück!$"

FortreeCity_Gym_Text_GymGuidePostVictory:
	.string "Du hast es geschafft!\n"
	.string "Du hast Startfreigabe!$"

FortreeCity_Gym_Text_JaredIntro:
	.string "Bewundere den eleganten Kampfstil der\n"
	.string "VOGEL-POKéMON!$"

FortreeCity_Gym_Text_JaredDefeat:
	.string "Du… Du bist stark…$"

FortreeCity_Gym_Text_JaredPostBattle:
	.string "Ein TRAINER muss clever genug sein,\n"
	.string "mit den Wendungen im Kampf fertig zu\l"
	.string "werden.\p"
	.string "Mal sehen, ob du clever genug bist,\n"
	.string "bis zu unserer LEITERIN vorzudringen.$"

FortreeCity_Gym_Text_EdwardoIntro:
	.string "Liebhaber von VOGEL-POKéMON streben\n"
	.string "danach, dieser ARENA beizutreten.\p"
	.string "Als Mitglied der ARENA von BAUMHAUSEN\n"
	.string "CITY darf ich nicht verlieren!$"

FortreeCity_Gym_Text_EdwardoDefeat:
	.string "Das war doch etwas zu schwer für mich\n"
	.string "zu tragen…$"

FortreeCity_Gym_Text_EdwardoPostBattle:
	.string "Die Welt ist groß und es gibt\n"
	.string "zahlreiche starke TRAINER.\p"
	.string "Ich werde weiter trainieren und so\n"
	.string "immer stärker werden!$"

FortreeCity_Gym_Text_FlintIntro:
	.string "Es gibt keinen Grund, dass WIBKE,\n"
	.string "unsere ARENALEITERIN, sich mit dir\l"
	.string "abgibt!\p"
	.string "Ich bin schon stark genug für dich!$"

FortreeCity_Gym_Text_FlintDefeat:
	.string "WIBKE… Ich…\n"
	.string "Ich habe verlooooren!$"

FortreeCity_Gym_Text_FlintPostBattle:
	.string "WIBKE ist süß, aber auch stark.\n"
	.string "Sie ist die ultimative LEITERIN!\p"
	.string "Hups… Wie peinlich. Ich werde nicht\n"
	.string "rot!$"

FortreeCity_Gym_Text_AshleyIntro:
	.string "WIBKE hat mich persönlich geschult!\n"
	.string "Du wirst kein leichtes Spiel haben!$"

FortreeCity_Gym_Text_AshleyDefeat:
	.string "Ich wurde geschlagen…$"

FortreeCity_Gym_Text_AshleyPostBattle:
	.string "Dank WIBKE leben die Einwohner von\n"
	.string "BAUMHAUSEN CITY ohne Furcht.$"

FortreeCity_Gym_Text_HumbertoIntro:
	.string "WIBKEs Gesicht strahlt eine\n"
	.string "Entschlossenheit aus, wenn sie in den\l"
	.string "Kampf geht. Sie ist dann wunderhübsch!\n"
	.string "\p"
	.string "Ich werde dir dieses hübsche Gesicht\n"
	.string "zeigen!$"

FortreeCity_Gym_Text_HumbertoDefeat:
	.string "Argh!\n"
	.string "Ich konnte dich einfach nicht stoppen!$"

FortreeCity_Gym_Text_HumbertoPostBattle:
	.string "Pass mal besser auf! Du solltest WIBKE\n"
	.string "nicht mit offenem Mund anstarren,\l"
	.string "sonst gehst du erbärmlich unter!$"

FortreeCity_Gym_Text_DariusIntro:
	.string "Es gibt viele verschiedene\n"
	.string "FLUG-POKéMON.\p"
	.string "Das weißt du, oder?$"

FortreeCity_Gym_Text_DariusDefeat:
	.string "Du weißt wirklich, was du tust!$"

FortreeCity_Gym_Text_DariusPostBattle:
	.string "Okay, du hast mich besiegt. Na und?\n"
	.string "Aber gegen unsere LEITERIN WIBKE\l"
	.string "hast du keine Chance!$"

FortreeCity_Gym_Text_WinonaIntro:
	.string "Ich bin WIBKE, die LEITERIN der ARENA\n"
	.string "von BAUMHAUSEN CITY.\p"
	.string "Ich wurde das mit Hilfe meiner VOGEL-\n"
	.string "POKéMON und habe den Himmel berührt.\p"
	.string "Wie anstrengend der Kampf auch war,\n"
	.string "wir haben mit Grazie gewonnen…\p"
	.string "Werde Zeuge der eleganten Choreo-\n"
	.string "graphie meiner VOGEL-POKéMON!$"

FortreeCity_Gym_Text_WinonaDefeat:
	.string "Ich habe noch nie einen TRAINER ge-\n"
	.string "sehen, der seine POKéMON mit mehr\l"
	.string "Grazie trainiert als ich…\p"
	.string "In Anbetracht deiner Fähigkeiten\n"
	.string "überreiche ich dir diesen ARENAORDEN.$"

FortreeCity_Gym_Text_ReceivedFeatherBadge:
	.string "{PLAYER} erhält den FEDERORDEN von\n"
	.string "WIBKE.$"

FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
	.string "Mit dem FEDERORDEN gehorchen dir alle\n"
	.string "POKéMON bis Lv. 70, auch die, die du\l"
	.string "durch Tausch bekommen hast.\p"
	.string "Außerdem kannst du nun die VM FLIEGEN\n"
	.string "außerhalb eines Kampfes einsetzen.\p"
	.string "Und dies…\n"
	.string "Dies ist ein Geschenk von mir.$"

FortreeCity_Gym_Text_ExplainAerialAce:
	.string "TM40 enthält AERO-ASS.\p"
	.string "Diese Geschwindigkeit…\n"
	.string "Kein POKéMON kann ihr entgehen.\p"
	.string "… … … … … …$"

FortreeCity_Gym_Text_RegisteredWinona:
	.string "ARENALEITERIN WIBKE wurde im POKéNAV-\n"
	.string "Verzeichnis eingetragen.$"

FortreeCity_Gym_Text_WinonaPostBattle:
	.string "Auch wenn ich gegen dich verloren\n"
	.string "habe,\l"
	.string "gehört meine Liebe den VOGEL-POKéMON.$"

FortreeCity_Gym_Text_GymStatue:
	.string "POKéMON ARENA von BAUMHAUSEN CITY$"

FortreeCity_Gym_Text_GymStatueCertified:
	.string "POKéMON ARENA von BAUMHAUSEN CITY\p"
	.string "WIBKES ANERKANNTE TRAINER:\n"
	.string "{PLAYER}$"

FortreeCity_Gym_Text_WinonaPreRematch:
	.string "WIBKE: Wir Menschen können uns der\n"
	.string "Schwerkraft nicht widersetzen.\p"
	.string "Aber in unserem Streben nach\n"
	.string "Perfektion haben auch wir die Kraft,\l"
	.string "vom Boden abzuheben!\p"
	.string "Du hast den Gipfel erstürmt. Als\n"
	.string "CHAMP.\p"
	.string "Bitte, zeig mir, wie du abhebst! Zeig\n"
	.string "mir deine Kraft.$"

FortreeCity_Gym_Text_WinonaRematchDefeat:
	.string "Du fliegst mir zu hoch…$"

FortreeCity_Gym_Text_WinonaPostRematch:
	.string "WIBKE: Auch wenn ich verloren habe,\n"
	.string "mein Herz wird stets fliegen.\p"
	.string "Ich werde immer wieder aufsteigen und\n"
	.string "mich in die Lüfte erheben.\p"
	.string "Das weiß ich genau!$"

FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
	.string "WIBKE: Wir Menschen können uns der\n"
	.string "Schwerkraft nicht widersetzen.\p"
	.string "Aber in unserem Streben nach\n"
	.string "Perfektion haben auch wir die Kraft,\l"
	.string "vom Boden abzuheben!\p"
	.string "Du hast den Gipfel erstürmt. Als\n"
	.string "CHAMP.\p"
	.string "Bitte, zeig mir wie du abhebst! Zeig\n"
	.string "mir deine Kraft.\p"
	.string "Oh… Du hast nur ein POKéMON bei\n"
	.string "dir?\p"
	.string "Bitte komm später wieder und bring\n"
	.string "mindestens zwei POKéMON mit.$"
