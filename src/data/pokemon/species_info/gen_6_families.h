#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen6[] =
{
#endif

#if P_FAMILY_CHESPIN
    [SPECIES_CHESPIN] =
    {
        .baseHP        = 56,
        .baseAttack    = 61,
        .baseDefense   = 65,
        .baseSpeed     = 38,
        .baseSpAttack  = 48,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 63,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_BULLETPROOF },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Igamaro"),
        .cryId = CRY_CHESPIN,
        .natDexNum = NATIONAL_DEX_CHESPIN,
        .categoryName = _("Stachelkopf"),
        .height = 4,
        .weight = 90,
        .description = COMPOUND_STRING(
        "Die Federkiele auf dem Kopf sind\n"
        "normalerweise weich. Wenn es sie\n"
        "biegt, werden die Spitzen so hart und\n"
        "scharf, dass sie mühelos Fels..."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chespin,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 24),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 24),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Chespin,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Chespin,
        .shinyPalette = gMonShinyPalette_Chespin,
        .iconSprite = gMonIcon_Chespin,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Chespin)
        OVERWORLD(
            sPicTable_Chespin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chespin,
            gShinyOverworldPalette_Chespin
        )
        .levelUpLearnset = sChespinLevelUpLearnset,
        .teachableLearnset = sChespinTeachableLearnset,
        .eggMoveLearnset = sChespinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_QUILLADIN}),
    },

    [SPECIES_QUILLADIN] =
    {
        .baseHP        = 61,
        .baseAttack    = 78,
        .baseDefense   = 95,
        .baseSpeed     = 57,
        .baseSpAttack  = 56,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 142,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_BULLETPROOF },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Igastarnish"),
        .cryId = CRY_QUILLADIN,
        .natDexNum = NATIONAL_DEX_QUILLADIN,
        .categoryName = _("Spitzpanzer"),
        .height = 7,
        .weight = 290,
        .description = COMPOUND_STRING(
        "Sie stärken den robusten Panzer, der\n"
        "ihren Körper bedeckt, indem sie\n"
        "ineinander laufen. Sie sind sehr\n"
        "freundlich und beginnen keine Kämpf..."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Quilladin,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_LUNGE_GROW,
        .backPic = gMonBackPic_Quilladin,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Quilladin,
        .shinyPalette = gMonShinyPalette_Quilladin,
        .iconSprite = gMonIcon_Quilladin,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, 4, SHADOW_SIZE_M)
        FOOTPRINT(Quilladin)
        OVERWORLD(
            sPicTable_Quilladin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Quilladin,
            gShinyOverworldPalette_Quilladin
        )
        .levelUpLearnset = sQuilladinLevelUpLearnset,
        .teachableLearnset = sQuilladinTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_CHESNAUGHT}),
    },

    [SPECIES_CHESNAUGHT] =
    {
        .baseHP        = 88,
        .baseAttack    = 107,
        .baseDefense   = 122,
        .baseSpeed     = 64,
        .baseSpAttack  = 74,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 265 : 239,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_BULLETPROOF },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Brigaron"),
        .cryId = CRY_CHESNAUGHT,
        .natDexNum = NATIONAL_DEX_CHESNAUGHT,
        .categoryName = _("Spitzpanzer"),
        .height = 16,
        .weight = 900,
        .description = COMPOUND_STRING(
        "Es schützt seine Verbündeten mit\n"
        "seinem eigenen Körper vor Gefahren.\n"
        "Wenn es eine Verteidigungshaltung\n"
        "einnimmt und sein Gesicht mit den..."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Chesnaught,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .backPic = gMonBackPic_Chesnaught,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Chesnaught,
        .shinyPalette = gMonShinyPalette_Chesnaught,
        .iconSprite = gMonIcon_Chesnaught,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 10, SHADOW_SIZE_L)
        FOOTPRINT(Chesnaught)
        OVERWORLD(
            sPicTable_Chesnaught,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chesnaught,
            gShinyOverworldPalette_Chesnaught
        )
        .levelUpLearnset = sChesnaughtLevelUpLearnset,
        .teachableLearnset = sChesnaughtTeachableLearnset,
        .formSpeciesIdTable = sChesnaughtFormSpeciesIdTable,
        .formChangeTable = sChesnaughtFormChangeTable,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_CHESNAUGHT_MEGA] =
    {
        .baseHP        = 88,
        .baseAttack    = 137,
        .baseDefense   = 172,
        .baseSpeed     = 44,
        .baseSpAttack  = 74,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 265,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_BULLETPROOF },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Brigaron"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_CHESNAUGHT_MEGA,
    #else
        .cryId = CRY_CHESNAUGHT,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_CHESNAUGHT,
        .categoryName = _("Spitzpanzer"),
        .height = 16,
        .weight = 900,
        .description = COMPOUND_STRING(
        "Es verfügt über eine verstärkte\n"
        "Rüstung und den Willen, sich um jeden\n"
        "Preis zu verteidigen. Beide sind"
        "absurd stark."),
        .frontPic = gMonFrontPic_ChesnaughtMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ChesnaughtMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ChesnaughtMega,
        .shinyPalette = gMonShinyPalette_ChesnaughtMega,
        .iconSprite = gMonIcon_ChesnaughtMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Chesnaught)
        SHADOW(0, 14, SHADOW_SIZE_XL_BATTLE_ONLY)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sChesnaughtLevelUpLearnset,
        .teachableLearnset = sChesnaughtTeachableLearnset,
        .formSpeciesIdTable = sChesnaughtFormSpeciesIdTable,
        .formChangeTable = sChesnaughtFormChangeTable,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_CHESPIN

#if P_FAMILY_FENNEKIN
    [SPECIES_FENNEKIN] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 62,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 61,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Fynx"),
        .cryId = CRY_FENNEKIN,
        .natDexNum = NATIONAL_DEX_FENNEKIN,
        .categoryName = _("Fuchs"),
        .height = 4,
        .weight = 94,
        .description = COMPOUND_STRING(
        "Beim Gehen kaut es an einem Zweig, um\n"
        "Energie zu tanken, anstatt einen Snack\n"
        "zu sich zu nehmen. Es schüchtert\n"
        "Gegner ein, indem es heiße Luft aus..."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fennekin,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Fennekin,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Fennekin,
        .shinyPalette = gMonShinyPalette_Fennekin,
        .iconSprite = gMonIcon_Fennekin,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Fennekin)
        OVERWORLD(
            sPicTable_Fennekin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fennekin,
            gShinyOverworldPalette_Fennekin
        )
        .levelUpLearnset = sFennekinLevelUpLearnset,
        .teachableLearnset = sFennekinTeachableLearnset,
        .eggMoveLearnset = sFennekinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_BRAIXEN}),
    },

    [SPECIES_BRAIXEN] =
    {
        .baseHP        = 59,
        .baseAttack    = 59,
        .baseDefense   = 58,
        .baseSpeed     = 73,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 143,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rutena"),
        .cryId = CRY_BRAIXEN,
        .natDexNum = NATIONAL_DEX_BRAIXEN,
        .categoryName = _("Fuchs"),
        .height = 10,
        .weight = 145,
        .description = COMPOUND_STRING(
        "Rutena hat einen Zweig im Schwanz\n"
        "stecken. Wenn der Zweig von seinem\n"
        "Schwanz gerissen wird, wird er durch\n"
        "Reibung in Brand gesetzt. Die Flamm..."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Braixen,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Braixen,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Braixen,
        .shinyPalette = gMonShinyPalette_Braixen,
        .iconSprite = gMonIcon_Braixen,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_M)
        FOOTPRINT(Braixen)
        OVERWORLD(
            sPicTable_Braixen,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Braixen,
            gShinyOverworldPalette_Braixen
        )
        .levelUpLearnset = sBraixenLevelUpLearnset,
        .teachableLearnset = sBraixenTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_DELPHOX}),
    },

    [SPECIES_DELPHOX] =
    {
        .baseHP        = 75,
        .baseAttack    = 69,
        .baseDefense   = 72,
        .baseSpeed     = 104,
        .baseSpAttack  = 114,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_FIRE, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 267 : 240,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Fennexis"),
        .cryId = CRY_DELPHOX,
        .natDexNum = NATIONAL_DEX_DELPHOX,
        .categoryName = _("Fuchs"),
        .height = 15,
        .weight = 390,
        .description = COMPOUND_STRING(
        "Es blickt in die Flamme an der Spitze\n"
        "seines Astes, um einen fokussierten\n"
        "Zustand zu erreichen, der es ihm\n"
        "ermöglicht, in die Zukunft zu blick..."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Delphox,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Delphox,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Delphox,
        .shinyPalette = gMonShinyPalette_Delphox,
        .iconSprite = gMonIcon_Delphox,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 14, SHADOW_SIZE_M)
        FOOTPRINT(Delphox)
        OVERWORLD(
            sPicTable_Delphox,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Delphox,
            gShinyOverworldPalette_Delphox
        )
        .levelUpLearnset = sDelphoxLevelUpLearnset,
        .teachableLearnset = sDelphoxTeachableLearnset,
        .formSpeciesIdTable = sDelphoxFormSpeciesIdTable,
        .formChangeTable = sDelphoxFormChangeTable,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_DELPHOX_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 69,
        .baseDefense   = 72,
        .baseSpeed     = 134,
        .baseSpAttack  = 159,
        .baseSpDefense = 125,
        .types = MON_TYPES(TYPE_FIRE, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 267,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Fennexis"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_DELPHOX_MEGA,
    #else
        .cryId = CRY_DELPHOX,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_DELPHOX,
        .categoryName = _("Fuchs"),
        .height = 15,
        .weight = 390,
        .description = COMPOUND_STRING(
        "Es schwingt brennende Äste, um seine\n"
        "Gegner zu blenden, bevor es sie mit\n"
        "einem riesigen Feuerball verbrennt.\n"),
        .frontPic = gMonFrontPic_DelphoxMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_DelphoxMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DelphoxMega,
        .shinyPalette = gMonShinyPalette_DelphoxMega,
        .iconSprite = gMonIcon_DelphoxMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Delphox)
        SHADOW(-1, 18, SHADOW_SIZE_L)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sDelphoxLevelUpLearnset,
        .teachableLearnset = sDelphoxTeachableLearnset,
        .formSpeciesIdTable = sDelphoxFormSpeciesIdTable,
        .formChangeTable = sDelphoxFormChangeTable,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_FENNEKIN

#if P_FAMILY_FROAKIE
    [SPECIES_FROAKIE] =
    {
        .baseHP        = 41,
        .baseAttack    = 56,
        .baseDefense   = 40,
        .baseSpeed     = 71,
        .baseSpAttack  = 62,
        .baseSpDefense = 44,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 63,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Froxy"),
        .cryId = CRY_FROAKIE,
        .natDexNum = NATIONAL_DEX_FROAKIE,
        .categoryName = _("Blubbfrosch"),
        .height = 3,
        .weight = 70,
        .description = COMPOUND_STRING(
        "Es schützt seine Haut, indem es seinen\n"
        "Körper mit Blasen bedeckt, die es von\n"
        "seiner Brust und seinem Rücken\n"
        "absondert. Trotz seiner unbekümmert..."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Froakie,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Froakie,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Froakie,
        .shinyPalette = gMonShinyPalette_Froakie,
        .iconSprite = gMonIcon_Froakie,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Froakie)
        OVERWORLD(
            sPicTable_Froakie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Froakie,
            gShinyOverworldPalette_Froakie
        )
        .levelUpLearnset = sFroakieLevelUpLearnset,
        .teachableLearnset = sFroakieTeachableLearnset,
        .eggMoveLearnset = sFroakieEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_FROGADIER}),
    },

    [SPECIES_FROGADIER] =
    {
        .baseHP        = 54,
        .baseAttack    = 63,
        .baseDefense   = 52,
        .baseSpeed     = 97,
        .baseSpAttack  = 83,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Amphizel"),
        .cryId = CRY_FROGADIER,
        .natDexNum = NATIONAL_DEX_FROGADIER,
        .categoryName = _("Blubbfrosch"),
        .height = 6,
        .weight = 109,
        .description = COMPOUND_STRING(
        "Mit präziser Kontrolle kann er mit\n"
        "Blasen bedeckte Kieselsteine ​​werfen\n"
        "und leere Dosen bis zu einer\n"
        "Entfernung von 30 Metern treffen...."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Frogadier,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Frogadier,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Frogadier,
        .shinyPalette = gMonShinyPalette_Frogadier,
        .iconSprite = gMonIcon_Frogadier,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 5, SHADOW_SIZE_M)
        FOOTPRINT(Frogadier)
        OVERWORLD(
            sPicTable_Frogadier,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Frogadier,
            gShinyOverworldPalette_Frogadier
        )
        .levelUpLearnset = sFrogadierLevelUpLearnset,
        .teachableLearnset = sFrogadierTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_GRENINJA}),
    },

    [SPECIES_GRENINJA] =
    {
        .baseHP        = 72,
        .baseAttack    = 95,
        .baseDefense   = 67,
        .baseSpeed     = 122,
        .baseSpAttack  = 103,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 265 : 239,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Quajutsu"),
        .cryId = CRY_GRENINJA,
        .natDexNum = NATIONAL_DEX_GRENINJA,
        .categoryName = _("Ninja"),
        .height = 15,
        .weight = 400,
        .description = gGreninjaPokedexText,
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Greninja,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Greninja,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Greninja,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Greninja,
        .shinyPalette = gMonShinyPalette_Greninja,
        .iconSprite = gMonIcon_Greninja,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 6, SHADOW_SIZE_L)
        FOOTPRINT(Greninja)
        OVERWORLD(
            sPicTable_Greninja,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Greninja,
            gShinyOverworldPalette_Greninja
        )
        .levelUpLearnset = sGreninjaLevelUpLearnset,
        .teachableLearnset = sGreninjaTeachableLearnset,
        .formSpeciesIdTable = sGreninjaFormSpeciesIdTable,
        .formChangeTable = sGreninjaFormChangeTable,
    },

    [SPECIES_GRENINJA_BATTLE_BOND] =
    {
        .baseHP        = 72,
        .baseAttack    = 95,
        .baseDefense   = 67,
        .baseSpeed     = 122,
        .baseSpAttack  = 103,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 265 : 239,
        .evYield_Speed = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BATTLE_BOND, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Quajutsu"),
        .cryId = CRY_GRENINJA,
        .natDexNum = NATIONAL_DEX_GRENINJA,
        .categoryName = _("Ninja"),
        .height = 15,
        .weight = 400,
        .description = gGreninjaPokedexText,
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Greninja,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames =sAnims_Greninja,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Greninja,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Greninja,
        .shinyPalette = gMonShinyPalette_Greninja,
        .iconSprite = gMonIcon_Greninja,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 6, SHADOW_SIZE_L)
        FOOTPRINT(Greninja)
        OVERWORLD(
            sPicTable_Greninja,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Greninja,
            gShinyOverworldPalette_Greninja
        )
        .levelUpLearnset = sGreninjaLevelUpLearnset,
        .teachableLearnset = sGreninjaTeachableLearnset,
        .formSpeciesIdTable = sGreninjaFormSpeciesIdTable,
        .formChangeTable = sGreninjaBattleBondFormChangeTable,
    },

    [SPECIES_GRENINJA_ASH] =
    {
        .baseHP        = 72,
        .baseAttack    = 145,
        .baseDefense   = 67,
        .baseSpeed     = 132,
        .baseSpAttack  = 153,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 320 : 288,
        .evYield_Speed = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BATTLE_BOND, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Quajutsu"),
        .cryId = CRY_GRENINJA,
        .natDexNum = NATIONAL_DEX_GRENINJA,
        .categoryName = _("Ninja"),
        .height = 15,
        .weight = 400,
        .description = gGreninjaPokedexText,
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GreninjaAsh,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_GreninjaAsh,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_GreninjaAsh,
        .shinyPalette = gMonShinyPalette_GreninjaAsh,
        .iconSprite = gMonIcon_GreninjaAsh,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Greninja)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_GreninjaAsh,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GreninjaAsh,
            gShinyOverworldPalette_GreninjaAsh
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .levelUpLearnset = sGreninjaLevelUpLearnset,
        .teachableLearnset = sGreninjaTeachableLearnset,
        .formSpeciesIdTable = sGreninjaFormSpeciesIdTable,
        .formChangeTable = sGreninjaBattleBondFormChangeTable,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_GRENINJA_MEGA] =
    {
        .baseHP        = 72,
        .baseAttack    = 125,
        .baseDefense   = 77,
        .baseSpeed     = 142,
        .baseSpAttack  = 133,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 45,
        .expYield = 265,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Quajutsu"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_GRENINJA_MEGA,
    #else
        .cryId = CRY_GRENINJA,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_GRENINJA,
        .categoryName = _("Ninja"),
        .height = 15,
        .weight = 400,
        .description = COMPOUND_STRING(
        "Dieses Pokémon dreht einen riesigen\n"
        "Shuriken mit hoher Geschwindigkeit, um\n"
        "ihn zum Schweben zu bringen, und\n"
        "klammert sich dann kopfüber daran..."),
        .frontPic = gMonFrontPic_GreninjaMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_GreninjaMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GreninjaMega,
        .shinyPalette = gMonShinyPalette_GreninjaMega,
        .iconSprite = gMonIcon_GreninjaMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Greninja)
        SHADOW(-1, 18, SHADOW_SIZE_L)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sGreninjaLevelUpLearnset,
        .teachableLearnset = sGreninjaTeachableLearnset,
        .formSpeciesIdTable = sGreninjaFormSpeciesIdTable,
        .formChangeTable = sGreninjaFormChangeTable,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_FROAKIE

#if P_FAMILY_BUNNELBY
    [SPECIES_BUNNELBY] =
    {
        .baseHP        = 38,
        .baseAttack    = 36,
        .baseDefense   = 38,
        .baseSpeed     = 57,
        .baseSpAttack  = 32,
        .baseSpDefense = 36,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 47,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_CHEEK_POUCH, ABILITY_HUGE_POWER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Scoppel"),
        .cryId = CRY_BUNNELBY,
        .natDexNum = NATIONAL_DEX_BUNNELBY,
        .categoryName = _("Baugräber"),
        .height = 4,
        .weight = 50,
        .description = COMPOUND_STRING(
        "Es hat Ohren wie Schaufeln. Das Graben\n"
        "von Löchern stärkt seine Ohren so\n"
        "sehr, dass sie mühelos dicke Wurzeln\n"
        "durchtrennen können. Scoppel hat d..."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bunnelby,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Bunnelby,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Bunnelby,
        .shinyPalette = gMonShinyPalette_Bunnelby,
        .iconSprite = gMonIcon_Bunnelby,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(3, 9, SHADOW_SIZE_S)
        FOOTPRINT(Bunnelby)
        OVERWORLD(
            sPicTable_Bunnelby,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bunnelby,
            gShinyOverworldPalette_Bunnelby
        )
        .levelUpLearnset = sBunnelbyLevelUpLearnset,
        .teachableLearnset = sBunnelbyTeachableLearnset,
        .eggMoveLearnset = sBunnelbyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_DIGGERSBY}),
    },

    [SPECIES_DIGGERSBY] =
    {
        .baseHP        = 85,
        .baseAttack    = 56,
        .baseDefense   = 77,
        .baseSpeed     = 78,
        .baseSpAttack  = 50,
        .baseSpDefense = 77,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GROUND),
        .catchRate = 127,
        .expYield = 148,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_CHEEK_POUCH, ABILITY_HUGE_POWER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Grebbit"),
        .cryId = CRY_DIGGERSBY,
        .natDexNum = NATIONAL_DEX_DIGGERSBY,
        .categoryName = _("Baugräber"),
        .height = 10,
        .weight = 424,
        .description = COMPOUND_STRING(
        "Mit seinen kräftigen Ohren zerkleinert\n"
        "er dichtes Grundgestein zu Schutt. Auf\n"
        "Baustellen kann es eine große Hilfe\n"
        "sein. Wenn es mit dem Graben fertig..."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Diggersby,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Diggersby,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Diggersby,
        .shinyPalette = gMonShinyPalette_Diggersby,
        .iconSprite = gMonIcon_Diggersby,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(8, 10, SHADOW_SIZE_M)
        FOOTPRINT(Diggersby)
        OVERWORLD(
            sPicTable_Diggersby,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Diggersby,
            gShinyOverworldPalette_Diggersby
        )
        .levelUpLearnset = sDiggersbyLevelUpLearnset,
        .teachableLearnset = sDiggersbyTeachableLearnset,
    },
#endif //P_FAMILY_BUNNELBY

