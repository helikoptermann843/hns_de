// Radio station strings ported from pokecrystal
// Lines fit ~32 char width for 28-tile window

#ifndef GUARD_DATA_TEXT_RADIO_STRINGS_H
#define GUARD_DATA_TEXT_RADIO_STRINGS_H

// ==========================================================
// Station Names (displayed at top of radio UI)
// ==========================================================

static const u8 sRadioStationName_OaksPkmnTalk[]    = _("EICH's POKéMON Gespräch");
static const u8 sRadioStationName_PokedexShow[]     = _("POKéDEX Show");
static const u8 sRadioStationName_PokemonMusic[]    = _("POKéMON Musik");
static const u8 sRadioStationName_LuckyChannel[]    = _("Glückskanal");
static const u8 sRadioStationName_BuenasPassword[]  = _("BUENA'S PASSWORT");
static const u8 sRadioStationName_Unown[]           = _("?????");
static const u8 sRadioStationName_PlacesAndPeople[] = _("Plätze & Leute");
static const u8 sRadioStationName_LetsAllSing[]     = _("Lasst uns singen!");
static const u8 sRadioStationName_PokeFlute[]       = _("POKéFLÖTE");

static const u8 sRadioStationName_HoennSound[]  = _("Hoenn Sound");

// ==========================================================
// Hoenn Sound
// ==========================================================

static const u8 sRadioText_Hoenn1[] = _("Eine POKéMON-Melodie aus");
static const u8 sRadioText_Hoenn2[] = _("einer fernen Region: HOENN!");
static const u8 sRadioText_Hoenn3[] = _("Wilde POKéMON aus dieser");
static const u8 sRadioText_Hoenn4[] = _("Region könnten auftauchen!");

// ==========================================================
// POKéDEX Show
// ==========================================================

static const u8 sRadioText_PokedexShow_Intro[] = _("EICHs POKéDEX SHOW!");
static const u8 sRadioText_PokedexShow_TodaysPrefix[] = _("EICH: Heutiges POKéMON: ");

// ==========================================================
// Oak's POKéMON Talk
// ==========================================================

static const u8 sRadioText_OPT_Intro[] = _("MARY: PROF.EICHs POKéMON-TALK!");
static const u8 sRadioText_OPT_WithMeMary[] = _("Mit mir, MARY!");
static const u8 sRadioText_OPT_OakPrefix[] = _("EICH: ");
static const u8 sRadioText_OPT_SeenAround[] = _("wurde gesichtet bei");
static const u8 sRadioText_OPT_MaryPrefix[] = _("MARY: ");
static const u8 sRadioText_OPT_MaryIs[] = _(" ist ");

// Pokemon Channel interlude
static const u8 sRadioText_OPT_PokemonChannel[] = _("POKéMON Kanal");

// Adverbs (randomly selected)
static const u8 sRadioText_OPT_Adverb_SweetAdorably[]      = _("süß und bezaubernd");
static const u8 sRadioText_OPT_Adverb_WigglySlickly[]      = _("wackelig und clever");
static const u8 sRadioText_OPT_Adverb_AptlyNamed[]         = _("passend benannt und");
static const u8 sRadioText_OPT_Adverb_UndeniablyKindOf[]   = _("unbestreitbar irgendwie");
static const u8 sRadioText_OPT_Adverb_Unbearably[]         = _("so, so unerträglich");
static const u8 sRadioText_OPT_Adverb_WowImpressively[]    = _("wow, beeindruckend");
static const u8 sRadioText_OPT_Adverb_AlmostPoisonously[]  = _("fast schon giftig");
static const u8 sRadioText_OPT_Adverb_Sensually[]          = _("ooh, so sinnlich");
static const u8 sRadioText_OPT_Adverb_Mischievously[]      = _("so verschmitzt");
static const u8 sRadioText_OPT_Adverb_Topically[]          = _("so sehr aktuell");
static const u8 sRadioText_OPT_Adverb_Addictively[]        = _("sicher süchtig machend");
static const u8 sRadioText_OPT_Adverb_LooksInWater[]       = _("im Wasser sieht es");
static const u8 sRadioText_OPT_Adverb_EvolutionMustBe[]    = _("Entwicklung muss wohl");
static const u8 sRadioText_OPT_Adverb_Provocatively[]      = _("provokant");
static const u8 sRadioText_OPT_Adverb_FlippedOut[]         = _("so ausgeflippt und");
static const u8 sRadioText_OPT_Adverb_HeartMeltingly[]     = _("herzzerschmelzend");

