/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 10054.c
 * Seed:      2455305388
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_3 = 0x964A53AAL;
static volatile int16_t g_4 = 0xCFE0L;/* VOLATILE GLOBAL g_4 */
static volatile uint16_t g_5[5] = {0xF845L,0xF845L,0xF845L,0xF845L,0xF845L};
static volatile int8_t g_8[4][6][3] = {{{3L,1L,0x63L},{1L,0x6AL,1L},{0x12L,0xCAL,0xF7L},{0xEFL,(-10L),0x2FL},{0x93L,0x7DL,8L},{0x21L,3L,(-1L)}},{{0x93L,5L,1L},{0xEFL,(-8L),(-2L)},{0x12L,0x9DL,0L},{1L,8L,5L},{3L,8L,1L},{0x9DL,0x9DL,0x93L}},{{0xF7L,(-8L),3L},{0x7DL,5L,5L},{(-10L),0xF7L,1L},{1L,0x93L,5L},{0x21L,0L,0xF7L},{0x0FL,1L,3L}},{{0x6AL,0x63L,0xCAL},{5L,0xCAL,(-2L)},{5L,0x0FL,0x0FL},{0x6AL,1L,0x9DL},{0x0FL,(-8L),0x9EL},{0x21L,1L,1L}}};


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_3
 * writes: g_3 g_5 g_8
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    int8_t l_2[5] = {0x38L,0x38L,0x38L,0x38L,0x38L};
    int i;
    g_3 = l_2[2];
    g_5[2]++;
    for (g_3 = 1; (g_3 <= 4); g_3 += 1)
    { /* block id: 5 */
        int i;
        g_8[1][2][0] = g_5[g_3];
    }
    return l_2[4];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_8[i][j][k], "g_8[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
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
   depth: 1, occurrence: 7
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 2
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 62.5

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 83.3
XXX percentage an existing variable is used: 16.7
********************* end of statistics **********************/

