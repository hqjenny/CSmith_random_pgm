/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 16874.c
 * Seed:      616574098
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_7[8] = {0x304B25B3L,0x304B25B3L,0x304B25B3L,0x304B25B3L,0x304B25B3L,0x304B25B3L,0x304B25B3L,0x304B25B3L};
static uint32_t g_9 = 18446744073709551615UL;


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);
static uint32_t  func_3(int32_t  p_4, uint16_t  p_5, uint32_t  p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_9
 * writes: g_9
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_8 = 0x272A7275L;
    g_9 = ((~func_3(g_7[2], l_8, g_7[2])) && l_8);
    return g_9;
}


/* ------------------------------------------ */
/* 
 * reads : g_7
 * writes:
 */
static uint32_t  func_3(int32_t  p_4, uint16_t  p_5, uint32_t  p_6)
{ /* block id: 1 */
    p_4 ^= p_5;
    for (p_6 = 1; (p_6 <= 7); p_6 += 1)
    { /* block id: 5 */
        int i;
        return g_7[p_6];
    }
    return p_4;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_9, "g_9", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
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
   depth: 2, occurrence: 1
   depth: 5, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 9
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 33.3
XXX percentage an existing variable is used: 66.7
********************* end of statistics **********************/