#if P_FAMILY_FLETCHLING
    [SPECIES_FLETCHLING] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 43,
        .baseSpeed     = 62,
        .baseSpAttack  = 40,
        .baseSpDefense = 38,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 255,
        .expYield = 56,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_BIG_PECKS, ABILITY_NONE, ABILITY_GALE_WINGS },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Dartiri"),
        .cryId = CRY_FLETCHLING,
        .natDexNum = NATIONAL_DEX_FLETCHLING,
        .categoryName = _("Rotkehlchen"),
        .height = 3,
        .weight = 17,
        .description = COMPOUND_STRING(
        "Dieses liebenswürdige Pokémon ist\n"
        "leicht zu trainieren. Aber wenn es zum\n"
        "Kampf kommt, zeigt er seine wilde\n"
        "Seite. Es ist gnadenlos gegenüber..."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fletchling,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Fletchling,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Fletchling,
        .shinyPalette = gMonShinyPalette_Fletchling,
        .iconSprite = gMonIcon_Fletchling,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Fletchling)
        OVERWORLD(
            sPicTable_Fletchling,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fletchling,
            gShinyOverworldPalette_Fletchling
        )
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
        .levelUpLearnset = sFletchlingLevelUpLearnset,
        .teachableLearnset = sFletchlingTeachableLearnset,
        .eggMoveLearnset = sFletchlingEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 17, SPECIES_FLETCHINDER}),
    },

    [SPECIES_FLETCHINDER] =
    {
        .baseHP        = 62,
        .baseAttack    = 73,
        .baseDefense   = 55,
        .baseSpeed     = 84,
        .baseSpAttack  = 56,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .catchRate = 120,
        .expYield = 134,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_GALE_WINGS },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Dartignis"),
        .cryId = CRY_FLETCHINDER,
        .natDexNum = NATIONAL_DEX_FLETCHINDER,
        .categoryName = _("Funkenregen"),
        .height = 7,
        .weight = 160,
        .description = COMPOUND_STRING(
        "Aus seinem Schnabel stößt es Glut aus,\n"
        "die das hohe Gras in Brand setzt. Dann\n"
        "stürzt es sich auf jedes verwirrte\n"
        "Pokémon, das aus dem Gras auftaucht."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fletchinder,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Fletchinder,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Fletchinder,
        .shinyPalette = gMonShinyPalette_Fletchinder,
        .iconSprite = gMonIcon_Fletchinder,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_S)
        FOOTPRINT(Fletchinder)
        OVERWORLD(
            sPicTable_Fletchinder,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fletchinder,
            gShinyOverworldPalette_Fletchinder
        )
        .levelUpLearnset = sFletchinderLevelUpLearnset,
        .teachableLearnset = sFletchinderTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_TALONFLAME}),
    },

    [SPECIES_TALONFLAME] =
    {
        .baseHP        = 78,
        .baseAttack    = 81,
        .baseDefense   = 71,
        .baseSpeed     = 126,
        .baseSpAttack  = 74,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 175,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_GALE_WINGS },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Fiaro"),
        .cryId = CRY_TALONFLAME,
        .natDexNum = NATIONAL_DEX_TALONFLAME,
        .categoryName = _("Stichflamme"),
        .height = 12,
        .weight = 245,
        .description = COMPOUND_STRING(
        "Im Fieber eines spannenden Kampfes\n"
        "schüttet es Glut aus den Lücken\n"
        "zwischen seinen Federn und erhebt sich\n"
        "in die Luft. Es erledigt seine Beut..."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Talonflame,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 55),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Talonflame,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Talonflame,
        .shinyPalette = gMonShinyPalette_Talonflame,
        .iconSprite = gMonIcon_Talonflame,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 17, SHADOW_SIZE_M)
        FOOTPRINT(Talonflame)
        OVERWORLD(
            sPicTable_Talonflame,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Talonflame,
            gShinyOverworldPalette_Talonflame
        )
        .levelUpLearnset = sTalonflameLevelUpLearnset,
        .teachableLearnset = sTalonflameTeachableLearnset,
    },
#endif //P_FAMILY_FLETCHLING

#if P_FAMILY_SCATTERBUG
#define SCATTERBUG_SPECIES_INFO(evolution)                                                  \
    {                                                                                       \
        .baseHP        = 38,                                                                \
        .baseAttack    = 35,                                                                \
        .baseDefense   = 40,                                                                \
        .baseSpeed     = 35,                                                                \
        .baseSpAttack  = 27,                                                                \
        .baseSpDefense = 25,                                                                \
        .types = MON_TYPES(TYPE_BUG),                                                       \
        .catchRate = 255,                                                                   \
        .expYield = 40,                                                                     \
        .evYield_Defense = 1,                                                               \
        .genderRatio = PERCENT_FEMALE(50),                                                  \
        .eggCycles = 15,                                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                                                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),                                         \
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_COMPOUND_EYES, ABILITY_FRIEND_GUARD },  \
        .bodyColor = BODY_COLOR_BLACK,                                                      \
        .speciesName = _("Purmel"),                                                     \
        .cryId = CRY_SCATTERBUG,                                                            \
        .natDexNum = NATIONAL_DEX_SCATTERBUG,                                               \
        .categoryName = _("Puderinsekt"),                                                   \
        .height = 3,                                                                        \
        .weight = 25,                                                                       \
        .description = gScatterbugPokedexText,                                              \
        .pokemonScale = 530,                                                                \
        .pokemonOffset = 13,                                                                \
        .trainerScale = 256,                                                                \
        .trainerOffset = 0,                                                                 \
        .frontPic = gMonFrontPic_Scatterbug,                                                \
        .frontPicSize = MON_COORDS_SIZE(32, 48),                                            \
        .frontPicYOffset = 13,                                                              \
        .frontAnimFrames = sAnims_Scatterbug,                                               \
        .frontAnimId = ANIM_V_STRETCH,                                                      \
        .backPic = gMonBackPic_Scatterbug,                                                  \
        .backPicSize = MON_COORDS_SIZE(40, 56),                                             \
        .backPicYOffset = 12,                                                               \
        .backAnimId = BACK_ANIM_H_SLIDE,                                                    \
        .palette = gMonPalette_Scatterbug,                                                  \
        .shinyPalette = gMonShinyPalette_Scatterbug,                                        \
        .iconSprite = gMonIcon_Scatterbug,                                                  \
        .iconPalIndex = 1,                                                                  \
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,                                             \
        SHADOW(1, 1, SHADOW_SIZE_S)                                                         \
        FOOTPRINT(Scatterbug)                                                               \
        OVERWORLD(                                                                          \
            sPicTable_Scatterbug,                                                           \
            SIZE_32x32,                                                                     \
            SHADOW_SIZE_M,                                                                  \
            TRACKS_FOOT,                                                                    \
            sAnimTable_Following,                                                           \
            gOverworldPalette_Scatterbug,                                                   \
            gShinyOverworldPalette_Scatterbug                                               \
        )                                                                                   \
        .teachingType = TM_ILLITERATE,                                                      \
        .levelUpLearnset = sScatterbugLevelUpLearnset,                                      \
        .teachableLearnset = sScatterbugTeachableLearnset,                                  \
        .eggMoveLearnset = sScatterbugEggMoveLearnset,                                      \
        .formSpeciesIdTable = sScatterbugFormSpeciesIdTable,                                \
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_##evolution}),                \
    }                                                                                       \

    [SPECIES_SCATTERBUG_ICY_SNOW]    = SCATTERBUG_SPECIES_INFO(ICY_SNOW),
    [SPECIES_SCATTERBUG_POLAR]       = SCATTERBUG_SPECIES_INFO(POLAR),
    [SPECIES_SCATTERBUG_TUNDRA]      = SCATTERBUG_SPECIES_INFO(TUNDRA),
    [SPECIES_SCATTERBUG_CONTINENTAL] = SCATTERBUG_SPECIES_INFO(CONTINENTAL),
    [SPECIES_SCATTERBUG_GARDEN]      = SCATTERBUG_SPECIES_INFO(GARDEN),
    [SPECIES_SCATTERBUG_ELEGANT]     = SCATTERBUG_SPECIES_INFO(ELEGANT),
    [SPECIES_SCATTERBUG_MEADOW]      = SCATTERBUG_SPECIES_INFO(MEADOW),
    [SPECIES_SCATTERBUG_MODERN]      = SCATTERBUG_SPECIES_INFO(MODERN),
    [SPECIES_SCATTERBUG_MARINE]      = SCATTERBUG_SPECIES_INFO(MARINE),
    [SPECIES_SCATTERBUG_ARCHIPELAGO] = SCATTERBUG_SPECIES_INFO(ARCHIPELAGO),
    [SPECIES_SCATTERBUG_HIGH_PLAINS] = SCATTERBUG_SPECIES_INFO(HIGH_PLAINS),
    [SPECIES_SCATTERBUG_SANDSTORM]   = SCATTERBUG_SPECIES_INFO(SANDSTORM),
    [SPECIES_SCATTERBUG_RIVER]       = SCATTERBUG_SPECIES_INFO(RIVER),
    [SPECIES_SCATTERBUG_MONSOON]     = SCATTERBUG_SPECIES_INFO(MONSOON),
    [SPECIES_SCATTERBUG_SAVANNA]     = SCATTERBUG_SPECIES_INFO(SAVANNA),
    [SPECIES_SCATTERBUG_SUN]         = SCATTERBUG_SPECIES_INFO(SUN),
    [SPECIES_SCATTERBUG_OCEAN]       = SCATTERBUG_SPECIES_INFO(OCEAN),
    [SPECIES_SCATTERBUG_JUNGLE]      = SCATTERBUG_SPECIES_INFO(JUNGLE),
    [SPECIES_SCATTERBUG_FANCY]       = SCATTERBUG_SPECIES_INFO(FANCY),
    [SPECIES_SCATTERBUG_POKEBALL]    = SCATTERBUG_SPECIES_INFO(POKEBALL),

#define SPEWPA_SPECIES_INFO(evolution)                                          \
    {                                                                           \
        .baseHP        = 45,                                                    \
        .baseAttack    = 22,                                                    \
        .baseDefense   = 60,                                                    \
        .baseSpeed     = 29,                                                    \
        .baseSpAttack  = 27,                                                    \
        .baseSpDefense = 30,                                                    \
        .types = MON_TYPES(TYPE_BUG),                                           \
        .catchRate = 120,                                                       \
        .expYield = 75,                                                         \
        .evYield_Defense = 2,                                                   \
        .genderRatio = PERCENT_FEMALE(50),                                      \
        .eggCycles = 15,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),                             \
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_FRIEND_GUARD }, \
        .bodyColor = BODY_COLOR_BLACK,                                          \
        .speciesName = _("Puponcho"),                                             \
        .cryId = CRY_SPEWPA,                                                    \
        .natDexNum = NATIONAL_DEX_SPEWPA,                                       \
        .categoryName = _("Puderinsekt"),                                       \
        .height = 3,                                                            \
        .weight = 84,                                                           \
        .description = gSpewpaPokedexText,                                      \
        .pokemonScale = 530,                                                    \
        .pokemonOffset = 13,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        .frontPic = gMonFrontPic_Spewpa,                                        \
        .frontPicSize = MON_COORDS_SIZE(40, 48),                                \
        .frontPicYOffset = 11,                                                  \
        .frontAnimFrames = sAnims_Spewpa,                                       \
        .frontAnimId = ANIM_V_SHAKE,                                            \
        .backPic = gMonBackPic_Spewpa,                                          \
        .backPicSize = MON_COORDS_SIZE(48, 48),                                 \
        .backPicYOffset = 12,                                                   \
        .backAnimId = BACK_ANIM_H_VIBRATE,                                      \
        .palette = gMonPalette_Spewpa,                                          \
        .shinyPalette = gMonShinyPalette_Spewpa,                                \
        .iconSprite = gMonIcon_Spewpa,                                          \
        .iconPalIndex = 1,                                                      \
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,                               \
        SHADOW(0, 2, SHADOW_SIZE_M)                                             \
        FOOTPRINT(Spewpa)                                                       \
        OVERWORLD(                                                              \
            sPicTable_Spewpa,                                                   \
            SIZE_32x32,                                                         \
            SHADOW_SIZE_M,                                                      \
            TRACKS_FOOT,                                                        \
            sAnimTable_Following,                                               \
            gOverworldPalette_Spewpa,                                           \
            gShinyOverworldPalette_Spewpa                                       \
        )                                                                       \
        .teachingType = TM_ILLITERATE,                                          \
        .levelUpLearnset = sSpewpaLevelUpLearnset,                              \
        .teachableLearnset = sSpewpaTeachableLearnset,                          \
        .formSpeciesIdTable = sSpewpaFormSpeciesIdTable,                        \
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_##evolution}), \
    }

    [SPECIES_SPEWPA_ICY_SNOW]    = SPEWPA_SPECIES_INFO(ICY_SNOW),
    [SPECIES_SPEWPA_POLAR]       = SPEWPA_SPECIES_INFO(POLAR),
    [SPECIES_SPEWPA_TUNDRA]      = SPEWPA_SPECIES_INFO(TUNDRA),
    [SPECIES_SPEWPA_CONTINENTAL] = SPEWPA_SPECIES_INFO(CONTINENTAL),
    [SPECIES_SPEWPA_GARDEN]      = SPEWPA_SPECIES_INFO(GARDEN),
    [SPECIES_SPEWPA_ELEGANT]     = SPEWPA_SPECIES_INFO(ELEGANT),
    [SPECIES_SPEWPA_MEADOW]      = SPEWPA_SPECIES_INFO(MEADOW),
    [SPECIES_SPEWPA_MODERN]      = SPEWPA_SPECIES_INFO(MODERN),
    [SPECIES_SPEWPA_MARINE]      = SPEWPA_SPECIES_INFO(MARINE),
    [SPECIES_SPEWPA_ARCHIPELAGO] = SPEWPA_SPECIES_INFO(ARCHIPELAGO),
    [SPECIES_SPEWPA_HIGH_PLAINS] = SPEWPA_SPECIES_INFO(HIGH_PLAINS),
    [SPECIES_SPEWPA_SANDSTORM]   = SPEWPA_SPECIES_INFO(SANDSTORM),
    [SPECIES_SPEWPA_RIVER]       = SPEWPA_SPECIES_INFO(RIVER),
    [SPECIES_SPEWPA_MONSOON]     = SPEWPA_SPECIES_INFO(MONSOON),
    [SPECIES_SPEWPA_SAVANNA]     = SPEWPA_SPECIES_INFO(SAVANNA),
    [SPECIES_SPEWPA_SUN]         = SPEWPA_SPECIES_INFO(SUN),
    [SPECIES_SPEWPA_OCEAN]       = SPEWPA_SPECIES_INFO(OCEAN),
    [SPECIES_SPEWPA_JUNGLE]      = SPEWPA_SPECIES_INFO(JUNGLE),
    [SPECIES_SPEWPA_FANCY]       = SPEWPA_SPECIES_INFO(FANCY),
    [SPECIES_SPEWPA_POKEBALL]   = SPEWPA_SPECIES_INFO(POKEBALL),

#define VIVILLON_MISC_INFO(form, color, iconPal)                                            \
        .baseHP        = 80,                                                                \
        .baseAttack    = 52,                                                                \
        .baseDefense   = 50,                                                                \
        .baseSpeed     = 89,                                                                \
        .baseSpAttack  = 90,                                                                \
        .baseSpDefense = 50,                                                                \
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),                                          \
        .catchRate = 45,                                                                    \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 206 : 185,                            \
        .evYield_HP = 1,                                                                    \
        .evYield_Speed = 1,                                                                 \
        .evYield_SpAttack = 1,                                                              \
        .genderRatio = PERCENT_FEMALE(50),                                                  \
        .eggCycles = 15,                                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                                                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),                                         \
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_COMPOUND_EYES, ABILITY_FRIEND_GUARD },  \
        .bodyColor = color,                                                                 \
        .speciesName = _("Vivillon"),                                                       \
        .cryId = CRY_VIVILLON,                                                              \
        .natDexNum = NATIONAL_DEX_VIVILLON,                                                 \
        .categoryName = _("Flügelstaub"),                                                         \
        .height = 12,                                                                       \
        .weight = 170,                                                                      \
        .pokemonScale = 282,                                                                \
        .pokemonOffset = 4,                                                                 \
        .trainerScale = 256,                                                                \
        .trainerOffset = 0,                                                                 \
        .frontPic = gMonFrontPic_Vivillon ##form,                                           \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                                            \
        .frontPicYOffset = 0,                                                               \
        .frontAnimFrames = sAnims_Vivillon,                                                 \
        .frontAnimId = ANIM_ZIGZAG_SLOW,                                                    \
        .enemyMonElevation = 9,                                                             \
        .backPic = gMonBackPic_Vivillon ##form,                                             \
        .backPicSize = MON_COORDS_SIZE(64, 64),                                             \
        .backPicYOffset = 0,                                                                \
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,                                    \
        .palette = gMonPalette_Vivillon ##form,                                             \
        .shinyPalette = gMonShinyPalette_Vivillon ##form,                                   \
        .iconSprite = gMonIcon_Vivillon ##form,                                             \
        .iconPalIndex = iconPal,                                                            \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                             \
        SHADOW(0, 20, SHADOW_SIZE_M)                                                        \
        FOOTPRINT(Vivillon)                                                                 \
        OVERWORLD(                                                                          \
            sPicTable_Vivillon ##form,                                                      \
            SIZE_32x32,                                                                     \
            SHADOW_SIZE_M,                                                                  \
            TRACKS_FOOT,                                                                    \
            sAnimTable_Following,                                                           \
            gOverworldPalette_Vivillon ##form,                                              \
            gShinyOverworldPalette_Vivillon ##form                                          \
        )                                                                                   \
        .levelUpLearnset = sVivillonLevelUpLearnset,                                        \
        .teachableLearnset = sVivillonTeachableLearnset,                                    \
        .formSpeciesIdTable = sVivillonFormSpeciesIdTable

    [SPECIES_VIVILLON_ICY_SNOW] =
    {
        VIVILLON_MISC_INFO(IcySnow, BODY_COLOR_WHITE, 0),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "kalten Ländern. Es verstreut im Kam..."),
    },

    [SPECIES_VIVILLON_POLAR] =
    {
        VIVILLON_MISC_INFO(Polar, BODY_COLOR_BLUE, 0),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "verschneiten Gebieten. Es verstreut..."),
    },

    [SPECIES_VIVILLON_TUNDRA] =
    {
        VIVILLON_MISC_INFO(Tundra, BODY_COLOR_BLUE, 0),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "Ländern mit starker Kälte. Es..."),
    },

    [SPECIES_VIVILLON_CONTINENTAL] =
    {
        VIVILLON_MISC_INFO(Continental, BODY_COLOR_YELLOW, 2),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "Ländern mit weiten Weiten. Es..."),
    },

    [SPECIES_VIVILLON_GARDEN] =
    {
        VIVILLON_MISC_INFO(Garden, BODY_COLOR_GREEN, 1),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "grünen Gebieten. Es verstreut im Ka..."),
    },

    [SPECIES_VIVILLON_ELEGANT] =
    {
        VIVILLON_MISC_INFO(Elegant, BODY_COLOR_PURPLE, 0),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "Ländern mit unterschiedlichen..."),
    },

    [SPECIES_VIVILLON_MEADOW] =
    {
        VIVILLON_MISC_INFO(Meadow, BODY_COLOR_PINK, 0),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "Ländern, in denen Blumen blühen. Es..."),
    },

    [SPECIES_VIVILLON_MODERN] =
    {
        VIVILLON_MISC_INFO(Modern, BODY_COLOR_RED, 2),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "sonnenverwöhnten Ländern. Es verstr..."),
    },

    [SPECIES_VIVILLON_MARINE] =
    {
        VIVILLON_MISC_INFO(Marine, BODY_COLOR_BLUE, 0),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "Ländern mit Meeresbrise. Es verstre..."),
    },

    [SPECIES_VIVILLON_ARCHIPELAGO] =
    {
        VIVILLON_MISC_INFO(Archipelago, BODY_COLOR_BROWN, 0),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form kommt von\n"
        "Orten mit vielen Inseln. Es verstre..."),
    },

    [SPECIES_VIVILLON_HIGH_PLAINS] =
    {
        VIVILLON_MISC_INFO(HighPlains, BODY_COLOR_BROWN, 0),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "Ländern mit wenig Regen. Es verstre..."),
    },

    [SPECIES_VIVILLON_SANDSTORM] =
    {
        VIVILLON_MISC_INFO(Sandstorm, BODY_COLOR_BROWN, 1),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "ausgedörrtem Land. Es verstreut im..."),
    },

    [SPECIES_VIVILLON_RIVER] =
    {
        VIVILLON_MISC_INFO(River, BODY_COLOR_BROWN, 2),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "Ländern, in denen große Flüsse..."),
    },

    [SPECIES_VIVILLON_MONSOON] =
    {
        VIVILLON_MISC_INFO(Monsoon, BODY_COLOR_GRAY, 0),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "Ländern mit starken Niederschlägen...."),
    },

    [SPECIES_VIVILLON_SAVANNA] =
    {
        VIVILLON_MISC_INFO(Savanna, BODY_COLOR_GREEN, 0),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "Ländern mit tropischem Klima. Es..."),
    },

    [SPECIES_VIVILLON_SUN] =
    {
        VIVILLON_MISC_INFO(Sun, BODY_COLOR_RED, 0),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "lichtdurchfluteten Ländern. Es..."),
    },

    [SPECIES_VIVILLON_OCEAN] =
    {
        VIVILLON_MISC_INFO(Ocean, BODY_COLOR_RED, 0),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "Ländern mit ewigem Sommer. Es..."),
    },

    [SPECIES_VIVILLON_JUNGLE] =
    {
        VIVILLON_MISC_INFO(Jungle, BODY_COLOR_GREEN, 0),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "Ländern mit tropischen Regenwäldern..."),
    },

    [SPECIES_VIVILLON_FANCY] =
    {
        VIVILLON_MISC_INFO(Fancy, BODY_COLOR_PINK, 1),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "einem mysteriösen Land. Es verstreu..."),
    },

    [SPECIES_VIVILLON_POKEBALL] =
    {
        VIVILLON_MISC_INFO(PokeBall, BODY_COLOR_RED, 2),
        .description = COMPOUND_STRING(
        "Sein Muster hängt vom Klima und der\n"
        "Topographie des Landes ab, in dem es\n"
        "geboren wurde. Diese Form stammt aus\n"
        "einem besonderen Land. Es verstreut..."),
    },
