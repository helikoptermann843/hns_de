Route32_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route32_PokemonCenter_OnTransition	
	.byte 0

Route32_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_ROUTE_32_HNS
	end

Route32_PokemonCenter_EventScript_Lass::
	lock
	faceplayer
	msgbox Route32_Pokecenter_Text_CooltrainerF, MSGBOX_DEFAULT
	closemessage
	release
	end

Route32_PokemonCenter_EventScript_FishingGuru::
	lock
	faceplayer
	checkitem ITEM_OLD_ROD
	goto_if_eq VAR_RESULT, TRUE, Route32_PokemonCenter_EventScript_FishingGuru3
	msgbox Route32_Pokecenter_Text_FishingGuruQuestion, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route32_PokemonCenter_EventScript_FishingGuru2
	msgbox Route32_Pokecenter_Text_FishingGuruNo, MSGBOX_DEFAULT
	closemessage
	release
	end
Route32_PokemonCenter_EventScript_FishingGuru2::
	msgbox Route32_Pokecenter_Text_FishingGuruYes, MSGBOX_DEFAULT
	giveitem ITEM_OLD_ROD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox Route32_Pokecenter_Text_FishingGuruGiveRod, MSGBOX_DEFAULT
	closemessage
	release
	end
Route32_PokemonCenter_EventScript_FishingGuru3::
	msgbox Route32_Pokecenter_Text_FishingGuruAfter, MSGBOX_DEFAULT
	release
	end



Route32_Pokecenter_Text_FishingGuruQuestion:
	.string "Das ist ein hervorragender Ort\n"
	.string "zum Angeln.\p"
	.string "Hast du Leute beim Angeln gesehen?\p"
	.string "Wie steht es mit dir?\p"
	.string "Hättest du gerne eine ANGEL von mir?$"

Route32_Pokecenter_Text_FishingGuruYes:
	.string "He! Das höre ich wirklich gerne!\p"
	.string "Jetzt bist du auch ein Angler!$"

Route32_Pokecenter_Text_FishingGuruGiveRod:
	.string "Angeln ist toll!\p"
	.string "Probiere überall, wo Wasser ist,\n"
	.string "deine ANGEL aus; sei es am Meer\l"
	.string "oder an einem Fluss.$"

Route32_Pokecenter_Text_FishingGuruNo:
	.string "Na, das ist aber ziemlich mager…$"

Route32_Pokecenter_Text_FishingGuruAfter:
	.string "Moin, lüttes Ding. Und beißen sie?$"

Route32_Pokecenter_Text_CooltrainerF:
	.string "Was soll mein Pokémon tragen?\p"
	.string "Vielleicht ein Item, das seinen\n"
	.string "ANGR-Wert verstärkt…$"

