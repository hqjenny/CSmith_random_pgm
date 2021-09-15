/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 12589.c
 * Seed:      2402223355
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_2[8] = {(-1L),0xDDL,(-1L),(-1L),0xDDL,(-1L),(-1L),0xDDL};
static int32_t g_3 = 0xABECBA2AL;
static volatile int32_t g_5 = 0xFB5A5EFAL;/* VOLATILE GLOBAL g_5 */
static volatile int8_t g_6[8][8] = {{0x8AL,0L,0x5DL,(-1L),0x58L,0xE8L,3L,(-7L)},{0L,0x7FL,0L,0x8AL,0L,0x3FL,9L,1L},{0x5DL,0L,(-4L),0xB7L,0x55L,0xB7L,(-4L),0L},{(-1L),0x8AL,0xB7L,0L,0x3FL,0x7FL,0xA0L,(-1L)},{0x58L,0L,0x55L,0x3FL,(-1L),3L,0x55L,0x70L},{0x28L,0x58L,(-1L),0L,1L,0L,0xA0L,0x55L},{1L,0L,0xA0L,0x55L,0x55L,0xA0L,0L,1L},{0xB7L,(-7L),(-1L),0x3FL,0x70L,0x55L,1L,0xABL}};
static volatile int8_t g_7 = 0x07L;/* VOLATILE GLOBAL g_7 */
static uint32_t g_12 = 18446744073709551615UL;


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_2 g_12
 * writes: g_3 g_12
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_9 = 1UL;
    for (g_3 = 5; (g_3 >= 1); g_3 -= 1)
    { /* block id: 3 */
        int16_t l_4 = 0L;
        int32_t l_8 = 1L;
        ++l_9;
        for (l_9 = 0; (l_9 <= 7); l_9 += 1)
        { /* block id: 7 */
            int i;
            g_12 &= g_2[l_9];
        }
    }
    return g_12;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
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
   depth: 1, occurrence: 5
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 5
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 87.5
XXX percentage an existing variable is used: 12.5
********************* end of statistics **********************/