#endif //P_FAMILY_SCATTERBUG

#if P_FAMILY_LITLEO
    [SPECIES_LITLEO] =
    {
        .baseHP        = 62,
        .baseAttack    = 50,
        .baseDefense   = 58,
        .baseSpeed     = 72,
        .baseSpAttack  = 73,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_FIRE, TYPE_NORMAL),
        .catchRate = 220,
        .expYield = 74,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(87.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RIVALRY, ABILITY_UNNERVE, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Leufeo"),
        .cryId = CRY_LITLEO,
        .natDexNum = NATIONAL_DEX_LITLEO,
        .categoryName = _("Junglöwe"),
        .height = 6,
        .weight = 135,
        .description = COMPOUND_STRING(
        "Sie machen sich auf den Weg von ihrem\n"
        "Stolz und leben alleine, um stärker zu\n"
        "werden. Diese heißblütigen Pokémon\n"
        "beginnen schnell einen Kampf."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Litleo,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Litleo,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Litleo,
        .shinyPalette = gMonShinyPalette_Litleo,
        .iconSprite = gMonIcon_Litleo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Litleo)
        OVERWORLD(
            sPicTable_Litleo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Litleo,
            gShinyOverworldPalette_Litleo
        )
        .levelUpLearnset = sLitleoLevelUpLearnset,
        .teachableLearnset = sLitleoTeachableLearnset,
        .eggMoveLearnset = sLitleoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_PYROAR}),
    },

    [SPECIES_PYROAR] =
    {
        .baseHP        = 86,
        .baseAttack    = 68,
        .baseDefense   = 72,
        .baseSpeed     = 106,
        .baseSpAttack  = 109,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_FIRE, TYPE_NORMAL),
        .catchRate = 65,
        .expYield = 177,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(87.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RIVALRY, ABILITY_UNNERVE, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pyroleo"),
        .cryId = CRY_PYROAR,
        .natDexNum = NATIONAL_DEX_PYROAR,
        .categoryName = _("Monarch"),
        .height = 15,
        .weight = 815,
        .description = COMPOUND_STRING(
        "Das Männchen mit der größten\n"
        "Feuermähne ist der Anführer des\n"
        "Rudels. Die Weibchen beschützen die\n"
        "Jungen des Rudels. Sie bedrohen jed..."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pyroar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Pyroar,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Pyroar,
        .shinyPalette = gMonShinyPalette_Pyroar,
        .iconSprite = gMonIcon_Pyroar,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PyroarF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_PyroarF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .iconSpriteFemale = gMonIcon_PyroarF,
        .iconPalIndexFemale = 2,
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Pyroar)
        OVERWORLD(
            sPicTable_Pyroar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pyroar,
            gShinyOverworldPalette_Pyroar
        )
        OVERWORLD_FEMALE(
            sPicTable_PyroarF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sPyroarLevelUpLearnset,
        .teachableLearnset = sPyroarTeachableLearnset,
        .formSpeciesIdTable = sPyroarFormSpeciesIdTable,
        .formChangeTable = sPyroarFormChangeTable,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_PYROAR_MEGA] =
    {
        .baseHP        = 86,
        .baseAttack    = 88,
        .baseDefense   = 92,
        .baseSpeed     = 126,
        .baseSpAttack  = 129,
        .baseSpDefense = 86,
        .types = MON_TYPES(TYPE_FIRE, TYPE_NORMAL),
        .catchRate = 65,
        .expYield = 177,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(87.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RIVALRY, ABILITY_UNNERVE, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pyroleo"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_PYROAR_MEGA,
    #else
        .cryId = CRY_PYROAR,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_PYROAR,
        .categoryName = _("Monarch"),
        .height = 15,
        .weight = 933,
        .description = COMPOUND_STRING(
        "Dieses Pokémon spuckt Flammen, die\n"
        "heißer als 18.000 Grad Fahrenheit\n"
        "sind. Es schwingt seine prächtige,\n"
        "leuchtende Mähne, während es seine..."),
        .frontPic = gMonFrontPic_PyroarMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PyroarMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PyroarMega,
        .shinyPalette = gMonShinyPalette_PyroarMega,
        .iconSprite = gMonIcon_PyroarMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Pyroar)
        SHADOW(-1, 12, SHADOW_SIZE_L)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sPyroarLevelUpLearnset,
        .teachableLearnset = sPyroarTeachableLearnset,
        .formSpeciesIdTable = sPyroarFormSpeciesIdTable,
        .formChangeTable = sPyroarFormChangeTable,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_LITLEO

#if P_FAMILY_FLABEBE
#define FLABEBE_MISC_INFO(Form, FORM, iconPal)                                  \
        .baseHP        = 44,                                                    \
        .baseAttack    = 38,                                                    \
        .baseDefense   = 39,                                                    \
        .baseSpeed     = 42,                                                    \
        .baseSpAttack  = 61,                                                    \
        .baseSpDefense = 79,                                                    \
        .types = MON_TYPES(TYPE_FAIRY),                                         \
        .catchRate = 225,                                                       \
        .expYield = 61,                                                         \
        .evYield_SpDefense = 1,                                                 \
        .genderRatio = MON_FEMALE,                                              \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),                           \
        .abilities = { ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS },  \
        .bodyColor = BODY_COLOR_WHITE,                                          \
        .speciesName = _("Flabébé"),                                            \
        .cryId = CRY_FLABEBE,                                                   \
        .natDexNum = NATIONAL_DEX_FLABEBE,                                      \
        .categoryName = _("Einblütler"),                                      \
        .height = 1,                                                            \
        .weight = 1,                                                            \
        .pokemonScale = 682,                                                    \
        .pokemonOffset = 24,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        .frontPic = gMonFrontPic_Flabebe,                                       \
        .frontPicSize = MON_COORDS_SIZE(48, 56),                                \
        .frontPicYOffset = 6,                                                   \
        .frontAnimFrames = sAnims_Flabebe,                                      \
        .frontAnimId = ANIM_H_SLIDE_SLOW,                                       \
        .enemyMonElevation = 6,                                                 \
        .backPic = gMonBackPic_Flabebe,                                         \
        .backPicSize = MON_COORDS_SIZE(64, 40),                                 \
        .backPicYOffset = 12,                                                   \
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,                              \
        .palette = gMonPalette_Flabebe##Form,                                   \
        .shinyPalette = gMonShinyPalette_Flabebe##Form,                         \
        .iconSprite = gMonIcon_Flabebe##Form,                                   \
        .iconPalIndex = iconPal,                                                \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                 \
        SHADOW(0, 11, SHADOW_SIZE_S)                                            \
        FOOTPRINT(Flabebe)                                                      \
        OVERWORLD(                                                              \
            sPicTable_Flabebe##Form,                                            \
            SIZE_32x32,                                                         \
            SHADOW_SIZE_M,                                                      \
            TRACKS_FOOT,                                                        \
            sAnimTable_Following,                                               \
            gOverworldPalette_Flabebe##Form,                                    \
            gShinyOverworldPalette_Flabebe##Form                                \
        )                                                                       \
        .levelUpLearnset = sFlabebeLevelUpLearnset,                             \
        .teachableLearnset = sFlabebeTeachableLearnset,                         \
        .eggMoveLearnset = sFlabebeEggMoveLearnset,                             \
        .formSpeciesIdTable = sFlabebeFormSpeciesIdTable,                       \
        .evolutions = EVOLUTION({EVO_LEVEL, 19, SPECIES_FLOETTE_ ##FORM})

    [SPECIES_FLABEBE_RED] =
    {
        FLABEBE_MISC_INFO(Red, RED, 1),
        .description = COMPOUND_STRING(
        "Dieses Flabébé reitet auf einer roten\n"
        "Blume. Unmittelbar nach der Geburt\n"
        "beginnt dieses Pokémon herumzufliegen\n"
        "auf der Suche nach einer Blume, die..."),
    },

    [SPECIES_FLABEBE_YELLOW] =
    {
        FLABEBE_MISC_INFO(Yellow, YELLOW, 1),
        .description = COMPOUND_STRING(
        "Es setzt eine Vielzahl von Bewegungen\n"
        "frei, indem es die in den Blumen\n"
        "verborgene Kraft zum Vorschein bringt.\n"
        "Dieses Pokémon mag besonders gelbe..."),
    },

    [SPECIES_FLABEBE_ORANGE] =
    {
        FLABEBE_MISC_INFO(Orange, ORANGE, 0),
        .description = COMPOUND_STRING(
        "Es erhält Kraft durch Blumen und gibt\n"
        "ihnen im Gegenzug einen Teil seiner\n"
        "Energie zurück. Dieses Pokémon mag am\n"
        "liebsten orangefarbene Blumen."),
    },

    [SPECIES_FLABEBE_BLUE]   =
    {
        FLABEBE_MISC_INFO(Blue, BLUE, 0),
        .description = COMPOUND_STRING(
        "Dieses Pokémon mag blaue Blumen am\n"
        "liebsten. Es schwebt mit der von\n"
        "seiner Blüte ausgehenden Kraft nach\n"
        "oben und tanzt leichtfüßig durch di..."),
    },

    [SPECIES_FLABEBE_WHITE]  =
    {
        FLABEBE_MISC_INFO(White, WHITE, 1),
        .description = COMPOUND_STRING(
        "Wenn es Abend wird, sucht es nach\n"
        "einem Ort, an dem Blumen in der\n"
        "gleichen weißen Farbe blühen wie es\n"
        "selbst, und dann schläft es ein."),
    },

#define FLOETTE_MISC_INFO(form, FORM, iconPal)                                  \
        .types = MON_TYPES(TYPE_FAIRY),                                         \
        .catchRate = 120,                                                       \
        .evYield_SpDefense = 2,                                                 \
        .genderRatio = MON_FEMALE,                                              \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .abilities = { ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS },  \
        .bodyColor = BODY_COLOR_WHITE,                                          \
        .speciesName = _("Floette"),                                            \
        .natDexNum = NATIONAL_DEX_FLOETTE,                                      \
        .categoryName = _("Einblütler"),                                      \
        .height = 2,                                                            \
        .weight = 9,                                                            \
        .pokemonScale = 682,                                                    \
        .pokemonOffset = 24,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        .frontAnimFrames = sAnims_Floette,                                      \
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,                                     \
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,                              \
        .palette = gMonPalette_Floette ##form,                                  \
        .shinyPalette = gMonShinyPalette_Floette ##form,                        \
        .iconSprite = gMonIcon_Floette##form,                                   \
        .iconPalIndex = iconPal,                                                \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                 \
        SHADOW(-3, 12, SHADOW_SIZE_S)                                           \
        FOOTPRINT(Floette)                                                      \
        OVERWORLD(                                                              \
            sPicTable_Floette ##form,                                           \
            SIZE_32x32,                                                         \
            SHADOW_SIZE_M,                                                      \
            TRACKS_FOOT,                                                        \
            sAnimTable_Following_Asym,                                          \
            gOverworldPalette_Floette ##form,                                   \
            gShinyOverworldPalette_Floette ##form                               \
        )                                                                       \
        .formSpeciesIdTable = sFloetteFormSpeciesIdTable

#define FLOETTE_NORMAL_INFO(form, FORM, iconPal)                                                \
        .baseHP        = 54,                                                                    \
        .baseAttack    = 45,                                                                    \
        .baseDefense   = 47,                                                                    \
        .baseSpeed     = 52,                                                                    \
        .baseSpAttack  = 75,                                                                    \
        .baseSpDefense = 98,                                                                    \
        .expYield = 130,                                                                        \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),                                           \
        .cryId = CRY_FLOETTE,                                                                   \
        .frontPic = gMonFrontPic_Floette,                                                       \
        .frontPicSize = MON_COORDS_SIZE(48, 64),                                                \
        .frontPicYOffset = 3,                                                                   \
        .enemyMonElevation = 4,                                                                 \
        .backPic = gMonBackPic_Floette,                                                         \
        .backPicSize = MON_COORDS_SIZE(64, 64),                                                 \
        .backPicYOffset = 2,                                                                    \
        .levelUpLearnset = sFloetteLevelUpLearnset,                                             \
        .teachableLearnset = sFloetteTeachableLearnset,                                         \
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_FLORGES_ ##FORM}),\
        FLOETTE_MISC_INFO(form, FORM, iconPal)

    [SPECIES_FLOETTE_RED] =
    {
        FLOETTE_NORMAL_INFO(Red, RED, 1),
        .description = COMPOUND_STRING(
        "Dieses Pokémon nutzt rote\n"
        "Lichtwellenlängen, um seine eigene\n"
        "Energie in Blumen zu gießen und deren\n"
        "latentes Potenzial zu entfalten."),
    },

    [SPECIES_FLOETTE_YELLOW] =
    {
        FLOETTE_NORMAL_INFO(Yellow, YELLOW, 1),
        .description = COMPOUND_STRING(
        "Dieses Pokémon kann die in gelben\n"
        "Blumen verborgene Kraft hervorholen.\n"
        "Diese Kraft wird dann zu den\n"
        "Bewegungen, mit denen Floette sich..."),
    },

    [SPECIES_FLOETTE_ORANGE] =
    {
        FLOETTE_NORMAL_INFO(Orange, ORANGE, 0),
        .description = COMPOUND_STRING(
        "Im Vergleich zu Blumen anderer Farben\n"
        "kann dieses Pokémon die meiste Kraft\n"
        "entfalten, wenn es mit orangefarbenen\n"
        "Blumen synchronisiert ist."),
    },

    [SPECIES_FLOETTE_BLUE] =
    {
        FLOETTE_NORMAL_INFO(Blue, BLUE, 0),
        .description = COMPOUND_STRING(
        "Immer wenn dieses Pokémon verwelkte\n"
        "Blütenpflanzen findet, bringt es diese\n"
        "in sein Revier zurück und kümmert sich\n"
        "um sie."),
    },

    [SPECIES_FLOETTE_WHITE] =
    {
        FLOETTE_NORMAL_INFO(White, WHITE, 1),
        .description = COMPOUND_STRING(
        "Wenn es jemanden entdeckt, der ein\n"
        "Blumenbeet durcheinander bringt, wird\n"
        "es ihn gnadenlos angreifen. Diese\n"
        "Floette eignet sich besonders gut f..."),
    },

    [SPECIES_FLOETTE_ETERNAL] =
    {
        FLOETTE_MISC_INFO(Eternal, ETERNAL, 0),
        .baseHP        = 74,
        .baseAttack    = 65,
        .baseDefense   = 67,
        .baseSpeed     = 92,
        .baseSpAttack  = 125,
        .baseSpDefense = 128,
        .expYield = 243,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .cryId = CRY_FLOETTE_ETERNAL,
        .description = COMPOUND_STRING(
        "Die Blume, die es hält, blüht\n"
        "nirgendwo mehr. Es wird auch\n"
        "angenommen, dass es furchterregende\n"
        "Kräfte enthält."),
        .frontPic = gMonFrontPic_FloetteEternal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_FloetteEternal,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .levelUpLearnset = sFloetteEternalLevelUpLearnset,
        .teachableLearnset = sFloetteEternalTeachableLearnset,
        .formChangeTable = sFloetteEternalFormChangeTable,
    },

#define FLORGES_MISC_INFO(Form, iconPal)                                        \
        .baseHP        = 78,                                                    \
        .baseAttack    = 65,                                                    \
        .baseDefense   = 68,                                                    \
        .baseSpeed     = 75,                                                    \
        .baseSpAttack  = 112,                                                   \
        .baseSpDefense = 154,                                                   \
        .types = MON_TYPES(TYPE_FAIRY),                                         \
        .catchRate = 45,                                                        \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 276 : 248,                \
        .evYield_SpDefense = 3,                                                 \
        .genderRatio = MON_FEMALE,                                              \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),                           \
        .abilities = { ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS },  \
        .bodyColor = BODY_COLOR_WHITE,                                          \
        .speciesName = _("Florges"),                                            \
        .cryId = CRY_FLORGES,                                                   \
        .natDexNum = NATIONAL_DEX_FLORGES,                                      \
        .categoryName = _("Garten"),                                            \
        .height = 11,                                                           \
        .weight = 100,                                                          \
        .pokemonScale = 320,                                                    \
        .pokemonOffset = 7,                                                     \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        .frontPic = gMonFrontPic_Florges,                                       \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                                \
        .frontPicYOffset = 0,                                                   \
        .frontAnimFrames = sAnims_Florges,                                      \
        .frontAnimId = ANIM_V_SLIDE_SLOW,                                       \
        .backPic = gMonBackPic_Florges,                                         \
        .backPicSize = MON_COORDS_SIZE(64, 48),                                 \
        .backPicYOffset = 9,                                                    \
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,                            \
        .palette = gMonPalette_Florges##Form,                                   \
        .shinyPalette = gMonShinyPalette_Florges##Form,                         \
        .iconSprite = gMonIcon_Florges##Form,                                   \
        .iconPalIndex = iconPal,                                                \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                 \
        SHADOW(-5, 15, SHADOW_SIZE_M)                                           \
        FOOTPRINT(Florges)                                                      \
        OVERWORLD(                                                              \
            sPicTable_Florges ##Form,                                           \
            SIZE_32x32,                                                         \
            SHADOW_SIZE_M,                                                      \
            TRACKS_FOOT,                                                        \
            sAnimTable_Following,                                               \
            gOverworldPalette_Florges ##Form,                                   \
            gShinyOverworldPalette_Florges ##Form                               \
        )                                                                       \
        .levelUpLearnset = sFlorgesLevelUpLearnset,                             \
        .teachableLearnset = sFlorgesTeachableLearnset,                         \
        .formSpeciesIdTable = sFlorgesFormSpeciesIdTable

    [SPECIES_FLORGES_RED] =
    {
        FLORGES_MISC_INFO(Red, 0),
        .description = COMPOUND_STRING(
        "Dieses Pokémon legt in seinem Revier\n"
        "einen beeindruckenden Blumengarten an.\n"
        "Es schöpft die Kraft der roten Blumen\n"
        "um seinen Hals aus."),
    },

    [SPECIES_FLORGES_YELLOW] =
    {
        FLORGES_MISC_INFO(Yellow, 1),
        .description = COMPOUND_STRING(
        "Dieses Pokémon kämpft, indem es die\n"
        "Kraft gelber Blumen nutzt. Es bestraft\n"
        "rücksichtslos jeden, der blühende\n"
        "Pflanzen mit Füßen tritt."),
    },

    [SPECIES_FLORGES_ORANGE] =
    {
        FLORGES_MISC_INFO(Orange, 0),
        .description = COMPOUND_STRING(
        "In längst vergangenen Zeiten haben\n"
        "Burgverwalter Florges liebevoll dazu\n"
        "erzogen, sich um die exquisiten Gärten\n"
        "ihrer Burgen zu kümmern."),
    },

    [SPECIES_FLORGES_BLUE] =
    {
        FLORGES_MISC_INFO(Blue, 0),
        .description = COMPOUND_STRING(
        "Blaue Pigmente waren in der\n"
        "Vergangenheit enorm teuer, daher sind\n"
        "Gemälde mit blauen Florges sehr"
        "wertvoll."),
    },

    [SPECIES_FLORGES_WHITE] =
    {
        FLORGES_MISC_INFO(White, 0),
        .description = COMPOUND_STRING(
        "Ein Blumengarten, der von einem weiß\n"
        "blühenden Florges angelegt wurde, wird\n"
        "wunderschön mit blühenden Pflanzen in\n"
        "vielen verschiedenen Farben..."),
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_FLOETTE_MEGA] =
    {
        .baseHP        = 74,
        .baseAttack    = 85,
        .baseDefense   = 87,
        .baseSpeed     = 102,
        .baseSpAttack  = 155,
        .baseSpDefense = 148,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 120,
        .expYield = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Floette"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_FLOETTE_MEGA,
    #else
        .cryId = CRY_FLOETTE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_FLOETTE,
        .categoryName = _("Einblütler"),
        // height
        // weight
        .description = COMPOUND_STRING(
        "Die Ewige Blume hat die gesamte\n"
        "Energie von Mega Evolution absorbiert.\n"
        "Die Blume greift nun selbstständig\n"
        "Feinde an."),
        .frontPic = gMonFrontPic_FloetteMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_FloetteMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_FloetteMega,
        .shinyPalette = gMonShinyPalette_FloetteMega,
        .iconSprite = gMonIcon_FloetteMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Floette)
        SHADOW(10, 10, SHADOW_SIZE_S)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sFloetteEternalLevelUpLearnset,
        .teachableLearnset = sFloetteEternalTeachableLearnset,
        .formSpeciesIdTable = sFloetteFormSpeciesIdTable,
        .formChangeTable = sFloetteEternalFormChangeTable,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_FLABEBE

#if P_FAMILY_SKIDDO
    [SPECIES_SKIDDO] =
    {
        .baseHP        = 66,
        .baseAttack    = 65,
        .baseDefense   = 48,
        .baseSpeed     = 52,
        .baseSpAttack  = 62,
        .baseSpDefense = 57,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_NONE, ABILITY_GRASS_PELT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Mähikel"),
        .cryId = CRY_SKIDDO,
        .natDexNum = NATIONAL_DEX_SKIDDO,
        .categoryName = _("Ritt"),
        .height = 9,
        .weight = 310,
        .description = COMPOUND_STRING(
        "Wenn es Sonne und Wasser hat, muss es\n"
        "nicht fressen, da es aus den Blättern\n"
        "auf seinem Rücken Energie gewinnen\n"
        "kann. Es hat ein ruhiges Gemüt."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Skiddo,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Skiddo,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Skiddo,
        .shinyPalette = gMonShinyPalette_Skiddo,
        .iconSprite = gMonIcon_Skiddo,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 7, SHADOW_SIZE_M)
        FOOTPRINT(Skiddo)
        OVERWORLD(
            sPicTable_Skiddo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Skiddo,
            gShinyOverworldPalette_Skiddo
        )
        .levelUpLearnset = sSkiddoLevelUpLearnset,
        .teachableLearnset = sSkiddoTeachableLearnset,
        .eggMoveLearnset = sSkiddoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_GOGOAT}),
    },

    [SPECIES_GOGOAT] =
    {
        .baseHP        = 123,
        .baseAttack    = 100,
        .baseDefense   = 62,
        .baseSpeed     = 68,
        .baseSpAttack  = 97,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 186,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_NONE, ABILITY_GRASS_PELT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Chevrumm"),
        .cryId = CRY_GOGOAT,
        .natDexNum = NATIONAL_DEX_GOGOAT,
        .categoryName = _("Ritt"),
        .height = 17,
        .weight = 910,
        .description = COMPOUND_STRING(
        "Es kann erkennen, wie sich sein\n"
        "Trainer fühlt, indem es seine Hörner\n"
        "leicht verändert. Dieser einfühlsame\n"
        "Sinn lässt sie wie ein einziges Wes..."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Gogoat,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Gogoat,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Gogoat,
        .shinyPalette = gMonShinyPalette_Gogoat,
        .iconSprite = gMonIcon_Gogoat,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gogoat)
        OVERWORLD(
            sPicTable_Gogoat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gogoat,
            gShinyOverworldPalette_Gogoat
        )
        .levelUpLearnset = sGogoatLevelUpLearnset,
        .teachableLearnset = sGogoatTeachableLearnset,
    },