static const u8 *const sRadioText_OPT_Adverbs[] =
{
    sRadioText_OPT_Adverb_SweetAdorably,
    sRadioText_OPT_Adverb_WigglySlickly,
    sRadioText_OPT_Adverb_AptlyNamed,
    sRadioText_OPT_Adverb_UndeniablyKindOf,
    sRadioText_OPT_Adverb_Unbearably,
    sRadioText_OPT_Adverb_WowImpressively,
    sRadioText_OPT_Adverb_AlmostPoisonously,
    sRadioText_OPT_Adverb_Sensually,
    sRadioText_OPT_Adverb_Mischievously,
    sRadioText_OPT_Adverb_Topically,
    sRadioText_OPT_Adverb_Addictively,
    sRadioText_OPT_Adverb_LooksInWater,
    sRadioText_OPT_Adverb_EvolutionMustBe,
    sRadioText_OPT_Adverb_Provocatively,
    sRadioText_OPT_Adverb_FlippedOut,
    sRadioText_OPT_Adverb_HeartMeltingly,
};

// Adjectives (randomly selected)
static const u8 sRadioText_OPT_Adj_Cute[]           = _("niedlich.");
static const u8 sRadioText_OPT_Adj_Weird[]          = _("seltsam.");
static const u8 sRadioText_OPT_Adj_Pleasant[]       = _("angenehm.");
static const u8 sRadioText_OPT_Adj_BoldSortOf[]     = _("irgendwie mutig.");
static const u8 sRadioText_OPT_Adj_Frightening[]    = _("furchterregend.");
static const u8 sRadioText_OPT_Adj_SuaveDebonair[]  = _("smart & elegant!");
static const u8 sRadioText_OPT_Adj_Powerful[]        = _("kraftvoll.");
static const u8 sRadioText_OPT_Adj_Exciting[]        = _("aufregend.");
static const u8 sRadioText_OPT_Adj_Groovy[]          = _("abgefahren!");
static const u8 sRadioText_OPT_Adj_Inspiring[]       = _("inspirierend.");
static const u8 sRadioText_OPT_Adj_Friendly[]        = _("freundlich.");
static const u8 sRadioText_OPT_Adj_HotHotHot[]       = _("heiß, heiß, heiß!");
static const u8 sRadioText_OPT_Adj_Stimulating[]     = _("anregend.");
static const u8 sRadioText_OPT_Adj_Guarded[]         = _("zurückhaltend.");
static const u8 sRadioText_OPT_Adj_Lovely[]          = _("bezaubernd.");
static const u8 sRadioText_OPT_Adj_Speedy[]          = _("flink.");

static const u8 *const sRadioText_OPT_Adjectives[] =
{
    sRadioText_OPT_Adj_Cute,
    sRadioText_OPT_Adj_Weird,
    sRadioText_OPT_Adj_Pleasant,
    sRadioText_OPT_Adj_BoldSortOf,
    sRadioText_OPT_Adj_Frightening,
    sRadioText_OPT_Adj_SuaveDebonair,
    sRadioText_OPT_Adj_Powerful,
    sRadioText_OPT_Adj_Exciting,
    sRadioText_OPT_Adj_Groovy,
    sRadioText_OPT_Adj_Inspiring,
    sRadioText_OPT_Adj_Friendly,
    sRadioText_OPT_Adj_HotHotHot,
    sRadioText_OPT_Adj_Stimulating,
    sRadioText_OPT_Adj_Guarded,
    sRadioText_OPT_Adj_Lovely,
    sRadioText_OPT_Adj_Speedy,
};

