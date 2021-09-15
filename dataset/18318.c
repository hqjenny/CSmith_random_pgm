/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 18318.c
 * Seed:      2968216541
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_5 = 0xBC75286EL;
static int8_t g_6[4][10] = {{0x76L,0x7BL,0xE1L,0xE1L,0x7BL,0x76L,0x7BL,0xE1L,0xE1L,0x7BL},{0x76L,0x7BL,0xE1L,0xE1L,0x7BL,0x76L,0x7BL,0xE1L,0xE1L,0x7BL},{0x76L,0x7BL,0xE1L,0xE1L,0x7BL,0x76L,0x7BL,0xE1L,0xE1L,0x7BL},{0x76L,0x7BL,0xE1L,0xE1L,0x7BL,0x76L,0x7BL,0xE1L,0xE1L,0x7BL}};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_6
 * writes: g_6
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int16_t l_4 = 0x2C70L;
    int32_t l_7 = (-3L);
    int8_t l_8 = 0x51L;
    g_6[1][6] &= (safe_mod_func_uint32_t_u_u(l_4, g_5));
    l_7 = (-5L);
    l_8 = g_5;
    for (l_8 = 0; (l_8 <= (-9)); --l_8)
    { /* block id: 6 */
        int16_t l_12 = 4L;
        int32_t l_13 = (-10L);
        l_12 ^= (+l_8);
        l_13 ^= l_7;
    }
    return g_6[1][6];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 7
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
   depth: 1, occurrence: 10
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 6
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 63.6
XXX percentage an existing variable is used: 36.4
********************* end of statistics **********************/

