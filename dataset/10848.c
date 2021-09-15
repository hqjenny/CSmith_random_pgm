/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 10848.c
 * Seed:      3007921096
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_5[5][3] = {{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L}};
static volatile int32_t g_11 = (-4L);/* VOLATILE GLOBAL g_11 */
static volatile uint8_t g_15 = 253UL;/* VOLATILE GLOBAL g_15 */
static int32_t g_19 = 0x38367457L;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_15 g_19
 * writes: g_11 g_15 g_19
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_2 = 0xEA75C96DL;
    int32_t l_3 = (-1L);
    int32_t l_4[1][2];
    uint8_t l_6 = 246UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_4[i][j] = 0x08F8256AL;
    }
    ++l_6;
    for (l_6 = 0; (l_6 >= 50); l_6++)
    { /* block id: 4 */
        const uint32_t l_12 = 0x890C5440L;
        g_11 = 0x2A831D26L;
        if (g_5[4][1])
            break;
        if ((g_5[3][1] & l_12))
        { /* block id: 7 */
            uint16_t l_18 = 65534UL;
            for (l_3 = 0; (l_3 > 7); ++l_3)
            { /* block id: 10 */
                g_15++;
                if (l_18)
                    continue;
                g_19 ^= g_15;
            }
        }
        else
        { /* block id: 15 */
            return g_5[3][1];
        }
    }
    return l_4[0][1];
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
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 10
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
   depth: 1, occurrence: 12
   depth: 2, occurrence: 3

XXX total number of pointers: 0

XXX times a non-volatile is read: 8
XXX times a non-volatile is write: 4
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 6
XXX percentage of non-volatile access: 80

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 11
XXX max block depth: 3
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 3
   depth: 2, occurrence: 2
   depth: 3, occurrence: 3

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
********************* end of statistics **********************/