// ==========================================================
// POKéMON Music Channel (Ben & Fern)
// ==========================================================

static const u8 sRadioText_BenIntro[] = _("BEN: POKéMON MUSIK-KANAL!");
static const u8 sRadioText_BenIntro2[] = _("Hier ist DJ BEN!");
static const u8 sRadioText_FernIntro[] = _("FERN: POKéMUSIK!");
static const u8 sRadioText_FernIntro2[] = _("Mit DJ FERN!");
// "Today's {DAY}," built dynamically
static const u8 sRadioText_BenFern_TodayIs[] = _("Heute ist ");
static const u8 sRadioText_BenFern_JamTo[] = _("lasst uns abrocken zu");
static const u8 sRadioText_BenFern_ChillTo[] = _("entspannt euch bei");
static const u8 sRadioText_BenFern_March[] = _("POKéMON Marsch!");
static const u8 sRadioText_BenFern_Lullaby[] = _("POKéMON Schlaflied!");

// ==========================================================
// Lucky Channel
// ==========================================================

static const u8 sRadioText_LC1[] = _("REED: Yeehaw! Wie geht's euch");
static const u8 sRadioText_LC2[] = _("gerade? Ob hoch oben oder ganz");
static const u8 sRadioText_LC3[] = _("unten, verpasst bloß nicht die");
static const u8 sRadioText_LC4[] = _("GLÜCKSZAHLEN-SHOW!");
static const u8 sRadioText_LC5[] = _("Die Glückszahl dieser Woche ist");
// "{number}!" built dynamically
static const u8 sRadioText_LC_Repeat[] = _("Ich wiederhole das!");
static const u8 sRadioText_LC_Match[] = _("Trefft sie und geht zum");
static const u8 sRadioText_LC_Tower[] = _("RUNDFUNKTURM!");
static const u8 sRadioText_LC_Drag1[] = _("…Mich zu wiederholen");
static const u8 sRadioText_LC_Drag2[] = _("wird echt anstrengend…");

// ==========================================================
// Places and People
// ==========================================================

static const u8 sRadioText_PnP_Intro[] = _("PLÄTZE & LEUTE! Präsentiert");
static const u8 sRadioText_PnP_Intro2[] = _("von mir, DJ LILY!");
static const u8 sRadioText_PnP_Space[] = _(" ");

// People adjectives
static const u8 sRadioText_PnP_Cute[]       = _("ist niedlich.");
static const u8 sRadioText_PnP_Lazy[]       = _("ist etwas faul.");
static const u8 sRadioText_PnP_Happy[]      = _("ist immer fröhlich.");
static const u8 sRadioText_PnP_Noisy[]      = _("ist ziemlich laut.");
static const u8 sRadioText_PnP_Precocious[] = _("ist frühreif.");
static const u8 sRadioText_PnP_Bold[]       = _("ist etwas mutig.");
static const u8 sRadioText_PnP_Picky[]      = _("ist zu wählerisch!");
static const u8 sRadioText_PnP_SortOfOK[]   = _("ist irgendwie ok.");
static const u8 sRadioText_PnP_SoSo[]       = _("ist einfach so lala.");
static const u8 sRadioText_PnP_Great[]       = _("ist eigentlich toll.");
static const u8 sRadioText_PnP_MyType[]      = _("ist genau mein Typ.");
static const u8 sRadioText_PnP_Cool[]        = _("ist so cool, oder?");
static const u8 sRadioText_PnP_Inspiring[]   = _("ist inspirierend!");
static const u8 sRadioText_PnP_Weird[]       = _("ist irgendwie seltsam.");
static const u8 sRadioText_PnP_RightForMe[]  = _("ist der Richtige für mich?");
static const u8 sRadioText_PnP_Odd[]         = _("ist definitiv seltsam!");

