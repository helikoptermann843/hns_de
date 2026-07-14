BlackthornCity_Gym_hns_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, BlackthornGym_OnLoad
	.byte 0

BlackthornGym_OnLoad::
	call_if_eq VAR_BLACKTHORN_GYM_STATE, 1, BlackthornGym_MapScript_Var1
	call_if_eq VAR_BLACKTHORN_GYM_STATE, 2, BlackthornGym_MapScript_Var2
	call_if_eq VAR_BLACKTHORN_GYM_STATE, 3, BlackthornGym_MapScript_Var3
	call_if_eq VAR_BLACKTHORN_GYM_STATE, 4, BlackthornGym_MapScript_Var4
	end

BlackthornGym_MapScript_Var1::
	call BlackthornGym_MapScript_BuildBridge1
	end

BlackthornGym_MapScript_Var2::
	call BlackthornGym_MapScript_BuildBridge1
	call BlackthornGym_MapScript_BuildBridge2
	end

BlackthornGym_MapScript_Var3::
	call BlackthornGym_MapScript_BuildBridge1
	call BlackthornGym_MapScript_BuildBridge2
	call BlackthornGym_MapScript_BuildBridge3
	end

BlackthornGym_MapScript_Var4::
	call BlackthornGym_MapScript_BuildBridge1
	call BlackthornGym_MapScript_BuildBridge2
	call BlackthornGym_MapScript_BuildBridge3
	call BlackthornGym_MapScript_BuildBridge4
	end

BlackthornGym_TriggerBridge1::
	call BlackthornGym_MapScript_BuildBridge1
	playse SE_BANG
	special DrawWholeMapView
	setvar VAR_BLACKTHORN_GYM_STATE, 1
	end

BlackthornGym_MapScript_BuildBridge1::
	setmetatile 19, 47, 0x35A, FALSE
	setmetatile 19, 48, 0x35A, FALSE
	setmetatile 19, 49, 0x35A, FALSE
	setmetatile 19, 50, 0x35A, FALSE
	setmetatile 19, 51, 0x35A, FALSE
	setmetatile 19, 52, 0x35A, FALSE
	setmetatile 19, 53, 0x35A, FALSE
	setmetatile 19, 54, 0x35A, FALSE
	setmetatile 20, 47, 0x35A, FALSE
	setmetatile 20, 48, 0x35A, FALSE
	setmetatile 20, 49, 0x35A, FALSE
	setmetatile 20, 50, 0x35A, FALSE
	setmetatile 20, 51, 0x35A, FALSE
	setmetatile 20, 52, 0x35A, FALSE
	setmetatile 20, 53, 0x35A, FALSE
	setmetatile 20, 54, 0x35A, FALSE
	setmetatile 21, 47, 0x35A, FALSE
	setmetatile 21, 48, 0x35A, FALSE
	setmetatile 21, 49, 0x35A, FALSE
	setmetatile 21, 50, 0x35A, FALSE
	setmetatile 21, 51, 0x35A, FALSE
	setmetatile 21, 52, 0x35A, FALSE
	setmetatile 21, 53, 0x35A, FALSE
	setmetatile 21, 54, 0x35A, FALSE
	return

BlackthornGym_TriggerBridge2::
	call BlackthornGym_MapScript_BuildBridge2
	playse SE_BANG
	special DrawWholeMapView
	setvar VAR_BLACKTHORN_GYM_STATE, 2
	end

