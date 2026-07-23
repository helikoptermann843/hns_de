extern const u8 EventScript_FollowerIsShivering[];
extern const u8 EventScript_FollowerNostalgia[];
extern const u8 EventScript_FollowerHopping[];
extern const u8 EventScript_FollowerJumpOnPlayer[];
extern const u8 EventScript_FollowerCuddling[];
extern const u8 EventScript_FollowerShiverCuddling[];
extern const u8 EventScript_FollowerGetCloser[];
extern const u8 EventScript_FollowerPokingPlayer[];
extern const u8 EventScript_FollowerLookAround[];
extern const u8 EventScript_FollowerLookAway[];
extern const u8 EventScript_FollowerLookAwayBark[];
extern const u8 EventScript_FollowerLookAwayPoke[];
extern const u8 EventScript_FollowerPokeGround[];
extern const u8 EventScript_FollowerStartled[];
extern const u8 EventScript_FollowerFastHopping[];
extern const u8 EventScript_FollowerDizzy[];
extern const u8 EventScript_FollowerLookAroundScared[];
extern const u8 EventScript_FollowerDance[];
extern const u8 EventScript_FollowerLookUp[];

// 'Generic', unconditional happy messages
static const u8 sHappyMsg00[] = _("{STR_VAR_1} fing an, dich\nin den Bauch zu stoßen.");
static const u8 sHappyMsg01[] = _("{STR_VAR_1} ist glücklich, aber schüchtern.");
static const u8 sHappyMsg02[] = _("{STR_VAR_1} kommt fröhlich daher.");
static const u8 sHappyMsg03[] = _("{STR_VAR_1} ist gefasst.");
static const u8 sHappyMsg04[] = _("{STR_VAR_1} scheint sich dabei großartig\nzu fühlen, mit dir zu gehen!");
static const u8 sHappyMsg05[] = _("{STR_VAR_1} strahlt vor Gesundheit.");
static const u8 sHappyMsg06[] = _("{STR_VAR_1} sieht sehr glücklich aus.");
static const u8 sHappyMsg07[] = _("{STR_VAR_1} hat zusätzliche Anstrengungen unternommen.");
static const u8 sHappyMsg08[] = _("{STR_VAR_1} riecht die Düfte\nder Umgebungsluft.");
static const u8 sHappyMsg09[] = _("{STR_VAR_1} hüpft vor Freude!");
static const u8 sHappyMsg10[] = _("{STR_VAR_1} fühlt sich immer noch großartig!");
static const u8 sHappyMsg11[] = _("Dein POKéMON hat Rauchgeruch wahrgenommen.");
static const u8 sHappyMsg12[] = _("{STR_VAR_1} stochert in deinem Bauch herum.");
static const u8 sHappyMsg13[] = _("Dein POKéMON streckt seinen Körper aus und entspannt sich.");
static const u8 sHappyMsg14[] = _("{STR_VAR_1} sieht so aus, als ob es\nführen möchte!");
static const u8 sHappyMsg15[] = _("{STR_VAR_1} tut sein Bestes,\nmit dir Schritt zu halten.");
static const u8 sHappyMsg16[] = _("{STR_VAR_1} kuschelt sich glücklich\nan dich!");
static const u8 sHappyMsg17[] = _("{STR_VAR_1} ist voller Leben!");
static const u8 sHappyMsg18[] = _("{STR_VAR_1} scheint sehr glücklich zu sein!");
static const u8 sHappyMsg19[] = _("{STR_VAR_1} ist so glücklich, dass es\nnicht stillstehen kann!");
static const u8 sHappyMsg20[] = _("{STR_VAR_1} nickte langsam.");
static const u8 sHappyMsg21[] = _("{STR_VAR_1} ist sehr gespannt!");
static const u8 sHappyMsg22[] = _("{STR_VAR_1} wandert umher und\nlauscht den verschiedenen Geräuschen.");
static const u8 sHappyMsg23[] = _("{STR_VAR_1} sieht sehr interessiert aus.");
static const u8 sHappyMsg24[] = _("{STR_VAR_1} zwingt\nit sich irgendwie, weiterzumachen.");
static const u8 sHappyMsg25[] = _("{STR_VAR_1} hat dir einen entspannten\n Blick zugeworfen!");
static const u8 sHappyMsg26[] = _("{STR_VAR_1} schenkt dir einen glücklichen Blick\nund ein Lächeln.");
static const u8 sHappyMsg27[] = _("Dein POKéMON riecht den Duft\nvon Blumen.");
static const u8 sHappyMsg28[] = _("{STR_VAR_1} scheint sich sehr zu freuen, Sie zu sehen\n!");
static const u8 sHappyMsg29[] = _("{STR_VAR_1} blickte in diese Richtung und grinste.");
static const u8 sHappyMsg30[] = _("{STR_VAR_1} hat sich glücklich\nan dich gekuschelt!");
// Conditional messages begin here, index 31
static const u8 sHappyMsg31[] = _("Dein POKéMON scheint sich über das tolle Wetter zu freuen.");
static const u8 sHappyMsg32[] = _("{STR_VAR_1} ist sehr gefasst und\nselbstsicher!");

