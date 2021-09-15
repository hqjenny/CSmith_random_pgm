/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 2187.c
 * Seed:      1733292432
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_2[8][9] = {{2L,2L,1L,0L,0x02DAL,0x52CBL,0x65E0L,(-4L),0x82EAL},{0x26FFL,0L,0L,0x52F7L,0x2263L,1L,(-7L),2L,1L},{(-6L),0xCCCDL,1L,1L,1L,0x02DAL,0L,0L,0L},{0x52F7L,1L,1L,1L,1L,0x52F7L,0xD1D8L,6L,0xC69AL},{6L,0L,(-9L),0x82EAL,0x2263L,0x516AL,1L,0x26FFL,0x5165L},{0L,0x516AL,0x3638L,0x52F7L,(-7L),0L,0x82EAL,0x52CBL,1L},{0x82EAL,1L,(-4L),0x5165L,0x2263L,0x2263L,0x5165L,(-4L),1L},{0x3638L,6L,0x5165L,0x02DAL,0x26FFL,0L,0L,0x52F7L,0x2263L}};
static int32_t g_3 = 0xD0A7084BL;
static volatile int32_t g_4[3] = {(-1L),(-1L),(-1L)};


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4
 * writes: g_3 g_4 g_2
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    for (g_3 = 0; g_3 < 8; g_3 += 1)
    {
        for (g_4[1] = 0; g_4[1] < 9; g_4[1] += 1)
        {
            g_2[g_3][g_4[1]] = 0x81FFL;
        }
    }
    return g_4[1];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: -1
breakdown:
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 0
XXX times a non-volatile is write: 0
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 0

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 0
XXX percentage an existing variable is used: 100
********************* end of statistics **********************/