static const u8 *const sRadioText_PnP_PeopleAdj[] =
{
    sRadioText_PnP_Cute,
    sRadioText_PnP_Lazy,
    sRadioText_PnP_Happy,
    sRadioText_PnP_Noisy,
    sRadioText_PnP_Precocious,
    sRadioText_PnP_Bold,
    sRadioText_PnP_Picky,
    sRadioText_PnP_SortOfOK,
    sRadioText_PnP_SoSo,
    sRadioText_PnP_Great,
    sRadioText_PnP_MyType,
    sRadioText_PnP_Cool,
    sRadioText_PnP_Inspiring,
    sRadioText_PnP_Weird,
    sRadioText_PnP_RightForMe,
    sRadioText_PnP_Odd,
};

// ==========================================================
// Rocket Radio
// ==========================================================

static const u8 sRadioStationName_Rocket[] = _("TEAM ROCKET");
static const u8 sRadioText_Rocket1[]  = _("… …Ähem, wir sind");
static const u8 sRadioText_Rocket2[]  = _("TEAM ROCKET!");
static const u8 sRadioText_Rocket3[]  = _("Nach drei Jahren");
static const u8 sRadioText_Rocket4[]  = _("der Vorbereitung sind wir");
static const u8 sRadioText_Rocket5[]  = _("wieder auferstanden");
static const u8 sRadioText_Rocket6[]  = _("aus der Asche!");
static const u8 sRadioText_Rocket7[]  = _("GIOVANNI!");
static const u8 sRadioText_Rocket8[]  = _("Kannst du uns hören?");
static const u8 sRadioText_Rocket9[]  = _("");
static const u8 sRadioText_Rocket10[] = _("");

// ==========================================================
// Buena's Password
// ==========================================================

static const u8 sRadioText_Buena1[] = _("BUENA: Hier ist BUENA!");
static const u8 sRadioText_Buena2[] = _("Das heutige Passwort!");
static const u8 sRadioText_Buena3[] = _("Moment… Es ist");
// "{password}!" built dynamically with STR_VAR_1
static const u8 sRadioText_Buena4[] = _("{STR_VAR_1}!");
static const u8 sRadioText_Buena5[] = _("Vergiss es nicht! Ich bin im");
static const u8 sRadioText_Buena6[] = _("ROSALIAS RUNDFUNKTURM!");

// Buena midnight shutdown
static const u8 sRadioText_BuenaMidnight1[] = _("BUENA: Oh je…");
static const u8 sRadioText_BuenaMidnight2[] = _("Es ist Mitternacht! Ich");
static const u8 sRadioText_BuenaMidnight3[] = _("muss jetzt aufhören!");
static const u8 sRadioText_BuenaMidnight4[] = _("Danke fürs Einschalten");
static const u8 sRadioText_BuenaMidnight5[] = _("bis zum Schluss! Aber");
static const u8 sRadioText_BuenaMidnight6[] = _("bleibt nicht zu lange");
static const u8 sRadioText_BuenaMidnight7[] = _("wach! Präsentiert von");
static const u8 sRadioText_BuenaMidnight8[] = _("DJ BUENA!");
static const u8 sRadioText_BuenaMidnight9[] = _("Ich bin dann mal weg!");
static const u8 sRadioText_BuenaMidnight10[] = _("…");
static const u8 sRadioText_BuenaOffAir[] = _("");

// ==========================================================
// Buena's Password Categories & Options
// ==========================================================