const struct FollowerMsgInfo gFollowerHappyMessages[] = {
    {sHappyMsg00, EventScript_FollowerPokingPlayer},
    {sHappyMsg01}, {sHappyMsg02}, {sHappyMsg03}, {sHappyMsg04}, {sHappyMsg05}, {sHappyMsg06}, {sHappyMsg07},
    {sHappyMsg08, EventScript_FollowerLookAround},
    {sHappyMsg09, EventScript_FollowerHopping},
    {sHappyMsg10}, {sHappyMsg11},
    {sHappyMsg12, EventScript_FollowerPokingPlayer},
    {sHappyMsg13, EventScript_FollowerLookAround},
    {sHappyMsg14}, {sHappyMsg15},
    {sHappyMsg16, EventScript_FollowerCuddling},
    {sHappyMsg17}, {sHappyMsg18},
    {sHappyMsg19, EventScript_FollowerFastHopping},
    {sHappyMsg20}, {sHappyMsg21}, {sHappyMsg22}, {sHappyMsg23}, {sHappyMsg24}, {sHappyMsg25}, {sHappyMsg26}, {sHappyMsg27}, {sHappyMsg28}, {sHappyMsg29},
    {sHappyMsg30, EventScript_FollowerCuddling},
    {sHappyMsg31}, {sHappyMsg32},
};

// Unconditional neutral messages
static const u8 sNeutralMsg00[] = _("{STR_VAR_1} stochert stetig\nauf dem Boden herum.");
static const u8 sNeutralMsg01[] = _("{STR_VAR_1} steht Wache.");
static const u8 sNeutralMsg02[] = _("{STR_VAR_1} starrt geduldig auf\nüberhaupt nichts.");
static const u8 sNeutralMsg03[] = _("{STR_VAR_1} wandert umher.");
static const u8 sNeutralMsg04[] = _("Dein POKéMON hat laut gegähnt!");
static const u8 sNeutralMsg05[] = _("Dein POKéMON schaut sich\nunruhig um.");
static const u8 sNeutralMsg06[] = _("{STR_VAR_1} schaut in diese Richtung und\nlächelt.");
static const u8 sNeutralMsg07[] = _("{STR_VAR_1} blickt\nunruhig umher.");
static const u8 sNeutralMsg08[] = _("{STR_VAR_1} stieß einen Schlachtruf aus.");
static const u8 sNeutralMsg09[] = _("{STR_VAR_1} hat einen wundervollen Tanz getanzt!");
static const u8 sNeutralMsg10[] = _("{STR_VAR_1} ist sehr gespannt.");
static const u8 sNeutralMsg11[] = _("{STR_VAR_1} starrt aufmerksam in die Ferne.");
static const u8 sNeutralMsg12[] = _("{STR_VAR_1} ist auf der Suche!");
static const u8 sNeutralMsg13[] = _("{STR_VAR_1} blickte in die\nFerne und bellte!");

