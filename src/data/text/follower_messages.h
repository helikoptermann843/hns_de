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
static const u8 sHappyMsg00[] = _("{STR_VAR_1} stupst dich\nin den Magen.");
static const u8 sHappyMsg01[] = _("{STR_VAR_1} ist ganz\nverlegen vor Freude.");
static const u8 sHappyMsg02[] = _("{STR_VAR_1} zuckelt gut\ngelaunt hinter dir her!");
static const u8 sHappyMsg03[] = _("{STR_VAR_1} lässt sich\nnicht aus der Ruhe bringen!");
static const u8 sHappyMsg04[] = _("{STR_VAR_1} zuckelt\ngemütlich hinter dir her.");
static const u8 sHappyMsg05[] = _("{STR_VAR_1} strotzt\nvor Energie!");
static const u8 sHappyMsg06[] = _("Das Gesicht von {STR_VAR_1}\nstrahlt vor Freude!");
static const u8 sHappyMsg07[] = _("{STR_VAR_1} dreht noch\neinmal extra auf!");
static const u8 sHappyMsg08[] = _("{STR_VAR_1} schnüffelt\nin der Gegend herum.");
static const u8 sHappyMsg09[] = _("{STR_VAR_1} vollführt ein\nTänzchen vor Freude!");
static const u8 sHappyMsg10[] = _("{STR_VAR_1} ist noch immer\näußerst energiegeladen.");
static const u8 sHappyMsg11[] = _("Es schnüffelt den Rauchgeruch.");
static const u8 sHappyMsg12[] = _("{STR_VAR_1} trommelt auf\nseinem Bauch.");
static const u8 sHappyMsg13[] = _("Streckt sich lang\nund macht ein Päuschen.");
static const u8 sHappyMsg14[] = _("{STR_VAR_1} scheint es\nnicht schnell genug zu gehen!");
static const u8 sHappyMsg15[] = _("{STR_VAR_1} versucht mit ganzer\nKraft, mit dir Schritt zu halten.");
static const u8 sHappyMsg16[] = _("{STR_VAR_1} schmiegt sich\nglücklich an dich!");
static const u8 sHappyMsg17[] = _("{STR_VAR_1} ist voller Leben!");
static const u8 sHappyMsg18[] = _("{STR_VAR_1} scheint\nsehr glücklich zu sein!");
static const u8 sHappyMsg19[] = _("{STR_VAR_1} ist so glücklich, dass es\nnicht stillstehen kann!");
static const u8 sHappyMsg20[] = _("{STR_VAR_1} nickt bedächtig.");
static const u8 sHappyMsg21[] = _("{STR_VAR_1} ist hochmotiviert!");
static const u8 sHappyMsg22[] = _("{STR_VAR_1} verfolgt unruhig all die\nverschiedenen Geräusche.");
static const u8 sHappyMsg23[] = _("{STR_VAR_1} brennt vor Interesse.");
static const u8 sHappyMsg24[] = _("{STR_VAR_1} hält mit Ach und\nKrach Schritt mit dir.");
static const u8 sHappyMsg25[] = _("{STR_VAR_1} begrüßt\ndich hocherfreut!");
static const u8 sHappyMsg26[] = _("{STR_VAR_1} begrüßt dich\nmit einem Lächeln!");
static const u8 sHappyMsg27[] = _("Es beschnüffelt die Blumen.");
static const u8 sHappyMsg28[] = _("{STR_VAR_1} begrüßt\ndich überglücklich!");
static const u8 sHappyMsg29[] = _("{STR_VAR_1} sieht zu dir herüber\nund streckt die Zunge heraus!");
static const u8 sHappyMsg30[] = _("{STR_VAR_1} schmiegt sich\nglücklich an dich!");
// Conditional messages begin here, index 31
static const u8 sHappyMsg31[] = _("Es freut sich über\ndas schöne Wetter!");
static const u8 sHappyMsg32[] = _("{STR_VAR_1} lässt sich\nnicht aus der Ruhe bringen!");

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
static const u8 sNeutralMsg00[] = _("{STR_VAR_1} pickt beharrlich\nauf dem Boden herum.");
static const u8 sNeutralMsg01[] = _("{STR_VAR_1} hält Wache.");
static const u8 sNeutralMsg02[] = _("{STR_VAR_1} schaut Löcher\nin die Luft.");
static const u8 sNeutralMsg03[] = _("{STR_VAR_1} weiß nicht, wohin es\nzuerst blicken soll.");
static const u8 sNeutralMsg04[] = _("Es gähnt einmal ausgiebig!");
static const u8 sNeutralMsg05[] = _("Es schaut hektisch in alle Richtungen.");
static const u8 sNeutralMsg06[] = _("{STR_VAR_1} schaut zu dir\nherüber und lächelt dir zu.");
static const u8 sNeutralMsg07[] = _("{STR_VAR_1} schaut\nhektisch in alle Richtungen.");
static const u8 sNeutralMsg08[] = _("{STR_VAR_1} stößt einen\nKampfschrei aus!");
static const u8 sNeutralMsg09[] = _("{STR_VAR_1} gibt eine vollendete\nTanzeinlage zum Besten!");
static const u8 sNeutralMsg10[] = _("{STR_VAR_1} ist hochmotiviert!");
static const u8 sNeutralMsg11[] = _("{STR_VAR_1} hat den Blick\nstarr in weite Ferne gerichtet.");
static const u8 sNeutralMsg12[] = _("{STR_VAR_1} hält Wache.");
static const u8 sNeutralMsg13[] = _("{STR_VAR_1} bellt irgendetwas\nin der Ferne an!");

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
static const u8 sSadMsg00[] = _("{STR_VAR_1} ist schwindlig!");
static const u8 sSadMsg01[] = _("{STR_VAR_1} tritt dir\nauf die Füße!");
static const u8 sSadMsg02[] = _("{STR_VAR_1} scheint ein\nwenig aus der Puste zu sein.");
// Conditional messages begin, index 3
static const u8 sSadMsg03[] = _("{STR_VAR_1} ist nicht zufrieden.");
static const u8 sSadMsg04[] = _("{STR_VAR_1} wird herunterfallen!\n");
static const u8 sSadMsg05[] = _("{STR_VAR_1} ist immer noch\nkurz vorm Umkippen.");
static const u8 sSadMsg06[] = _("{STR_VAR_1} gibt sein Bestes,\num mit dir mitzuhalten...");
static const u8 sSadMsg07[] = _("{STR_VAR_1} ist nervös.");

