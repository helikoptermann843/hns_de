#if I_USE_EVO_HELD_ITEMS_FROM_BAG == TRUE
    #define EVO_HELD_ITEM_TYPE ITEM_USE_PARTY_MENU
    #define EVO_HELD_ITEM_FIELD_FUNC ItemUseOutOfBattle_EvolutionStone
#else
    #define EVO_HELD_ITEM_TYPE ITEM_USE_BAG_MENU
    #define EVO_HELD_ITEM_FIELD_FUNC ItemUseOutOfBattle_CannotUse
#endif

#define GEM_BOOST_PARAM ((I_GEM_BOOST_POWER >= GEN_6) ? 30 : 50)
#define TYPE_BOOST_PARAM ((I_TYPE_BOOST_POWER >= GEN_4) ? 20 : 10) // For non Pokémon-specific type-boosting held items.
#define POWER_ITEM_BOOST ((I_POWER_ITEM_BOOST >= GEN_7) ? 8 : 4)

#define X_ITEM_STAGES ((B_X_ITEMS_BUFF >= GEN_7) ? 2 : 1)

#define TREASURE_FACTOR ((I_SELL_VALUE_FRACTION >= GEN_9) ? 2 : 1)

#define ITEM_NAME(str) COMPOUND_STRING_SIZE_LIMIT(str, ITEM_NAME_LENGTH)
#define ITEM_PLURAL_NAME(str) COMPOUND_STRING_SIZE_LIMIT(str, ITEM_NAME_PLURAL_LENGTH)

// Shared Item Description entries

static const u8 sFullHealDesc[]       = _("Heilt alle\n"
                                          "Statusprobleme\n"
                                          "eines Pokémon.");

static const u8 sPokeDollDesc[]       = _("Verwenden Sie diese\n"
                                          "Option, um vor jedem\n"
                                          "Kampf mit einem wil...");

static const u8 sMaxReviveDesc[]      = _("Belebt ein ohnmächtiges\n"
                                          "Pokémon mit all seinen\n"
                                          "KP wieder.");

static const u8 sHealthFeatherDesc[]  = _("Ein Gegenstand, der\n"
                                          "die Basis-KP eines\n"
                                          "Pokémon erhöht.");

static const u8 sMuscleFeatherDesc[]  = _("Ein Gegenstand, der\n"
                                          "den Basisangriff\n"
                                          "eines Pokémon erhöht.");

static const u8 sResistFeatherDesc[]  = _("Ein Gegenstand, der\n"
                                          "die Basisverteidigung\n"
                                          "eines Pokémon erhöht.");

static const u8 sGeniusFeatherDesc[]  = _("Ein Gegenstand, der die\n"
                                          "Basis-Sp erhöht.\n"
                                          "Angriff. eines Pokémon.");

static const u8 sCleverFeatherDesc[]  = _("Ein Gegenstand, der\n"
                                          "die Basis-Sp erhöht.\n"
                                          "Def. eines Pokémon.");

static const u8 sSwiftFeatherDesc[]   = _("Ein Gegenstand, der die\n"
                                          "Grundgeschwindigkeit\n"
                                          "eines Pokémon erhöht.");

static const u8 sBigMushroomDesc[]    = _("Ein seltener Pilz, der\n"
                                          "zu einem hohen Preis\n"
                                          "verkauft werden würde.");

static const u8 sShardsDesc[]         = _("Eine Scherbe eines\n"
                                          "antiken Gegenstands. Kann\n"
                                          "günstig verkauft werden.");

static const u8 sRootFossilDesc[]     = _("Ein Fossil eines\n"
                                          "alten, am Meeresboden\n"
                                          "lebenden Pokémon.");

static const u8 sFossilizedFishDesc[] = _("Ein Fossil eines\n"
                                          "alten, im Meer\n"
                                          "lebenden Pokémon.");

static const u8 sBeadMailDesc[]       = _("Post mit einer\n"
                                          "Skizze des\n"
                                          "haltenden Pokémon.");

static const u8 sEvolutionStoneDesc[] = _("Lässt bestimmte\n"
                                          "Pokémon-Arten sich\n"
                                          "weiterentwickeln.");

static const u8 sNectarDesc[]         = _("Blütennektar, der\n"
                                          "die Form bestimmter\n"
                                          "Pokémon verändert.");

static const u8 sCharizarditeDesc[]   = _("Dieser Stein ermöglicht\n"
                                          "Glurak eine Mega-\n"
                                          "Entwicklung im Kampf.");

static const u8 sMewtwoniteDesc[]     = _("Dieser Stein ermöglicht\n"
                                          "Mewtu eine Mega-\n"
                                          "Entwicklung im Kampf.");

static const u8 sRaichuniteDesc[]     = _("Dieser Stein ermöglicht\n"
                                          "Raichu eine Mega-\n"
                                          "Entwicklung im Kampf.");

static const u8 sAbsoliteDesc[]       = _("Dieser Stein ermöglicht\n"
                                          "Absol eine Mega-\n"
                                          "Entwicklung im Kampf.");

static const u8 sGarchompiteDesc[]    = _("Dieser Stein ermöglicht\n"
                                          "Garchomp eine Mega-\n"
                                          "Entwicklung im Kampf.");

static const u8 sLucarioniteDesc[]    = _("Dieser Stein ermöglicht\n"
                                          "Lucario eine Mega-\n"
                                          "Entwicklung im Kampf.");

static const u8 sSeaIncenseDesc[]     = _("Ein Haltegegenstand, der\n"
                                          "Bewegungen vom Typ\n"
                                          "Wasser leicht verstärkt.");

static const u8 sOddIncenseDesc[]     = _("Ein Haltegegenstand,\n"
                                          "der Bewegungen vom\n"
                                          "Typ Psi verstärkt.");

static const u8 sRockIncenseDesc[]    = _("Ein Haltegegenstand,\n"
                                          "der die Kraft von\n"
                                          "Steinbewegungen erhöht.");

static const u8 sFullIncenseDesc[]    = _("Ein gehaltener\n"
                                          "Gegenstand, der dafür\n"
                                          "sorgt, dass sich ...");

static const u8 sRoseIncenseDesc[]    = _("Ein Haltegegenstand, der\n"
                                          "die Kraft von Bewegungen\n"
                                          "vom Typ Gras erhöht.");

static const u8 sLuckIncenseDesc[]    = _("Verdoppelt das Geld\n"
                                          "im Kampf, wenn der\n"
                                          "Inhaber teilnimmt.");

static const u8 sPureIncenseDesc[]    = _("Ein Haltegegenstand,\n"
                                          "der dabei hilft, wilde\n"
                                          "Pokémon abzuwehren.");

static const u8 sKingsRockDesc[]      = _("Ein Haltegegenstand, der\n"
                                          "bei einem Treffer ein\n"
                                          "Zurückschrec...");

static const u8 sFigyBerryDesc[]      = _("Ein Haltegegenstand,\n"
                                          "der KP wiederherstellt,\n"
                                          "aber verwirren kann.");

const u8 gQuestionMarksItemName[] = _("????????");

static const u8 sQuestionMarksDesc[]  = _("?????");

static const u8 sKeyToRoomDesc[]      = _("Ein Schlüssel, der eine\n"
                                          "Tür im verlassenen\n"
                                          "Schiff öffnet.");

static const u8 sTeraShardDesc[]      = _("Diese Splitter können\n"
                                          "entstehen, wenn ein Tera-\n"
                                          "Pokémon ohnmächtig wird.");

static const u8 sGenericMulchDesc[]   = _("Ein Dünger, der für\n"
                                          "den lokalen Boden\n"
                                          "ungeeignet ist.");