const struct FollowerMsgInfo gFollowerNeutralMessages[] = {
    {sNeutralMsg00, EventScript_FollowerPokeGround},
    {sNeutralMsg01},
    {sNeutralMsg02, EventScript_FollowerLookAway},
    {sNeutralMsg03, EventScript_FollowerLookAround},
    {sNeutralMsg04},
    {sNeutralMsg05, EventScript_FollowerLookAround},
    {sNeutralMsg06}, {sNeutralMsg07}, {sNeutralMsg08},
    {sNeutralMsg09, EventScript_FollowerDance},
    {sNeutralMsg10},
    {sNeutralMsg11, EventScript_FollowerLookAway},
    {sNeutralMsg12},
    {sNeutralMsg13, EventScript_FollowerLookAwayBark},
};

// Unconditional sad messages
static const u8 sSadMsg00[] = _("{STR_VAR_1} ist schwindelig.");
static const u8 sSadMsg01[] = _("{STR_VAR_1} tritt dir\nauf die Füße!");
static const u8 sSadMsg02[] = _("{STR_VAR_1} scheint etwas müde zu sein.");
// Conditional messages begin, index 3
static const u8 sSadMsg03[] = _("{STR_VAR_1} ist nicht zufrieden.");
static const u8 sSadMsg04[] = _("{STR_VAR_1} wird herunterfallen!\n");
static const u8 sSadMsg05[] = _("{STR_VAR_1} scheint gleich\numzufallen!");
static const u8 sSadMsg06[] = _("{STR_VAR_1} gibt sich große Mühe,\nmit dir Schritt zu halten ...");
static const u8 sSadMsg07[] = _("{STR_VAR_1} ist nervös.");

const struct FollowerMsgInfo gFollowerSadMessages[] = {
    {sSadMsg00, EventScript_FollowerDizzy},
    {sSadMsg01}, {sSadMsg02},
    {sSadMsg03}, {sSadMsg04}, {sSadMsg05}, {sSadMsg06}, {sSadMsg07},
};

// Unconditional upset messages
static const u8 sUpsetMsg00[] = _("{STR_VAR_1} scheint irgendwie unglücklich zu sein ...");
static const u8 sUpsetMsg01[] = _("{STR_VAR_1} macht ein unglückliches\nGesicht.");
static const u8 sUpsetMsg02[] = _("…Deinem POKéMON scheint ein wenig\nkalt zu sein.");
// Conditional messages, index 3
static const u8 sUpsetMsg03[] = _("{STR_VAR_1} sucht im\nGras Schutz vor dem Regen.");

const struct FollowerMsgInfo gFollowerUpsetMessages[] = {
    {sUpsetMsg00}, {sUpsetMsg01},
    {sUpsetMsg02, EventScript_FollowerIsShivering},
    {sUpsetMsg03},
};

// Unconditional angry messages
static const u8 sAngryMsg00[] = _("{STR_VAR_1} stieß ein Brüllen aus!");
static const u8 sAngryMsg01[] = _("{STR_VAR_1} macht ein Gesicht, als wäre es wütend!");
static const u8 sAngryMsg02[] = _("{STR_VAR_1} scheint aus irgendeinem Grund wütend zu sein.");
static const u8 sAngryMsg03[] = _("Dein POKéMON drehte sich in die andere Richtung und zeigte ein trotziges Gesicht.");
static const u8 sAngryMsg04[] = _("{STR_VAR_1} schrie.");

const struct FollowerMsgInfo gFollowerAngryMessages[] = {
    {sAngryMsg00}, {sAngryMsg01}, {sAngryMsg02},
    {sAngryMsg03, EventScript_FollowerLookAway},
    {sAngryMsg04},
};

