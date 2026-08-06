FourIsland_LoreleisHouse_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_LoreleisHouse_OnTransition
	.byte 0

FourIsland_LoreleisHouse_OnTransition::
	special UpdateLoreleiDollCollection
	end

FourIsland_LoreleisHouse_EventScript_Lorelei::
	lock
	faceplayer
	goto_if_set FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE, FourIsland_LoreleisHouse_EventScript_Lorelei3
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FourIsland_LoreleisHouse_EventScript_Lorelei2
	msgbox FourIsland_LoreleisHouse_Text_IfAnythingWereToHappenToIsland
	release
	end

FourIsland_LoreleisHouse_EventScript_Lorelei2::
	setflag FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE
	msgbox FourIsland_LoreleisHouse_Text_IllReturnToLeagueInShortWhile
	release
	end

FourIsland_LoreleisHouse_EventScript_Lorelei3::
	msgbox FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow
	release
	end

FourIsland_LoreleisHouse_EventScript_Doll::
	lock
	msgbox FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore
	release
	end

FourIsland_LoreleisHouse_Text_IfAnythingWereToHappenToIsland::
	.string "Lorelei: Etwas betrübt meinen\n"
	.string "Geist!\p"
	.string "Falls auf der Insel, auf der ich\n"
	.string "geboren wurde, etwas Schreckliches\l"
	.string "passiert…\l"
	.string "Ich würde es nicht erfahren, da\l"
	.string "ich in der Pokémon Liga wäre!\p"
	.string "Zeigt das, dass ich meiner\n"
	.string "Heimat verantwortungslos\l"
	.string "gegenüberstehe…$"

FourIsland_LoreleisHouse_Text_IllReturnToLeagueInShortWhile::
	.string "Lorelei: Du hast hier also\n"
	.string "alle Probleme lösen können?\p"
	.string "Das ist großartig!\p"
	.string "Das bedeutet, dass ich mich nicht\n"
	.string "ständig hier aufhalten muss.\p"
	.string "Danke…\p"
	.string "Ich kehre bald zur Pokémon\n"
	.string "Liga zurück!$"

FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow::
	.string "Ich weiß nicht, was die Zukunft\n"
	.string "bringt, aber…\p"
	.string "Ich werde tun, was in meiner\n"
	.string "Macht steht, hier und jetzt.\l"
	.string "Das ist alles, was ich tun kann!$"

FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore::
	.string "Pokémon-Plüschpuppen in Hülle\n"
	.string "und Fülle!$"

