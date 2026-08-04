NewSinjoh_PokemonCenter_hns_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, NewSinjoh_PokemonCenter_OnTransition
    .byte 0

NewSinjoh_PokemonCenter_OnTransition: 
    setrespawn HEAL_LOCATION_NEW_SINJOH_HNS
    end

NewSinjoh_EventScript_Artist::
	lock
	faceplayer
	goto_if_set FLAG_NEWSINJOH_POKEMONCENTER_ARTIST_GIFT, NewSinjoh_EventScript_ZoomLens_Gotten
	msgbox NewSinjoh_Text_Artist, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, NewSinjoh_EventScript_ZoomLens_No
	msgbox Text_ItemGiveaway, MSGBOX_DEFAULT
	giveitem ITEM_ZOOM_LENS
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	setflag FLAG_NEWSINJOH_POKEMONCENTER_ARTIST_GIFT
	release
	end

NewSinjoh_Text_Artist:
	.string "Dieses versteckte Dorf hat mich\n"
	.string "sehr inspiriert!\p"
	.string "Findest du die Landschaft nicht\n"
	.string "auch atemberaubend?$"

Text_ItemGiveaway:
	.string "Verstehe!\n"
	.string "Du bist sicher auch ein Künstler!\p"
	.string "Ich habe zufällig noch etwas übrig,\n"
	.string "das dir hilft, die kleinen Details\l"
	.string "des Lebens zu erkennen!$"

NewSinjoh_Text_Artist_No:
	.string "Du bist doch nicht etwa einer\n"
	.string "dieser Touristen-Hasser?\p"
	.string "Schönheit ist dazu da, geteilt zu\n"
	.string "werden.$"

NewSinjoh_EventScript_ZoomLens_No::
	msgbox NewSinjoh_Text_Artist_No, MSGBOX_DEFAULT
	release
	end

NewSinjoh_EventScript_ZoomLens_Gotten::
	msgbox Text_WasGiven_ZoomLensAlready, MSGBOX_DEFAULT
	release
	end

Text_WasGiven_ZoomLensAlready:
	.string "Viel Freude mit der Zoomlinse!$"

NewSinjoh_EventScript_FemAce::
	msgbox NewSinjoh_Text_FemAce, MSGBOX_NPC
	end

NewSinjoh_Text_FemAce:
	.string "In Neu-Sinjoh haben wir nicht viele\n"
	.string "moderne Annehmlichkeiten.\p"
	.string "Aber wenigstens haben wir dieses\n"
	.string "Pokémon-Center.$"