static const u8 sRadioBuenaPassword_NewBarkTown[]     = _("NEUBORKIA");
static const u8 sRadioBuenaPassword_CherrygroveCity[]  = _("ROSALIA");
static const u8 sRadioBuenaPassword_AzaleaTown[]      = _("AZALEA");
static const u8 sRadioBuenaPassword_Flying[]          = _("FLUG");
static const u8 sRadioBuenaPassword_Bug[]             = _("KÄFER");
static const u8 sRadioBuenaPassword_Grass[]           = _("PFLANZE");
static const u8 sRadioBuenaPassword_PkmnTalk[]        = _("POKéMON Talk");
static const u8 sRadioBuenaPassword_PkmnMusic[]       = _("POKéMON Musik");
static const u8 sRadioBuenaPassword_LuckyChannel[]    = _("Glückskanal");

// ==========================================================
// Oak's POKéMON Talk - Special Reports
// ==========================================================

static const u8 sOPT_Report_Clefairy_0[]  = _("MARY: Heute Nacht, ein seltener");
static const u8 sOPT_Report_Clefairy_1[]  = _("Mondschein-Moment im TALK!");
static const u8 sOPT_Report_Clefairy_2[]  = _("EICH: Wir rücken ins Licht:");
static const u8 sOPT_Report_Clefairy_3[]  = _("das mystische PIXI!");
static const u8 sOPT_Report_Clefairy_4[]  = _("Sie versammeln sich am");
static const u8 sOPT_Report_Clefairy_5[]  = _("Mondberg bei Vollmond.");
static const u8 sOPT_Report_Clefairy_6[]  = _("MARY: Sie TANZEN im Kreis!");
static const u8 sOPT_Report_Clefairy_7[]  = _("So niedlich seltsam!");
static const u8 sOPT_Report_Clefairy_8[]  = _("EICH: Ein zeitloses Rätsel");
static const u8 sOPT_Report_Clefairy_9[]  = _("und ein toller Anblick!");

static const u8 sOPT_Report_Lapras_0[]  = _("MARY: Ein sanfter Riese");
static const u8 sOPT_Report_Lapras_1[]  = _("steht heute im Rampenlicht!");
static const u8 sOPT_Report_Lapras_2[]  = _("EICH: Es ist die Ozeanfähre,");
static const u8 sOPT_Report_Lapras_3[]  = _("unser geliebtes LAPRAS!");
static const u8 sOPT_Report_Lapras_4[]  = _("Gesehen in der BERGESHÖHLE,");
static const u8 sOPT_Report_Lapras_5[]  = _("nur abends. Wie kurios!");
static const u8 sOPT_Report_Lapras_6[]  = _("MARY: So selten und friedlich!");
static const u8 sOPT_Report_Lapras_7[]  = _("Und es singt auch noch!");
static const u8 sOPT_Report_Lapras_8[]  = _("EICH: Manche sagen, sein Lied");
static const u8 sOPT_Report_Lapras_9[]  = _("beruhigt die Seele des Meeres.");

static const u8 sOPT_Report_Ampharos_0[]  = _("MARY: Willkommen zurück, Leute!");
static const u8 sOPT_Report_Ampharos_1[]  = _("Zeit für POKéMON TALK!");
static const u8 sOPT_Report_Ampharos_2[]  = _("EICH: Bringen wir Licht ins");
static const u8 sOPT_Report_Ampharos_3[]  = _("Dunkel: AMPHAROS!");
static const u8 sOPT_Report_Ampharos_4[]  = _("Sein heller Schwanz leuchtet");
static const u8 sOPT_Report_Ampharos_5[]  = _("durch Nebel für Verirrte.");
static const u8 sOPT_Report_Ampharos_6[]  = _("MARY: Kraftvoll, elegant,");
static const u8 sOPT_Report_Ampharos_7[]  = _("und unbestreitbar freundlich!");
static const u8 sOPT_Report_Ampharos_8[]  = _("EICH: Ein wichtiger Teil");
static const u8 sOPT_Report_Ampharos_9[]  = _("vieler Leuchtturm-Geschichten!");

