/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 12552.c
 * Seed:      3721282052
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2[9] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
static int32_t g_3 = 9L;
static uint8_t g_4 = 255UL;
static uint32_t g_5 = 0x04EE7D21L;
static volatile uint16_t g_8 = 0xDCBAL;/* VOLATILE GLOBAL g_8 */
static volatile int8_t g_11[5][3] = {{1L,1L,1L},{(-1L),(-1L),(-1L)},{1L,1L,1L},{(-1L),(-1L),(-1L)},{1L,1L,1L}};
static uint32_t g_12 = 4294967286UL;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_2 g_4 g_5 g_8 g_12
 * writes: g_3 g_4 g_5 g_8 g_12
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    const int32_t l_6 = (-3L);
    int32_t l_7 = 0x8F5F4990L;
    for (g_3 = 0; (g_3 <= 8); g_3 += 1)
    { /* block id: 3 */
        int i;
        g_4 ^= g_2[g_3];
        g_5 &= g_2[g_3];
    }
    l_7 = (g_3 = (l_6 == g_3));
    g_8++;
    g_12++;
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
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_11[i][j], "g_11[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
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

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 10
   depth: 2, occurrence: 1
   depth: 3, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 6
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 92.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

