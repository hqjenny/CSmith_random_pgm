/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 8766.c
 * Seed:      2532493456
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int16_t g_2 = 0xB90DL;/* VOLATILE GLOBAL g_2 */
static volatile int8_t g_3 = (-1L);/* VOLATILE GLOBAL g_3 */
static int16_t g_7 = (-1L);
static int16_t g_8[8][2][1] = {{{0L},{0x65E0L}},{{0L},{0x65E0L}},{{0L},{0x65E0L}},{{0L},{0x65E0L}},{{0L},{0x65E0L}},{{0L},{0x65E0L}},{{0L},{0x65E0L}},{{0L},{0x65E0L}}};
static int16_t g_9 = 0x5165L;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_7 g_9
 * writes: g_7 g_2 g_3 g_8
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_4 = 4294967295UL;
    l_4++;
    g_7 |= (g_2 | 2L);
    for (g_2 = 0; g_2 < 8; g_2 += 1)
    {
        for (l_4 = 0; l_4 < 2; l_4 += 1)
        {
            for (g_3 = 0; g_3 < 1; g_3 += 1)
            {
                g_8[g_2][l_4][g_3] = 0xDD1DL;
            }
        }
    }
    return g_9;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_8[i][j][k], "g_8[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_9, "g_9", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
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

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 2
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 5
XXX percentage of non-volatile access: 75

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 83.3
XXX percentage an existing variable is used: 16.7
********************* end of statistics **********************/