static const u8 sOPT_Report_Sudowoodo_0[]  = _("MARY: Als Nächstes, ein echter");
static const u8 sOPT_Report_Sudowoodo_1[]  = _("Sonderling auf ROUTE 36...");
static const u8 sOPT_Report_Sudowoodo_2[]  = _("EICH: SODAMON! Sieht aus wie");
static const u8 sOPT_Report_Sudowoodo_3[]  = _("ein Baum, ist aber keiner!");
static const u8 sOPT_Report_Sudowoodo_4[]  = _("Es blockiert den Weg und");
static const u8 sOPT_Report_Sudowoodo_5[]  = _("rührt sich ohne Wasser nicht.");
static const u8 sOPT_Report_Sudowoodo_6[]  = _("MARY: Es reagiert nur auf");
static const u8 sOPT_Report_Sudowoodo_7[]  = _("SPRITZFLASCHE!");
static const u8 sOPT_Report_Sudowoodo_8[]  = _("EICH: Das ist kein Busch,");
static const u8 sOPT_Report_Sudowoodo_9[]  = _("sondern GESTEIN im Tarnmodus!");

static const u8 sOPT_Report_RedGyarados_0[]  = _("MARY: Die heutige Story ist");
static const u8 sOPT_Report_RedGyarados_1[]  = _("schockierend, aus JOHTO!");
static const u8 sOPT_Report_RedGyarados_2[]  = _("EICH: Trainer sahen einen");
static const u8 sOPT_Report_RedGyarados_3[]  = _("ROTEN GARADOS am ZORNSEE!");
static const u8 sOPT_Report_RedGyarados_4[]  = _("Anders als die üblichen");
static const u8 sOPT_Report_RedGyarados_5[]  = _("blauen, ist dieser knallrot!");
static const u8 sOPT_Report_RedGyarados_6[]  = _("MARY: Man sagt, es hängt mit");
static const u8 sOPT_Report_RedGyarados_7[]  = _("seltsamen Radiowellen zusammen!");
static const u8 sOPT_Report_RedGyarados_8[]  = _("EICH: Eine mysteriöse");
static const u8 sOPT_Report_RedGyarados_9[]  = _("Entwicklung… Unnatürlich.");

static const u8 sOPT_Report_Unown_0[]  = _("MARY: Wart ihr schon mal in den");
static const u8 sOPT_Report_Unown_1[]  = _("ALPHA-RUINEN? Gruselig!");
static const u8 sOPT_Report_Unown_2[]  = _("EICH: Seltsame Symbole zieren");
static const u8 sOPT_Report_Unown_3[]  = _("die Wände, wie alte Runen.");
static const u8 sOPT_Report_Unown_4[]  = _("Drinnen findet ihr ICOGNITO…");
static const u8 sOPT_Report_Unown_5[]  = _("jedes wie ein Buchstabe!");
static const u8 sOPT_Report_Unown_6[]  = _("MARY: Sie buchstabieren Dinge,");
static const u8 sOPT_Report_Unown_7[]  = _("vielleicht? Gruseln uns nur!");
static const u8 sOPT_Report_Unown_8[]  = _("EICH: Ein echtes Rätsel der");
static const u8 sOPT_Report_Unown_9[]  = _("Natur, bis heute ungelöst.");

static const u8 sOPT_Report_Snubbull_0[]  = _("MARY: Bewohner von ROSALIA");
static const u8 sOPT_Report_Snubbull_1[]  = _("suchen überall verzweifelt!");
static const u8 sOPT_Report_Snubbull_2[]  = _("EICH: Ein SNUBBULL ist");
static const u8 sOPT_Report_Snubbull_3[]  = _("abtrünnig und auf der Flucht!");
static const u8 sOPT_Report_Snubbull_4[]  = _("Normalerweise scheu und");
static const u8 sOPT_Report_Snubbull_5[]  = _("zickig, gesichtet am Bahnhof.");
static const u8 sOPT_Report_Snubbull_6[]  = _("MARY: Vielleicht jagt es");
static const u8 sOPT_Report_Snubbull_7[]  = _("der Liebe… oder Abenteuern!");
static const u8 sOPT_Report_Snubbull_8[]  = _("EICH: Haltet die Augen offen,");
static const u8 sOPT_Report_Snubbull_9[]  = _("und die Leine bereit.");