BlackthornGym_MapScript_BuildBridge2::
	setmetatile 17, 35, 0x35A, FALSE
	setmetatile 17, 36, 0x35A, FALSE
	setmetatile 17, 37, 0x35A, FALSE
	setmetatile 17, 38, 0x35A, FALSE
	setmetatile 17, 39, 0x35A, FALSE
	setmetatile 17, 40, 0x35A, FALSE
	setmetatile 18, 35, 0x35A, FALSE
	setmetatile 18, 36, 0x35A, FALSE
	setmetatile 18, 37, 0x35A, FALSE
	setmetatile 18, 38, 0x35A, FALSE
	setmetatile 18, 39, 0x35A, FALSE
	setmetatile 18, 40, 0x35A, FALSE
	setmetatile 19, 35, 0x35A, FALSE
	setmetatile 19, 36, 0x35A, FALSE
	setmetatile 19, 37, 0x35A, FALSE
	setmetatile 19, 38, 0x35A, FALSE
	setmetatile 19, 39, 0x35A, FALSE
	setmetatile 19, 40, 0x35A, FALSE
	setmetatile 20, 32, 0x359, FALSE
	setmetatile 21, 32, 0x359, FALSE
	setmetatile 22, 32, 0x359, FALSE
	setmetatile 20, 35, 0x361, TRUE
	setmetatile 21, 35, 0x361, TRUE
	setmetatile 22, 35, 0x361, TRUE
	setmetatile 20, 33, 0x35A, FALSE
	setmetatile 20, 34, 0x35A, FALSE
	setmetatile 21, 33, 0x35A, FALSE
	setmetatile 21, 34, 0x35A, FALSE
	setmetatile 22, 33, 0x35A, FALSE
	setmetatile 22, 34, 0x35A, FALSE
	return

BlackthornGym_TriggerBridge3::
	call BlackthornGym_MapScript_BuildBridge3
	playse SE_BANG
	special DrawWholeMapView
	setvar VAR_BLACKTHORN_GYM_STATE, 3
	end

BlackthornGym_MapScript_BuildBridge3::
	setmetatile 17, 26, 0x359, FALSE
	setmetatile 18, 26, 0x359, FALSE
	setmetatile 19, 26, 0x359, FALSE
	setmetatile 20, 26, 0x359, FALSE
	setmetatile 21, 26, 0x359, FALSE
	setmetatile 22, 26, 0x359, FALSE
	setmetatile 23, 26, 0x359, FALSE

	setmetatile 17, 29, 0x361, TRUE
	setmetatile 18, 29, 0x361, TRUE
	setmetatile 19, 29, 0x361, TRUE
	setmetatile 20, 29, 0x361, TRUE
	setmetatile 21, 29, 0x361, TRUE
	setmetatile 22, 29, 0x361, TRUE
	setmetatile 23, 29, 0x361, TRUE

	setmetatile 17, 27, 0x35A, FALSE
	setmetatile 17, 28, 0x35A, FALSE
	setmetatile 18, 27, 0x35A, FALSE
	setmetatile 18, 28, 0x35A, FALSE
	setmetatile 19, 27, 0x35A, FALSE
	setmetatile 19, 28, 0x35A, FALSE
	setmetatile 20, 27, 0x35A, FALSE
	setmetatile 20, 28, 0x35A, FALSE
	setmetatile 21, 27, 0x35A, FALSE
	setmetatile 21, 28, 0x35A, FALSE
	setmetatile 22, 27, 0x35A, FALSE
	setmetatile 22, 28, 0x35A, FALSE
	setmetatile 23, 27, 0x35A, FALSE
	setmetatile 23, 28, 0x35A, FALSE
	return	

BlackthornGym_TriggerBridge4::
	call BlackthornGym_MapScript_BuildBridge4
	playse SE_BANG
	special DrawWholeMapView
	setvar VAR_BLACKTHORN_GYM_STATE, 4
	end

BlackthornGym_MapScript_BuildBridge4::
	setmetatile 19, 11, 0x35A, FALSE
	setmetatile 19, 12, 0x35A, FALSE
	setmetatile 19, 13, 0x35A, FALSE
	setmetatile 19, 14, 0x35A, FALSE
	setmetatile 19, 15, 0x35A, FALSE
	setmetatile 20, 11, 0x35A, FALSE
	setmetatile 20, 12, 0x35A, FALSE
	setmetatile 20, 13, 0x35A, FALSE
	setmetatile 20, 14, 0x35A, FALSE
	setmetatile 20, 15, 0x35A, FALSE
	setmetatile 21, 11, 0x35A, FALSE
	setmetatile 21, 12, 0x35A, FALSE
	setmetatile 21, 13, 0x35A, FALSE
	setmetatile 21, 14, 0x35A, FALSE
	setmetatile 21, 15, 0x35A, FALSE
	return