// Unconditional pensive messages
static const u8 sPensiveMsg00[] = _("{STR_VAR_1} schaut\nbeständig nach unten.");
static const u8 sPensiveMsg01[] = _("{STR_VAR_1} untersucht das Gebiet.");
static const u8 sPensiveMsg02[] = _("{STR_VAR_1} späht nach unten.");
static const u8 sPensiveMsg03[] = _("{STR_VAR_1} kämpft irgendwie gegen\nden Schlaf an ...");
static const u8 sPensiveMsg04[] = _("{STR_VAR_1} scheint herumzuwandern\n.");
static const u8 sPensiveMsg05[] = _("{STR_VAR_1} schaut sich geistesabwesend um.");
static const u8 sPensiveMsg06[] = _("{STR_VAR_1} gähnte sehr laut!");
static const u8 sPensiveMsg07[] = _("{STR_VAR_1} entspannt sich gemütlich.");
static const u8 sPensiveMsg08[] = _("{STR_VAR_1} starrt dir unverwandt ins Gesicht.");
static const u8 sPensiveMsg09[] = _("{STR_VAR_1} starrt aufmerksam auf Ihr Gesicht.");
static const u8 sPensiveMsg10[] = _("{STR_VAR_1} richtet seine\nAufmerksamkeit auf dich.");
static const u8 sPensiveMsg11[] = _("{STR_VAR_1} starrt in die\nTiefen.");
static const u8 sPensiveMsg12[] = _("{STR_VAR_1} schnüffelt am\nBoden.");
static const u8 sPensiveMsg13[] = _("Dein POKéMON starrt aufmerksam ins Nichts.");
static const u8 sPensiveMsg14[] = _("{STR_VAR_1} konzentrierte sich mit scharfem\nBlick!");
static const u8 sPensiveMsg15[] = _("{STR_VAR_1} konzentriert sich.");
static const u8 sPensiveMsg16[] = _("{STR_VAR_1} blickte in diese Richtung und\nnickte.");
static const u8 sPensiveMsg17[] = _("{STR_VAR_1} scheint etwas nervös zu sein ...");
static const u8 sPensiveMsg18[] = _("{STR_VAR_1} schaut sich deine\nFußabdrücke an.");
static const u8 sPensiveMsg19[] = _("{STR_VAR_1} starrt dir direkt in die Augen.");

const struct FollowerMsgInfo gFollowerPensiveMessages[] = {
    {sPensiveMsg00},
    {sPensiveMsg01, EventScript_FollowerLookAround},
    {sPensiveMsg02}, {sPensiveMsg03}, {sPensiveMsg04},
    {sPensiveMsg05, EventScript_FollowerLookAround},
    {sPensiveMsg06}, {sPensiveMsg07}, {sPensiveMsg08}, {sPensiveMsg09}, {sPensiveMsg10},
    {sPensiveMsg11, EventScript_FollowerLookAway},
    {sPensiveMsg12, EventScript_FollowerPokeGround},
    {sPensiveMsg13, EventScript_FollowerLookAway},
    {sPensiveMsg14}, {sPensiveMsg15}, {sPensiveMsg16}, {sPensiveMsg17}, {sPensiveMsg18}, {sPensiveMsg19},
};

// All 'love' messages are unconditional
static const u8 sLoveMsg00[] = _("{STR_VAR_1} begann plötzlich\nnäher zu gehen!");
static const u8 sLoveMsg01[] = _("{STR_VAR_1} Wangen werden\nrosig!");
static const u8 sLoveMsg02[] = _("Woah! ");
static const u8 sLoveMsg03[] = _("Woah! ");
static const u8 sLoveMsg04[] = _("{STR_VAR_1} schmiegt sich an\ndein Beine!");
static const u8 sLoveMsg05[] = _("{STR_VAR_1} errötet.");
static const u8 sLoveMsg06[] = _("Ah! ");
static const u8 sLoveMsg07[] = _("{STR_VAR_1} betrachtet dich mit\nVerehrung!");
static const u8 sLoveMsg08[] = _("{STR_VAR_1} ist dir näher gekommen.");
static const u8 sLoveMsg09[] = _("{STR_VAR_1} bleibt dicht an deinen\nFüßen.");

