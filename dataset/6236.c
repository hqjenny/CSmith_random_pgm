/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 6236.c
 * Seed:      2961499782
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_4 = 1UL;
static volatile uint8_t g_11[2] = {0x68L,0x68L};
static int32_t g_14 = (-5L);


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static int32_t  func_2(uint16_t  p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_11 g_14
 * writes: g_4 g_11 g_14
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_15 = (-1L);
    g_14 ^= func_2(g_4);
    return l_15;
}


/* ------------------------------------------ */
/* 
 * reads : g_4 g_11
 * writes: g_4 g_11
 */
static int32_t  func_2(uint16_t  p_3)
{ /* block id: 1 */
    int32_t l_9[3][1][1];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_9[i][j][k] = 0xC14173BFL;
        }
    }
    for (g_4 = 0; (g_4 >= 3); g_4++)
    { /* block id: 4 */
        int8_t l_10 = 1L;
        for (p_3 = 0; (p_3 < 3); p_3++)
        { /* block id: 7 */
            l_10 = (l_9[0][0][0] = g_4);
            g_11[1]++;
        }
    }
    return g_11[1];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_14, "g_14", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 6
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
   depth: 2, occurrence: 4

XXX total number of pointers: 0

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 5
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 83.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 1
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 75
XXX percentage an existing variable is used: 25
********************* end of statistics **********************/

