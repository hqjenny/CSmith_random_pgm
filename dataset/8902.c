/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 8902.c
 * Seed:      3915897400
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_2[5][1] = {{9L},{0L},{9L},{0L},{9L}};
static int32_t g_3 = (-1L);
static volatile int32_t g_5 = 0xA756A336L;/* VOLATILE GLOBAL g_5 */
static int32_t g_6 = 3L;
static volatile uint16_t g_10 = 0x336DL;/* VOLATILE GLOBAL g_10 */


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_2 g_6 g_10
 * writes: g_3 g_6 g_5 g_10
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    int8_t l_13 = (-2L);
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    { /* block id: 3 */
        uint8_t l_4[2];
        int32_t l_8 = 0L;
        int i;
        for (i = 0; i < 2; i++)
            l_4[i] = 0x08L;
        l_4[1] |= g_2[2][0];
        for (g_6 = 0; (g_6 >= 0); g_6 -= 1)
        { /* block id: 7 */
            int32_t l_7 = 0x20B95AE6L;
            int32_t l_9[4];
            int i, j;
            for (i = 0; i < 4; i++)
                l_9[i] = 0x14EB4C8FL;
            g_5 = g_2[(g_6 + 4)][g_6];
            g_10++;
        }
    }
    return l_13;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 7
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 80

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 2
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
********************* end of statistics **********************/

