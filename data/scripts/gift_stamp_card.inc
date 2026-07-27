MysteryGiftScript_StampCard::
	setvaddress MysteryGiftScript_StampCard
	setorcopyvar VAR_RESULT, GET_MAX_STAMPS
	specialvar VAR_0x8008, GetMysteryGiftCardStat
	setorcopyvar VAR_RESULT, GET_NUM_STAMPS
	specialvar VAR_0x8009, GetMysteryGiftCardStat
	subvar VAR_0x8008, VAR_0x8009
	buffernumberstring STR_VAR_1, VAR_0x8008
	lock
	faceplayer
	vmessage sText_MysteryGiftStampCard
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftStampCard:
	.string "Danke, dass du das STEMPELKARTEn-\n"
	.string "System benutzt hast.\p"
	.string "Du musst noch {STR_VAR_1} sammeln, um\n"
	.string "deine STEMPELKARTE zu\l"
	.string "vervollständigen.$"