const struct ItemInfo gItemsInfo[] =
{
    [ITEM_NONE] =
    {
        .name = gQuestionMarksItemName,
        .price = 0,
        .description = sQuestionMarksDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_UNCATEGORIZED,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_QuestionMark,
        .iconPalette = gItemIconPalette_QuestionMark,
    },

// Poké Balls

    [ITEM_STRANGE_BALL] =
    {
        .name = ITEM_NAME("Rätselball"),
        .price = 0,
        .description = COMPOUND_STRING(

            "Ein ungewöhnlicher\n"

            "Ball bewegte sich\n"

            "durch Raum und Zeit."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_STRANGE,
        .iconPic = gItemIcon_StrangeBall,
        .iconPalette = gItemIconPalette_StrangeBall,
    },

    [ITEM_POKE_BALL] =
    {
        .name = ITEM_NAME("Pokéball"),
        .price = 200,
        .description = COMPOUND_STRING(

            "Ein Werkzeug zum\n"

            "Fangen wilder\n"

            "Pokémon."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_POKE,
        .iconPic = gItemIcon_PokeBall,
        .iconPalette = gItemIconPalette_PokeBall,
    },

    [ITEM_GREAT_BALL] =
    {
        .name = ITEM_NAME("Superball"),
        .price = 600,
        .description = COMPOUND_STRING(

            "Ein guter Ball mit\n"

            "einer höheren Fangrate\n"

            "als ein Pokéball."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_GREAT,
        .iconPic = gItemIcon_GreatBall,
        .iconPalette = gItemIconPalette_GreatBall,
    },

    [ITEM_ULTRA_BALL] =
    {
        .name = ITEM_NAME("Hyperball"),
        .price = (I_PRICE >= GEN_7) ? 800 : 1200,
        .description = COMPOUND_STRING(
            "Ein besserer Ball mit\n"
            "einer höheren Fangquote\n"
            "als ein großartiger Ball."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_ULTRA,
        .iconPic = gItemIcon_UltraBall,
        .iconPalette = gItemIconPalette_UltraBall,
    },

    [ITEM_MASTER_BALL] =
    {
        .name = ITEM_NAME("Meisterball"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Der beste Ball,\n"
            "der ein Pokémon\n"
            "unbedingt fängt."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_MASTER,
        .iconPic = gItemIcon_MasterBall,
        .iconPalette = gItemIconPalette_MasterBall,
    },

    [ITEM_PREMIER_BALL] =
    {
        .name = ITEM_NAME("Premierball"),
        .price = (I_PRICE >= GEN_7) ? 20 : 200,
        .description = COMPOUND_STRING(
            "Ein seltener Ball, der\n"
            "zur Erinnerung an ein\n"
            "bestimmtes Ereig..."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_PREMIER,
        .iconPic = gItemIcon_PremierBall,
        .iconPalette = gItemIconPalette_PremierBall,
    },

    [ITEM_HEAL_BALL] =
    {
        .name = ITEM_NAME("Heilball"),
        .price = 300,
        .description = COMPOUND_STRING(
            "Ein Heilball, der\n"
            "gefangene Pokémon\n"
            "wiederherstellt."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_HEAL,
        .iconPic = gItemIcon_HealBall,
        .iconPalette = gItemIconPalette_HealBall,
    },

    [ITEM_NET_BALL] =
    {
        .name = ITEM_NAME("Netzball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Ein Ball, der gut bei\n"
            "Pokémon vom Typ Wasser\n"
            "und Käfer funktioniert."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_NET,
        .iconPic = gItemIcon_NetBall,
        .iconPalette = gItemIconPalette_NetBall,
    },

    [ITEM_NEST_BALL] =
    {
        .name = ITEM_NAME("Nestball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Ein Ball, der bei\n"
            "schwächeren Pokémon\n"
            "besser funktioniert."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_NEST,
        .iconPic = gItemIcon_NestBall,
        .iconPalette = gItemIconPalette_NestBall,
    },

    [ITEM_DIVE_BALL] =
    {
        .name = ITEM_NAME("Tauchball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Ein Ball, der bei Pokémon\n"
            "auf dem Meeresboden\n"
            "besser funktioniert."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_DIVE,
        .iconPic = gItemIcon_DiveBall,
        .iconPalette = gItemIconPalette_DiveBall,
    },

    [ITEM_DUSK_BALL] =
    {
        .name = ITEM_NAME("Finsterball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Funktioniert gut, wenn\n"
            "es an einem dunklen\n"
            "Ort verwendet wird."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_DUSK,
        .iconPic = gItemIcon_DuskBall,
        .iconPalette = gItemIconPalette_DuskBall,
    },

    [ITEM_TIMER_BALL] =
    {
        .name = ITEM_NAME("Timerball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Ein Ball, der in Kämpfen,\n"
            "die viele Runden dauern,\n"
            "an Kraft gewinnt."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_TIMER,
        .iconPic = gItemIcon_TimerBall,
        .iconPalette = gItemIconPalette_RepeatBall,
    },

    [ITEM_QUICK_BALL] =
    {
        .name = ITEM_NAME("Flottball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Funktioniert gut,\n"
            "wenn es in der ersten\n"
            "Runde verwendet wird."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_QUICK,
        .iconPic = gItemIcon_QuickBall,
        .iconPalette = gItemIconPalette_QuickBall,
    },

    [ITEM_REPEAT_BALL] =
    {
        .name = ITEM_NAME("Wiederball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Ein Ball, der bei zuvor\n"
            "gefangenen Pokémon\n"
            "besser funktioniert."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_REPEAT,
        .iconPic = gItemIcon_RepeatBall,
        .iconPalette = gItemIconPalette_RepeatBall,
    },

    [ITEM_LUXURY_BALL] =
    {
        .name = ITEM_NAME("Luxusball"),
        .price = (I_PRICE >= GEN_8) ? 3000 : 1000,
        .description = COMPOUND_STRING(
            "Ein gemütlicher\n"
            "Ball, der Pokémon\n"
            "freundlicher macht."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_LUXURY,
        .iconPic = gItemIcon_LuxuryBall,
        .iconPalette = gItemIconPalette_LuxuryBall,
    },

    [ITEM_LEVEL_BALL] =
    {
        .name = ITEM_NAME("Levelball"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "Ein Ball, der bei\n"
            "Pokémon niedrigeren\n"
            "Levels gut funktioniert."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_LEVEL,
        .iconPic = gItemIcon_LevelBall,
        .iconPalette = gItemIconPalette_LevelBall,
    },

    [ITEM_LURE_BALL] =
    {
        .name = ITEM_NAME("Köderball"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "Ein Ball, der sich gut\n"
            "gegen aufgeangelte\n"
            "Pokémon eignet."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_LURE,
        .iconPic = gItemIcon_LureBall,
        .iconPalette = gItemIconPalette_LureBall,
    },

    [ITEM_MOON_BALL] =
    {
        .name = ITEM_NAME("Mondball"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "Ein Ball, der bei\n"
            "Moon Stone-Benutzern\n"
            "gut funktioniert."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_MOON,
        .iconPic = gItemIcon_MoonBall,
        .iconPalette = gItemIconPalette_MoonBall,
    },

    [ITEM_FRIEND_BALL] =
    {
        .name = ITEM_NAME("Freundesball"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "Ein Ball, der ein Pokémon\n"
            "freundlich macht, wenn es\n"
            "gefangen wird."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_FRIEND,
        .iconPic = gItemIcon_FriendBall,
        .iconPalette = gItemIconPalette_FriendBall,
    },

    [ITEM_LOVE_BALL] =
    {
        .name = ITEM_NAME("Sympaball"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "Funktioniert gut bei\n"
            "Pokémon des anderen\n"
            "Geschlechts."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_LOVE,
        .iconPic = gItemIcon_LoveBall,
        .iconPalette = gItemIconPalette_LoveBall,
    },

    [ITEM_FAST_BALL] =
    {
        .name = ITEM_NAME("Turboball"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "Funktioniert gut\n"
            "bei sehr schnellen\n"
            "Pokémon."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_FAST,
        .iconPic = gItemIcon_FastBall,
        .iconPalette = gItemIconPalette_FastBall,
    },

    [ITEM_HEAVY_BALL] =
    {
        .name = ITEM_NAME("Schwerball"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "Funktioniert gut\n"
            "bei sehr schweren\n"
            "Pokémon."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_HEAVY,
        .iconPic = gItemIcon_HeavyBall,
        .iconPalette = gItemIconPalette_HeavyBall,
    },

    [ITEM_DREAM_BALL] =
    {
        .name = ITEM_NAME("Traumball"),
        .price = 0,
        .description = COMPOUND_STRING(
        #if B_DREAM_BALL_MODIFIER >= GEN_8
            "A Ball that works\n"
            "well on sleeping\n"
            "Pokémon."),
        #else
            "A Poké Ball used in\n"
            "the Entree Forest."),
        #endif
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_DREAM,
        .iconPic = gItemIcon_DreamBall,
        .iconPalette = gItemIconPalette_DreamBall,
    },

    [ITEM_SAFARI_BALL] =
    {
        .name = ITEM_NAME("Safariball"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein besonderer Ball,\n"
            "der nur in der Safari-\n"
            "Zone verwendet wird."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_SAFARI,
        .iconPic = gItemIcon_SafariBall,
        .iconPalette = gItemIconPalette_SafariBall,
    },

    [ITEM_SPORT_BALL] =
    {
        .name = ITEM_NAME("Turnierball"),
        .price = (I_PRICE <= GEN_3 || I_PRICE >= GEN_9) ? 0 : 300,
        .description = COMPOUND_STRING(
            "Ein besonderer Ball, der\n"
            "beim Käferfang-Wettbewerb\n"
            "verwendet wird."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_SPORT,
        .iconPic = gItemIcon_SportBall,
        .iconPalette = gItemIconPalette_SportBall,
    },

    [ITEM_PARK_BALL] =
    {
        .name = ITEM_NAME("Parkball"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein besonderer\n"
            "Ball für den Pal\n"
            "Park."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_PARK,
        .iconPic = gItemIcon_ParkBall,
        .iconPalette = gItemIconPalette_ParkBall,
    },

    [ITEM_BEAST_BALL] =
    {
        .name = ITEM_NAME("Ultraball"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Ball zum\n"
            "Fangen von\n"
            "Ultrabestien."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_BEAST,
        .iconPic = gItemIcon_BeastBall,
        .iconPalette = gItemIconPalette_BeastBall,
    },

    [ITEM_CHERISH_BALL] =
    {
        .name = ITEM_NAME("Jubelball"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein seltener Ball, der\n"
            "zur Erinnerung an ein\n"
            "bestimmtes Ereig..."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeBall,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = BALL_CHERISH,
        .iconPic = gItemIcon_CherishBall,
        .iconPalette = gItemIconPalette_CherishBall,
    },

// Medicine

    [ITEM_POTION] =
    {
        .name = ITEM_NAME("Trank"),
        .price = (I_PRICE >= GEN_7) ? 200 : 300,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Stellt die KP eines\n"
            "Pokémon um 20\n"
            "Punkte wieder her."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_Potion,
        .flingPower = 30,
        .iconPic = gItemIcon_Potion,
        .iconPalette = gItemIconPalette_Potion,
    },

    [ITEM_SUPER_POTION] =
    {
        .name = ITEM_NAME("Supertrank"),
        .price = 700,
        .holdEffectParam = 60,
        .description = COMPOUND_STRING(
            "Restores the HP of\n"
            "a Pokémon by\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "60 points."),
        #else
            "50 points."),
        #endif
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_SuperPotion,
        .flingPower = 30,
        .iconPic = gItemIcon_Potion,
        .iconPalette = gItemIconPalette_SuperPotion,
    },

    [ITEM_HYPER_POTION] =
    {
        .name = ITEM_NAME("Hypertrank"),
        .price = (I_PRICE >= GEN_2 && I_PRICE <= GEN_6) ? 1200 : 1500,
        .holdEffectParam = 120,
        .description = COMPOUND_STRING(
            "Restores the HP of\n"
            "a Pokémon by\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "120 points."),
        #else
            "200 points."),
        #endif
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_HyperPotion,
        .flingPower = 30,
        .iconPic = gItemIcon_Potion,
        .iconPalette = gItemIconPalette_HyperPotion,
    },

    [ITEM_MAX_POTION] =
    {
        .name = ITEM_NAME("Top-Trank"),
        .price = 2500,
        .holdEffectParam = 255,
        .description = COMPOUND_STRING(
            "Stellt die KP eines\n"
            "Pokémon vollständig\n"
            "wieder her."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_MaxPotion,
        .flingPower = 30,
        .iconPic = gItemIcon_LargePotion,
        .iconPalette = gItemIconPalette_MaxPotion,
    },

    [ITEM_FULL_RESTORE] =
    {
        .name = ITEM_NAME("Top-Genesung"),
        .price = 3000,
        .holdEffectParam = 255,
        .description = COMPOUND_STRING(
            "Stellt die KP und den\n"
            "Status eines Pokémon\n"
            "vollständig wieder her."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_HEAL_AND_CURE_STATUS,
        .effect = gItemEffect_FullRestore,
        .flingPower = 30,
        .iconPic = gItemIcon_LargePotion,
        .iconPalette = gItemIconPalette_FullRestore,
    },

    [ITEM_REVIVE] =
    {
        .name = ITEM_NAME("Beleber"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 1500,
        .description = COMPOUND_STRING(
            "Belebt ein ohnmächtiges\n"
            "Pokémon mit der Hälfte\n"
            "seiner KP wieder."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .effect = gItemEffect_Revive,
        .flingPower = 30,
        .iconPic = gItemIcon_Revive,
        .iconPalette = gItemIconPalette_Revive,
    },

    [ITEM_MAX_REVIVE] =
    {
        .name = ITEM_NAME("Top-Beleber"),
        .price = 4000,
        .description = sMaxReviveDesc,
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .effect = gItemEffect_MaxRevive,
        .flingPower = 30,
        .iconPic = gItemIcon_MaxRevive,
        .iconPalette = gItemIconPalette_Revive,
    },

    [ITEM_FRESH_WATER] =
    {
        .name = ITEM_NAME("Tafelwasser"),
        .price = 200,
        .holdEffectParam = 30,
        .description = COMPOUND_STRING(
            "A mineral water\n"
            "that restores HP\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "by 30 points."),
        #else
            "by 50 points."),
        #endif
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_FreshWater,
        .flingPower = 30,
        .iconPic = gItemIcon_FreshWater,
        .iconPalette = gItemIconPalette_FreshWater,
    },

    [ITEM_SODA_POP] =
    {
        .name = ITEM_NAME("Sprudel"),
        .price = 300,
        .holdEffectParam = 50,
        .description = COMPOUND_STRING(
            "A fizzy soda drink\n"
            "that restores HP\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "by 50 points."),
        #else
            "by 60 points."),
        #endif
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_SodaPop,
        .flingPower = 30,
        .iconPic = gItemIcon_SodaPop,
        .iconPalette = gItemIconPalette_SodaPop,
    },

    [ITEM_LEMONADE] =
    {
        .name = ITEM_NAME("Limonade"),
        .price = (I_PRICE >= GEN_7) ? 400 : 350,
        .holdEffectParam = 70,
        .description = COMPOUND_STRING(
            "A very sweet drink\n"
            "that restores HP\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "by 70 points."),
        #else
            "by 80 points."),
        #endif
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_Lemonade,
        .flingPower = 30,
        .iconPic = gItemIcon_Lemonade,
        .iconPalette = gItemIconPalette_Lemonade,
    },

    [ITEM_MOOMOO_MILK] =
    {
        .name = ITEM_NAME("Kuhmuh-Milch"),
        .price = (I_PRICE >= GEN_7) ? 600 : 500,
        .holdEffectParam = 100,
        .description = COMPOUND_STRING(
            "Eine nahrhafte Milch,\n"
            "die KP um 100 Punkte\n"
            "wiederherstellt."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_MoomooMilk,
        .flingPower = 30,
        .iconPic = gItemIcon_MoomooMilk,
        .iconPalette = gItemIconPalette_MoomooMilk,
    },

    [ITEM_ENERGY_POWDER] =
    {
        .name = ITEM_NAME("Energiestaub"),
        .price = 500,
        .description = COMPOUND_STRING(
            "A bitter powder\n"
            "that restores HP\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "by 60 points."),
        #else
            "by 50 points."),
        #endif
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_EnergyPowder,
        .flingPower = 30,
        .iconPic = gItemIcon_Powder,
        .iconPalette = gItemIconPalette_EnergyPowder,
    },

    [ITEM_ENERGY_ROOT] =
    {
        .name = ITEM_NAME("Kraftwurzel"),
        .price = (I_PRICE >= GEN_7) ? 1200 : 800,
        .description = COMPOUND_STRING(
            "A bitter root\n"
            "that restores HP\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "by 120 points."),
        #else
            "by 200 points."),
        #endif
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_EnergyRoot,
        .flingPower = 30,
        .iconPic = gItemIcon_EnergyRoot,
        .iconPalette = gItemIconPalette_EnergyRoot,
    },

    [ITEM_HEAL_POWDER] =
    {
        .name = ITEM_NAME("Heilpuder"),
        .price = (I_PRICE >= GEN_7) ? 300 : 450,
        .description = COMPOUND_STRING(
            "Ein bitteres Pulver,\n"
            "das alle\n"
            "Statusprobleme heilt."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_HealPowder,
        .flingPower = 30,
        .iconPic = gItemIcon_Powder,
        .iconPalette = gItemIconPalette_HealPowder,
    },

    [ITEM_REVIVAL_HERB] =
    {
        .name = ITEM_NAME("Vitalkraut"),
        .price = 2800,
        .description = COMPOUND_STRING(
            "Ein sehr bitteres Kraut,\n"
            "das ein ohnmächtiges\n"
            "Pokémon wiederbelebt."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .effect = gItemEffect_RevivalHerb,
        .flingPower = 30,
        .iconPic = gItemIcon_RevivalHerb,
        .iconPalette = gItemIconPalette_RevivalHerb,
    },

    [ITEM_ANTIDOTE] =
    {
        .name = ITEM_NAME("Gegengift"),
        .price = (I_PRICE >= GEN_7) ? 200 : 100,
        .description = COMPOUND_STRING(
            "Heilt ein\n"
            "vergiftetes\n"
            "Pokémon."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Antidote,
        .flingPower = 30,
        .iconPic = gItemIcon_StatusHeal,
        .iconPalette = gItemIconPalette_Antidote,
    },

    [ITEM_PARALYZE_HEAL] =
    {
        .name = ITEM_NAME("Para-Heiler"),
        .price = (I_PRICE == GEN_7) ? 300 : 200,
        .description = COMPOUND_STRING(
            "Heilt ein\n"
            "gelähmtes Pokémon."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_ParalyzeHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_StatusHeal,
        .iconPalette = gItemIconPalette_ParalyzeHeal,
    },

    [ITEM_BURN_HEAL] =
    {
        .name = ITEM_NAME("Feuerheiler"),
    #if I_PRICE >= GEN_8
        .price = 200,
    #elif I_PRICE == GEN_7
        .price = 300,
    #else
        .price = 250,
    #endif
        .description = COMPOUND_STRING(
            "Heilt Pokémon von\n"
            "einer Verbrennung."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_BurnHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_StatusHeal,
        .iconPalette = gItemIconPalette_BurnHeal,
    },

    [ITEM_ICE_HEAL] =
    {
        .name = ITEM_NAME("Eisheiler"),
    #if I_PRICE >= GEN_8
        .price = 200,
    #elif I_PRICE == GEN_7
        .price = 100,
    #else
        .price = 250,
    #endif
        .description = COMPOUND_STRING(
            "Tauet ein\n"
            "gefrorenes Pokémon\n"
            "auf."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_IceHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_StatusHeal,
        .iconPalette = gItemIconPalette_IceHeal,
    },

    [ITEM_AWAKENING] =
    {
        .name = ITEM_NAME("Aufwecker"),
    #if (I_PRICE >= GEN_8 || I_PRICE == GEN_1)
        .price = 200,
    #elif I_PRICE == GEN_7
        .price = 100,
    #else
        .price = 250,
    #endif
        .description = COMPOUND_STRING(
            "Erweckt ein\n"
            "schlafendes\n"
            "Pokémon."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Awakening,
        .flingPower = 30,
        .iconPic = gItemIcon_StatusHeal,
        .iconPalette = gItemIconPalette_Awakening,
    },

    [ITEM_FULL_HEAL] =
    {
        .name = ITEM_NAME("Hyperheiler"),
        .price = (I_PRICE >= GEN_7) ? 400 : 600,
        .description = sFullHealDesc,
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_FullHeal,
        .iconPalette = gItemIconPalette_FullHeal,
    },

    [ITEM_ETHER] =
    {
        .name = ITEM_NAME("Äther"),
        .price = (I_PRICE >= GEN_2) ? 1200 : 1,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Stellt die PP einer\n"
            "ausgewählten Bewegung\n"
            "um 10 wieder her."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PP_RECOVERY,
        .type = ITEM_USE_PARTY_MENU_MOVES,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .effect = gItemEffect_Ether,
        .flingPower = 30,
        .iconPic = gItemIcon_Ether,
        .iconPalette = gItemIconPalette_Ether,
    },

    [ITEM_MAX_ETHER] =
    {
        .name = ITEM_NAME("Top-Äther"),
        .price = (I_PRICE >= GEN_2) ? 2000 : 1,
        .holdEffectParam = 255,
        .description = COMPOUND_STRING(
            "Stellt die PP einer\n"
            "ausgewählten Bewegung\n"
            "vollständig wieder her."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PP_RECOVERY,
        .type = ITEM_USE_PARTY_MENU_MOVES,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .effect = gItemEffect_MaxEther,
        .flingPower = 30,
        .iconPic = gItemIcon_Ether,
        .iconPalette = gItemIconPalette_MaxEther,
    },

    [ITEM_ELIXIR] =
    {
        .name = ITEM_NAME("Elixier"),
        .price = (I_PRICE >= GEN_2) ? 3000 : 1,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Stellt die PP\n"
            "aller Bewegungen\n"
            "um 10 wieder her."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PP_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .effect = gItemEffect_Elixir,
        .flingPower = 30,
        .iconPic = gItemIcon_Ether,
        .iconPalette = gItemIconPalette_Elixir,
    },

    [ITEM_MAX_ELIXIR] =
    {
        .name = ITEM_NAME("Top-Elixier"),
        .price = (I_PRICE >= GEN_2) ? 4500 : 1,
        .holdEffectParam = 255,
        .description = COMPOUND_STRING(
            "Stellt die PP der\n"
            "Bewegungen eines Pokémon\n"
            "vollständig wieder her."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PP_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .effect = gItemEffect_MaxElixir,
        .flingPower = 30,
        .iconPic = gItemIcon_Ether,
        .iconPalette = gItemIconPalette_MaxElixir,
    },

    [ITEM_BERRY_JUICE] =
    {
        .name = ITEM_NAME("Beerensaft"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein 100 % reiner Saft,\n"
            "der KP um 20 Punkte\n"
            "wiederherstellt."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_Potion,
        .flingPower = 30,
        .iconPic = gItemIcon_BerryJuice,
        .iconPalette = gItemIconPalette_BerryJuice,
    },

    [ITEM_SACRED_ASH] =
    {
        .name = ITEM_NAME("Zauberasche"),
        .pluralName = ITEM_PLURAL_NAME("Sacred Ashes"),
        .price = (I_PRICE >= GEN_7) ? 50000 : 200,
        .description = COMPOUND_STRING(
            "Belebt alle ohnmächtigen\n"
            "Pokémon vollständig\n"
            "wieder und stellt ..."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_SacredAsh,
        .effect = gItemEffect_SacredAsh,
        .flingPower = 30,
        .iconPic = gItemIcon_DittoPowder,
        .iconPalette = gItemIconPalette_SacredAsh,
    },

    [ITEM_SWEET_HEART] =
    {
        .name = ITEM_NAME("Herzkonfekt"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 100,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Eine süße Schokolade,\n"
            "die KP um 20 Punkte\n"
            "wiederherstellt."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_Potion,
        .flingPower = 30,
        .iconPic = gItemIcon_SweetHeart,
        .iconPalette = gItemIconPalette_SweetHeart,
    },

    [ITEM_MAX_HONEY] =
    {
        .name = ITEM_NAME("MAX HONEY"),
        .pluralName = ITEM_PLURAL_NAME("Max Honey"),
        .price = 8000,
        .description = sMaxReviveDesc,
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .effect = gItemEffect_MaxRevive,
        .flingPower = 30,
        .iconPic = gItemIcon_MaxHoney,
        .iconPalette = gItemIconPalette_MaxHoney,
    },

// Regional Specialties

    [ITEM_PEWTER_CRUNCHIES] =
    {
        .name = ITEM_NAME("Marmoria-Kräcker"),
        .pluralName = ITEM_PLURAL_NAME("Pewter Crunchies"),
        .price = 250,
        .description = sFullHealDesc,
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_PewterCrunchies,
        .iconPalette = gItemIconPalette_PewterCrunchies,
    },

    [ITEM_RAGE_CANDY_BAR] =
    {
        .name = ITEM_NAME("Wutkeks"),
        .price = (I_PRICE >= GEN_7) ? 350 : 300,
        .description = sFullHealDesc,
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_RageCandyBar,
        .iconPalette = gItemIconPalette_RageCandyBar,
    },

    [ITEM_LAVA_COOKIE] =
    {
        .name = ITEM_NAME("Lavakeks"),
        .price = (I_PRICE >= GEN_7) ? 350 : 200,
        .description = COMPOUND_STRING(
            "Eine lokale\n"
            "Spezialität, die alle\n"
            "Statusprobleme heilt."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_LavaCookie,
        .iconPalette = gItemIconPalette_LavaCookieAndLetter,
    },

    [ITEM_OLD_GATEAU] =
    {
        .name = ITEM_NAME("Spezialität"),
        .pluralName = ITEM_PLURAL_NAME("Old Gateaux"),
        .price = (I_PRICE >= GEN_7) ? 350 : 200,
        .description = sFullHealDesc,
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_OldGateau,
        .iconPalette = gItemIconPalette_OldGateau,
    },

    [ITEM_CASTELIACONE] =
    {
        .name = ITEM_NAME("Stratos-Eis"),
        .price = (I_PRICE >= GEN_7) ? 350 : 100,
        .description = sFullHealDesc,
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_Casteliacone,
        .iconPalette = gItemIconPalette_Casteliacone,
    },

    [ITEM_LUMIOSE_GALETTE] =
    {
        .name = ITEM_NAME("Illumina-Galette"),
        .price = (I_PRICE >= GEN_7) ? 350 : 200,
        .description = sFullHealDesc,
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_LumioseGalette,
        .iconPalette = gItemIconPalette_LumioseGalette,
    },

    [ITEM_SHALOUR_SABLE] =
    {
        .name = ITEM_NAME("Yantara-Sablé"),
        .price = (I_PRICE >= GEN_7) ? 350 : 200,
        .description = sFullHealDesc,
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_ShalourSable,
        .iconPalette = gItemIconPalette_ShalourSable,
    },

    [ITEM_BIG_MALASADA] =
    {
        .name = ITEM_NAME("Maxi-Malasada"),
        .price = 350,
        .description = sFullHealDesc,
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_BigMalasada,
        .iconPalette = gItemIconPalette_BigMalasada,
    },

// Vitamins

    [ITEM_HP_UP] =
    {
        .name = ITEM_NAME("KP-Plus"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
        .description = COMPOUND_STRING(
            "Erhöht die Basis-\n"
            "KP eines Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_DRINK,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_HPUp,
        .flingPower = 30,
        .iconPic = gItemIcon_HPUp,
        .iconPalette = gItemIconPalette_HPUp,
    },

    [ITEM_PROTEIN] =
    {
        .name = ITEM_NAME("Protein"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
        .description = COMPOUND_STRING(
            "Erhöht den Basis-\n"
            "Angriffswert eines\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_DRINK,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_Protein,
        .flingPower = 30,
        .iconPic = gItemIcon_Vitamin,
        .iconPalette = gItemIconPalette_Protein,
    },

    [ITEM_IRON] =
    {
        .name = ITEM_NAME("Eisen"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
        .description = COMPOUND_STRING(
            "Erhöht den\n"
            "Basisverteidigungswert\n"
            "eines Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_DRINK,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_Iron,
        .flingPower = 30,
        .iconPic = gItemIcon_Vitamin,
        .iconPalette = gItemIconPalette_Iron,
    },

    [ITEM_CALCIUM] =
    {
        .name = ITEM_NAME("Kalzium"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
        .description = COMPOUND_STRING(
            "Erhöht den Basis-\n"
            "Sp. Angriffswert\n"
            "eines Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_DRINK,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_Calcium,
        .flingPower = 30,
        .iconPic = gItemIcon_Vitamin,
        .iconPalette = gItemIconPalette_Calcium,
    },

    [ITEM_ZINC] =
    {
        .name = ITEM_NAME("Zink"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
        .description = COMPOUND_STRING(
            "Erhöht den Basis-Sp.\n"
            "Verteidigungsstatus\n"
            "eines Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_DRINK,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_Zinc,
        .flingPower = 30,
        .iconPic = gItemIcon_Vitamin,
        .iconPalette = gItemIconPalette_Zinc,
    },

    [ITEM_CARBOS] =
    {
        .name = ITEM_NAME("Carbon"),
        .pluralName = ITEM_PLURAL_NAME("Carbos"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
        .description = COMPOUND_STRING(
            "Erhöht den\n"
            "Basisgeschwindigkeitswert\n"
            "eines Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_DRINK,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_Carbos,
        .flingPower = 30,
        .iconPic = gItemIcon_Vitamin,
        .iconPalette = gItemIconPalette_Carbos,
    },

    [ITEM_PP_UP] =
    {
        .name = ITEM_NAME("AP-Plus"),
    #if I_PRICE >= GEN_7
        .price = 10000,
    #elif I_PRICE >= GEN_2
        .price = 9800,
    #else
        .price = 1,
    #endif
        .description = COMPOUND_STRING(
            "Erhöht den\n"
            "maximalen PP eines\n"
            "ausgewählten Zuges."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_DRINK,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
        .effect = gItemEffect_PPUp,
        .flingPower = 30,
        .iconPic = gItemIcon_PPUp,
        .iconPalette = gItemIconPalette_PPUp,
    },

    [ITEM_PP_MAX] =
    {
        .name = ITEM_NAME("AP-Top"),
        .pluralName = ITEM_PLURAL_NAME("PP Maxes"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
        .description = COMPOUND_STRING(
            "Erhöht den PP einer\n"
            "Bewegung auf die\n"
            "maximale Punktzahl."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_DRINK,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
        .effect = gItemEffect_PPMax,
        .flingPower = 30,
        .iconPic = gItemIcon_PPMax,
        .iconPalette = gItemIconPalette_PPMax,
    },

// EV Feathers

    [ITEM_HEALTH_FEATHER] =
    {
        .name = ITEM_NAME("Heilfeder"),
        .price = (I_PRICE >= GEN_7) ? 300 : 3000,
        .description = sHealthFeatherDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_FEATHER,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_HpFeather,
        .flingPower = 20,
        .iconPic = gItemIcon_EVFeather,
        .iconPalette = gItemIconPalette_HealthFeather,
    },

    [ITEM_MUSCLE_FEATHER] =
    {
        .name = ITEM_NAME("Kraftfeder"),
        .price = (I_PRICE >= GEN_7) ? 300 : 3000,
        .description = sMuscleFeatherDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_FEATHER,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_AtkFeather,
        .flingPower = 20,
        .iconPic = gItemIcon_EVFeather,
        .iconPalette = gItemIconPalette_MuscleFeather,
    },

    [ITEM_RESIST_FEATHER] =
    {
        .name = ITEM_NAME("Abwehrfeder"),
        .price = (I_PRICE >= GEN_7) ? 300 : 3000,
        .description = sResistFeatherDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_FEATHER,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_DefFeather,
        .flingPower = 20,
        .iconPic = gItemIcon_EVFeather,
        .iconPalette = gItemIconPalette_ResistFeather,
    },

    [ITEM_GENIUS_FEATHER] =
    {
        .name = ITEM_NAME("Geniefeder"),
        .price = (I_PRICE >= GEN_7) ? 300 : 3000,
        .description = sGeniusFeatherDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_FEATHER,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_SpatkFeather,
        .flingPower = 20,
        .iconPic = gItemIcon_EVFeather,
        .iconPalette = gItemIconPalette_GeniusFeather,
    },

    [ITEM_CLEVER_FEATHER] =
    {
        .name = ITEM_NAME("Espritfeder"),
        .price = (I_PRICE >= GEN_7) ? 300 : 3000,
        .description = sCleverFeatherDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_FEATHER,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_SpdefFeather,
        .flingPower = 20,
        .iconPic = gItemIcon_EVFeather,
        .iconPalette = gItemIconPalette_CleverFeather,
    },

    [ITEM_SWIFT_FEATHER] =
    {
        .name = ITEM_NAME("Flinkfeder"),
        .price = (I_PRICE >= GEN_7) ? 300 : 3000,
        .description = sSwiftFeatherDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_FEATHER,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_SpeedFeather,
        .flingPower = 20,
        .iconPic = gItemIcon_EVFeather,
        .iconPalette = gItemIconPalette_SwiftFeather,
    },

// Ability Modifiers

    [ITEM_ABILITY_CAPSULE] =
    {
        .name = ITEM_NAME("Fähigk.-Kapsel"),
    #if I_PRICE >= GEN_9
        .price = 100000,
    #elif I_PRICE >= GEN_7
        .price = 10000,
    #else
        .price = 1000,
    #endif
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Ändert die\n"
            "Fähigkeit eines\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_AbilityCapsule,
        .iconPic = gItemIcon_AbilityCapsule,
        .iconPalette = gItemIconPalette_AbilityCapsule,
    },

    [ITEM_ABILITY_PATCH] =
    {
        .name = ITEM_NAME("ABILITY PATCH"),
        .pluralName = ITEM_PLURAL_NAME("Ability Patches"),
        .price = (I_PRICE >= GEN_9) ? 250000 : 20,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Verwandelt die Fähigkeit\n"
            "eines Pokémon in eine\n"
            "seltene Fähigkeit."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_AbilityPatch,
        .iconPic = gItemIcon_AbilityPatch,
        .iconPalette = gItemIconPalette_AbilityPatch,
    },

// Mints

    [ITEM_LONELY_MINT] =
    {
        .name = ITEM_NAME("LONELY MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht den Angriff,\n"
            "verringert aber ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_LONELY,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_RedMint,
    },

    [ITEM_ADAMANT_MINT] =
    {
        .name = ITEM_NAME("ADAMANT MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht den Angriff,\n"
            "verringert aber die ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_ADAMANT,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_RedMint,
    },

    [ITEM_NAUGHTY_MINT] =
    {
        .name = ITEM_NAME("NAUGHTY MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht den Angriff,\n"
            "verringert aber die ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_NAUGHTY,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_RedMint,
    },

    [ITEM_BRAVE_MINT] =
    {
        .name = ITEM_NAME("BRAVE MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht den Angriff,\n"
            "verringert jedoch ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_BRAVE,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_RedMint,
    },

    [ITEM_BOLD_MINT] =
    {
        .name = ITEM_NAME("BOLD MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht die Verteidigung,\n"
            "verringert aber ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_BOLD,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_BlueMint,
    },

    [ITEM_IMPISH_MINT] =
    {
        .name = ITEM_NAME("IMPISH MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht die Verteidigung,\n"
            "verringert aber die ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_IMPISH,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_BlueMint,
    },

    [ITEM_LAX_MINT] =
    {
        .name = ITEM_NAME("LAX MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht die Verteidigung,\n"
            "verringert aber die ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_LAX,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_BlueMint,
    },

    [ITEM_RELAXED_MINT] =
    {
        .name = ITEM_NAME("RELAXED MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht die Verteidigung,\n"
            "verringert jedoch ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_RELAXED,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_BlueMint,
    },

    [ITEM_MODEST_MINT] =
    {
        .name = ITEM_NAME("MODEST MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht Sp. Angriff,\n"
            "reduziert aber ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_MODEST,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_LightBlueMint,
    },

    [ITEM_MILD_MINT] =
    {
        .name = ITEM_NAME("MILD MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht Sp. Angriff,\n"
            "verringert aber ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_MILD,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_LightBlueMint,
    },

    [ITEM_RASH_MINT] =
    {
        .name = ITEM_NAME("RASH MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht Sp. Angriff,\n"
            "reduziert aber Sp. Def."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_RASH,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_LightBlueMint,
    },

    [ITEM_QUIET_MINT] =
    {
        .name = ITEM_NAME("QUIET MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht Sp. Angriff,\n"
            "verringert aber ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_QUIET,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_LightBlueMint,
    },

    [ITEM_CALM_MINT] =
    {
        .name = ITEM_NAME("CALM MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht Sp. Def, reduziert\n"
            "aber den Angriff."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_CALM,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_PinkMint,
    },

    [ITEM_GENTLE_MINT] =
    {
        .name = ITEM_NAME("GENTLE MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht Sp. Def,\n"
            "verringert aber ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_GENTLE,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_PinkMint,
    },

    [ITEM_CAREFUL_MINT] =
    {
        .name = ITEM_NAME("CAREFUL MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht Sp. Def, reduziert\n"
            "aber Sp. Angriff."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_CAREFUL,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_PinkMint,
    },

    [ITEM_SASSY_MINT] =
    {
        .name = ITEM_NAME("SASSY MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht Sp. Def,\n"
            "verringert aber ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_SASSY,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_PinkMint,
    },

    [ITEM_TIMID_MINT] =
    {
        .name = ITEM_NAME("TIMID MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht die\n"
            "Geschwindigke..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_TIMID,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_GreenMint,
    },

    [ITEM_HASTY_MINT] =
    {
        .name = ITEM_NAME("HASTY MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht die\n"
            "Geschwindigke..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_HASTY,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_GreenMint,
    },

    [ITEM_JOLLY_MINT] =
    {
        .name = ITEM_NAME("JOLLY MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht die\n"
            "Geschwindigke..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_JOLLY,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_GreenMint,
    },

    [ITEM_NAIVE_MINT] =
    {
        .name = ITEM_NAME("NAIVE MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen. Es\n"
            "erhöht die\n"
            "Geschwindigke..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_NAIVE,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_GreenMint,
    },

    [ITEM_SERIOUS_MINT] =
    {
        .name = ITEM_NAME("SERIOUS MINT"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "Kann man riechen.\n"
            "Dadurch wächst jeder\n"
            "Wert gleichmäßig."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NATURE_MINT,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_SERIOUS,
        .flingPower = 10,
        .iconPic = gItemIcon_Mint,
        .iconPalette = gItemIconPalette_YellowMint,
    },

// Candy

    [ITEM_RARE_CANDY] =
    {
        .name = ITEM_NAME("Sonderbonbon"),
        .pluralName = ITEM_PLURAL_NAME("Rare Candies"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 4800,
        .description = COMPOUND_STRING(
            "Erhöht die Stufe\n"
            "eines Pokémon um\n"
            "eins."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_LEVEL_UP_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .effect = gItemEffect_RareCandy,
        .flingPower = 30,
        .iconPic = gItemIcon_RareCandy,
        .iconPalette = gItemIconPalette_RareCandy,
    },

    [ITEM_EXP_CANDY_XS] =
    {
        .name = ITEM_NAME("EXP. CANDY XS"),
        .pluralName = ITEM_PLURAL_NAME("Exp. Candies XS"),
        .price = 20,
        .holdEffectParam = EXP_100,
        .description = COMPOUND_STRING(
            "Gibt eine sehr kleine\n"
            "Menge an Erfahrung. zu\n"
            "einem einzelnen Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_LEVEL_UP_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .effect = gItemEffect_RareCandy,
        .flingPower = 30,
        .iconPic = gItemIcon_ExpCandyXS,
        .iconPalette = gItemIconPalette_ExpCandies,
    },

    [ITEM_EXP_CANDY_S] =
    {
        .name = ITEM_NAME("EXP. CANDY S"),
        .pluralName = ITEM_PLURAL_NAME("Exp. Candies S"),
        .price = 240,
        .holdEffectParam = EXP_800,
        .description = COMPOUND_STRING(
            "Gibt eine kleine Menge\n"
            "an Erfahrung. zu einem\n"
            "einzelnen Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_LEVEL_UP_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .effect = gItemEffect_RareCandy,
        .flingPower = 30,
        .iconPic = gItemIcon_ExpCandyS,
        .iconPalette = gItemIconPalette_ExpCandies,
    },

    [ITEM_EXP_CANDY_M] =
    {
        .name = ITEM_NAME("EXP. CANDY M"),
        .pluralName = ITEM_PLURAL_NAME("Exp. Candies M"),
        .price = 1000,
        .holdEffectParam = EXP_3000,
        .description = COMPOUND_STRING(
            "Gibt eine moderate Menge\n"
            "an Erfahrung. zu einem\n"
            "einzelnen Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_LEVEL_UP_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .effect = gItemEffect_RareCandy,
        .flingPower = 30,
        .iconPic = gItemIcon_ExpCandyM,
        .iconPalette = gItemIconPalette_ExpCandies,
    },

    [ITEM_EXP_CANDY_L] =
    {
        .name = ITEM_NAME("EXP. CANDY L"),
        .pluralName = ITEM_PLURAL_NAME("Exp. Candies L"),
        .price = 3000,
        .holdEffectParam = EXP_10000,
        .description = COMPOUND_STRING(
            "Gibt eine große Menge\n"
            "an Exp. zu einem\n"
            "einzelnen Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_LEVEL_UP_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .effect = gItemEffect_RareCandy,
        .flingPower = 30,
        .iconPic = gItemIcon_ExpCandyL,
        .iconPalette = gItemIconPalette_ExpCandies,
    },

    [ITEM_EXP_CANDY_XL] =
    {
        .name = ITEM_NAME("EXP. CANDY XL"),
        .pluralName = ITEM_PLURAL_NAME("Exp. Candies XL"),
        .price = 10000,
        .holdEffectParam = EXP_30000,
        .description = COMPOUND_STRING(
            "Gibt eine sehr große\n"
            "Menge an Exp. zu einem\n"
            "einzelnen Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_LEVEL_UP_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .effect = gItemEffect_RareCandy,
        .flingPower = 30,
        .iconPic = gItemIcon_ExpCandyXL,
        .iconPalette = gItemIconPalette_ExpCandies,
    },

    [ITEM_DYNAMAX_CANDY] =
    {
        .name = ITEM_NAME("DYNAMAX CANDY"),
        .pluralName = ITEM_PLURAL_NAME("Dynamax Candies"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Erhöht die Dynamax-\n"
            "Stufe eines einzelnen\n"
            "Pokémon um eins."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_LEVEL_UP_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_DynamaxCandy,
        .flingPower = 30,
        .iconPic = gItemIcon_DynamaxCandy,
        .iconPalette = gItemIconPalette_DynamaxCandy,
    },

// Medicinal Flutes

    [ITEM_BLUE_FLUTE] =
    {
        .name = ITEM_NAME("Blaue Flöte"),
        .price = (I_PRICE >= GEN_7) ? 20 : 100,
        .description = COMPOUND_STRING(
            "Eine Glasflöte,\n"
            "die schlafende\n"
            "Pokémon weckt."),
        .notConsumed = TRUE,
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_FLUTE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Awakening,
        .flingPower = 30,
        .iconPic = gItemIcon_Flute,
        .iconPalette = gItemIconPalette_BlueFlute,
    },

    [ITEM_YELLOW_FLUTE] =
    {
        .name = ITEM_NAME("Gelbe Flöte"),
        .price = (I_PRICE >= GEN_7) ? 20 : 300,
        .description = COMPOUND_STRING(
            "Eine Glasflöte, die\n"
            "Pokémon aus der\n"
            "Verwirrung reißt."),
        .notConsumed = TRUE,
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_FLUTE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_YellowFlute,
        .flingPower = 30,
        .iconPic = gItemIcon_Flute,
        .iconPalette = gItemIconPalette_YellowFlute,
    },

    [ITEM_RED_FLUTE] =
    {
        .name = ITEM_NAME("Rote Flöte"),
        .price = (I_PRICE >= GEN_7) ? 20 : 200,
        .description = COMPOUND_STRING(
            "Eine Glasflöte, die\n"
            "Pokémon aus der\n"
            "Anziehungskraft bringt."),
        .notConsumed = TRUE,
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_FLUTE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_RedFlute,
        .flingPower = 30,
        .iconPic = gItemIcon_Flute,
        .iconPalette = gItemIconPalette_RedFlute,
    },

// Encounter-modifying Flutes

    [ITEM_BLACK_FLUTE] =
    {
        .name = ITEM_NAME("Schw. Flöte"),
        .price = (I_PRICE >= GEN_7) ? 20 : 400,
        .holdEffectParam = 50,
        .description = COMPOUND_STRING(
            "Eine Glasflöte,\n"
            "die wilde Pokémon\n"
            "fernhält."),
        .notConsumed = TRUE,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FLUTE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
        .flingPower = 30,
        .iconPic = gItemIcon_Flute,
        .iconPalette = gItemIconPalette_BlackFlute,
    },

    [ITEM_WHITE_FLUTE] =
    {
        .name = ITEM_NAME("Weisse Flöte"),
        .price = (I_PRICE >= GEN_7) ? 20 : 500,
        .holdEffectParam = 150,
        .description = COMPOUND_STRING(
            "Eine Glasflöte,\n"
            "die wilde Pokémon\n"
            "anlockt."),
        .notConsumed = TRUE,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FLUTE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
        .flingPower = 30,
        .iconPic = gItemIcon_Flute,
        .iconPalette = gItemIconPalette_WhiteFlute,
    },

// Encounter Modifiers

    [ITEM_REPEL] =
    {
        .name = ITEM_NAME("Schutz"),
        .price = (I_PRICE >= GEN_7) ? 400 : 350,
        .holdEffectParam = 100,
        .description = COMPOUND_STRING(
            "Weist schwache\n"
            "Wild-Pokémon 100\n"
            "Schritte lang ab."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .flingPower = 30,
        .iconPic = gItemIcon_Repel,
        .iconPalette = gItemIconPalette_Repel,
    },

    [ITEM_SUPER_REPEL] =
    {
        .name = ITEM_NAME("Superschutz"),
        .price = (I_PRICE >= GEN_7) ? 700 : 500,
        .holdEffectParam = 200,
        .description = COMPOUND_STRING(
            "Weist schwache\n"
            "Wild-Pokémon 200\n"
            "Schritte lang ab."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .flingPower = 30,
        .iconPic = gItemIcon_Repel,
        .iconPalette = gItemIconPalette_SuperRepel,
    },

    [ITEM_MAX_REPEL] =
    {
        .name = ITEM_NAME("Top-Schutz"),
        .price = (I_PRICE >= GEN_7) ? 900 : 700,
        .holdEffectParam = 250,
        .description = COMPOUND_STRING(
            "Weist schwache\n"
            "Wild-Pokémon 250\n"
            "Schritte lang ab."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .flingPower = 30,
        .iconPic = gItemIcon_Repel,
        .iconPalette = gItemIconPalette_MaxRepel,
    },

    [ITEM_LURE] =
    {
        .name = ITEM_NAME("Lockparfüm"),
        .price = 400,
        .holdEffectParam = 100,
        .description = COMPOUND_STRING(
            "Erhöht die\n"
            "Wahrscheinlichkeit, dass\n"
            "Pokémon 100 Schritte l..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Lure,
        .secondaryId = 0,
        .flingPower = 30,
        .iconPic = gItemIcon_Lure,
        .iconPalette = gItemIconPalette_Lure,
    },

    [ITEM_SUPER_LURE] =
    {
        .name = ITEM_NAME("Super-Lockparfüm"),
        .price = 700,
        .holdEffectParam = 200,
        .description = COMPOUND_STRING(
            "Erhöht die\n"
            "Wahrscheinlichkeit, dass\n"
            "Pokémon 200 Schritte l..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Lure,
        .secondaryId = 0,
        .flingPower = 30,
        .iconPic = gItemIcon_Lure,
        .iconPalette = gItemIconPalette_SuperLure,
    },

    [ITEM_MAX_LURE] =
    {
        .name = ITEM_NAME("Top-Lockparfüm"),
        .price = 900,
        .holdEffectParam = 250,
        .description = COMPOUND_STRING(
            "Erhöht die\n"
            "Wahrscheinlichkeit, dass\n"
            "Pokémon 250 Schritte l..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Lure,
        .secondaryId = 0,
        .flingPower = 30,
        .iconPic = gItemIcon_Lure,
        .iconPalette = gItemIconPalette_MaxLure,
    },

    [ITEM_ESCAPE_ROPE] =
    {
        .name = ITEM_NAME("Fluchtseil"),
        .description = COMPOUND_STRING(
            "Verwenden Sie diese\n"
            "Option, um sofort aus\n"
            "einer Höhle oder ei..."),
    #if I_KEY_ESCAPE_ROPE >= GEN_8
        .price = 0,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
    #else
        .price = (I_PRICE >= GEN_7) ? 1000 : 550,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
    #endif
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_EscapeRope,
        .flingPower = 30,
        .iconPic = gItemIcon_EscapeRope,
        .iconPalette = gItemIconPalette_EscapeRope,
    },

// X Items

    [ITEM_X_ATTACK] =
    {
        .name = ITEM_NAME("X-Angriff"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 500,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Erhöht Ang.-\n"
            "Wert stark\n"
            "im Kampf."),
        #else
            "Erhöht Ang.-\n"
            "Wert\n"
            "im Kampf."),
        #endif
        .pocket = POCKET_BATTLE_ITEMS,
        .sortType = ITEM_TYPE_X_ITEM,
        .type = B_X_ITEMS_CROSSUSE ? ITEM_USE_BATTLER : ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .effect = gItemEffect_XAttack,
        .flingPower = 30,
        .iconPic = gItemIcon_BattleStatItem,
        .iconPalette = gItemIconPalette_XAttack,
    },

    [ITEM_X_DEFENSE] =
    {
        .name = ITEM_NAME("X-Verteidigung"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 550,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Erhöht Vert.\n"
            "Wert\n"
            "im Kampf."),
        #else
            "Erhöht Vert.\n"
            "Wert\n"
            "im Kampf."),
        #endif
        .pocket = POCKET_BATTLE_ITEMS,
        .sortType = ITEM_TYPE_X_ITEM,
        .type = B_X_ITEMS_CROSSUSE ? ITEM_USE_BATTLER : ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .effect = gItemEffect_XDefense,
        .flingPower = 30,
        .iconPic = gItemIcon_BattleStatItem,
        .iconPalette = gItemIconPalette_XDefend,
    },

    [ITEM_X_SP_ATK] =
    {
        .name = ITEM_NAME("X-Sp.-Ang."),
        .price = (I_PRICE >= GEN_7) ? 1000 : 350,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Erhöht Sp.Ang.\n"
            "Wert stark\n"
            "im Kampf."),
        #else
            "Erhöht Sp.Ang.\n"
            "Wert\n"
            "im Kampf."),
        #endif
        .pocket = POCKET_BATTLE_ITEMS,
        .sortType = ITEM_TYPE_X_ITEM,
        .type = B_X_ITEMS_CROSSUSE ? ITEM_USE_BATTLER : ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .effect = gItemEffect_XSpecialAttack,
        .flingPower = 30,
        .iconPic = gItemIcon_BattleStatItem,
        .iconPalette = gItemIconPalette_XSpecial,
    },

    [ITEM_X_SP_DEF] =
    {
        .name = ITEM_NAME("X-Sp.-Vert."),
        .price = (I_PRICE >= GEN_7) ? 2000 : 350,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Erhöht SP.Vert.\n"
            "Wert stark\n"
            "im Kampf."),
        #else
            "Erhöht SP.Vert.\n"
            "Wert\n"
            "im Kampf."),
        #endif
        .pocket = POCKET_BATTLE_ITEMS,
        .sortType = ITEM_TYPE_X_ITEM,
        .type = B_X_ITEMS_CROSSUSE ? ITEM_USE_BATTLER : ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .effect = gItemEffect_XSpecialDefense,
        .flingPower = 30,
        .iconPic = gItemIcon_BattleStatItem,
        .iconPalette = gItemIconPalette_XSpecialDefense,
    },

    [ITEM_X_SPEED] =
    {
        .name = ITEM_NAME("X-Initiative"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 350,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Erhöht Initiative\n"
            "Wert stark\n"
            "im Kampf."),
        #else
            "Erhöht Initiative\n"
            "Wert\n"
            "im Kampf."),
        #endif
        .pocket = POCKET_BATTLE_ITEMS,
        .sortType = ITEM_TYPE_X_ITEM,
        .type = B_X_ITEMS_CROSSUSE ? ITEM_USE_BATTLER : ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .effect = gItemEffect_XSpeed,
        .flingPower = 30,
        .iconPic = gItemIcon_BattleStatItem,
        .iconPalette = gItemIconPalette_XSpeed,
    },

    [ITEM_X_ACCURACY] =
    {
        .name = ITEM_NAME("X-Genauigkeit"),
        .pluralName = ITEM_PLURAL_NAME("X Accuracies"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 950,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Erhöht Genauigkeit\n"
            "Wert stark\n"
            "im Kampf."),
        #else
            "Erhöht Genauigkeit\n"
            "Wert\n"
            "im Kampf."),
        #endif
        .pocket = POCKET_BATTLE_ITEMS,
        .sortType = ITEM_TYPE_X_ITEM,
        .type = B_X_ITEMS_CROSSUSE ? ITEM_USE_BATTLER : ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .effect = gItemEffect_XAccuracy,
        .flingPower = 30,
        .iconPic = gItemIcon_BattleStatItem,
        .iconPalette = gItemIconPalette_XAccuracy,
    },

    [ITEM_DIRE_HIT] =
    {
        .name = ITEM_NAME("Angriffplus"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 650,
        .description = COMPOUND_STRING(
            "Erhöht die kritische\n"
            "Trefferquote während\n"
            "eines Kampfes."),
        .pocket = POCKET_BATTLE_ITEMS,
        .sortType = ITEM_TYPE_X_ITEM,
        .type = B_X_ITEMS_CROSSUSE ? ITEM_USE_BATTLER : ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_SET_FOCUS_ENERGY,
        .effect = gItemEffect_DireHit,
        .flingPower = 30,
        .iconPic = gItemIcon_BattleStatItem,
        .iconPalette = gItemIconPalette_DireHit,
    },

    [ITEM_GUARD_SPEC] =
    {
        .name = ITEM_NAME("Megablock"),
        .pluralName = ITEM_PLURAL_NAME("Guard Specs."),
        .price = (I_PRICE >= GEN_7) ? 1500 : 700,
        .description = COMPOUND_STRING(
            "Verhindert die\n"
            "Reduzierung der Werte\n"
            "beim Einsatz im Kampf."),
        .pocket = POCKET_BATTLE_ITEMS,
        .sortType = ITEM_TYPE_X_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_SET_MIST,
        .effect = gItemEffect_GuardSpec,
        .flingPower = 30,
        .iconPic = gItemIcon_BattleStatItem,
        .iconPalette = gItemIconPalette_GuardSpec,
    },

    [ITEM_POKE_DOLL] =
    {
        .name = ITEM_NAME("Poképuppe"),
    #if I_PRICE >= GEN_8
        .price = 300,
    #elif I_PRICE == GEN_7
        .price = 100,
    #else
        .price = 1000,
    #endif
        .description = sPokeDollDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .sortType = ITEM_TYPE_BATTLE_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_ESCAPE,
        .flingPower = 30,
        .iconPic = gItemIcon_PokeDoll,
        .iconPalette = gItemIconPalette_PokeDoll,
    },

    [ITEM_FLUFFY_TAIL] =
    {
        .name = ITEM_NAME("Eneco-Rute"),
        .price = (I_PRICE >= GEN_7) ? 100 : 1000,
        .description = sPokeDollDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .sortType = ITEM_TYPE_BATTLE_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_ESCAPE,
        .flingPower = 30,
        .iconPic = gItemIcon_FluffyTail,
        .iconPalette = gItemIconPalette_FluffyTail,
    },

    [ITEM_POKE_TOY] =
    {
        .name = ITEM_NAME("Pokéwedel"),
        .price = (I_PRICE >= GEN_7) ? 100 : 1000,
        .description = sPokeDollDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .sortType = ITEM_TYPE_BATTLE_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_ESCAPE,
        .flingPower = 30,
        .iconPic = gItemIcon_PokeToy,
        .iconPalette = gItemIconPalette_PokeToy,
    },

    [ITEM_MAX_MUSHROOMS] =
    {
        .name = ITEM_NAME("MAX MUSHROOMS"),
        .pluralName = ITEM_PLURAL_NAME("Max Mushrooms"),
        .price = 8000,
        .description = COMPOUND_STRING(
            "Erhöht jeden Wert\n"
            "während eines Kampfes\n"
            "um eine Stufe."),
        .pocket = POCKET_BATTLE_ITEMS,
        .sortType = ITEM_TYPE_BATTLE_ITEM,
        .type = B_X_ITEMS_CROSSUSE ? ITEM_USE_BATTLER : ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_ALL_STATS,
        .flingPower = 30,
        .iconPic = gItemIcon_MaxMushrooms,
        .iconPalette = gItemIconPalette_MaxMushrooms,
    },

// Treasures

    [ITEM_BOTTLE_CAP] =
    {
        .name = ITEM_NAME("Silberkronkorken"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 5000,
        .description = COMPOUND_STRING(
            "Ein wunderschöner\n"
            "Flaschenverschluss, der\n"
            "einen silbernen Gl..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_BottleCap,
        .iconPalette = gItemIconPalette_BottleCap,
    },

    [ITEM_GOLD_BOTTLE_CAP] =
    {
        .name = ITEM_NAME("Goldkronkorken"),
        .price = (I_PRICE >= GEN_9) ? 60000 : 10000,
        .description = COMPOUND_STRING(
            "Ein wunderschöner\n"
            "Flaschenverschluss, der\n"
            "einen goldenen Gl..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_BottleCap,
        .iconPalette = gItemIconPalette_GoldBottleCap,
    },

    [ITEM_NUGGET] =
    {
        .name = ITEM_NAME("Nugget"),
        .price = 10000 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "Ein Nugget aus reinem\n"
            "Gold. Kann zu einem hohen\n"
            "Preis verkauft werden."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Nugget,
        .iconPalette = gItemIconPalette_Nugget,
    },

    [ITEM_BIG_NUGGET] =
    {
        .name = ITEM_NAME("Riesennugget"),
    #if I_PRICE >= GEN_7
        .price = 40000 * TREASURE_FACTOR,
    #elif I_PRICE == GEN_6
        .price = 20000,
    #else
        .price = 0,
    #endif
        .description = COMPOUND_STRING(
            "Ein großer Goldklumpen,\n"
            "der zu einem hohen Preis\n"
            "verkauft werden kann."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = B_UPDATED_MOVE_DATA >= GEN_8 ? 130 : 80,
        .iconPic = gItemIcon_BigNugget,
        .iconPalette = gItemIconPalette_BigNugget,
    },

    [ITEM_TINY_MUSHROOM] =
    {
        .name = ITEM_NAME("Minipilz"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "Ein einfacher Pilz, der\n"
            "zu einem günstigen Preis\n"
            "verkauft werden würde."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_TinyMushroom,
        .iconPalette = gItemIconPalette_Mushroom,
    },

    [ITEM_BIG_MUSHROOM] =
    {
        .name = ITEM_NAME("Riesenpilz"),
        .price = 5000 * TREASURE_FACTOR,
        .description = sBigMushroomDesc,
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_BigMushroom,
        .iconPalette = gItemIconPalette_Mushroom,
    },

    [ITEM_BALM_MUSHROOM] =
    {
        .name = ITEM_NAME("Duftpilz"),
    #if I_PRICE >= GEN_7
        .price = 15000 * TREASURE_FACTOR,
    #elif I_PRICE == GEN_6
        .price = 12500,
    #else
        .price = 0,
    #endif
        .description = sBigMushroomDesc,
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_BalmMushroom,
        .iconPalette = gItemIconPalette_BalmMushroom,
    },

    [ITEM_PEARL] =
    {
        .name = ITEM_NAME("Perle"),
        .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR: 1400,
        .description = COMPOUND_STRING(
            "Eine hübsche Perle, die\n"
            "zu einem günstigen Preis\n"
            "verkauft werden würde."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Pearl,
        .iconPalette = gItemIconPalette_Pearl,
    },

    [ITEM_BIG_PEARL] =
    {
        .name = ITEM_NAME("Riesenperle"),
        .price = (I_PRICE >= GEN_7) ? 8000 * TREASURE_FACTOR: 7500,
        .description = COMPOUND_STRING(
            "Eine schöne große Perle,\n"
            "die zu einem hohen Preis\n"
            "verkauft werden würde."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_BigPearl,
        .iconPalette = gItemIconPalette_Pearl,
    },

    [ITEM_PEARL_STRING] =
    {
        .name = ITEM_NAME("Triperle"),
    #if I_PRICE >= GEN_8
        .price = 20000 * TREASURE_FACTOR,
    #elif I_PRICE == GEN_7
        .price = 30000,
    #elif I_PRICE == GEN_6
        .price = 15000,
    #else
        .price = 0,
    #endif
        .description = COMPOUND_STRING(
            "Sehr große Perlen, die\n"
            "zu einem hohen Preis\n"
            "verkauft werden würden."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_PearlString,
        .iconPalette = gItemIconPalette_PearlString,
    },

    [ITEM_STARDUST] =
    {
        .name = ITEM_NAME("Sternenstaub"),
        .price = (I_PRICE >= GEN_7) ? 3000 * TREASURE_FACTOR: 2000,
        .description = COMPOUND_STRING(
            "Wunderschöner roter Sand.\n"
            "Kann zu einem hohen Preis\n"
            "verkauft werden."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Sand,
        .iconPalette = gItemIconPalette_Star,
    },

    [ITEM_STAR_PIECE] =
    {
        .name = ITEM_NAME("Sternenstück"),
        .price = (I_PRICE >= GEN_7) ? 12000 * TREASURE_FACTOR: 9800,
        .description = COMPOUND_STRING(
            "Ein roter\n"
            "Edelsteinsplitter. Es\n"
            "würde zu einem sehr ho..."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_StarPiece,
        .iconPalette = gItemIconPalette_Star,
    },

    [ITEM_COMET_SHARD] =
    {
        .name = ITEM_NAME("Kometstück"),
    #if I_PRICE >= GEN_8
        .price = 25000 * TREASURE_FACTOR,
    #elif I_PRICE == GEN_7
        .price = 60000,
    #elif I_PRICE == GEN_6
        .price = 30000,
    #else
        .price = 0,
    #endif
        .description = COMPOUND_STRING(
            "Die Scherbe eines\n"
            "Kometen. Es würde zu\n"
            "einem hohen Pr..."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_StarPiece,
        .iconPalette = gItemIconPalette_CometShard,
    },

    [ITEM_SHOAL_SALT] =
    {
        .name = ITEM_NAME("Küstensalz"),
        .price = 20,
        .description = COMPOUND_STRING(
            "Salz, das tief im\n"
            "Inneren der Shoal\n"
            "Cave gewonnen wird."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Powder,
        .iconPalette = gItemIconPalette_ShoalSalt,
    },

    [ITEM_SHOAL_SHELL] =
    {
        .name = ITEM_NAME("Küstenschale"),
        .price = 20,
        .description = COMPOUND_STRING(
            "Eine Muschel, die\n"
            "tief in der Shoal\n"
            "Cave gefunden wurde."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_ShoalShell,
        .iconPalette = gItemIconPalette_Shell,
    },

    [ITEM_RED_SHARD] =
    {
        .name = ITEM_NAME("Purpurstück"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 200,
        .description = sShardsDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Shard,
        .iconPalette = gItemIconPalette_RedShard,
    },

    [ITEM_BLUE_SHARD] =
    {
        .name = ITEM_NAME("Indigostück"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 200,
        .description = sShardsDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Shard,
        .iconPalette = gItemIconPalette_BlueShard,
    },

    [ITEM_YELLOW_SHARD] =
    {
        .name = ITEM_NAME("Gelbstück"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 200,
        .description = sShardsDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Shard,
        .iconPalette = gItemIconPalette_YellowShard,
    },

    [ITEM_GREEN_SHARD] =
    {
        .name = ITEM_NAME("Grünstück"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 200,
        .description = sShardsDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Shard,
        .iconPalette = gItemIconPalette_GreenShard,
    },

    [ITEM_HEART_SCALE] =
    {
        .name = ITEM_NAME("Herzschuppe"),
        .price = 100,
        .description = COMPOUND_STRING(
            "Eine schöne Waage.\n"
            "Es ist bei\n"
            "Sammlern begehrt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_HeartScale,
        .iconPalette = gItemIconPalette_HeartScale,
    },

    [ITEM_HONEY] =
    {
        .name = ITEM_NAME("Honig"),
        .pluralName = ITEM_PLURAL_NAME("Honey"),
    #if I_PRICE >= GEN_8
        .price = 900,
    #elif I_PRICE == GEN_7
        .price = 300,
    #else
        .price = 100,
    #endif
        .description = COMPOUND_STRING(
            "Süßer Honig, der bei\n"
            "Verwendung wilde\n"
            "Pokémon anlockt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Honey,
        .flingPower = 30,
        .iconPic = gItemIcon_Honey,
        .iconPalette = gItemIconPalette_Honey,
    },

    [ITEM_RARE_BONE] =
    {
        .name = ITEM_NAME("Steinknochen"),
        .price = (I_PRICE >= GEN_7) ? 5000 * TREASURE_FACTOR: 10000,
        .description = COMPOUND_STRING(
            "Ein sehr seltener\n"
            "Knochen. Es kann zu einem\n"
            "hohen Preis verka..."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_Bone,
        .iconPalette = gItemIconPalette_Bone,
    },

    [ITEM_ODD_KEYSTONE] =
    {
        .name = ITEM_NAME("Spiritkern"),
        .price = 2100,
        .description = COMPOUND_STRING(
            "Gelegentlich sind Stimmen\n"
            "aus diesem seltsamen\n"
            "Stein zu hören."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_OddKeystone,
        .iconPalette = gItemIconPalette_OddKeystone,
    },

    [ITEM_PRETTY_FEATHER] =
    {
        .name = ITEM_NAME("Prachtfeder"),
        .price = (I_PRICE >= GEN_7) ? 1000 * TREASURE_FACTOR: 200,
        .description = COMPOUND_STRING(
            "Eine schöne, aber\n"
            "schlichte Feder,\n"
            "die nichts bewirkt."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 20,
        .iconPic = gItemIcon_PrettyFeather,
        .iconPalette = gItemIconPalette_PrettyFeather,
    },

    [ITEM_RELIC_COPPER] =
    {
        .name = ITEM_NAME("Alter Heller"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine vor langer Zeit\n"
            "verwendete Kupfermünze.\n"
            "Es wird zu einem ho..."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_RELIC,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_RelicCoin,
        .iconPalette = gItemIconPalette_RelicCopper,
    },

    [ITEM_RELIC_SILVER] =
    {
        .name = ITEM_NAME("Alter Taler"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine vor langer Zeit\n"
            "verwendete Silbermünze.\n"
            "Es wird zu einem ho..."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_RELIC,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_RelicCoin,
        .iconPalette = gItemIconPalette_RelicSilver,
    },

    [ITEM_RELIC_GOLD] =
    {
        .name = ITEM_NAME("Alter Dukat"),
        .price = (I_PRICE >= GEN_6) ? 60000 : 0,
        .description = COMPOUND_STRING(
            "Eine vor langer Zeit\n"
            "verwendete Goldmünze. Es\n"
            "wird zu einem hohen Pr..."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_RELIC,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_RelicCoin,
        .iconPalette = gItemIconPalette_RelicGold,
    },

    [ITEM_RELIC_VASE] =
    {
        .name = ITEM_NAME("Alte Vase"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine Vase, die vor langer\n"
            "Zeit hergestellt wurde.\n"
            "Es wird zu einem ho..."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_RELIC,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_RelicVase,
        .iconPalette = gItemIconPalette_Relics,
    },

    [ITEM_RELIC_BAND] =
    {
        .name = ITEM_NAME("Alter Reif"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein altes Armband. Es\n"
            "wird zu einem hohen\n"
            "Preis verkauft."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_RELIC,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_RelicBand,
        .iconPalette = gItemIconPalette_Relics,
    },

    [ITEM_RELIC_STATUE] =
    {
        .name = ITEM_NAME("Alte Statue"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine alte Statue. Es\n"
            "wird zu einem hohen\n"
            "Preis verkauft."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_RELIC,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_RelicStatue,
        .iconPalette = gItemIconPalette_Relics,
    },

    [ITEM_RELIC_CROWN] =
    {
        .name = ITEM_NAME("Alte Krone"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine alte Krone. Es\n"
            "wird zu einem hohen\n"
            "Preis verkauft."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_RELIC,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_RelicCrown,
        .iconPalette = gItemIconPalette_Relics,
    },

    [ITEM_STRANGE_SOUVENIR] =
    {
        .name = ITEM_NAME("Skurriloskulptur"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 10,
        .description = COMPOUND_STRING(
            "Ein Ornament, das\n"
            "ein Pokémon aus\n"
            "Alola darstellt."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_RELIC,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_StrangeSouvenir,
        .iconPalette = gItemIconPalette_StrangeSouvenir,
    },

// Fossils

    [ITEM_HELIX_FOSSIL] =
    {
        .name = ITEM_NAME("Helixfossil"),
        .description = COMPOUND_STRING(
            "Ein Stück der Muschel\n"
            "eines uralten Meeres-\n"
            "Pokémon."),
    #if I_KEY_FOSSILS >= GEN_4
        .price = (I_PRICE >= GEN_7) ? 7000: 1000,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
    #else
        .price = 0,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
    #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_HelixFossil,
        .iconPalette = gItemIconPalette_KantoFossil,
    },

    [ITEM_DOME_FOSSIL] =
    {
        .name = ITEM_NAME("Domfossil"),
        .description = COMPOUND_STRING(
            "Ein Teil der Muschel\n"
            "eines uralten\n"
            "Meeres-Pokémon."),
    #if I_KEY_FOSSILS >= GEN_4
        .price = (I_PRICE >= GEN_7) ? 7000: 1000,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
    #else
        .price = 0,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
    #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_DomeFossil,
        .iconPalette = gItemIconPalette_KantoFossil,
    },

    [ITEM_OLD_AMBER] =
    {
        .name = ITEM_NAME("Altbernstein"),
        .description = COMPOUND_STRING(
            "Ein Stein, der die\n"
            "Gene eines alten\n"
            "Pokémon enthält."),
    #if I_KEY_FOSSILS >= GEN_4
        .price = 1000,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
    #else
        .price = 0,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
    #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_OldAmber,
        .iconPalette = gItemIconPalette_OldAmber,
    },

    [ITEM_ROOT_FOSSIL] =
    {
        .name = ITEM_NAME("Wurzelfossil"),
        .description = sRootFossilDesc,
    #if I_KEY_FOSSILS >= GEN_4
        .price = (I_PRICE >= GEN_7) ? 7000: 1000,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
    #else
        .price = 0,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
    #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_RootFossil,
        .iconPalette = gItemIconPalette_HoennFossil,
    },

    [ITEM_CLAW_FOSSIL] =
    {
        .name = ITEM_NAME("Klauenfossil"),
        .description = sRootFossilDesc,
    #if I_KEY_FOSSILS >= GEN_4
        .price = (I_PRICE >= GEN_7) ? 7000: 1000,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
    #else
        .price = 0,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
    #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_ClawFossil,
        .iconPalette = gItemIconPalette_HoennFossil,
    },

    [ITEM_ARMOR_FOSSIL] =
    {
        .name = ITEM_NAME("Panzerfossil"),
        .price = (I_PRICE >= GEN_7) ? 7000: 1000,
        .description = COMPOUND_STRING(
            "Ein Teil des Kopfes\n"
            "eines prähistorischen\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_ArmorFossil,
        .iconPalette = gItemIconPalette_ArmorFossil,
    },

    [ITEM_SKULL_FOSSIL] =
    {
        .name = ITEM_NAME("Kopffossil"),
        .price = (I_PRICE >= GEN_7) ? 7000: 1000,
        .description = COMPOUND_STRING(
            "Ein Stück des Kragens\n"
            "eines prähistorischen\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_SkullFossil,
        .iconPalette = gItemIconPalette_SkullFossil,
    },

    [ITEM_COVER_FOSSIL] =
    {
        .name = ITEM_NAME("Schildfossil"),
        .price = (I_PRICE >= GEN_7) ? 7000: 1000,
        .description = COMPOUND_STRING(
            "Ein Stück vom Rücken\n"
            "eines prähistorischen\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_CoverFossil,
        .iconPalette = gItemIconPalette_CoverFossil,
    },

    [ITEM_PLUME_FOSSIL] =
    {
        .name = ITEM_NAME("Federfossil"),
        .price = (I_PRICE >= GEN_7) ? 7000: 1000,
        .description = COMPOUND_STRING(
            "Ein Teil des Flügels\n"
            "eines prähistorischen\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_PlumeFossil,
        .iconPalette = gItemIconPalette_PlumeFossil,
    },

    [ITEM_JAW_FOSSIL] =
    {
        .name = ITEM_NAME("Kieferfossil"),
        .price = (I_PRICE >= GEN_7) ? 7000: 1000,
        .description = COMPOUND_STRING(
            "Ein Teil des großen\n"
            "Kiefers eines\n"
            "prähistorischen Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_JawFossil,
        .iconPalette = gItemIconPalette_JawFossil,
    },

    [ITEM_SAIL_FOSSIL] =
    {
        .name = ITEM_NAME("Flossenfossil"),
        .price = (I_PRICE >= GEN_7) ? 7000: 1000,
        .description = COMPOUND_STRING(
            "Ein Stück des Hautsegels\n"
            "eines prähistorischen\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_SailFossil,
        .iconPalette = gItemIconPalette_SailFossil,
    },

    [ITEM_FOSSILIZED_BIRD] =
    {
        .name = ITEM_NAME("Vogelfossil"),
        .price = 5000,
        .description = COMPOUND_STRING(
            "Ein Fossil eines\n"
            "uralten, in den Himmel\n"
            "fliegenden Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_FossilizedBird,
        .iconPalette = gItemIconPalette_FossilizedBird,
    },

    [ITEM_FOSSILIZED_FISH] =
    {
        .name = ITEM_NAME("Fischfossil"),
        .pluralName = ITEM_PLURAL_NAME("Fossilized Fish"),
        .price = 5000,
        .description = sFossilizedFishDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_FossilizedFish,
        .iconPalette = gItemIconPalette_FossilizedFish,
    },

    [ITEM_FOSSILIZED_DRAKE] =
    {
        .name = ITEM_NAME("Drachenfossil"),
        .price = 5000,
        .description = COMPOUND_STRING(
            "Ein Fossil eines\n"
            "uralten landwandernden\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_FossilizedDrake,
        .iconPalette = gItemIconPalette_FossilizedDrake,
    },

    [ITEM_FOSSILIZED_DINO] =
    {
        .name = ITEM_NAME("Paddelfossil"),
        .price = 5000,
        .description = sFossilizedFishDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_FossilizedDino,
        .iconPalette = gItemIconPalette_FossilizedDino,
    },

// Mulch

    [ITEM_GROWTH_MULCH] =
    {
        .name = ITEM_NAME("Wachsmulch"),
        .pluralName = ITEM_PLURAL_NAME("Growth Mulch"),
        .price = 200,
    #if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "Ein Dünger, der das\n"
            "Wachstum von Beeren\n"
            "beschleunigt."),
    #else
        .description = sGenericMulchDesc,
    #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_GROWTH_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_GrowthMulch,
    },

    [ITEM_DAMP_MULCH] =
    {
        .name = ITEM_NAME("Feuchtmulch"),
        .pluralName = ITEM_PLURAL_NAME("Damp Mulch"),
        .price = 200,
    #if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "Ein Dünger, der das\n"
            "Wachstum von Beeren\n"
            "verlangsamt."),
    #else
        .description = sGenericMulchDesc,
    #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_DAMP_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_DampMulch,
    },

    [ITEM_STABLE_MULCH] =
    {
        .name = ITEM_NAME("Stabilmulch"),
        .pluralName = ITEM_PLURAL_NAME("Stable Mulch"),
        .price = 200,
    #if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "Ein Dünger, der die\n"
            "Lebensdauer von\n"
            "Beerenbäumen verlängert."),
    #else
        .description = sGenericMulchDesc,
    #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_STABLE_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_StableMulch,
        .iconPalette = gItemIconPalette_StableMulch,
    },

    [ITEM_GOOEY_MULCH] =
    {
        .name = ITEM_NAME("Neumulch"),
        .pluralName = ITEM_PLURAL_NAME("Gooey Mulch"),
        .price = 200,
    #if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "Ein Dünger, der nach\n"
            "dem Herbst mehr Beeren\n"
            "nachwachsen lässt."),
    #else
        .description = sGenericMulchDesc,
    #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_GOOEY_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_GooeyMulch,
    },

    [ITEM_RICH_MULCH] =
    {
        .name = ITEM_NAME("Sprießmulch"),
        .pluralName = ITEM_PLURAL_NAME("Rich Mulch"),
        .price = 200,
    #if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "Ein Dünger, der die\n"
            "Anzahl der geernteten\n"
            "Beeren erhöht."),
    #else
        .description = sGenericMulchDesc,
    #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_RICH_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_RichMulch,
    },

    [ITEM_SURPRISE_MULCH] =
    {
        .name = ITEM_NAME("Wundermulch"),
        .pluralName = ITEM_PLURAL_NAME("Surprise Mulch"),
        .price = 200,
    #if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "Ein Dünger, der die\n"
            "Wahrscheinlichkeit von\n"
            "Beerenmutationen erhöht."),
    #else
        .description = sGenericMulchDesc,
    #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_SURPRISE_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_SurpriseMulch,
    },

    [ITEM_BOOST_MULCH] =
    {
        .name = ITEM_NAME("Wuchermulch"),
        .pluralName = ITEM_PLURAL_NAME("Boost Mulch"),
        .price = 200,
    #if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "Ein Dünger, der die\n"
            "Trocknungsgeschwindigkeit\n"
            "weicher Böden erhöht."),
    #else
        .description = sGenericMulchDesc,
    #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_BOOST_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_BoostMulch,
    },

    [ITEM_AMAZE_MULCH] =
    {
        .name = ITEM_NAME("Ultramulch"),
        .pluralName = ITEM_PLURAL_NAME("Amaze Mulch"),
        .price = 200,
    #if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "Ein Dünger, der sowohl\n"
            "überraschend als auch\n"
            "stärkend ist."),
    #else
        .description = sGenericMulchDesc,
    #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_AMAZE_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_AmazeMulch,
    },

// Apricorns
    #if (I_PRICE >= GEN_8 || I_PRICE <= GEN_2)
        #define APRICORN_PRICE 200
    #elif I_PRICE >= GEN_5
        #define APRICORN_PRICE 20
    #else
        #define APRICORN_PRICE 0
    #endif

    [ITEM_RED_APRICORN] =
    {
        .name = ITEM_NAME("Aprikoko Rot"),
        .price = APRICORN_PRICE,
        .description = COMPOUND_STRING(
            "Eine rote Aprikose.\n"
            "Es befällt deine\n"
            "Nase."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Apricorn,
        .iconPalette = gItemIconPalette_RedApricorn,
    },

    [ITEM_BLUE_APRICORN] =
    {
        .name = ITEM_NAME("Aprikoko Blau"),
        .price = APRICORN_PRICE,
        .description = COMPOUND_STRING(
            "Eine blaue Aprikose.\n"
            "Es riecht ein\n"
            "bisschen nach Gras."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Apricorn,
        .iconPalette = gItemIconPalette_BlueApricorn,
    },

    [ITEM_YELLOW_APRICORN] =
    {
        .name = ITEM_NAME("Aprikoko Gelb"),
        .price = APRICORN_PRICE,
        .description = COMPOUND_STRING(
            "Eine gelbe Aprikose.\n"
            "Es hat einen\n"
            "belebenden Duft."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Apricorn,
        .iconPalette = gItemIconPalette_YellowApricorn,
    },

    [ITEM_GREEN_APRICORN] =
    {
        .name = ITEM_NAME("Aprikoko Grün"),
        .price = APRICORN_PRICE,
        .description = COMPOUND_STRING(
            "Eine grüne Aprikose. Es\n"
            "hat einen seltsamen,\n"
            "aromatischen Duft."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Apricorn,
        .iconPalette = gItemIconPalette_GreenApricorn,
    },

    [ITEM_PINK_APRICORN] =
    {
        .name = ITEM_NAME("Aprikoko Pink"),
        .price = APRICORN_PRICE,
        .description = COMPOUND_STRING(
            "Eine rosa Aprikose.\n"
            "Es hat einen\n"
            "schönen, süßen Duft."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Apricorn,
        .iconPalette = gItemIconPalette_PinkApricorn,
    },

    [ITEM_WHITE_APRICORN] =
    {
        .name = ITEM_NAME("Aprikoko Weiß"),
        .price = APRICORN_PRICE,
        .description = COMPOUND_STRING(
            "Eine weiße\n"
            "Aprikose. Es riecht\n"
            "nach nichts."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Apricorn,
        .iconPalette = gItemIconPalette_WhiteApricorn,
    },

    [ITEM_BLACK_APRICORN] =
    {
        .name = ITEM_NAME("Aprikoko Schwarz"),
        .price = APRICORN_PRICE,
        .description = COMPOUND_STRING(
            "Eine schwarze Aprikose.\n"
            "Es hat einen\n"
            "unbeschreiblichen Duft."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Apricorn,
        .iconPalette = gItemIconPalette_BlackApricorn,
    },

    [ITEM_WISHING_PIECE] =
    {
        .name = ITEM_NAME("WISHING PIECE"),
        .price = 20,
        .description = COMPOUND_STRING(
            "Wirf es in eine\n"
            "{PKMN}-Höhle, um Dynamax-\n"
            "Pokémon anzulocken."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 50,
        .iconPic = gItemIcon_WishingPiece,
        .iconPalette = gItemIconPalette_WishingPiece,
    },

    [ITEM_GALARICA_TWIG] =
    {
        .name = ITEM_NAME("GALARICA TWIG"),
        .price = 20000,
        .description = COMPOUND_STRING(
            "Ein Zweig eines\n"
            "Baumes in Galar\n"
            "namens Galarica."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_GalaricaTwig,
        .iconPalette = gItemIconPalette_GalaricaItem,
    },

    [ITEM_ARMORITE_ORE] =
    {
        .name = ITEM_NAME("ARMORITE ORE"),
        .pluralName = ITEM_PLURAL_NAME("Armorite Ore"),
        .price = 20,
        .description = COMPOUND_STRING(
            "Ein seltenes Erz. Kann\n"
            "auf der Isle of Armor in\n"
            "Galar gefunden werden."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_ArmoriteOre,
        .iconPalette = gItemIconPalette_ArmoriteOre,
    },

    [ITEM_DYNITE_ORE] =
    {
        .name = ITEM_NAME("DYNITE ORE"),
        .pluralName = ITEM_PLURAL_NAME("Dynite Ore"),
        .price = 20,
        .description = COMPOUND_STRING(
            "Ein geheimnisvolles Erz.\n"
            "Es kann in Galars Max\n"
            "Lair gefunden werden."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_DyniteOre,
        .iconPalette = gItemIconPalette_DyniteOre,
    },

// Mail

    [ITEM_ORANGE_MAIL] =
    {
        .name = ITEM_NAME("Zigzagbrief"),
        .pluralName = ITEM_PLURAL_NAME("Orange Mail"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Eine Post mit Zickzack-\n"
            "Aufdruck, die von einem\n"
            "Pokémon gehalten wird."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MAIL,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_ORANGE_MAIL),
        .iconPic = gItemIcon_OrangeMail,
        .iconPalette = gItemIconPalette_OrangeMail,
    },

    [ITEM_HARBOR_MAIL] =
    {
        .name = ITEM_NAME("Hafenbrief"),
        .pluralName = ITEM_PLURAL_NAME("Harbor Mail"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Eine Wingull-Druckpost,\n"
            "die von einem Pokémon\n"
            "gehalten wird."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MAIL,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_HARBOR_MAIL),
        .iconPic = gItemIcon_HarborMail,
        .iconPalette = gItemIconPalette_HarborMail,
    },

    [ITEM_GLITTER_MAIL] =
    {
        .name = ITEM_NAME("Glitzerbrief"),
        .pluralName = ITEM_PLURAL_NAME("Glitter Mail"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Eine Pikachu-gedruckte\n"
            "Post, die von einem\n"
            "Pokémon gehalten wird."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MAIL,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_GLITTER_MAIL),
        .iconPic = gItemIcon_GlitterMail,
        .iconPalette = gItemIconPalette_GlitterMail,
    },

    [ITEM_MECH_MAIL] =
    {
        .name = ITEM_NAME("Eilbrief"),
        .pluralName = ITEM_PLURAL_NAME("Mech Mail"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Eine mit Magnemit\n"
            "bedruckte Post, die von\n"
            "einem Pokémon gehal..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MAIL,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_MECH_MAIL),
        .iconPic = gItemIcon_MechMail,
        .iconPalette = gItemIconPalette_MechMail,
    },

    [ITEM_WOOD_MAIL] =
    {
        .name = ITEM_NAME("Waldbrief"),
        .pluralName = ITEM_PLURAL_NAME("Wood Mail"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Eine Post mit Slakoth-\n"
            "Aufdruck, die von einem\n"
            "Pokémon gehalten wird."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MAIL,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WOOD_MAIL),
        .iconPic = gItemIcon_WoodMail,
        .iconPalette = gItemIconPalette_WoodMail,
    },

    [ITEM_WAVE_MAIL] =
    {
        .name = ITEM_NAME("Wellenbrief"),
        .pluralName = ITEM_PLURAL_NAME("Wave Mail"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Eine Wailmer-Post,\n"
            "die von einem Pokémon\n"
            "gehalten wird."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MAIL,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WAVE_MAIL),
        .iconPic = gItemIcon_WaveMail,
        .iconPalette = gItemIconPalette_WaveMail,
    },

    [ITEM_BEAD_MAIL] =
    {
        .name = ITEM_NAME("Perlenbrief"),
        .pluralName = ITEM_PLURAL_NAME("Bead Mail"),
        .price = 50,
        .description = sBeadMailDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MAIL,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_BEAD_MAIL),
        .iconPic = gItemIcon_BeadMail,
        .iconPalette = gItemIconPalette_BeadMail,
    },

    [ITEM_SHADOW_MAIL] =
    {
        .name = ITEM_NAME("Dunkelbrief"),
        .pluralName = ITEM_PLURAL_NAME("Shadow Mail"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Eine Post mit Duskull-\n"
            "Aufdruck, die von einem\n"
            "Pokémon gehalten wird."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MAIL,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_SHADOW_MAIL),
        .iconPic = gItemIcon_ShadowMail,
        .iconPalette = gItemIconPalette_ShadowMail,
    },

    [ITEM_TROPIC_MAIL] =
    {
        .name = ITEM_NAME("Tropenbrief"),
        .pluralName = ITEM_PLURAL_NAME("Tropic Mail"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Eine Bellossom-\n"
            "Druckpost, die von einem\n"
            "Pokémon gehalten wird."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MAIL,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_TROPIC_MAIL),
        .iconPic = gItemIcon_TropicMail,
        .iconPalette = gItemIconPalette_TropicMail,
    },

    [ITEM_DREAM_MAIL] =
    {
        .name = ITEM_NAME("Traumbrief"),
        .pluralName = ITEM_PLURAL_NAME("Dream Mail"),
        .price = 50,
        .description = sBeadMailDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MAIL,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_DREAM_MAIL),
        .iconPic = gItemIcon_DreamMail,
        .iconPalette = gItemIconPalette_DreamMail,
    },

    [ITEM_FAB_MAIL] =
    {
        .name = ITEM_NAME("Edelbrief"),
        .pluralName = ITEM_PLURAL_NAME("Fab Mail"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Eine wunderschön\n"
            "bedruckte Post, die von\n"
            "einem Pokémon gehal..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MAIL,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_FAB_MAIL),
        .iconPic = gItemIcon_FabMail,
        .iconPalette = gItemIconPalette_FabMail,
    },

    [ITEM_RETRO_MAIL] =
    {
        .name = ITEM_NAME("Retrobrief"),
        .pluralName = ITEM_PLURAL_NAME("Retro Mail"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Mail mit den\n"
            "Zeichnungen von\n"
            "drei Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MAIL,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_RETRO_MAIL),
        .iconPic = gItemIcon_RetroMail,
        .iconPalette = gItemIconPalette_RetroMail,
    },

// Evolution Items

    [ITEM_FIRE_STONE] =
    {
        .name = ITEM_NAME("Feuerstein"),
        .price = 10000,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_STONE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_FireStone,
        .iconPalette = gItemIconPalette_FireStone,
    },

    [ITEM_WATER_STONE] =
    {
        .name = ITEM_NAME("Wasserstein"),
        .price = 10000,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_STONE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_WaterStone,
        .iconPalette = gItemIconPalette_WaterStone,
    },

    [ITEM_THUNDER_STONE] =
    {
        .name = ITEM_NAME("Donnerstein"),
        .price = 10000,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_STONE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_ThunderStone,
        .iconPalette = gItemIconPalette_ThunderStone,
    },

    [ITEM_LEAF_STONE] =
    {
        .name = ITEM_NAME("Blattstein"),
        .price = 10000,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_STONE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_LeafStone,
        .iconPalette = gItemIconPalette_LeafStone,
    },

    [ITEM_ICE_STONE] =
    {
        .name = ITEM_NAME("Eisstein"),
        .price = 10000,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_STONE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_IceStone,
        .iconPalette = gItemIconPalette_IceStone,
    },

    [ITEM_SUN_STONE] =
    {
        .name = ITEM_NAME("Sonnenstein"),
        .price = 10000,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_STONE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_SunStone,
        .iconPalette = gItemIconPalette_SunStone,
    },

    [ITEM_MOON_STONE] =
    {
        .name = ITEM_NAME("Mondstein"),
    #if I_PRICE >= GEN_7
        .price = 3000,
    #elif I_PRICE >= GEN_4
        .price = 2100,
    #elif I_PRICE == GEN_3
        .price = 0,
    #else
        .price = 10000,
    #endif
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_STONE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_MoonStone,
        .iconPalette = gItemIconPalette_MoonStone,
    },

    [ITEM_SHINY_STONE] =
    {
        .name = ITEM_NAME("Leuchtstein"),
        .price = 10000,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_STONE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_ShinyStone,
        .iconPalette = gItemIconPalette_ShinyStone,
    },

    [ITEM_DUSK_STONE] =
    {
        .name = ITEM_NAME("Finsterstein"),
        .price = 10000,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_STONE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        .iconPic = gItemIcon_DuskStone,
        .iconPalette = gItemIconPalette_DuskStone,
    },

    [ITEM_DAWN_STONE] =
    {
        .name = ITEM_NAME("Funkelstein"),
        .price = 10000,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_STONE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        .iconPic = gItemIcon_DawnStone,
        .iconPalette = gItemIconPalette_DawnStone,
    },

    [ITEM_SWEET_APPLE] =
    {
        .name = ITEM_NAME("Süßer Apfel"),
        .price = 2200,
        .description = COMPOUND_STRING(
            "Ein sehr süßer Apfel, der\n"
            "die Entwicklung\n"
            "bestimmter Poké..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_SweetApple,
        .iconPalette = gItemIconPalette_SweetApple,
    },

    [ITEM_TART_APPLE] =
    {
        .name = ITEM_NAME("Saurer Apfel"),
        .price = 2200,
        .description = COMPOUND_STRING(
            "Ein sehr säuerlicher\n"
            "Apfel, der die\n"
            "Entwicklung bestimm..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_TartApple,
        .iconPalette = gItemIconPalette_TartApple,
    },

    [ITEM_CRACKED_POT] =
    {
        .name = ITEM_NAME("Rissige Kanne"),
        .price = 1600,
        .description = COMPOUND_STRING(
            "Eine zerbrochene\n"
            "Teekanne, die die\n"
            "Entwicklung bestimm..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        .iconPic = gItemIcon_CrackedPot,
        .iconPalette = gItemIconPalette_Pot,
    },

    [ITEM_CHIPPED_POT] =
    {
        .name = ITEM_NAME("Löchrige Kanne"),
        .price = 38000,
        .description = COMPOUND_STRING(
            "Eine angeschlagene\n"
            "Teekanne, die die\n"
            "Entwicklung bestimm..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        .iconPic = gItemIcon_ChippedPot,
        .iconPalette = gItemIconPalette_Pot,
    },

    [ITEM_GALARICA_CUFF] =
    {
        .name = ITEM_NAME("Galarnuss-Reif"),
        .price = 20000,
        .description = COMPOUND_STRING(
            "Eine Manschette von\n"
            "Galar, die dafür sorgt,\n"
            "dass sich bestim..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_GalaricaCuff,
        .iconPalette = gItemIconPalette_GalaricaItem,
    },

    [ITEM_GALARICA_WREATH] =
    {
        .name = ITEM_NAME("Galarnuss-Kranz"),
        .price = 20000,
        .description = COMPOUND_STRING(
            "Ein Kranz aus Galar.\n"
            "Lässt einige Pokémon\n"
            "weiterentwickeln."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_GalaricaWreath,
        .iconPalette = gItemIconPalette_GalaricaItem,
    },

    [ITEM_DRAGON_SCALE] =
    {
        .name = ITEM_NAME("Drachenhaut"),
        .price = 20000,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Eine seltsame Schuppe,\n"
            "die von Pokémon vom Typ\n"
            "Drache gehalten wird."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_DragonScale,
        .iconPalette = gItemIconPalette_DragonScale,
    },

    [ITEM_UPGRADE] =
    {
        .name = ITEM_NAME("Up-Grade"),
        .price = 20000,
        .description = COMPOUND_STRING(
            "Eine eigenartige\n"
            "Box, hergestellt\n"
            "von Silph Co."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_Upgrade,
        .iconPalette = gItemIconPalette_Upgrade,
    },

    [ITEM_PROTECTOR] =
    {
        .name = ITEM_NAME("Schützer"),
        .price = 20000,
        .description = COMPOUND_STRING(
            "Von einem bestimmten\n"
            "Pokémon geliebt. Es\n"
            "ist steif und schwer."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        .iconPic = gItemIcon_Protector,
        .iconPalette = gItemIconPalette_Protector,
    },

    [ITEM_ELECTIRIZER] =
    {
        .name = ITEM_NAME("Stromisierer"),
        .price = 20000,
        .description = COMPOUND_STRING(
            "Von einem bestimmten\n"
            "Pokémon geliebt. Es ist\n"
            "voller elektrisc..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        .iconPic = gItemIcon_Electirizer,
        .iconPalette = gItemIconPalette_Electirizer,
    },

    [ITEM_MAGMARIZER] =
    {
        .name = ITEM_NAME("Magmaisierer"),
        .price = 20000,
        .description = COMPOUND_STRING(
            "Von einem bestimmten\n"
            "Pokémon geliebt. Es ist\n"
            "voller Magmaenergie."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        .iconPic = gItemIcon_Magmarizer,
        .iconPalette = gItemIconPalette_Magmarizer,
    },

    [ITEM_DUBIOUS_DISC] =
    {
        .name = ITEM_NAME("Dubiosdisc"),
        .price = 20000,
        .description = COMPOUND_STRING(
            "Ein klares Gerät\n"
            "voller zweifelhafter\n"
            "Daten."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 50,
        .iconPic = gItemIcon_DubiousDisc,
        .iconPalette = gItemIconPalette_DubiousDisc,
    },

    [ITEM_REAPER_CLOTH] =
    {
        .name = ITEM_NAME("Düsterumhang"),
        .price = 20000,
        .description = COMPOUND_STRING(
            "Von einem bestimmten\n"
            "Pokémon geliebt.\n"
            "Durchdrungen ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 10,
        .iconPic = gItemIcon_ReaperCloth,
        .iconPalette = gItemIconPalette_ReaperCloth,
    },

    [ITEM_PRISM_SCALE] =
    {
        .name = ITEM_NAME("Schönschuppe"),
    #if I_PRICE >= GEN_9
        .price = 3000,
    #elif I_PRICE >= GEN_7
        .price = 2000,
    #else
        .price = 20000,
    #endif
        .description = COMPOUND_STRING(
            "Eine mysteriöse Schuppe,\n"
            "die ein bestimmtes\n"
            "Pokémon entwickelt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_PrismScale,
        .iconPalette = gItemIconPalette_PrismScale,
    },

    [ITEM_WHIPPED_DREAM] =
    {
        .name = ITEM_NAME("Sahnehäubchen"),
        .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
        .description = COMPOUND_STRING(
            "Ein weicher und süßer\n"
            "Leckerbissen, der von\n"
            "einem bestimmten Poké..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        .iconPic = gItemIcon_WhippedDream,
        .iconPalette = gItemIconPalette_WhippedDream,
    },

    [ITEM_SACHET] =
    {
        .name = ITEM_NAME("Duftbeutel"),
        .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
        .description = COMPOUND_STRING(
            "Ein Päckchen mit starkem\n"
            "Parfüm, das von einem\n"
            "bestimmten Poké..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        .iconPic = gItemIcon_Sachet,
        .iconPalette = gItemIconPalette_Sachet,
    },

    [ITEM_OVAL_STONE] =
    {
        .name = ITEM_NAME("Ovaler Stein"),
        .price = 20000,
        .description = COMPOUND_STRING(
            "Eigenartiger Stein,\n"
            "der ein bestimmtes\n"
            "Pokémon entwickelt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        .iconPic = gItemIcon_OvalStone,
        .iconPalette = gItemIconPalette_OvalStone,
    },

    [ITEM_STRAWBERRY_SWEET] =
    {
        .name = ITEM_NAME("Zucker-Erdbeere"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "Erdbeerförmige\n"
            "Süßigkeit, die bei\n"
            "Milcery beliebt ist."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_StrawberrySweet,
        .iconPalette = gItemIconPalette_StrawberrySweet,
    },

    [ITEM_LOVE_SWEET] =
    {
        .name = ITEM_NAME("Zucker-Herz"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "Eine herzförmige\n"
            "Süßigkeit, die\n"
            "Milcery liebt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_LoveSweet,
        .iconPalette = gItemIconPalette_LoveSweet,
    },

    [ITEM_BERRY_SWEET] =
    {
        .name = ITEM_NAME("Zucker-Beere"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "Eine beerenförmige\n"
            "Süßigkeit, die bei\n"
            "Milcery beliebt ist."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_BerrySweet,
        .iconPalette = gItemIconPalette_BerrySweet,
    },

    [ITEM_CLOVER_SWEET] =
    {
        .name = ITEM_NAME("Zucker-Kleeblatt"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "Eine kleeblattförmige\n"
            "Süßigkeit, die\n"
            "Milcery liebt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_CloverSweet,
        .iconPalette = gItemIconPalette_CloverSweet,
    },

    [ITEM_FLOWER_SWEET] =
    {
        .name = ITEM_NAME("Zucker-Blume"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "Eine blütenförmige\n"
            "Süßigkeit, die\n"
            "Milcery liebt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_FlowerSweet,
        .iconPalette = gItemIconPalette_FlowerSweet,
    },

    [ITEM_STAR_SWEET] =
    {
        .name = ITEM_NAME("Zucker-Stern"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "Eine sternförmige\n"
            "Süßigkeit, die\n"
            "Milcery liebt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_StarSweet,
        .iconPalette = gItemIconPalette_StarSweet,
    },

    [ITEM_RIBBON_SWEET] =
    {
        .name = ITEM_NAME("Zucker-Schleife"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "Eine bandförmige\n"
            "Süßigkeit, die\n"
            "Milcery liebt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_RibbonSweet,
        .iconPalette = gItemIconPalette_RibbonSweet,
    },

    [ITEM_EVERSTONE] =
    {
        .name = ITEM_NAME("Ewigstein"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 200,
        .holdEffect = HOLD_EFFECT_PREVENT_EVOLVE,
        .description = COMPOUND_STRING(
            "Ein wundersamer\n"
            "Aufbewahrungsgegenstand,\n"
            "der die Evolut..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Everstone,
        .iconPalette = gItemIconPalette_Everstone,
    },

// Nectars

    [ITEM_RED_NECTAR] =
    {
        .name = ITEM_NAME("Roter Nektar"),
        .price = 300,
        .holdEffectParam = 0,
        .description = sNectarDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NECTAR,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
        .flingPower = 10,
        .iconPic = gItemIcon_Nectar,
        .iconPalette = gItemIconPalette_RedNectar,
    },

    [ITEM_YELLOW_NECTAR] =
    {
        .name = ITEM_NAME("Gelber Nektar"),
        .price = 300,
        .holdEffectParam = 0,
        .description = sNectarDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NECTAR,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
        .flingPower = 10,
        .iconPic = gItemIcon_Nectar,
        .iconPalette = gItemIconPalette_YellowNectar,
    },

    [ITEM_PINK_NECTAR] =
    {
        .name = ITEM_NAME("Rosa Nektar"),
        .price = 300,
        .holdEffectParam = 0,
        .description = sNectarDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NECTAR,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
        .flingPower = 10,
        .iconPic = gItemIcon_Nectar,
        .iconPalette = gItemIconPalette_PinkNectar,
    },

    [ITEM_PURPLE_NECTAR] =
    {
        .name = ITEM_NAME("Purpurner Nektar"),
        .price = 300,
        .holdEffectParam = 0,
        .description = sNectarDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_NECTAR,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
        .flingPower = 10,
        .iconPic = gItemIcon_Nectar,
        .iconPalette = gItemIconPalette_PurpleNectar,
    },

// Plates

    [ITEM_FLAME_PLATE] =
    {
        .name = ITEM_NAME("Feuertafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Tablet, das die\n"
            "Kraft von Feuer-\n"
            "Attacken erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_FlamePlate,
    },

    [ITEM_SPLASH_PLATE] =
    {
        .name = ITEM_NAME("Wassertafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Eine Tafel, die die\n"
            "Kraft von Bewegungen\n"
            "vom Typ Wasser erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_SplashPlate,
    },

    [ITEM_ZAP_PLATE] =
    {
        .name = ITEM_NAME("Blitztafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Tablet, das die\n"
            "Kraft elektrischer\n"
            "Bewegungen steigert."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_ZapPlate,
    },

    [ITEM_MEADOW_PLATE] =
    {
        .name = ITEM_NAME("Wiesentafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Tablet, das die\n"
            "Kraft von Bewegungen\n"
            "vom Typ Gras erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_MeadowPlate,
    },

    [ITEM_ICICLE_PLATE] =
    {
        .name = ITEM_NAME("Frosttafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Tablet, das\n"
            "die Kraft von Eis-\n"
            "Attacken erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_IciclePlate,
    },

    [ITEM_FIST_PLATE] =
    {
        .name = ITEM_NAME("Fausttafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Tablet, das die Kraft\n"
            "von Kampfbewegungen\n"
            "steigert."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_FistPlate,
    },

    [ITEM_TOXIC_PLATE] =
    {
        .name = ITEM_NAME("Gifttafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Eine Tablette, die die\n"
            "Kraft von Attacken vom\n"
            "Typ Gift erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_ToxicPlate,
    },

    [ITEM_EARTH_PLATE] =
    {
        .name = ITEM_NAME("Erdtafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Tablet, das die\n"
            "Kraft von\n"
            "Bodenbewegungen erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_EarthPlate,
    },

    [ITEM_SKY_PLATE] =
    {
        .name = ITEM_NAME("Wolkentafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Tablet, das die\n"
            "Kraft von Flugbewegungen\n"
            "steigert."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_SkyPlate,
    },

    [ITEM_MIND_PLATE] =
    {
        .name = ITEM_NAME("Hirntafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Tablet, das die\n"
            "Kraft von Psy-Chic-\n"
            "Bewegungen steigert."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_MindPlate,
    },

    [ITEM_INSECT_PLATE] =
    {
        .name = ITEM_NAME("Käfertafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Tablet, das\n"
            "die Kraft von Bug-\n"
            "Moves steigert."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_InsectPlate,
    },

    [ITEM_STONE_PLATE] =
    {
        .name = ITEM_NAME("Steintafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Tablet, das die\n"
            "Kraft von Felsbewegungen\n"
            "steigert."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_StonePlate,
    },

    [ITEM_SPOOKY_PLATE] =
    {
        .name = ITEM_NAME("Spuktafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Tablet, das die\n"
            "Kraft von Ghost-\n"
            "Moves steigert."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_SpookyPlate,
    },

    [ITEM_DRACO_PLATE] =
    {
        .name = ITEM_NAME("Dracotafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Tablet, das die\n"
            "Kraft von Bewegungen vom\n"
            "Typ Drache steigert."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_DracoPlate,
    },

    [ITEM_DREAD_PLATE] =
    {
        .name = ITEM_NAME("Furchttafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Tablet, das die\n"
            "Kraft von Dark-\n"
            "Attacken erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_DreadPlate,
    },

    [ITEM_IRON_PLATE] =
    {
        .name = ITEM_NAME("Eisentafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Tablet, das die\n"
            "Kraft von Bewegungen\n"
            "vom Typ Stahl steigert."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_IronPlate,
    },

    [ITEM_PIXIE_PLATE] =
    {
        .name = ITEM_NAME("Feentafel"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Tablet, das die\n"
            "Kraft von Bewegungen\n"
            "vom Typ Fee steigert."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PLATE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
        .flingPower = 90,
        .iconPic = gItemIcon_Plate,
        .iconPalette = gItemIconPalette_PixiePlate,
    },

// Drives

    [ITEM_DOUSE_DRIVE] =
    {
        .name = ITEM_NAME("Aquamodul"),
        .price = (I_PRICE >= GEN_7) ? 0 : 1000,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = COMPOUND_STRING(
            "Ändert Genesects\n"
            "Techno Blast in\n"
            "den Typ Wasser."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_DRIVE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
        .flingPower = 70,
        .iconPic = gItemIcon_Drive,
        .iconPalette = gItemIconPalette_DouseDrive,
    },

    [ITEM_SHOCK_DRIVE] =
    {
        .name = ITEM_NAME("Blitzmodul"),
        .price = (I_PRICE >= GEN_7) ? 0 : 1000,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = COMPOUND_STRING(
            "Ändert Genesects\n"
            "Techno Blast in\n"
            "den Elektrotyp."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_DRIVE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
        .flingPower = 70,
        .iconPic = gItemIcon_Drive,
        .iconPalette = gItemIconPalette_ShockDrive,
    },

    [ITEM_BURN_DRIVE] =
    {
        .name = ITEM_NAME("Flammenmodul"),
        .price = (I_PRICE >= GEN_7) ? 0 : 1000,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = COMPOUND_STRING(
            "Ändert Genesects\n"
            "Techno Blast in\n"
            "den Typ Feuer."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_DRIVE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
        .flingPower = 70,
        .iconPic = gItemIcon_Drive,
        .iconPalette = gItemIconPalette_BurnDrive,
    },

    [ITEM_CHILL_DRIVE] =
    {
        .name = ITEM_NAME("Gefriermodul"),
        .price = (I_PRICE >= GEN_7) ? 0 : 1000,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = COMPOUND_STRING(
            "Ändert Genesects\n"
            "Techno Blast in\n"
            "den Eistyp."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_DRIVE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
        .flingPower = 70,
        .iconPic = gItemIcon_Drive,
        .iconPalette = gItemIconPalette_ChillDrive,
    },

// Memories

    [ITEM_FIRE_MEMORY] =
    {
        .name = ITEM_NAME("Feuer-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Fire Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Eine Disc mit\n"
            "Feuertypdaten. Es\n"
            "vertauscht Silvallys Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
        .flingPower = 50,
        .iconPic = gItemIcon_FireMemory,
        .iconPalette = gItemIconPalette_FireMemory,
    },

    [ITEM_WATER_MEMORY] =
    {
        .name = ITEM_NAME("Wasser-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Water Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Eine Disc mit Daten zum\n"
            "Wassertyp. Es vertauscht\n"
            "Silvallys Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
        .flingPower = 50,
        .iconPic = gItemIcon_WaterMemory,
        .iconPalette = gItemIconPalette_WaterMemory,
    },

    [ITEM_ELECTRIC_MEMORY] =
    {
        .name = ITEM_NAME("Elektro-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Electric Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Eine Disc mit\n"
            "elektrischen Daten. Es\n"
            "vertauscht Silvallys Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
        .flingPower = 50,
        .iconPic = gItemIcon_ElectricMemory,
        .iconPalette = gItemIconPalette_ElectricMemory,
    },

    [ITEM_GRASS_MEMORY] =
    {
        .name = ITEM_NAME("Pflanzen-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Grass Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Eine Disc mit\n"
            "Grastypdaten. Es\n"
            "vertauscht Silvallys Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
        .flingPower = 50,
        .iconPic = gItemIcon_GrassMemory,
        .iconPalette = gItemIconPalette_GrassMemory,
    },

    [ITEM_ICE_MEMORY] =
    {
        .name = ITEM_NAME("Eis-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Ice Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Eine Disc mit Ice-Typ-\n"
            "Daten. Es vertauscht\n"
            "Silvallys Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
        .flingPower = 50,
        .iconPic = gItemIcon_IceMemory,
        .iconPalette = gItemIconPalette_IceMemory,
    },

    [ITEM_FIGHTING_MEMORY] =
    {
        .name = ITEM_NAME("Kampf-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Fighting Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Disc mit Kampftypdaten.\n"
            "Es vertauscht Silvallys\n"
            "Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
        .flingPower = 50,
        .iconPic = gItemIcon_FightingMemory,
        .iconPalette = gItemIconPalette_FightingMemory,
    },

    [ITEM_POISON_MEMORY] =
    {
        .name = ITEM_NAME("Gift-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Poison Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Eine Disc mit Daten zum\n"
            "Typ Gift. Es vertauscht\n"
            "Silvallys Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
        .flingPower = 50,
        .iconPic = gItemIcon_PoisonMemory,
        .iconPalette = gItemIconPalette_PoisonMemory,
    },

    [ITEM_GROUND_MEMORY] =
    {
        .name = ITEM_NAME("Boden-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Ground Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Eine Disc mit\n"
            "Bodentypdaten. Es\n"
            "vertauscht Silvallys Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
        .flingPower = 50,
        .iconPic = gItemIcon_GroundMemory,
        .iconPalette = gItemIconPalette_GroundMemory,
    },

    [ITEM_FLYING_MEMORY] =
    {
        .name = ITEM_NAME("Flug-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Flying Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Eine Disc mit Daten vom\n"
            "Typ Flug. Es\n"
            "vertauscht Silvallys Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
        .flingPower = 50,
        .iconPic = gItemIcon_FlyingMemory,
        .iconPalette = gItemIconPalette_FlyingMemory,
    },

    [ITEM_PSYCHIC_MEMORY] =
    {
        .name = ITEM_NAME("Psycho-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Psychic Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Eine CD mit Daten vom Typ\n"
            "Hellseher. Es vertauscht\n"
            "Silvallys Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
        .flingPower = 50,
        .iconPic = gItemIcon_PsychicMemory,
        .iconPalette = gItemIconPalette_PsychicMemory,
    },

    [ITEM_BUG_MEMORY] =
    {
        .name = ITEM_NAME("Käfer-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Bug Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Eine CD mit Daten vom\n"
            "Typ Käfer. Es vertauscht\n"
            "Silvallys Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
        .flingPower = 50,
        .iconPic = gItemIcon_BugMemory,
        .iconPalette = gItemIconPalette_BugMemory,
    },

    [ITEM_ROCK_MEMORY] =
    {
        .name = ITEM_NAME("Gesteins-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Rock Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Eine Disc mit Rock-Typ-\n"
            "Daten. Es vertauscht\n"
            "Silvallys Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
        .flingPower = 50,
        .iconPic = gItemIcon_RockMemory,
        .iconPalette = gItemIconPalette_RockMemory,
    },

    [ITEM_GHOST_MEMORY] =
    {
        .name = ITEM_NAME("Geister-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Ghost Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Eine Disc mit Ghost-\n"
            "Daten. Es vertauscht\n"
            "Silvallys Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
        .flingPower = 50,
        .iconPic = gItemIcon_GhostMemory,
        .iconPalette = gItemIconPalette_GhostMemory,
    },

    [ITEM_DRAGON_MEMORY] =
    {
        .name = ITEM_NAME("Drachen-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Dragon Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Eine Disc mit Daten vom\n"
            "Typ Dragon. Es vertauscht\n"
            "Silvallys Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
        .flingPower = 50,
        .iconPic = gItemIcon_DragonMemory,
        .iconPalette = gItemIconPalette_DragonMemory,
    },

    [ITEM_DARK_MEMORY] =
    {
        .name = ITEM_NAME("Unlicht-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Dark Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Eine Disc mit Daten vom\n"
            "Typ Dark. Es vertauscht\n"
            "Silvallys Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
        .flingPower = 50,
        .iconPic = gItemIcon_DarkMemory,
        .iconPalette = gItemIconPalette_DarkMemory,
    },

    [ITEM_STEEL_MEMORY] =
    {
        .name = ITEM_NAME("Stahl-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Steel Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Eine Disc mit Daten vom\n"
            "Typ Stahl. Es\n"
            "vertauscht Silvallys Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
        .flingPower = 50,
        .iconPic = gItemIcon_SteelMemory,
        .iconPalette = gItemIconPalette_SteelMemory,
    },

    [ITEM_FAIRY_MEMORY] =
    {
        .name = ITEM_NAME("Feen-Disc"),
        .pluralName = ITEM_PLURAL_NAME("Fairy Memories"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Eine Disc mit Daten vom\n"
            "Typ Fee. Es vertauscht\n"
            "Silvallys Typ."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEMORY,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
        .flingPower = 50,
        .iconPic = gItemIcon_FairyMemory,
        .iconPalette = gItemIconPalette_FairyMemory,
    },

    [ITEM_RUSTED_SWORD] =
    {
        .name = ITEM_NAME("Rostiges Schwert"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein rostiges Schwert. Ein\n"
            "Held nutzte es, um eine\n"
            "Katastrophe..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_RustedSword,
        .iconPalette = gItemIconPalette_RustedWeapons,
    },

    [ITEM_RUSTED_SHIELD] =
    {
        .name = ITEM_NAME("Rostiger Schild"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein rostiger Schild. Ein\n"
            "Held nutzte es, um eine\n"
            "Katastrophe..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_RustedShield,
        .iconPalette = gItemIconPalette_RustedWeapons,
    },

// Colored Orbs

    [ITEM_RED_ORB] =
    {
        .name = ITEM_NAME("Roter Edelstein"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_PRIMAL_ORB,
        .description = COMPOUND_STRING(
            "Eine rote, leuchtende\n"
            "Kugel, die angeblich eine\n"
            "uralte Macht enthält."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_RedOrb,
        .iconPalette = gItemIconPalette_RedOrb,
    },

    [ITEM_BLUE_ORB] =
    {
        .name = ITEM_NAME("Blauer Edelstein"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_PRIMAL_ORB,
        .description = COMPOUND_STRING(
            "Eine blaue, leuchtende\n"
            "Kugel, die angeblich eine\n"
            "uralte Macht enthält."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_BlueOrb,
        .iconPalette = gItemIconPalette_BlueOrb,
    },

// Mega Stones

    [ITEM_VENUSAURITE] =
    {
        .name = ITEM_NAME("Bisaflornit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Venusaur eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Venusaurite,
        .iconPalette = gItemIconPalette_Venusaurite,
    },

    [ITEM_CHARIZARDITE_X] =
    {
        .name = ITEM_NAME("Gluraknit X"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sCharizarditeDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_CharizarditeX,
        .iconPalette = gItemIconPalette_CharizarditeX,
    },

    [ITEM_CHARIZARDITE_Y] =
    {
        .name = ITEM_NAME("Gluraknit Y"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sCharizarditeDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_CharizarditeY,
        .iconPalette = gItemIconPalette_CharizarditeY,
    },

    [ITEM_BLASTOISINITE] =
    {
        .name = ITEM_NAME("Turtoknit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Blastoise eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Blastoisinite,
        .iconPalette = gItemIconPalette_Blastoisinite,
    },

    [ITEM_BEEDRILLITE] =
    {
        .name = ITEM_NAME("Bibornit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Beedrill eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Beedrillite,
        .iconPalette = gItemIconPalette_Beedrillite,
    },

    [ITEM_PIDGEOTITE] =
    {
        .name = ITEM_NAME("Taubossnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Pidgeot eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Pidgeotite,
        .iconPalette = gItemIconPalette_Pidgeotite,
    },

    [ITEM_ALAKAZITE] =
    {
        .name = ITEM_NAME("Simsalanit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Alakazam eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Alakazite,
        .iconPalette = gItemIconPalette_Alakazite,
    },

    [ITEM_SLOWBRONITE] =
    {
        .name = ITEM_NAME("Lahmusnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Slowbro eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Slowbronite,
        .iconPalette = gItemIconPalette_Slowbronite,
    },

    [ITEM_GENGARITE] =
    {
        .name = ITEM_NAME("Gengarnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Gengar eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Gengarite,
        .iconPalette = gItemIconPalette_Gengarite,
    },

    [ITEM_KANGASKHANITE] =
    {
        .name = ITEM_NAME("Kangamanit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Kangaskhan eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Kangaskhanite,
        .iconPalette = gItemIconPalette_Kangaskhanite,
    },

    [ITEM_PINSIRITE] =
    {
        .name = ITEM_NAME("Pinsirnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Pinsir eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Pinsirite,
        .iconPalette = gItemIconPalette_Pinsirite,
    },

    [ITEM_GYARADOSITE] =
    {
        .name = ITEM_NAME("Garadosnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Gyarados eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Gyaradosite,
        .iconPalette = gItemIconPalette_Gyaradosite,
    },

    [ITEM_AERODACTYLITE] =
    {
        .name = ITEM_NAME("Aerodactylonit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Aerodactyl eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Aerodactylite,
        .iconPalette = gItemIconPalette_Aerodactylite,
    },

    [ITEM_MEWTWONITE_X] =
    {
        .name = ITEM_NAME("Mewtunit X"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMewtwoniteDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_MewtwoniteX,
        .iconPalette = gItemIconPalette_MewtwoniteX,
    },

    [ITEM_MEWTWONITE_Y] =
    {
        .name = ITEM_NAME("Mewtunit Y"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMewtwoniteDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_MewtwoniteY,
        .iconPalette = gItemIconPalette_MewtwoniteY,
    },

    [ITEM_AMPHAROSITE] =
    {
        .name = ITEM_NAME("Ampharosnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Ampharos eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Ampharosite,
        .iconPalette = gItemIconPalette_Ampharosite,
    },

    [ITEM_STEELIXITE] =
    {
        .name = ITEM_NAME("Stahlosnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Steelix eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Steelixite,
        .iconPalette = gItemIconPalette_Steelixite,
    },

    [ITEM_SCIZORITE] =
    {
        .name = ITEM_NAME("Scheroxnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Scizor eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Scizorite,
        .iconPalette = gItemIconPalette_Scizorite,
    },

    [ITEM_HERACRONITE] =
    {
        .name = ITEM_NAME("Skarabornit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Heracross eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Heracronite,
        .iconPalette = gItemIconPalette_Heracronite,
    },

    [ITEM_HOUNDOOMINITE] =
    {
        .name = ITEM_NAME("Hundemonit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Houndoom eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Houndoominite,
        .iconPalette = gItemIconPalette_Houndoominite,
    },

    [ITEM_TYRANITARITE] =
    {
        .name = ITEM_NAME("Despotarnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Tyranitar eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Tyranitarite,
        .iconPalette = gItemIconPalette_Tyranitarite,
    },

    [ITEM_SCEPTILITE] =
    {
        .name = ITEM_NAME("Gewaldronit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Sceptile eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Sceptilite,
        .iconPalette = gItemIconPalette_Sceptilite,
    },

    [ITEM_BLAZIKENITE] =
    {
        .name = ITEM_NAME("Lohgocknit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Blaziken eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Blazikenite,
        .iconPalette = gItemIconPalette_Blazikenite,
    },

    [ITEM_SWAMPERTITE] =
    {
        .name = ITEM_NAME("Sumpexnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Swampert eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Swampertite,
        .iconPalette = gItemIconPalette_Swampertite,
    },

    [ITEM_GARDEVOIRITE] =
    {
        .name = ITEM_NAME("Guardevoirnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Guardevoir eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Gardevoirite,
        .iconPalette = gItemIconPalette_Gardevoirite,
    },

    [ITEM_SABLENITE] =
    {
        .name = ITEM_NAME("Zobirisnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Sableye eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Sablenite,
        .iconPalette = gItemIconPalette_Sablenite,
    },

    [ITEM_MAWILITE] =
    {
        .name = ITEM_NAME("Flunkifernit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Mawile eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Mawilite,
        .iconPalette = gItemIconPalette_Mawilite,
    },

    [ITEM_AGGRONITE] =
    {
        .name = ITEM_NAME("Stollossnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Aggron eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Aggronite,
        .iconPalette = gItemIconPalette_Aggronite,
    },

    [ITEM_MEDICHAMITE] =
    {
        .name = ITEM_NAME("Meditalisnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Medicham eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Medichamite,
        .iconPalette = gItemIconPalette_Medichamite,
    },

    [ITEM_MANECTITE] =
    {
        .name = ITEM_NAME("Voltensonit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Manectric eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Manectite,
        .iconPalette = gItemIconPalette_Manectite,
    },

    [ITEM_SHARPEDONITE] =
    {
        .name = ITEM_NAME("Tohaidonit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Sharpedo eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Sharpedonite,
        .iconPalette = gItemIconPalette_Sharpedonite,
    },

    [ITEM_CAMERUPTITE] =
    {
        .name = ITEM_NAME("Cameruptnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Camerupt eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Cameruptite,
        .iconPalette = gItemIconPalette_Cameruptite,
    },

    [ITEM_ALTARIANITE] =
    {
        .name = ITEM_NAME("Altarianit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Altaria eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Altarianite,
        .iconPalette = gItemIconPalette_Altarianite,
    },

    [ITEM_BANETTITE] =
    {
        .name = ITEM_NAME("Banetteonit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Banette eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Banettite,
        .iconPalette = gItemIconPalette_Banettite,
    },

    [ITEM_ABSOLITE] =
    {
        .name = ITEM_NAME("Absolnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAbsoliteDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Absolite,
        .iconPalette = gItemIconPalette_Absolite,
    },

    [ITEM_GLALITITE] =
    {
        .name = ITEM_NAME("Firnontornit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Glalie eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Glalitite,
        .iconPalette = gItemIconPalette_Glalitite,
    },

    [ITEM_SALAMENCITE] =
    {
        .name = ITEM_NAME("Brutalandanit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Salamence eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Salamencite,
        .iconPalette = gItemIconPalette_Salamencite,
    },

    [ITEM_METAGROSSITE] =
    {
        .name = ITEM_NAME("Metagrossnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Metagross eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Metagrossite,
        .iconPalette = gItemIconPalette_Metagrossite,
    },

    [ITEM_LATIASITE] =
    {
        .name = ITEM_NAME("Latiasnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Latias eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Latiasite,
        .iconPalette = gItemIconPalette_Latiasite,
    },

    [ITEM_LATIOSITE] =
    {
        .name = ITEM_NAME("Latiosnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Latios eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Latiosite,
        .iconPalette = gItemIconPalette_Latiosite,
    },

    [ITEM_LOPUNNITE] =
    {
        .name = ITEM_NAME("Schlapornit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Lopunny eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Lopunnite,
        .iconPalette = gItemIconPalette_Lopunnite,
    },

    [ITEM_GARCHOMPITE] =
    {
        .name = ITEM_NAME("Knakracknit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGarchompiteDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Garchompite,
        .iconPalette = gItemIconPalette_Garchompite,
    },

    [ITEM_LUCARIONITE] =
    {
        .name = ITEM_NAME("Lucarionit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sLucarioniteDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Lucarionite,
        .iconPalette = gItemIconPalette_Lucarionite,
    },

    [ITEM_ABOMASITE] =
    {
        .name = ITEM_NAME("Rexblisarnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Abomasnow eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Abomasite,
        .iconPalette = gItemIconPalette_Abomasite,
    },

    [ITEM_GALLADITE] =
    {
        .name = ITEM_NAME("Galagladinit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Gallade eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Galladite,
        .iconPalette = gItemIconPalette_Galladite,
    },

    [ITEM_AUDINITE] =
    {
        .name = ITEM_NAME("Ohrdochnit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Audino eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Audinite,
        .iconPalette = gItemIconPalette_Audinite,
    },

    [ITEM_DIANCITE] =
    {
        .name = ITEM_NAME("Diancienit"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Diancie eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Diancite,
        .iconPalette = gItemIconPalette_Diancite,
    },

    [ITEM_CLEFABLITE] =
    {
        .name = ITEM_NAME("CLEFABLITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Clefable eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Clefablite,
        .iconPalette = gItemIconPalette_Clefablite,
    },

    [ITEM_VICTREEBELITE] =
    {
        .name = ITEM_NAME("VICTREEBELITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Victreebel eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Victreebelite,
        .iconPalette = gItemIconPalette_Victreebelite,
    },

    [ITEM_STARMINITE] =
    {
        .name = ITEM_NAME("STARMINITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Starmie eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Starminite,
        .iconPalette = gItemIconPalette_Starminite,
    },

    [ITEM_DRAGONINITE] =
    {
        .name = ITEM_NAME("DRAGONINITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Dragonite eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Dragoninite,
        .iconPalette = gItemIconPalette_Dragoninite,
    },

    [ITEM_MEGANIUMITE] =
    {
        .name = ITEM_NAME("MEGANIUMITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Meganium eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Meganiumite,
        .iconPalette = gItemIconPalette_Meganiumite,
    },

    [ITEM_FERALIGITE] =
    {
        .name = ITEM_NAME("FERALIGITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Feraligatr eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Feraligite,
        .iconPalette = gItemIconPalette_Feraligite,
    },

    [ITEM_SKARMORITE] =
    {
        .name = ITEM_NAME("SKARMORITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Skarmory eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Skarmorite,
        .iconPalette = gItemIconPalette_Skarmorite,
    },

    [ITEM_FROSLASSITE] =
    {
        .name = ITEM_NAME("FROSLASSITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Froslass eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Froslassite,
        .iconPalette = gItemIconPalette_Froslassite,
    },

    [ITEM_EMBOARITE] =
    {
        .name = ITEM_NAME("EMBOARITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Emboar eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Emboarite,
        .iconPalette = gItemIconPalette_Emboarite,
    },

    [ITEM_EXCADRITE] =
    {
        .name = ITEM_NAME("EXCADRITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Excadrill eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Excadrite,
        .iconPalette = gItemIconPalette_Excadrite,
    },

    [ITEM_SCOLIPITE] =
    {
        .name = ITEM_NAME("SCOLIPITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Scolipede eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Scolipite,
        .iconPalette = gItemIconPalette_Scolipite,
    },

    [ITEM_SCRAFTINITE] =
    {
        .name = ITEM_NAME("SCRAFTINITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Scrafty eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Scraftinite,
        .iconPalette = gItemIconPalette_Scraftinite,
    },

    [ITEM_EELEKTROSSITE] =
    {
        .name = ITEM_NAME("EELEKTROSSITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Eelektross eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Eelektrossite,
        .iconPalette = gItemIconPalette_Eelektrossite,
    },

    [ITEM_CHANDELURITE] =
    {
        .name = ITEM_NAME("CHANDELURITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "es Chandelure, im Kampf\n"
            "eine Mega-Entwickl..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Chandelurite,
        .iconPalette = gItemIconPalette_Chandelurite,
    },

    [ITEM_CHESNAUGHTITE] =
    {
        .name = ITEM_NAME("CHESNAUGHTITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Chesnaught eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Chesnaughtite,
        .iconPalette = gItemIconPalette_Chesnaughtite,
    },

    [ITEM_DELPHOXITE] =
    {
        .name = ITEM_NAME("DELPHOXITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Delphox eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Delphoxite,
        .iconPalette = gItemIconPalette_Delphoxite,
    },

    [ITEM_GRENINJITE] =
    {
        .name = ITEM_NAME("GRENINJITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Greninja eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Greninjite,
        .iconPalette = gItemIconPalette_Greninjite,
    },

    [ITEM_PYROARITE] =
    {
        .name = ITEM_NAME("PYROARITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Pyroar eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Pyroarite,
        .iconPalette = gItemIconPalette_Pyroarite,
    },

    [ITEM_FLOETTITE] =
    {
        .name = ITEM_NAME("FLOETTITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Floette eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Floettite,
        .iconPalette = gItemIconPalette_Floettite,
    },

    [ITEM_MALAMARITE] =
    {
        .name = ITEM_NAME("MALAMARITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Malamar eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Malamarite,
        .iconPalette = gItemIconPalette_Malamarite,
    },

    [ITEM_BARBARACITE] =
    {
        .name = ITEM_NAME("BARBARACITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Barbaracle eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Barbaracite,
        .iconPalette = gItemIconPalette_Barbaracite,
    },

    [ITEM_DRAGALGITE] =
    {
        .name = ITEM_NAME("DRAGALGITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Dragalge die Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Dragalgite,
        .iconPalette = gItemIconPalette_Dragalgite,
    },

    [ITEM_HAWLUCHANITE] =
    {
        .name = ITEM_NAME("HAWLUCHANITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Hawlucha eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Hawluchanite,
        .iconPalette = gItemIconPalette_Hawluchanite,
    },

    [ITEM_ZYGARDITE] =
    {
        .name = ITEM_NAME("ZYGARDITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Zygarde eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Zygardite,
        .iconPalette = gItemIconPalette_Zygardite,
    },

    [ITEM_DRAMPANITE] =
    {
        .name = ITEM_NAME("DRAMPANITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Drampa eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Drampanite,
        .iconPalette = gItemIconPalette_Drampanite,
    },

    [ITEM_FALINKSITE] =
    {
        .name = ITEM_NAME("FALINKSITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Falinks eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Falinksite,
        .iconPalette = gItemIconPalette_Falinksite,
    },

    [ITEM_HEATRANITE] =
    {
        .name = ITEM_NAME("HEATRANITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Heatran eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Heatranite,
        .iconPalette = gItemIconPalette_Heatranite,
    },

    [ITEM_DARKRANITE] =
    {
        .name = ITEM_NAME("DARKRANITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Darkrai eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Darkranite,
        .iconPalette = gItemIconPalette_Darkranite,
    },

    [ITEM_ZERAORITE] =
    {
        .name = ITEM_NAME("ZERAORITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Zeraora eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Zeraorite,
        .iconPalette = gItemIconPalette_Zeraorite,
    },

    [ITEM_RAICHUNITE_X] =
    {
        .name = ITEM_NAME("RAICHUNITE X"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sRaichuniteDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_RaichuniteX,
        .iconPalette = gItemIconPalette_RaichuniteX,
    },

    [ITEM_RAICHUNITE_Y] =
    {
        .name = ITEM_NAME("RAICHUNITE Y"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sRaichuniteDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_RaichuniteY,
        .iconPalette = gItemIconPalette_RaichuniteY,
    },

    [ITEM_CHIMECHITE] =
    {
        .name = ITEM_NAME("CHIMECHITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Chimecho eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Chimechite,
        .iconPalette = gItemIconPalette_Chimechite,
    },

    [ITEM_ABSOLITE_Z] =
    {
        .name = ITEM_NAME("ABSOLITE Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAbsoliteDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_AbsoliteZ,
        .iconPalette = gItemIconPalette_AbsoliteZ,
    },

    [ITEM_STARAPTITE] =
    {
        .name = ITEM_NAME("STARAPTITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Staraptor eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Staraptite,
        .iconPalette = gItemIconPalette_Staraptite,
    },

    [ITEM_GARCHOMPITE_Z] =
    {
        .name = ITEM_NAME("GARCHOMPITE Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGarchompiteDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_GarchompiteZ,
        .iconPalette = gItemIconPalette_GarchompiteZ,
    },

    [ITEM_LUCARIONITE_Z] =
    {
        .name = ITEM_NAME("LUCARIONITE Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sLucarioniteDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_LucarioniteZ,
        .iconPalette = gItemIconPalette_LucarioniteZ,
    },

    [ITEM_GOLURKITE] =
    {
        .name = ITEM_NAME("GOLURKITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Golurk eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Golurkite,
        .iconPalette = gItemIconPalette_Golurkite,
    },

    [ITEM_MEOWSTICITE] =
    {
        .name = ITEM_NAME("MEOWSTICITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Meowstic eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Meowsticite,
        .iconPalette = gItemIconPalette_Meowsticite,
    },

    [ITEM_CRABOMINITE] =
    {
        .name = ITEM_NAME("CRABOMINITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "es Crabominable, im\n"
            "Kampf Mega zu werden."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Crabominite,
        .iconPalette = gItemIconPalette_Crabominite,
    },

    [ITEM_GOLISOPITE] =
    {
        .name = ITEM_NAME("GOLISOPITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Golisopod eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Golisopite,
        .iconPalette = gItemIconPalette_Golisopite,
    },

    [ITEM_MAGEARNITE] =
    {
        .name = ITEM_NAME("MAGEARNITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Magearna eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Magearnite,
        .iconPalette = gItemIconPalette_Magearnite,
    },

    [ITEM_SCOVILLAINITE] =
    {
        .name = ITEM_NAME("SCOVILLAINITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Scovillain eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Scovillainite,
        .iconPalette = gItemIconPalette_Scovillainite,
    },

    [ITEM_BAXCALIBRITE] =
    {
        .name = ITEM_NAME("BAXCALIBRITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Baxcalibur eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Baxcalibrite,
        .iconPalette = gItemIconPalette_Baxcalibrite,
    },

    [ITEM_TATSUGIRINITE] =
    {
        .name = ITEM_NAME("TATSUGIRINITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Tatsugiri eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Tatsugirinite,
        .iconPalette = gItemIconPalette_Tatsugirinite,
    },

    [ITEM_GLIMMORANITE] =
    {
        .name = ITEM_NAME("GLIMMORANITE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "Dieser Stein ermöglicht\n"
            "Glimmora eine Mega-\n"
            "Entwicklung im Kampf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_MEGA_STONE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_Glimmoranite,
        .iconPalette = gItemIconPalette_Glimmoranite,
    },

// GB Player
    [ITEM_GB_PLAYER] =
    {
        .name = ITEM_NAME("GB PLAYER"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Gerät, das Musik\n"
            "aus den alten Pokémon-\n"
            "Spielen abspielt."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_GBPlayer,
        .importance = 1,
        .iconPic = gItemIcon_GBPlayer,
        .iconPalette = gItemIconPalette_GBPlayer,
    },

// Gems
    #if I_PRICE >= GEN_9
        #define GEM_PRICE 15000
    #elif I_PRICE >= GEN_7
        #define GEM_PRICE 4000
    #else
        #define GEM_PRICE 200
    #endif

    [ITEM_NORMAL_GEM] =
    {
        .name = ITEM_NAME("Normaljuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von normalen\n"
            "Bewegungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_NORMAL,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_NormalGem,
    },

    [ITEM_FIRE_GEM] =
    {
        .name = ITEM_NAME("Feuerjuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von Bewegungen vom\n"
            "Typ Feuer."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_FireGem,
    },

    [ITEM_WATER_GEM] =
    {
        .name = ITEM_NAME("Wasserjuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von Bewegungen vom\n"
            "Typ Wasser."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_WaterGem,
    },

    [ITEM_ELECTRIC_GEM] =
    {
        .name = ITEM_NAME("Elektrojuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "elektrischer\n"
            "Bewegungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_ElectricGem,
    },

    [ITEM_GRASS_GEM] =
    {
        .name = ITEM_NAME("Pflanzenjuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von Bewegungen vom\n"
            "Typ Gras."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_GrassGem,
    },

    [ITEM_ICE_GEM] =
    {
        .name = ITEM_NAME("Eisjuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von Bewegungen vom\n"
            "Typ Eis."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_IceGem,
    },

    [ITEM_FIGHTING_GEM] =
    {
        .name = ITEM_NAME("Kampfjuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von\n"
            "Kampfbewegungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_FightingGem,
    },

    [ITEM_POISON_GEM] =
    {
        .name = ITEM_NAME("Giftjuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von Bewegungen vom\n"
            "Typ Gift."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_PoisonGem,
    },

    [ITEM_GROUND_GEM] =
    {
        .name = ITEM_NAME("Bodenjuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von\n"
            "Bodenbewegungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_GroundGem,
    },

    [ITEM_FLYING_GEM] =
    {
        .name = ITEM_NAME("Flugjuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von\n"
            "Flugbewegungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_FlyingGem,
    },

    [ITEM_PSYCHIC_GEM] =
    {
        .name = ITEM_NAME("Psychojuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von psychischen\n"
            "Bewegungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_PsychicGem,
    },

    [ITEM_BUG_GEM] =
    {
        .name = ITEM_NAME("Käferjuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von Bewegungen vom\n"
            "Typ Käfer."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_BugGem,
    },

    [ITEM_ROCK_GEM] =
    {
        .name = ITEM_NAME("Gesteinsjuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von\n"
            "Gesteinsbewegungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_RockGem,
    },

    [ITEM_GHOST_GEM] =
    {
        .name = ITEM_NAME("Geisterjuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von\n"
            "Geisterbewegungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_GhostGem,
    },

    [ITEM_DRAGON_GEM] =
    {
        .name = ITEM_NAME("Drakojuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von\n"
            "Drachenbewegungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_DragonGem,
    },

    [ITEM_DARK_GEM] =
    {
        .name = ITEM_NAME("Unlichtjuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von Dark-Type-\n"
            "Attacken."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_DarkGem,
    },

    [ITEM_STEEL_GEM] =
    {
        .name = ITEM_NAME("Stahljuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von Bewegungen vom\n"
            "Typ Stahl."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_SteelGem,
    },

    [ITEM_FAIRY_GEM] =
    {
        .name = ITEM_NAME("Feenjuwel"),
        .price = GEM_PRICE,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "von Bewegungen vom\n"
            "Typ Fee."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
        .iconPic = gItemIcon_TypeGem,
        .iconPalette = gItemIconPalette_FairyGem,
    },

// Z-Crystals

    [ITEM_NORMALIUM_Z] =
    {
        .name = ITEM_NAME("Normium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere normale\n"
            "Bewegungen in\n"
            "Z-Bewegungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_NORMAL,
        .iconPic = gItemIcon_NormaliumZ,
        .iconPalette = gItemIconPalette_NormaliumZ,
    },

    [ITEM_FIRIUM_Z] =
    {
        .name = ITEM_NAME("Pyrium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Feuer-\n"
            "Attacken zu\n"
            "Z-Attacken."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
        .iconPic = gItemIcon_FiriumZ,
        .iconPalette = gItemIconPalette_FiriumZ,
    },

    [ITEM_WATERIUM_Z] =
    {
        .name = ITEM_NAME("Aquium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Wasser-\n"
            "Attacken in\n"
            "Z-Attacken."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
        .iconPic = gItemIcon_WateriumZ,
        .iconPalette = gItemIconPalette_WateriumZ,
    },

    [ITEM_ELECTRIUM_Z] =
    {
        .name = ITEM_NAME("Voltium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere\n"
            "Elektro-Attacken\n"
            "in Z-Attacken."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
        .iconPic = gItemIcon_ElectriumZ,
        .iconPalette = gItemIconPalette_ElectriumZ,
    },

    [ITEM_GRASSIUM_Z] =
    {
        .name = ITEM_NAME("Botanium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Gras-\n"
            "Attacken in\n"
            "Z-Attacken."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
        .iconPic = gItemIcon_GrassiumZ,
        .iconPalette = gItemIconPalette_GrassiumZ,
    },

    [ITEM_ICIUM_Z] =
    {
        .name = ITEM_NAME("Glacium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Eis-\n"
            "Attacken in\n"
            "Z-Attacken."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
        .iconPic = gItemIcon_IciumZ,
        .iconPalette = gItemIconPalette_IciumZ,
    },

    [ITEM_FIGHTINIUM_Z] =
    {
        .name = ITEM_NAME("Battalium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere\n"
            "Kampfbewegungen in\n"
            "Z-Bewegungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
        .iconPic = gItemIcon_FightiniumZ,
        .iconPalette = gItemIconPalette_FightiniumZ,
    },

    [ITEM_POISONIUM_Z] =
    {
        .name = ITEM_NAME("Toxium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Gift-\n"
            "Attacken in\n"
            "Z-Attacken."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
        .iconPic = gItemIcon_PoisoniumZ,
        .iconPalette = gItemIconPalette_PoisoniumZ,
    },

    [ITEM_GROUNDIUM_Z] =
    {
        .name = ITEM_NAME("Terrium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere\n"
            "Bodenbewegungen in\n"
            "Z-Bewegungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
        .iconPic = gItemIcon_GroundiumZ,
        .iconPalette = gItemIconPalette_GroundiumZ,
    },

    [ITEM_FLYINIUM_Z] =
    {
        .name = ITEM_NAME("Aerium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere fliegende\n"
            "Bewegungen in\n"
            "Z-Bewegungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
        .iconPic = gItemIcon_FlyiniumZ,
        .iconPalette = gItemIconPalette_FlyiniumZ,
    },

    [ITEM_PSYCHIUM_Z] =
    {
        .name = ITEM_NAME("Psium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Bewegungen\n"
            "vom Typ Hellseher in\n"
            "Z-Bewegungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
        .iconPic = gItemIcon_PsychiumZ,
        .iconPalette = gItemIconPalette_PsychiumZ,
    },

    [ITEM_BUGINIUM_Z] =
    {
        .name = ITEM_NAME("Insectium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Bug-\n"
            "Moves in Z-Moves."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
        .iconPic = gItemIcon_BuginiumZ,
        .iconPalette = gItemIconPalette_BuginiumZ,
    },

    [ITEM_ROCKIUM_Z] =
    {
        .name = ITEM_NAME("Petrium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Fels-\n"
            "Attacken in\n"
            "Z-Attacken."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
        .iconPic = gItemIcon_RockiumZ,
        .iconPalette = gItemIconPalette_RockiumZ,
    },

    [ITEM_GHOSTIUM_Z] =
    {
        .name = ITEM_NAME("Phantomium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Ghost-\n"
            "Moves in Z-Moves."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
        .iconPic = gItemIcon_GhostiumZ,
        .iconPalette = gItemIconPalette_GhostiumZ,
    },

    [ITEM_DRAGONIUM_Z] =
    {
        .name = ITEM_NAME("Dracium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Drache-\n"
            "Attacken in\n"
            "Z-Attacken."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
        .iconPic = gItemIcon_DragoniumZ,
        .iconPalette = gItemIconPalette_DragoniumZ,
    },

    [ITEM_DARKINIUM_Z] =
    {
        .name = ITEM_NAME("Noctium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Attacken\n"
            "vom Typ Dunkel in\n"
            "Z-Attacken."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
        .iconPic = gItemIcon_DarkiniumZ,
        .iconPalette = gItemIconPalette_DarkiniumZ,
    },

    [ITEM_STEELIUM_Z] =
    {
        .name = ITEM_NAME("Metallium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Stahl-\n"
            "Attacken in\n"
            "Z-Attacken."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
        .iconPic = gItemIcon_SteeliumZ,
        .iconPalette = gItemIconPalette_SteeliumZ,
    },

    [ITEM_FAIRIUM_Z] =
    {
        .name = ITEM_NAME("Sylphium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Feen-\n"
            "Attacken in\n"
            "Z-Attacken."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
        .iconPic = gItemIcon_FairiumZ,
        .iconPalette = gItemIconPalette_FairiumZ,
    },

    [ITEM_PIKANIUM_Z] =
    {
        .name = ITEM_NAME("Pikachium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Pikachus\n"
            "Volt-Tackle zu\n"
            "einer Z-Attacke."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
        .iconPic = gItemIcon_PikaniumZ,
        .iconPalette = gItemIconPalette_PikaniumZ,
    },

    [ITEM_EEVIUM_Z] =
    {
        .name = ITEM_NAME("Evolium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Werte Evoli's Last\n"
            "Resort zu einem\n"
            "Z-Move auf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
        .iconPic = gItemIcon_EeviumZ,
        .iconPalette = gItemIconPalette_EeviumZ,
    },

    [ITEM_SNORLIUM_Z] =
    {
        .name = ITEM_NAME("Relaxonium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Snorlax\n"
            "Giga Impact zu\n"
            "einem Z-Move."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
        .iconPic = gItemIcon_SnorliumZ,
        .iconPalette = gItemIconPalette_SnorliumZ,
    },

    [ITEM_MEWNIUM_Z] =
    {
        .name = ITEM_NAME("Mewnium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Mews\n"
            "Hellseher zu einer\n"
            "Z-Attacke."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
        .iconPic = gItemIcon_MewniumZ,
        .iconPalette = gItemIconPalette_MewniumZ,
    },

    [ITEM_DECIDIUM_Z] =
    {
        .name = ITEM_NAME("Silvarronium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Decidueyes\n"
            "Geisterfessel zu\n"
            "einem Z-Move."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
        .iconPic = gItemIcon_DecidiumZ,
        .iconPalette = gItemIconPalette_DecidiumZ,
    },

    [ITEM_INCINIUM_Z] =
    {
        .name = ITEM_NAME("Fuegronium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Rüste Incineroars\n"
            "dunkelstes Lariat zu\n"
            "einem Z-Move auf."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
        .iconPic = gItemIcon_InciniumZ,
        .iconPalette = gItemIconPalette_InciniumZ,
    },

    [ITEM_PRIMARIUM_Z] =
    {
        .name = ITEM_NAME("Primarenium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Primarinas\n"
            "funkelnde Arie zu\n"
            "einer Z-Attacke."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
        .iconPic = gItemIcon_PrimariumZ,
        .iconPalette = gItemIconPalette_PrimariumZ,
    },

    [ITEM_LYCANIUM_Z] =
    {
        .name = ITEM_NAME("Wolwerockium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Lycanrocs\n"
            "Steinkante zu einer\n"
            "Z-Attacke."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
        .iconPic = gItemIcon_LycaniumZ,
        .iconPalette = gItemIconPalette_LycaniumZ,
    },

    [ITEM_MIMIKIUM_Z] =
    {
        .name = ITEM_NAME("Mimigmium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Mimikyus\n"
            "Play Rough zu einem\n"
            "Z-Move."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
        .iconPic = gItemIcon_MimikiumZ,
        .iconPalette = gItemIconPalette_MimikiumZ,
    },

    [ITEM_KOMMONIUM_Z] =
    {
        .name = ITEM_NAME("Grandirasium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Kommo-os\n"
            "klirrende Schuppen\n"
            "zu einer Z-Attacke."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
        .iconPic = gItemIcon_KommoniumZ,
        .iconPalette = gItemIconPalette_KommoniumZ,
    },

    [ITEM_TAPUNIUM_Z] =
    {
        .name = ITEM_NAME("Kapium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Natures\n"
            "Madness des Tapus\n"
            "zu einem Z-Move."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  //signature z move
        .iconPic = gItemIcon_TapuniumZ,
        .iconPalette = gItemIconPalette_TapuniumZ,
    },

    [ITEM_SOLGANIUM_Z] =
    {
        .name = ITEM_NAME("Solgalium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Solgaleos\n"
            "Sonnenstahlschlag zu\n"
            "einer Z-Attacke."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
        .iconPic = gItemIcon_SolganiumZ,
        .iconPalette = gItemIconPalette_SolganiumZ,
    },

    [ITEM_LUNALIUM_Z] =
    {
        .name = ITEM_NAME("Lunalium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Lunalas\n"
            "Mondgeiststrahl zu\n"
            "einer Z-Attacke."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
        .iconPic = gItemIcon_LunaliumZ,
        .iconPalette = gItemIconPalette_LunaliumZ,
    },

    [ITEM_MARSHADIUM_Z] =
    {
        .name = ITEM_NAME("Marshadownium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Marshadows\n"
            "Spectral Thief zu\n"
            "einem Z-Move."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
        .iconPic = gItemIcon_MarshadiumZ,
        .iconPalette = gItemIconPalette_MarshadiumZ,
    },

    [ITEM_ALORAICHIUM_Z] =
    {
        .name = ITEM_NAME("A-Raichunium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Alolan\n"
            "Raichus Donnerblitz\n"
            "zu einer Z-Attacke."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
        .iconPic = gItemIcon_AloraichiumZ,
        .iconPalette = gItemIconPalette_AloraichiumZ,
    },

    [ITEM_PIKASHUNIUM_Z] =
    {
        .name = ITEM_NAME("Ash-Pikachium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Verbessere Pikachu mit\n"
            "dem Thunderbolt einer\n"
            "Kappe zu einer Z-Attacke."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
        .iconPic = gItemIcon_PikashuniumZ,
        .iconPalette = gItemIconPalette_PikashuniumZ,
    },

    [ITEM_ULTRANECROZIUM_Z] =
    {
        .name = ITEM_NAME("Ultranecrozium Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "Ein Kristall, der\n"
            "verschmolzenes Necrozma\n"
            "in eine neue F..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_Z_CRYSTAL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255, //signature z move
        .iconPic = gItemIcon_UltranecroziumZ,
        .iconPalette = gItemIconPalette_UltranecroziumZ,
    },

// Species-specific Held Items

    [ITEM_LIGHT_BALL] =
    {
        .name = ITEM_NAME("Kugelblitz"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 100,
        .holdEffect = HOLD_EFFECT_LIGHT_BALL,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die Angriffs- und\n"
            "Angriffsstärke erhö..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_LightBall,
        .iconPalette = gItemIconPalette_LightBall,
    },

    [ITEM_LEEK] =
    {
        .name = ITEM_NAME("Lauchstange"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 200,
        .holdEffect = HOLD_EFFECT_LEEK,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die kritische\n"
            "Trefferquote ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_Leek,
        .iconPalette = gItemIconPalette_Leek,
    },

    [ITEM_THICK_CLUB] =
    {
        .name = ITEM_NAME("Kampfknochen"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 500,
        .holdEffect = HOLD_EFFECT_THICK_CLUB,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "Cubones oder Marowaks\n"
            "Angriff erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 90,
        .iconPic = gItemIcon_Bone,
        .iconPalette = gItemIconPalette_Bone,
    },

    [ITEM_LUCKY_PUNCH] =
    {
        .name = ITEM_NAME("Lucky Punch"),
        .pluralName = ITEM_PLURAL_NAME("Lucky Punches"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 10,
        .holdEffect = HOLD_EFFECT_LUCKY_PUNCH,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der Chanseys kritische\n"
            "Trefferquote erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 40,
        .iconPic = gItemIcon_LuckyPunch,
        .iconPalette = gItemIconPalette_LuckyPunch,
    },

    [ITEM_METAL_POWDER] =
    {
        .name = ITEM_NAME("Metallstaub"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 10,
        .holdEffect = HOLD_EFFECT_METAL_POWDER,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der Dittos\n"
            "Verteidigung erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_DittoPowder,
        .iconPalette = gItemIconPalette_MetalPowder,
    },

    [ITEM_QUICK_POWDER] =
    {
        .name = ITEM_NAME("Flottstaub"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 10,
        .holdEffect = HOLD_EFFECT_QUICK_POWDER,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der die Geschwindigkeit\n"
            "von Ditto erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_DittoPowder,
        .iconPalette = gItemIconPalette_QuickPowder,
    },

    [ITEM_DEEP_SEA_SCALE] =
    {
        .name = ITEM_NAME("Abyssplatte"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 200,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_SCALE,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der die SP erhöht.\n"
            "Def von Clamperl."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_DeepSeaScale,
        .iconPalette = gItemIconPalette_DeepSeaScale,
    },

    [ITEM_DEEP_SEA_TOOTH] =
    {
        .name = ITEM_NAME("Abysszahn"),
        .pluralName = ITEM_PLURAL_NAME("Deep Sea Teeth"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 200,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_TOOTH,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der die SP erhöht.\n"
            "Angriff von Clamperl."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 90,
        .iconPic = gItemIcon_DeepSeaTooth,
        .iconPalette = gItemIconPalette_DeepSeaTooth,
    },

    [ITEM_SOUL_DEW] =
    {
        .name = ITEM_NAME("Seelentau"),
        .price = (I_PRICE >= GEN_7) ? 0 : 200,
        .holdEffect = HOLD_EFFECT_SOUL_DEW,
        .holdEffectParam = B_SOUL_DEW_BOOST >= GEN_7 ? 20 : 50,
        .description = COMPOUND_STRING(
        #if B_SOUL_DEW_BOOST >= GEN_7
            "Verstärkt Latios' &\n"
            "Latias' Psycho und\n"
            "Drachen Attacken."),
        #else
            "Gehalten: Erhöht\n"
            "Sp. Ang & Sp. Ver\n"
            "von Latios & Latias."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_SoulDew,
        .iconPalette = gItemIconPalette_SoulDew,
    },

    [ITEM_ADAMANT_ORB] =
    {
        .name = ITEM_NAME("Adamant-Orb"),
        .price = (I_PRICE >= GEN_7) ? 0 : 10000,
        .holdEffect = HOLD_EFFECT_ADAMANT_ORB,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Verstärkt Dialgas\n"
            "Bewegungen vom Typ\n"
            "Drache und Stahl."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_AdamantOrb,
        .iconPalette = gItemIconPalette_AdamantOrb,
    },

    [ITEM_LUSTROUS_ORB] =
    {
        .name = ITEM_NAME("Weiß-Orb"),
        .price = (I_PRICE >= GEN_7) ? 0 : 10000,
        .holdEffect = HOLD_EFFECT_LUSTROUS_ORB,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Verstärkt Palkias\n"
            "Bewegungen vom Typ\n"
            "Drache und Wasser."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_LustrousOrb,
        .iconPalette = gItemIconPalette_LustrousOrb,
    },

    [ITEM_GRISEOUS_ORB] =
    {
        .name = ITEM_NAME("Platinum-Orb"),
        .price = (I_PRICE >= GEN_7) ? 0 : 10000,
        .holdEffect = HOLD_EFFECT_GRISEOUS_ORB,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Verstärkt Giratinas\n"
            "Bewegungen vom Typ\n"
            "Drache und Geist."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_GriseousOrb,
        .iconPalette = gItemIconPalette_GriseousOrb,
    },

// Incenses

    [ITEM_SEA_INCENSE] =
    {
        .name = ITEM_NAME("Seerauch"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = I_TYPE_BOOST_POWER >= GEN_4 ? 20 : 5,
        .description = sSeaIncenseDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_INCENSE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
        .flingPower = 10,
        .iconPic = gItemIcon_SeaIncense,
        .iconPalette = gItemIconPalette_SeaIncense,
    },

    [ITEM_LAX_INCENSE] =
    {
        .name = ITEM_NAME("Laxrauch"),
        .price = (I_PRICE >= GEN_7) ? 5000 : 9600,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
    #if I_LAX_INCENSE_BOOST >= GEN_4
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der die Genauigkeit des\n"
            "Gegners verringert."),
    #else
        .holdEffectParam = 5,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die Genauigkeit des\n"
            "Gegners lei..."),
    #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_INCENSE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_LaxIncense,
        .iconPalette = gItemIconPalette_LaxIncense,
    },

    [ITEM_ODD_INCENSE] =
    {
        .name = ITEM_NAME("Schrägrauch"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = 20,
        .description = sOddIncenseDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_INCENSE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
        .flingPower = 10,
        .iconPic = gItemIcon_OddIncense,
        .iconPalette = gItemIconPalette_OddIncense,
    },

    [ITEM_ROCK_INCENSE] =
    {
        .name = ITEM_NAME("Steinrauch"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = 20,
        .description = sRockIncenseDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_INCENSE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
        .flingPower = 10,
        .iconPic = gItemIcon_RockIncense,
        .iconPalette = gItemIconPalette_RockIncense,
    },

    [ITEM_FULL_INCENSE] =
    {
        .name = ITEM_NAME("Lahmrauch"),
        .price = (I_PRICE >= GEN_7) ? 5000 : 9600,
        .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
        .holdEffectParam = 5,
        .description = sFullIncenseDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_INCENSE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_FullIncense,
        .iconPalette = gItemIconPalette_FullIncense,
    },

    [ITEM_WAVE_INCENSE] =
    {
        .name = ITEM_NAME("Wellenrauch"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = 20,
        .description = sSeaIncenseDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_INCENSE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
        .flingPower = 10,
        .iconPic = gItemIcon_WaveIncense,
        .iconPalette = gItemIconPalette_WaveIncense,
    },

    [ITEM_ROSE_INCENSE] =
    {
        .name = ITEM_NAME("Rosenrauch"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = 20,
        .description = sRoseIncenseDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_INCENSE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
        .flingPower = 10,
        .iconPic = gItemIcon_RoseIncense,
        .iconPalette = gItemIconPalette_RoseIncense,
    },

    [ITEM_LUCK_INCENSE] =
    {
        .name = ITEM_NAME("Glücksrauch"),
        .price = (I_PRICE >= GEN_7) ? 11000 : 9600,
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .description = sLuckIncenseDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_INCENSE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_LuckIncense,
        .iconPalette = gItemIconPalette_LuckIncense,
    },

    [ITEM_PURE_INCENSE] =
    {
        .name = ITEM_NAME("Scheuchrauch"),
        .price = (I_PRICE >= GEN_7) ? 6000 : 9600,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sPureIncenseDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_INCENSE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_PureIncense,
        .iconPalette = gItemIconPalette_PureIncense,
    },

// Contest Scarves

    [ITEM_RED_SCARF] =
    {
        .name = ITEM_NAME("Roter Schal"),
        .pluralName = ITEM_PLURAL_NAME("Red Scarves"),
        .price = 100,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der die Coolness in\n"
            "Wettbewerben erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_CONTEST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_Scarf,
        .iconPalette = gItemIconPalette_RedScarf,
    },

    [ITEM_BLUE_SCARF] =
    {
        .name = ITEM_NAME("Blauer Schal"),
        .pluralName = ITEM_PLURAL_NAME("Blue Scarves"),
        .price = 100,
        .description = COMPOUND_STRING(
            "Ein\n"
            "Aufbewahrungsgegenstand,\n"
            "der die Schönheit..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_CONTEST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_Scarf,
        .iconPalette = gItemIconPalette_BlueScarf,
    },

    [ITEM_PINK_SCARF] =
    {
        .name = ITEM_NAME("Rosa Schal"),
        .pluralName = ITEM_PLURAL_NAME("Pink Scarves"),
        .price = 100,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der in Wettbewerben\n"
            "Niedlichkeit erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_CONTEST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_Scarf,
        .iconPalette = gItemIconPalette_PinkScarf,
    },

    [ITEM_GREEN_SCARF] =
    {
        .name = ITEM_NAME("Grüner Schal"),
        .pluralName = ITEM_PLURAL_NAME("Green Scarves"),
        .price = 100,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der die Intelligenz in\n"
            "Wettbewerben erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_CONTEST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_Scarf,
        .iconPalette = gItemIconPalette_GreenScarf,
    },

    [ITEM_YELLOW_SCARF] =
    {
        .name = ITEM_NAME("Gelber Schal"),
        .pluralName = ITEM_PLURAL_NAME("Yellow Scarves"),
        .price = 100,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der die Härte in\n"
            "Wettbewerben erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_CONTEST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_Scarf,
        .iconPalette = gItemIconPalette_YellowScarf,
    },

// EV Gain Modifiers

    [ITEM_MACHO_BRACE] =
    {
        .name = ITEM_NAME("Machoband"),
        .price = 3000,
        .holdEffect = HOLD_EFFECT_MACHO_BRACE,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "das Wachstum fördert,\n"
            "aber die Geschwindigk..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EV_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_MachoBrace,
        .iconPalette = gItemIconPalette_MachoBrace,
    },

    [ITEM_POWER_WEIGHT] =
    {
        .name = ITEM_NAME("Machtgewicht"),
        .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = POWER_ITEM_BOOST,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "den KP-Gewinn fördert,\n"
            "aber die Geschwindigk..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EV_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_HP,
        .flingPower = 70,
        .iconPic = gItemIcon_PowerWeight,
        .iconPalette = gItemIconPalette_PowerWeight,
    },

    [ITEM_POWER_BRACER] =
    {
        .name = ITEM_NAME("Machtreif"),
        .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = POWER_ITEM_BOOST,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "den Angriffsgewinn\n"
            "erhöht, aber ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EV_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_ATK,
        .flingPower = 70,
        .iconPic = gItemIcon_PowerBracer,
        .iconPalette = gItemIconPalette_PowerBracer,
    },

    [ITEM_POWER_BELT] =
    {
        .name = ITEM_NAME("Machtgurt"),
        .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = POWER_ITEM_BOOST,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "den Verteidigungsgewinn\n"
            "fördert, aber ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EV_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_DEF,
        .flingPower = 70,
        .iconPic = gItemIcon_PowerBelt,
        .iconPalette = gItemIconPalette_PowerBelt,
    },

    [ITEM_POWER_LENS] =
    {
        .name = ITEM_NAME("Machtlinse"),
        .pluralName = ITEM_PLURAL_NAME("Power Lenses"),
        .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = POWER_ITEM_BOOST,
        .description = COMPOUND_STRING(
            "Halten Sie einen\n"
            "Gegenstand, der Sp\n"
            "fördert. Angriffsgewi..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EV_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPATK,
        .flingPower = 70,
        .iconPic = gItemIcon_PowerLens,
        .iconPalette = gItemIconPalette_PowerLens,
    },

    [ITEM_POWER_BAND] =
    {
        .name = ITEM_NAME("Machtband"),
        .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = POWER_ITEM_BOOST,
        .description = COMPOUND_STRING(
            "Halten Sie einen\n"
            "Gegenstand, der Sp\n"
            "förde..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EV_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPDEF,
        .flingPower = 70,
        .iconPic = gItemIcon_PowerBand,
        .iconPalette = gItemIconPalette_PowerBand,
    },

    [ITEM_POWER_ANKLET] =
    {
        .name = ITEM_NAME("Machtkette"),
        .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = POWER_ITEM_BOOST,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "den\n"
            "Geschwindigkeitsgew..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EV_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPEED,
        .flingPower = 70,
        .iconPic = gItemIcon_PowerAnklet,
        .iconPalette = gItemIconPalette_PowerAnklet,
    },

// Type-boosting Held Items
    #if I_PRICE >= GEN_9
        #define TYPE_BOOSTING_PRICE 3000
    #elif I_PRICE >= GEN_7
        #define TYPE_BOOSTING_PRICE 1000
    #else
        #define TYPE_BOOSTING_PRICE 100
    #endif

    [ITEM_SILK_SCARF] =
    {
        .name = ITEM_NAME("Seidenschal"),
        .pluralName = ITEM_PLURAL_NAME("Silk Scarves"),
        .price = TYPE_BOOSTING_PRICE,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die Kraft von Bewegungen\n"
            "vom Typ Normal erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_NORMAL,
        .flingPower = 10,
        .iconPic = gItemIcon_SilkScarf,
        .iconPalette = gItemIconPalette_SilkScarf,
    },

    [ITEM_CHARCOAL] =
    {
        .name = ITEM_NAME("Holzkohle"),
    #if I_PRICE >= GEN_9
        .price = 3000,
    #elif I_PRICE >= GEN_7
        .price = 1000,
    #else
        .price = 9800,
    #endif
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die Kraft von Bewegungen\n"
            "vom Typ Feuer erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
        .flingPower = 30,
        .iconPic = gItemIcon_Charcoal,
        .iconPalette = gItemIconPalette_Charcoal,
    },

    [ITEM_MYSTIC_WATER] =
    {
        .name = ITEM_NAME("Zauberwasser"),
        .price = TYPE_BOOSTING_PRICE,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die Kraft von Bewegungen\n"
            "vom Typ Wasser erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
        .flingPower = 30,
        .iconPic = gItemIcon_MysticWater,
        .iconPalette = gItemIconPalette_MysticWater,
    },

    [ITEM_MAGNET] =
    {
        .name = ITEM_NAME("Magnet"),
        .price = TYPE_BOOSTING_PRICE,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der elektrische\n"
            "Bewegungen verstärkt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
        .flingPower = 30,
        .iconPic = gItemIcon_Magnet,
        .iconPalette = gItemIconPalette_Magnet,
    },

    [ITEM_MIRACLE_SEED] =
    {
        .name = ITEM_NAME("Wundersaat"),
        .price = TYPE_BOOSTING_PRICE,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sRoseIncenseDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
        .flingPower = 30,
        .iconPic = gItemIcon_MiracleSeed,
        .iconPalette = gItemIconPalette_MiracleSeed,
    },

    [ITEM_NEVER_MELT_ICE] =
    {
        .name = ITEM_NAME("Ewiges Eis"),
        .price = TYPE_BOOSTING_PRICE,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die Kraft von Bewegungen\n"
            "vom Typ Eis erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
        .flingPower = 30,
        .iconPic = gItemIcon_NeverMeltIce,
        .iconPalette = gItemIconPalette_NeverMeltIce,
    },

    [ITEM_BLACK_BELT] =
    {
        .name = ITEM_NAME("Schwarzgurt"),
        .price = TYPE_BOOSTING_PRICE,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der Kampfbewegungen\n"
            "verstärkt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
        .flingPower = 30,
        .iconPic = gItemIcon_BlackBelt,
        .iconPalette = gItemIconPalette_BlackTypeEnhancingItem,
    },

    [ITEM_POISON_BARB] =
    {
        .name = ITEM_NAME("Giftstich"),
        .price = TYPE_BOOSTING_PRICE,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die Kraft von Bewegungen\n"
            "vom Typ Gift erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
        .flingPower = 70,
        .iconPic = gItemIcon_PoisonBarb,
        .iconPalette = gItemIconPalette_PoisonBarb,
    },

    [ITEM_SOFT_SAND] =
    {
        .name = ITEM_NAME("Pudersand"),
        .pluralName = ITEM_PLURAL_NAME("Soft Sand"),
        .price = TYPE_BOOSTING_PRICE,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der die Kraft von\n"
            "Bodenbewegungen erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
        .flingPower = 10,
        .iconPic = gItemIcon_Sand,
        .iconPalette = gItemIconPalette_SoftSand,
    },

    [ITEM_SHARP_BEAK] =
    {
        .name = ITEM_NAME("Hackattack"),
        .price = TYPE_BOOSTING_PRICE,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der die Kraft von\n"
            "Flugbewegungen erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
        .flingPower = 50,
        .iconPic = gItemIcon_SharpBeak,
        .iconPalette = gItemIconPalette_SharpBeak,
    },

    [ITEM_TWISTED_SPOON] =
    {
        .name = ITEM_NAME("Krümmlöffel"),
        .price = TYPE_BOOSTING_PRICE,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sOddIncenseDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
        .flingPower = 30,
        .iconPic = gItemIcon_TwistedSpoon,
        .iconPalette = gItemIconPalette_TwistedSpoon,
    },

    [ITEM_SILVER_POWDER] =
    {
        .name = ITEM_NAME("Silberstaub"),
        .price = TYPE_BOOSTING_PRICE,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die Kraft von Bewegungen\n"
            "vom Typ Käfer erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
        .flingPower = 10,
        .iconPic = gItemIcon_SilverPowder,
        .iconPalette = gItemIconPalette_SilverPowder,
    },

    [ITEM_HARD_STONE] =
    {
        .name = ITEM_NAME("Granitstein"),
        .price = TYPE_BOOSTING_PRICE,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sRockIncenseDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
        .flingPower = 100,
        .iconPic = gItemIcon_HardStone,
        .iconPalette = gItemIconPalette_HardStone,
    },

    [ITEM_SPELL_TAG] =
    {
        .name = ITEM_NAME("Bannsticker"),
        .price = TYPE_BOOSTING_PRICE,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die Kraft von\n"
            "Geisterbewegungen erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
        .flingPower = 30,
        .iconPic = gItemIcon_SpellTag,
        .iconPalette = gItemIconPalette_SpellTag,
    },

    [ITEM_DRAGON_FANG] =
    {
        .name = ITEM_NAME("Drachenzahn"),
        .price = TYPE_BOOSTING_PRICE,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die Kraft von Bewegungen\n"
            "vom Typ Drache erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
        .flingPower = 70,
        .iconPic = gItemIcon_DragonFang,
        .iconPalette = gItemIconPalette_DragonFang,
    },

    [ITEM_BLACK_GLASSES] =
    {
        .name = ITEM_NAME("Schattenglas"),
        .pluralName = ITEM_PLURAL_NAME("Black Glasses"),
        .price = TYPE_BOOSTING_PRICE,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die Kraft von Bewegungen\n"
            "vom Typ Unlicht erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
        .flingPower = 30,
        .iconPic = gItemIcon_BlackGlasses,
        .iconPalette = gItemIconPalette_BlackTypeEnhancingItem,
    },

    [ITEM_METAL_COAT] =
    {
        .name = ITEM_NAME("Metallmantel"),
    #if I_PRICE >= GEN_9
        .price = 3000,
    #elif I_PRICE >= GEN_7
        .price = 2000,
    #else
        .price = 100,
    #endif
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die Kraft von Bewegungen\n"
            "vom Typ Stahl erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .secondaryId = TYPE_STEEL,
        .flingPower = 30,
        .iconPic = gItemIcon_MetalCoat,
        .iconPalette = gItemIconPalette_MetalCoat,
    },

// Choice Items

    [ITEM_CHOICE_BAND] =
    {
        .name = ITEM_NAME("Wahlband"),
    #if I_PRICE >= GEN_9
        .price = 100000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 100,
    #endif
        .holdEffect = HOLD_EFFECT_CHOICE_BAND,
        .description = COMPOUND_STRING(
            "Verstärkt den Angriff,\n"
            "erlaubt aber nur die\n"
            "Verwendung ei..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_ChoiceBand,
        .iconPalette = gItemIconPalette_ChoiceBand,
    },

    [ITEM_CHOICE_SPECS] =
    {
        .name = ITEM_NAME("Wahlglas"),
        .pluralName = ITEM_PLURAL_NAME("Choice Specs"),
    #if I_PRICE >= GEN_9
        .price = 100000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 100,
    #endif
        .holdEffect = HOLD_EFFECT_CHOICE_SPECS,
        .description = COMPOUND_STRING(
            "Steigert Sp. Angriff,\n"
            "erlaubt aber nur die\n"
            "Verwendung eines Zuges."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_ChoiceSpecs,
        .iconPalette = gItemIconPalette_ChoiceSpecs,
    },

    [ITEM_CHOICE_SCARF] =
    {
        .name = ITEM_NAME("Wahlschal"),
        .pluralName = ITEM_PLURAL_NAME("Choice Scarves"),
    #if I_PRICE >= GEN_9
        .price = 100000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 100,
    #endif
        .holdEffect = HOLD_EFFECT_CHOICE_SCARF,
        .description = COMPOUND_STRING(
            "Erhöht die\n"
            "Geschwindigkeit, erlaubt\n"
            "aber nur die Verwend..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_ChoiceScarf,
        .iconPalette = gItemIconPalette_ChoiceScarf,
    },

// Status Orbs

    [ITEM_FLAME_ORB] =
    {
        .name = ITEM_NAME("Heiß-Orb"),
    #if I_PRICE >= GEN_9
        .price = 15000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_FLAME_ORB,
        .description = COMPOUND_STRING(
            "Eine bizarre Kugel, die\n"
            "dem Träger im Kampf\n"
            "Verbrennungen zufügt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_FlameOrb,
        .iconPalette = gItemIconPalette_FlameOrb,
    },

    [ITEM_TOXIC_ORB] =
    {
        .name = ITEM_NAME("Toxik-Orb"),
    #if I_PRICE >= GEN_9
        .price = 15000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_TOXIC_ORB,
        .description = COMPOUND_STRING(
            "Eine bizarre Kugel,\n"
            "die den Träger im\n"
            "Kampf stark vergiftet."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_ToxicOrb,
        .iconPalette = gItemIconPalette_ToxicOrb,
    },

// Weather Rocks

    [ITEM_DAMP_ROCK] =
    {
        .name = ITEM_NAME("Nassbrocken"),
    #if I_PRICE >= GEN_9
        .price = 8000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_DAMP_ROCK,
        .description = COMPOUND_STRING(
            "Verlängert die Länge von\n"
            "Rain Dance, wenn es vom\n"
            "Inhaber verwendet wird."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_DampRock,
        .iconPalette = gItemIconPalette_DampRock,
    },

    [ITEM_HEAT_ROCK] =
    {
        .name = ITEM_NAME("Heißbrocken"),
    #if I_PRICE >= GEN_9
        .price = 8000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_HEAT_ROCK,
        .description = COMPOUND_STRING(
            "Verlängert die Dauer von\n"
            "Sunny Day, wenn es vom\n"
            "Inhaber verwendet wird."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_HeatRock,
        .iconPalette = gItemIconPalette_HeatRock,
    },

    [ITEM_SMOOTH_ROCK] =
    {
        .name = ITEM_NAME("Glattbrocken"),
    #if I_PRICE >= GEN_9
        .price = 8000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_SMOOTH_ROCK,
        .description = COMPOUND_STRING(
            "Verlängert die Länge von\n"
            "Sandstorm, wenn es vom\n"
            "Inhaber verwendet wird."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_SmoothRock,
        .iconPalette = gItemIconPalette_SmoothRock,
    },

    [ITEM_ICY_ROCK] =
    {
        .name = ITEM_NAME("Eisbrocken"),
    #if I_PRICE >= GEN_9
        .price = 8000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_ICY_ROCK,
    #if B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_HAIL
        .description = COMPOUND_STRING(
            "Verlängert die Länge des\n"
            "vom Besitzer verwendeten\n"
            "Bewegungshagels."),
    #elif B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_SNOW
        .description = COMPOUND_STRING(
            "Verlängert die Länge von\n"
            "Snowscape, wenn es vom\n"
            "Halter verwendet wird."),
    #else
        .description = COMPOUND_STRING(
            "Verlängert die vom\n"
            "Halter genutzte Dauer\n"
            "bei kaltem Wetter."),
    #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 40,
        .iconPic = gItemIcon_IcyRock,
        .iconPalette = gItemIconPalette_IcyRock,
    },

// Terrain Seeds

    [ITEM_ELECTRIC_SEED] =
    {
        .name = ITEM_NAME("Elektro-Samen"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_TERRAIN_SEED,
        .holdEffectParam = HOLD_EFFECT_PARAM_ELECTRIC_TERRAIN,
        .description = COMPOUND_STRING(
            "Erhöht die Verteidigung\n"
            "auf elektrischem Gelände,\n"
            "aber nur einmal."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_TerrainSeed,
        .iconPalette = gItemIconPalette_ElectricSeed,
    },

    [ITEM_PSYCHIC_SEED] =
    {
        .name = ITEM_NAME("Psycho-Samen"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_TERRAIN_SEED,
        .holdEffectParam = HOLD_EFFECT_PARAM_PSYCHIC_TERRAIN,
        .description = COMPOUND_STRING(
            "Steigert Sp. Def. auf\n"
            "psychischem Terrain,\n"
            "aber nur einmal."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_TerrainSeed,
        .iconPalette = gItemIconPalette_PsychicSeed,
    },

    [ITEM_MISTY_SEED] =
    {
        .name = ITEM_NAME("Nebel-Samen"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_TERRAIN_SEED,
        .holdEffectParam = HOLD_EFFECT_PARAM_MISTY_TERRAIN,
        .description = COMPOUND_STRING(
            "Steigert Sp. Def.\n"
            "auf Misty Terrain,\n"
            "aber nur einmal."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_TerrainSeed,
        .iconPalette = gItemIconPalette_MistySeed,
    },

    [ITEM_GRASSY_SEED] =
    {
        .name = ITEM_NAME("Gras-Samen"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_TERRAIN_SEED,
        .holdEffectParam = HOLD_EFFECT_PARAM_GRASSY_TERRAIN,
        .description = COMPOUND_STRING(
            "Erhöht die Verteidigung\n"
            "auf Grasgelände, aber\n"
            "nur einmal."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_TerrainSeed,
        .iconPalette = gItemIconPalette_GrassySeed,
    },

// Type-activated Stat Modifiers

    [ITEM_ABSORB_BULB] =
    {
        .name = ITEM_NAME("Knolle"),
    #if I_PRICE >= GEN_9
        .price = 5000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_ABSORB_BULB,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Erhöht Sp. Angriff, wenn\n"
            "der Träger von einer\n"
            "Bewegung vom Typ Was..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_AbsorbBulb,
        .iconPalette = gItemIconPalette_AbsorbBulb,
    },

    [ITEM_CELL_BATTERY] =
    {
        .name = ITEM_NAME("Akku"),
        .pluralName = ITEM_PLURAL_NAME("Cell Batteries"),
    #if I_PRICE >= GEN_9
        .price = 5000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_CELL_BATTERY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Erhöht den Angriff, wenn\n"
            "der Träger von einer\n"
            "elektrischen Beweg..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_CellBattery,
        .iconPalette = gItemIconPalette_CellBattery,
    },

    [ITEM_LUMINOUS_MOSS] =
    {
        .name = ITEM_NAME("Leuchtmoos"),
        .pluralName = ITEM_PLURAL_NAME("Luminous Moss"),
    #if I_PRICE >= GEN_9
        .price = 5000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 1000,
    #endif
        .holdEffect = HOLD_EFFECT_LUMINOUS_MOSS,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Erhöht Sp. Def, wenn der\n"
            "Träger von einer Bewegung\n"
            "vom Typ Wasser getrof..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_LuminousMoss,
        .iconPalette = gItemIconPalette_LuminousMoss,
    },

    [ITEM_SNOWBALL] =
    {
        .name = ITEM_NAME("Schneeball"),
    #if I_PRICE >= GEN_9
        .price = 5000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_SNOWBALL,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Erhöht ANG, wenn sein\n"
            "Träger von einer Attacke\n"
            "vom Typ Eis getrof..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Snowball,
        .iconPalette = gItemIconPalette_Snowball,
    },

// Misc. Held Items

    [ITEM_BRIGHT_POWDER] =
    {
        .name = ITEM_NAME("Blendpuder"),
    #if I_PRICE >= GEN_9
        .price = 30000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 10,
    #endif
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Ein gehaltener\n"
            "Gegenstand, der blendet,\n"
            "um die Genauigkeit..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_BrightPowder,
        .iconPalette = gItemIconPalette_BrightPowder,
    },

    [ITEM_WHITE_HERB] =
    {
        .name = ITEM_NAME("Schlohkraut"),
    #if I_PRICE >= GEN_9
        .price = 20000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 100,
    #endif
        .holdEffect = HOLD_EFFECT_WHITE_HERB,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der alle verringerten\n"
            "Werte wiederherstellt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_InBattleHerb,
        .iconPalette = gItemIconPalette_WhiteHerb,
    },

    [ITEM_EXP_SHARE] =
    {
        .name = ITEM_NAME("EP-Teiler"),
        .holdEffect = HOLD_EFFECT_EXP_SHARE,
    #if I_EXP_SHARE_ITEM >= GEN_6
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Dieses Gerät gibt\n"
            "exp. an andere\n"
            "Parteimitglieder."),
        .pocket = POCKET_KEY_ITEMS,
    #else
        .price = (I_PRICE == GEN_1) ? 1 : 3000,
        .description = COMPOUND_STRING(
            "Ein zurückgestelltes\n"
            "Element, das Exp erhält.\n"
            "Punkte aus Schlachten."),
        .pocket = POCKET_ITEMS,
    #endif
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_ExpShare,
        .flingPower = 30,
        .iconPic = gItemIcon_ExpShare,
        .iconPalette = gItemIconPalette_ExpShare,
    },

    [ITEM_QUICK_CLAW] =
    {
        .name = ITEM_NAME("Flinkklaue"),
    #if I_PRICE >= GEN_9
        .price = 8000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 100,
    #endif
        .holdEffect = HOLD_EFFECT_QUICK_CLAW,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der gelegentlich den\n"
            "Erstschlag ermöglicht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_QuickClaw,
        .iconPalette = gItemIconPalette_QuickClaw,
    },

    [ITEM_SOOTHE_BELL] =
    {
        .name = ITEM_NAME("Sanftglocke"),
    #if I_PRICE >= GEN_9
        .price = 5000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 100,
    #endif
        .holdEffect = HOLD_EFFECT_FRIENDSHIP_UP,
        .description = COMPOUND_STRING(
            "Ein\n"
            "Aufbewahrungsgegenstand,\n"
            "der die Stimmung beruh..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_SootheBell,
        .iconPalette = gItemIconPalette_SootheBell,
    },

    [ITEM_MENTAL_HERB] =
    {
        .name = ITEM_NAME("Mentalkraut"),
    #if I_PRICE >= GEN_9
        .price = 10000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 100,
    #endif
        .holdEffect = HOLD_EFFECT_MENTAL_HERB,
        .description = COMPOUND_STRING(
        #if B_MENTAL_HERB >= GEN_5
            "Befreit Pokémon\n"
            "von Binde-\n"
            "effeten."),
        #else
            "Befreit ein\n"
            "Pokémon von\n"
            "Anziehung."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_InBattleHerb,
        .iconPalette = gItemIconPalette_MentalHerb,
    },

    [ITEM_KINGS_ROCK] =
    {
        .name = ITEM_NAME("King-Stein"),
    #if I_PRICE >= GEN_9
        .price = 10000,
    #elif I_PRICE >= GEN_7
        .price = 5000,
    #else
        .price = 100,
    #endif
        .holdEffect = HOLD_EFFECT_FLINCH,
        .holdEffectParam = 10,
        .description = sKingsRockDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_KingsRock,
        .iconPalette = gItemIconPalette_KingsRock,
    },

    [ITEM_AMULET_COIN] =
    {
        .name = ITEM_NAME("Münzamulett"),
    #if I_PRICE >= GEN_9
        .price = 30000,
    #elif I_PRICE >= GEN_7
        .price = 10000,
    #else
        .price = 100,
    #endif
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .description = sLuckIncenseDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_AmuletCoin,
        .iconPalette = gItemIconPalette_AmuletCoin,
    },

    [ITEM_CLEANSE_TAG] =
    {
        .name = ITEM_NAME("Schutzband"),
        .price = (I_PRICE >= GEN_7) ? 5000 : 200,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sPureIncenseDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_CleanseTag,
        .iconPalette = gItemIconPalette_CleanseTag,
    },

    [ITEM_SMOKE_BALL] =
    {
        .name = ITEM_NAME("Rauchball"),
    #if I_PRICE >= GEN_9
        .price = 15000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_CAN_ALWAYS_RUN,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die Flucht vor wilden\n"
            "Pokémon gewährleistet."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_SmokeBall,
        .iconPalette = gItemIconPalette_SmokeBall,
    },

    [ITEM_FOCUS_BAND] =
    {
        .name = ITEM_NAME("Fokus-Band"),
    #if I_PRICE >= GEN_9
        .price = 10000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_FOCUS_BAND,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "gelegentlich\n"
            "Ohnmachtsanfä..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_FocusBand,
        .iconPalette = gItemIconPalette_FocusBand,
    },

    [ITEM_LUCKY_EGG] =
    {
        .name = ITEM_NAME("Glücks-Ei"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 200,
        .holdEffect = HOLD_EFFECT_LUCKY_EGG,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die Erfahrung steigert.\n"
            "Im Kampf verdie..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_LuckyEgg,
        .iconPalette = gItemIconPalette_LuckyEgg,
    },

    [ITEM_SCOPE_LENS] =
    {
        .name = ITEM_NAME("Scope-Linse"),
        .pluralName = ITEM_PLURAL_NAME("Scope Lenses"),
    #if I_PRICE >= GEN_9
        .price = 15000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 100,
    #endif
        .holdEffect = HOLD_EFFECT_SCOPE_LENS,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die kritische\n"
            "Trefferquote verbessert."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_ScopeLens,
        .iconPalette = gItemIconPalette_ScopeLens,
    },

    [ITEM_LEFTOVERS] =
    {
        .name = ITEM_NAME("Überreste"),
        .pluralName = ITEM_PLURAL_NAME("Leftovers"),
    #if I_PRICE >= GEN_9
        .price = 20000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_LEFTOVERS,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "im Kampf nach und nach\n"
            "KP wiederherstellt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_Leftovers,
        .iconPalette = gItemIconPalette_Leftovers,
    },

    [ITEM_SHELL_BELL] =
    {
        .name = ITEM_NAME("Seegesang"),
    #if I_PRICE >= GEN_9
        .price = 20000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_SHELL_BELL,
        .holdEffectParam = 8,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "KP wiederherstellt, wenn\n"
            "er den Feind trifft."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_ShellBell,
        .iconPalette = gItemIconPalette_Shell,
    },

    [ITEM_WIDE_LENS] =
    {
        .name = ITEM_NAME("Großlinse"),
        .pluralName = ITEM_PLURAL_NAME("Wide Lenses"),
    #if I_PRICE >= GEN_9
        .price = 20000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_WIDE_LENS,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Eine Vergrößerungslinse,\n"
            "die die Genauigkeit von\n"
            "Bewegungen erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_WideLens,
        .iconPalette = gItemIconPalette_WideLens,
    },

    [ITEM_MUSCLE_BAND] =
    {
        .name = ITEM_NAME("Muskelband"),
    #if I_PRICE >= GEN_9
        .price = 8000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_MUSCLE_BAND,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Ein Stirnband, das die\n"
            "Kraft körperlicher\n"
            "Bewegungen steigert."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_MuscleBand,
        .iconPalette = gItemIconPalette_MuscleBand,
    },

    [ITEM_WISE_GLASSES] =
    {
        .name = ITEM_NAME("Schlauglas"),
        .pluralName = ITEM_PLURAL_NAME("Wise Glasses"),
    #if I_PRICE >= GEN_9
        .price = 8000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_WISE_GLASSES,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Eine Brille, die die\n"
            "Kraft von\n"
            "Spezialbewegun..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_WiseGlasses,
        .iconPalette = gItemIconPalette_WiseGlasses,
    },

    [ITEM_EXPERT_BELT] =
    {
        .name = ITEM_NAME("Expertengurt"),
    #if I_PRICE >= GEN_9
        .price = 30000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_EXPERT_BELT,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein Gürtel, der die\n"
            "Kraft supereffektiver\n"
            "Bewegungen steigert."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_ExpertBelt,
        .iconPalette = gItemIconPalette_ExpertBelt,
    },

    [ITEM_LIGHT_CLAY] =
    {
        .name = ITEM_NAME("Lichtlehm"),
    #if I_PRICE >= GEN_9
        .price = 20000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_LIGHT_CLAY,
        .description = COMPOUND_STRING(
            "Verlängert die Länge der\n"
            "vom Halter verwendeten\n"
            "Barrierebewegungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_LightClay,
        .iconPalette = gItemIconPalette_LightClay,
    },

    [ITEM_LIFE_ORB] =
    {
        .name = ITEM_NAME("Leben-Orb"),
    #if I_PRICE >= GEN_9
        .price = 50000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_LIFE_ORB,
        .description = COMPOUND_STRING(
            "Erhöht die\n"
            "Bewegungskraft, aber der\n"
            "Träger verliert bei je..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_LifeOrb,
        .iconPalette = gItemIconPalette_LifeOrb,
    },

    [ITEM_POWER_HERB] =
    {
        .name = ITEM_NAME("Energiekraut"),
    #if I_PRICE >= GEN_9
        .price = 30000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 100,
    #endif
        .holdEffect = HOLD_EFFECT_POWER_HERB,
        .description = COMPOUND_STRING(
            "Ermöglicht den sofortigen\n"
            "Einsatz einer Attacke,\n"
            "die zuerst aufgela..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_PowerHerb,
        .iconPalette = gItemIconPalette_PowerHerb,
    },

    [ITEM_FOCUS_SASH] =
    {
        .name = ITEM_NAME("Fokusgurt"),
        .pluralName = ITEM_PLURAL_NAME("Focus Sashes"),
    #if I_PRICE >= GEN_9
        .price = 50000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_FOCUS_SASH,
        .description = COMPOUND_STRING(
            "Wenn der Träger über\n"
            "volle KP verfügt,\n"
            "übersteht er KO-Tref..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_FocusSash,
        .iconPalette = gItemIconPalette_FocusSash,
    },

    [ITEM_ZOOM_LENS] =
    {
        .name = ITEM_NAME("Zoomlinse"),
        .pluralName = ITEM_PLURAL_NAME("Zoom Lenses"),
    #if I_PRICE >= GEN_9
        .price = 10000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_ZOOM_LENS,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Wenn sich der Träger\n"
            "hinter dem Gegner bewegt,\n"
            "erhöht sich ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_ZoomLens,
        .iconPalette = gItemIconPalette_ZoomLens,
    },

    [ITEM_METRONOME] =
    {
        .name = ITEM_NAME("Metronom"),
    #if I_PRICE >= GEN_9
        .price = 15000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_METRONOME,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein gehaltener\n"
            "Gegenstand, der eine\n"
            "nacheinander verwend..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Metronome,
        .iconPalette = gItemIconPalette_Metronome,
    },

    [ITEM_IRON_BALL] =
    {
        .name = ITEM_NAME("Eisenkugel"),
    #if I_PRICE >= GEN_9
        .price = 20000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_IRON_BALL,
        .description = COMPOUND_STRING(
            "Reduziert die\n"
            "Geschwindigkeit und wird\n"
            "anfällig ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 130,
        .iconPic = gItemIcon_IronBall,
        .iconPalette = gItemIconPalette_IronBall,
    },

    [ITEM_LAGGING_TAIL] =
    {
        .name = ITEM_NAME("Schwerschwf."),
    #if I_PRICE >= GEN_9
        .price = 20000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
        .description = sFullIncenseDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_LaggingTail,
        .iconPalette = gItemIconPalette_LaggingTail,
    },

    [ITEM_DESTINY_KNOT] =
    {
        .name = ITEM_NAME("Fatumknoten"),
    #if I_PRICE >= GEN_9
        .price = 20000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_DESTINY_KNOT,
        .description = COMPOUND_STRING(
            "Wenn sich der Besitzer\n"
            "verliebt, verliebt\n"
            "sich auch der Feind."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_DestinyKnot,
        .iconPalette = gItemIconPalette_DestinyKnot,
    },

    [ITEM_BLACK_SLUDGE] =
    {
        .name = ITEM_NAME("Giftschleim"),
    #if I_PRICE >= GEN_9
        .price = 10000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_BLACK_SLUDGE,
        .description = COMPOUND_STRING(
            "Stellt KP für\n"
            "Gifttypen wieder her.\n"
            "Schädigt alle anderen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_BlackSludge,
        .iconPalette = gItemIconPalette_BlackSludge,
    },

    [ITEM_GRIP_CLAW] =
    {
        .name = ITEM_NAME("Griffklaue"),
    #if I_PRICE >= GEN_9
        .price = 10000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_GRIP_CLAW,
        .description = COMPOUND_STRING(
            "Ein gehaltener\n"
            "Gegenstand, der\n"
            "Bindungsbewegungen ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 90,
        .iconPic = gItemIcon_GripClaw,
        .iconPalette = gItemIconPalette_GripClaw,
    },

    [ITEM_STICKY_BARB] =
    {
        .name = ITEM_NAME("Klettdorn"),
    #if I_PRICE >= GEN_9
        .price = 10000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_STICKY_BARB,
        .description = COMPOUND_STRING(
            "Beschädigt den Halter\n"
            "jede Runde. Kann sich an\n"
            "Feinden festklammern."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_StickyBarb,
        .iconPalette = gItemIconPalette_StickyBarb,
    },

    [ITEM_SHED_SHELL] =
    {
        .name = ITEM_NAME("Wechselhülle"),
    #if I_PRICE >= GEN_9
        .price = 20000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 100,
    #endif
        .holdEffect = HOLD_EFFECT_SHED_SHELL,
        .description = COMPOUND_STRING(
            "Ermöglicht ein\n"
            "sicheres Auswechseln\n"
            "des Halters."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_ShedShell,
        .iconPalette = gItemIconPalette_ShedShell,
    },

    [ITEM_BIG_ROOT] =
    {
        .name = ITEM_NAME("Großwurzel"),
    #if I_PRICE >= GEN_9
        .price = 10000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_BIG_ROOT,
        .holdEffectParam = 30,
        .description = COMPOUND_STRING(
            "Ein gehaltener\n"
            "Gegenstand, der die Kraft\n"
            "KP-stehlender Bewegun..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_BigRoot,
        .iconPalette = gItemIconPalette_BigRoot,
    },

    [ITEM_RAZOR_CLAW] =
    {
        .name = ITEM_NAME("Scharfklaue"),
    #if I_PRICE >= GEN_9
        .price = 15000,
    #elif I_PRICE >= GEN_7
        .price = 5000,
    #else
        .price = 2100,
    #endif
        .holdEffect = HOLD_EFFECT_SCOPE_LENS,
        .description = COMPOUND_STRING(
            "Eine Hakenklaue, die die\n"
            "kritische Trefferquote\n"
            "des Trägers erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        .iconPic = gItemIcon_RazorClaw,
        .iconPalette = gItemIconPalette_RazorClaw,
    },

    [ITEM_RAZOR_FANG] =
    {
        .name = ITEM_NAME("Scharfzahn"),
    #if I_PRICE >= GEN_9
        .price = 15000,
    #elif I_PRICE >= GEN_7
        .price = 5000,
    #else
        .price = 2100,
    #endif
        .holdEffect = HOLD_EFFECT_FLINCH,
        .holdEffectParam = 10,
        .description = sKingsRockDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_RazorFang,
        .iconPalette = gItemIconPalette_RazorFang,
    },

    [ITEM_EVIOLITE] =
    {
        .name = ITEM_NAME("Evolith"),
    #if I_PRICE >= GEN_9
        .price = 50000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_EVIOLITE,
        .holdEffectParam = 50,
        .description = COMPOUND_STRING(
            "Erhöht Def und Sp.\n"
            "Definitiv ein Pokémon,\n"
            "das sich weiterentwick..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 40,
        .iconPic = gItemIcon_Eviolite,
        .iconPalette = gItemIconPalette_Eviolite,
    },

    [ITEM_FLOAT_STONE] =
    {
        .name = ITEM_NAME("Leichtstein"),
    #if I_PRICE >= GEN_9
        .price = 10000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_FLOAT_STONE,
        .description = COMPOUND_STRING(
            "Es ist so leicht, dass es\n"
            "beim Halten das Gewicht\n"
            "eines Pokémon halbiert."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_FloatStone,
        .iconPalette = gItemIconPalette_FloatStone,
    },

    [ITEM_ROCKY_HELMET] =
    {
        .name = ITEM_NAME("Beulenhelm"),
    #if I_PRICE >= GEN_9
        .price = 50000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_ROCKY_HELMET,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Verletzt den Gegner,\n"
            "wenn er seinen\n"
            "Träger berührt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_RockyHelmet,
        .iconPalette = gItemIconPalette_RockyHelmet,
    },

    [ITEM_AIR_BALLOON] =
    {
        .name = ITEM_NAME("Luftballon"),
    #if I_PRICE >= GEN_9
        .price = 15000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_AIR_BALLOON,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Lässt den Halter\n"
            "schweben, platzt jedoch,\n"
            "wenn er von einem Angr..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_AirBalloon,
        .iconPalette = gItemIconPalette_AirBalloon,
    },

    [ITEM_RED_CARD] =
    {
        .name = ITEM_NAME("Rote Karte"),
    #if I_PRICE >= GEN_9
        .price = 3000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_RED_CARD,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Schaltet den Gegner\n"
            "aus, wenn er den\n"
            "Halter trifft."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_RedCard,
        .iconPalette = gItemIconPalette_RedCard,
    },

    [ITEM_RING_TARGET] =
    {
        .name = ITEM_NAME("Zielscheibe"),
    #if I_PRICE >= GEN_9
        .price = 10000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_RING_TARGET,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Bewegungen, die\n"
            "normalerweise keine\n"
            "Wirkung haben, tref..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_RingTarget,
        .iconPalette = gItemIconPalette_RingTarget,
    },

    [ITEM_BINDING_BAND] =
    {
        .name = ITEM_NAME("Klammerband"),
    #if I_PRICE >= GEN_9
        .price = 20000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_BINDING_BAND,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft\n"
            "bindender Bewegungen,\n"
            "wenn es gehalten wird."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_BindingBand,
        .iconPalette = gItemIconPalette_BindingBand,
    },

    [ITEM_EJECT_BUTTON] =
    {
        .name = ITEM_NAME("Fluchtknopf"),
    #if I_PRICE >= GEN_9
        .price = 30000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 200,
    #endif
        .holdEffect = HOLD_EFFECT_EJECT_BUTTON,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Schaltet den Benutzer\n"
            "aus, wenn er vom\n"
            "Feind getroffen wird."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_EjectButton,
        .iconPalette = gItemIconPalette_EjectButton,
    },

    [ITEM_WEAKNESS_POLICY] =
    {
        .name = ITEM_NAME("Schwächenschutz"),
        .pluralName = ITEM_PLURAL_NAME("Weakness Policies"),
        .price = (I_PRICE >= GEN_9) ? 50000 : 1000,
        .holdEffect = HOLD_EFFECT_WEAKNESS_POLICY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Wenn er von einer äußerst\n"
            "effektiven Bewegung\n"
            "getroffen wird, erhö..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_WeaknessPolicy,
        .iconPalette = gItemIconPalette_WeaknessPolicy,
    },

    [ITEM_ASSAULT_VEST] =
    {
        .name = ITEM_NAME("Offensivweste"),
        .price = (I_PRICE >= GEN_9) ? 50000 : 1000,
        .holdEffect = HOLD_EFFECT_ASSAULT_VEST,
        .holdEffectParam = 50,
        .description = COMPOUND_STRING(
            "Erhöht Sp. Definiert\n"
            "aber die Verwendung von\n"
            "Statusverschiebungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_AssaultVest,
        .iconPalette = gItemIconPalette_AssaultVest,
    },

    [ITEM_SAFETY_GOGGLES] =
    {
        .name = ITEM_NAME("Schutzbrille"),
        .pluralName = ITEM_PLURAL_NAME("Safety Goggles"),
    #if I_PRICE >= GEN_9
        .price = 20000,
    #elif I_PRICE >= GEN_7
        .price = 4000,
    #else
        .price = 1000,
    #endif
        .holdEffect = HOLD_EFFECT_SAFETY_GOGGLES,
        .description = COMPOUND_STRING(
            "Vor Witterungseinflüssen\n"
            "und Pulverbewegungen\n"
            "schützen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_SafetyGoggles,
        .iconPalette = gItemIconPalette_SafetyGoggles,
    },

    [ITEM_ADRENALINE_ORB] =
    {
        .name = ITEM_NAME("Zitterorb"),
    #if I_PRICE >= GEN_9
        .price = 5000,
    #elif I_PRICE == GEN_8
        .price = 4000,
    #else
        .price = 300,
    #endif
        .holdEffect = HOLD_EFFECT_ADRENALINE_ORB,
        .description = COMPOUND_STRING(
            "Diese Kugel erhöht die\n"
            "Geschwindigkeit, wenn der\n"
            "Träger eingeschücht..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_AdrenalineOrb,
        .iconPalette = gItemIconPalette_AdrenalineOrb,
    },

    [ITEM_TERRAIN_EXTENDER] =
    {
        .name = ITEM_NAME("Feldbeschichtung"),
        .price = (I_PRICE >= GEN_9) ? 15000 : 4000,
        .holdEffect = HOLD_EFFECT_TERRAIN_EXTENDER,
        .description = COMPOUND_STRING(
            "Verlängert die\n"
            "Länge des aktiven\n"
            "Kampfgeländes."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_TerrainExtender,
        .iconPalette = gItemIconPalette_TerrainExtender,
    },

    [ITEM_PROTECTIVE_PADS] =
    {
        .name = ITEM_NAME("Schutzpolster"),
        .pluralName = ITEM_PLURAL_NAME("Protective Pads"),
        .price = (I_PRICE >= GEN_9) ? 15000 : 4000,
        .holdEffect = HOLD_EFFECT_PROTECTIVE_PADS,
        .description = COMPOUND_STRING(
            "Schützen Sie den\n"
            "Halter vor\n"
            "Kontaktbewegungseffekten."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_ProtectivePads,
        .iconPalette = gItemIconPalette_ProtectivePads,
    },

    [ITEM_THROAT_SPRAY] =
    {
        .name = ITEM_NAME("Halsspray"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_THROAT_SPRAY,
        .description = COMPOUND_STRING(
            "Erhöht Sp. Angriff. wenn\n"
            "der Inhaber einen\n"
            "klangbasierten ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_ThroatSpray,
        .iconPalette = gItemIconPalette_ThroatSpray,
    },

    [ITEM_EJECT_PACK] =
    {
        .name = ITEM_NAME("Fluchttasche"),
        .price = (I_PRICE >= GEN_9) ? 30000 : 4000,
        .holdEffect = HOLD_EFFECT_EJECT_PACK,
        .description = COMPOUND_STRING(
            "Zwingt den Benutzer zum\n"
            "Wechseln, wenn seine\n"
            "Statistiken gese..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 50,
        .iconPic = gItemIcon_EjectPack,
        .iconPalette = gItemIconPalette_EjectPack,
    },

    [ITEM_HEAVY_DUTY_BOOTS] =
    {
        .name = ITEM_NAME("Plateauschuhe"),
        .pluralName = ITEM_PLURAL_NAME("Heavy-Duty Boots"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_HEAVY_DUTY_BOOTS,
        .description = COMPOUND_STRING(
            "Stiefel, die die\n"
            "Auswirkungen von im Feld\n"
            "aufgestellten Fal..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_HeavyDutyBoots,
        .iconPalette = gItemIconPalette_HeavyDutyBoots,
    },

    [ITEM_BLUNDER_POLICY] =
    {
        .name = ITEM_NAME("Fehlschlagschutz"),
        .pluralName = ITEM_PLURAL_NAME("Blunder Policies"),
        .price = (I_PRICE >= GEN_9) ? 30000 : 4000,
        .holdEffect = HOLD_EFFECT_BLUNDER_POLICY,
        .description = COMPOUND_STRING(
            "Erhöht die\n"
            "Geschwindigkeit, wenn der\n"
            "Benutzer aufgrund ..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_BlunderPolicy,
        .iconPalette = gItemIconPalette_BlunderPolicy,
    },

    [ITEM_ROOM_SERVICE] =
    {
        .name = ITEM_NAME("Bizarroservice"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_ROOM_SERVICE,
        .description = COMPOUND_STRING(
            "Verringert die\n"
            "Geschwindigkeit, wenn\n"
            "Trick Room aktiv ist."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_RoomService,
        .iconPalette = gItemIconPalette_RoomService,
    },

    [ITEM_UTILITY_UMBRELLA] =
    {
        .name = ITEM_NAME("Allzweckschirm"),
        .price = (I_PRICE >= GEN_9) ? 15000 : 4000,
        .holdEffect = HOLD_EFFECT_UTILITY_UMBRELLA,
        .description = COMPOUND_STRING(
            "Ein Regenschirm, der vor\n"
            "Witterungseinflüssen\n"
            "schützt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_UtilityUmbrella,
        .iconPalette = gItemIconPalette_UtilityUmbrella,
    },

// Berries

    [ITEM_CHERI_BERRY] =
    {
        .name = ITEM_NAME("Amrenabeere"),
        .pluralName = ITEM_PLURAL_NAME("Cheri Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_PAR,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der Lähmungen im\n"
            "Kampf heilt."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_ParalyzeHeal,
        .flingPower = 10,
        .iconPic = gItemIcon_CheriBerry,
        .iconPalette = gItemIconPalette_CheriBerry,
    },

    [ITEM_CHESTO_BERRY] =
    {
        .name = ITEM_NAME("Maronbeere"),
        .pluralName = ITEM_PLURAL_NAME("Chesto Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_SLP,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der Pokémon im Kampf\n"
            "erweckt."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Awakening,
        .flingPower = 10,
        .iconPic = gItemIcon_ChestoBerry,
        .iconPalette = gItemIconPalette_ChestoBerry,
    },

    [ITEM_PECHA_BERRY] =
    {
        .name = ITEM_NAME("Pirsifbeere"),
        .pluralName = ITEM_PLURAL_NAME("Pecha Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_PSN,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der Vergiftungen im\n"
            "Kampf heilt."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Antidote,
        .flingPower = 10,
        .iconPic = gItemIcon_PechaBerry,
        .iconPalette = gItemIconPalette_PechaBerry,
    },

    [ITEM_RAWST_BERRY] =
    {
        .name = ITEM_NAME("Fragiabeere"),
        .pluralName = ITEM_PLURAL_NAME("Rawst Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_BRN,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der im Kampf eine\n"
            "Verbrennung heilt."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_BurnHeal,
        .flingPower = 10,
        .iconPic = gItemIcon_RawstBerry,
        .iconPalette = gItemIconPalette_RawstBerry,
    },

    [ITEM_ASPEAR_BERRY] =
    {
        .name = ITEM_NAME("Wilbirbeere"),
        .pluralName = ITEM_PLURAL_NAME("Aspear Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_FRZ,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der Pokémon im Kampf\n"
            "auftaut."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_IceHeal,
        .flingPower = 10,
        .iconPic = gItemIcon_AspearBerry,
        .iconPalette = gItemIconPalette_AspearBerry,
    },

    [ITEM_LEPPA_BERRY] =
    {
        .name = ITEM_NAME("Jonagobeere"),
        .pluralName = ITEM_PLURAL_NAME("Leppa Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESTORE_PP,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der im Kampf 10 PP\n"
            "wiederherstellt."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU_MOVES,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .effect = gItemEffect_LeppaBerry,
        .flingPower = 10,
        .iconPic = gItemIcon_LeppaBerry,
        .iconPalette = gItemIconPalette_LeppaBerry,
    },

    [ITEM_ORAN_BERRY] =
    {
        .name = ITEM_NAME("Sinelbeere"),
        .pluralName = ITEM_PLURAL_NAME("Oran Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der im Kampf 10 KP\n"
            "wiederherstellt."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_OranBerry,
        .flingPower = 10,
        .iconPic = gItemIcon_OranBerry,
        .iconPalette = gItemIconPalette_OranBerry,
    },

    [ITEM_PERSIM_BERRY] =
    {
        .name = ITEM_NAME("Persimbeere"),
        .pluralName = ITEM_PLURAL_NAME("Persim Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_CONFUSION,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der Verwirrung im\n"
            "Kampf heilt."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_PersimBerry,
        .flingPower = 10,
        .iconPic = gItemIcon_PersimBerry,
        .iconPalette = gItemIconPalette_PersimBerry,
    },

    [ITEM_LUM_BERRY] =
    {
        .name = ITEM_NAME("Prunusbeere"),
        .pluralName = ITEM_PLURAL_NAME("Lum Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_STATUS,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der alle Statusprobleme\n"
            "im Kampf heilt."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 10,
        .iconPic = gItemIcon_LumBerry,
        .iconPalette = gItemIconPalette_LumBerry,
    },

    [ITEM_SITRUS_BERRY] =
    {
        .name = ITEM_NAME("Tsitrubeere"),
        .pluralName = ITEM_PLURAL_NAME("Sitrus Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    #if I_SITRUS_BERRY_HEAL >= GEN_4
        .holdEffect = HOLD_EFFECT_RESTORE_PCT_HP,
        .holdEffectParam = 25,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die KP des Benutzers ein\n"
            "wenig wiederherstellt."),
    #else
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 30,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der im Kampf 30 KP\n"
            "wiederherstellt."),
    #endif
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_SitrusBerry,
        .flingPower = 10,
        .iconPic = gItemIcon_SitrusBerry,
        .iconPalette = gItemIconPalette_SitrusBerry,
    },

    [ITEM_FIGY_BERRY] =
    {
        .name = ITEM_NAME("Giefebeere"),
        .pluralName = ITEM_PLURAL_NAME("Figy Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SPICY,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_FigyBerry,
        .iconPalette = gItemIconPalette_FigyBerry,
    },

    [ITEM_WIKI_BERRY] =
    {
        .name = ITEM_NAME("Wikibeere"),
        .pluralName = ITEM_PLURAL_NAME("Wiki Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_DRY,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_WikiBerry,
        .iconPalette = gItemIconPalette_WikiBerry,
    },

    [ITEM_MAGO_BERRY] =
    {
        .name = ITEM_NAME("Magobeere"),
        .pluralName = ITEM_PLURAL_NAME("Mago Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SWEET,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_MagoBerry,
        .iconPalette = gItemIconPalette_MagoBerry,
    },

    [ITEM_AGUAV_BERRY] =
    {
        .name = ITEM_NAME("Gauvebeere"),
        .pluralName = ITEM_PLURAL_NAME("Aguav Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_BITTER,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_AguavBerry,
        .iconPalette = gItemIconPalette_AguavBerry,
    },

    [ITEM_IAPAPA_BERRY] =
    {
        .name = ITEM_NAME("Yapabeere"),
        .pluralName = ITEM_PLURAL_NAME("Iapapa Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SOUR,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_IapapaBerry,
        .iconPalette = gItemIconPalette_IapapaBerry,
    },

    [ITEM_RAZZ_BERRY] =
    {
        .name = ITEM_NAME("Himmihbeere"),
        .pluralName = ITEM_PLURAL_NAME("Razz Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK}-Zutat. Für\n"
            "den Razz-Anbau in\n"
            "lehmige Erde pflanzen."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_RazzBerry,
        .iconPalette = gItemIconPalette_RazzBerry,
    },

    [ITEM_BLUK_BERRY] =
    {
        .name = ITEM_NAME("Morbbeere"),
        .pluralName = ITEM_PLURAL_NAME("Bluk Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK}-Zutat. Für\n"
            "den Anbau von Bluk in\n"
            "lehmige Erde pflanzen."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_BlukBerry,
        .iconPalette = gItemIconPalette_BlukBerry,
    },

    [ITEM_NANAB_BERRY] =
    {
        .name = ITEM_NAME("Nanabbeere"),
        .pluralName = ITEM_PLURAL_NAME("Nanab Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK}-Zutat.\n"
            "Pflanzen Sie in lehmigen\n"
            "Boden, um Na..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_NanabBerry,
        .iconPalette = gItemIconPalette_NanabBerry,
    },

    [ITEM_WEPEAR_BERRY] =
    {
        .name = ITEM_NAME("Nirbebeere"),
        .pluralName = ITEM_PLURAL_NAME("Wepear Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK}-Zutat.\n"
            "Pflanzen Sie Wepear\n"
            "in lehmigen Boden."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_WepearBerry,
        .iconPalette = gItemIconPalette_WepearBerry,
    },

    [ITEM_PINAP_BERRY] =
    {
        .name = ITEM_NAME("Sananabeere"),
        .pluralName = ITEM_PLURAL_NAME("Pinap Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK}-Zutat.\n"
            "Pflanzen Sie Pinap\n"
            "in lehmigen Boden."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_PinapBerry,
        .iconPalette = gItemIconPalette_PinapBerry,
    },

    [ITEM_POMEG_BERRY] =
    {
        .name = ITEM_NAME("Granabeere"),
        .pluralName = ITEM_PLURAL_NAME("Pomeg Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "Macht ein Pokémon\n"
            "freundlich, senkt\n"
            "aber die Basis-KP."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_PomegBerry,
        .flingPower = 10,
        .iconPic = gItemIcon_PomegBerry,
        .iconPalette = gItemIconPalette_PomegBerry,
    },

    [ITEM_KELPSY_BERRY] =
    {
        .name = ITEM_NAME("Setangbeere"),
        .pluralName = ITEM_PLURAL_NAME("Kelpsy Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "Macht ein Pokémon\n"
            "freundlich, verringert\n"
            "jedoch den Basisangriff."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_KelpsyBerry,
        .flingPower = 10,
        .iconPic = gItemIcon_KelpsyBerry,
        .iconPalette = gItemIconPalette_KelpsyBerry,
    },

    [ITEM_QUALOT_BERRY] =
    {
        .name = ITEM_NAME("Qualotbeere"),
        .pluralName = ITEM_PLURAL_NAME("Qualot Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "Macht ein Pokémon\n"
            "freundlich, verringert\n"
            "jedoch ..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_QualotBerry,
        .flingPower = 10,
        .iconPic = gItemIcon_QualotBerry,
        .iconPalette = gItemIconPalette_QualotBerry,
    },

    [ITEM_HONDEW_BERRY] =
    {
        .name = ITEM_NAME("Honmelbeere"),
        .pluralName = ITEM_PLURAL_NAME("Hondew Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "Macht ein Pokémon\n"
            "freundlich, senkt aber\n"
            "die Basis-Sp. Angriff."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_HondewBerry,
        .flingPower = 10,
        .iconPic = gItemIcon_HondewBerry,
        .iconPalette = gItemIconPalette_HondewBerry,
    },

    [ITEM_GREPA_BERRY] =
    {
        .name = ITEM_NAME("Labrusbeere"),
        .pluralName = ITEM_PLURAL_NAME("Grepa Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "Macht ein Pokémon\n"
            "freundlich, senkt aber\n"
            "die Basis-Sp. Def."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_GrepaBerry,
        .flingPower = 10,
        .iconPic = gItemIcon_GrepaBerry,
        .iconPalette = gItemIconPalette_GrepaBerry,
    },

    [ITEM_TAMATO_BERRY] =
    {
        .name = ITEM_NAME("Tamotbeere"),
        .pluralName = ITEM_PLURAL_NAME("Tamato Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "Macht ein Pokémon\n"
            "freundlich, verringert\n"
            "jedoch ..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_TamatoBerry,
        .flingPower = 10,
        .iconPic = gItemIcon_TamatoBerry,
        .iconPalette = gItemIconPalette_TamatoBerry,
    },

    [ITEM_CORNN_BERRY] =
    {
        .name = ITEM_NAME("Saimbeere"),
        .pluralName = ITEM_PLURAL_NAME("Cornn Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK}-Zutat.\n"
            "Pflanzen Sie in lehmigen\n"
            "Boden, um Co..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_CornnBerry,
        .iconPalette = gItemIconPalette_CornnBerry,
    },

    [ITEM_MAGOST_BERRY] =
    {
        .name = ITEM_NAME("Magostbeere"),
        .pluralName = ITEM_PLURAL_NAME("Magost Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK}-Zutat. In\n"
            "lehmiger Erde pflanzen,\n"
            "um Magost anzubauen."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_MagostBerry,
        .iconPalette = gItemIconPalette_MagostBerry,
    },

    [ITEM_RABUTA_BERRY] =
    {
        .name = ITEM_NAME("Rabutabeere"),
        .pluralName = ITEM_PLURAL_NAME("Rabuta Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK}-Zutat.\n"
            "Pflanzen Sie Rabuta\n"
            "in lehmige Erde."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_RabutaBerry,
        .iconPalette = gItemIconPalette_RabutaBerry,
    },

    [ITEM_NOMEL_BERRY] =
    {
        .name = ITEM_NAME("Tronzibeere"),
        .pluralName = ITEM_PLURAL_NAME("Nomel Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK}-Zutat.\n"
            "Pflanzen Sie in lehmigen\n"
            "Boden, um No..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_NomelBerry,
        .iconPalette = gItemIconPalette_NomelBerry,
    },

    [ITEM_SPELON_BERRY] =
    {
        .name = ITEM_NAME("Kiwanbeere"),
        .pluralName = ITEM_PLURAL_NAME("Spelon Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK}-Zutat.\n"
            "Pflanzen Sie Spelon\n"
            "in lehmigen Boden."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_SpelonBerry,
        .iconPalette = gItemIconPalette_SpelonBerry,
    },

    [ITEM_PAMTRE_BERRY] =
    {
        .name = ITEM_NAME("Pallmbeere"),
        .pluralName = ITEM_PLURAL_NAME("Pamtre Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK}-Zutat.\n"
            "Pflanzen Sie in lehmigen\n"
            "Boden, um Pam..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_PamtreBerry,
        .iconPalette = gItemIconPalette_PamtreBerry,
    },

    [ITEM_WATMEL_BERRY] =
    {
        .name = ITEM_NAME("Wasmelbeere"),
        .pluralName = ITEM_PLURAL_NAME("Watmel Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK}-Zutat.\n"
            "Pflanzen Sie Watmel\n"
            "in lehmigen Boden."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_WatmelBerry,
        .iconPalette = gItemIconPalette_WatmelBerry,
    },

    [ITEM_DURIN_BERRY] =
    {
        .name = ITEM_NAME("Durinbeere"),
        .pluralName = ITEM_PLURAL_NAME("Durin Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK}-Zutat.\n"
            "Pflanzen Sie in lehmigen\n"
            "Boden, um Durin wach..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_DurinBerry,
        .iconPalette = gItemIconPalette_DurinBerry,
    },

    [ITEM_BELUE_BERRY] =
    {
        .name = ITEM_NAME("Myrtilbeere"),
        .pluralName = ITEM_PLURAL_NAME("Belue Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK}-Zutat.\n"
            "Pflanzen Sie Belue\n"
            "in lehmigen Boden."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_BelueBerry,
        .iconPalette = gItemIconPalette_BelueBerry,
    },

    [ITEM_CHILAN_BERRY] =
    {
        .name = ITEM_NAME("Latchibeere"),
        .pluralName = ITEM_PLURAL_NAME("Chilan Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_NORMAL,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der eine normale\n"
            "Bewegung schwächt."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_ChilanBerry,
        .iconPalette = gItemIconPalette_ChilanBerry,
    },

    [ITEM_OCCA_BERRY] =
    {
        .name = ITEM_NAME("Koakobeere"),
        .pluralName = ITEM_PLURAL_NAME("Occa Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FIRE,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine Feuerbewegung\n"
            "schwächt, wenn er schw..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_OccaBerry,
        .iconPalette = gItemIconPalette_OccaBerry,
    },

    [ITEM_PASSHO_BERRY] =
    {
        .name = ITEM_NAME("Foepasbeere"),
        .pluralName = ITEM_PLURAL_NAME("Passho Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_WATER,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine Wasserbewegung\n"
            "schwächt, wenn ..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_PasshoBerry,
        .iconPalette = gItemIconPalette_PasshoBerry,
    },

    [ITEM_WACAN_BERRY] =
    {
        .name = ITEM_NAME("Kerzalberre"),
        .pluralName = ITEM_PLURAL_NAME("Wacan Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ELECTRIC,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine Elektro-Attacke\n"
            "schwächt, wenn ..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_WacanBerry,
        .iconPalette = gItemIconPalette_WacanBerry,
    },

    [ITEM_RINDO_BERRY] =
    {
        .name = ITEM_NAME("Grindobeere"),
        .pluralName = ITEM_PLURAL_NAME("Rindo Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GRASS,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine Grasbewegung\n"
            "schwächt, wenn ..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_RindoBerry,
        .iconPalette = gItemIconPalette_RindoBerry,
    },

    [ITEM_YACHE_BERRY] =
    {
        .name = ITEM_NAME("Kiroyabeere"),
        .pluralName = ITEM_PLURAL_NAME("Yache Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ICE,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine Eisbewegung\n"
            "schwächt, wenn ..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_YacheBerry,
        .iconPalette = gItemIconPalette_YacheBerry,
    },

    [ITEM_CHOPLE_BERRY] =
    {
        .name = ITEM_NAME("Rospelbeere"),
        .pluralName = ITEM_PLURAL_NAME("Chople Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FIGHTING,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine Kampfbewegung\n"
            "schwächt, wenn er da..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_ChopleBerry,
        .iconPalette = gItemIconPalette_ChopleBerry,
    },

    [ITEM_KEBIA_BERRY] =
    {
        .name = ITEM_NAME("Grarzbeere"),
        .pluralName = ITEM_PLURAL_NAME("Kebia Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_POISON,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine Giftbewegung\n"
            "schwächt, wenn ..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_KebiaBerry,
        .iconPalette = gItemIconPalette_KebiaBerry,
    },

    [ITEM_SHUCA_BERRY] =
    {
        .name = ITEM_NAME("Schukebeere"),
        .pluralName = ITEM_PLURAL_NAME("Shuca Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GROUND,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine Bodenbewegung\n"
            "schwächt, wenn er schw..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_ShucaBerry,
        .iconPalette = gItemIconPalette_ShucaBerry,
    },

    [ITEM_COBA_BERRY] =
    {
        .name = ITEM_NAME("Kobabeere"),
        .pluralName = ITEM_PLURAL_NAME("Coba Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FLYING,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine Flugbewegung\n"
            "schwächt, wenn er schw..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_CobaBerry,
        .iconPalette = gItemIconPalette_CobaBerry,
    },

    [ITEM_PAYAPA_BERRY] =
    {
        .name = ITEM_NAME("Pyapabeere"),
        .pluralName = ITEM_PLURAL_NAME("Payapa Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_PSYCHIC,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine Psi-Attacke\n"
            "schwächt, wenn ..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_PayapaBerry,
        .iconPalette = gItemIconPalette_PayapaBerry,
    },

    [ITEM_TANGA_BERRY] =
    {
        .name = ITEM_NAME("Tanigabeere"),
        .pluralName = ITEM_PLURAL_NAME("Tanga Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_BUG,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine Bug-Bewegung\n"
            "schwächt, wenn er schw..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_TangaBerry,
        .iconPalette = gItemIconPalette_TangaBerry,
    },

    [ITEM_CHARTI_BERRY] =
    {
        .name = ITEM_NAME("Chiaribeere"),
        .pluralName = ITEM_PLURAL_NAME("Charti Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ROCK,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine Felsbewegung\n"
            "schwächt, wenn er schw..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_ChartiBerry,
        .iconPalette = gItemIconPalette_ChartiBerry,
    },

    [ITEM_KASIB_BERRY] =
    {
        .name = ITEM_NAME("Zitarzbeere"),
        .pluralName = ITEM_PLURAL_NAME("Kasib Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GHOST,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine Geisterbewegung\n"
            "schwächt, wenn ..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_KasibBerry,
        .iconPalette = gItemIconPalette_KasibBerry,
    },

    [ITEM_HABAN_BERRY] =
    {
        .name = ITEM_NAME("Terirobeere"),
        .pluralName = ITEM_PLURAL_NAME("Haban Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_DRAGON,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine Drachenbewegung\n"
            "schwächt, wenn er schw..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_HabanBerry,
        .iconPalette = gItemIconPalette_HabanBerry,
    },

    [ITEM_COLBUR_BERRY] =
    {
        .name = ITEM_NAME("Burleobeere"),
        .pluralName = ITEM_PLURAL_NAME("Colbur Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_DARK,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine dunkle Bewegung\n"
            "schwächt, wenn ..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_ColburBerry,
        .iconPalette = gItemIconPalette_ColburBerry,
    },

    [ITEM_BABIRI_BERRY] =
    {
        .name = ITEM_NAME("Babiribeere"),
        .pluralName = ITEM_PLURAL_NAME("Babiri Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_STEEL,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine Stahlbewegung\n"
            "schwächt, wenn ..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_BabiriBerry,
        .iconPalette = gItemIconPalette_BabiriBerry,
    },

    [ITEM_ROSELI_BERRY] =
    {
        .name = ITEM_NAME("Hibisbeere"),
        .pluralName = ITEM_PLURAL_NAME("Roseli Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FAIRY,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "eine Feenbewegung\n"
            "schwächt, wenn ..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_RoseliBerry,
        .iconPalette = gItemIconPalette_RoseliBerry,
    },

    [ITEM_LIECHI_BERRY] =
    {
        .name = ITEM_NAME("Lydzibeere"),
        .pluralName = ITEM_PLURAL_NAME("Liechi Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_ATTACK_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der im Notfall den\n"
            "Angriff erhöht."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_LiechiBerry,
        .iconPalette = gItemIconPalette_LiechiBerry,
    },

    [ITEM_GANLON_BERRY] =
    {
        .name = ITEM_NAME("Linganbeere"),
        .pluralName = ITEM_PLURAL_NAME("Ganlon Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der im Notfall die\n"
            "Verteidigung erhöht."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_GanlonBerry,
        .iconPalette = gItemIconPalette_GanlonBerry,
    },

    [ITEM_SALAC_BERRY] =
    {
        .name = ITEM_NAME("Salkabeere"),
        .pluralName = ITEM_PLURAL_NAME("Salac Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_SPEED_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der im Notfall die\n"
            "Geschwindigkeit erhöht."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_SalacBerry,
        .iconPalette = gItemIconPalette_SalacBerry,
    },

    [ITEM_PETAYA_BERRY] =
    {
        .name = ITEM_NAME("Tahaybeere"),
        .pluralName = ITEM_PLURAL_NAME("Petaya Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_SP_ATTACK_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der SP erhöht. Zur\n"
            "Not angreifen."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_PetayaBerry,
        .iconPalette = gItemIconPalette_PetayaBerry,
    },

    [ITEM_APICOT_BERRY] =
    {
        .name = ITEM_NAME("Apikobeere"),
        .pluralName = ITEM_PLURAL_NAME("Apicot Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_SP_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der SP erhöht. Auf\n"
            "jeden Fall zur Not."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_ApicotBerry,
        .iconPalette = gItemIconPalette_ApicotBerry,
    },

    [ITEM_LANSAT_BERRY] =
    {
        .name = ITEM_NAME("Lansatbeere"),
        .pluralName = ITEM_PLURAL_NAME("Lansat Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CRITICAL_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "im Notfall die kritische\n"
            "Trefferquote erhöht."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_LansatBerry,
        .iconPalette = gItemIconPalette_LansatBerry,
    },

    [ITEM_STARF_BERRY] =
    {
        .name = ITEM_NAME("Krambobeere"),
        .pluralName = ITEM_PLURAL_NAME("Starf Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RANDOM_STAT_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand,\n"
            "der zur Not einen Wert\n"
            "deutlich steigert."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_StarfBerry,
        .iconPalette = gItemIconPalette_StarfBerry,
    },

    [ITEM_ENIGMA_BERRY] =
    {
        .name = ITEM_NAME("Enigmabeere"),
        .pluralName = ITEM_PLURAL_NAME("Enigma Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_ENIGMA_BERRY,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "durch supereffektive\n"
            "Bewegungen heilt."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_EnigmaBerry,
        .iconPalette = gItemIconPalette_EnigmaBerry,
    },

    [ITEM_MICLE_BERRY] =
    {
        .name = ITEM_NAME("Wunfrubeere"),
        .pluralName = ITEM_PLURAL_NAME("Micle Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_MICLE_BERRY,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "Wenn es gehalten wird,\n"
            "erhöht es im Notfall die\n"
            "Genauigkeit ei..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_MicleBerry,
        .iconPalette = gItemIconPalette_MicleBerry,
    },

    [ITEM_CUSTAP_BERRY] =
    {
        .name = ITEM_NAME("Eipfelbeere"),
        .pluralName = ITEM_PLURAL_NAME("Custap Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CUSTAP_BERRY,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "Es ermöglicht einem\n"
            "Pokémon zur Not, sich nur\n"
            "einmal als Erster..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_CustapBerry,
        .iconPalette = gItemIconPalette_CustapBerry,
    },

    [ITEM_JABOCA_BERRY] =
    {
        .name = ITEM_NAME("Jabocabeere"),
        .pluralName = ITEM_PLURAL_NAME("Jaboca Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_JABOCA_BERRY,
        .description = COMPOUND_STRING(
            "Wenn es von einer\n"
            "körperlichen Bewegung\n"
            "getroffen wird, wird..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_JabocaBerry,
        .iconPalette = gItemIconPalette_JabocaBerry,
    },

    [ITEM_ROWAP_BERRY] =
    {
        .name = ITEM_NAME("Roselbeere"),
        .pluralName = ITEM_PLURAL_NAME("Rowap Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_ROWAP_BERRY,
        .description = COMPOUND_STRING(
            "Wenn es von einem\n"
            "Spezialangriff getroffen\n"
            "wird, wird es ..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_RowapBerry,
        .iconPalette = gItemIconPalette_RowapBerry,
    },

    [ITEM_KEE_BERRY] =
    {
        .name = ITEM_NAME("Akibeere"),
        .pluralName = ITEM_PLURAL_NAME("Kee Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_KEE_BERRY,
        .description = COMPOUND_STRING(
            "Wenn es von einer\n"
            "physischen Bewegung\n"
            "getroffen wird, erhöht..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_KeeBerry,
        .iconPalette = gItemIconPalette_KeeBerry,
    },

    [ITEM_MARANGA_BERRY] =
    {
        .name = ITEM_NAME("Tarabeere"),
        .pluralName = ITEM_PLURAL_NAME("Maranga Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_MARANGA_BERRY,
        .description = COMPOUND_STRING(
            "Wenn es von einem\n"
            "Spezialzug getroffen\n"
            "wird, erhöht es den ..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_MarangaBerry,
        .iconPalette = gItemIconPalette_MarangaBerry,
    },

    [ITEM_ENIGMA_BERRY_E_READER] =
    {
        .name = ITEM_NAME("Enigmabeere"),
        .pluralName = ITEM_PLURAL_NAME("Enigma Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK}-Zutat.\n"
            "Pflanzen Sie in lehmigen\n"
            "Boden, um ein Geheim..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU, // Type handled by ItemUseOutOfBattle_EnigmaBerry
        .fieldUseFunc = ItemUseOutOfBattle_EnigmaBerry,
        .battleUsage = EFFECT_ITEM_ENIGMA_BERRY_EREADER,
        .flingPower = 10,
        .iconPic = gItemIcon_EnigmaBerry,
        .iconPalette = gItemIconPalette_EnigmaBerry,
    },

// TMs/HMs. They don't have a set flingPower, as that's handled by GetFlingPowerFromItemId.

    [ITEM_TM_FOCUS_PUNCH] =
    {
        .name = ITEM_NAME("TM01"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Kraftvoll, lässt den\n"
            "Benutzer jedoch\n"
            "zusammenzucken, wenn..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_DRAGON_CLAW] =
    {
        .name = ITEM_NAME("TM02"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Haken und zerschneiden\n"
            "den Feind mit langen,\n"
            "scharfen Krallen."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_WATER_PULSE] =
    {
        .name = ITEM_NAME("TM03"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Erzeugt eine\n"
            "Ultraschallwelle,\n"
            "die verwirren kann."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_CALM_MIND] =
    {
        .name = ITEM_NAME("TM04"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Erhöht Sp. Atk und Sp.\n"
            "Definieren Sie, indem Sie\n"
            "den Geist fokussieren."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_ROAR] =
    {
        .name = ITEM_NAME("TM05"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Ein wildes Brüllen, das\n"
            "den Feind in die Flucht\n"
            "treibt, um den Kampf..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_TOXIC] =
    {
        .name = ITEM_NAME("TM06"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Vergiftet den Feind mit\n"
            "einem Gift, das sich\n"
            "allmählich verschlimmert."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_HAIL] =
    {
        .name = ITEM_NAME("TM07"),
        .price = 3000,
    #if B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_SNOW
        .description = COMPOUND_STRING(
            "Erhöht den\n"
            "Eisverteidigungstyp\n"
            "{PKMN} für 5 Runden."),
    #else
        .description = COMPOUND_STRING(
            "Erzeugt einen Hagelsturm,\n"
            "der alle Arten außer Eis\n"
            "beschädigt."),
    #endif
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_BULK_UP] =
    {
        .name = ITEM_NAME("TM08"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Verstärkt den Körper, um\n"
            "sowohl Angriff als auch\n"
            "Verteidigung..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_BULLET_SEED] =
    {
        .name = ITEM_NAME("TM09"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Verschießt 2 bis 5 Samen\n"
            "hintereinander, um den\n"
            "Feind zu treffen."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_HIDDEN_POWER] =
    {
        .name = ITEM_NAME("TM10"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Die Angriffskraft\n"
            "variiert je nach\n"
            "Pokémon."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SUNNY_DAY] =
    {
        .name = ITEM_NAME("TM11"),
        .price = 2000,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft von\n"
            "Bewegungen vom Typ\n"
            "Feuer für 5 Runden."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_TAUNT] =
    {
        .name = ITEM_NAME("TM12"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Macht den Gegner wütend,\n"
            "sodass er nur noch\n"
            "Angriffsbewegun..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_ICE_BEAM] =
    {
        .name = ITEM_NAME("TM13"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Feuert eisigen\n"
            "Strahl, Chance\n"
        #if B_USE_FROSTBITE == TRUE
            "auf Frostbrand."),
        #else
            "auf einfrieren."),
        #endif
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_BLIZZARD] =
    {
        .name = ITEM_NAME("TM14"),
        .price = 10000,
        .description = COMPOUND_STRING(
        #if B_USE_FROSTBITE == TRUE
            "Schnee- und Wind\n"
            "Attacke. Chance\n"
            "auf Frostbrand."),
        #else
            "Schnee- und Wind\n"
            "Attacke. Chance\n"
            "auf einfrieren."),
        #endif
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_HYPER_BEAM] =
    {
        .name = ITEM_NAME("TM15"),
        .price = 10000,
        .description = COMPOUND_STRING(
            "Leistungsstark, muss\n"
            "aber in der nächsten\n"
            "Runde aufgeladen werden."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_LIGHT_SCREEN] =
    {
        .name = ITEM_NAME("TM16"),
        .price = 10000,
        .description = COMPOUND_STRING(
            "Erzeugt eine Lichtwand,\n"
            "die Sp senkt.\n"
            "Angriffsschaden."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_PROTECT] =
    {
        .name = ITEM_NAME("TM17"),
        .price = 10000,
        .description = COMPOUND_STRING(
            "Hebt jeglichen Schaden\n"
            "auf, kann jedoch bei\n"
            "wiederholter Verwend..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_RAIN_DANCE] =
    {
        .name = ITEM_NAME("TM18"),
        .price = 2000,
        .description = COMPOUND_STRING(
            "Erhöht die Kraft von\n"
            "Bewegungen vom Typ\n"
            "Wasser für 5 Runden."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_GIGA_DRAIN] =
    {
        .name = ITEM_NAME("TM19"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Stellt die Hälfte der KP\n"
            "des durch diese Bewegung\n"
            "verursachten Schad..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SAFEGUARD] =
    {
        .name = ITEM_NAME("TM20"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Verhindert\n"
            "Statusanomalien mit\n"
            "einer mystischen Kraft."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_FRUSTRATION] =
    {
        .name = ITEM_NAME("TM21"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Je weniger der Benutzer\n"
            "Sie mag, desto\n"
            "wirkungsvoller ist die..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SOLAR_BEAM] =
    {
        .name = ITEM_NAME("TM22"),
        .price = 10000,
        .description = COMPOUND_STRING(
            "Absorbiert Sonnenlicht in\n"
            "der ersten Runde und\n"
            "greift dann in ..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_IRON_TAIL] =
    {
        .name = ITEM_NAME("TM23"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Schlägt den Gegner mit\n"
            "einem harten Schwanz zu.\n"
            "Es kann die Verteidig..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_THUNDERBOLT] =
    {
        .name = ITEM_NAME("TM24"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein starker elektrischer\n"
            "Angriff, der zu\n"
            "Lähmungen führen kann."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_THUNDER] =
    {
        .name = ITEM_NAME("TM25"),
        .price = 10000,
        .description = COMPOUND_STRING(
            "Trifft den Feind\n"
            "mit einem Blitz.\n"
            "Es kann lähmen."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_EARTHQUAKE] =
    {
        .name = ITEM_NAME("TM26"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Verursacht ein Beben, das\n"
            "keine Auswirkungen auf\n"
            "fliegende Gegner hat."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_RETURN] =
    {
        .name = ITEM_NAME("TM27"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Je mehr der Benutzer Sie\n"
            "mag, desto wirkungsvoller\n"
            "ist dieser Schritt."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_DIG] =
    {
        .name = ITEM_NAME("TM28"),
        .price = 2000,
        .description = COMPOUND_STRING(
            "Grabt in der ersten Runde\n"
            "unter der Erde und\n"
            "schlägt dann in ..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_PSYCHIC] =
    {
        .name = ITEM_NAME("TM29"),
        .price = 2000,
        .description = COMPOUND_STRING(
            "Ein mächtiger\n"
            "psychischer Angriff, der\n"
            "SP senken kann. Def."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SHADOW_BALL] =
    {
        .name = ITEM_NAME("TM30"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Schleudert einen dunklen\n"
            "Klumpen auf den Feind.\n"
            "Es kann Sp senken. Def."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_BRICK_BREAK] =
    {
        .name = ITEM_NAME("TM31"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Zerstört Barrieren\n"
            "wie Light Screen und\n"
            "verursacht Schaden."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_DOUBLE_TEAM] =
    {
        .name = ITEM_NAME("TM32"),
        .price = 2000,
        .description = COMPOUND_STRING(
            "Erstellt illusorische\n"
            "Kopien, um die\n"
            "Flüchtigkeit zu erhöhen."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_REFLECT] =
    {
        .name = ITEM_NAME("TM33"),
        .price = 10000,
        .description = COMPOUND_STRING(
            "Erzeugt eine Lichtwand,\n"
            "die physische Angriffe\n"
            "abschwächt."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SHOCK_WAVE] =
    {
        .name = ITEM_NAME("TM34"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Versenkt den Gegner\n"
            "mit einem Stromstoß,\n"
            "der niemals verfehlt."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_FLAMETHROWER] =
    {
        .name = ITEM_NAME("TM35"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Entfesselt einen\n"
            "Feuerstrom, der den\n"
            "Gegner verbrennen kann."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SLUDGE_BOMB] =
    {
        .name = ITEM_NAME("TM36"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Schleudert Schlamm auf\n"
            "den Feind. Es kann den\n"
            "Feind vergiften."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SANDSTORM] =
    {
        .name = ITEM_NAME("TM37"),
        .price = 2000,
        .description = COMPOUND_STRING(
            "Verursacht einen\n"
            "Sandsturm, der den Gegner\n"
            "über mehrere Run..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_FIRE_BLAST] =
    {
        .name = ITEM_NAME("TM38"),
        .price = 10000,
        .description = COMPOUND_STRING(
            "Ein mächtiger\n"
            "Feuerangriff, der den\n"
            "Feind verbrennen kann."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_ROCK_TOMB] =
    {
        .name = ITEM_NAME("TM39"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Verhindert, dass sich der\n"
            "Gegner mit Steinen\n"
            "bewegt. Kann ..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_AERIAL_ACE] =
    {
        .name = ITEM_NAME("TM40"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein extrem schneller\n"
            "Angriff, der nicht\n"
            "vermieden werden kann."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_TORMENT] =
    {
        .name = ITEM_NAME("TM41"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Verhindert, dass der\n"
            "Gegner denselben Zug\n"
            "hintereinander ausführt."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_FACADE] =
    {
        .name = ITEM_NAME("TM42"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Erhöht den Angriff bei\n"
            "Vergiftung, Verbrennung\n"
            "oder Lähmung."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SECRET_POWER] =
    {
        .name = ITEM_NAME("TM43"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Fügt dem Angriff je\n"
            "nach Standort einen\n"
            "Effekt hinzu."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_REST] =
    {
        .name = ITEM_NAME("TM44"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Der Benutzer schläft 2\n"
            "Runden lang, um\n"
            "Gesundheit und Sta..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_ATTRACT] =
    {
        .name = ITEM_NAME("TM45"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Macht es schwierig,\n"
            "einen Gegner des anderen\n"
            "Geschlechts anzugreifen."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_THIEF] =
    {
        .name = ITEM_NAME("TM46"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Während des Angriffs kann\n"
            "es den vom Feind\n"
            "gehaltenen Gegenst..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_STEEL_WING] =
    {
        .name = ITEM_NAME("TM47"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Breitet scharfkantige\n"
            "Flügel aus und schlägt\n"
            "auf den Feind ein."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SKILL_SWAP] =
    {
        .name = ITEM_NAME("TM48"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Tauscht in der Runde, in\n"
            "der dies verwendet wird,\n"
            "die Fähigkeiten ..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SNATCH] =
    {
        .name = ITEM_NAME("TM49"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Stiehlt die Effekte der\n"
            "Attacke, die der Gegner\n"
            "ausführen möchte."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_OVERHEAT] =
    {
        .name = ITEM_NAME("TM50"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ermöglicht einen Angriff\n"
            "mit voller Kraft,\n"
            "verringert jedoch die..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM51] = // Roost
    {
        .name = ITEM_NAME("TM51"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Stellt die KP des\n"
            "Benutzers um die Hälfte\n"
            "seiner maximalen..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM52] = // Focus Blast
    {
        .name = ITEM_NAME("TM52"),
        .price = 10000,
        .description = COMPOUND_STRING(
            "Angriffe mit voller\n"
            "Kraft. Kann die SP des\n"
            "Gegners verringern. Def."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM53] = // Energy Ball
    {
        .name = ITEM_NAME("TM53"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Zieht Kraft aus der\n"
            "Natur, um anzugreifen.\n"
            "Kann Sp senken. Def."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM54] = // False Swipe
    {
        .name = ITEM_NAME("TM54"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein Angriff, der dem\n"
            "Gegner mindestens 1\n"
            "KP zurücklässt."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM55] = // Brine
    {
        .name = ITEM_NAME("TM55"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Fügt Gegnern mit\n"
            "halber KP oder weniger\n"
            "doppelten Schaden zu."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM56] = // Fling
    {
        .name = ITEM_NAME("TM56"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Die Wirksamkeit\n"
            "variiert je nach\n"
            "gehaltenem Gegenstand."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM57] = // Charge Beam
    {
        .name = ITEM_NAME("TM57"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Feuert einen\n"
            "Stromstrahl ab. Kann\n"
            "Sp erhöhen. Angriff."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM58] = // Endure
    {
        .name = ITEM_NAME("TM58"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Hält jedem Angriff 1\n"
            "Runde lang stand und\n"
            "hinterlässt mindesten..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM59] = // Dragon Pulse
    {
        .name = ITEM_NAME("TM59"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Erzeugt eine\n"
            "Schockwelle, die dem\n"
            "Gegner Schaden zufügt."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM60] = // Drain Punch
    {
        .name = ITEM_NAME("TM60"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein Angriff, der die\n"
            "Hälfte des verursachten\n"
            "Schadens absorbiert."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM61] = // Will-O-Wisp
    {
        .name = ITEM_NAME("TM61"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Fügt dem Gegner mit\n"
            "intensivem Feuer\n"
            "Verbrennungen zu."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM62] = // Silver Wind
    {
        .name = ITEM_NAME("TM62"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein Pulverangriff,\n"
            "der alle Fähigkeiten\n"
            "steigern kann."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM63] = // Embargo
    {
        .name = ITEM_NAME("TM63"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Verhindert, dass der\n"
            "Gegner irgendwelche\n"
            "Gegenstände benutzt."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM64] = // Explosion
    {
        .name = ITEM_NAME("TM64"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Verursacht schweren\n"
            "Schaden, lässt den\n"
            "Benutzer jed..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM65] = // Shadow Claw
    {
        .name = ITEM_NAME("TM65"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Schlägt mit einer\n"
            "Schattenklaue zu. Hohe\n"
            "kritische Trefferquote."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM66] = // Payback
    {
        .name = ITEM_NAME("TM66"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein Angriff, der stärker\n"
            "wird, wenn der Benutzer\n"
            "sich zuletzt bewegt."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM67] = // Recycle
    {
        .name = ITEM_NAME("TM67"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Recycelt einen\n"
            "gebrauchten Gegenstand\n"
            "für eine weit..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM68] = // Giga Impact
    {
        .name = ITEM_NAME("TM68"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Kraftvoll, lässt den\n"
            "Benutzer jedoch in der\n"
            "nächsten Ru..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM69] = // Rock Polish
    {
        .name = ITEM_NAME("TM69"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Poliert den Körper, um\n"
            "die Geschwindigkeit\n"
            "deutlich zu erhöhen."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM70] = // Flash
    {
        .name = ITEM_NAME("TM70"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Gibt einen starken\n"
            "Lichtstoß ab, der die\n"
            "Genauigk..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM71] = // Stone Edge
    {
        .name = ITEM_NAME("TM71"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Sticht den Feind mit\n"
            "Steinen. Hohe kritische\n"
            "Trefferquote."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM72] = // Avalanche
    {
        .name = ITEM_NAME("TM72"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein Angriff, der sich\n"
            "zuletzt bewegt und bei\n"
            "einem Treffer an Kr..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM73] = // Thunder Wave
    {
        .name = ITEM_NAME("TM73"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein schwacher\n"
            "Stromstoß, der den\n"
            "Feind lähmt."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM74] = // Gyro Ball
    {
        .name = ITEM_NAME("TM74"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Eine Hochgeschwindigkeits\n"
            "drehung, die schnelleren\n"
            "Gegnern mehr Scha..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM75] = // Swords Dance
    {
        .name = ITEM_NAME("TM75"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein Kampftanz, der\n"
            "den Angriff stark\n"
            "steigert."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM76] = // Stealth Rock
    {
        .name = ITEM_NAME("TM76"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Setzt schwebende Steine,\n"
            "die einem einschaltenden\n"
            "Gegner Schaden zufügen."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM77] = // Psych Up
    {
        .name = ITEM_NAME("TM77"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Kopiert die\n"
            "Statusänderungen des\n"
            "Gegners und gibt sie..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM78] = // Captivate
    {
        .name = ITEM_NAME("TM78"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Lässt das andere\n"
            "Geschlecht seine Sp\n"
            "scharf abschneid..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM79] = // Dark Pulse
    {
        .name = ITEM_NAME("TM79"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Angriffe mit einer\n"
            "schrecklichen Aura.\n"
            "Kann zu Zucken führen."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM80] = // Rock Slide
    {
        .name = ITEM_NAME("TM80"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Große Felsbrocken\n"
            "werden geschleudert.\n"
            "Kann zu Zucken führen."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM81] = // X-Scissor
    {
        .name = ITEM_NAME("TM81"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Schlägt den Feind mit\n"
            "gekreuzten Sensen,\n"
            "Klauen usw. nieder."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM82] = // Sleep Talk
    {
        .name = ITEM_NAME("TM82"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Verwendet im Schlaf\n"
            "zufällig eine\n"
            "verfügbare Attacke."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM83] = // Natural Gift
    {
        .name = ITEM_NAME("TM83"),
        .price = 10000,
        .description = COMPOUND_STRING(
            "Die Wirksamkeit\n"
            "variiert je nach\n"
            "enthaltener Beere."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM84] = // Poison Jab
    {
        .name = ITEM_NAME("TM84"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein Stichangriff,\n"
            "der den Feind\n"
            "vergiften kann."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM85] = // Dream Eater
    {
        .name = ITEM_NAME("TM85"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Erleidet die Hälfte des\n"
            "Schadens, der einem\n"
            "schlafenden Geg..."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM86] = // Grass Knot
    {
        .name = ITEM_NAME("TM86"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein Snare-Angriff, der\n"
            "schwereren Gegnern\n"
            "mehr Schaden zufügt."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM87] = // Swagger
    {
        .name = ITEM_NAME("TM87"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Verwirrt den Gegner,\n"
            "erhöht aber auch seinen\n"
            "Angriff deutlich."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM88] = // Pluck
    {
        .name = ITEM_NAME("TM88"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Isst die vom Gegner\n"
            "gehaltene Beere und\n"
            "erhält so ihre Wirkung."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM89] = // U-turn
    {
        .name = ITEM_NAME("TM89"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Fügt Schaden zu\n"
            "und schaltet den\n"
            "Benutzer aus."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM90] = // Substitute
    {
        .name = ITEM_NAME("TM90"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Erstellt einen Lockvogel\n"
            "mit 1/4 der maximalen KP\n"
            "des Benutzers."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM91] = // Flash Cannon
    {
        .name = ITEM_NAME("TM91"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Gibt einen Lichtstoß\n"
            "ab, der Sp senken\n"
            "kann. Def."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM92] = // Trick Room
    {
        .name = ITEM_NAME("TM92"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Langsamere Pokémon\n"
            "dürfen sich 5 Runden\n"
            "lang zuerst bewegen."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM93] =
    {
        .name = ITEM_NAME("TM93"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM94] =
    {
        .name = ITEM_NAME("TM94"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM95] =
    {
        .name = ITEM_NAME("TM95"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM96] =
    {
        .name = ITEM_NAME("TM96"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM97] =
    {
        .name = ITEM_NAME("TM97"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM98] =
    {
        .name = ITEM_NAME("TM98"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM99] =
    {
        .name = ITEM_NAME("TM99"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM100] =
    {
        .name = ITEM_NAME("TM100"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM_CUT] =
    {
        .name = ITEM_NAME("HM01"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Greift den Feind mit\n"
            "scharfen Klingen\n"
            "oder Klauen an."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM_FLY] =
    {
        .name = ITEM_NAME("HM02"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Fliegt in der ersten\n"
            "Runde nach oben und\n"
            "greift dann in ..."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM_SURF] =
    {
        .name = ITEM_NAME("HM03"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Erzeugt eine riesige\n"
            "Welle und lässt sie dann\n"
            "auf den Fe..."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM_STRENGTH] =
    {
        .name = ITEM_NAME("HM04"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Baut enorme Kraft\n"
            "auf und schlägt\n"
            "dann den Gegner zu."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

#if IS_HNS
    [ITEM_HM_WHIRLPOOL] =
    {
        .name = ITEM_NAME("HM05"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Hält den Gegner in einem\n"
            "heftigen, wirbelnden\n"
            "Strudel gefangen."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
#else
    [ITEM_HM_FLASH] =
    {
        .name = ITEM_NAME("HM05"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Gibt einen starken\n"
            "Lichtstoß ab, der die\n"
            "Genauigkeit verringert."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
#endif

    [ITEM_HM_ROCK_SMASH] =
    {
        .name = ITEM_NAME("HM06"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein steinharter Angriff,\n"
            "der die Verteidigung\n"
            "schwächen kann."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM_WATERFALL] =
    {
        .name = ITEM_NAME("HM07"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Greift den Feind mit\n"
            "genug Kraft an, um\n"
            "Wasserfälle zu erklimmen."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

#if IS_HNS
    [ITEM_HM_ROCK_CLIMB] =
    {
        .name = ITEM_NAME("HM08"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein umfassender\n"
            "Angriff, der den\n"
            "Gegner verwirren kann."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
#else
    [ITEM_HM_DIVE] =
    {
        .name = ITEM_NAME("HM08"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Taucht in der ersten\n"
            "Runde unter Wasser und\n"
            "greift dann in ..."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
#endif


// Charms

    [ITEM_OVAL_CHARM] =
    {
        .name = ITEM_NAME("Ovalpin"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Erhöht die Chance, in\n"
            "der Kindertagesstätte\n"
            "Eier zu finden."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_OvalCharm,
        .iconPalette = gItemIconPalette_OvalCharm,
    },

    [ITEM_SHINY_CHARM] =
    {
        .name = ITEM_NAME("Schillerpin"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Ein Zauber, der die\n"
            "Chance auf glänzende\n"
            "Pokémon erhöht."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_ShinyCharm,
        .iconPalette = gItemIconPalette_ShinyCharm,
    },

    [ITEM_CATCHING_CHARM] =
    {
        .name = ITEM_NAME("Superfangpin"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Ein Zauber, der die\n"
            "Chance auf kritische\n"
            "Eroberungen erhöht."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_CatchingCharm,
        .iconPalette = gItemIconPalette_CatchingCharm,
    },

    [ITEM_EXP_CHARM] =
    {
        .name = ITEM_NAME("EXP. CHARM"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Ein Zauber, der die\n"
            "Menge an Exp erhöht.\n"
            "im Kampf verdient."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_ExpCharm,
        .iconPalette = gItemIconPalette_ExpCharm,
    },

// Form-changing Key Items

    [ITEM_ROTOM_CATALOG] =
    {
        .name = ITEM_NAME("Rotom-Katalog"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Ein Katalog voller\n"
            "Geräte, die Rotom\n"
            "gefallen."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RotomCatalog,
        .iconPic = gItemIcon_RotomCatalog,
        .iconPalette = gItemIconPalette_RotomCatalog,
    },

    [ITEM_GRACIDEA] =
    {
        .name = ITEM_NAME("Gracidea"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Als Zeichen der\n"
            "Dankbarkeit werden daraus\n"
            "gebastelte Blumensträ..."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange,
        .iconPic = gItemIcon_Gracidea,
        .iconPalette = gItemIconPalette_Gracidea,
    },

    [ITEM_REVEAL_GLASS] =
    {
        .name = ITEM_NAME("Wahrspiegel"),
        .pluralName = ITEM_PLURAL_NAME("Reveal Glasses"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Dieses Glas bringt ein\n"
            "Pokémon in seine\n"
            "ursprüngliche F..."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange,
        .iconPic = gItemIcon_RevealGlass,
        .iconPalette = gItemIconPalette_RevealGlass,
    },

    [ITEM_DNA_SPLICERS] =
    {
        .name = ITEM_NAME("DNS-Keil"),
        .pluralName = ITEM_PLURAL_NAME("DNA Splicers"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Splicer, der Kyurem\n"
            "und ein bestimmtes\n"
            "Pokémon verschmilzt."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
        .iconPic = gItemIcon_DNASplicers,
        .iconPalette = gItemIconPalette_DNASplicers,
    },

    [ITEM_ZYGARDE_CUBE] =
    {
        .name = ITEM_NAME("Zygarde-Würfel"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Ein Gegenstand zur\n"
            "Aufbewahrung von Zygarde-\n"
            "Kernen und -Zellen."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ZygardeCube,
        .iconPic = gItemIcon_ZygardeCube,
        .iconPalette = gItemIconPalette_ZygardeCube,
    },

    [ITEM_PRISON_BOTTLE] =
    {
        .name = ITEM_NAME("Banngefäß"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Eine Flasche, mit der vor\n"
            "langer Zeit ein\n"
            "bestimmtes Poké..."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange,
        .iconPic = gItemIcon_PrisonBottle,
        .iconPalette = gItemIconPalette_PrisonBottle,
    },

    [ITEM_N_SOLARIZER] =
    {
        .name = ITEM_NAME("Necrosol"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Ein Gerät zum\n"
            "Verschmelzen und Teilen\n"
            "von Necrozma mithi..."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
        .iconPic = gItemIcon_NecrozmaFuser,
        .iconPalette = gItemIconPalette_NSolarizer,
    },

    [ITEM_N_LUNARIZER] =
    {
        .name = ITEM_NAME("Necrolun"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Ein Gerät zum\n"
            "Verschmelzen und Teilen\n"
            "von Necrozma mithi..."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
        .iconPic = gItemIcon_NecrozmaFuser,
        .iconPalette = gItemIconPalette_NLunarizer,
    },

    [ITEM_REINS_OF_UNITY] =
    {
        .name = ITEM_NAME("REINS OF UNITY"),
        .pluralName = ITEM_PLURAL_NAME("Reins of Unity"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Zügel, die Calyrex\n"
            "mit seinem geliebten\n"
            "Ross vereinen."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
        .iconPic = gItemIcon_ReinsOfUnity,
        .iconPalette = gItemIconPalette_ReinsOfUnity,
    },

// Battle Mechanic Key Items

    [ITEM_MEGA_RING] =
    {
        .name = ITEM_NAME("Mega-Ring"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Ermöglicht {PKMN}, ihren\n"
            "Mega-Stein zu halten, um\n"
            "Mega-Entwickl..."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_MegaRing,
        .iconPalette = gItemIconPalette_MegaRing,
    },

    [ITEM_Z_POWER_RING] =
    {
        .name = ITEM_NAME("Z-Kraftring"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Ein seltsamer Ring,\n"
            "der die Verwendung von\n"
            "Z-Move ermöglicht."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_ZPowerRing,
        .iconPalette = gItemIconPalette_ZPowerRing,
    },

    [ITEM_DYNAMAX_BAND] =
    {
        .name = ITEM_NAME("Dynamax-Band"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Eine Band mit einem\n"
            "Wunschstern, der\n"
            "Dynamaxing ermöglicht."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_DynamaxBand,
        .iconPalette = gItemIconPalette_DynamaxBand,
    },

// Misc. Key Items

    [ITEM_BICYCLE] =
    {
        .name = ITEM_NAME("BIKE"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Klappfahrrad. Drücken\n"
            "Sie im Stillstand R, um\n"
            "die Geschwindigkeit..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = IS_HNS ? ACRO_BIKE : STANDARD_BIKE,
        .iconPic = gItemIcon_Bicycle,
        .iconPalette = gItemIconPalette_Bicycle,
    },

    [ITEM_MACH_BIKE] =
    {
        .name = ITEM_NAME("Eilrad"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Klappfahrrad, das\n"
            "Ihre Geschwindigkeit\n"
            "verdoppelt o..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = MACH_BIKE,
        .iconPic = gItemIcon_MachBike,
        .iconPalette = gItemIconPalette_MachBike,
    },

    [ITEM_ACRO_BIKE] =
    {
        .name = ITEM_NAME("Kunstrad"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Klappfahrrad,\n"
            "das Sprünge und\n"
            "Wheelies beherrscht."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = ACRO_BIKE,
        .iconPic = gItemIcon_AcroBike,
        .iconPalette = gItemIconPalette_AcroBike,
    },

    [ITEM_OLD_ROD] =
    {
        .name = ITEM_NAME("Angel"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Kann in jedem Gewässer\n"
            "verwendet werden, um\n"
            "wilde Pokémon zu angeln."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = OLD_ROD,
        .iconPic = gItemIcon_OldRod,
        .iconPalette = gItemIconPalette_OldRod,
    },

    [ITEM_GOOD_ROD] =
    {
        .name = ITEM_NAME("Profiangel"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine gute Angelrute\n"
            "zum Fangen wilder\n"
            "Pokémon."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = GOOD_ROD,
        .iconPic = gItemIcon_GoodRod,
        .iconPalette = gItemIconPalette_GoodRod,
    },

    [ITEM_SUPER_ROD] =
    {
        .name = ITEM_NAME("Superangel"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Die beste Angelrute\n"
            "zum Fangen wilder\n"
            "Pokémon."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = SUPER_ROD,
        .iconPic = gItemIcon_SuperRod,
        .iconPalette = gItemIconPalette_SuperRod,
    },

    [ITEM_DOWSING_MACHINE] =
    {
        .name = ITEM_NAME("Itemradar"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Gerät, das einen\n"
            "unsichtbaren Gegenstand\n"
            "per Ton signalisiert."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Itemfinder,
        .iconPic = gItemIcon_DowsingMachine,
        .iconPalette = gItemIconPalette_DowsingMachine,
    },

    [ITEM_TOWN_MAP] =
    {
        .name = ITEM_NAME("Karte"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Jederzeit einsehbar.\n"
            "Zeigt Ihren aktuellen\n"
            "Standort an."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TownMap,
        .iconPic = gItemIcon_TownMap,
        .iconPalette = gItemIconPalette_TownMap,
    },

    [ITEM_VS_SEEKER] =
    {
        .name = ITEM_NAME("Kampffahnder"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine wiederaufladbare\n"
            "Einheit, die kampfbereite\n"
            "Trainer anzeigt."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
    #if I_VS_SEEKER_CHARGING != 0
        .fieldUseFunc = FieldUseFunc_VsSeeker,
    #else
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    #endif
        .iconPic = gItemIcon_VsSeeker,
        .iconPalette = gItemIconPalette_VsSeeker,
    },

    [ITEM_TM_CASE] =
    {
        .name = ITEM_NAME("TM-Box"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein praktischer\n"
            "Koffer für TMs und\n"
            "HMs."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TMCase,
        .iconPalette = gItemIconPalette_TMCase,
    },

    [ITEM_BERRY_POUCH] =
    {
        .name = ITEM_NAME("Beerentüte"),
        .pluralName = ITEM_PLURAL_NAME("Berry Pouches"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein praktischer\n"
            "Behälter für\n"
            "Beeren."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_BerryPouch,
        .iconPalette = gItemIconPalette_BerryPouch,
    },

    [ITEM_POKEMON_BOX_LINK] =
    {
        .name = ITEM_NAME("{PKMN} BOX LINK"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Dieses Gerät gewährt\n"
            "Zugriff auf das\n"
            "{PKMN}-Speichersystem."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_PokemonBoxLink,
        .iconPic = gItemIcon_PokemonBoxLink,
        .iconPalette = gItemIconPalette_PokemonBoxLink,
    },

    [ITEM_COIN_CASE] =
    {
        .name = ITEM_NAME("Münzkorb"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Etui für bis\n"
            "zu 9.999 Münzen."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CoinCase,
        .iconPic = gItemIcon_CoinCase,
        .iconPalette = gItemIconPalette_CoinCase,
    },

    [ITEM_POWDER_JAR] =
    {
        .name = ITEM_NAME("Puderdöschen"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Bewahrt Beerenpulver auf,\n"
            "das mit einem\n"
            "Beerenbrecher hergeste..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PowderJar,
        .iconPic = gItemIcon_PowderJar,
        .iconPalette = gItemIconPalette_PowderJar,
    },

    [ITEM_WAILMER_PAIL] =
    {
        .name = ITEM_NAME("Wailmerkanne"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Werkzeug zum\n"
            "Gießen von Beeren\n"
            "und Pflanzen."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_WailmerPail,
        .iconPic = gItemIcon_WailmerPail,
        .iconPalette = gItemIconPalette_WailmerPail,
    },

    [ITEM_POKE_RADAR] =
    {
        .name = ITEM_NAME("Pokéradar"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Werkzeug zum\n"
            "Aufspüren von Pokémon,\n"
            "die sich im G..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .iconPic = gItemIcon_PokeRadar,
        .iconPalette = gItemIconPalette_PokeRadar,
    },

    [ITEM_POKEBLOCK_CASE] =
    {
        .name = ITEM_NAME("{POKEBLOCK} CASE"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Etui für\n"
            "{POKEBLOCK}s, die mit\n"
            "einem Beerenmi..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PBLOCK_CASE,
        .fieldUseFunc = ItemUseOutOfBattle_PokeblockCase,
        .iconPic = gItemIcon_PokeblockCase,
        .iconPalette = gItemIconPalette_PokeblockCase,
    },

    [ITEM_SOOT_SACK] =
    {
        .name = ITEM_NAME("Aschetasche"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Sack zum Sammeln\n"
            "und Aufbewahren von\n"
            "Vulkanasche."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_SootSack,
        .iconPalette = gItemIconPalette_SootSack,
    },

    [ITEM_POKE_FLUTE] =
    {
        .name = ITEM_NAME("Pokéflöte"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine süß klingende\n"
            "Flöte, die Pokémon\n"
            "erweckt."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeFlute,
        .battleUsage = EFFECT_ITEM_USE_POKE_FLUTE,
        .iconPic = gItemIcon_PokeFlute,
        .iconPalette = gItemIconPalette_PokeFlute,
    },

    [ITEM_FAME_CHECKER] =
    {
        .name = ITEM_NAME("Ruhmesdatei"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Speichert Informationen\n"
            "über berühmte Personen\n"
            "zum sofortigen Abruf."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_FameChecker,
        .iconPalette = gItemIconPalette_FameChecker,
    },

    [ITEM_TEACHY_TV] =
    {
        .name = ITEM_NAME("Lehrkanal"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Fernseher, auf den\n"
            "ein Ratgeberprogramm für\n"
            "Trainer eingestellt ist."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeachyTV,
        .iconPalette = gItemIconPalette_TeachyTV,
    },

// Story Key Items

    [ITEM_SS_TICKET] =
    {
        .name = ITEM_NAME("Bootsticket"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Das für die Fahrt mit\n"
            "der Fähre\n"
            "erforderliche Ticket."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_SSTicket,
        .iconPalette = gItemIconPalette_SSTicket,
    },

    [ITEM_EON_TICKET] =
    {
        .name = ITEM_NAME("Äon-Ticket"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Das Ticket für eine\n"
            "Fähre zu einer\n"
            "fernen Südinsel."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 1,
        .iconPic = gItemIcon_EonTicket,
        .iconPalette = gItemIconPalette_EonTicket,
    },

    [ITEM_MYSTIC_TICKET] =
    {
        .name = ITEM_NAME("MYSTIC TICKET"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Zum Einsteigen in das\n"
            "Schiff nach Navel Rock\n"
            "ist ein Tic..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_MysticTicket,
        .iconPalette = gItemIconPalette_MysticTicket,
    },

    [ITEM_AURORA_TICKET] =
    {
        .name = ITEM_NAME("AURORA TICKET"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Zum Einsteigen in das\n"
            "Schiff nach Birth Island\n"
            "ist ein Tic..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_AuroraTicket,
        .iconPalette = gItemIconPalette_AuroraTicket,
    },

    [ITEM_OLD_SEA_MAP] =
    {
        .name = ITEM_NAME("Alte Karte"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine verblasste Seekarte,\n"
            "die den Weg zu einer\n"
            "bestimmten Insel zeigt."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_OldSeaMap,
        .iconPalette = gItemIconPalette_OldSeaMap,
    },

    [ITEM_LETTER] =
    {
        .name = ITEM_NAME("Brief an Troy"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Brief an Steven\n"
            "vom Präsidenten der\n"
            "Devon Corp."),
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Letter,
        .iconPalette = gItemIconPalette_LavaCookieAndLetter,
    },

    [ITEM_DEVON_PARTS] =
    {
        .name = ITEM_NAME("DEVON PARTS"),
        .pluralName = ITEM_PLURAL_NAME("Devon Parts"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Paket, das Devons\n"
            "Maschinenteile\n"
            "enthält."),
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_DevonParts,
        .iconPalette = gItemIconPalette_DevonParts,
    },

    [ITEM_GO_GOGGLES] =
    {
        .name = ITEM_NAME("Wüstenbrille"),
        .pluralName = ITEM_PLURAL_NAME("Go-Goggles"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Schicke Schutzbrille, die\n"
            "die Augen vor Sandstürmen\n"
            "in der Wüste schützt."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_GoGoggles,
        .iconPalette = gItemIconPalette_GoGoggles,
    },

    [ITEM_DEVON_SCOPE] =
    {
        .name = ITEM_NAME("Devon-Scope"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Gerät von Devon,\n"
            "das unsichtbare\n"
            "Pokémon signalisiert."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_DevonScope,
        .iconPalette = gItemIconPalette_DevonScope,
    },

    [ITEM_BASEMENT_KEY] =
    {
        .name = ITEM_NAME("Kelleröffner"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Der Schlüssel für New\n"
            "Mauville unterhalb\n"
            "von Mauville City."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_BasementKey,
        .iconPalette = gItemIconPalette_OldKey,
    },

    [ITEM_SCANNER] =
    {
        .name = ITEM_NAME("Scanner"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Gerät, das im\n"
            "verlassenen Schiff\n"
            "gefunden wurde."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Scanner,
        .iconPalette = gItemIconPalette_Scanner,
    },

    [ITEM_STORAGE_KEY] =
    {
        .name = ITEM_NAME("Lagerschlüssel"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Der Schlüssel zum\n"
            "Lager im\n"
            "verlassenen Schiff."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_StorageKey,
        .iconPalette = gItemIconPalette_OldKey,
    },

    [ITEM_KEY_TO_ROOM_1] =
    {
        .name = ITEM_NAME("R1-Schlüssel"),
        .pluralName = ITEM_PLURAL_NAME("Keys to Room 1"),
        .price = 0,
        .description = sKeyToRoomDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_KeyToRoom1,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_KEY_TO_ROOM_2] =
    {
        .name = ITEM_NAME("R2-Schlüssel"),
        .pluralName = ITEM_PLURAL_NAME("Keys to Room 2"),
        .price = 0,
        .description = sKeyToRoomDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_KeyToRoom2,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_KEY_TO_ROOM_4] =
    {
        .name = ITEM_NAME("R4-Schlüssel"),
        .pluralName = ITEM_PLURAL_NAME("Keys to Room 4"),
        .price = 0,
        .description = sKeyToRoomDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_KeyToRoom4,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_KEY_TO_ROOM_6] =
    {
        .name = ITEM_NAME("R6-Schlüssel"),
        .pluralName = ITEM_PLURAL_NAME("Keys to Room 6"),
        .price = 0,
        .description = sKeyToRoomDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_KeyToRoom6,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_METEORITE] =
    {
        .name = ITEM_NAME("Meteorit"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Meteorit, der\n"
            "bei Meteor Falls\n"
            "gefunden wurde."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange,
        .iconPic = gItemIcon_Meteorite,
        .iconPalette = gItemIconPalette_Meteorite,
    },

    [ITEM_MAGMA_EMBLEM] =
    {
        .name = ITEM_NAME("Magmaemblem"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein medaillenähnlicher\n"
            "Gegenstand in der\n"
            "gleichen Form wie ..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_MagmaEmblem,
        .iconPalette = gItemIconPalette_MagmaEmblem,
    },

    [ITEM_CONTEST_PASS] =
    {
        .name = ITEM_NAME("Wettbewerbskarte"),
        .pluralName = ITEM_PLURAL_NAME("Contest Passes"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Der für die Teilnahme\n"
            "an Pokémon-Wettbewerben\n"
            "erforderliche Pass."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_ContestPass,
        .iconPalette = gItemIconPalette_ContestPass,
    },

    [ITEM_PARCEL] =
    {
        .name = ITEM_NAME("Paket"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Paket für Prof.\n"
            "Oak vom Angestellten\n"
            "eines Pokémon-Marktes."),
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Parcel,
        .iconPalette = gItemIconPalette_Parcel,
    },

    [ITEM_SECRET_KEY] =
    {
        .name = ITEM_NAME("Geheimschlüssel"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Der Schlüssel zum\n"
            "Eingang des Cinnabar\n"
            "Island Gym."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_SecretKey,
        .iconPalette = gItemIconPalette_SecretKey,
    },

    [ITEM_BIKE_VOUCHER] =
    {
        .name = ITEM_NAME("Rad Coupon"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Gutschein für den\n"
            "Kauf eines Fahrrads\n"
            "im Bike Shop."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_BikeVoucher,
        .iconPalette = gItemIconPalette_BikeVoucher,
    },

    [ITEM_GOLD_TEETH] =
    {
        .name = ITEM_NAME("Goldenes Gebiss"),
        .pluralName = ITEM_PLURAL_NAME("Gold Teeth"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Goldprothesen, die der\n"
            "Aufseher der Safari-\n"
            "Zone verloren hat."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_GoldTeeth,
        .iconPalette = gItemIconPalette_GoldTeeth,
    },

    [ITEM_CARD_KEY] =
    {
        .name = ITEM_NAME("Schlüsselkarte"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein kartenartiger\n"
            "Türschlüssel, der im Büro\n"
            "von Silph Co verwen..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_CardKey,
        .iconPalette = gItemIconPalette_CardKey,
    },

    [ITEM_LIFT_KEY] =
    {
        .name = ITEM_NAME("Aufzugsschlüssel"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Aufzugsschlüssel,\n"
            "der in Team Rockets\n"
            "Versteck verwendet wird."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_LiftKey,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_SILPH_SCOPE] =
    {
        .name = ITEM_NAME("Silph Scope"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Das Zielfernrohr von\n"
            "Silph Co macht\n"
            "unsichtbare POKé..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_SilphScope,
        .iconPalette = gItemIconPalette_SilphScope,
    },

    [ITEM_TRI_PASS] =
    {
        .name = ITEM_NAME("Tri-Pass"),
        .pluralName = ITEM_PLURAL_NAME("Tri-Passes"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Pass für Fähren\n"
            "zwischen One, Two\n"
            "und Three Island."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TriPass,
        .iconPalette = gItemIconPalette_TriPass,
    },

    [ITEM_RAINBOW_PASS] =
    {
        .name = ITEM_NAME("Bunt-Pass"),
        .pluralName = ITEM_PLURAL_NAME("Rainbow Passes"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Für Fähren nach\n"
            "Vermilion und den\n"
            "Sevii-Inseln."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_RainbowPass,
        .iconPalette = gItemIconPalette_RainbowPass,
    },

    [ITEM_TEA] =
    {
        .name = ITEM_NAME("Tee"),
        .pluralName = ITEM_PLURAL_NAME("Tea"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein durstlöschender\n"
            "Tee, zubereitet von\n"
            "einer alten Dame."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Tea,
        .iconPalette = gItemIconPalette_Tea,
    },

    [ITEM_RUBY] =
    {
        .name = ITEM_NAME("Rubin"),
        .pluralName = ITEM_PLURAL_NAME("Rubies"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein exquisiter, rot\n"
            "leuchtender Edelstein,\n"
            "der Leidensch..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Gem,
        .iconPalette = gItemIconPalette_Ruby,
    },

    [ITEM_SAPPHIRE] =
    {
        .name = ITEM_NAME("Saphir"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein leuchtend blauer\n"
            "Edelstein, der\n"
            "Ehrlichkeit symbolisiert."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Gem,
        .iconPalette = gItemIconPalette_Sapphire,
    },

    [ITEM_ABILITY_SHIELD] =
    {
        .name = ITEM_NAME("Fähigkeitenschild"),
        .price = 20000,
        .holdEffect = HOLD_EFFECT_ABILITY_SHIELD,
        .description = COMPOUND_STRING(
            "Fähigkeitsänderungen für\n"
            "den Besitzer dieses\n"
            "Gegenstands wer..."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_AbilityShield,
        .iconPalette = gItemIconPalette_AbilityShield,
    },

// GEN 9 ITEMS

    [ITEM_CLEAR_AMULET] =
    {
        .name = ITEM_NAME("Neutralschmuck"),
        .price = 30000,
        .holdEffect = HOLD_EFFECT_CLEAR_AMULET,
        .description = COMPOUND_STRING(
            "Für den Inhaber dieses\n"
            "Gegenstands wird das\n"
            "Absenken der We..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_ClearAmulet,
        .iconPalette = gItemIconPalette_ClearAmulet,
    },

    [ITEM_PUNCHING_GLOVE] =
    {
        .name = ITEM_NAME("Boxhandschuh"),
        .price = 15000,
        .holdEffect = HOLD_EFFECT_PUNCHING_GLOVE,
        .description = COMPOUND_STRING(
            "Verstärkt\n"
            "Schlagbewegungen und\n"
            "entfernt deren Kontakt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_PunchingGlove,
        .iconPalette = gItemIconPalette_PunchingGlove,
    },

    [ITEM_COVERT_CLOAK] =
    {
        .name = ITEM_NAME("Tarnumhang"),
        .price = 20000,
        .holdEffect = HOLD_EFFECT_COVERT_CLOAK,
        .description = COMPOUND_STRING(
            "Schützt den Halter vor\n"
            "zusätzlichen Auswirkungen\n"
            "von Bewegungen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_CovertCloak,
        .iconPalette = gItemIconPalette_CovertCloak,
    },

    [ITEM_LOADED_DICE] =
    {
        .name = ITEM_NAME("Gezinkter Würfel"),
        .pluralName = ITEM_PLURAL_NAME("Loaded Dice"),
        .price = 20000,
        .holdEffect = HOLD_EFFECT_LOADED_DICE,
        .description = COMPOUND_STRING(
            "Würfelt hohe Zahlen.\n"
            "Multihit-Schläge\n"
            "treffen öfter."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_LoadedDice,
        .iconPalette = gItemIconPalette_LoadedDice,
    },

    [ITEM_AUSPICIOUS_ARMOR] =
    {
        .name = ITEM_NAME("AUSPICIOUS ARMOR"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Von glückverheißenden\n"
            "Wünschen bewohnte\n"
            "Rüstung. Verursa..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_AuspiciousArmor,
        .iconPalette = gItemIconPalette_AuspiciousArmor,
    },

    [ITEM_BOOSTER_ENERGY] =
    {
        .name = ITEM_NAME("Energiekapsel"),
        .pluralName = ITEM_PLURAL_NAME("Booster Energies"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_BOOSTER_ENERGY,
        .description = COMPOUND_STRING(
            "Eingekapselte Energie\n"
            "verleiht Pokémon\n"
            "bestimmte Fähigkeiten."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_BoosterEnergy,
        .iconPalette = gItemIconPalette_BoosterEnergy,
    },

    [ITEM_BIG_BAMBOO_SHOOT] =
    {
        .name = ITEM_NAME("BIG BAMBOO SHOOT"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein großer und seltener\n"
            "Bambusspross. Am besten\n"
            "an Feinschmec..."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_BigBambooShoot,
        .iconPalette = gItemIconPalette_BigBambooShoot,
    },

    [ITEM_GIMMIGHOUL_COIN] =
    {
        .name = ITEM_NAME("GIMMIGHOUL COIN"),
        .price = 400,
        .description = COMPOUND_STRING(
            "Gimmighoul hortet\n"
            "und schätzt diese\n"
            "seltsamen Münzen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_GimmighoulCoin,
        .iconPalette = gItemIconPalette_GimmighoulCoin,
    },

    [ITEM_LEADERS_CREST] =
    {
        .name = ITEM_NAME("LEADER'S CREST"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Eine Art Scherbe\n"
            "einer alten Klinge.\n"
            "Von Bisharp gehalten."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_LeadersCrest,
        .iconPalette = gItemIconPalette_LeadersCrest,
    },

    [ITEM_MALICIOUS_ARMOR] =
    {
        .name = ITEM_NAME("MALICIOUS ARMOR"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Von böswilligem Willen\n"
            "bewohnte Rüstung.\n"
            "Verursacht Evolution."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_MaliciousArmor,
        .iconPalette = gItemIconPalette_MaliciousArmor,
    },

    [ITEM_MIRROR_HERB] =
    {
        .name = ITEM_NAME("Kopierkraut"),
        .price = 30000,
        .holdEffect = HOLD_EFFECT_MIRROR_HERB,
        .description = COMPOUND_STRING(
            "Spiegelt die Werterhöhung\n"
            "eines Gegners wider,\n"
            "jedoch nur einmal."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_MirrorHerb,
        .iconPalette = gItemIconPalette_MirrorHerb,
    },

    [ITEM_SCROLL_OF_DARKNESS] =
    {
        .name = ITEM_NAME("SCROLL OF DARKNESS"),
        .pluralName = ITEM_PLURAL_NAME("Scrolls of Darkness"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine eigenartige\n"
            "Schriftrolle mit\n"
            "Geheimnissen des dunk..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .iconPic = gItemIcon_ScrollOfDarkness,
        .iconPalette = gItemIconPalette_ScrollOfDarkness,
    },

    [ITEM_SCROLL_OF_WATERS] =
    {
        .name = ITEM_NAME("SCROLL OF WATERS"),
        .pluralName = ITEM_PLURAL_NAME("Scrolls of Waters"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine eigenartige\n"
            "Schriftrolle mit\n"
            "Geheimnissen ..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .iconPic = gItemIcon_ScrollOfWaters,
        .iconPalette = gItemIconPalette_ScrollOfWaters,
    },

    [ITEM_TERA_ORB] =
    {
        .name = ITEM_NAME("TERA ORB"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Energieladungen können\n"
            "verwendet werden, um eine\n"
            "Terastallisat..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraOrb,
        .iconPalette = gItemIconPalette_TeraOrb,
    },

    [ITEM_TINY_BAMBOO_SHOOT] =
    {
        .name = ITEM_NAME("TINY BAMBOO SHOOT"),
        .price = 750,
        .description = COMPOUND_STRING(
            "Ein kleiner und seltener\n"
            "Bambusspross. Am besten\n"
            "an Feinschmec..."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_TinyBambooShoot,
        .iconPalette = gItemIconPalette_TinyBambooShoot,
    },

    [ITEM_BUG_TERA_SHARD] =
    {
        .name = ITEM_NAME("BUG TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_BugTeraShard,
    },

    [ITEM_DARK_TERA_SHARD] =
    {
        .name = ITEM_NAME("DARK TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_DarkTeraShard,
    },

    [ITEM_DRAGON_TERA_SHARD] =
    {
        .name = ITEM_NAME("DRAGON TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_DragonTeraShard,
    },

    [ITEM_ELECTRIC_TERA_SHARD] =
    {
        .name = ITEM_NAME("ELECTRIC TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_ElectricTeraShard,
    },

    [ITEM_FAIRY_TERA_SHARD] =
    {
        .name = ITEM_NAME("FAIRY TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_FairyTeraShard,
    },

    [ITEM_FIGHTING_TERA_SHARD] =
    {
        .name = ITEM_NAME("FIGHTING TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_FightingTeraShard,
    },

    [ITEM_FIRE_TERA_SHARD] =
    {
        .name = ITEM_NAME("FIRE TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_FireTeraShard,
    },

    [ITEM_FLYING_TERA_SHARD] =
    {
        .name = ITEM_NAME("FLYING TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_FlyingTeraShard,
    },

    [ITEM_GHOST_TERA_SHARD] =
    {
        .name = ITEM_NAME("GHOST TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_GhostTeraShard,
    },

    [ITEM_GRASS_TERA_SHARD] =
    {
        .name = ITEM_NAME("GRASS TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_GrassTeraShard,
    },

    [ITEM_GROUND_TERA_SHARD] =
    {
        .name = ITEM_NAME("GROUND TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_GroundTeraShard,
    },

    [ITEM_ICE_TERA_SHARD] =
    {
        .name = ITEM_NAME("ICE TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_IceTeraShard,
    },

    [ITEM_NORMAL_TERA_SHARD] =
    {
        .name = ITEM_NAME("NORMAL TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_NormalTeraShard,
    },

    [ITEM_POISON_TERA_SHARD] =
    {
        .name = ITEM_NAME("POISON TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_PoisonTeraShard,
    },

    [ITEM_PSYCHIC_TERA_SHARD] =
    {
        .name = ITEM_NAME("PSYCHIC TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_PsychicTeraShard,
    },

    [ITEM_ROCK_TERA_SHARD] =
    {
        .name = ITEM_NAME("ROCK TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_RockTeraShard,
    },

    [ITEM_STEEL_TERA_SHARD] =
    {
        .name = ITEM_NAME("STEEL TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_SteelTeraShard,
    },

    [ITEM_WATER_TERA_SHARD] =
    {
        .name = ITEM_NAME("WATER TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_WaterTeraShard,
    },

    [ITEM_ADAMANT_CRYSTAL] =
    {
        .name = ITEM_NAME("ADAMANT CRYSTAL"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_ADAMANT_ORB,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein großer, leuchtender\n"
            "Edelstein, der Dialga\n"
            "seine Form ändern lässt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_AdamantCrystal,
        .iconPalette = gItemIconPalette_AdamantCrystal,
    },

    [ITEM_GRISEOUS_CORE] =
    {
        .name = ITEM_NAME("GRISEOUS CORE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_GRISEOUS_ORB,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein großer, leuchtender\n"
            "Edelstein, der Giratina\n"
            "seine Form veränd..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_GriseousCore,
        .iconPalette = gItemIconPalette_GriseousCore,
    },

    [ITEM_LUSTROUS_GLOBE] =
    {
        .name = ITEM_NAME("LUSTROUS GLOBE"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_LUSTROUS_ORB,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ein großer, leuchtender\n"
            "Edelstein, der Palkia\n"
            "seine Form ändern lässt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_LustrousGlobe,
        .iconPalette = gItemIconPalette_LustrousGlobe,
    },

    [ITEM_BLACK_AUGURITE] =
    {
        .name = ITEM_NAME("BLACK AUGURITE"),
        .price = 20000,
        .description = COMPOUND_STRING(
            "Ein schwarzer Stein, der\n"
            "einige Pokémon zur\n"
            "Weiterentwicklung bringt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_BlackAugurite,
        .iconPalette = gItemIconPalette_BlackAugurite,
    },

    [ITEM_LINKING_CORD] =
    {
        .name = ITEM_NAME("LINKING CORD"),
        .price = 8000,
        .description = COMPOUND_STRING(
            "Eine mysteriöse Schnur,\n"
            "die einige Pokémon zur\n"
            "Weiterentwicklung bringt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_LinkingCord,
        .iconPalette = gItemIconPalette_LinkingCord,
    },

    [ITEM_PEAT_BLOCK] =
    {
        .name = ITEM_NAME("PEAT BLOCK"),
        .price = 20000,
        .description = COMPOUND_STRING(
            "Ein Materialblock, der\n"
            "einige Pokémon dazu\n"
            "bringt, s..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_PeatBlock,
        .iconPalette = gItemIconPalette_PeatBlock,
    },

    [ITEM_BERSERK_GENE] =
    {
        .name = ITEM_NAME("Berserk-Gen"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_BERSERK_GENE,
        .description = COMPOUND_STRING(
            "Verstärkt den Angriff\n"
            "deutlich, sorgt aber für\n"
            "dauerhafte Verwirrung."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_BerserkGene,
        .iconPalette = gItemIconPalette_BerserkGene,
    },

    [ITEM_FAIRY_FEATHER] =
    {
        .name = ITEM_NAME("Feendaune"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "Ein Haltegegenstand, der\n"
            "die Kraft von Bewegungen\n"
            "vom Typ Fee erhöht."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
        .flingPower = 10,
        .iconPic = gItemIcon_FairyFeather,
        .iconPalette = gItemIconPalette_FairyFeather,
    },

    [ITEM_SYRUPY_APPLE] =
    {
        .name = ITEM_NAME("Saftiger Apfel"),
        .price = 2200,
        .description = COMPOUND_STRING(
            "Ein sehr sirupartiger\n"
            "Apfel, der die\n"
            "Entwicklung bestimm..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_SyrupyApple,
        .iconPalette = gItemIconPalette_SyrupyApple,
    },

    [ITEM_UNREMARKABLE_TEACUP] =
    {
        .name = ITEM_NAME("Simple Teeschale"),
        .price = 1600,
        .description = COMPOUND_STRING(
            "Eine zerbrochene\n"
            "Teetasse, die die\n"
            "Entwicklung bestimm..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        .iconPic = gItemIcon_UnremarkableTeacup,
        .iconPalette = gItemIconPalette_UnremarkableTeacup,
    },

    [ITEM_MASTERPIECE_TEACUP] =
    {
        .name = ITEM_NAME("Edle Teeschale"),
        .price = 38000,
        .description = COMPOUND_STRING(
            "Eine angeschlagene\n"
            "Teetasse, die die\n"
            "Entwicklung bestimm..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        .iconPic = gItemIcon_MasterpieceTeacup,
        .iconPalette = gItemIconPalette_MasterpieceTeacup,
    },

    [ITEM_CORNERSTONE_MASK] =
    {
        .name = ITEM_NAME("Fundamentmaske"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_OGERPON_MASK,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ermöglicht Ogerpon,\n"
            "den Rock-Typ im\n"
            "Kampf zu führen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_CornerstoneMask,
        .iconPalette = gItemIconPalette_CornerstoneMask,
    },

    [ITEM_WELLSPRING_MASK] =
    {
        .name = ITEM_NAME("Brunnenmaske"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_OGERPON_MASK,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ermöglicht Ogerpon,\n"
            "den Wassertyp im\n"
            "Kampf einzusetzen."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_WellspringMask,
        .iconPalette = gItemIconPalette_WellspringMask,
    },

    [ITEM_HEARTHFLAME_MASK] =
    {
        .name = ITEM_NAME("Ofenmaske"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_OGERPON_MASK,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Ermöglicht Ogerpon,\n"
            "im Kampf den Feuertyp\n"
            "zu verwenden."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_HearthflameMask,
        .iconPalette = gItemIconPalette_HearthflameMask,
    },

    [ITEM_HEALTH_MOCHI] =
    {
        .name = ITEM_NAME("HEALTH MOCHI"),
        .pluralName = ITEM_PLURAL_NAME("Health Mochi"),
        .price = 500,
        .description = sHealthFeatherDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_MOCHI,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_HpMochi,
        .flingPower = 30,
        .iconPic = gItemIcon_Mochi,
        .iconPalette = gItemIconPalette_HealthMochi,
    },

    [ITEM_MUSCLE_MOCHI] =
    {
        .name = ITEM_NAME("MUSCLE MOCHI"),
        .pluralName = ITEM_PLURAL_NAME("Muscle Mochi"),
        .price = 500,
        .description = sMuscleFeatherDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_MOCHI,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_AtkMochi,
        .flingPower = 30,
        .iconPic = gItemIcon_Mochi,
        .iconPalette = gItemIconPalette_MuscleMochi,
    },

    [ITEM_RESIST_MOCHI] =
    {
        .name = ITEM_NAME("RESIST MOCHI"),
        .pluralName = ITEM_PLURAL_NAME("Resist Mochi"),
        .price = 500,
        .description = sResistFeatherDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_MOCHI,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_DefMochi,
        .flingPower = 30,
        .iconPic = gItemIcon_Mochi,
        .iconPalette = gItemIconPalette_ResistMochi,
    },

    [ITEM_GENIUS_MOCHI] =
    {
        .name = ITEM_NAME("GENIUS MOCHI"),
        .pluralName = ITEM_PLURAL_NAME("Genius Mochi"),
        .price = 500,
        .description = sGeniusFeatherDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_MOCHI,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_SpatkMochi,
        .flingPower = 30,
        .iconPic = gItemIcon_Mochi,
        .iconPalette = gItemIconPalette_GeniusMochi,
    },

    [ITEM_CLEVER_MOCHI] =
    {
        .name = ITEM_NAME("CLEVER MOCHI"),
        .pluralName = ITEM_PLURAL_NAME("Clever Mochi"),
        .price = 500,
        .description = sCleverFeatherDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_MOCHI,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_SpdefMochi,
        .flingPower = 30,
        .iconPic = gItemIcon_Mochi,
        .iconPalette = gItemIconPalette_CleverMochi,
    },

    [ITEM_SWIFT_MOCHI] =
    {
        .name = ITEM_NAME("SWIFT MOCHI"),
        .pluralName = ITEM_PLURAL_NAME("Swift Mochi"),
        .price = 500,
        .description = sSwiftFeatherDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_MOCHI,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_SpeedMochi,
        .flingPower = 30,
        .iconPic = gItemIcon_Mochi,
        .iconPalette = gItemIconPalette_SwiftMochi,
    },

    [ITEM_FRESH_START_MOCHI] =
    {
        .name = ITEM_NAME("FRESH-START MOCHI"),
        .pluralName = ITEM_PLURAL_NAME("Fresh-Start Mochi"),
        .price = 300,
        .description = COMPOUND_STRING(
            "Ein Gegenstand, der\n"
            "alle Basispunkte eines\n"
            "Pokémon zurücksetzt."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_MOCHI,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ResetEVs,
        .effect = gItemEffect_ResetMochi,
        .flingPower = 30,
        .iconPic = gItemIcon_Mochi,
        .iconPalette = gItemIconPalette_FreshStartMochi,
    },

    [ITEM_GLIMMERING_CHARM] =
    {
        .name = ITEM_NAME("GLIMMERING CHARM"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Ein Zauber, der die\n"
            "Splitter von Tera\n"
            "Raids hervorbringt."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_GlimmeringCharm,
        .iconPalette = gItemIconPalette_GlimmeringCharm,
    },

    [ITEM_METAL_ALLOY] =
    {
        .name = ITEM_NAME("Legierungsmetall"),
        .price = 6000,
        .description = COMPOUND_STRING(
            "Ein besonderes Metall,\n"
            "das die Entwicklung\n"
            "bestimmter Poké..."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .iconPic = gItemIcon_MetalAlloy,
        .iconPalette = gItemIconPalette_MetalAlloy,
    },

    [ITEM_STELLAR_TERA_SHARD] =
    {
        .name = ITEM_NAME("STELLAR TERA SHARD"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_StellarTeraShard,
        .iconPalette = gItemIconPalette_StellarTeraShard,
    },

    [ITEM_JUBILIFE_MUFFIN] =
    {
        .name = ITEM_NAME("JUBILIFE MUFFIN"),
        .price = 250,
        .description = sFullHealDesc,
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_JubilifeMuffin,
        .iconPalette = gItemIconPalette_JubilifeMuffin,
    },

    [ITEM_REMEDY] =
    {
        .name = ITEM_NAME("REMEDY"),
        .pluralName = ITEM_PLURAL_NAME("Remedies"),
        .price = 150,
        .description = COMPOUND_STRING(
            "Ein bitteres Pulver,\n"
            "das KP um 20 Punkte\n"
            "wiederherstellt."),
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_Remedy,
        .flingPower = 30,
        .iconPic = gItemIcon_Remedy,
        .iconPalette = gItemIconPalette_Remedy,
    },

    [ITEM_FINE_REMEDY] =
    {
        .name = ITEM_NAME("FINE REMEDY"),
        .pluralName = ITEM_PLURAL_NAME("Fine Remedies"),
        .price = 150,
        .description = COMPOUND_STRING(
            "Bitteres Puder,\n"
            "füllt KP\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "um 60 Punkte."),
        #else
            "um 50 Punkte."),
        #endif
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_FineRemedy,
        .flingPower = 30,
        .iconPic = gItemIcon_FineRemedy,
        .iconPalette = gItemIconPalette_FineRemedy,
    },

    [ITEM_SUPERB_REMEDY] =
    {
        .name = ITEM_NAME("SUPERB REMEDY"),
        .pluralName = ITEM_PLURAL_NAME("Superb Remedies"),
        .price = 750,
        .description = COMPOUND_STRING(
            "Bitteres Puder,\n"
            "füllt KP\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "um 120 Punkte."),
        #else
            "um 200 Punkte."),
        #endif
        .pocket = POCKET_MEDICINE,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_SuperbRemedy,
        .flingPower = 30,
        .iconPic = gItemIcon_SuperbRemedy,
        .iconPalette = gItemIconPalette_SuperbRemedy,
    },

    [ITEM_AUX_EVASION] =
    {
        .name = ITEM_NAME("AUX EVASION"),
        .price = 800,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Erhöht ausweichen\n"
            "stark während\n"
            "eines Kampfes."),
        #else
            "Erhöht ausweichen\n"
            "während\n"
            "eines Kampfes."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_AUX_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
        .iconPic = gItemIcon_AuxBottle,
        .iconPalette = gItemIconPalette_AuxEvasion,
    },

    [ITEM_AUX_GUARD] =
    {
        .name = ITEM_NAME("AUX GUARD"),
        .price = 400,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Erhöht Verteidigung\n"
            "stark während\n"
            "eines Kampfes."),
        #else
            "Erhöht Verteidigung\n"
            "während\n"
            "eines Kampfes."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_AUX_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
        .iconPic = gItemIcon_AuxBottle,
        .iconPalette = gItemIconPalette_AuxGuard,
    },

    [ITEM_AUX_POWER] =
    {
        .name = ITEM_NAME("AUX POWER"),
        .price = 400,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Erhöht Offensive\n"
            "stark während\n"
            "eines Kampfes."),
        #else
            "Erhöht Offensive\n"
            "während\n"
            "eines Kampfes."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_AUX_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
        .iconPic = gItemIcon_AuxBottle,
        .iconPalette = gItemIconPalette_AuxPower,
    },

    [ITEM_AUX_POWERGUARD] =
    {
        .name = ITEM_NAME("AUX POWERGUARD"),
        .price = 1200,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Erhöht Offensive\n"
            "und Defensive\n"
            "stark im Kampf."),
        #else
            "Erhöht Offensive\n"
            "und Defensive\n"
            "im Kampf."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_AUX_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
        .iconPic = gItemIcon_AuxPowerguard,
        .iconPalette = gItemIconPalette_AuxPowerguard,
    },

    [ITEM_CHOICE_DUMPLING] =
    {
        .name = ITEM_NAME("CHOICE DUMPLING"),
        .price = 1200,
        .description = sQuestionMarksDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
        .iconPic = gItemIcon_ChoiceDumpling,
        .iconPalette = gItemIconPalette_ChoiceDumpling,
    },

    [ITEM_SWAP_SNACK] =
    {
        .name = ITEM_NAME("SWAP SNACK"),
        .price = 1200,
        .description = sQuestionMarksDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
        .iconPic = gItemIcon_SwapSnack,
        .iconPalette = gItemIconPalette_SwapSnack,
    },

    [ITEM_TWICE_SPICED_RADISH] =
    {
        .name = ITEM_NAME("TWICE-SPICED RADISH"),
        .pluralName = ITEM_PLURAL_NAME("Twice-Spiced Radishes"),
        .price = 1600,
        .description = sQuestionMarksDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
        .iconPic = gItemIcon_TwiceSpicedRadish,
        .iconPalette = gItemIconPalette_TwiceSpicedRadish,
    },

    [ITEM_POKESHI_DOLL] =
    {
        .name = ITEM_NAME("POKéSHI DOLL"),
        .price = 2000,
        .description = COMPOUND_STRING(
            "Ein Holzspielzeug, das\n"
            "einem Pokémon ähnelt.\n"
            "Kann verkauft werden."),
        .pocket = POCKET_TREASURES,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_PokeshiDoll,
        .iconPalette = gItemIconPalette_PokeshiDoll,
    },

// HnS Items

    [ITEM_GS_BALL] =
    {
        .name = ITEM_NAME("GS-Ball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Ein seltsamer Pokéball\n"
            "mit einem Gold- und\n"
            "Silberdesign."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_GSBall,
        .iconPalette = gItemIconPalette_GSBall,
    },

    [ITEM_FERTILIZER] =
    {
        .name = ITEM_NAME("Wachsmulch"),
        .price = 2500,
        .description = COMPOUND_STRING(
            "Ein Dünger, der das\n"
            "Wachstum von Beeren\n"
            "beschleunigt."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_QuestionMark,
        .iconPalette = gItemIconPalette_QuestionMark,
    },

    [ITEM_EXP_SHARE_SMALL] =
    {
        .name = ITEM_NAME("EXP. SHARE S"),
        .price = 6000,
        .holdEffect = HOLD_EFFECT_EXP_SHARE,
        .description = COMPOUND_STRING(
            "Ein gehaltener\n"
            "Gegenstand, der Exp\n"
            "erhält. Punkte ..."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_ExpShare,
        .iconPalette = gItemIconPalette_ExpShare,
    },

    [ITEM_HEALING_HEART] =
    {
        .name = ITEM_NAME("HEALING HEART"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Herz, das Ihre\n"
            "Gruppe heilt, wenn es im\n"
            "Feld eingesetzt wird."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_HealingHeart,
        .iconPalette = gItemIconPalette_HealingHeart,
    },

    [ITEM_INFINITE_REPEL] =
    {
        .name = ITEM_NAME("INFIN. REPEL"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Gegenstand, der\n"
            "schwache Pokémon\n"
            "dauerhaft abwehrt."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_QuestionMark,
        .iconPalette = gItemIconPalette_QuestionMark,
    },

    [ITEM_INFINITE_RARE_CANDIES] =
    {
        .name = ITEM_NAME("RARECANDY BOX"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine Schachtel mit\n"
            "seltenen Süßigkeiten,\n"
            "die nie ausgeht."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_InfiniteRareCandies,
        .iconPic = gItemIcon_RareCandy,
        .iconPalette = gItemIconPalette_RareCandy,
    },

    [ITEM_CLEAR_BELL] =
    {
        .name = ITEM_NAME("Klarglocke"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine Glocke, die einen\n"
            "klaren, reinen Klang\n"
            "erzeugt. Es beruh..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_ClearBell,
        .iconPalette = gItemIconPalette_ClearBell,
    },

    [ITEM_LOST_ITEM] =
    {
        .name = ITEM_NAME("Fundsache"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Gegenstand, den\n"
            "ein Mädchen in Saffron\n"
            "City verloren hat."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_LostItem,
        .iconPalette = gItemIconPalette_LostItem,
    },

    [ITEM_MACHINE_PART] =
    {
        .name = ITEM_NAME("Ersatzteil"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Teil, das zur\n"
            "Reparatur des\n"
            "Kraftwerksgenerat..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_MachinePart,
        .iconPalette = gItemIconPalette_MachinePart,
    },

    [ITEM_MYSTERY_EGG] =
    {
        .name = ITEM_NAME("Rätsel-Ei"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein von Mr.\n"
            "Pokémon erhaltenes\n"
            "Ei. Gib es Elm."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_MysteryEgg,
        .iconPalette = gItemIconPalette_MysteryEgg,
    },

    [ITEM_PASS] =
    {
        .name = ITEM_NAME("Fahrschein"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Pass für den\n"
            "Magnetzug zwischen\n"
            "Goldenrod und Saffron."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_HnsPass,
        .iconPalette = gItemIconPalette_HnsPass,
    },

    [ITEM_RAINBOW_WING] =
    {
        .name = ITEM_NAME("RAINBOW WING"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine mystische Feder\n"
            "in Regenbogenfarben.\n"
            "Es ist heilig."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_RainbowWing,
        .iconPalette = gItemIconPalette_RainbowWing,
    },

    [ITEM_RED_SCALE] =
    {
        .name = ITEM_NAME("Rote Haut"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine Schuppe der\n"
            "roten Gyarados am\n"
            "Lake of Rage."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_RedScale,
        .iconPalette = gItemIconPalette_RedScale,
    },

    [ITEM_SECRET_POTION] =
    {
        .name = ITEM_NAME("SECRETPOTION"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine geheime Medizin,\n"
            "hergestellt in der\n"
            "Apotheke von Cianw..."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_SecretPotion,
        .iconPalette = gItemIconPalette_SecretPotion,
    },

    [ITEM_SILVER_WING] =
    {
        .name = ITEM_NAME("SILVER WING"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine mystische\n"
            "Silberfeder. Es soll\n"
            "Lugia herbeirufen."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_SilverWing,
        .iconPalette = gItemIconPalette_SilverWing,
    },

    [ITEM_TIDAL_BELL] =
    {
        .name = ITEM_NAME("Gischtglocke"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine Glocke, die einen\n"
            "hallenden Klang erzeugt,\n"
            "der Lugia ruft."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TidalBell,
        .iconPalette = gItemIconPalette_TidalBell,
    },

    [ITEM_RADIO] =
    {
        .name = ITEM_NAME("RADIO"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein tragbares Radio,\n"
            "das verschiedene\n"
            "Kanäle aufnimmt."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Radio,
        .iconPalette = gItemIconPalette_Radio,
    },

    [ITEM_SQUIRT_BOTTLE] =
    {
        .name = ITEM_NAME("SQUIRTBOTTLE"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Eine Flasche zum\n"
            "Gießen von Pflanzen\n"
            "und Sudowoodo."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_QuestionMark,
        .iconPalette = gItemIconPalette_QuestionMark,
    },

    [ITEM_ROOM_1_KEY] =
    {
        .name = ITEM_NAME("RM. 1 KEY"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Schlüssel zu einem\n"
            "Raum im unterirdischen\n"
            "Lagerhaus."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Room1Key,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_ROOM_2_KEY] =
    {
        .name = ITEM_NAME("RM. 2 KEY"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Schlüssel zu einem\n"
            "Raum im unterirdischen\n"
            "Lagerhaus."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Room2Key,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_ROOM_4_KEY] =
    {
        .name = ITEM_NAME("RM. 4 KEY"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Schlüssel zu einem\n"
            "Raum im unterirdischen\n"
            "Lagerhaus."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Room4Key,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_ROOM_6_KEY] =
    {
        .name = ITEM_NAME("RM. 6 KEY"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein Schlüssel zu einem\n"
            "Raum im unterirdischen\n"
            "Lagerhaus."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Room6Key,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_UNUSED_BERRY_1] =
    {
        .name = ITEM_NAME("Tsitrubeere"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 30,
        .description = COMPOUND_STRING(
            "Ein gehaltener\n"
            "Gegenstand. Stellt die KP\n"
            "des Trägers um 30 Pun..."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_QuestionMark,
        .iconPalette = gItemIconPalette_QuestionMark,
    },

    [ITEM_UNUSED_BERRY_2] =
    {
        .name = ITEM_NAME("????????"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein nicht\n"
            "verwendeter\n"
            "Artikelplatzhalter."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_QuestionMark,
        .iconPalette = gItemIconPalette_QuestionMark,
    },

    [ITEM_UNUSED_BERRY_3] =
    {
        .name = ITEM_NAME("????????"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein nicht\n"
            "verwendeter\n"
            "Artikelplatzhalter."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_QuestionMark,
        .iconPalette = gItemIconPalette_QuestionMark,
    },
};

#undef ITEM_NAME
#undef ITEM_PLURAL_NAME
