/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 10687.c
 * Seed:      2073260612
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 2L;
static int8_t g_7 = 0L;
static int16_t g_8[4][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
static volatile int32_t g_9 = 1L;/* VOLATILE GLOBAL g_9 */
static int16_t g_10 = (-1L);
static volatile uint32_t g_11 = 4UL;/* VOLATILE GLOBAL g_11 */


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);
static int32_t  func_4(const int16_t  p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_11 g_10
 * writes: g_2 g_11
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_3 = 5UL;
    int32_t l_6[5];
    int i;
    for (i = 0; i < 5; i++)
        l_6[i] = (-2L);
    l_3 &= g_2;
    l_6[0] ^= func_4(g_2);
    g_11--;
    g_2 = g_10;
    return l_6[4];
}


/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_2
 */
static int32_t  func_4(const int16_t  p_5)
{ /* block id: 2 */
    g_2 &= (-6L);
    return p_5;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 8
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
   depth: 1, occurrence: 11
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 90

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 7

XXX percentage a fresh-made variable is used: 34.8
XXX percentage an existing variable is used: 65.2
********************* end of statistics **********************/

