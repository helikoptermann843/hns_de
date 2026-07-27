FuchsiaCity_Mart_Frlg_MapScripts::
	.byte 0

FuchsiaCity_Mart_EventScript_CooltrainerF::
	msgbox FuchsiaCity_Mart_Text_DidYouTryXSpeed, MSGBOX_NPC
	end

FuchsiaCity_Mart_EventScript_Gentleman::
	msgbox FuchsiaCity_Mart_Text_DontTheyHaveSafariZonePennants, MSGBOX_NPC
	end

FuchsiaCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart FuchsiaCity_Mart_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
FuchsiaCity_Mart_Items::
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
	release
	end

FuchsiaCity_Mart_Text_DontTheyHaveSafariZonePennants::
	.string "Selbst wir können die eigenwilligen\n"
	.string "GEISTER nicht identifizieren!\p"
	.string "Man benötigt das SILPH SCOPE, um\n"
	.string "sie zu erkennen!$"

FuchsiaCity_Mart_Text_DidYouTryXSpeed::
	.string "Der POKéMON-TURM wurde im Andenken\n"
	.string "an verblichene POKéMON errichtet.$"

