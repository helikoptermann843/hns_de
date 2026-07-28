SixIsland_PatternBush_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PatternBush_OnTransition
	.byte 0

SixIsland_PatternBush_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_PATTERN_BUSH
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	call_if_ge VAR_TEMP_1, 50, SixIsland_PatternBush_EventScript_SetEscapeRightExit
	call_if_le VAR_TEMP_1, 49, SixIsland_PatternBush_EventScript_SetEscapeLeftExit
	end

SixIsland_PatternBush_EventScript_SetEscapeRightExit::
	setescapewarp MAP_SIX_ISLAND_GREEN_PATH, 255, 64, 10
	return

SixIsland_PatternBush_EventScript_SetEscapeLeftExit::
	setescapewarp MAP_SIX_ISLAND_GREEN_PATH, 255, 45, 10
	return

SixIsland_PatternBush_EventScript_Bethany::
	trainerbattle_single TRAINER_PKMN_BREEDER_BETHANY, SixIsland_PatternBush_Text_BethanyIntro, SixIsland_PatternBush_Text_BethanyDefeat
	msgbox SixIsland_PatternBush_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Allison::
	trainerbattle_single TRAINER_PKMN_BREEDER_ALLISON, SixIsland_PatternBush_Text_AllisonIntro, SixIsland_PatternBush_Text_AllisonDefeat
	msgbox SixIsland_PatternBush_Text_AllisonPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Garret::
	trainerbattle_single TRAINER_BUG_CATCHER_GARRET, SixIsland_PatternBush_Text_GarretIntro, SixIsland_PatternBush_Text_GarretDefeat
	msgbox SixIsland_PatternBush_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Jonah::
	trainerbattle_single TRAINER_BUG_CATCHER_JONAH, SixIsland_PatternBush_Text_JonahIntro, SixIsland_PatternBush_Text_JonahDefeat
	msgbox SixIsland_PatternBush_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Vance::
	trainerbattle_single TRAINER_BUG_CATCHER_VANCE, SixIsland_PatternBush_Text_VanceIntro, SixIsland_PatternBush_Text_VanceDefeat
	msgbox SixIsland_PatternBush_Text_VancePostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Nash::
	trainerbattle_single TRAINER_YOUNGSTER_NASH, SixIsland_PatternBush_Text_NashIntro, SixIsland_PatternBush_Text_NashDefeat
	msgbox SixIsland_PatternBush_Text_NashPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Cordell::
	trainerbattle_single TRAINER_YOUNGSTER_CORDELL, SixIsland_PatternBush_Text_CordellIntro, SixIsland_PatternBush_Text_CordellDefeat
	msgbox SixIsland_PatternBush_Text_CordellPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Dalia::
	trainerbattle_single TRAINER_LASS_DALIA, SixIsland_PatternBush_Text_DaliaIntro, SixIsland_PatternBush_Text_DaliaDefeat
	msgbox SixIsland_PatternBush_Text_DaliaPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Joana::
	trainerbattle_single TRAINER_LASS_JOANA, SixIsland_PatternBush_Text_JoanaIntro, SixIsland_PatternBush_Text_JoanaDefeat
	msgbox SixIsland_PatternBush_Text_JoanaPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Riley::
	trainerbattle_single TRAINER_CAMPER_RILEY, SixIsland_PatternBush_Text_RileyIntro, SixIsland_PatternBush_Text_RileyDefeat
	msgbox SixIsland_PatternBush_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Marcy::
	trainerbattle_single TRAINER_PICNICKER_MARCY, SixIsland_PatternBush_Text_MarcyIntro, SixIsland_PatternBush_Text_MarcyDefeat
	msgbox SixIsland_PatternBush_Text_MarcyPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Layton::
	trainerbattle_single TRAINER_RUIN_MANIAC_LAYTON, SixIsland_PatternBush_Text_LaytonIntro, SixIsland_PatternBush_Text_LaytonDefeat
	msgbox SixIsland_PatternBush_Text_LaytonPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_Text_BethanyIntro::
	.string "Ich bin neugierig, wie du deine\n"
	.string "Pokémon trainierst?$"

SixIsland_PatternBush_Text_BethanyDefeat::
	.string "Du trainierst deine Pokémon mit\n"
	.string "sehr viel Hingabe!$"

SixIsland_PatternBush_Text_BethanyPostBattle::
	.string "Wie deine Mutter dich mit Liebe\n"
	.string "aufgezogen hat, so sollst du deine\l"
	.string "Pokémon mit Liebe trainieren.$"

SixIsland_PatternBush_Text_AllisonIntro::
	.string "Ich arbeite, um die natürliche\n"
	.string "Ökologie der Pokémon hier\l"
	.string "zu bewahren.$"

SixIsland_PatternBush_Text_AllisonDefeat::
	.string "Oh, für dein Alter bist du wirklich\n"
	.string "überwältigend!$"

SixIsland_PatternBush_Text_AllisonPostBattle::
	.string "Ich sage nicht, dass du keine\n"
	.string "Pokémon fangen sollst.\p"
	.string "Ich möchte nur, dass die Menschen\n"
	.string "ihre Pokémon mit Verantwortungs-\l"
	.string "gefühl aufziehen.$"

SixIsland_PatternBush_Text_GarretIntro::
	.string "Ich habe ein Käfer-pokémon\n"
	.string "gefangen, das nur hier vorkommt.$"

SixIsland_PatternBush_Text_GarretDefeat::
	.string "Heheh…\n"
	.string "Ist mein Pokémon nicht toll?$"