const struct FollowerMsgInfo gFollowerSadMessages[] = {
    {sSadMsg00, EventScript_FollowerDizzy},
    {sSadMsg01}, {sSadMsg02},
    {sSadMsg03}, {sSadMsg04}, {sSadMsg05}, {sSadMsg06}, {sSadMsg07},
};

// Unconditional upset messages
static const u8 sUpsetMsg00[] = _("{STR_VAR_1} zieht ein brummiges\nGesicht.");
static const u8 sUpsetMsg01[] = _("{STR_VAR_1} scheint irgendwie\nunglücklich zu sein...");
static const u8 sUpsetMsg02[] = _("...\nIhm fröstelt ein wenig.");
// Conditional messages, index 3
static const u8 sUpsetMsg03[] = _("{STR_VAR_1} verkriecht sich im\nDickicht vor dem Regen.");

const struct FollowerMsgInfo gFollowerUpsetMessages[] = {
    {sUpsetMsg00}, {sUpsetMsg01},
    {sUpsetMsg02, EventScript_FollowerIsShivering},
    {sUpsetMsg03},
};

// Unconditional angry messages
static const u8 sAngryMsg00[] = _("{STR_VAR_1} knurrt laut!");
static const u8 sAngryMsg01[] = _("{STR_VAR_1} zieht ein grimmiges\nGesicht und knurrt!");
static const u8 sAngryMsg02[] = _("{STR_VAR_1} scheint wegen\nirgendetwas verärgert zu sein!");
static const u8 sAngryMsg03[] = _("Es wendet sich\nverdrossen zur Seite...");
static const u8 sAngryMsg04[] = _("{STR_VAR_1} jault los!");

const struct FollowerMsgInfo gFollowerAngryMessages[] = {
    {sAngryMsg00}, {sAngryMsg01}, {sAngryMsg02},
    {sAngryMsg03, EventScript_FollowerLookAway},
    {sAngryMsg04},
};

