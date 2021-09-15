/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 12992.c
 * Seed:      4063514094
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2[2] = {(-8L),(-8L)};
static int32_t g_5[1][2][2] = {{{1L,1L},{1L,1L}}};
static int32_t g_9[8] = {2L,2L,2L,2L,2L,2L,2L,2L};


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_5 g_9
 * writes: g_2 g_5 g_9
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    int32_t l_10 = 0L;
    int16_t l_11 = (-1L);
    for (g_2[1] = 0; (g_2[1] <= 2); ++g_2[1])
    { /* block id: 3 */
        uint16_t l_8[5];
        int i;
        for (i = 0; i < 5; i++)
            l_8[i] = 8UL;
        for (g_5[0][1][0] = 27; (g_5[0][1][0] >= 22); g_5[0][1][0]--)
        { /* block id: 6 */
            if (g_2[1])
                break;
            for (g_9[3] = 0; (g_9[3] <= 4); g_9[3] += 1)
            { /* block id: 10 */
                if (l_10)
                    break;
                if (g_5[0][1][0])
                    break;
            }
            g_9[3] |= 0x545EE28FL;
        }
    }
    return l_11;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_5[i][j][k], "g_5[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_9[i], "g_9[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 6
   depth: 2, occurrence: 3

XXX total number of pointers: 0

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 8
XXX max block depth: 3
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1
   depth: 2, occurrence: 3
   depth: 3, occurrence: 2

XXX percentage a fresh-made variable is used: 40
XXX percentage an existing variable is used: 60
********************* end of statistics **********************/

