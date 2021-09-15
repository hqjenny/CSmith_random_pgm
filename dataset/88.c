/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 88.c
 * Seed:      2722589448
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_4[3][10] = {{0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L},{0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L},{0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L,0x4EA6L}};
static uint8_t g_5 = 0xEFL;
static uint16_t g_6 = 65535UL;
static int8_t g_7 = 0L;


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_5
 * writes: g_5 g_6 g_7
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_2 = 0UL;
    uint32_t l_3[7];
    int i;
    for (i = 0; i < 7; i++)
        l_3[i] = 0xE1E87DF2L;
    l_3[0] |= l_2;
    g_7 = (g_6 = (g_5 ^= g_4[2][5]));
    return l_3[0];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
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

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 4
   depth: 3, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 85.7
XXX percentage an existing variable is used: 14.3
********************* end of statistics **********************/