// Unconditional pensive messages
static const u8 sPensiveMsg00[] = _("{STR_VAR_1} sitzt ganz still\nund starrt nach unten.");
static const u8 sPensiveMsg01[] = _("{STR_VAR_1} lässt seinen Blick\numherschweifen.");
static const u8 sPensiveMsg02[] = _("{STR_VAR_1} steht wie angewurzelt\nda und blickt nach unten.");
static const u8 sPensiveMsg03[] = _("{STR_VAR_1} ringt mit mäßigem\nErfolg mit dem Schlaf...");
static const u8 sPensiveMsg04[] = _("{STR_VAR_1} weiß nicht, wohin es\nzuerst blicken soll.");
static const u8 sPensiveMsg05[] = _("{STR_VAR_1} starrt leicht\nrammdösig um sich.");
static const u8 sPensiveMsg06[] = _("{STR_VAR_1} gähnt ausgiebig.");
static const u8 sPensiveMsg07[] = _("{STR_VAR_1} lässt gerade einfach\nmal die Seele baumeln.");
static const u8 sPensiveMsg08[] = _("{STR_VAR_1} starrt regungslos in\ndein Gesicht.");
static const u8 sPensiveMsg09[] = _("{STR_VAR_1} starrt regungslos\ndir ins Gesicht.");
static const u8 sPensiveMsg10[] = _("{STR_VAR_1} starrt dich an.");
static const u8 sPensiveMsg11[] = _("{STR_VAR_1} starrt in die Tiefe...");
static const u8 sPensiveMsg12[] = _("{STR_VAR_1} nimmt eine\nWitterung am Boden auf.");
static const u8 sPensiveMsg13[] = _("Es starrt gespannt auf eine Stelle\n...aber da ist gar nichts.");
static const u8 sPensiveMsg14[] = _("{STR_VAR_1} schaut mit\nscharfem Blick.");
static const u8 sPensiveMsg15[] = _("{STR_VAR_1} konzentriert sich...");
static const u8 sPensiveMsg16[] = _("{STR_VAR_1} schaut zu dir\nherüber und nickt dir zu.");
static const u8 sPensiveMsg17[] = _("{STR_VAR_1} wirkt\nleicht nervös.");
static const u8 sPensiveMsg18[] = _("{STR_VAR_1} studiert eingehend\ndeine Fußspuren.");
static const u8 sPensiveMsg19[] = _("{STR_VAR_1} starrt beharrlich\ndir in die Augen.");

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
static const u8 sLoveMsg00[] = _("{STR_VAR_1} rückt urplötzlich\nnäher an deine Beine heran.");
static const u8 sLoveMsg01[] = _("Die Wangen von {STR_VAR_1} \nleuchten rosig.");
static const u8 sLoveMsg02[] = _("Oh! {STR_VAR_1} umarmt\ndich ganz plötzlich!");
static const u8 sLoveMsg03[] = _("Oh! {STR_VAR_1} hat plötzlich\nFlausen im Kopf!");
static const u8 sLoveMsg04[] = _("{STR_VAR_1} schmiegt sich an\ndeine Beine!");
static const u8 sLoveMsg05[] = _("{STR_VAR_1} errötet.");
static const u8 sLoveMsg06[] = _("Ah! {STR_VAR_1} kuschelt mit dir!");
static const u8 sLoveMsg07[] = _("{STR_VAR_1} schaut dich\ngroß an.");
static const u8 sLoveMsg08[] = _("{STR_VAR_1} weicht dir nicht\nvon der Seite!");
static const u8 sLoveMsg09[] = _("{STR_VAR_1} klammert sich\neng an dein Bein.");

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
static const u8 sSurpriseMsg00[] = _("{STR_VAR_1} wäre fast\nvornüber gekippt!");
static const u8 sSurpriseMsg01[] = _("{STR_VAR_1} rempelt dich an!");
static const u8 sSurpriseMsg02[] = _("{STR_VAR_1} hat sich offenbar noch\nnicht recht an seinen Namen gewöhnt.");
static const u8 sSurpriseMsg03[] = _("{STR_VAR_1} steht wie angewurzelt\nda und blickt nach unten.");
static const u8 sSurpriseMsg04[] = _("Fast wäre es hingeplumpst!");
static const u8 sSurpriseMsg05[] = _("{STR_VAR_1} spürt irgendetwas\nund jault laut los!");
static const u8 sSurpriseMsg06[] = _("{STR_VAR_1} hat neue\nEnergie geschöpft!");
static const u8 sSurpriseMsg07[] = _("{STR_VAR_1} macht plötzlich\nkehrt und schreit los!");
static const u8 sSurpriseMsg08[] = _("{STR_VAR_1} wirbelt\nim Nu herum!");
static const u8 sSurpriseMsg09[] = _("Zuckt zusammen, als du\nes unvermutet ansprichst.");
static const u8 sSurpriseMsg10[] = _("Sniff, sniff!\nIrgendwas hier riecht vorzüglich!");
static const u8 sSurpriseMsg11[] = _("{STR_VAR_1} hat neue\nEnergie geschöpft!");
static const u8 sSurpriseMsg12[] = _("{STR_VAR_1} schwankt hin und her und\nsieht aus, als würde es gleich umfallen!");
static const u8 sSurpriseMsg13[] = _("{STR_VAR_1} wäre fast\nvornüber gekippt!");
static const u8 sSurpriseMsg14[] = _("{STR_VAR_1} folgt dir behutsam\nauf Schritt und Tritt.");
static const u8 sSurpriseMsg15[] = _("{STR_VAR_1} ist stocksteif\nvor Nervosität.");
static const u8 sSurpriseMsg16[] = _("{STR_VAR_1} spürt eine geheimnisvolle\nGegenwart und erstarrt vor Schreck!");
static const u8 sSurpriseMsg17[] = _("{STR_VAR_1} hat Bammel und\nschmiegt sich eng an dich!");
static const u8 sSurpriseMsg18[] = _("{STR_VAR_1} spürt die Anwesenheit\nvon irgendetwas Außergewöhnlichem...");
static const u8 sSurpriseMsg19[] = _("{STR_VAR_1} ist stocksteif\nvor Nervosität.");
// Conditional messages, index 20
static const u8 sSurpriseMsg20[] = _("{STR_VAR_1} scheint vom\nRegen sichtlich überrascht!");

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
static const u8 sCuriousMsg00[] = _("Es schaut sich gehetzt um und\nscheint irgendetwas zu suchen!");
static const u8 sCuriousMsg01[] = _("Es hat nicht aufgepasst, wo es\nhinläuft, und rummst in dich hinein!");
static const u8 sCuriousMsg02[] = _("Sniff, sniff!\nDa ist irgendetwas in der Nähe!");
static const u8 sCuriousMsg03[] = _("{STR_VAR_1} lässt einen Kiesel\nüber den Boden kullern.");
static const u8 sCuriousMsg04[] = _("{STR_VAR_1} wendet auf der Suche\nnach etwas den Kopf nach links\lund rechts.");
static const u8 sCuriousMsg05[] = _("{STR_VAR_1} schnüffelt deinen\nGeruch.");
static const u8 sCuriousMsg06[] = _("{STR_VAR_1} scheint nicht recht\nzu wissen, was es will...");

