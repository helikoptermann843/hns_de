TinTower_1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TinTower_OnTransition
	.byte 0

TinTower_OnTransition::
	setescapewarp MAP_BELLCHIME_TRAIL_HNS, 35, 42
	end

TinTower_1F_EventScript_SageA::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_STATE, 11, TinTower_1F_EventScript_SageA_Hooh
	msgbox TinTower_1F_Sage4_Text2, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageA_Hooh::
	msgbox TinTower_1F_Sage4_Text1, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageB::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_STATE, 11, TinTower_1F_EventScript_SageB_Hooh
	msgbox TinTower_1F_Sage2_Text, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageB_Hooh::
	msgbox TinTower_1F_Sage1_Text, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageC::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_STATE, 11, TinTower_1F_EventScript_SageC_Hooh
	msgbox TinTower_1F_Sage6_Text2, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageC_Hooh::
	msgbox TinTower_1F_Sage3_Text, MSGBOX_DEFAULT
	closemessage
	release
	end


TinTower_1F_Sage1_Text:
	.string "Der Legende nach…\n"
	.string "Wenn die Seelen von POKÉMON und\p"
	.string "Menschen sich berühren, steigt ein\n"
	.string "POKÉMON in Regenbogenfarben vom\l"
	.string "Himmel herab…\p"
	.string "Könnte es sein, dass die legendären\n"
	.string "POKÉMON uns Menschen auf die Probe\l"
	.string "stellen?$"

TinTower_1F_Sage2_Text:
	.string "Als der Zinnturm niederbrannte,\n"
	.string "sollen drei namenlose POKÉMON\l"
	.string "umgekommen sein. Es war tragisch.\p"
	.string "Jedoch…\p"
	.string "Ein POKÉMON in Regenbogenfarben…\n"
	.string "Mit anderen Worten…\p"
	.string "HO-OH stieg vom Himmel herab und\n"
	.string "schenkte den drei POKÉMON neues Leben.\p"
	.string "Es sind…\n"
	.string "SUICUNE, ENTEI und RAIKOU.\p"
	.string "So sagt man es zumindest.$"

TinTower_1F_Sage3_Text:
	.string "Die zwei TÜRME sollen erbaut worden\n"
	.string "sein, um Freundschaft und Hoffnung\p"
	.string "zwischen POKÉMON und Menschen zu\n"
	.string "fördern.\l"
	.string "Das war vor 700 Jahren, aber das\p"
	.string "Ideal ist noch heute wichtig.$"

TinTower_1F_Sage4_Text1:
	.string "HO-OH scheint auf diesem hier,\n"
	.string "dem ZINNTURM, herabgestiegen zu sein!$"

TinTower_1F_Sage4_Text2:
	.string "Die legendären POKÉMON sollen\n"
	.string "drei Kräfte verkörpern…\p"
	.string "Den Blitz, der den TURM traf.\n"
	.string "Das Feuer, das den TURM verbrannte.\p"
	.string "Und den Regen, der das Feuer\n"
	.string "löschte…$"

TinTower_1F_Sage6_Text2:
	.string "Von den legendären POKÉMON soll\n"
	.string "SUICUNE HO-OH am nächsten stehen.\p"
	.string "Ich höre, dass es auch eine\n"
	.string "Verbindung zu POKÉMON namens\l"
	.string "ICOGNITO geben soll.\p"
	.string "ICOGNITO muss eine enge Verbindung\n"
	.string "zu SUICUNE haben.$"

TinTower_1F_EusineHoOh_Text:
	.string "Ich wusste es.\p"
	.string "Ich wusste, dass du das POKÉMON\n"
	.string "in Regenbogenfarben sehen würdest,\l"
	.string "{PLAYER}.\p"
	.string "Es geschah genau so, wie ich es mir\n"
	.string "vorgestellt hatte.\l"
	.string "Meine Forschung ist gar nicht so\l"
	.string "schlecht, muss ich sagen.\p"
	.string "Ich werde weiter POKÉMON studieren,\n"
	.string "um ein berühmter POKÉNARR zu werden!$"

TinTower_1F_EusineSuicune_Text:
	.string "EUSIN: Unglaublich! Einfach zu\n"
	.string "unglaublich! So einen Kampf hab ich\l"
	.string "noch nie gesehen.\p"
	.string "Das war wirklich inspirierend.\n"
	.string "SUICUNE war stark, aber du warst\p"
	.string "noch beeindruckender, {PLAYER}.\n"
	.string "Ich habe gehört, SUICUNEs mystische\p"
	.string "Kraft ruft ein POKÉMON in Regenbogen-\n"
	.string "farben herbei.\l"
	.string "Vielleicht, nur vielleicht, wird das,\p"
	.string "was heute geschah, dieses POKÉMON\n"
	.string "erscheinen lassen.\l"
	.string "Ich werde die Legenden weiter\l"
	.string "erforschen.\p"
	.string "Danke, dass du mir diesen fantasti-\n"
	.string "schen Kampf gezeigt hast.\p"
	.string "Bis dann, {PLAYER}!$"
