/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 5081.c
 * Seed:      4184662424
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint8_t g_7[2][3] = {{1UL,0x98L,1UL},{1UL,0x98L,1UL}};
static volatile uint32_t g_8[9] = {4294967295UL,5UL,4294967295UL,4294967295UL,5UL,4294967295UL,4294967295UL,5UL,4294967295UL};
static uint8_t g_12[2][5][3] = {{{0x14L,0xD4L,0x3FL},{0x8FL,0x8FL,0xD4L},{2UL,0UL,0x96L},{2UL,0x61L,0x14L},{0x8FL,0xB4L,0UL}},{{0x14L,2UL,0x14L},{0UL,0x14L,0x96L},{0x95L,0x14L,0xD4L},{0xB4L,2UL,0x3FL},{9UL,0xB4L,0xB4L}}};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static const uint16_t  func_4(uint32_t  p_5, uint32_t  p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_8
 * writes: g_8 g_12
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_13[1];
    int i;
    for (i = 0; i < 1; i++)
        l_13[i] = 0x6DE0184DL;
    g_12[0][2][2] = (safe_add_func_uint16_t_u_u(func_4(g_7[1][0], g_7[0][2]), 0x39BAL));
    return l_13[0];
}


/* ------------------------------------------ */
/* 
 * reads : g_8
 * writes: g_8
 */
static const uint16_t  func_4(uint32_t  p_5, uint32_t  p_6)
{ /* block id: 1 */
    const int8_t l_11 = (-2L);
    g_8[0]++;
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
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_12[i][j][k], "g_12[i][j][k]", print_hash_value);
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 5
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 83.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 83.3
XXX percentage an existing variable is used: 16.7
********************* end of statistics **********************/