BlackthornGym_EventScript_Cody::
	trainerbattle_single TRAINER_CODY_HNS, BlackthornGym_Text_CooltrainermCodySeenText, BlackthornGym_Text_CooltrainermCodyBeatenText
	msgbox BlackthornGym_Text_CooltrainermCodyAfterBattleText, MSGBOX_AUTOCLOSE
	end

BlackthornGym_EventScript_Fran::
	trainerbattle_single TRAINER_FRAN_HNS, BlackthornGym_Text_CooltrainerfFranSeenText, BlackthornGym_Text_CooltrainerfFranBeatenText
	msgbox BlackthornGym_Text_CooltrainerfFranAfterBattleText, MSGBOX_AUTOCLOSE
	end

BlackthornGym_EventScript_Paul::
	trainerbattle_single TRAINER_PAUL_HNS, BlackthornGym_Text_CooltrainermPaulSeenText, BlackthornGym_Text_CooltrainermPaulBeatenText
	msgbox BlackthornGym_Text_CooltrainermPaulAfterBattleText, MSGBOX_AUTOCLOSE
	end

BlackthornGym_EventScript_Mike::
	trainerbattle_single TRAINER_MIKE_HNS, BlackthornGym_Text_CooltrainermMikeSeenText, BlackthornGym_Text_CooltrainermMikeBeatenText
	msgbox BlackthornGym_Text_CooltrainermMikeAfterBattleText, MSGBOX_AUTOCLOSE
	end

BlackthornGym_EventScript_Lola::
	trainerbattle_single TRAINER_LOLA_HNS, BlackthornGym_Text_CooltrainerfLolaSeenText, BlackthornGym_Text_CooltrainerfLolaBeatenText
	msgbox BlackthornGym_Text_CooltrainerfLolaAfterBattleText, MSGBOX_AUTOCLOSE
	end


BlackthornGym_EventScript_Clair::
	lock
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, BlackthornGym_EventScript_ClairAfterLeague
	goto_if_ge VAR_BLACKTHORN_CITY_STATE, 4, BlackthornGym_EventScript_Clair_Defeated
	goto_if_eq VAR_BLACKTHORN_CITY_STATE, 2, BlackthornGym_EventScript_ClairDuringChallenge
	msgbox BlackthornGym_Text_ClairIntroText, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_CLAIR_1_HNS, BlackthornGym_Text_ClairWinText
	msgbox BlackthornGym_Text_ClairText_GoToDragonsDen, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_BLACKTHORN_GYM
	setvar VAR_0x8008, 8
	call Common_EventScript_SetGymTrainers_hns
	setvar VAR_BLACKTHORN_CITY_STATE, 2
	closemessage
	release
	end

BlackthornGym_EventScript_ClairDuringChallenge::
	msgbox BlackthornGym_Text_ClairText_TooMuchToExpect, MSGBOX_DEFAULT
	closemessage
	release
	end

BlackthornGym_EventScript_Clair_Defeated::
	msgbox BlackthornGym_Text_ClairText_League, MSGBOX_DEFAULT
	closemessage
	release
	end

BlackthornGym_EventScript_ClairAfterLeague::
	msgbox BlackthornGym_Text_ClairAfterLeague, MSGBOX_DEFAULT
	closemessage
	release
	end

BlackthornGym_Text_ClairIntroText:
	.string "Ich bin Sandra.\p"
	.string "Der beste Drachenmeister der Welt.\p"
	.string "Ich bestehe sogar gegen die TOP VIER\n"
	.string "der Pokémon Liga.\p"
	.string "Willst du immer noch gegen mich\n"
	.string "antreten?\p"
	.string "…Gut. Auf geht's!\p"
	.string "Da ich eine Arenaleiterin bin\n"
	.string "werde ich mich nicht zurückhalten!$"

BlackthornGym_Text_ClairWinText:
	.string "Ich habe verloren?\p"
	.string "Ich glaube es nicht. Das muss ein\n"
	.string "Fehler sein…$"

