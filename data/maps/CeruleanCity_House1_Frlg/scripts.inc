CeruleanCity_House1_Frlg_MapScripts::
	.byte 0

CeruleanCity_House1_EventScript_BadgeGuy::
	lock
	faceplayer
	msgbox CeruleanCity_House1_Text_BadgesHaveAmazingSecrets
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeAnotherBadge::
	message CeruleanCity_House1_Text_DescribeWhichBadge
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_BADGES
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CeruleanCity_House1_EventScript_DescribeBoulderBadge
	case 1, CeruleanCity_House1_EventScript_DescribeCascadeBadge
	case 2, CeruleanCity_House1_EventScript_DescribeThunderBadge
	case 3, CeruleanCity_House1_EventScript_DescribeRainbowBadge
	case 4, CeruleanCity_House1_EventScript_DescribeSoulBadge
	case 5, CeruleanCity_House1_EventScript_DescribeMarshBadge
	case 6, CeruleanCity_House1_EventScript_DescribeVolcanoBadge
	case 7, CeruleanCity_House1_EventScript_DescribeEarthBadge
	case 8, CeruleanCity_House1_EventScript_StopDescribingBadges
	case 127, CeruleanCity_House1_EventScript_StopDescribingBadges
	end

CeruleanCity_House1_EventScript_DescribeBoulderBadge::
	msgbox CeruleanCity_House1_Text_AttackStatFlash
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeCascadeBadge::
	msgbox CeruleanCity_House1_Text_ObeyLv30Cut
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeThunderBadge::
	msgbox CeruleanCity_House1_Text_SpeedStatFly
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeRainbowBadge::
	msgbox CeruleanCity_House1_Text_ObeyLv50Strength
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeSoulBadge::
	msgbox CeruleanCity_House1_Text_DefenseStatSurf
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeMarshBadge::
	msgbox CeruleanCity_House1_Text_ObeyLv70RockSmash
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeVolcanoBadge::
	msgbox CeruleanCity_House1_Text_SpStatsWaterfall
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeEarthBadge::
	msgbox CeruleanCity_House1_Text_AllMonsWillObeyYou
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_StopDescribingBadges::
	msgbox CeruleanCity_House1_Text_ComeVisitAnytime
	release
	end

CeruleanCity_House1_Text_BadgesHaveAmazingSecrets::
	.string "Nur sehr begabte Trainer tragen\n"
	.string "Pokémon-Orden.\p"
	.string "Wie ich sehe, bist du bereits\n"
	.string "Träger eines Ordens.\p"
	.string "Die Orden sind geheimnisumwoben!$"

CeruleanCity_House1_Text_DescribeWhichBadge::
	.string "Now then…\p"
	.string "Which of the eight Badges should\n"
	.string "I describe?$"

CeruleanCity_House1_Text_ComeVisitAnytime::
	.string "Besuche mich, wann immer du\n"
	.string "möchtest.$"

CeruleanCity_House1_Text_AttackStatFlash::
	.string "Die Angriffe deiner Pokémon\n"
	.string "werden ein wenig verstärkt.\p"
	.string "Außerdem kannst du jederzeit Blitz\n"
	.string "einsetzen.$"

CeruleanCity_House1_Text_ObeyLv30Cut::
	.string "Pokémon bis Level 30 folgen deinen\n"
	.string "Befehlen!\p"
	.string "Pokémon höherer Level gehorchen\n"
	.string "dir jedoch nicht!\p"
	.string "Ferner kannst du den Zerschneider\n"
	.string "außerhalb von Kämpfen nutzen!$"

CeruleanCity_House1_Text_SpeedStatFly::
	.string "Die Initiative deiner Pokémon\n"
	.string "nimmt zu.\p"
	.string "Des Weiteren ist es dir möglich,\n"
	.string "Fliegen außerhalb von Kämpfen\l"
	.string "einzusetzen.$"

CeruleanCity_House1_Text_ObeyLv50Strength::
	.string "Pokémon bis Level 50 folgen deinen\n"
	.string "Befehlen.\p"
	.string "Pokémon höherer Level gehorchen\n"
	.string "dir jedoch nicht!\p"
	.string "Zusätzlich kannst du außerhalb von\n"
	.string "Kämpfen Stärke einsetzen.$"

CeruleanCity_House1_Text_DefenseStatSurf::
	.string "Die Verteidigung deiner Pokémon\n"
	.string "wird verbessert.\p"
	.string "Ferner kannst du außerhalb von\n"
	.string "Kämpfen Surfer verwenden.$"

CeruleanCity_House1_Text_ObeyLv70RockSmash::
	.string "Pokémon bis Level 70 folgen deinen\n"
	.string "Befehlen.\p"
	.string "Das gilt auch für getauschte\n"
	.string "Pokémon!\p"
	.string "Pokémon höherer Level gehorchen\n"
	.string "dir jedoch nicht!\p"
	.string "Du kannst den Zerschmetterer\n"
	.string "nun auch außerhalb eines Kampfes\l"
	.string "anwenden.$"

CeruleanCity_House1_Text_SpStatsWaterfall::
	.string "Der SP. ANG.- und SP. Ver.-Wert\n"
	.string "deiner Pokémon steigt geringfügig.\p"
	.string "Du kannst die Attacke Kaskade\n"
	.string "außerhalb eines Kampfes anwenden.$"

CeruleanCity_House1_Text_AllMonsWillObeyYou::
	.string "Jegliches Pokémon gehorcht dir!$"