#endif //P_FAMILY_SKIDDO

#if P_FAMILY_PANCHAM
    [SPECIES_PANCHAM] =
    {
        .baseHP        = 67,
        .baseAttack    = 82,
        .baseDefense   = 62,
        .baseSpeed     = 43,
        .baseSpAttack  = 46,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 220,
        .expYield = 70,
        .evYield_Attack = 1,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_IRON_FIST, ABILITY_MOLD_BREAKER, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pam-Pam"),
        .cryId = CRY_PANCHAM,
        .natDexNum = NATIONAL_DEX_PANCHAM,
        .categoryName = _("Verspielt"),
        .height = 6,
        .weight = 80,
        .description = COMPOUND_STRING(
        "Das Blatt im Mund hat keinen Sinn,\n"
        "abgesehen von dem Versuch, cool\n"
        "auszusehen. Es ist boshaft und daher\n"
        "nicht für unerfahrene Trainer..."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pancham,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Pancham,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Pancham,
        .shinyPalette = gMonShinyPalette_Pancham,
        .iconSprite = gMonIcon_Pancham,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Pancham)
        OVERWORLD(
            sPicTable_Pancham,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pancham,
            gShinyOverworldPalette_Pancham
        )
        .levelUpLearnset = sPanchamLevelUpLearnset,
        .teachableLearnset = sPanchamTeachableLearnset,
        .eggMoveLearnset = sPanchamEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_PANGORO, CONDITIONS({IF_TYPE_IN_PARTY, TYPE_DARK})}),
    },

    [SPECIES_PANGORO] =
    {
        .baseHP        = 95,
        .baseAttack    = 124,
        .baseDefense   = 78,
        .baseSpeed     = 58,
        .baseSpAttack  = 69,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DARK),
        .catchRate = 65,
        .expYield = 173,
        .evYield_Attack = 2,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_IRON_FIST, ABILITY_MOLD_BREAKER, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pandagro"),
        .cryId = CRY_PANGORO,
        .natDexNum = NATIONAL_DEX_PANGORO,
        .categoryName = _("Gaunerblick"),
        .height = 21,
        .weight = 1360,
        .description = COMPOUND_STRING(
        "Es verfügt über eine hervorragende\n"
        "körperliche Stärke. Wer Pangoros\n"
        "Trainer werden möchte, hat keine\n"
        "andere Wahl, als sich mit seinen..."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Pangoro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Pangoro,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Pangoro,
        .shinyPalette = gMonShinyPalette_Pangoro,
        .iconSprite = gMonIcon_Pangoro,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Pangoro)
        OVERWORLD(
            sPicTable_Pangoro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pangoro,
            gShinyOverworldPalette_Pangoro
        )
        .levelUpLearnset = sPangoroLevelUpLearnset,
        .teachableLearnset = sPangoroTeachableLearnset,
    },
#endif //P_FAMILY_PANCHAM

#if P_FAMILY_FURFROU
#define FURFROU_MISC_INFO(_form, _noFlip, frontWidth, frontYOffset, backWidth, backYOffset, _iconIdx, _overworldAnim)   \
    {                                                                                                                   \
        .baseHP        = 75,                                                                                            \
        .baseAttack    = 80,                                                                                            \
        .baseDefense   = 60,                                                                                            \
        .baseSpeed     = 102,                                                                                           \
        .baseSpAttack  = 65,                                                                                            \
        .baseSpDefense = 90,                                                                                            \
        .types = MON_TYPES(TYPE_NORMAL),                                                                                \
        .catchRate = 160,                                                                                               \
        .expYield = 165,                                                                                                \
        .evYield_Speed = 1,                                                                                             \
        .genderRatio = PERCENT_FEMALE(50),                                                                              \
        .eggCycles = 20,                                                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                                                               \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),                                                                   \
        .abilities = { ABILITY_FUR_COAT, ABILITY_NONE, ABILITY_NONE },                                                  \
        .bodyColor = BODY_COLOR_WHITE,                                                                                  \
        .noFlip = _noFlip,                                                                                              \
        .speciesName = _("Coiffwaff"),                                                                                    \
        .cryId = CRY_FURFROU,                                                                                           \
        .natDexNum = NATIONAL_DEX_FURFROU,                                                                              \
        .categoryName = _("Pudel"),                                                                                    \
        .height = 12,                                                                                                   \
        .weight = 280,                                                                                                  \
        .description = gFurfrouPokedexText,                                                                             \
        .pokemonScale = 282,                                                                                            \
        .pokemonOffset = 4,                                                                                             \
        .trainerScale = 256,                                                                                            \
        .trainerOffset = 0,                                                                                             \
        .frontPic = gMonFrontPic_Furfrou##_form,                                                                        \
        .frontPicSize = MON_COORDS_SIZE(frontWidth, 64),                                                                \
        .frontPicYOffset = frontYOffset,                                                                                \
        .frontAnimFrames = sAnims_Furfrou,                                                                              \
        .frontAnimId = ANIM_H_SLIDE,                                                                                    \
        .backPic = gMonBackPic_Furfrou##_form,                                                                          \
        .backPicSize = MON_COORDS_SIZE(backWidth, 64),                                                                  \
        .backPicYOffset = backYOffset,                                                                                  \
        .backAnimId = BACK_ANIM_V_STRETCH,                                                                              \
        .palette = gMonPalette_Furfrou##_form,                                                                          \
        .shinyPalette = gMonShinyPalette_Furfrou##_form,                                                                \
        .iconSprite = gMonIcon_Furfrou##_form,                                                                          \
        .iconPalIndex = _iconIdx,                                                                                       \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                                                         \
        SHADOW(3, 10, SHADOW_SIZE_XL_BATTLE_ONLY)                                                                       \
        FOOTPRINT(Furfrou)                                                                                              \
        OVERWORLD(                                                                                                      \
            sPicTable_Furfrou##_form,                                                                                   \
            SIZE_32x32,                                                                                                 \
            SHADOW_SIZE_M,                                                                                              \
            TRACKS_FOOT,                                                                                                \
            _overworldAnim,                                                                                       \
            gOverworldPalette_Furfrou##_form,                                                                           \
            gShinyOverworldPalette_Furfrou##_form                                                                       \
        )                                                                                                               \
        .levelUpLearnset = sFurfrouLevelUpLearnset,                                                                     \
        .teachableLearnset = sFurfrouTeachableLearnset,                                                                 \
        .eggMoveLearnset = sFurfrouEggMoveLearnset,                                                                     \
        .formSpeciesIdTable = sFurfrouFormSpeciesIdTable,                                                               \
        .formChangeTable = sFurfrouFormChangeTable,                                                                     \
    }

    [SPECIES_FURFROU_NATURAL]   = FURFROU_MISC_INFO(Natural,   FALSE, 48, 3, 56, 0, 0, sAnimTable_Following),
    [SPECIES_FURFROU_HEART]     = FURFROU_MISC_INFO(Heart,     FALSE, 56, 2, 56, 1, 0, sAnimTable_Following),
    [SPECIES_FURFROU_STAR]      = FURFROU_MISC_INFO(Star,      FALSE, 56, 2, 64, 1, 0, sAnimTable_Following),
    [SPECIES_FURFROU_DIAMOND]   = FURFROU_MISC_INFO(Diamond,   FALSE, 48, 2, 56, 1, 0, sAnimTable_Following),
    [SPECIES_FURFROU_DEBUTANTE] = FURFROU_MISC_INFO(Debutante, TRUE,  48, 2, 56, 1, 2, sAnimTable_Following_Asym),
    [SPECIES_FURFROU_MATRON]    = FURFROU_MISC_INFO(Matron,    FALSE, 48, 2, 56, 1, 2, sAnimTable_Following),
    [SPECIES_FURFROU_DANDY]     = FURFROU_MISC_INFO(Dandy,     FALSE, 48, 2, 56, 1, 1, sAnimTable_Following),
    [SPECIES_FURFROU_LA_REINE]  = FURFROU_MISC_INFO(LaReine,   FALSE, 48, 2, 56, 1, 0, sAnimTable_Following),
    [SPECIES_FURFROU_KABUKI]    = FURFROU_MISC_INFO(Kabuki,    FALSE, 56, 2, 56, 1, 0, sAnimTable_Following),
    [SPECIES_FURFROU_PHARAOH]   = FURFROU_MISC_INFO(Pharaoh,   FALSE, 48, 2, 56, 1, 0, sAnimTable_Following),
#endif //P_FAMILY_FURFROU

#if P_FAMILY_ESPURR
    [SPECIES_ESPURR] =
    {
        .baseHP        = 62,
        .baseAttack    = 48,
        .baseDefense   = 54,
        .baseSpeed     = 68,
        .baseSpAttack  = 63,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 190,
        .expYield = 71,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_INFILTRATOR, ABILITY_OWN_TEMPO },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Psiau"),
        .cryId = CRY_ESPURR,
        .natDexNum = NATIONAL_DEX_ESPURR,
        .categoryName = _("Zügelung"),
        .height = 3,
        .weight = 35,
        .description = COMPOUND_STRING(
        "Es verfügt über genug psychische\n"
        "Energie, um alles im Umkreis von 90\n"
        "Metern um sich herum in die Luft zu\n"
        "sprengen. Das Organ, das seine..."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Espurr,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Espurr,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Espurr,
        .shinyPalette = gMonShinyPalette_Espurr,
        .iconSprite = gMonIcon_Espurr,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Espurr)
        OVERWORLD(
            sPicTable_Espurr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Espurr,
            gShinyOverworldPalette_Espurr
        )
        .levelUpLearnset = sEspurrLevelUpLearnset,
        .teachableLearnset = sEspurrTeachableLearnset,
        .eggMoveLearnset = sEspurrEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_MEOWSTIC_M, CONDITIONS({IF_GENDER, MON_MALE})},
                                {EVO_LEVEL, 25, SPECIES_MEOWSTIC_F, CONDITIONS({IF_GENDER, MON_FEMALE})}),
    },

    [SPECIES_MEOWSTIC_M] =
    {
        .baseHP        = 74,
        .baseAttack    = 48,
        .baseDefense   = 76,
        .baseSpeed     = 104,
        .baseSpAttack  = 83,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = 163,
        .evYield_Speed = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_INFILTRATOR, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Psiaugon"),
        .cryId = CRY_MEOWSTIC,
        .natDexNum = NATIONAL_DEX_MEOWSTIC,
        .categoryName = _("Fassung"),
        .height = 6,
        .weight = 85,
        .description = COMPOUND_STRING(
        "Der Abwehrinstinkt der Männchen ist\n"
        "stark ausgeprägt. Wenn sie sich selbst\n"
        "oder ihre Partner schützen, entfalten\n"
        "sie ihre volle Kraft."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MeowsticM,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Meowstic,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_MeowsticM,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_MeowsticM,
        .shinyPalette = gMonShinyPalette_MeowsticM,
        .iconSprite = gMonIcon_MeowsticM,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 11, SHADOW_SIZE_S)
        FOOTPRINT(Meowstic)
        OVERWORLD(
            sPicTable_MeowsticM,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MeowsticM,
            gShinyOverworldPalette_MeowsticM
        )
        .levelUpLearnset = sMeowsticMLevelUpLearnset,
        .teachableLearnset = sMeowsticMTeachableLearnset,
        .formSpeciesIdTable = sMeowsticFormSpeciesIdTable,
        .formChangeTable = sMeowsticMFormChangeTable,
    },

    [SPECIES_MEOWSTIC_F] =
    {
        .baseHP        = 74,
        .baseAttack    = 48,
        .baseDefense   = 76,
        .baseSpeed     = 104,
        .baseSpAttack  = 83,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = 163,
        .evYield_Speed = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_INFILTRATOR, ABILITY_COMPETITIVE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Psiaugon"),
        .cryId = CRY_MEOWSTIC,
        .natDexNum = NATIONAL_DEX_MEOWSTIC,
        .categoryName = _("Fassung"),
        .height = 6,
        .weight = 85,
        .description = COMPOUND_STRING(
        "Frauen sind etwas egoistischer und\n"
        "aggressiver als Männer. Wenn sie nicht\n"
        "bekommen, was sie wollen, werden sie\n"
        "dich mit ihren übersinnlichen..."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MeowsticF,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Meowstic,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_MeowsticF,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_MeowsticF,
        .shinyPalette = gMonShinyPalette_MeowsticF,
        .iconSprite = gMonIcon_MeowsticF,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 12, SHADOW_SIZE_S)
        FOOTPRINT(Meowstic)
        OVERWORLD(
            sPicTable_MeowsticF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MeowsticF,
            gShinyOverworldPalette_MeowsticF
        )
        .levelUpLearnset = sMeowsticFLevelUpLearnset,
        .teachableLearnset = sMeowsticFTeachableLearnset,
        .formSpeciesIdTable = sMeowsticFormSpeciesIdTable,
        .formChangeTable = sMeowsticFFormChangeTable,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_MEOWSTIC_M_MEGA] =
    {
        .baseHP        = 74,
        .baseAttack    = 48,
        .baseDefense   = 76,
        .baseSpeed     = 124,
        .baseSpAttack  = 143,
        .baseSpDefense = 101,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = 163,
        .evYield_Speed = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_INFILTRATOR, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Psiaugon"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_MEOWSTIC_MEGA,
    #else
        .cryId = CRY_MEOWSTIC,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_MEOWSTIC,
        .categoryName = _("Fassung"),
        .height = 8,
        .weight = 101,
        .description = COMPOUND_STRING(
        "Mega Psiaugon kann seine psychische\n"
        "Kraft nutzen, um alles zu komprimieren\n"
        "oder zu erweitern. Es überwältigt\n"
        "Feinde, indem es den Raum selbst..."),
        .frontPic = gMonFrontPic_MeowsticMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_MeowsticMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MeowsticMega,
        .shinyPalette = gMonShinyPalette_MeowsticMega,
        .iconSprite = gMonIcon_MeowsticMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Meowstic)
        SHADOW(-3, 18, SHADOW_SIZE_S)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sMeowsticMLevelUpLearnset,
        .teachableLearnset = sMeowsticMTeachableLearnset,
        .formSpeciesIdTable = sMeowsticFormSpeciesIdTable,
        .formChangeTable = sMeowsticMFormChangeTable,
    },
    
    [SPECIES_MEOWSTIC_F_MEGA] =
    {
        .baseHP        = 74,
        .baseAttack    = 48,
        .baseDefense   = 76,
        .baseSpeed     = 124,
        .baseSpAttack  = 143,
        .baseSpDefense = 101,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = 163,
        .evYield_Speed = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_INFILTRATOR, ABILITY_COMPETITIVE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Psiaugon"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_MEOWSTIC_MEGA,
    #else
        .cryId = CRY_MEOWSTIC,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_MEOWSTIC,
        .categoryName = _("Fassung"),
        .height = 8,
        .weight = 101,
        .description = COMPOUND_STRING(
        "Mega Psiaugon kann seine psychische\n"
        "Kraft nutzen, um alles zu komprimieren\n"
        "oder zu erweitern. Es überwältigt\n"
        "Feinde, indem es den Raum selbst..."),
        .frontPic = gMonFrontPic_MeowsticMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_MeowsticMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MeowsticMega,
        .shinyPalette = gMonShinyPalette_MeowsticMega,
        .iconSprite = gMonIcon_MeowsticMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Meowstic)
        SHADOW(-3, 18, SHADOW_SIZE_S)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sMeowsticFLevelUpLearnset,
        .teachableLearnset = sMeowsticFTeachableLearnset,
        .formSpeciesIdTable = sMeowsticFormSpeciesIdTable,
        .formChangeTable = sMeowsticFFormChangeTable,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_ESPURR

#if P_FAMILY_HONEDGE
    [SPECIES_HONEDGE] =
    {
        .baseHP        = 45,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 28,
        .baseSpAttack  = 35,
        .baseSpDefense = 37,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GHOST),
        .catchRate = 180,
        .expYield = 65,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_NO_GUARD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gramokles"),
        .cryId = CRY_HONEDGE,
        .natDexNum = NATIONAL_DEX_HONEDGE,
        .categoryName = _("Klingenkraft"),
        .height = 8,
        .weight = 20,
        .description = COMPOUND_STRING(
        "Wenn jemand es wagt, nach seinem Heft\n"
        "zu greifen, wickelt es ein blaues Tuch\n"
        "um den Arm dieser Person und entzieht\n"
        "dieser Person vollständig ihre..."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Honedge,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Honedge,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Honedge,
        .shinyPalette = gMonShinyPalette_Honedge,
        .iconSprite = gMonIcon_Honedge,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-10, 11, SHADOW_SIZE_S)
        FOOTPRINT(Honedge)
        OVERWORLD(
            sPicTable_Honedge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Honedge,
            gShinyOverworldPalette_Honedge
        )
        .levelUpLearnset = sHonedgeLevelUpLearnset,
        .teachableLearnset = sHonedgeTeachableLearnset,
        .eggMoveLearnset = sHonedgeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_DOUBLADE}),
    },

    [SPECIES_DOUBLADE] =
    {
        .baseHP        = 59,
        .baseAttack    = 110,
        .baseDefense   = 150,
        .baseSpeed     = 35,
        .baseSpAttack  = 45,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GHOST),
        .catchRate = 90,
        .expYield = 157,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_NO_GUARD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Duokles"),
        .cryId = CRY_DOUBLADE,
        .natDexNum = NATIONAL_DEX_DOUBLADE,
        .categoryName = _("Klingenkraft"),
        .height = 8,
        .weight = 45,
        .description = COMPOUND_STRING(
        "Wenn sich Gramokles weiterentwickelt,\n"
        "teilt es sich in zwei Schwerter. Die\n"
        "komplexen Angriffsmuster seiner beiden\n"
        "Schwerter sind selbst gegen erfahre..."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Doublade,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Doublade,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Doublade,
        .shinyPalette = gMonShinyPalette_Doublade,
        .iconSprite = gMonIcon_Doublade,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(8, 11, SHADOW_SIZE_M)
        FOOTPRINT(Doublade)
        OVERWORLD(
            sPicTable_Doublade,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Doublade,
            gShinyOverworldPalette_Doublade
        )
        .levelUpLearnset = sDoubladeLevelUpLearnset,
        .teachableLearnset = sDoubladeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_AEGISLASH_SHIELD}),
    },