BlackthornGym_Text_ClairText_GoToDragonsDen:
	.string "Ich gestehe das nicht ein.\p"
	.string "Ich Sandra mag verloren haben\n"
	.string "aber du bist noch nicht reif für die\n"
	.string "Pokémon Liga.\p"
	.string "Ich weiß. Stelle dich der Drachen-\n"
	.string "Trainer-herausforderung.\p"
	.string "Hinter dieser Arena liegt die\n"
	.string "Drachenhöhle.\p"
	.string "In deren Mitte ist ein Schrein.\n"
	.string "Gehe Dorthin.\p"
	.string "Falls du dich dort beweisen kannst,\n"
	.string "werde ich dich als würdig befinden\l"
	.string "einen Orden zu erhalten!$"

BlackthornGym_Text_ClairText_TooMuchToExpect:
	.string "Was ist los?\p"
	.string "Erwarte ich etwa zu viel von dir?$"

BlackthornGym_Text_ClairText_YouKeptMeWaiting:
	.string "Du hast mich warten lassen!\p"
	.string "Hier! Nimm dies!$"

BlackthornGym_Text_ClairText_DescribeTM:
	.string "Das enthält Drachenklaue.\p"
	.string "Du kannst selbst herausfinden\n"
	.string "wie es funktioniert.$"

BlackthornGym_Text_ClairText_League:
	.string "Was ist los?\p"
	.string "Gehst du nicht zur Pokémon\n"
	.string "LIGA?\p"
	.string "Kennst du den Weg nicht?\p"
	.string "Gehe von hier nach Neuborkia.\p"
	.string "Surfe dann nach Osten. der Weg\n"
	.string "wird dann sehr beschwerlich.\p"
	.string "Wage es nicht in der Pokémon\n"
	.string "LIGA zu verlieren!\p"
	.string "Das würde meine Niederlage gegen\n"
	.string "dich noch schlimmer machen!\p"
	.string "Gib dein Bestes!$"

BlackthornGym_Text_ClairAfterLeague:
	.string "Du hast es geschafft, huh?\p"
	.string "Du bist jetzt der JOHTO CHAMP.$"

BlackthornGym_Text_ClairRematchText:
	.string "Du hast es geschafft, huh?\p"
	.string "Du bist jetzt der JOHTO CHAMP.\p"
	.string "Du hast deine Stärke bewiesen\n"
	.string "glaubst du, du besiegst mich erneut?\p"
	.string "Als Drachenmeister werde ich mich\n"
	.string "nicht zurückhalten.\p"
	.string "Dieses mal nicht.\p"
	.string "Willst du erneut kämpfen?$"

BlackthornGym_Text_ClairRematchDefeatText:
	.string "Ich habe verloren?\p"
	.string "Wieder?\p"
	.string "Ich glaube es nicht\n"
	.string "das muss ein Fehler sein…$"

BlackthornGym_Text_CooltrainermCodySeenText:
	.string "Ich habe gerade meine ersten\n"
	.string "Drachen-Pokémon bekommen!$"

BlackthornGym_Text_CooltrainermCodyBeatenText:
	.string "Mist! Hätte ich bloß ein Dragoran!$"

BlackthornGym_Text_CooltrainermCodyAfterBattleText:
	.string "Mitgliedern vom Drachen-Clan\n"
	.string "wird erst erlaubt Drachen zu verwenden\l"
	.string "wenn unser Meister es erlaubt hat.$"

BlackthornGym_Text_CooltrainerfFranSeenText:
	.string "Ich kann einen unbekannten Trainer\n"
	.string "nicht an mir vorbei lassen!\p"
	.string "Sandra wäre sehr wütend!$"

BlackthornGym_Text_CooltrainerfFranBeatenText:
	.string "Awww… ich hab verloren…$"

BlackthornGym_Text_CooltrainerfFranAfterBattleText:
	.string "Uh-oh… Sandra wird sauer sein…$"

BlackthornGym_Text_CooltrainermPaulSeenText:
	.string "Dein erster Kampf gegen Drachen?\p"
	.string "Ich zeige dir wie stark sie sind!$"

BlackthornGym_Text_CooltrainermPaulBeatenText:
	.string "Mein Drachen-Pokémon hat verloren?$"

