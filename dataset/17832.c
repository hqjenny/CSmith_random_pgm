/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 17832.c
 * Seed:      2238292240
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 0x42EB90DAL;
static int16_t g_3 = 0L;
static int16_t g_4[3][3] = {{0xC3C6L,0xC3C6L,0xC3C6L},{0x3B61L,0x3B61L,0x3B61L},{0xC3C6L,0xC3C6L,0xC3C6L}};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3
 * writes: g_3 g_2 g_4
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_5[8][8] = {{255UL,4UL,255UL,255UL,4UL,255UL,255UL,4UL},{4UL,255UL,255UL,4UL,255UL,255UL,4UL,255UL},{4UL,4UL,0xB1L,4UL,4UL,0xB1L,4UL,4UL},{255UL,4UL,255UL,255UL,4UL,255UL,255UL,4UL},{4UL,255UL,255UL,4UL,255UL,0xB1L,255UL,0xB1L},{255UL,255UL,4UL,255UL,255UL,4UL,255UL,255UL},{0xB1L,255UL,0xB1L,0xB1L,255UL,0xB1L,0xB1L,255UL},{255UL,0xB1L,0xB1L,255UL,0xB1L,0xB1L,255UL,0xB1L}};
    int i, j;
    g_3 &= g_2;
    for (g_2 = 0; g_2 < 3; g_2 += 1)
    {
        for (g_3 = 0; g_3 < 3; g_3 += 1)
        {
            g_4[g_2][g_3] = 6L;
        }
    }
    return l_5[6][5];
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
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

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
   depth: 1, occurrence: 4

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
********************* end of statistics **********************/

