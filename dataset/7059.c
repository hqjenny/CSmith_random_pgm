/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 7059.c
 * Seed:      3425933210
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_3[5][2][5] = {{{(-1L),0x9FEBL,0L,0L,0x9FEBL},{(-1L),0x9FEBL,0L,0L,0x9FEBL}},{{(-1L),0x9FEBL,0L,0L,0x9FEBL},{(-1L),0x9FEBL,0L,0L,0x9FEBL}},{{(-1L),0x9FEBL,0L,0L,0x9FEBL},{(-1L),0x9FEBL,0L,0L,0x9FEBL}},{{(-1L),0x9FEBL,0L,0L,0x9FEBL},{(-1L),0x9FEBL,0L,0L,0x9FEBL}},{{(-1L),0x9FEBL,0L,0L,0x9FEBL},{(-1L),1L,0x9FEBL,0x9FEBL,1L}}};
static volatile int32_t g_5 = 0x33C63384L;/* VOLATILE GLOBAL g_5 */


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3
 * writes: g_3 g_5
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_2 = 1L;
    int32_t l_4 = 1L;
    l_4 ^= (g_3[4][0][1] = l_2);
    for (l_4 = 0; l_4 < 5; l_4 += 1)
    {
        for (l_2 = 0; l_2 < 2; l_2 += 1)
        {
            for (g_5 = 0; g_5 < 5; g_5 += 1)
            {
                g_3[l_4][l_2][g_5] = 0L;
            }
        }
    }
    g_5 = 0L;
    return g_3[2][0][4];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
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
   depth: 1, occurrence: 5
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 80

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 60
XXX percentage an existing variable is used: 40
********************* end of statistics **********************/

