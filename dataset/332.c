/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 332.c
 * Seed:      595515131
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static const volatile uint32_t g_2[9] = {0xA2AFE01BL,0x4A9BDBA7L,0xA2AFE01BL,0xA2AFE01BL,0x4A9BDBA7L,0xA2AFE01BL,0xA2AFE01BL,0x4A9BDBA7L,0xA2AFE01BL};
static int32_t g_4[2][2] = {{0L,0L},{0L,0L}};
static uint32_t g_7 = 4294967295UL;
static uint8_t g_10 = 0xE5L;


/* --- FORWARD DECLARATIONS --- */
static const int16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_4 g_7
 * writes: g_4 g_7 g_10
 */
static const int16_t  func_1(void)
{ /* block id: 0 */
    volatile int32_t l_3 = 0xDAE8C9F3L;/* VOLATILE GLOBAL l_3 */
    l_3 = g_2[2];
    for (g_4[1][1] = (-4); (g_4[1][1] == 23); g_4[1][1] = safe_add_func_uint16_t_u_u(g_4[1][1], 1))
    { /* block id: 4 */
        ++g_7;
    }
    g_10 = (g_4[0][0] ^= g_7);
    return l_3;
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
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
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
   depth: 1, occurrence: 6
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 4
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 57.1
XXX percentage an existing variable is used: 42.9
********************* end of statistics **********************/

