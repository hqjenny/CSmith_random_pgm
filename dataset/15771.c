/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 15771.c
 * Seed:      2610920914
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = 6L;
static uint32_t g_4 = 0xB3B9DA4DL;
static int8_t g_9[3][9] = {{1L,0L,1L,9L,0L,1L,1L,0L,9L},{1L,0L,1L,9L,0L,1L,1L,0L,9L},{1L,0L,1L,9L,0L,1L,1L,0L,9L}};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static uint8_t  func_5(int16_t  p_6, const uint8_t  p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_4 g_9
 * writes: g_3 g_4 g_9
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_2[4];
    int i;
    for (i = 0; i < 4; i++)
        l_2[i] = 0x40D7F825L;
    for (g_3 = 3; (g_3 >= 0); g_3 -= 1)
    { /* block id: 3 */
        int i;
        g_4 = l_2[g_3];
        g_9[1][2] ^= (g_3 <= func_5(g_4, g_3));
    }
    return g_4;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static uint8_t  func_5(int16_t  p_6, const uint8_t  p_7)
{ /* block id: 5 */
    int32_t l_8 = 0x4E677B56L;
    l_8 = (-6L);
    return l_8;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_9[i][j], "g_9[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
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
   depth: 1, occurrence: 7
   depth: 2, occurrence: 1
   depth: 4, occurrence: 1

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

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 37.5
XXX percentage an existing variable is used: 62.5
********************* end of statistics **********************/

