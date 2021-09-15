/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 7015.c
 * Seed:      2741807761
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 1L;
static int16_t g_6[9] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
static volatile int16_t g_8 = 0xAFCBL;/* VOLATILE GLOBAL g_8 */
static volatile uint32_t g_9 = 0xAAD8530DL;/* VOLATILE GLOBAL g_9 */


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_9 g_6
 * writes: g_2 g_9
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_3 = 255UL;
    int32_t l_7 = 0xC3A0B8EEL;
    int32_t l_12 = (-8L);
    l_3++;
    for (l_3 = 3; (l_3 <= 8); l_3 += 1)
    { /* block id: 4 */
        int32_t l_13 = (-9L);
        int i;
        for (g_2 = 8; (g_2 >= 3); g_2 -= 1)
        { /* block id: 7 */
            ++g_9;
        }
        for (l_7 = 3; (l_7 <= 8); l_7 += 1)
        { /* block id: 12 */
            int i;
            l_12 ^= g_6[l_3];
        }
        l_13 = g_6[l_3];
    }
    return l_3;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
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
   depth: 1, occurrence: 9
   depth: 2, occurrence: 3

XXX total number of pointers: 0

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 6
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 92.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 8
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 3
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 87.5
XXX percentage an existing variable is used: 12.5
********************* end of statistics **********************/

