/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 12679.c
 * Seed:      3733610344
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint8_t g_2[5][5][2] = {{{0x7DL,0UL},{0xBBL,8UL},{0x3EL,4UL},{249UL,4UL},{0x3EL,8UL}},{{0xBBL,0UL},{0x7DL,252UL},{0x72L,0x72L},{255UL,0xD1L},{8UL,249UL}},{{0xA8L,0x56L},{0xD1L,0xA8L},{0xFFL,0UL},{0xFFL,0xA8L},{0xD1L,0x56L}},{{0xA8L,249UL},{8UL,0xD1L},{255UL,0x72L},{0x72L,252UL},{0x7DL,0UL}},{{0xBBL,8UL},{0x3EL,4UL},{249UL,4UL},{0x7DL,255UL},{246UL,0UL}}};
static volatile int32_t g_3 = 0xD65121ACL;/* VOLATILE GLOBAL g_3 */
static int32_t g_4 = 0x8999D94BL;
static int32_t g_5[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5
 * writes: g_3 g_4 g_5 g_2
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    for (g_3 = 0; g_3 < 5; g_3 += 1)
    {
        for (g_4 = 0; g_4 < 5; g_4 += 1)
        {
            for (g_5[7] = 0; g_5[7] < 2; g_5[7] += 1)
            {
                g_2[g_3][g_4][g_5[7]] = 0x32L;
            }
        }
    }
    return g_5[1];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: -1
breakdown:
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 0
XXX percentage an existing variable is used: 100
********************* end of statistics **********************/