const struct FollowerMsgInfo gFollowerCuriousMessages[] = {
    {sCuriousMsg00, EventScript_FollowerLookAround},
    {sCuriousMsg01, EventScript_FollowerPokingPlayer},
    {sCuriousMsg02}, {sCuriousMsg03},
    {sCuriousMsg04, EventScript_FollowerLookAround},
    {sCuriousMsg05}, {sCuriousMsg06},
};

// Unconditional music messages
static const u8 sMusicMsg00[] = _("{STR_VAR_1} macht einen\nleichtfüßigen Satz!");
static const u8 sMusicMsg01[] = _("{STR_VAR_1} schnüffelt\naufgeweckt um dich herum.");
static const u8 sMusicMsg02[] = _("Oh! {STR_VAR_1} führt plötzlich\nein Freudentänzchen auf!");
static const u8 sMusicMsg03[] = _("{STR_VAR_1} trottet fröhlich\nhinter dir her.");
static const u8 sMusicMsg04[] = _("{STR_VAR_1} scheint mit dir\nspielen zu wollen.");
static const u8 sMusicMsg05[] = _("{STR_VAR_1} springt glücks-\nerfüllt durch die Landschaft.");
static const u8 sMusicMsg06[] = _("Jetzt summt {STR_VAR_1}\nschon ein Liedchen!");
static const u8 sMusicMsg07[] = _("{STR_VAR_1} schnappt nach\ndeinen Füßen.");
static const u8 sMusicMsg08[] = _("{STR_VAR_1} dreht sich um und\nsieht dich an.");
static const u8 sMusicMsg09[] = _("{STR_VAR_1} buhlt mit aller\nKraft um deine Aufmerksamkeit!");
static const u8 sMusicMsg10[] = _("Oh! {STR_VAR_1} führt plötzlich\nein Freudentänzchen auf!");
static const u8 sMusicMsg11[] = _("{STR_VAR_1} ist quietschfidel!");
static const u8 sMusicMsg12[] = _("{STR_VAR_1} hüpft ohne ersichtliche\nMühe in hohem Bogen herum.");
static const u8 sMusicMsg13[] = _("Der Geruch scheint alte Erinnerungen\nin ihm geweckt zu haben...");
// Conditional music messages, index 14
static const u8 sMusicMsg14[] = _("{STR_VAR_1} labt sich\nam Regenwetter!");

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


static const u8 sPoisonedMsg00[] = _("Die Auswirkungen des Gifts\nlassen {STR_VAR_1} erschaudern...");

const struct FollowerMsgInfo gFollowerPoisonedMessages[] = {
    {sPoisonedMsg00, EventScript_FollowerIsShivering},
};
