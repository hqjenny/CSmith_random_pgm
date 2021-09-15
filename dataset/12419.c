/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 12419.c
 * Seed:      1340633136
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_4[7][3] = {{0xC6L,0xC6L,0xC6L},{0x3BL,0x3BL,0x3BL},{0xC6L,0xC6L,0xC6L},{0x3BL,0x3BL,0x3BL},{0xC6L,0xC6L,0xC6L},{0x3BL,0x3BL,0x3BL},{0xC6L,0xC6L,0xC6L}};
static volatile uint8_t g_5 = 2UL;/* VOLATILE GLOBAL g_5 */


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_4
 * writes: g_5 g_4
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    int32_t l_2 = 0x42EB90DAL;
    int32_t l_3 = 0xCB13638EL;
    --g_5;
    for (l_3 = 2; (l_3 >= 0); l_3 -= 1)
    { /* block id: 4 */
        if (l_2)
            break;
        for (l_2 = 0; l_2 < 7; l_2 += 1)
        {
            for (g_5 = 0; g_5 < 3; g_5 += 1)
            {
                g_4[l_2][g_5] = 0L;
            }
        }
        return g_4[2][2];
    }
    return g_4[2][2];
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
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
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
   depth: 1, occurrence: 6
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 5
XXX percentage of non-volatile access: 83.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 3

XXX percentage a fresh-made variable is used: 57.1
XXX percentage an existing variable is used: 42.9
********************* end of statistics **********************/

