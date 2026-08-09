#ifndef GUARD_POKEDEX_H
#define GUARD_POKEDEX_H

extern u8 gUnusedPokedexU8;
extern void (*gPokedexVBlankCB)(void);

void ResetPokedex(void);
u16 GetNationalPokedexCount(u8 caseID);
u32 GetRegionalPokedexCount(u8 caseID);
u16 GetHoennPokedexCount(u8 caseID);
u16 GetKantoPokedexCount(u8 caseID);
u16 GetJohtoPokedexCount(u8 caseID);
u8 DisplayCaughtMonDexPage(u16 species, bool32 isShiny, u32 personality);
u32 Pokedex_CreateCaughtMonSprite(u32 species, s32 x, s32 y);
s8 GetSetPokedexFlag(enum NationalDexOrder nationalDexNo, u8 caseID);
void DrawFootprint(u8 windowId, u16 species);
u16 CreateMonSpriteFromNationalDexNumber(enum NationalDexOrder nationalNum, s16 x, s16 y, u16 paletteSlot);
bool16 HasAllRegionalMons(void);
bool16 HasAllHoennMons(void);
bool16 HasAllKantoMons(void);
bool16 HasAllJohotoMons(void);
void ResetPokedexScrollPositions(void);
bool16 HasAllMons(void);
void CB2_OpenPokedex(void);
void PrintMonMeasurements(u16 species, u32 owned);
u8* ConvertMonHeightToString(u32 height);
u8* ConvertMonWeightToString(u32 weight);
void RevealDexEntriesForGymLeader(u16 leaderFlag);
void RevealDexEntries_Violet(void);
void RevealDexEntries_Azalea(void);
void RevealDexEntries_Goldenrod(void);
void RevealDexEntries_Ecruteak(void);
void RevealDexEntries_Cianwood(void);
void RevealDexEntries_Olivine(void);
void RevealDexEntries_Mahogany(void);
void RevealDexEntries_Blackthorn(void);
void RevealDexEntries_Pewter(void);
void RevealDexEntries_Cerulean(void);
void RevealDexEntries_Vermilion(void);
void RevealDexEntries_Celadon(void);
void RevealDexEntries_Saffron(void);
void RevealDexEntries_Fuchsia(void);
void RevealDexEntries_Cinnabar(void);
void RevealDexEntries_Viridian(void);

#endif // GUARD_POKEDEX_H
