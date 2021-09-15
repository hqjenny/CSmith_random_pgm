/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 3648.c
 * Seed:      3850676511
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_2[4][9] = {{0xCCC9L,0x4781L,0x490CL,1UL,0x490CL,0x4781L,0xCCC9L,0xD832L,0x94A2L},{0UL,0x94A2L,0xCCC9L,0xA35FL,0xD832L,0xA35FL,0xCCC9L,0x94A2L,0UL},{0x4781L,0xA35FL,0UL,0xD832L,0x37A3L,0x490CL,0x37A3L,0xD832L,0UL},{0x37A3L,0x37A3L,0x4781L,0x02E3L,0x94A2L,1UL,0UL,1UL,0x94A2L}};
static int32_t g_7 = 8L;
static int8_t g_8 = 0xBFL;
static int32_t g_9 = 1L;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static uint16_t  func_3(int32_t  p_4, int16_t  p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_9
 * writes: g_7 g_8 g_9
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_6 = 0x98E64E6DL;
    g_9 &= (g_8 = (g_2[0][4] && (func_3(g_2[1][0], l_6) == 1L)));
    return l_6;
}


/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_7
 */
static uint16_t  func_3(int32_t  p_4, int16_t  p_5)
{ /* block id: 1 */
    g_7 = p_5;
    return g_2[0][4];
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
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
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

XXX max expression depth: 6
breakdown:
   depth: 1, occurrence: 5
   depth: 6, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 55.6
XXX percentage an existing variable is used: 44.4
********************* end of statistics **********************/