static const u8 sOPT_Report_Slowpoke_0[]  = _("MARY: Große News aus AZALEA");
static const u8 sOPT_Report_Slowpoke_1[]  = _("diese Woche!");
static const u8 sOPT_Report_Slowpoke_2[]  = _("EICH: FLEGMON sind zu ihrem");
static const u8 sOPT_Report_Slowpoke_3[]  = _("Brunnen zurückgekehrt!");
static const u8 sOPT_Report_Slowpoke_4[]  = _("TEAM ROCKET hatte ihnen");
static const u8 sOPT_Report_Slowpoke_5[]  = _("die Schwänze abgeschnitten!");
static const u8 sOPT_Report_Slowpoke_6[]  = _("MARY: Doch ein mutiger");
static const u8 sOPT_Report_Slowpoke_7[]  = _("junger Trainer stoppte sie!");
static const u8 sOPT_Report_Slowpoke_8[]  = _("EICH: Die FLEGMON sind");
static const u8 sOPT_Report_Slowpoke_9[]  = _("sicher und dösen wieder.");

static const u8 sOPT_Report_LavenderTower_0[]  = _("MARY: LAVANDIAS Turm hat");
static const u8 sOPT_Report_LavenderTower_1[]  = _("sich verändert!");
static const u8 sOPT_Report_LavenderTower_2[]  = _("EICH: Der alte Geisterturm");
static const u8 sOPT_Report_LavenderTower_3[]  = _("ist jetzt ein RADIOSENDER!");
static const u8 sOPT_Report_LavenderTower_4[]  = _("Manche Anwohner sagen, er");
static const u8 sOPT_Report_LavenderTower_5[]  = _("fühlt sich… gruselig an.");
static const u8 sOPT_Report_LavenderTower_6[]  = _("MARY: Ich schwöre, ich sah");
static const u8 sOPT_Report_LavenderTower_7[]  = _("ein NEBULAK an der Kabine!");
static const u8 sOPT_Report_LavenderTower_8[]  = _("EICH: Könnte Rauschen sein…");
static const u8 sOPT_Report_LavenderTower_9[]  = _("oder Gespenster!");

static const u8 sOPT_Report_Tentacruel_0[]  = _("MARY: Seltsame News von den");
static const u8 sOPT_Report_Tentacruel_1[]  = _("WIRBELINSELN heute!");
static const u8 sOPT_Report_Tentacruel_2[]  = _("EICH: TENTOXA umgeben");
static const u8 sOPT_Report_Tentacruel_3[]  = _("die Höhleneingänge!");
static const u8 sOPT_Report_Tentacruel_4[]  = _("Sie sind riesig und wirken");
static const u8 sOPT_Report_Tentacruel_5[]  = _("fast schon territorial.");
static const u8 sOPT_Report_Tentacruel_6[]  = _("MARY: Sie blockieren den Weg");
static const u8 sOPT_Report_Tentacruel_7[]  = _("ohne anzugreifen…");
static const u8 sOPT_Report_Tentacruel_8[]  = _("EICH: Als würden sie etwas");
static const u8 sOPT_Report_Tentacruel_9[]  = _("tief unter den Wellen bewachen.");

#define OPT_REPORT_LINES 10
#define NUM_OPT_REPORTS 10

