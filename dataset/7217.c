/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 7217.c
 * Seed:      16669606
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_6[10] = {(-1L),0xCEFAL,0x555BL,0x555BL,0xCEFAL,(-1L),0xCEFAL,0x555BL,0x555BL,0xCEFAL};
static const int8_t g_7 = (-5L);
static volatile uint8_t g_9 = 7UL;/* VOLATILE GLOBAL g_9 */


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);
static uint32_t  func_2(int8_t  p_3, const int16_t  p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_7 g_9
 * writes: g_6 g_9
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_5 = 65533UL;
    if ((func_2((g_6[7] &= l_5), g_7) , l_5))
    { /* block id: 5 */
        return g_6[7];
    }
    else
    { /* block id: 7 */
        int32_t l_8 = (-4L);
        ++g_9;
    }
    return l_5;
}


/* ------------------------------------------ */
/* 
 * reads : g_6
 * writes: g_6
 */
static uint32_t  func_2(int8_t  p_3, const int16_t  p_4)
{ /* block id: 2 */
    for (p_3 = 0; p_3 < 10; p_3 += 1)
    {
        g_6[p_3] = 0x73BFL;
    }
    return g_6[7];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_7, "g_7", print_hash_value);
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

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 6
   depth: 5, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 87.5

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 55.6
XXX percentage an existing variable is used: 44.4
********************* end of statistics **********************/