#define AEGISLASH_MAIN_STAT (P_UPDATED_STATS >= GEN_8 ? 140 : 150)

    [SPECIES_AEGISLASH_SHIELD] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = AEGISLASH_MAIN_STAT,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
        .baseSpDefense = AEGISLASH_MAIN_STAT,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 250 : 234,
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STANCE_CHANGE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Durengard"),
        .cryId = CRY_AEGISLASH,
        .natDexNum = NATIONAL_DEX_AEGISLASH,
        .categoryName = _("Königsklinge"),
        .height = 17,
        .weight = 530,
        .description = COMPOUND_STRING(
        "In dieser Verteidigungshaltung nutzt\n"
        "Durengard seinen Stahlkörper und ein\n"
        "Kraftfeld aus spektraler Kraft, um den\n"
        "Schaden jedes Angriffs zu reduzieren."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_AegislashShield,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_AegislashShield,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_AegislashShield,
        .shinyPalette = gMonShinyPalette_AegislashShield,
        .iconSprite = gMonIcon_AegislashShield,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Aegislash)
        OVERWORLD(
            sPicTable_AegislashShield,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_AegislashShield,
            gShinyOverworldPalette_AegislashShield
        )
        .levelUpLearnset = sAegislashLevelUpLearnset,
        .teachableLearnset = sAegislashTeachableLearnset,
        .formSpeciesIdTable = sAegislashFormSpeciesIdTable,
        .formChangeTable = sAegislashFormChangeTable,
    },

    [SPECIES_AEGISLASH_BLADE] =
    {
        .baseHP        = 60,
        .baseAttack    = AEGISLASH_MAIN_STAT,
        .baseDefense   = 50,
        .baseSpeed     = 60,
        .baseSpAttack  = AEGISLASH_MAIN_STAT,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 250 : 234,
    #if P_UPDATED_EVS >= GEN_7
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
    #else
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
    #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STANCE_CHANGE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Durengard"),
        .cryId = CRY_AEGISLASH,
        .natDexNum = NATIONAL_DEX_AEGISLASH,
        .categoryName = _("Königsklinge"),
        .height = 17,
        .weight = 530,
        .description = COMPOUND_STRING(
        "Es war einmal ein König mit einem\n"
        "Durengard, der über das Land\n"
        "herrschte. Seine Pokémon raubten ihm\n"
        "schließlich das Leben und sein..."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_AegislashBlade,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_AegislashBlade,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_AegislashBlade,
        .shinyPalette = gMonShinyPalette_AegislashBlade,
        .iconSprite = gMonIcon_AegislashBlade,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Aegislash)
        .levelUpLearnset = sAegislashLevelUpLearnset,
        .teachableLearnset = sAegislashTeachableLearnset,
        .formSpeciesIdTable = sAegislashFormSpeciesIdTable,
        .formChangeTable = sAegislashFormChangeTable,
    },
#endif //P_FAMILY_HONEDGE

#if P_FAMILY_SPRITZEE
    [SPECIES_SPRITZEE] =
    {
        .baseHP        = 78,
        .baseAttack    = 52,
        .baseDefense   = 60,
        .baseSpeed     = 23,
        .baseSpAttack  = 63,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 200,
        .expYield = 68,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HEALER, ABILITY_NONE, ABILITY_AROMA_VEIL },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Parfi"),
        .cryId = CRY_SPRITZEE,
        .natDexNum = NATIONAL_DEX_SPRITZEE,
        .categoryName = _("Parfüm"),
        .height = 2,
        .weight = 5,
        .description = COMPOUND_STRING(
        "In der Vergangenheit trugen königliche\n"
        "Damen anstelle von Parfüm einen\n"
        "Parfi bei sich, der den Duft\n"
        "verströmte, den sie mochten. Sein D..."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Spritzee,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_Spritzee,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Spritzee,
        .shinyPalette = gMonShinyPalette_Spritzee,
        .iconSprite = gMonIcon_Spritzee,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Spritzee)
        OVERWORLD(
            sPicTable_Spritzee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Spritzee,
            gShinyOverworldPalette_Spritzee
        )
        .levelUpLearnset = sSpritzeeLevelUpLearnset,
        .teachableLearnset = sSpritzeeTeachableLearnset,
        .eggMoveLearnset = sSpritzeeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_AROMATISSE, CONDITIONS({IF_HOLD_ITEM, ITEM_SACHET})},
                                {EVO_ITEM, ITEM_SACHET, SPECIES_AROMATISSE}),
    },

    [SPECIES_AROMATISSE] =
    {
        .baseHP        = 101,
        .baseAttack    = 72,
        .baseDefense   = 72,
        .baseSpeed     = 29,
        .baseSpAttack  = 99,
        .baseSpDefense = 89,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 140,
        .expYield = 162,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HEALER, ABILITY_NONE, ABILITY_AROMA_VEIL },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Parfinesse"),
        .cryId = CRY_AROMATISSE,
        .natDexNum = NATIONAL_DEX_AROMATISSE,
        .categoryName = _("Duft"),
        .height = 8,
        .weight = 155,
        .description = COMPOUND_STRING(
        "Sein Duft ist so überwältigend, dass\n"
        "es einem Trainer schwerfallen wird,\n"
        "neben ihm herzugehen, es sei denn, er\n"
        "genießt den Geruch wirklich."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Aromatisse,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Aromatisse,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Aromatisse,
        .shinyPalette = gMonShinyPalette_Aromatisse,
        .iconSprite = gMonIcon_Aromatisse,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_M)
        FOOTPRINT(Aromatisse)
        OVERWORLD(
            sPicTable_Aromatisse,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Aromatisse,
            gShinyOverworldPalette_Aromatisse
        )
        .levelUpLearnset = sAromatisseLevelUpLearnset,
        .teachableLearnset = sAromatisseTeachableLearnset,
    },
#endif //P_FAMILY_SPRITZEE

#if P_FAMILY_SWIRLIX
    [SPECIES_SWIRLIX] =
    {
        .baseHP        = 62,
        .baseAttack    = 48,
        .baseDefense   = 66,
        .baseSpeed     = 49,
        .baseSpAttack  = 59,
        .baseSpDefense = 57,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 200,
        .expYield = 68,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_UNBURDEN },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Flauschling"),
        .cryId = CRY_SWIRLIX,
        .natDexNum = NATIONAL_DEX_SWIRLIX,
        .categoryName = _("Zuckerwatte"),
        .height = 4,
        .weight = 35,
        .description = COMPOUND_STRING(
        "Da es sich ausschließlich von\n"
        "Süßigkeiten ernährt, ist sein Fell\n"
        "klebrig-süß wie Zuckerwatte. Um seine\n"
        "Gegner im Kampf zu verwickeln, stöß..."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Swirlix,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Swirlix,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_Swirlix,
        .shinyPalette = gMonShinyPalette_Swirlix,
        .iconSprite = gMonIcon_Swirlix,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, -1, SHADOW_SIZE_S)
        FOOTPRINT(Swirlix)
        OVERWORLD(
            sPicTable_Swirlix,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Swirlix,
            gShinyOverworldPalette_Swirlix
        )
        .levelUpLearnset = sSwirlixLevelUpLearnset,
        .teachableLearnset = sSwirlixTeachableLearnset,
        .eggMoveLearnset = sSwirlixEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_SLURPUFF, CONDITIONS({IF_HOLD_ITEM, ITEM_WHIPPED_DREAM})},
                                {EVO_ITEM, ITEM_WHIPPED_DREAM, SPECIES_SLURPUFF}),
    },

    [SPECIES_SLURPUFF] =
    {
        .baseHP        = 82,
        .baseAttack    = 80,
        .baseDefense   = 86,
        .baseSpeed     = 72,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 140,
        .expYield = 168,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_UNBURDEN },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Sabbaione"),
        .cryId = CRY_SLURPUFF,
        .natDexNum = NATIONAL_DEX_SLURPUFF,
        .categoryName = _("Schlagsahne"),
        .height = 8,
        .weight = 50,
        .description = COMPOUND_STRING(
        "Sabbaione kann selbst die schwächsten\n"
        "Gerüche wahrnehmen. Es nutzt seinen\n"
        "sensiblen Geruchssinn, um Konditoren\n"
        "bei ihrer Arbeit zu unterstützen."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Slurpuff,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Slurpuff,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Slurpuff,
        .shinyPalette = gMonShinyPalette_Slurpuff,
        .iconSprite = gMonIcon_Slurpuff,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Slurpuff)
        OVERWORLD(
            sPicTable_Slurpuff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Slurpuff,
            gShinyOverworldPalette_Slurpuff
        )
        .levelUpLearnset = sSlurpuffLevelUpLearnset,
        .teachableLearnset = sSlurpuffTeachableLearnset,
    },
#endif //P_FAMILY_SWIRLIX

#if P_FAMILY_INKAY
    [SPECIES_INKAY] =
    {
        .baseHP        = 53,
        .baseAttack    = 54,
        .baseDefense   = 53,
        .baseSpeed     = 45,
        .baseSpAttack  = 37,
        .baseSpDefense = 46,
        .types = MON_TYPES(TYPE_DARK, TYPE_PSYCHIC),
        .catchRate = 190,
        .expYield = 58,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_CONTRARY, ABILITY_SUCTION_CUPS, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Iscalar"),
        .cryId = CRY_INKAY,
        .natDexNum = NATIONAL_DEX_INKAY,
        .categoryName = _("Rotation"),
        .height = 4,
        .weight = 35,
        .description = COMPOUND_STRING(
        "Es lässt die Lichtpunkte an seinem\n"
        "Körper aufblitzen, was den Kampfwillen\n"
        "seines Gegners schwächt. Es nutzt die\n"
        "Gelegenheit, um davonzulaufen und s..."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Inkay,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_Inkay,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Inkay,
        .shinyPalette = gMonShinyPalette_Inkay,
        .iconSprite = gMonIcon_Inkay,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_S)
        FOOTPRINT(Inkay)
        OVERWORLD(
            sPicTable_Inkay,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Inkay,
            gShinyOverworldPalette_Inkay
        )
        .levelUpLearnset = sInkayLevelUpLearnset,
        .teachableLearnset = sInkayTeachableLearnset,
        .eggMoveLearnset = sInkayEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MALAMAR}),
    },

    [SPECIES_MALAMAR] =
    {
        .baseHP        = 86,
        .baseAttack    = 92,
        .baseDefense   = 88,
        .baseSpeed     = 73,
        .baseSpAttack  = 68,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DARK, TYPE_PSYCHIC),
        .catchRate = 80,
        .expYield = 169,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_CONTRARY, ABILITY_SUCTION_CUPS, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Calamanero"),
        .cryId = CRY_MALAMAR,
        .natDexNum = NATIONAL_DEX_MALAMAR,
        .categoryName = _("Inversion"),
        .height = 15,
        .weight = 470,
        .description = COMPOUND_STRING(
        "Es lockt seine Beute mit hypnotischen\n"
        "Bewegungen an sich heran, umschlingt\n"
        "es dann mit seinen Tentakeln, bevor es\n"
        "es mit Verdauungsflüssigkeit vertil..."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Malamar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Malamar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Malamar,
        .shinyPalette = gMonShinyPalette_Malamar,
        .iconSprite = gMonIcon_Malamar,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 14, SHADOW_SIZE_M)
        FOOTPRINT(Malamar)
        OVERWORLD(
            sPicTable_Malamar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Malamar,
            gShinyOverworldPalette_Malamar
        )
        .levelUpLearnset = sMalamarLevelUpLearnset,
        .teachableLearnset = sMalamarTeachableLearnset,
        .formSpeciesIdTable = sMalamarFormSpeciesIdTable,
        .formChangeTable = sMalamarFormChangeTable,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_MALAMAR_MEGA] =
    {
        .baseHP        = 86,
        .baseAttack    = 102,
        .baseDefense   = 88,
        .baseSpeed     = 88,
        .baseSpAttack  = 98,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_DARK, TYPE_PSYCHIC),
        .catchRate = 80,
        .expYield = 169,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_CONTRARY, ABILITY_SUCTION_CUPS, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Calamanero"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_MALAMAR_MEGA,
    #else
        .cryId = CRY_MALAMAR,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_MALAMAR,
        .categoryName = _("Inversion"),
        .height = 29,
        .weight = 698,
        .description = COMPOUND_STRING(
        "Mit seinen bunten Lichtern\n"
        "überschreibt es die Persönlichkeit und\n"
        "Erinnerungen anderer – und\n"
        "kontrolliert sie."),
        .frontPic = gMonFrontPic_MalamarMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MalamarMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MalamarMega,
        .shinyPalette = gMonShinyPalette_MalamarMega,
        .iconSprite = gMonIcon_MalamarMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Malamar)
        SHADOW(15, 15, SHADOW_SIZE_M)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sMalamarLevelUpLearnset,
        .teachableLearnset = sMalamarTeachableLearnset,
        .formSpeciesIdTable = sMalamarFormSpeciesIdTable,
        .formChangeTable = sMalamarFormChangeTable,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_INKAY

#if P_FAMILY_BINACLE
    [SPECIES_BINACLE] =
    {
        .baseHP        = 42,
        .baseAttack    = 52,
        .baseDefense   = 67,
        .baseSpeed     = 50,
        .baseSpAttack  = 39,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_ROCK, TYPE_WATER),
        .catchRate = 120,
        .expYield = 61,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_SNIPER, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bithora"),
        .cryId = CRY_BINACLE,
        .natDexNum = NATIONAL_DEX_BINACLE,
        .categoryName = _("Krallenduo"),
        .height = 5,
        .weight = 310,
        .description = COMPOUND_STRING(
        "Sie strecken sich und ziehen sich dann\n"
        "wieder zusammen, wobei sie in kühnen\n"
        "Sprüngen ihre Steine ​​mit sich\n"
        "reißen. Sie fressen Algen, die an d..."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Binacle,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Binacle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Binacle,
        .shinyPalette = gMonShinyPalette_Binacle,
        .iconSprite = gMonIcon_Binacle,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Binacle)
        OVERWORLD(
            sPicTable_Binacle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Binacle,
            gShinyOverworldPalette_Binacle
        )
        .levelUpLearnset = sBinacleLevelUpLearnset,
        .teachableLearnset = sBinacleTeachableLearnset,
        .eggMoveLearnset = sBinacleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_BARBARACLE}),
    },

    [SPECIES_BARBARACLE] =
    {
        .baseHP        = 72,
        .baseAttack    = 105,
        .baseDefense   = 115,
        .baseSpeed     = 68,
        .baseSpAttack  = 54,
        .baseSpDefense = 86,
        .types = MON_TYPES(TYPE_ROCK, TYPE_WATER),
        .catchRate = 45,
        .expYield = 175,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_SNIPER, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Thanathora"),
        .cryId = CRY_BARBARACLE,
        .natDexNum = NATIONAL_DEX_BARBARACLE,
        .categoryName = _("Ballung"),
        .height = 13,
        .weight = 960,
        .description = COMPOUND_STRING(
        "Barbaracles Beine und Hände haben\n"
        "einen eigenen Geist und bewegen sich\n"
        "unabhängig voneinander. Aber sie\n"
        "folgen normalerweise den Anweisunge..."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Barbaracle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Barbaracle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Barbaracle,
        .shinyPalette = gMonShinyPalette_Barbaracle,
        .iconSprite = gMonIcon_Barbaracle,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 14, SHADOW_SIZE_L)
        FOOTPRINT(Barbaracle)
        OVERWORLD(
            sPicTable_Barbaracle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Barbaracle,
            gShinyOverworldPalette_Barbaracle
        )
        .levelUpLearnset = sBarbaracleLevelUpLearnset,
        .teachableLearnset = sBarbaracleTeachableLearnset,
        .formSpeciesIdTable = sBarbaracleFormSpeciesIdTable,
        .formChangeTable = sBarbaracleFormChangeTable,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_BARBARACLE_MEGA] =
    {
        .baseHP        = 72,
        .baseAttack    = 140,
        .baseDefense   = 130,
        .baseSpeed     = 88,
        .baseSpAttack  = 64,
        .baseSpDefense = 106,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 175,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_SNIPER, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Thanathora"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_BARBARACLE_MEGA,
    #else
        .cryId = CRY_BARBARACLE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_BARBARACLE,
        .categoryName = _("Ballung"),
        .height = 22,
        .weight = 1000,
        .description = COMPOUND_STRING(
        "Es nutzt seine vielen Arme, um mit\n"
        "seinen Gegnern zu spielen. Das hält\n"
        "den Kopf extrem beschäftigt."),
        .frontPic = gMonFrontPic_BarbaracleMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BarbaracleMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_BarbaracleMega,
        .shinyPalette = gMonShinyPalette_BarbaracleMega,
        .iconSprite = gMonIcon_BarbaracleMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Barbaracle)
        SHADOW(-1, 14, SHADOW_SIZE_M)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBarbaracleLevelUpLearnset,
        .teachableLearnset = sBarbaracleTeachableLearnset,
        .formSpeciesIdTable = sBarbaracleFormSpeciesIdTable,
        .formChangeTable = sBarbaracleFormChangeTable,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_BINACLE

#if P_FAMILY_SKRELP
    [SPECIES_SKRELP] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_POISON, TYPE_WATER),
        .catchRate = 225,
        .expYield = 64,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_POISON_POINT, ABILITY_POISON_TOUCH, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Algitt"),
        .cryId = CRY_SKRELP,
        .natDexNum = NATIONAL_DEX_SKRELP,
        .categoryName = _("Tangmimikry"),
        .height = 5,
        .weight = 73,
        .description = COMPOUND_STRING(
        "Als fauler Seetang getarnt, versteckt\n"
        "es sich vor Feinden und speichert\n"
        "gleichzeitig Kraft für seine\n"
        "Entwicklung. Sie sprühen flüssiges..."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Skrelp,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Skrelp,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Skrelp,
        .shinyPalette = gMonShinyPalette_Skrelp,
        .iconSprite = gMonIcon_Skrelp,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 5, SHADOW_SIZE_S)
        FOOTPRINT(Skrelp)
        OVERWORLD(
            sPicTable_Skrelp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Skrelp,
            gShinyOverworldPalette_Skrelp
        )
        .levelUpLearnset = sSkrelpLevelUpLearnset,
        .teachableLearnset = sSkrelpTeachableLearnset,
        .eggMoveLearnset = sSkrelpEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 48, SPECIES_DRAGALGE}),
    },

    [SPECIES_DRAGALGE] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 90,
        .baseSpeed     = 44,
        .baseSpAttack  = 97,
        .baseSpDefense = 123,
        .types = MON_TYPES(TYPE_POISON, TYPE_DRAGON),
        .catchRate = 55,
        .expYield = 173,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_POISON_POINT, ABILITY_POISON_TOUCH, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Tandrak"),
        .cryId = CRY_DRAGALGE,
        .natDexNum = NATIONAL_DEX_DRAGALGE,
        .categoryName = _("Tangmimikry"),
        .height = 18,
        .weight = 815,
        .description = COMPOUND_STRING(
        "Ihr Gift ist stark genug, um sich\n"
        "durch den Rumpf eines Tankers zu\n"
        "fressen. Man erzählt sich Geschichten\n"
        "von Schiffen, die in die Meere..."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Dragalge,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_FRONT_FLIP,
        .backPic = gMonBackPic_Dragalge,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Dragalge,
        .shinyPalette = gMonShinyPalette_Dragalge,
        .iconSprite = gMonIcon_Dragalge,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Dragalge)
        OVERWORLD(
            sPicTable_Dragalge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dragalge,
            gShinyOverworldPalette_Dragalge
        )
        .levelUpLearnset = sDragalgeLevelUpLearnset,
        .teachableLearnset = sDragalgeTeachableLearnset,
        .formSpeciesIdTable = sDragalgeFormSpeciesIdTable,
        .formChangeTable = sDragalgeFormChangeTable,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_DRAGALGE_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 85,
        .baseDefense   = 105,
        .baseSpeed     = 44,
        .baseSpAttack  = 132,
        .baseSpDefense = 163,
        .types = MON_TYPES(TYPE_POISON, TYPE_DRAGON),
        .catchRate = 55,
        .expYield = 173,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_POISON_POINT, ABILITY_POISON_TOUCH, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Tandrak"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_DRAGALGE_MEGA,
    #else
        .cryId = CRY_DRAGALGE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_DRAGALGE,
        .categoryName = _("Tangmimikry"),
        .height = 21,
        .weight = 1003,
        .description = COMPOUND_STRING(
        "Es spuckt eine Flüssigkeit aus, die\n"
        "die Regenerationskraft der Zellen\n"
        "außer Kraft setzt. Die Flüssigkeit ist\n"
        "ein tödliches Gift für alles außer..."),
        .frontPic = gMonFrontPic_DragalgeMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DragalgeMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DragalgeMega,
        .shinyPalette = gMonShinyPalette_DragalgeMega,
        .iconSprite = gMonIcon_DragalgeMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Dragalge)
        SHADOW(3, 16, SHADOW_SIZE_L)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sDragalgeLevelUpLearnset,
        .teachableLearnset = sDragalgeTeachableLearnset,
        .formSpeciesIdTable = sDragalgeFormSpeciesIdTable,
        .formChangeTable = sDragalgeFormChangeTable,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_SKRELP