BlackthornGym_Text_CooltrainermPaulAfterBattleText:
	.string "Siegfried sagte dir das\n"
	.string "er dich noch einmal sehen will?\p"
	.string "Das kann nicht sein!$"

BlackthornGym_Text_CooltrainermMikeSeenText:
	.string "Die Chance gegen dich zu verlieren?\n"
	.string "Nicht mal ein Prozent!$"

BlackthornGym_Text_CooltrainermMikeBeatenText:
	.string "Hm, eigenartig.$"

BlackthornGym_Text_CooltrainermMikeAfterBattleText:
	.string "Ich kenne jetzt meine Schwachstellen.\p"
	.string "Danke für den Hinweis!$"

BlackthornGym_Text_CooltrainerfLolaSeenText:
	.string "Drachen sind heilige Pokémon.\p"
	.string "Sie sind voller Leben und Energie.\p"
	.string "Wenn du es nicht ernst meinst\n"
	.string "wirst du sie nicht besiegen können.$"

BlackthornGym_Text_CooltrainerfLolaBeatenText:
	.string "Großartig!$"

BlackthornGym_Text_CooltrainerfLolaAfterBattleText:
	.string "Drachen sind schwach gegen\n"
	.string "Typ Drache Attacken.$"

BlackthornGym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_BLACKTHORN_GYM, BlackthornGym_EventScript_GymGuy2
	msgbox BlackthornGym_Text_GuideText, MSGBOX_DEFAULT
	closemessage
	release
	end
	
BlackthornGym_EventScript_GymGuy2::
	goto_if_set FLAG_BADGE08_GET, BlackthornGym_EventScript_GymGuy3
	msgbox BlackthornGym_Text_GuideGotoDragonsDen, MSGBOX_DEFAULT
	release
	end

BlackthornGym_EventScript_GymGuy3::
	msgbox BlackthornGym_Text_GuideWinText, MSGBOX_DEFAULT
	release
	end	

BlackthornGym_Text_GuideText:
	.string "Yo! CHAMP in spe!\p"
	.string "Es war eine lange Reise, aber\n"
	.string "bald sind wir da! Zähle auf mich!\p"
	.string "Während Sandra zum Drachenmeister\n"
	.string "Siegfried aufsieht, hat sie es doch\l"
	.string "geschafft ihre eigene Identität\l"
	.string "zu entwickeln, mit Drachen aus\l"
	.string "dem Wasser.\p"
	.string "Drachen sind eigentlich schwach\n"
	.string "gegen Eis-Attacken,\l"
	.string "aber du wirst Drachen-oder\l"
	.string "Feen-Attacken benötigen\l"
	.string "wenn du gewinnen willst.$"
	.string "Du schaffst das!$"

BlackthornGym_Text_GuideGotoDragonsDen:
	.string "Du warst super gegen Sandra!\p"
    .string "Sie ist leider kein guter\n"
	.string "verlierer.\p"
    .string "Schätze du musst zur Drachenhöhle,\n"
    .string "wenn du den Orden bekommen willst!$"

BlackthornGym_Text_GuideWinText:
	.string "Gegen Sandra zu gewinnen ist\n"
	.string "eine Meisterleistung!\p"
	.string "Alles was dir nun bevorsteht.\n"
	.string "Ist die Pokémon Liga und\l"
	.string "Pokémon CHAMPION zu werden!$"


BlackthornGym_EventScript_Statue::
	lock
	goto_if_set FLAG_BADGE08_GET, BlackthornGym_EventScript_Statue2
	msgbox BlackthornGym_Text_GymStatue, MSGBOX_DEFAULT
	closemessage
	release
	end

BlackthornGym_EventScript_Statue2::
	msgbox BlackthornGym_Text_GymStatueCertified, MSGBOX_DEFAULT
	closemessage
	release
	end

BlackthornGym_Text_GymStatue:
	.string "Ebenholz City Pokémon Arena$"

BlackthornGym_Text_GymStatueCertified:
	.string "Ebenholz City Pokémon Arena\p"
	.string "Sandra's zertifizierte Trainer:\n"
	.string "{PLAYER}$"
