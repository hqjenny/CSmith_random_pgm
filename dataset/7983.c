/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 7983.c
 * Seed:      3303508446
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_2[6][8] = {{65535UL,1UL,0xF7BFL,0xB3AEL,65533UL,65531UL,1UL,65531UL},{0x9EA9L,65533UL,0x3450L,65533UL,0x9EA9L,65532UL,0UL,0UL},{0UL,65531UL,0x713AL,65535UL,0UL,0x1738L,0x8C44L,65533UL},{0x3450L,0xF7BFL,0x713AL,1UL,0UL,0UL,0UL,0UL},{0UL,0x3450L,0x3450L,0UL,0xB3AEL,65530UL,1UL,0x8C44L},{1UL,0x713AL,0xF7BFL,0x3450L,65530UL,1UL,0xF7BFL,0xD2E8L}};
static volatile int32_t g_3 = 0xE4562513L;/* VOLATILE GLOBAL g_3 */
static int32_t g_4 = 0xD513C61CL;


/* --- FORWARD DECLARATIONS --- */
static const int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3
 * writes: g_3 g_4 g_2
 */
static const int32_t  func_1(void)
{ /* block id: 0 */
    for (g_3 = 0; g_3 < 6; g_3 += 1)
    {
        for (g_4 = 0; g_4 < 8; g_4 += 1)
        {
            g_2[g_3][g_4] = 0UL;
        }
    }
    return g_3;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
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

XXX times a non-volatile is read: 0
XXX times a non-volatile is write: 0
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 0

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 0
XXX percentage an existing variable is used: 100
********************* end of statistics **********************/
