/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 4930.c
 * Seed:      3448067597
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint8_t g_2[7][6] = {{0x4FL,0UL,0x4FL,0x4FL,0UL,0x4FL},{0x4FL,0UL,0x4FL,0x4FL,0UL,0x4FL},{0x4FL,0UL,0x4FL,0x4FL,0UL,0x4FL},{0x4FL,0UL,0x4FL,0x4FL,0UL,0x4FL},{0x4FL,0UL,0x4FL,0x4FL,0UL,0x4FL},{0x4FL,0UL,0x4FL,0x4FL,0UL,0x4FL},{0x4FL,0UL,0x4FL,0x4FL,0UL,0x4FL}};
static uint16_t g_12[8] = {0xFD94L,0xFD94L,0xFD94L,0xFD94L,0xFD94L,0xFD94L,0xFD94L,0xFD94L};


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);
static int32_t  func_5(int8_t  p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_2 g_12
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_7 = 65535UL;
    ++g_2[2][3];
    g_12[1] = (func_5(l_7) , 0xCF30836BL);
    return l_7;
}


/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes:
 */
static int32_t  func_5(int8_t  p_6)
{ /* block id: 2 */
    uint8_t l_8 = 1UL;
    int32_t l_11 = 0L;
    l_8++;
    l_11 = (p_6 , p_6);
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
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_12[i], "g_12[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

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

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 8
   depth: 2, occurrence: 1
   depth: 3, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 3
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 77.8

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 6

XXX percentage a fresh-made variable is used: 55.6
XXX percentage an existing variable is used: 44.4
********************* end of statistics **********************/