#if P_FAMILY_CLAUNCHER
    [SPECIES_CLAUNCHER] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 62,
        .baseSpeed     = 44,
        .baseSpAttack  = 58,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 225,
        .expYield = 66,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_MEGA_LAUNCHER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Scampisto"),
        .cryId = CRY_CLAUNCHER,
        .natDexNum = NATIONAL_DEX_CLAUNCHER,
        .categoryName = _("Aquapistole"),
        .height = 5,
        .weight = 83,
        .description = COMPOUND_STRING(
        "Durch das kontrollierte Ausstoßen von\n"
        "innerem Gas kann es Wasser wie mit\n"
        "einem Pistolenschuss ausstoßen. Auf\n"
        "kurze Distanz kann es sogar große..."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Clauncher,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Clauncher,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Clauncher,
        .shinyPalette = gMonShinyPalette_Clauncher,
        .iconSprite = gMonIcon_Clauncher,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(4, -6, SHADOW_SIZE_M)
        FOOTPRINT(Clauncher)
        OVERWORLD(
            sPicTable_Clauncher,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Clauncher,
            gShinyOverworldPalette_Clauncher
        )
        .levelUpLearnset = sClauncherLevelUpLearnset,
        .teachableLearnset = sClauncherTeachableLearnset,
        .eggMoveLearnset = sClauncherEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_CLAWITZER}),
    },

    [SPECIES_CLAWITZER] =
    {
        .baseHP        = 71,
        .baseAttack    = 73,
        .baseDefense   = 88,
        .baseSpeed     = 59,
        .baseSpAttack  = 120,
        .baseSpDefense = 89,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 55,
        .expYield = 100,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_MEGA_LAUNCHER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Wummer"),
        .cryId = CRY_CLAWITZER,
        .natDexNum = NATIONAL_DEX_CLAWITZER,
        .categoryName = _("Aquawumme"),
        .height = 13,
        .weight = 353,
        .description = COMPOUND_STRING(
        "Indem es Wasser aus der Düse auf der\n"
        "Rückseite seiner riesigen Klaue\n"
        "ausstößt, kann es sich mit einer\n"
        "Geschwindigkeit von 60 Knoten..."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Clawitzer,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
        ),
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .backPic = gMonBackPic_Clawitzer,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Clawitzer,
        .shinyPalette = gMonShinyPalette_Clawitzer,
        .iconSprite = gMonIcon_Clawitzer,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 1, SHADOW_SIZE_L)
        FOOTPRINT(Clawitzer)
        OVERWORLD(
            sPicTable_Clawitzer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Clawitzer,
            gShinyOverworldPalette_Clawitzer
        )
        .levelUpLearnset = sClawitzerLevelUpLearnset,
        .teachableLearnset = sClawitzerTeachableLearnset,
    },
#endif //P_FAMILY_CLAUNCHER

#if P_FAMILY_HELIOPTILE
    [SPECIES_HELIOPTILE] =
    {
        .baseHP        = 44,
        .baseAttack    = 38,
        .baseDefense   = 33,
        .baseSpeed     = 70,
        .baseSpAttack  = 61,
        .baseSpDefense = 43,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_NORMAL),
        .catchRate = 190,
        .expYield = 58,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_DRY_SKIN, ABILITY_SAND_VEIL, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Eguana"),
        .cryId = CRY_HELIOPTILE,
        .natDexNum = NATIONAL_DEX_HELIOPTILE,
        .categoryName = _("Generator"),
        .height = 5,
        .weight = 60,
        .description = COMPOUND_STRING(
        "Sie leben in Wüsten. Sie können durch\n"
        "Sonnenbaden ihre eigene Energie\n"
        "erzeugen, sodass die Nahrungsaufnahme\n"
        "nicht zwingend erforderlich ist."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Helioptile,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Helioptile,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Helioptile,
        .shinyPalette = gMonShinyPalette_Helioptile,
        .iconSprite = gMonIcon_Helioptile,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Helioptile)
        OVERWORLD(
            sPicTable_Helioptile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Helioptile,
            gShinyOverworldPalette_Helioptile
        )
        .levelUpLearnset = sHelioptileLevelUpLearnset,
        .teachableLearnset = sHelioptileTeachableLearnset,
        .eggMoveLearnset = sHelioptileEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SUN_STONE, SPECIES_HELIOLISK}),
    },

    [SPECIES_HELIOLISK] =
    {
        .baseHP        = 62,
        .baseAttack    = 55,
        .baseDefense   = 52,
        .baseSpeed     = 109,
        .baseSpAttack  = 109,
        .baseSpDefense = 94,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_NORMAL),
        .catchRate = 75,
        .expYield = 168,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_DRY_SKIN, ABILITY_SAND_VEIL, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Elezard"),
        .cryId = CRY_HELIOLISK,
        .natDexNum = NATIONAL_DEX_HELIOLISK,
        .categoryName = _("Generator"),
        .height = 10,
        .weight = 210,
        .description = COMPOUND_STRING(
        "Ein einzelner Elezard kann genug\n"
        "Strom erzeugen, um einen Wolkenkratzer\n"
        "anzutreiben. Es kann seine Muskeln mit\n"
        "Elektrizität stimulieren und so die..."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Heliolisk,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_RAPID_H_HOPS,
        .backPic = gMonBackPic_Heliolisk,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Heliolisk,
        .shinyPalette = gMonShinyPalette_Heliolisk,
        .iconSprite = gMonIcon_Heliolisk,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_M)
        FOOTPRINT(Heliolisk)
        OVERWORLD(
            sPicTable_Heliolisk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Heliolisk,
            gShinyOverworldPalette_Heliolisk
        )
        .levelUpLearnset = sHelioliskLevelUpLearnset,
        .teachableLearnset = sHelioliskTeachableLearnset,
    },
#endif //P_FAMILY_HELIOPTILE

#if P_FAMILY_TYRUNT
    [SPECIES_TYRUNT] =
    {
        .baseHP        = 58,
        .baseAttack    = 89,
        .baseDefense   = 77,
        .baseSpeed     = 48,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ROCK, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 72,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_STRONG_JAW, ABILITY_NONE, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Balgoras"),
        .cryId = CRY_TYRUNT,
        .natDexNum = NATIONAL_DEX_TYRUNT,
        .categoryName = _("Kronprinz"),
        .height = 8,
        .weight = 260,
        .description = COMPOUND_STRING(
        "Seine riesigen Kiefer haben genug\n"
        "Zerstörungskraft, um ein Auto zu\n"
        "zerkauen. Wenn etwas passiert, das ihm\n"
        "nicht gefällt, bekommt es einen..."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tyrunt,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Tyrunt,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Tyrunt,
        .shinyPalette = gMonShinyPalette_Tyrunt,
        .iconSprite = gMonIcon_Tyrunt,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 2, SHADOW_SIZE_M)
        FOOTPRINT(Tyrunt)
        OVERWORLD(
            sPicTable_Tyrunt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tyrunt,
            gShinyOverworldPalette_Tyrunt
        )
        .levelUpLearnset = sTyruntLevelUpLearnset,
        .teachableLearnset = sTyruntTeachableLearnset,
        .eggMoveLearnset = sTyruntEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_TYRANTRUM, CONDITIONS({IF_NOT_TIME, TIME_NIGHT})}),
    },

    [SPECIES_TYRANTRUM] =
    {
        .baseHP        = 82,
        .baseAttack    = 121,
        .baseDefense   = 119,
        .baseSpeed     = 71,
        .baseSpAttack  = 69,
        .baseSpDefense = 59,
        .types = MON_TYPES(TYPE_ROCK, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 182,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_STRONG_JAW, ABILITY_NONE, ABILITY_ROCK_HEAD },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Monargoras"),
        .cryId = CRY_TYRANTRUM,
        .natDexNum = NATIONAL_DEX_TYRANTRUM,
        .categoryName = _("Tyrann"),
        .height = 25,
        .weight = 2700,
        .description = COMPOUND_STRING(
        "Dank seiner gigantischen Kiefer, die\n"
        "dicke Metallplatten zerreißen konnten,\n"
        "als wären sie Papier, war es in der\n"
        "antiken Welt, in der es einst lebte..."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Tyrantrum,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Tyrantrum,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Tyrantrum,
        .shinyPalette = gMonShinyPalette_Tyrantrum,
        .iconSprite = gMonIcon_Tyrantrum,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_L)
        FOOTPRINT(Tyrantrum)
        OVERWORLD(
            sPicTable_Tyrantrum,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tyrantrum,
            gShinyOverworldPalette_Tyrantrum
        )
        .levelUpLearnset = sTyrantrumLevelUpLearnset,
        .teachableLearnset = sTyrantrumTeachableLearnset,
    },
#endif //P_FAMILY_TYRUNT

#if P_FAMILY_AMAURA
    [SPECIES_AMAURA] =
    {
        .baseHP        = 77,
        .baseAttack    = 59,
        .baseDefense   = 50,
        .baseSpeed     = 46,
        .baseSpAttack  = 67,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ICE),
        .catchRate = 45,
        .expYield = 72,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_REFRIGERATE, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Amarino"),
        .cryId = CRY_AMAURA,
        .natDexNum = NATIONAL_DEX_AMAURA,
        .categoryName = _("Tundra"),
        .height = 13,
        .weight = 252,
        .description = COMPOUND_STRING(
        "Dieses uralte Pokémon wurde aus einem\n"
        "Teil seines Körpers wiederhergestellt,\n"
        "der über 100 Millionen Jahre lang im\n"
        "Eis gefroren war. Es lebte in einem..."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Amaura,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_CONCAVE_ARC_SMALL_TWICE,
        .backPic = gMonBackPic_Amaura,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Amaura,
        .shinyPalette = gMonShinyPalette_Amaura,
        .iconSprite = gMonIcon_Amaura,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_S)
        FOOTPRINT(Amaura)
        OVERWORLD(
            sPicTable_Amaura,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Amaura,
            gShinyOverworldPalette_Amaura
        )
        .levelUpLearnset = sAmauraLevelUpLearnset,
        .teachableLearnset = sAmauraTeachableLearnset,
        .eggMoveLearnset = sAmauraEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_AURORUS, CONDITIONS({IF_TIME, TIME_NIGHT})}),
    },

    [SPECIES_AURORUS] =
    {
        .baseHP        = 123,
        .baseAttack    = 77,
        .baseDefense   = 72,
        .baseSpeed     = 58,
        .baseSpAttack  = 99,
        .baseSpDefense = 92,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ICE),
        .catchRate = 45,
        .expYield = 104,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_REFRIGERATE, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Amagarga"),
        .cryId = CRY_AURORUS,
        .natDexNum = NATIONAL_DEX_AURORUS,
        .categoryName = _("Tundra"),
        .height = 27,
        .weight = 2250,
        .description = COMPOUND_STRING(
        "Mithilfe der rautenförmigen Kristalle\n"
        "an seinem Körper kann er sofort eine\n"
        "Eiswand erschaffen, um den Angriff\n"
        "eines Gegners abzuwehren oder ihn m..."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Aurorus,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Aurorus,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Aurorus,
        .shinyPalette = gMonShinyPalette_Aurorus,
        .iconSprite = gMonIcon_Aurorus,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 14, SHADOW_SIZE_L)
        FOOTPRINT(Aurorus)
        OVERWORLD(
            sPicTable_Aurorus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Aurorus,
            gShinyOverworldPalette_Aurorus
        )
        .levelUpLearnset = sAurorusLevelUpLearnset,
        .teachableLearnset = sAurorusTeachableLearnset,
    },
#endif //P_FAMILY_AMAURA

#if P_FAMILY_HAWLUCHA
    [SPECIES_HAWLUCHA] =
    {
        .baseHP        = 78,
        .baseAttack    = 92,
        .baseDefense   = 75,
        .baseSpeed     = 118,
        .baseSpAttack  = 74,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_FLYING),
        .catchRate = 100,
        .expYield = 175,
        .evYield_Attack = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_HUMAN_LIKE),
    #else
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #endif
        .abilities = { ABILITY_LIMBER, ABILITY_UNBURDEN, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Resladero"),
        .cryId = CRY_HAWLUCHA,
        .natDexNum = NATIONAL_DEX_HAWLUCHA,
        .categoryName = _("Wrestling"),
        .height = 8,
        .weight = 215,
        .description = COMPOUND_STRING(
        "Mit seinen Flügeln kontrolliert es\n"
        "seine Position in der Luft. Seine\n"
        "ausgeprägten Kampffähigkeiten\n"
        "ermöglichen es ihm, mit großen..."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hawlucha,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Hawlucha,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Hawlucha,
        .shinyPalette = gMonShinyPalette_Hawlucha,
        .iconSprite = gMonIcon_Hawlucha,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 6, SHADOW_SIZE_S)
        FOOTPRINT(Hawlucha)
        OVERWORLD(
            sPicTable_Hawlucha,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hawlucha,
            gShinyOverworldPalette_Hawlucha
        )
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
        .levelUpLearnset = sHawluchaLevelUpLearnset,
        .teachableLearnset = sHawluchaTeachableLearnset,
        .eggMoveLearnset = sHawluchaEggMoveLearnset,
        .formSpeciesIdTable = sHawluchaFormSpeciesIdTable,
        .formChangeTable = sHawluchaFormChangeTable,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_HAWLUCHA_MEGA] =
    {
        .baseHP        = 78,
        .baseAttack    = 137,
        .baseDefense   = 100,
        .baseSpeed     = 118,
        .baseSpAttack  = 74,
        .baseSpDefense = 93,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_FLYING),
        .catchRate = 100,
        .expYield = 175,
        .evYield_Attack = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_LIMBER, ABILITY_UNBURDEN, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Resladero"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_HAWLUCHA_MEGA,
    #else
        .cryId = CRY_HAWLUCHA,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_HAWLUCHA,
        .categoryName = _("Wrestling"),
        .height = 10,
        .weight = 250,
        .description = COMPOUND_STRING(
        "Mega Evolution hat alle seine Muskeln\n"
        "aufgepumpt. Resladero demonstriert\n"
        "seine Stärke."),
        .frontPic = gMonFrontPic_HawluchaMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_HawluchaMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_HawluchaMega,
        .shinyPalette = gMonShinyPalette_HawluchaMega,
        .iconSprite = gMonIcon_HawluchaMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Hawlucha)
        SHADOW(-2, 13, SHADOW_SIZE_M)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sHawluchaLevelUpLearnset,
        .teachableLearnset = sHawluchaTeachableLearnset,
        .formSpeciesIdTable = sHawluchaFormSpeciesIdTable,
        .formChangeTable = sHawluchaFormChangeTable,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_HAWLUCHA

#if P_FAMILY_DEDENNE
    [SPECIES_DEDENNE] =
    {
        .baseHP        = 67,
        .baseAttack    = 58,
        .baseDefense   = 57,
        .baseSpeed     = 101,
        .baseSpAttack  = 81,
        .baseSpDefense = 67,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FAIRY),
        .catchRate = 180,
        .expYield = 151,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_CHEEK_POUCH, ABILITY_PICKUP, ABILITY_PLUS },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Dedenne"),
        .cryId = CRY_DEDENNE,
        .natDexNum = NATIONAL_DEX_DEDENNE,
        .categoryName = _("Antenne"),
        .height = 2,
        .weight = 22,
        .description = COMPOUND_STRING(
        "Seine Schnurrhaare dienen als\n"
        "Antennen. Durch das Senden und\n"
        "Empfangen elektrischer Wellen kann es\n"
        "über große Entfernungen mit anderen..."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dedenne,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Dedenne,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Dedenne,
        .shinyPalette = gMonShinyPalette_Dedenne,
        .iconSprite = gMonIcon_Dedenne,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Dedenne)
        OVERWORLD(
            sPicTable_Dedenne,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dedenne,
            gShinyOverworldPalette_Dedenne
        )
        .levelUpLearnset = sDedenneLevelUpLearnset,
        .teachableLearnset = sDedenneTeachableLearnset,
        .eggMoveLearnset = sDedenneEggMoveLearnset,
    },
#endif //P_FAMILY_DEDENNE

#if P_FAMILY_CARBINK
    [SPECIES_CARBINK] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FAIRY),
        .catchRate = 60,
        .expYield = 100,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Rocara"),
        .cryId = CRY_CARBINK,
        .natDexNum = NATIONAL_DEX_CARBINK,
        .categoryName = _("Edelstein"),
        .height = 3,
        .weight = 57,
        .description = COMPOUND_STRING(
        "Es wurde durch die hohen Temperaturen\n"
        "und Drücke tief unter der Erde geboren\n"
        "und verteidigt sich, indem es Strahlen\n"
        "aus dem Juwelenteil seines Körpers..."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Carbink,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Carbink,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Carbink,
        .shinyPalette = gMonShinyPalette_Carbink,
        .iconSprite = gMonIcon_Carbink,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Carbink)
        OVERWORLD(
            sPicTable_Carbink,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Carbink,
            gShinyOverworldPalette_Carbink
        )
        .levelUpLearnset = sCarbinkLevelUpLearnset,
        .teachableLearnset = sCarbinkTeachableLearnset,
    },
#endif //P_FAMILY_CARBINK

#if P_FAMILY_GOOMY
    [SPECIES_GOOMY] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 35,
        .baseSpeed     = 40,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 60,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_HYDRATION, ABILITY_GOOEY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Viscora"),
        .cryId = CRY_GOOMY,
        .natDexNum = NATIONAL_DEX_GOOMY,
        .categoryName = _("Schneckedei"),
        .height = 3,
        .weight = 28,
        .description = COMPOUND_STRING(
        "Seine Schutzquelle ist seine\n"
        "schleimige, keimbeladene Schleimhaut.\n"
        "Jeder, der es berührt, muss gründlich\n"
        "die Hände waschen."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Goomy,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Goomy,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_Goomy,
        .shinyPalette = gMonShinyPalette_Goomy,
        .iconSprite = gMonIcon_Goomy,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Goomy)
        OVERWORLD(
            sPicTable_Goomy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Goomy,
            gShinyOverworldPalette_Goomy
        )
        .levelUpLearnset = sGoomyLevelUpLearnset,
        .teachableLearnset = sGoomyTeachableLearnset,
        .eggMoveLearnset = sGoomyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_SLIGGOO, CONDITIONS({IF_NOT_REGION, REGION_HISUI})}
                            #if P_HISUIAN_FORMS
                                ,{EVO_LEVEL, 40, SPECIES_SLIGGOO_HISUI, CONDITIONS({IF_REGION, REGION_HISUI})}
                            #endif
                            ),
    },

    [SPECIES_SLIGGOO] =
    {
        .baseHP        = 68,
        .baseAttack    = 75,
        .baseDefense   = 53,
        .baseSpeed     = 60,
        .baseSpAttack  = 83,
        .baseSpDefense = 113,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 158,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_HYDRATION, ABILITY_GOOEY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Viscargot"),
        .cryId = CRY_SLIGGOO,
        .natDexNum = NATIONAL_DEX_SLIGGOO,
        .categoryName = _("Schneckedei"),
        .height = 8,
        .weight = 175,
        .description = COMPOUND_STRING(
        "Der Schleim dieses Pokémon kann alles\n"
        "auflösen. Zahnlos sprüht es Schleim\n"
        "auf seine Beute. Sobald sie schön\n"
        "aufgelöst sind, werden sie..."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sliggoo,
        .frontPicSize = MON_COORDS_SIZE(32, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sliggoo,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Sliggoo,
        .shinyPalette = gMonShinyPalette_Sliggoo,
        .iconSprite = gMonIcon_Sliggoo,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_S)
        FOOTPRINT(Sliggoo)
        OVERWORLD(
            sPicTable_Sliggoo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sliggoo,
            gShinyOverworldPalette_Sliggoo
        )
        .levelUpLearnset = sSliggooLevelUpLearnset,
        .teachableLearnset = sSliggooTeachableLearnset,
        .formSpeciesIdTable = sSliggooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 50, SPECIES_GOODRA, CONDITIONS({IF_WEATHER, WEATHER_RAIN})},
                                {EVO_LEVEL, 50, SPECIES_GOODRA, CONDITIONS({IF_WEATHER, WEATHER_FOG})}),
    },

    [SPECIES_GOODRA] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_HYDRATION, ABILITY_GOOEY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Viscogon"),
        .cryId = CRY_GOODRA,
        .natDexNum = NATIONAL_DEX_GOODRA,
        .categoryName = _("Drache"),
        .height = 20,
        .weight = 1505,
        .description = COMPOUND_STRING(
        "Es wird gehänselt, weil es sanftmütig\n"
        "ist. Doch dann bekommt derjenige, der\n"
        "es gehänselt hat, die volle Kraft\n"
        "seiner Hörner und einen kräftigen..."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Goodra,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Goodra,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Goodra,
        .shinyPalette = gMonShinyPalette_Goodra,
        .iconSprite = gMonIcon_Goodra,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Goodra)
        OVERWORLD(
            sPicTable_Goodra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Goodra,
            gShinyOverworldPalette_Goodra
        )
        .levelUpLearnset = sGoodraLevelUpLearnset,
        .teachableLearnset = sGoodraTeachableLearnset,
        .formSpeciesIdTable = sGoodraFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_SLIGGOO_HISUI] =
    {
        .baseHP        = 58,
        .baseAttack    = 75,
        .baseDefense   = 83,
        .baseSpeed     = 40,
        .baseSpAttack  = 83,
        .baseSpDefense = 113,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 158,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_SHELL_ARMOR, ABILITY_GOOEY },
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = TRUE,
#if P_SEPARATE_REGIONAL_FORMS
        .speciesName = _("SLIGGOO-H"),
#else
        .speciesName = _("Viscargot"),
#endif
        .cryId = CRY_SLIGGOO,
#if P_SEPARATE_REGIONAL_FORMS
        .natDexNum = NATIONAL_DEX_SLIGGOO_HISUI,
#else
        .natDexNum = NATIONAL_DEX_SLIGGOO,
