/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 4364.c
 * Seed:      2076426078
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2 = 1L;/* VOLATILE GLOBAL g_2 */
static volatile int32_t g_3 = 0L;/* VOLATILE GLOBAL g_3 */
static int32_t g_4[5] = {(-6L),(-6L),(-6L),(-6L),(-6L)};
static uint32_t g_8[6] = {0xC443EB60L,0xC443EB60L,0xC443EB60L,0xC443EB60L,0xC443EB60L,0xC443EB60L};


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_3
 * writes: g_4 g_8
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_9[4][1];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_9[i][j] = 65535UL;
    }
    for (g_4[3] = 0; (g_4[3] <= 18); g_4[3] = safe_add_func_int32_t_s_s(g_4[3], 8))
    { /* block id: 3 */
        uint32_t l_7 = 0x38AB659DL;
        l_9[0][0] &= (l_7 | (g_8[0] = (g_3 | g_4[3])));
    }
    return g_3;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 3
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 75

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