static const u8 *const sOPT_Reports[NUM_OPT_REPORTS][OPT_REPORT_LINES] =
{
    { sOPT_Report_Clefairy_0, sOPT_Report_Clefairy_1, sOPT_Report_Clefairy_2, sOPT_Report_Clefairy_3, sOPT_Report_Clefairy_4, sOPT_Report_Clefairy_5, sOPT_Report_Clefairy_6, sOPT_Report_Clefairy_7, sOPT_Report_Clefairy_8, sOPT_Report_Clefairy_9 },
    { sOPT_Report_Lapras_0, sOPT_Report_Lapras_1, sOPT_Report_Lapras_2, sOPT_Report_Lapras_3, sOPT_Report_Lapras_4, sOPT_Report_Lapras_5, sOPT_Report_Lapras_6, sOPT_Report_Lapras_7, sOPT_Report_Lapras_8, sOPT_Report_Lapras_9 },
    { sOPT_Report_Ampharos_0, sOPT_Report_Ampharos_1, sOPT_Report_Ampharos_2, sOPT_Report_Ampharos_3, sOPT_Report_Ampharos_4, sOPT_Report_Ampharos_5, sOPT_Report_Ampharos_6, sOPT_Report_Ampharos_7, sOPT_Report_Ampharos_8, sOPT_Report_Ampharos_9 },
    { sOPT_Report_Sudowoodo_0, sOPT_Report_Sudowoodo_1, sOPT_Report_Sudowoodo_2, sOPT_Report_Sudowoodo_3, sOPT_Report_Sudowoodo_4, sOPT_Report_Sudowoodo_5, sOPT_Report_Sudowoodo_6, sOPT_Report_Sudowoodo_7, sOPT_Report_Sudowoodo_8, sOPT_Report_Sudowoodo_9 },
    { sOPT_Report_RedGyarados_0, sOPT_Report_RedGyarados_1, sOPT_Report_RedGyarados_2, sOPT_Report_RedGyarados_3, sOPT_Report_RedGyarados_4, sOPT_Report_RedGyarados_5, sOPT_Report_RedGyarados_6, sOPT_Report_RedGyarados_7, sOPT_Report_RedGyarados_8, sOPT_Report_RedGyarados_9 },
    { sOPT_Report_Unown_0, sOPT_Report_Unown_1, sOPT_Report_Unown_2, sOPT_Report_Unown_3, sOPT_Report_Unown_4, sOPT_Report_Unown_5, sOPT_Report_Unown_6, sOPT_Report_Unown_7, sOPT_Report_Unown_8, sOPT_Report_Unown_9 },
    { sOPT_Report_Snubbull_0, sOPT_Report_Snubbull_1, sOPT_Report_Snubbull_2, sOPT_Report_Snubbull_3, sOPT_Report_Snubbull_4, sOPT_Report_Snubbull_5, sOPT_Report_Snubbull_6, sOPT_Report_Snubbull_7, sOPT_Report_Snubbull_8, sOPT_Report_Snubbull_9 },
    { sOPT_Report_Slowpoke_0, sOPT_Report_Slowpoke_1, sOPT_Report_Slowpoke_2, sOPT_Report_Slowpoke_3, sOPT_Report_Slowpoke_4, sOPT_Report_Slowpoke_5, sOPT_Report_Slowpoke_6, sOPT_Report_Slowpoke_7, sOPT_Report_Slowpoke_8, sOPT_Report_Slowpoke_9 },
    { sOPT_Report_LavenderTower_0, sOPT_Report_LavenderTower_1, sOPT_Report_LavenderTower_2, sOPT_Report_LavenderTower_3, sOPT_Report_LavenderTower_4, sOPT_Report_LavenderTower_5, sOPT_Report_LavenderTower_6, sOPT_Report_LavenderTower_7, sOPT_Report_LavenderTower_8, sOPT_Report_LavenderTower_9 },
    { sOPT_Report_Tentacruel_0, sOPT_Report_Tentacruel_1, sOPT_Report_Tentacruel_2, sOPT_Report_Tentacruel_3, sOPT_Report_Tentacruel_4, sOPT_Report_Tentacruel_5, sOPT_Report_Tentacruel_6, sOPT_Report_Tentacruel_7, sOPT_Report_Tentacruel_8, sOPT_Report_Tentacruel_9 },
};

#endif // GUARD_DATA_TEXT_RADIO_STRINGS_H
