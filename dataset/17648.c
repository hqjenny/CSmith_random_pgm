/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 17648.c
 * Seed:      1374737806
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static const volatile uint16_t g_4 = 2UL;/* VOLATILE GLOBAL g_4 */
static int16_t g_8[4] = {1L,1L,1L,1L};
static int32_t g_9 = 0xB63E8E1BL;
static int8_t g_10 = 0L;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static int8_t  func_5(int8_t  p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_9 g_8
 * writes: g_9 g_10
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_7 = 0x10B999FBL;
    int32_t l_11 = 0xB77278FAL;
    int32_t l_12 = 1L;
    l_12 = (l_11 = (safe_lshift_func_uint8_t_u_s(g_4, func_5(l_7))));
    return g_8[0];
}


/* ------------------------------------------ */
/* 
 * reads : g_9 g_8
 * writes: g_9 g_10
 */
static int8_t  func_5(int8_t  p_6)
{ /* block id: 1 */
    for (p_6 = 3; (p_6 >= 0); p_6 -= 1)
    { /* block id: 4 */
        for (g_9 = 3; (g_9 >= 0); g_9 -= 1)
        { /* block id: 7 */
            int i;
            g_10 = g_8[g_9];
        }
    }
    return g_9;
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
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 5
   depth: 2, occurrence: 2
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 5
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 91.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 1
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 71.4
XXX percentage an existing variable is used: 28.6
********************* end of statistics **********************/