SixIsland_PatternBush_Text_GarretPostBattle::
	.string "Neben dem Busch gibt es ein\n"
	.string "Mädchen, das Skaraborn\l"
	.string "für Trainer misst.$"

SixIsland_PatternBush_Text_JonahIntro::
	.string "Weißt du, wenn ich keine Käfer-\n"
	.string "Pokémon einsetze, fühle ich\l"
	.string "mich nicht wohl.$"

SixIsland_PatternBush_Text_JonahDefeat::
	.string "Ist in Ordnung! Niederlagen machen\n"
	.string "auch den Reiz von Pokémon aus.$"

SixIsland_PatternBush_Text_JonahPostBattle::
	.string "Apropos, “Reiz” ist ein\n"
	.string "merkwürdiges Wort, wenn man\l"
	.string "darüber nachdenkt.\p"
	.string "Wie, wie eine Orangenschale?\n"
	.string "Oder wie eine läutende Glocke?$"

SixIsland_PatternBush_Text_VanceIntro::
	.string "Ja, ja, ja!\n"
	.string "Sieh nur die vielen Käfer-pokémon!$"

SixIsland_PatternBush_Text_VanceDefeat::
	.string "Ich wurde besiegt, als ich noch\n"
	.string "feierte!$"

SixIsland_PatternBush_Text_VancePostBattle::
	.string "Beim nächsten Mal nehme ich\n"
	.string "meinen kleinen Bruder mit.$"

SixIsland_PatternBush_Text_NashIntro::
	.string "Sieh nur! Da sind lustige Muster\n"
	.string "am Boden.$"

SixIsland_PatternBush_Text_NashDefeat::
	.string "Supertoll!$"

SixIsland_PatternBush_Text_NashPostBattle::
	.string "Die komischen Muster auf dem\n"
	.string "Boden…\p"
	.string "Sie ähneln den Mustern auf der\n"
	.string "Kleidung meines Großvaters.$"

SixIsland_PatternBush_Text_CordellIntro::
	.string "Ich wette, du denkst, ich sei\n"
	.string "irgend so ein Kerl, oder?$"

SixIsland_PatternBush_Text_CordellDefeat::
	.string "Ich wette, du denkst, ich sei\n"
	.string "schwach, oder?$"

SixIsland_PatternBush_Text_CordellPostBattle::
	.string "Ihr Stadtmenschen kommt immer so\n"
	.string "hip daher mit euren trendy Hüten…\p"
	.string "Wie wärs, wenn du ihn mir gibst?$"

SixIsland_PatternBush_Text_DaliaIntro::
	.string "Nimm einen tiefen Atemzug.\n"
	.string "Ist die Luft nicht köstlich?$"

SixIsland_PatternBush_Text_DaliaDefeat::
	.string "Wenn du möchtest, kann ich dir\n"
	.string "beibringen, wie man richtig atmet.$"

SixIsland_PatternBush_Text_DaliaPostBattle::
	.string "Zunächst, ausatmen.\n"
	.string "Atme ganz tief aus.\p"
	.string "Wenn du nicht mehr ausatmen kannst,\n"
	.string "atme die saubere Luft ein!\p"
	.string "Ist das nicht erfrischend?$"

SixIsland_PatternBush_Text_JoanaIntro::
	.string "Ich liebe Käfer-pokémon!\n"
	.string "Deswegen bin ich immer hier.\p"
	.string "Bin ich das einzige Mädchen, das\n"
	.string "so denkt?$"

SixIsland_PatternBush_Text_JoanaDefeat::
	.string "Ich habe verloren, aber ich kann\n"
	.string "noch lachen! Bin ich das einzige\l"
	.string "Mädchen, welches das kann?$"

SixIsland_PatternBush_Text_JoanaPostBattle::
	.string "Ich werde weiterhin Käfer-pokémon\n"
	.string "fangen.\p"
	.string "Bin ich das einzige Mädchen, das\n"
	.string "dies so macht?$"

SixIsland_PatternBush_Text_RileyIntro::
	.string "Das ist ein guter Platz.\n"
	.string "Ich schlage hier mein Zelt auf.$"

SixIsland_PatternBush_Text_RileyDefeat::
	.string "Ausgeschaltet…$"

SixIsland_PatternBush_Text_RileyPostBattle::
	.string "Ich werde hier den Nachthimmel\n"
	.string "beobachten.$"

SixIsland_PatternBush_Text_MarcyIntro::
	.string "Oh, pfui!\p"
	.string "Ein Käfer hat mich gestochen!$"

SixIsland_PatternBush_Text_MarcyDefeat::
	.string "Es war kein Käfer. Ich habe mein\n"
	.string "Schienbein am Gras aufgeschnitten.$"

SixIsland_PatternBush_Text_MarcyPostBattle::
	.string "Ein kleiner Schnitt wie dieser…\n"
	.string "ist mit ein wenig Spucke geheilt.$"

SixIsland_PatternBush_Text_LaytonIntro::
	.string "Ist dir irgendetwas Merkwürdiges\n"
	.string "in dieser Gegend aufgefallen?$"

SixIsland_PatternBush_Text_LaytonDefeat::
	.string "Hast du den Boden neben deinen\n"
	.string "Füßen genau betrachtet?$"

SixIsland_PatternBush_Text_LaytonPostBattle::
	.string "Es gibt Stellen hier im\n"
	.string "Musterbusch, an denen\l"
	.string "kein Gras wächst.\l"
	.string "Was könnte die Ursache für\l"
	.string "solch ein Phänomen sein?$"