#endif
        .categoryName = _("Schnecke"),
        .height = 7,
        .weight = 685,
        .description = COMPOUND_STRING(
        "Ein Wesen, das zur Melancholie neigt.\n"
        "Seine metallische Hülle entstand durch\n"
        "die Reaktion des Schleims auf seiner\n"
        "Haut mit dem Eisen in Hisuis Wasser."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SliggooHisui,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SliggooHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SliggooHisui,
        .shinyPalette = gMonShinyPalette_SliggooHisui,
        .iconSprite = gMonIcon_SliggooHisui,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, 6, SHADOW_SIZE_M)
        FOOTPRINT(Sliggoo)
        OVERWORLD(
            sPicTable_SliggooHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SliggooHisui,
            gShinyOverworldPalette_SliggooHisui
        )
        .isHisuianForm = TRUE,
        .dexNotRequired = TRUE,
        .levelUpLearnset = sSliggooHisuiLevelUpLearnset,
        .teachableLearnset = sSliggooHisuiTeachableLearnset,
#if P_SEPARATE_REGIONAL_FORMS
        .formSpeciesIdTable = sSliggooHisuiFormSpeciesIdTable,
#else
        .formSpeciesIdTable = sSliggooFormSpeciesIdTable,
#endif
        .evolutions = EVOLUTION({EVO_LEVEL, 50, SPECIES_GOODRA_HISUI, CONDITIONS({IF_WEATHER, WEATHER_RAIN})},
                                {EVO_LEVEL, 50, SPECIES_GOODRA_HISUI, CONDITIONS({IF_WEATHER, WEATHER_FOG})}),

    },

    [SPECIES_GOODRA_HISUI] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 300,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_SHELL_ARMOR, ABILITY_GOOEY },
        .bodyColor = BODY_COLOR_PURPLE,
#if P_SEPARATE_REGIONAL_FORMS
        .speciesName = _("GOODRA-H"),
#else
        .speciesName = _("Viscogon"),
#endif
        .cryId = CRY_GOODRA,
#if P_SEPARATE_REGIONAL_FORMS
        .natDexNum = NATIONAL_DEX_GOODRA_HISUI,
#else
        .natDexNum = NATIONAL_DEX_GOODRA,
#endif
        .categoryName = _("Schalrückzug"),
        .height = 17,
        .weight = 3341,
        .description = COMPOUND_STRING(
        "Es verabscheut die Einsamkeit und ist\n"
        "äußerst anhänglich – es wird wütend\n"
        "und außer sich vor Wut, wenn seine\n"
        "Liebsten jemals von seiner Seite..."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_GoodraHisui,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GoodraHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GoodraHisui,
        .shinyPalette = gMonShinyPalette_GoodraHisui,
        .iconSprite = gMonIcon_GoodraHisui,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Goodra)
        OVERWORLD(
            sPicTable_GoodraHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GoodraHisui,
            gShinyOverworldPalette_GoodraHisui
        )
        .isHisuianForm = TRUE,
        .dexNotRequired = TRUE,
        .levelUpLearnset = sGoodraHisuiLevelUpLearnset,
        .teachableLearnset = sGoodraHisuiTeachableLearnset,
#if P_SEPARATE_REGIONAL_FORMS
        .formSpeciesIdTable = sGoodraHisuiFormSpeciesIdTable,
#else
        .formSpeciesIdTable = sGoodraFormSpeciesIdTable,
#endif
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GOOMY

#if P_FAMILY_KLEFKI
    [SPECIES_KLEFKI] =
    {
        .baseHP        = 57,
        .baseAttack    = 80,
        .baseDefense   = 91,
        .baseSpeed     = 75,
        .baseSpAttack  = 80,
        .baseSpDefense = 87,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FAIRY),
        .catchRate = 75,
        .expYield = 165,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_PRANKSTER, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Clavion"),
        .cryId = CRY_KLEFKI,
        .natDexNum = NATIONAL_DEX_KLEFKI,
        .categoryName = _("Schlüssel"),
        .height = 2,
        .weight = 30,
        .description = COMPOUND_STRING(
        "Diese Schlüsselsammler bedrohen jeden\n"
        "Angreifer, indem sie heftig mit ihren\n"
        "Schlüsseln nach ihnen klimpern. Es\n"
        "schleicht sich in die Häuser der..."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Klefki,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_FOUR_PETAL,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Klefki,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Klefki,
        .shinyPalette = gMonShinyPalette_Klefki,
        .iconSprite = gMonIcon_Klefki,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Klefki)
        OVERWORLD(
            sPicTable_Klefki,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Klefki,
            gShinyOverworldPalette_Klefki
        )
        .levelUpLearnset = sKlefkiLevelUpLearnset,
        .teachableLearnset = sKlefkiTeachableLearnset,
        .eggMoveLearnset = sKlefkiEggMoveLearnset,
    },
#endif //P_FAMILY_KLEFKI

#if P_FAMILY_PHANTUMP
    [SPECIES_PHANTUMP] =
    {
        .baseHP        = 43,
        .baseAttack    = 70,
        .baseDefense   = 48,
        .baseSpeed     = 38,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 62,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_FRISK, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Paragoni"),
        .cryId = CRY_PHANTUMP,
        .natDexNum = NATIONAL_DEX_PHANTUMP,
        .categoryName = _("Baumstumpf"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
        "Der Legende nach kann man Medikamente\n"
        "zur Heilung jeder Krankheit\n"
        "herstellen, indem man die grünen\n"
        "Blätter auf seinem Kopf pflückt, si..."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Phantump,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Phantump,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Phantump,
        .shinyPalette = gMonShinyPalette_Phantump,
        .iconSprite = gMonIcon_Phantump,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Phantump)
        OVERWORLD(
            sPicTable_Phantump,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Phantump,
            gShinyOverworldPalette_Phantump
        )
        .levelUpLearnset = sPhantumpLevelUpLearnset,
        .teachableLearnset = sPhantumpTeachableLearnset,
        .eggMoveLearnset = sPhantumpEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_TREVENANT},
                                {EVO_LEVEL, 38, SPECIES_TREVENANT}),
    },

    [SPECIES_TREVENANT] =
    {
        .baseHP        = 85,
        .baseAttack    = 110,
        .baseDefense   = 76,
        .baseSpeed     = 56,
        .baseSpAttack  = 65,
        .baseSpDefense = 82,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 60,
        .expYield = 166,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_FRISK, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Trombork"),
        .cryId = CRY_TREVENANT,
        .natDexNum = NATIONAL_DEX_TREVENANT,
        .categoryName = _("Urgehölz"),
        .height = 15,
        .weight = 710,
        .description = COMPOUND_STRING(
        "Durch seine Wurzeln übt er Kontrolle\n"
        "über andere Bäume aus. Ein tödlicher\n"
        "Fluch lastet auf jedem, der in den\n"
        "Wäldern, in denen Trombork lebt,..."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Trevenant,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Trevenant,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Trevenant,
        .shinyPalette = gMonShinyPalette_Trevenant,
        .iconSprite = gMonIcon_Trevenant,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Trevenant)
        OVERWORLD(
            sPicTable_Trevenant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Trevenant,
            gShinyOverworldPalette_Trevenant
        )
        .levelUpLearnset = sTrevenantLevelUpLearnset,
        .teachableLearnset = sTrevenantTeachableLearnset,
    },
#endif //P_FAMILY_PHANTUMP

#if P_FAMILY_PUMPKABOO
    [SPECIES_PUMPKABOO_AVERAGE] =
    {
        .baseHP        = 49,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 51,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 67,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Irrbis"),
        .cryId = CRY_PUMPKABOO,
        .natDexNum = NATIONAL_DEX_PUMPKABOO,
        .categoryName = _("Kürbis"),
        .height = 4,
        .weight = 50,
        .description = COMPOUND_STRING(
        "Das Licht, das aus den Löchern im\n"
        "Kürbis strömt, kann die Menschen und\n"
        "Pokémon, die es sehen, hypnotisieren\n"
        "und kontrollieren."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PumpkabooAverage,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Pumpkaboo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_PumpkabooAverage,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pumpkaboo,
        .shinyPalette = gMonShinyPalette_Pumpkaboo,
        .iconSprite = gMonIcon_Pumpkaboo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Pumpkaboo)
        OVERWORLD(
            sPicTable_PumpkabooAverage,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pumpkaboo,
            gShinyOverworldPalette_Pumpkaboo
        )
        .levelUpLearnset = sPumpkabooLevelUpLearnset,
        .teachableLearnset = sPumpkabooTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
        .formSpeciesIdTable = sPumpkabooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOURGEIST_AVERAGE},
                                {EVO_LEVEL, 38, SPECIES_GOURGEIST_AVERAGE}),
    },

    [SPECIES_PUMPKABOO_SMALL] =
    {
        .baseHP        = 44,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 56,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 67,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Irrbis"),
        .cryId = CRY_PUMPKABOO,
        .natDexNum = NATIONAL_DEX_PUMPKABOO,
        .categoryName = _("Kürbis"),
        .height = 3,
        .weight = 35,
        .description = COMPOUND_STRING(
        "Wenn sie Geister ins Jenseits bringen,\n"
        "bevorzugen kleine Pumpkaboos die\n"
        "Geister von Kindern gegenüber denen"
        "von Erwachsenen."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PumpkabooSmall,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Pumpkaboo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_PumpkabooSmall,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pumpkaboo,
        .shinyPalette = gMonShinyPalette_Pumpkaboo,
        .iconSprite = gMonIcon_Pumpkaboo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Pumpkaboo)
        OVERWORLD(
            sPicTable_PumpkabooSmall,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pumpkaboo,
            gShinyOverworldPalette_Pumpkaboo
        )
        .levelUpLearnset = sPumpkabooLevelUpLearnset,
        .teachableLearnset = sPumpkabooTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
        .formSpeciesIdTable = sPumpkabooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOURGEIST_SMALL},
                                {EVO_LEVEL, 38, SPECIES_GOURGEIST_SMALL}),
    },

    [SPECIES_PUMPKABOO_LARGE] =
    {
        .baseHP        = 54,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 46,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 67,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Irrbis"),
        .cryId = CRY_PUMPKABOO,
        .natDexNum = NATIONAL_DEX_PUMPKABOO,
        .categoryName = _("Kürbis"),
        .height = 5,
        .weight = 75,
        .description = COMPOUND_STRING(
        "Wenn große Pumpkaboos Geister ins\n"
        "Jenseits transportieren, bevorzugen\n"
        "sie die Geister von Erwachsenen"
        "gegenüber denen von Kindern."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PumpkabooLarge,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Pumpkaboo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_PumpkabooLarge,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pumpkaboo,
        .shinyPalette = gMonShinyPalette_Pumpkaboo,
        .iconSprite = gMonIcon_Pumpkaboo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Pumpkaboo)
        OVERWORLD(
            sPicTable_PumpkabooLarge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pumpkaboo,
            gShinyOverworldPalette_Pumpkaboo
        )
        .levelUpLearnset = sPumpkabooLevelUpLearnset,
        .teachableLearnset = sPumpkabooTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
        .formSpeciesIdTable = sPumpkabooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOURGEIST_LARGE},
                                {EVO_LEVEL, 38, SPECIES_GOURGEIST_LARGE}),
    },

    [SPECIES_PUMPKABOO_SUPER] =
    {
        .baseHP        = 59,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 41,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 67,
        .evYield_Defense = 1,
        .itemCommon = ITEM_MIRACLE_SEED,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Irrbis"),
        .cryId = CRY_PUMPKABOO_SUPER,
        .natDexNum = NATIONAL_DEX_PUMPKABOO,
        .categoryName = _("Kürbis"),
        .height = 8,
        .weight = 150,
        .description = COMPOUND_STRING(
        "Übergroße Pumpkaboos haben eine große\n"
        "Vorliebe für die Geister von Menschen,\n"
        "die ähnlich große Proportionen hatten."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PumpkabooSuper,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Pumpkaboo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_PumpkabooSuper,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pumpkaboo,
        .shinyPalette = gMonShinyPalette_Pumpkaboo,
        .iconSprite = gMonIcon_Pumpkaboo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Pumpkaboo)
        OVERWORLD(
            sPicTable_PumpkabooSuper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pumpkaboo,
            gShinyOverworldPalette_Pumpkaboo
        )
        .levelUpLearnset = sPumpkabooLevelUpLearnset,
        .teachableLearnset = sPumpkabooTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
        .formSpeciesIdTable = sPumpkabooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOURGEIST_SUPER},
                                {EVO_LEVEL, 38, SPECIES_GOURGEIST_SUPER}),
    },

    [SPECIES_GOURGEIST_AVERAGE] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 122,
        .baseSpeed     = 84,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 60,
        .expYield = 173,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pumpdjinn"),
        .cryId = CRY_GOURGEIST,
        .natDexNum = NATIONAL_DEX_GOURGEIST,
        .categoryName = _("Kürbis"),
        .height = 9,
        .weight = 125,
        .description = COMPOUND_STRING(
        "Mitten in der Nacht ertönen\n"
        "unheimliche Schreie aus seinem Körper.\n"
        "Es heißt, dass es sich bei den\n"
        "Geräuschen um das Wehklagen von..."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GourgeistAverage,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Gourgeist,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_GourgeistAverage,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gourgeist,
        .shinyPalette = gMonShinyPalette_Gourgeist,
        .iconSprite = gMonIcon_Gourgeist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 10, SHADOW_SIZE_M)
        FOOTPRINT(Gourgeist)
        OVERWORLD(
            sPicTable_GourgeistAverage,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gourgeist,
            gShinyOverworldPalette_Gourgeist
        )
        .levelUpLearnset = sGourgeistLevelUpLearnset,
        .teachableLearnset = sGourgeistTeachableLearnset,
        .formSpeciesIdTable = sGourgeistFormSpeciesIdTable,
    },

    [SPECIES_GOURGEIST_SMALL] =
    {
        .baseHP        = 55,
        .baseAttack    = 85,
        .baseDefense   = 122,
        .baseSpeed     = 99,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 60,
        .expYield = 173,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pumpdjinn"),
        .cryId = CRY_GOURGEIST,
        .natDexNum = NATIONAL_DEX_GOURGEIST,
        .categoryName = _("Kürbis"),
        .height = 7,
        .weight = 95,
        .description = COMPOUND_STRING(
        "Ein kleiner Irrbis entwickelt sich\n"
        "zu einem kleinen Pumpdjinn. Seine\n"
        "Körperproportionen werden auch an\n"
        "seine Nachkommen weitergegeben."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GourgeistSmall,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Gourgeist,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_GourgeistSmall,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gourgeist,
        .shinyPalette = gMonShinyPalette_Gourgeist,
        .iconSprite = gMonIcon_Gourgeist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 9, SHADOW_SIZE_S)
        FOOTPRINT(Gourgeist)
        OVERWORLD(
            sPicTable_GourgeistSmall,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gourgeist,
            gShinyOverworldPalette_Gourgeist
        )
        .levelUpLearnset = sGourgeistLevelUpLearnset,
        .teachableLearnset = sGourgeistTeachableLearnset,
        .formSpeciesIdTable = sGourgeistFormSpeciesIdTable,
    },

    [SPECIES_GOURGEIST_LARGE] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 122,
        .baseSpeed     = 69,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 60,
        .expYield = 173,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pumpdjinn"),
        .cryId = CRY_GOURGEIST,
        .natDexNum = NATIONAL_DEX_GOURGEIST,
        .categoryName = _("Kürbis"),
        .height = 11,
        .weight = 140,
        .description = COMPOUND_STRING(
        "Aus einem großen Irrbis wird ein\n"
        "großer Pumpdjinn. Seine\n"
        "Körperproportionen werden auch an\n"
        "seine Nachkommen weitergegeben."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GourgeistLarge,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Gourgeist,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_GourgeistLarge,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gourgeist,
        .shinyPalette = gMonShinyPalette_Gourgeist,
        .iconSprite = gMonIcon_Gourgeist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 12, SHADOW_SIZE_M)
        FOOTPRINT(Gourgeist)
        OVERWORLD(
            sPicTable_GourgeistLarge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Gourgeist,
            gShinyOverworldPalette_Gourgeist
        )
        .levelUpLearnset = sGourgeistLevelUpLearnset,
        .teachableLearnset = sGourgeistTeachableLearnset,
        .formSpeciesIdTable = sGourgeistFormSpeciesIdTable,
    },

    [SPECIES_GOURGEIST_SUPER] =
    {
        .baseHP        = 85,
        .baseAttack    = 100,
        .baseDefense   = 122,
        .baseSpeed     = 54,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 60,
        .expYield = 173,
        .evYield_Defense = 2,
        .itemCommon = ITEM_MIRACLE_SEED,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pumpdjinn"),
        .cryId = CRY_GOURGEIST_SUPER,
        .natDexNum = NATIONAL_DEX_GOURGEIST,
        .categoryName = _("Kürbis"),
        .height = 17,
        .weight = 390,
        .description = COMPOUND_STRING(
        "Ein übergroßer Irrbis entwickelt\n"
        "sich zu einem übergroßen Pumpdjinn.\n"
        "Seine Körperproportionen werden auch\n"
        "an seine Nachkommen weitergegeben."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GourgeistSuper,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Gourgeist,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_GourgeistSuper,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gourgeist,
        .shinyPalette = gMonShinyPalette_Gourgeist,
        .iconSprite = gMonIcon_Gourgeist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 14, SHADOW_SIZE_M)
        FOOTPRINT(Gourgeist)
        OVERWORLD(
            sPicTable_GourgeistSuper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gourgeist,
            gShinyOverworldPalette_Gourgeist
        )
        .levelUpLearnset = sGourgeistLevelUpLearnset,
        .teachableLearnset = sGourgeistTeachableLearnset,
        .formSpeciesIdTable = sGourgeistFormSpeciesIdTable,
    },
#endif //P_FAMILY_PUMPKABOO

#if P_FAMILY_BERGMITE
#if P_UPDATED_EGG_GROUPS >= GEN_8
    #define BERGMITE_EGG_GROUPS MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_MINERAL)
#else
    #define BERGMITE_EGG_GROUPS MON_EGG_GROUPS(EGG_GROUP_MONSTER)