const struct FollowerMsgInfo gFollowerLoveMessages[] = {
    {sLoveMsg00, EventScript_FollowerGetCloser},
    {sLoveMsg01},
    {sLoveMsg02, EventScript_FollowerCuddling},
    {sLoveMsg03},
    {sLoveMsg04, EventScript_FollowerCuddling},
    {sLoveMsg05},
    {sLoveMsg06, EventScript_FollowerCuddling},
    {sLoveMsg07},
    {sLoveMsg08, EventScript_FollowerGetCloser},
    {sLoveMsg09},
};

// Unconditional surprised messages
static const u8 sSurpriseMsg00[] = _("{STR_VAR_1} droht hinzufallen!");
static const u8 sSurpriseMsg01[] = _("{STR_VAR_1} will dich umarmen!");
static const u8 sSurpriseMsg02[] = _("{STR_VAR_1} scheint noch nicht\nfür seinen eigenen Namen verwendet zu werden.");
static const u8 sSurpriseMsg03[] = _("{STR_VAR_1} späht nach unten.");
static const u8 sSurpriseMsg04[] = _("Dein POKéMON ist gestolpert und\nfast gefallen!");
static const u8 sSurpriseMsg05[] = _("{STR_VAR_1} spürt etwas und\nheult!");
static const u8 sSurpriseMsg06[] = _("{STR_VAR_1} scheint erfrischt zu sein!");
static const u8 sSurpriseMsg07[] = _("{STR_VAR_1} drehte sich plötzlich um\nund fing an zu bellen!");
static const u8 sSurpriseMsg08[] = _("{STR_VAR_1} drehte sich plötzlich um!");
static const u8 sSurpriseMsg09[] = _("Dein POKéMON war überrascht, dass du\nplötzlich mit ihm gesprochen hast!");
static const u8 sSurpriseMsg10[] = _("Schnüffel, schnüffel, irgendetwas riecht wirklich\ngut!");
static const u8 sSurpriseMsg11[] = _("{STR_VAR_1} fühlt sich erfrischt.");
static const u8 sSurpriseMsg12[] = _("{STR_VAR_1} wackelt und scheint\nfast umzukippen.");
static const u8 sSurpriseMsg13[] = _("{STR_VAR_1} droht hinzufallen\n.");
static const u8 sSurpriseMsg14[] = _("{STR_VAR_1} geht\nvorsichtig weiter.");
static const u8 sSurpriseMsg15[] = _("{STR_VAR_1} wird vor\nnervöser Energie angespannt.");
static const u8 sSurpriseMsg16[] = _("{STR_VAR_1} spürte etwas Seltsames\nund war überrascht!");
static const u8 sSurpriseMsg17[] = _("{STR_VAR_1} hat Angst und kuschelt sich\nan dich!");
static const u8 sSurpriseMsg18[] = _("{STR_VAR_1} verspürt eine ungewöhnliche\nPräsenz…");
static const u8 sSurpriseMsg19[] = _("{STR_VAR_1} wird vor\nnervöser Energie angespannt.");
// Conditional messages, index 20
static const u8 sSurpriseMsg20[] = _("{STR_VAR_1} scheint sehr\nüberrascht zu sein, dass es regnet!");

const struct FollowerMsgInfo gFollowerSurpriseMessages[] = {
    {sSurpriseMsg00},
    {sSurpriseMsg01, EventScript_FollowerPokingPlayer},
    {sSurpriseMsg02}, {sSurpriseMsg03}, {sSurpriseMsg04}, {sSurpriseMsg05}, {sSurpriseMsg06},
    {sSurpriseMsg07, EventScript_FollowerLookAwayBark},
    {sSurpriseMsg08, EventScript_FollowerLookAway},
    {sSurpriseMsg09},
    {sSurpriseMsg10, EventScript_FollowerLookAround},
    {sSurpriseMsg11}, {sSurpriseMsg12}, {sSurpriseMsg13}, {sSurpriseMsg14}, {sSurpriseMsg15}, {sSurpriseMsg16},
    {sSurpriseMsg17, EventScript_FollowerCuddling},
    {sSurpriseMsg18},
    {sSurpriseMsg19, EventScript_FollowerLookAround},
    {sSurpriseMsg20},
};

