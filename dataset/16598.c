/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 16598.c
 * Seed:      1279814890
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_2[4][10] = {{0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL},{0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL},{0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL},{0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL}};
static int32_t g_3 = 5L;
static volatile int32_t g_4[1] = {9L};
static int32_t g_5 = (-1L);


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_5 g_2 g_4
 * writes: g_3 g_5 g_4
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    int8_t l_6 = (-4L);
    for (g_3 = 0; (g_3 <= 3); g_3 += 1)
    { /* block id: 3 */
        if (g_3)
            break;
        for (g_5 = 3; (g_5 >= 0); g_5 -= 1)
        { /* block id: 7 */
            int i, j;
            return g_2[g_3][(g_3 + 1)];
        }
    }
    g_4[0] &= l_6;
    return g_3;
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
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_5, "g_5", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
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
   depth: 1, occurrence: 5
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 88.9

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 25
XXX percentage an existing variable is used: 75
********************* end of statistics **********************/

