Gate_GoldenrodCity_Route35_hns_MapScripts::
	.byte 0

Gate_GoldenrodCity_Route35_EventScript_Randy::
	lock
	faceplayer
	goto_if_eq VAR_KENYA, 3, Gate_GoldenrodCity_Route35_EventScript_RandyPostKenya
	goto_if_eq VAR_KENYA, 2, Gate_GoldenrodCity_Route35_EventScript_RandyDeliveredKenya
	goto_if_eq VAR_KENYA, 1, Gate_GoldenrodCity_Route35_EventScript_RandyHaveKenya
	msgbox Route35GoldenrodGate_Text_RandyAskFavor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, Gate_GoldenrodCity_Route35_EventScript_RandyCancel
	closemessage

	msgbox Route35GoldenrodGate_Text_RandyThanks, MSGBOX_DEFAULT

	@HnS named gift pokemon setup
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SPEAROW
	bufferspeciesname STR_VAR_1, SPECIES_SPEAROW
	givenamedmon 1
	call Common_EventScript_GiftMonNamed

	setvar VAR_KENYA, 1
	release
	end

Gate_GoldenrodCity_Route35_EventScript_RandyCancel::
	msgbox Route35GoldenrodGate_Text_RandyNeverMind, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_GoldenrodCity_Route35_EventScript_RandyHaveKenya::
	msgbox Route35GoldenrodGate_Text_RandyWeirdTree, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_GoldenrodCity_Route35_EventScript_RandyDeliveredKenya::
	msgbox Route35GoldenrodGate_Text_ThanksForDelivery, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_HP_UP
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox Route35GoldenrodGate_Text_RandyMyPalSnoozing, MSGBOX_DEFAULT
	closemessage
	setvar VAR_KENYA, 3
	release
	end

Gate_GoldenrodCity_Route35_EventScript_RandyPostKenya::
	msgbox Route35GoldenrodGate_Text_RandyMyPalSnoozing, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_GoldenrodCity_Route35_EventScript_Lady::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SUDOWOODO, Gate_GoldenrodCity_Route35_EventScript_Lady2
	msgbox Route35GoldenrodGate_Text_PokefanF_TreeBlocking, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_GoldenrodCity_Route35_EventScript_Lady2::
	msgbox Route35GoldenrodGate_Text_PokefanF_Lullaby, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_GoldenrodCity_Route35_EventScript_Fisher::
	lock
	faceplayer
	msgbox Route35GoldenrodGate_Text_Fisher, MSGBOX_DEFAULT
	closemessage
	release
	end

Route35GoldenrodGate_Text_RandyAskFavor:
	.string "Entschuldige, kleiner!\n"
	.string "kannst du mir einen Gefallen tun?\p"
	.string "Kannst du dieses Pokémon\n"
	.string "meinem Freund auf ROUTE 31 bringen?\p"
	.string "Du wirst ihn sofort erkennen!$"

Route35GoldenrodGate_Text_RandyThanks:
	.string "Das würdest du\n"
	.string "tun? Super! Vielen Dank!\p"
	.string "Mein Freund ist\n"
	.string "ein Flegel! Er schläft die ganze Zeit.\n"
	.string "\p"
	.string "Du wirst ihn sofort erkennen!$"

Route35GoldenrodGate_Text_ReceivedMonWithMail:
	.string "{PLAYER} hat ein Pokémon, das einen\p"
	.string "BRIEF trägt, erhalten.$"

Route35GoldenrodGate_Text_RandyWeirdTree:
	.string "Vergiss nicht es an die\n"
	.string "erste Stelle im Team zu tun,\n"
	.string "sobald du meinen Freund triffst!\p"
	.string "ROUTE 31!\p"
	.string "Stimmt! Ein\n"
	.string "merkwürdiger Baum hat die Straße\n"
	.string "blockiert.\p"
	.string "Ich frage mich,\n"
	.string "ob die Straße jetzt frei ist.$"

Route35GoldenrodGate_Text_CantCarryMoreMon:
	.string "Du kannst kein\n"
	.string "weiteres Pokémon mehr tragen…$"

Route35GoldenrodGate_Text_RandyNeverMind:
	.string "Oh… Dann geht das in Ordnung…$"

Route35GoldenrodGate_Text_ThanksForDelivery:
	.string "Danke, kleiner! Du hast die\n"
	.string "Nachricht für mich übergeben!\p"
	.string "Hier, eine Kleinigkeit für dich!$"

Route35GoldenrodGate_Text_RandyMyPalSnoozing:
	.string "Mein Freund hat\n"
	.string "geschlafen, nicht wahr? Na, was habe\l"
	.string "ich dir gesagt?$"

Route35GoldenrodGate_Text_PokefanF_TreeBlocking:
	.string "Ein merkwürdiger\n"
	.string "Baum blockiert die Straße.\p"
	.string "Er fängt an zu\n"
	.string "zappeln, wenn man ihn anspricht.\p"
	.string "Ich habe gehört,\n"
	.string "dass er rasend wurde, als ihn\p"
	.string "jemand mit Wasser\n"
	.string "aus einer SCHIGGYKANNE begossen hat.$"

Route35GoldenrodGate_Text_PokefanF_Lullaby:
	.string "Ich mag das schöne\n"
	.string "Kinderlied was sie im Radio spielen.$"

Route35GoldenrodGate_Text_Fisher:
	.string "Ich frage mich, wie viele Arten\p"
	.string "von Pokémon es wohl geben mag.\p"
	.string "Vor drei Jahren hat PROF. EICH\p"
	.string "verlautbart, dass\n"
	.string "es 150 verschiedene Arten geben soll.$"