// Unconditional curious messages
static const u8 sCuriousMsg00[] = _("Dein POKéMON sucht\nunruhig nach etwas.");
static const u8 sCuriousMsg01[] = _("Dein POKéMON hat nicht aufgepasst,\nund läuft in deine Arme!");
static const u8 sCuriousMsg02[] = _("Schnüffel, schnüffel! ");
static const u8 sCuriousMsg03[] = _("{STR_VAR_1} spielt mit einem Kieselstein.");
static const u8 sCuriousMsg04[] = _("{STR_VAR_1} wandert umher und\nsucht nach etwas.");
static const u8 sCuriousMsg05[] = _("{STR_VAR_1} beschnüffelt dich.");
static const u8 sCuriousMsg06[] = _("{STR_VAR_1} scheint etwas\nzögerlich zu sein ...");

const struct FollowerMsgInfo gFollowerCuriousMessages[] = {
    {sCuriousMsg00, EventScript_FollowerLookAround},
    {sCuriousMsg01, EventScript_FollowerPokingPlayer},
    {sCuriousMsg02}, {sCuriousMsg03},
    {sCuriousMsg04, EventScript_FollowerLookAround},
    {sCuriousMsg05}, {sCuriousMsg06},
};

// Unconditional music messages
static const u8 sMusicMsg00[] = _("{STR_VAR_1} zeigt seine\nAgilität!");
static const u8 sMusicMsg01[] = _("{STR_VAR_1} bewegt sich fröhlich umher!");
static const u8 sMusicMsg02[] = _("Woah! {STR_VAR_1} fängt\nan zu tanzen!");
static const u8 sMusicMsg03[] = _("{STR_VAR_1} hält\nbeständig mit Ihnen Schritt!");
static const u8 sMusicMsg04[] = _("{STR_VAR_1} scheint\nmit dir spielen zu wollen.");
static const u8 sMusicMsg05[] = _("{STR_VAR_1} hüpft gerne herum.");
static const u8 sMusicMsg06[] = _("{STR_VAR_1} singt und summt.");
static const u8 sMusicMsg07[] = _("{STR_VAR_1} liegt dir zu Füßen!");
static const u8 sMusicMsg08[] = _("{STR_VAR_1} dreht sich um und sieht dich an.");
static const u8 sMusicMsg09[] = _("{STR_VAR_1} arbeitet hart daran, seine mächtige Macht zur Schau zu stellen!");
static const u8 sMusicMsg10[] = _("Wow!");
static const u8 sMusicMsg11[] = _("{STR_VAR_1} ist fröhlich!");
static const u8 sMusicMsg12[] = _("{STR_VAR_1} hüpft\nsorglos herum!");
static const u8 sMusicMsg13[] = _("Dein POKéMON scheint einen nostalgisch\nvertrauten Geruch zu riechen ...");
// Conditional music messages, index 14
static const u8 sMusicMsg14[] = _("{STR_VAR_1} freut sich sehr über den\nRegen.");

const struct FollowerMsgInfo gFollowerMusicMessages[] = {
    {sMusicMsg00, EventScript_FollowerLookAround},
    {sMusicMsg01},
    {sMusicMsg02, EventScript_FollowerDance},
    {sMusicMsg03},
    {sMusicMsg04, EventScript_FollowerHopping},
    {sMusicMsg05, EventScript_FollowerHopping},
    {sMusicMsg06}, {sMusicMsg07}, {sMusicMsg08}, {sMusicMsg09},
    {sMusicMsg10, EventScript_FollowerDance},
    {sMusicMsg11},
    {sMusicMsg12, EventScript_FollowerHopping},
    {sMusicMsg13, EventScript_FollowerNostalgia},
    {sMusicMsg14}
};


static const u8 sPoisonedMsg00[] = _("{STR_VAR_1} zittert vor\nden Folgen einer Vergiftung.");

const struct FollowerMsgInfo gFollowerPoisonedMessages[] = {
    {sPoisonedMsg00, EventScript_FollowerIsShivering},
};
