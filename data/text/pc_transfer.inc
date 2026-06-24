gText_PkmnTransferredSomeonesPC::
	.string "{STR_VAR_2} wurde auf JEMANDES PC\n"
	.string "übertragen.\p"
	.string "Es wurde in BOX\n"
	.string "“{STR_VAR_1}” abgelegt.$"

gText_PkmnTransferredLanettesPC::
	.string "{STR_VAR_2} wurde zu\n"
#if IS_FRLG
	.string "BILL'S PC gesendet.\p"
#else
	.string "LANETTE'S PC gesendet.\p"
#endif
	.string "Es wurde in\n"
	.string "BOX “{STR_VAR_1} abgelegt.”$"

gText_PkmnTransferredSomeonesPCBoxFull::
	.string "BOX “{STR_VAR_3}” in\n"
	.string "JEMANDES PC ist voll.\p"
	.string "{STR_VAR_2} wurde in BOX\n"
	.string "“{STR_VAR_1}” übertragen.$"

gText_PkmnTransferredLanettesPCBoxFull::
	.string "BOX “{STR_VAR_3}” auf\n"
#if IS_FRLG
	.string "BILL'S PC war voll.\p"
#else
	.string "LANETTE'S PC war voll.\p"
#endif
	.string "{STR_VAR_2} wurde zu\n"
	.string "BOX “{STR_VAR_1} transferiert.”$"

gText_PkmnSentToPCAfterCatch::
	.string "{STR_VAR_2} wurde zu\n"
	.string "{B_PC_CREATOR_NAME} PC.\p"
	.string "gesendet in \n"
	.string "BOX “{STR_VAR_1}”.$"

gText_PlayerObtainedTheMon::
	.string "{PLAYER} erhält\n"
	.string "das {STR_VAR_1}!$"

gText_NoMoreRoomForPokemon::
	.string "Kein Platz mehr für POKéMON!\p"
	.string "Die POKéMON BOXEN sind voll!$"

gText_NicknameThisPokemon::
	.string "Möchtest du dem {STR_VAR_1}\n"
	.string "einen Spitznamen geben?$"
