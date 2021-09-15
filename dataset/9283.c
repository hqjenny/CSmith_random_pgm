/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 9283.c
 * Seed:      4248151906
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int8_t g_2 = 0x70L;/* VOLATILE GLOBAL g_2 */
static volatile uint8_t g_3 = 1UL;/* VOLATILE GLOBAL g_3 */
static int32_t g_6 = 0xFB770A77L;
static uint8_t g_7[6] = {0xFAL,0xFAL,0xFAL,0xFAL,0xFAL,0xFAL};
static int32_t g_14 = (-4L);


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);
static int32_t  func_10(int8_t  p_11, const int32_t  p_12, uint8_t  p_13);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_7 g_6
 * writes: g_3 g_7 g_6 g_14
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    int16_t l_4 = 0x158DL;
    int32_t l_5 = 0x8C3AD3B3L;
    g_3 = g_2;
    --g_7[0];
    for (l_5 = 5; (l_5 >= 1); l_5 -= 1)
    { /* block id: 5 */
        for (l_4 = 0; (l_4 <= 5); l_4 += 1)
        { /* block id: 8 */
            int i;
            g_6 = g_7[l_4];
            g_6 |= func_10(g_7[l_4], g_2, (g_14 = ((g_7[l_4] , 0x6285L) | g_7[0])));
        }
    }
    return g_7[0];
}


/* ------------------------------------------ */
/* 
 * reads : g_7
 * writes:
 */
static int32_t  func_10(int8_t  p_11, const int32_t  p_12, uint8_t  p_13)
{ /* block id: 11 */
    int8_t l_15 = 0L;
    l_15 |= 6L;
    return g_7[4];
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
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_14, "g_14", print_hash_value);
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

XXX max expression depth: 7
breakdown:
   depth: 1, occurrence: 11
   depth: 2, occurrence: 2
   depth: 7, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 8
XXX times a non-volatile is write: 7
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 9
XXX percentage of non-volatile access: 83.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 9
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 6
   depth: 1, occurrence: 1
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

