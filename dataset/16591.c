/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 16591.c
 * Seed:      4242491544
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint16_t g_2[6][9][4] = {{{4UL,0x95AEL,65532UL,0xE089L},{1UL,0x95AEL,1UL,0x66A7L},{0x95AEL,5UL,0x62FDL,65535UL},{65535UL,0xE089L,4UL,5UL},{0x24C0L,4UL,4UL,0x24C0L},{65535UL,0x66A7L,0x62FDL,1UL},{0x95AEL,0UL,1UL,0xC203L},{1UL,0xC203L,65532UL,0xC203L},{4UL,0UL,0xE089L,1UL}},{{0x7F5EL,0x66A7L,0xC203L,0x24C0L},{0xE089L,4UL,5UL,5UL},{0xE089L,0xE089L,0x95AEL,0x66A7L},{1UL,4UL,0xC203L,0UL},{0x24C0L,65535UL,0x7F5EL,0xC203L},{5UL,65535UL,5UL,0UL},{65535UL,4UL,65532UL,0x66A7L},{0x66A7L,0xC203L,0x24C0L,4UL},{0xE089L,0x24C0L,0x24C0L,0xE089L}},{{0x66A7L,0UL,65532UL,5UL},{65535UL,0x62FDL,5UL,0x95AEL},{5UL,0x95AEL,0x7F5EL,0x95AEL},{0x24C0L,0x62FDL,0xC203L,5UL},{1UL,0UL,0x95AEL,0xE089L},{0xC203L,0x24C0L,4UL,4UL},{0xC203L,0xC203L,0x95AEL,0x66A7L},{1UL,4UL,0xC203L,0UL},{0x24C0L,65535UL,0x7F5EL,0xC203L}},{{5UL,65535UL,5UL,0UL},{65535UL,4UL,65532UL,0x66A7L},{0x66A7L,0xC203L,0x24C0L,4UL},{0xE089L,0x24C0L,0x24C0L,0xE089L},{0x66A7L,0UL,65532UL,5UL},{65535UL,0x62FDL,5UL,0x95AEL},{5UL,0x95AEL,0x7F5EL,0x95AEL},{0x24C0L,0x62FDL,0xC203L,5UL},{1UL,0UL,0x95AEL,0xE089L}},{{0xC203L,0x24C0L,4UL,4UL},{0xC203L,0xC203L,0x95AEL,0x66A7L},{1UL,4UL,0xC203L,0UL},{0x24C0L,65535UL,0x7F5EL,0xC203L},{5UL,65535UL,5UL,0UL},{65535UL,4UL,65532UL,0x66A7L},{0x66A7L,0xC203L,0x24C0L,4UL},{0xE089L,0x24C0L,0x24C0L,0xE089L},{0x66A7L,0UL,65532UL,5UL}},{{65535UL,0x62FDL,5UL,0x95AEL},{5UL,0x95AEL,0x7F5EL,0x95AEL},{0x24C0L,0x62FDL,0xC203L,5UL},{1UL,0UL,0x95AEL,0xE089L},{0xC203L,0x24C0L,4UL,4UL},{0xC203L,0xC203L,0x95AEL,0x66A7L},{1UL,4UL,0xC203L,0UL},{0x24C0L,65535UL,0x7F5EL,0xC203L},{5UL,65535UL,5UL,0UL}}};
static int32_t g_4 = 0xB4C8F0D0L;
static int32_t g_5 = 0xAD38DC53L;


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_4 g_5 g_2
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    int8_t l_3 = 0x1EL;
    l_3 |= g_2[5][4][1];
    for (l_3 = 0; l_3 < 6; l_3 += 1)
    {
        for (g_4 = 0; g_4 < 9; g_4 += 1)
        {
            for (g_5 = 0; g_5 < 4; g_5 += 1)
            {
                g_2[l_3][g_4][g_5] = 0xDE01L;
            }
        }
    }
    return l_3;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 4

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
********************* end of statistics **********************/

