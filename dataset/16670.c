/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 16670.c
 * Seed:      4103689024
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_2 = 0x6318L;
static volatile int8_t g_3[4][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}};
static volatile int8_t g_4[5] = {7L,7L,7L,7L,7L};
static int8_t g_7 = 5L;
static uint32_t g_8 = 18446744073709551615UL;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8 g_3
 * writes: g_8
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int16_t l_5 = 0xAAEBL;
    int32_t l_6[5];
    uint32_t l_11 = 1UL;
    int i;
    for (i = 0; i < 5; i++)
        l_6[i] = 0x3921DED6L;
    --g_8;
    for (g_8 = 0; (g_8 <= 4); g_8 += 1)
    { /* block id: 4 */
        if (l_11)
            break;
    }
    return g_3[3][0];
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
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
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
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 2
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 80

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 80
XXX percentage an existing variable is used: 20
********************* end of statistics **********************/
