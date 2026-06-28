CianwoodPokecenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CianwoodPokecenter_OnTransition
	.byte 0

CianwoodPokecenter_OnTransition::
	setrespawn HEAL_LOCATION_CIANWOOD_CITY_HNS
	end

CianwoodPokemoncenter_EventScript_Fisher::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_1, CianwoodPokemoncenter_EventScript_FisherNormal
	checkfieldmove FIELD_MOVE_SURF
	goto_if_eq VAR_RESULT, PARTY_SIZE, CianwoodPokemoncenter_EventScript_FisherGiveTentacool
CianwoodPokemoncenter_EventScript_FisherNormal::
	msgbox CianwoodPokemoncenter_Text_Fisher1, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodPokemoncenter_EventScript_FisherGiveTentacool::
	msgbox CianwoodPokemoncenter_Text_Fisher2, MSGBOX_DEFAULT
	@HnS gift pokemon setup
	@callnative DisableStaticRandomizer
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TENTACOOL
	bufferspeciesname STR_VAR_1, SPECIES_TENTACOOL
	givemon SPECIES_TENTACOOL, 25
	call Common_EventScript_GiftMon
	setflag FLAG_TEMP_1
	@callnative EnableStaticRandomizer
	closemessage
	release
	end

CianwoodPokemoncenter_Text_Fisher1:
	.string "Was Wasser-Pokémon angeht,\n"
	.string "ist Tentacha das beste,\l"
	.string "und zwar Seemeilenweit!$"

CianwoodPokemoncenter_Text_Fisher2:
	.string "Du scheinst ein Wasser-Pokémon\n"
	.string "zu brauchen.\p"
	.string "Hier, nimm dieses, ich habe genug.$"

CianwoodPokecenter_EventScript_Lass::
	lock
	faceplayer
	msgbox CianwoodCity_Text_PokecenterLass, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_PokecenterLass:
	.string "Hast du den POKéMANIAC getroffen?\p"
	.string "Er gibt immer mit seinen seltenen\n"
	.string "Pokémon an.$"


CianwoodGym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM, CianwoodGym_EventScript_GymGuideAfter
	msgbox CianwoodCity_Text_GymGuide, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodGym_EventScript_GymGuideAfter::
	msgbox CianwoodCity_Text_GymGuideWin, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_GymGuide:
	.string "Die Arena-Trainer hier sind\n"
	.string "richtige Machos.\p"
	.string "Wenn ich länger bleibe, könnten\n"
	.string "sie hinter mir her sein.\p"
	.string "Ein Tipp: Der Arena-Leiter nutzt\n"
	.string "Kampf-Pokémon.\p"
	.string "Bekämpfe ihn mit Psycho-Pokémon\p"
	.string "Besiege seine Pokémon, bevor sie\n"
	.string "ihre physischen Attacken nutzen.\p"
	.string "Und diese Felsen in der Arena?\p"
	.string "Wenn du sie falsch angreifst,\n"
	.string "kommst du nicht zum Arena-Leiter.\p"
	.string "Wenn du stecken bleibst, geh raus.$"

CianwoodCity_Text_GymGuideWin:
	.string "{PLAYER}! Du hast gewonnen!\n"
	.string "Man sieht es dir an!$"

CianwoodPokecenter_EventScript_Nerd::
	lock
	faceplayer
	msgbox CianwoodCity_Text_PokecenterSuperNerd, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_PokecenterSuperNerd:
	.string "Ich liebe es, meine Pokémon zu\n"
	.string "zeigen, die ich trainiert habe.\p"
	.string "Nicht wahr?\p"
	.string "Ich werde viele Kämpfe haben und\n"
	.string "meine Pokémon präsentieren!$"
