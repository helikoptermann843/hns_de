VermilionCity_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

VermilionCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_VERMILION_CITY
	end

VermilionCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

VermilionCity_PokemonCenter_1F_EventScript_Man::
	msgbox VermilionCity_PokemonCenter_1F_Text_PoisonedMonFaintedWhileWalking, MSGBOX_NPC
	end

VermilionCity_PokemonCenter_1F_EventScript_Hiker::
	msgbox VermilionCity_PokemonCenter_1F_Text_TrainerMonsStrongerThanWild, MSGBOX_NPC
	end

VermilionCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox VermilionCity_PokemonCenter_1F_Text_AllMonWeakToSpecificTypes, MSGBOX_NPC
	end

VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman::
	lock
	faceplayer
	goto_if_set FLAG_GOT_VS_SEEKER, VermilionCity_PokemonCenter_1F_EventScript_ExplainVSSeeker
	msgbox VermilionCity_PokemonCenter_1F_Text_UrgeToBattleSomeoneAgain
	setflag FLAG_GOT_VS_SEEKER
	giveitem ITEM_VS_SEEKER
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
	msgbox VermilionCity_PokemonCenter_1F_Text_UseDeviceForRematches
	release
	end

VermilionCity_PokemonCenter_1F_EventScript_ExplainVSSeeker::
	msgbox VermilionCity_PokemonCenter_1F_Text_ExplainVSSeeker
	release
	end

VermilionCity_PokemonCenter_1F_Text_TrainerMonsStrongerThanWild::
	.string "Die INITIATIVE deiner POKéMON\n"
	.string "nimmt zu.\p"
	.string "Des Weiteren ist es dir möglich,\n"
	.string "FLIEGEN außerhalb von Kämpfen\l"
	.string "einzusetzen.$"

VermilionCity_PokemonCenter_1F_Text_PoisonedMonFaintedWhileWalking::
	.string "Mein POKéMON wurde vergiftet!\n"
	.string "Das Gift hat es lange nach dem\l"
	.string "Kampf besiegt!$"

VermilionCity_PokemonCenter_1F_Text_AllMonWeakToSpecificTypes::
	.string "Es stimmt, dass ein POKéMON mit\n"
	.string "einem hohen Level sehr stark ist...\p"
	.string "Allerdings haben alle POKéMON\n"
	.string "Schwächen. Die richtige Attacke\l"
	.string "kann sie leicht besiegen!\p"
	.string "Daher gibt es kein Universal-\n"
	.string "POKéMON.$"

VermilionCity_PokemonCenter_1F_Text_UrgeToBattleSomeoneAgain::
	.string "Der Zwang erneut mit jemandem\n"
	.string "zu kämpfen…\p"
	.string "Hast du diesen Zwang je verspürt?\n"
	.string "Ich bin sicher, dass du hast!\p"
	.string "Gegen gewisse TRAINER wollte\n"
	.string "ich immer wieder antreten!\p"
	.string "Also hab ich dies weggegeben.\n"
	.string "Nimm bitte auch eines!$"

VermilionCity_PokemonCenter_1F_Text_UseDeviceForRematches::
	.string "Setze dieses Gerät ein und du\n"
	.string "findest TRAINER, die einen\l"
	.string "Rückkampf möchten.\l"
	.string "Du musst allerdings die Batterie\l"
	.string "aufladen, um es zu betreiben!$"

VermilionCity_PokemonCenter_1F_Text_ExplainVSSeeker::
	.string "Wie man den KAMPFFAHNDER einsetzt?\n"
	.string "Das ist einfach!\p"
	.string "Er macht biep, biep, biep und\n"
	.string "die TRAINER um dich herum\l"
	.string "werden darauf reagieren.\l"
	.string "Falls ein TRAINER einen\l"
	.string "Rückkampf möchte, wird er\l"
	.string "dir das zeigen.\l"
	.string "Lade die Batterie auf und setze\l"
	.string "ihn auf deinen Reisen ein.$"
