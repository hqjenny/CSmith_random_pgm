/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 13923.c
 * Seed:      658011637
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_5[4][8] = {{65533UL,65533UL,65533UL,65533UL,65533UL,65533UL,65533UL,65533UL},{65533UL,65533UL,65533UL,65533UL,65533UL,65533UL,65533UL,65533UL},{65533UL,65533UL,65533UL,65533UL,65533UL,65533UL,65533UL,65533UL},{65533UL,65533UL,65533UL,65533UL,65533UL,65533UL,65533UL,65533UL}};
static uint32_t g_7 = 1UL;


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5
 * writes: g_5 g_7
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_2 = 2UL;
    int32_t l_6 = 1L;
    --l_2;
    l_6 = (g_5[2][5] = 0xF94F3783L);
    g_7 = (-1L);
    for (l_2 = 0; l_2 < 4; l_2 += 1)
    {
        for (l_6 = 0; l_6 < 8; l_6 += 1)
        {
            g_5[l_2][l_6] = 65535UL;
        }
    }
    return g_5[2][5];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
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
   depth: 1, occurrence: 7
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 80
XXX percentage an existing variable is used: 20
********************* end of statistics **********************/