#endif

    [SPECIES_BERGMITE] =
    {
        .baseHP        = 55,
        .baseAttack    = 69,
        .baseDefense   = 85,
        .baseSpeed     = 28,
        .baseSpAttack  = 32,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = BERGMITE_EGG_GROUPS,
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_ICE_BODY, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Arktip"),
        .cryId = CRY_BERGMITE,
        .natDexNum = NATIONAL_DEX_BERGMITE,
        .categoryName = _("Eisklumpen"),
        .height = 10,
        .weight = 995,
        .description = COMPOUND_STRING(
        "Es blockiert die Angriffe der Gegner\n"
        "mit dem Eis, das seinen Körper\n"
        "schützt. Es verwendet kalte Luft, um\n"
        "eventuelle Risse mit neuem Eis zu..."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bergmite,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_LUNGE_GROW,
        .backPic = gMonBackPic_Bergmite,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Bergmite,
        .shinyPalette = gMonShinyPalette_Bergmite,
        .iconSprite = gMonIcon_Bergmite,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Bergmite)
        OVERWORLD(
            sPicTable_Bergmite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bergmite,
            gShinyOverworldPalette_Bergmite
        )
        .levelUpLearnset = sBergmiteLevelUpLearnset,
        .teachableLearnset = sBergmiteTeachableLearnset,
        .eggMoveLearnset = sBergmiteEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_AVALUGG, CONDITIONS({IF_NOT_REGION, REGION_HISUI})}
                            #if P_HISUIAN_FORMS
                                ,{EVO_LEVEL, 37, SPECIES_AVALUGG_HISUI, CONDITIONS({IF_REGION, REGION_HISUI})}
                            #endif
                            ),
    },

    [SPECIES_AVALUGG] =
    {
        .baseHP        = 95,
        .baseAttack    = 117,
        .baseDefense   = 184,
        .baseSpeed     = 28,
        .baseSpAttack  = 44,
        .baseSpDefense = 46,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 55,
        .expYield = 180,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = BERGMITE_EGG_GROUPS,
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_ICE_BODY, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Arktilas"),
        .cryId = CRY_AVALUGG,
        .natDexNum = NATIONAL_DEX_AVALUGG,
        .categoryName = _("Eisberg"),
        .height = 20,
        .weight = 5050,
        .description = COMPOUND_STRING(
        "Die Art und Weise, wie sich mehrere\n"
        "Bergmiten auf seinem Rücken\n"
        "zusammendrängen, lassen ihn wie einen\n"
        "Flugzeugträger aus Eis aussehen. Se..."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Avalugg,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Avalugg,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Avalugg,
        .shinyPalette = gMonShinyPalette_Avalugg,
        .iconSprite = gMonIcon_Avalugg,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, -1, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Avalugg)
        OVERWORLD(
            sPicTable_Avalugg,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Avalugg,
            gShinyOverworldPalette_Avalugg
        )
        .levelUpLearnset = sAvaluggLevelUpLearnset,
        .teachableLearnset = sAvaluggTeachableLearnset,
        .formSpeciesIdTable = sAvaluggFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_AVALUGG_HISUI] =
    {
        .baseHP        = 95,
        .baseAttack    = 127,
        .baseDefense   = 184,
        .baseSpeed     = 38,
        .baseSpAttack  = 34,
        .baseSpDefense = 36,
        .types = MON_TYPES(TYPE_ICE, TYPE_ROCK),
        .catchRate = 55,
        .expYield = 180,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = BERGMITE_EGG_GROUPS,
        .abilities = { ABILITY_STRONG_JAW, ABILITY_ICE_BODY, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_BLUE,
#if P_SEPARATE_REGIONAL_FORMS
        .speciesName = _("AVALUGG-H"),
#else
        .speciesName = _("Arktilas"),
#endif
        .cryId = CRY_AVALUGG,
#if P_SEPARATE_REGIONAL_FORMS
        .natDexNum = NATIONAL_DEX_AVALUGG_HISUI,
#else
        .natDexNum = NATIONAL_DEX_AVALUGG,
#endif
        .categoryName = _("Eisberg"),
        .height = 14,
        .weight = 2624,
        .description = COMPOUND_STRING(
        "Die Eispanzerung, die seinen\n"
        "Unterkiefer bedeckt, stellt Stahl in\n"
        "den Schatten und kann Steine ​​mit"
        "Leichtigkeit zertrümmern."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_AvaluggHisui,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AvaluggHisui,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_AvaluggHisui,
        .shinyPalette = gMonShinyPalette_AvaluggHisui,
        .iconSprite = gMonIcon_AvaluggHisui,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, -2, SHADOW_SIZE_L)
        FOOTPRINT(Avalugg)
        OVERWORLD(
            sPicTable_AvaluggHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_AvaluggHisui,
            gShinyOverworldPalette_AvaluggHisui
        )
        .isHisuianForm = TRUE,
        .dexNotRequired = TRUE,
        .levelUpLearnset = sAvaluggHisuiLevelUpLearnset,
        .teachableLearnset = sAvaluggHisuiTeachableLearnset,
#if P_SEPARATE_REGIONAL_FORMS
        .formSpeciesIdTable = sAvaluggHisuiFormSpeciesIdTable,
#else
        .formSpeciesIdTable = sAvaluggFormSpeciesIdTable,
#endif
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BERGMITE

#if P_FAMILY_NOIBAT
#if P_UPDATED_EGG_GROUPS >= GEN_8
    #define NOIBAT_EGG_GROUPS MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_DRAGON)
#else
    #define NOIBAT_EGG_GROUPS MON_EGG_GROUPS(EGG_GROUP_FLYING)
#endif

    [SPECIES_NOIBAT] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 45,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_FLYING, TYPE_DRAGON),
        .catchRate = 190,
        .expYield = 49,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = NOIBAT_EGG_GROUPS,
        .abilities = { ABILITY_FRISK, ABILITY_INFILTRATOR, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("eF-eM"),
        .cryId = CRY_NOIBAT,
        .natDexNum = NATIONAL_DEX_NOIBAT,
        .categoryName = _("Schallwellen"),
        .height = 5,
        .weight = 80,
        .description = COMPOUND_STRING(
        "Sie leben in pechschwarzen Höhlen.\n"
        "Selbst einem robusten Ringer wird\n"
        "schwindelig und er kann nicht mehr\n"
        "stehen, wenn er den..."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Noibat,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Noibat,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Noibat,
        .shinyPalette = gMonShinyPalette_Noibat,
        .iconSprite = gMonIcon_Noibat,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Noibat)
        OVERWORLD(
            sPicTable_Noibat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Noibat,
            gShinyOverworldPalette_Noibat
        )
        .levelUpLearnset = sNoibatLevelUpLearnset,
        .teachableLearnset = sNoibatTeachableLearnset,
        .eggMoveLearnset = sNoibatEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 48, SPECIES_NOIVERN}),
    },

    [SPECIES_NOIVERN] =
    {
        .baseHP        = 85,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 123,
        .baseSpAttack  = 97,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FLYING, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 187,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = NOIBAT_EGG_GROUPS,
        .abilities = { ABILITY_FRISK, ABILITY_INFILTRATOR, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("UHaFnir"),
        .cryId = CRY_NOIVERN,
        .natDexNum = NATIONAL_DEX_NOIVERN,
        .categoryName = _("Schallwellen"),
        .height = 15,
        .weight = 850,
        .description = COMPOUND_STRING(
        "Sie fliegen in mondlosen Nächten umher\n"
        "und greifen unvorsichtige Beute an.\n"
        "Die Ultraschallwellen, die es aus\n"
        "seinen Ohren aussendet, können eine..."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Noivern,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Noivern,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Noivern,
        .shinyPalette = gMonShinyPalette_Noivern,
        .iconSprite = gMonIcon_Noivern,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 10, SHADOW_SIZE_L)
        FOOTPRINT(Noivern)
        OVERWORLD(
            sPicTable_Noivern,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Noivern,
            gShinyOverworldPalette_Noivern
        )
        .levelUpLearnset = sNoivernLevelUpLearnset,
        .teachableLearnset = sNoivernTeachableLearnset,
    },
#endif //P_FAMILY_NOIBAT

#if P_FAMILY_XERNEAS
    [SPECIES_XERNEAS_NEUTRAL] =
    {
        .baseHP        = 126,
        .baseAttack    = 131,
        .baseDefense   = 95,
        .baseSpeed     = 99,
        .baseSpAttack  = 131,
        .baseSpDefense = 98,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 340 : 306,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_FAIRY_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Xerneas"),
        .cryId = CRY_XERNEAS,
        .natDexNum = NATIONAL_DEX_XERNEAS,
        .categoryName = _("Leben"),
        .height = 30,
        .weight = 2150,
        .description = gXerneasPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_XerneasNeutral,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Xerneas,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_XerneasNeutral,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_XerneasNeutral,
        .shinyPalette = gMonShinyPalette_XerneasNeutral,
        .iconSprite = gMonIcon_XerneasNeutral,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Xerneas)
        OVERWORLD(
            sPicTable_XerneasNeutral,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_XerneasNeutral,
            gShinyOverworldPalette_XerneasNeutral
        )
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sXerneasLevelUpLearnset,
        .teachableLearnset = sXerneasTeachableLearnset,
        .formSpeciesIdTable = sXerneasFormSpeciesIdTable,
        .formChangeTable = sXerneasFormChangeTable,
    },

    [SPECIES_XERNEAS_ACTIVE] =
    {
        .baseHP        = 126,
        .baseAttack    = 131,
        .baseDefense   = 95,
        .baseSpeed     = 99,
        .baseSpAttack  = 131,
        .baseSpDefense = 98,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 340 : 306,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_FAIRY_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Xerneas"),
        .cryId = CRY_XERNEAS,
        .natDexNum = NATIONAL_DEX_XERNEAS,
        .categoryName = _("Leben"),
        .height = 30,
        .weight = 2150,
        .description = gXerneasPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_XerneasActive,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Xerneas,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_XerneasActive,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_XerneasActive,
        .shinyPalette = gMonShinyPalette_XerneasActive,
        .iconSprite = gMonIcon_XerneasActive,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Xerneas)
        OVERWORLD(
            sPicTable_XerneasActive,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_XerneasNeutral,
            gShinyOverworldPalette_XerneasNeutral
        )
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sXerneasLevelUpLearnset,
        .teachableLearnset = sXerneasTeachableLearnset,
        .formSpeciesIdTable = sXerneasFormSpeciesIdTable,
        .formChangeTable = sXerneasFormChangeTable,
    },
#endif //P_FAMILY_XERNEAS

#if P_FAMILY_YVELTAL
    [SPECIES_YVELTAL] =
    {
        .baseHP        = 126,
        .baseAttack    = 131,
        .baseDefense   = 95,
        .baseSpeed     = 99,
        .baseSpAttack  = 131,
        .baseSpDefense = 98,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 340 : 306,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Yveltal"),
        .cryId = CRY_YVELTAL,
        .natDexNum = NATIONAL_DEX_YVELTAL,
        .categoryName = _("Zerstörung"),
        .height = 58,
        .weight = 2030,
        .description = COMPOUND_STRING(
        "Wenn sein Leben zu Ende geht, breiten\n"
        "sich seine Flügel und sein Schwanz aus\n"
        "und leuchten rot, und es absorbiert\n"
        "die Lebensenergie jedes Lebewesens..."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Yveltal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_FRONT_FLIP,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Yveltal,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Yveltal,
        .shinyPalette = gMonShinyPalette_Yveltal,
        .iconSprite = gMonIcon_Yveltal,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 16, SHADOW_SIZE_L)
        FOOTPRINT(Yveltal)
        OVERWORLD(
            sPicTable_Yveltal,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Yveltal,
            gShinyOverworldPalette_Yveltal
        )
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sYveltalLevelUpLearnset,
        .teachableLearnset = sYveltalTeachableLearnset,
    },
#endif //P_FAMILY_YVELTAL

#if P_FAMILY_ZYGARDE
    [SPECIES_ZYGARDE_50] =
    {
        .baseHP        = 108,
        .baseAttack    = 100,
        .baseDefense   = 121,
        .baseSpeed     = 95,
        .baseSpAttack  = 81,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_AURA_BREAK, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_50,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Ordnung"),
        .height = 50,
        .weight = 3050,
        .description = gZygarde50PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Zygarde50,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Zygarde50,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Zygarde50,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Zygarde50,
        .shinyPalette = gMonShinyPalette_Zygarde50,
        .iconSprite = gMonIcon_Zygarde50,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_Zygarde50,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zygarde50,
            gShinyOverworldPalette_Zygarde50
        )
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZygardeLevelUpLearnset,
        .teachableLearnset = sZygardeTeachableLearnset,
        .formSpeciesIdTable = sZygardeFormSpeciesIdTable,
        .formChangeTable = sZygarde50AuraBreakFormChangeTable,
    },

    [SPECIES_ZYGARDE_50_POWER_CONSTRUCT] =
    {
        .baseHP        = 108,
        .baseAttack    = 100,
        .baseDefense   = 121,
        .baseSpeed     = 95,
        .baseSpAttack  = 81,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_POWER_CONSTRUCT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_50,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Ordnung"),
        .height = 50,
        .weight = 3050,
        .description = gZygarde50PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Zygarde50,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Zygarde50,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Zygarde50,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_Zygarde50,
        .shinyPalette = gMonShinyPalette_Zygarde50,
        .iconSprite = gMonIcon_Zygarde50,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_Zygarde50,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zygarde50,
            gShinyOverworldPalette_Zygarde50
        )
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZygardeLevelUpLearnset,
        .teachableLearnset = sZygardeTeachableLearnset,
        .formSpeciesIdTable = sZygardeFormSpeciesIdTable,
        .formChangeTable = sZygarde50PowerConstructFormChangeTable,
    },

    [SPECIES_ZYGARDE_10_AURA_BREAK] =
    {
        .baseHP        = 54,
        .baseAttack    = 100,
        .baseDefense   = 71,
        .baseSpeed     = 115,
        .baseSpAttack  = 61,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 243 : 219,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_AURA_BREAK, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_10,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Ordnung"),
        .height = 12,
        .weight = 335,
        .description = gZygarde10PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Zygarde10,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Zygarde10,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,,
        .backPic = gMonBackPic_Zygarde10,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Zygarde10,
        .shinyPalette = gMonShinyPalette_Zygarde10,
        .iconSprite = gMonIcon_Zygarde10,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_Zygarde10,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Zygarde10,
            gShinyOverworldPalette_Zygarde10
        )
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZygardeLevelUpLearnset,
        .teachableLearnset = sZygardeTeachableLearnset,
        .formSpeciesIdTable = sZygardeFormSpeciesIdTable,
        .formChangeTable = sZygarde10AuraBreakFormChangeTable,
    },

    [SPECIES_ZYGARDE_10_POWER_CONSTRUCT] =
    {
        .baseHP        = 54,
        .baseAttack    = 100,
        .baseDefense   = 71,
        .baseSpeed     = 115,
        .baseSpAttack  = 61,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 243 : 219,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_POWER_CONSTRUCT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_10,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Ordnung"),
        .height = 12,
        .weight = 335,
        .description = gZygarde10PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Zygarde10,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Zygarde10,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,,
        .backPic = gMonBackPic_Zygarde10,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_Zygarde10,
        .shinyPalette = gMonShinyPalette_Zygarde10,
        .iconSprite = gMonIcon_Zygarde10,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_Zygarde10,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Zygarde10,
            gShinyOverworldPalette_Zygarde10
        )
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZygardeLevelUpLearnset,
        .teachableLearnset = sZygardeTeachableLearnset,
        .formSpeciesIdTable = sZygardeFormSpeciesIdTable,
        .formChangeTable = sZygarde10PowerConstructFormChangeTable,
    },

    [SPECIES_ZYGARDE_COMPLETE] =
    {
        .baseHP        = 216,
        .baseAttack    = 100,
        .baseDefense   = 121,
        .baseSpeed     = 85,
        .baseSpAttack  = 91,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 354 : 319,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_POWER_CONSTRUCT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_COMPLETE,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Ordnung"),
        .height = 45,
        .weight = 6100,
        .description = COMPOUND_STRING(
        "Dies ist Zygardes perfektionierte\n"
        "Form. Aus der Öffnung auf seiner Brust\n"
        "strahlt es starke Energie aus, die\n"
        "alles vernichtet."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_ZygardeComplete,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_ZygardeComplete,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_ZygardeComplete,
        .shinyPalette = gMonShinyPalette_ZygardeComplete,
        .iconSprite = gMonIcon_ZygardeComplete,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_ZygardeComplete, 
            SIZE_32x32, //TODO: 64x64 overworld sprite!
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_ZygardeComplete,
            gShinyOverworldPalette_ZygardeComplete
        )
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZygardeLevelUpLearnset,
        .teachableLearnset = sZygardeTeachableLearnset,
        .formSpeciesIdTable = sZygardeFormSpeciesIdTable,
        .formChangeTable = sZygardeCompleteFormChangeTable,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_ZYGARDE_MEGA] =
    {
        .baseHP        = 216,
        .baseAttack    = 70,
        .baseDefense   = 91,
        .baseSpeed     = 100,
        .baseSpAttack  = 216,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 3,
        .expYield = 354,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_AURA_BREAK, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Zygarde"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_ZYGARDE_MEGA,
    #else
        .cryId = CRY_ZYGARDE_COMPLETE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Ordnung"),
        .height = 77,
        .weight = 6100,
        .description = COMPOUND_STRING(
        "Als Reaktion auf die Emotionen der\n"
        "Menschen während einer beispiellosen\n"
        "Krise entwickelt sich Zygarde Mega\n"
        "weiter und beruhigt die Situation m..."),
        .frontPic = gMonFrontPic_ZygardeMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_ZygardeMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ZygardeMega,
        .shinyPalette = gMonShinyPalette_ZygardeMega,
        .iconSprite = gMonIcon_ZygardeMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Zygarde)
        SHADOW(8, 20, SHADOW_SIZE_M)
        .isMegaEvolution = TRUE,
        .isRestrictedLegendary = TRUE,
        .levelUpLearnset = sZygardeLevelUpLearnset,
        .teachableLearnset = sZygardeTeachableLearnset,
        .formSpeciesIdTable = sZygardeFormSpeciesIdTable,
        .formChangeTable = sZygardeCompleteFormChangeTable,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_ZYGARDE

#if P_FAMILY_DIANCIE
    [SPECIES_DIANCIE] =
    {
        .baseHP        = 50,
        .baseAttack    = 100,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 100,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FAIRY),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Diancie"),
        .cryId = CRY_DIANCIE,
        .natDexNum = NATIONAL_DEX_DIANCIE,
        .categoryName = _("Edelstein"),
        .height = 7,
        .weight = 88,
        .description = COMPOUND_STRING(
        "Eine plötzliche Verwandlung von\n"
        "Rocara, sein rosa schimmernder Körper\n"
        "soll der schönste Anblick auf der\n"
        "ganzen Welt sein. Es erschafft..."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Diancie,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Diancie,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Diancie,
        .shinyPalette = gMonShinyPalette_Diancie,
        .iconSprite = gMonIcon_Diancie,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Diancie)
        OVERWORLD(
            sPicTable_Diancie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Diancie,
            gShinyOverworldPalette_Diancie
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDiancieLevelUpLearnset,
        .teachableLearnset = sDiancieTeachableLearnset,
        .formSpeciesIdTable = sDiancieFormSpeciesIdTable,
        .formChangeTable = sDiancieFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_DIANCIE_MEGA] =
    {
        .baseHP        = 50,
        .baseAttack    = 160,
        .baseDefense   = 110,
        .baseSpeed     = 110,
        .baseSpAttack  = 160,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FAIRY),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Diancie"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_DIANCIE_MEGA,
    #else
        .cryId = CRY_DIANCIE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_DIANCIE,
        .categoryName = _("Edelstein"),
        .height = 11,
        .weight = 278,
        .description = COMPOUND_STRING(
        "Die Unreinheiten auf der\n"
        "Körperoberfläche sind abgefallen und\n"
        "funkeln so strahlend, dass man sie\n"
        "nicht direkt beobachten kann. Sie i..."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DiancieMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DiancieMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DiancieMega,
        .shinyPalette = gMonShinyPalette_DiancieMega,
        .iconSprite = gMonIcon_DiancieMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_M)
        FOOTPRINT(Diancie)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_DiancieMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DiancieMega,
            gShinyOverworldPalette_DiancieMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMythical = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDiancieLevelUpLearnset,
        .teachableLearnset = sDiancieTeachableLearnset,
        .formSpeciesIdTable = sDiancieFormSpeciesIdTable,
        .formChangeTable = sDiancieFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DIANCIE

#if P_FAMILY_HOOPA
    [SPECIES_HOOPA_CONFINED] =
    {
        .baseHP        = 80,
        .baseAttack    = 110,
        .baseDefense   = 60,
        .baseSpeed     = 70,
        .baseSpAttack  = 150,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_GHOST),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_MAGICIAN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Hoopa"),
        .cryId = CRY_HOOPA_CONFINED,
        .natDexNum = NATIONAL_DEX_HOOPA,
        .categoryName = _("Schabernack"),
        .height = 5,
        .weight = 90,
        .description = COMPOUND_STRING(
        "In seiner wahren Form besitzt es eine\n"
        "enorme Kraft. Wenn seine Kräfte\n"
        "versiegelt werden, verwandelt es sich\n"
        "in eine viel kleinere Form. Es..."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_HoopaConfined,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 13,
        .backPic = gMonBackPic_HoopaConfined,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_HoopaConfined,
        .shinyPalette = gMonShinyPalette_HoopaConfined,
        .iconSprite = gMonIcon_HoopaConfined,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Hoopa)
        OVERWORLD(
            sPicTable_HoopaConfined,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_HoopaConfined,
            gShinyOverworldPalette_HoopaConfined
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sHoopaConfinedLevelUpLearnset,
        .teachableLearnset = sHoopaConfinedTeachableLearnset,
        .formSpeciesIdTable = sHoopaFormSpeciesIdTable,
        .formChangeTable = sHoopaFormChangeTable,
    },

    [SPECIES_HOOPA_UNBOUND] =
    {
        .baseHP        = 80,
        .baseAttack    = 160,
        .baseDefense   = 60,
        .baseSpeed     = 80,
        .baseSpAttack  = 170,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_DARK),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = P_UPDATED_FRIENDSHIP >= GEN_8 ? STANDARD_FRIENDSHIP : 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_MAGICIAN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Hoopa"),
        .cryId = CRY_HOOPA_UNBOUND,
        .natDexNum = NATIONAL_DEX_HOOPA,
        .categoryName = _("Plagegeist"),
        .height = 65,
        .weight = 490,
        .description = COMPOUND_STRING(
        "Es ist die wahre Form von Hoopa,\n"
        "dessen Macht versiegelt wurde. Die\n"
        "Ringe, die es trägt, haben die Kraft,\n"
        "Dimensionen zu verändern und sind i..."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_HoopaUnbound,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_HoopaUnbound,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_HoopaUnbound,
        .shinyPalette = gMonShinyPalette_HoopaUnbound,
        .iconSprite = gMonIcon_HoopaUnbound,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Hoopa)
        OVERWORLD(
            sPicTable_HoopaUnbound,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_HoopaUnbound,
            gShinyOverworldPalette_HoopaUnbound
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sHoopaUnboundLevelUpLearnset,
        .teachableLearnset = sHoopaUnboundTeachableLearnset,
        .formSpeciesIdTable = sHoopaFormSpeciesIdTable,
        .formChangeTable = sHoopaFormChangeTable,
    },
#endif //P_FAMILY_HOOPA

#if P_FAMILY_VOLCANION
    [SPECIES_VOLCANION] =
    {
        .baseHP        = 80,
        .baseAttack    = 110,
        .baseDefense   = 120,
        .baseSpeed     = 70,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_FIRE, TYPE_WATER),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Volcanion"),
        .cryId = CRY_VOLCANION,
        .natDexNum = NATIONAL_DEX_VOLCANION,
        .categoryName = _("Dampf"),
        .height = 17,
        .weight = 1950,
        .description = COMPOUND_STRING(
        "Aus den Armen auf dem Rücken stößt es\n"
        "Dampfwolken aus und verschwindet im\n"
        "dichten Nebel. Man sagt, dass er in\n"
        "Bergen lebt, die von Menschen nicht..."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Volcanion,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Volcanion,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Volcanion,
        .shinyPalette = gMonShinyPalette_Volcanion,
        .iconSprite = gMonIcon_Volcanion,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Volcanion)
        OVERWORLD(
            sPicTable_Volcanion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Volcanion,
            gShinyOverworldPalette_Volcanion
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sVolcanionLevelUpLearnset,
        .teachableLearnset = sVolcanionTeachableLearnset,
    },
#endif //P_FAMILY_VOLCANION

#ifdef __INTELLISENSE__
};
#endif
