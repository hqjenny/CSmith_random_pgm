/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 10142.c
 * Seed:      1285211282
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint32_t g_3 = 0xFE7D8A87L;/* VOLATILE GLOBAL g_3 */
static volatile uint32_t g_6 = 4294967295UL;/* VOLATILE GLOBAL g_6 */
static int8_t g_7[4][10][2] = {{{1L,0x5BL},{0x5BL,1L},{0x5BL,0x5BL},{1L,0x5BL},{0x5BL,1L},{0x5BL,0x5BL},{1L,0x5BL},{0x5BL,1L},{0x5BL,0x5BL},{1L,0x5BL}},{{0x5BL,1L},{0x5BL,0x5BL},{1L,0x5BL},{0x5BL,1L},{0x5BL,0x5BL},{1L,0x5BL},{0x5BL,1L},{0x5BL,0x5BL},{1L,0x5BL},{0x5BL,1L}},{{0x5BL,0x5BL},{1L,0x5BL},{0x5BL,1L},{1L,1L},{0xD0L,1L},{1L,0xD0L},{1L,1L},{0xD0L,1L},{1L,0xD0L},{1L,1L}},{{0xD0L,1L},{1L,0xD0L},{1L,1L},{0xD0L,1L},{1L,0xD0L},{1L,1L},{0xD0L,1L},{1L,0xD0L},{1L,1L},{0xD0L,1L}}};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_7
 * writes: g_3 g_6 g_7
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int8_t l_2 = (-7L);
    --g_3;
    g_6 = g_3;
    for (l_2 = 0; l_2 < 4; l_2 += 1)
    {
        for (g_3 = 0; g_3 < 10; g_3 += 1)
        {
            for (g_6 = 0; g_6 < 2; g_6 += 1)
            {
                g_7[l_2][g_3][g_6] = 0xF4L;
            }
        }
    }
    return g_7[0][8][1];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_7[i][j][k], "g_7[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 6

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 6
XXX percentage of non-volatile access: 25

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 60
XXX percentage an existing variable is used: 40
********************* end of statistics **********************/

