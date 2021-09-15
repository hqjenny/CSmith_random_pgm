/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 5497.c
 * Seed:      772670152
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_2[10][5][4] = {{{65530UL,0UL,1UL,0xBE36L},{0x32A8L,65535UL,0UL,0UL},{0x5440L,0UL,0UL,65529UL},{0x32A8L,0x55F0L,1UL,0x5440L},{65530UL,0x1438L,65529UL,0x25B0L}},{{65529UL,0x25B0L,0x4A8BL,65527UL},{0x5714L,0x373AL,0UL,65532UL},{0x55F0L,1UL,0xC924L,1UL},{0x08F8L,0xC924L,1UL,3UL},{65532UL,0UL,0x5440L,0x56A9L}},{{1UL,0UL,0x5714L,0xC3EEL},{0x1D26L,0x3EE7L,1UL,65530UL},{0x373AL,65527UL,0x55F0L,0x5411L},{0xC924L,0UL,0xB779L,0xB779L},{0UL,0UL,0x373AL,65530UL}},{{0x1D26L,65535UL,0x6890L,1UL},{65532UL,0x3EE7L,0x9576L,0x6890L},{5UL,0x3EE7L,3UL,1UL},{0x3EE7L,65535UL,0UL,65530UL},{65535UL,0UL,0xC3EEL,0xB779L}},{{0x5440L,0UL,65526UL,0x5411L},{3UL,65527UL,0x5440L,65530UL},{0UL,65526UL,6UL,0x4A8BL},{0x1438L,0xC924L,0UL,0xBE36L},{65530UL,0xB779L,0xAB22L,0xC17EL}},{{0xBE36L,65530UL,0x5411L,0x32A8L},{0x5714L,0x1D26L,0xC17EL,0x6745L},{0x2FDEL,65530UL,0x25B0L,0x9933L},{0x56A9L,1UL,65529UL,1UL},{1UL,0UL,0x1D26L,1UL}},{{0xB779L,1UL,5UL,0x56A9L},{1UL,65535UL,0x1D21L,65529UL},{1UL,0x5411L,5UL,0x1438L},{0xB779L,65529UL,0x1D26L,0x1E87L},{1UL,0UL,65529UL,0xAB22L}},{{0x56A9L,0x6890L,0x25B0L,1UL},{0x2FDEL,0UL,0xC17EL,0x55F0L},{0x5714L,0x56A9L,0x5411L,0x9576L},{0xBE36L,6UL,0xAB22L,0x3EE7L},{65530UL,0x55F0L,0UL,0x08F8L}},{{0x1438L,0x373AL,6UL,65535UL},{0UL,0x32A8L,0x5440L,0x999DL},{3UL,1UL,65526UL,0x2FDEL},{0x5440L,0xC3EEL,0xC3EEL,0x5440L},{65535UL,1UL,0UL,1UL}},{{0x3EE7L,0x08F8L,3UL,0UL},{5UL,0x4B4BL,0x9576L,0UL},{65532UL,0x08F8L,0x6890L,1UL},{0x1D26L,1UL,0x373AL,0x5440L},{0UL,0xC3EEL,0xB779L,0x2FDEL}}};
static int32_t g_5 = (-1L);
static uint32_t g_8 = 4294967295UL;
static volatile int32_t g_10 = 0x8407374FL;/* VOLATILE GLOBAL g_10 */


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_5 g_8
 * writes: g_2 g_5 g_8 g_10
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_9 = 8UL;
    ++g_2[0][2][2];
    for (g_5 = 0; (g_5 >= (-16)); g_5--)
    { /* block id: 4 */
        g_8 ^= 0x63EC58F5L;
        if (g_5)
            continue;
        if (l_9)
            continue;
        for (l_9 = 0; l_9 < 10; l_9 += 1)
        {
            for (g_8 = 0; g_8 < 5; g_8 += 1)
            {
                for (g_10 = 0; g_10 < 4; g_10 += 1)
                {
                    g_2[l_9][g_8][g_10] = 0x2280L;
                }
            }
        }
    }
    return l_9;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 8
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 4

XXX percentage a fresh-made variable is used: 60
XXX percentage an existing variable is used: 40
********************* end of statistics **********************/

