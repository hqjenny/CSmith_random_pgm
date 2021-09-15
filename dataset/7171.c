/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 7171.c
 * Seed:      379175044
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint8_t g_2[4][4] = {{0x06L,0x27L,0x27L,0x06L},{0x06L,0x27L,0x27L,0x06L},{0x06L,0x27L,0x27L,0x06L},{0x06L,0x27L,0x27L,0x06L}};
static uint16_t g_3 = 0xC04EL;
static int32_t g_4 = 0x4C405B40L;


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);
static int32_t  func_5(int8_t  p_6, int32_t  p_7, int16_t  p_8);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3 g_4
 * writes: g_3 g_4 g_2
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_9 = 1UL;
    int32_t l_10 = 0x47C9D5FAL;
    g_3 ^= g_2[0][3];
    for (g_3 = 0; g_3 < 4; g_3 += 1)
    {
        for (g_4 = 0; g_4 < 4; g_4 += 1)
        {
            g_2[g_3][g_4] = 0UL;
        }
    }
    l_10 = func_5(l_9, l_9, g_4);
    return g_2[0][3];
}


/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes:
 */
static int32_t  func_5(int8_t  p_6, int32_t  p_7, int16_t  p_8)
{ /* block id: 3 */
    return g_2[2][3];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
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
   depth: 1, occurrence: 6
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 2
XXX times a volatile is read: 3
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 3
XXX percentage of non-volatile access: 62.5

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

