MysteryGiftScript_AlteringCave::
	setvaddress MysteryGiftScript_AlteringCave
	addvar VAR_ALTERING_CAVE_WILD_SET, 1
	vgoto_if_ne VAR_ALTERING_CAVE_WILD_SET, (NUM_ALTERING_CAVE_TABLES + 1), MysteryGiftScript_AlteringCave_
	setvar VAR_ALTERING_CAVE_WILD_SET, 0
MysteryGiftScript_AlteringCave_:
	lock
	faceplayer
	vmessage sText_MysteryGiftAlteringCave
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftAlteringCave:
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast!\p"
	.string "In letzter Zeit gab es Gerüchte,\n"
	.string "dass seltene POKéMON\l"
	.string "plötzlich auftauchen.\p"
	.string "Die Gerüchte beziehen sich auf\n"
	.string "die WANDELHÖHLE an der Route 103.\p"
	.string "Warum schaust du dich dort nicht\n"
	.string "ein wenig um?$"
