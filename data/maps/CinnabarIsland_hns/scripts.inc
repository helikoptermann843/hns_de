CinnabarIsland_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0
	
CinnabarIsland_OnTransition:
	setflag FLAG_VISITED_CINNABAR_ISLAND
	callnative SetTimeBasedEncounters
	end

CinnabarIsland_EventScript_Blaine::
    lock
    faceplayer
    msgbox CinnabarIsland_Text_Blaine, MSGBOX_DEFAULT
    closemessage
    fadescreenswapbuffers FADE_TO_BLACK
    setflag FLAG_HIDE_CINNABAR_BLAINE
    removeobject LOCALID_CINNABAR_BLAINE
    fadescreenswapbuffers FADE_FROM_BLACK
    clearflag FLAG_HIDE_DOJO_BLAINE
    release
    end

CinnabarIsland_Text_Blaine:
	.string "Pyro: Ich gebe nicht auf,\n"
	.string "bis zu dem Tag an dem die\l"
	.string "Die Zinnoberinsel Arena wieder\n"
	.string "aufgebaut wurde!\p"
	.string "Bis dahin bin ich im Kampf DOJO\n"
	.string "Wir sehen uns.$"



CinnabarIsland_EventScript_Blue::
	lock
	faceplayer
	goto_if_eq VAR_NUM_BADGES, 15, CinnabarIsland_EventScript_BlueActive
	msgbox CinnabarIsland_Text_BlueBefore, MSGBOX_NPC
	release
	end

CinnabarIsland_EventScript_BlueActive::
	msgbox CinnabarIsland_Text_Blue, MSGBOX_NPC
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_HIDE_CINNABAR_BLUE
	removeobject LOCALID_CINNABAR_BLUE
	clearflag FLAG_HIDE_VIRIDIAN_BLUE
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end


CinnabarIsland_Text_BlueBefore:
	.string "Wer bist du?\p"
	.string "Es ist offensichtlich, dass du\n"
	.string "ein Trainer bist…\p"
	.string "Ich heiße Blau.\p"
	.string "Ich war einst der CHAMPION, auch\n"
	.string "wenn nur für kurze Zeit…\p"
	.string "Dieser Rot hat mir dazwischengefunkt…\n"
	.string "\p"
	.string "Was willst du überhaupt? Willst du\n"
	.string "mich herausfordern?\p"
	.string "…Ich sage es ungern, aber ich hab\n"
	.string "jetzt keine Lust auf einen Kampf.\p"
	.string "Sieh dich gut um…\p"
	.string "Ein Vulkan bricht aus, und plötzlich\n"
	.string "verschwindet eine ganze Stadt.\p"
	.string "Wir können weiter gewinnen und\l"
	.string "verlieren in Pokémon. Aber wenn\n"
	.string "die Natur nur zuckt, verlieren wir\p"
	.string "in Sekunden.\p"
	.string "…\p"
	.string "So ist das eben…\p"
	.string "Aber egal, ich bin immer noch ein\n"
	.string "Trainer.\p"
	.string "Wenn ich einen starken Gegner sehe,\n"
	.string "möchte ich kämpfen.\p"
	.string "Willst du gegen mich antreten, musst\n"
	.string "du zuerst 15 Orden haben.\p"
	.string "Dann können wir kämpfen.$"

CinnabarIsland_Text_Blue:
	.string "Wer bist du?\p"
	.string "Es ist offensichtlich, dass du\n"
	.string "ein Trainer bist…\p"
	.string "Ich heiße Blau.\p"
	.string "Ich war einst der CHAMPION, auch\n"
	.string "wenn nur für kurze Zeit…\p"
	.string "Dieser Rot hat mir dazwischengefunkt…\n"
	.string "\p"
	.string "Was willst du überhaupt? Willst du\n"
	.string "mich herausfordern?\p"
	.string "…Ich sage es ungern, aber ich hab\n"
	.string "jetzt keine Lust auf einen Kampf.\p"
	.string "Sieh dich gut um…\p"
	.string "Ein Vulkan bricht aus, und plötzlich\n"
	.string "verschwindet eine ganze Stadt.\p"
	.string "Wir können weiter gewinnen und\l"
	.string "verlieren in Pokémon. Aber wenn\n"
	.string "die Natur nur zuckt, verlieren wir\p"
	.string "in Sekunden.\p"
	.string "…\p"
	.string "So ist das eben…\p"
	.string "Aber egal, ich bin immer noch ein\n"
	.string "Trainer.\p"
	.string "Wenn ich einen starken Gegner sehe,\n"
	.string "möchte ich kämpfen.\p"
	.string "Willst du gegen mich antreten, komm\n"
	.string "zur Vertania-City Arena.\p"
	.string "Dann kämpfen wir.$"

CinnabarIsland_EventScript_Sign::
	msgbox CinnabarIsland_Text_Sign, MSGBOX_SIGN
	end

CinnabarIsland_EventScript_GymSign::
	msgbox CinnabarIsland_Text_GymSign, MSGBOX_SIGN
	end

CinnabarIsland_Text_GymSign:
	.string "Hier ist eine Notiz…\p"
	.string "Zinnoberinsel Arena ist auf die\n"
	.string "Seeschauminseln umgezogen.\p"
	.string "Pyro$"

CinnabarIsland_Text_Sign:
	.string "Zinnoberinsel\p"
	.string "Die Feurige Stadt brennender Begierde$"

