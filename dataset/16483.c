/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 16483.c
 * Seed:      2075136339
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2[5][8] = {{1L,0xFDF99FF6L,1L,1L,0xFDF99FF6L,1L,1L,0xFDF99FF6L},{0xFDF99FF6L,1L,1L,0xFDF99FF6L,1L,1L,0xFDF99FF6L,1L},{0xFDF99FF6L,0xFDF99FF6L,0x6444696AL,0xFDF99FF6L,0xFDF99FF6L,0x6444696AL,0xFDF99FF6L,0xFDF99FF6L},{1L,0xFDF99FF6L,1L,1L,0xFDF99FF6L,1L,1L,0xFDF99FF6L},{0xFDF99FF6L,1L,1L,0xFDF99FF6L,1L,1L,0xFDF99FF6L,1L}};
static uint16_t g_8 = 0UL;


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_8
 * writes: g_2 g_8
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_5[1][7];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_5[i][j] = 8UL;
    }
    for (g_2[1][3] = 0; (g_2[1][3] == 25); g_2[1][3] = safe_add_func_int32_t_s_s(g_2[1][3], 4))
    { /* block id: 3 */
        l_5[0][2]--;
        g_8 ^= 0x141E4F1FL;
    }
    return l_5[0][0];
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
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_8, "g_8", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
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
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
********************* end of statistics **********************/

