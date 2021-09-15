/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 13654.c
 * Seed:      3394869568
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint8_t g_10 = 1UL;
static uint32_t g_11[8][2] = {{0xDBDA7FE6L,0xDBDA7FE6L},{0xDBDA7FE6L,0xDBDA7FE6L},{0xDBDA7FE6L,0xDBDA7FE6L},{0xDBDA7FE6L,0xDBDA7FE6L},{0xDBDA7FE6L,0xDBDA7FE6L},{0xDBDA7FE6L,0xDBDA7FE6L},{0xDBDA7FE6L,0xDBDA7FE6L},{0xDBDA7FE6L,0xDBDA7FE6L}};
static uint8_t g_12[1][2][1] = {{{0x45L},{0x45L}}};
static uint32_t g_14 = 0xD013D0BBL;
static uint16_t g_17 = 0x55FFL;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static int32_t  func_2(int32_t  p_3, uint32_t  p_4, uint32_t  p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_10 g_11 g_12 g_14
 * writes: g_11 g_12 g_10 g_14 g_17
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_6 = 0x4BL;
    int32_t l_9 = (-8L);
    g_17 = func_2((l_6 , (safe_mod_func_uint32_t_u_u((l_9 || g_10), 0x44555950L))), (g_11[6][0] ^= g_10), l_6);
    return g_11[6][0];
}


/* ------------------------------------------ */
/* 
 * reads : g_10 g_12 g_14
 * writes: g_12 g_10 g_11 g_14
 */
static int32_t  func_2(int32_t  p_3, uint32_t  p_4, uint32_t  p_5)
{ /* block id: 2 */
    int16_t l_13[10] = {0xF3F6L,0L,0xF3F6L,0xF3F6L,0L,0xF3F6L,0xF3F6L,0L,0xF3F6L,0xF3F6L};
    int i;
    g_12[0][0][0] |= (p_5 & (g_10 , g_10));
    for (g_10 = 0; g_10 < 8; g_10 += 1)
    {
        for (p_3 = 0; p_3 < 2; p_3 += 1)
        {
            g_11[g_10][p_3] = 1UL;
        }
    }
    l_13[6] ^= p_5;
    ++g_14;
    return l_13[6];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_11[i][j], "g_11[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_12[i][j][k], "g_12[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 8
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

XXX max expression depth: 8
breakdown:
   depth: 1, occurrence: 9
   depth: 3, occurrence: 1
   depth: 8, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 11
XXX times a non-volatile is write: 5
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 7

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

