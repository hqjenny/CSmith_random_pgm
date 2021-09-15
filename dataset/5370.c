/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 5370.c
 * Seed:      512025790
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_6[2][3][6] = {{{1UL,1UL,1UL,1UL,1UL,18446744073709551615UL},{1UL,18446744073709551606UL,1UL,1UL,18446744073709551606UL,1UL},{1UL,0xC443EB60L,18446744073709551615UL,1UL,0xC443EB60L,1UL}},{{1UL,1UL,1UL,1UL,1UL,18446744073709551615UL},{1UL,18446744073709551606UL,1UL,1UL,18446744073709551606UL,1UL},{1UL,0xC443EB60L,18446744073709551615UL,1UL,0xC443EB60L,1UL}}};
static volatile int8_t g_7 = (-8L);/* VOLATILE GLOBAL g_7 */
static volatile uint32_t g_8[10] = {0x182B4746L,0x182B4746L,0x182B4746L,0x182B4746L,0x182B4746L,0x182B4746L,0x182B4746L,0x182B4746L,0x182B4746L,0x182B4746L};


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);
static int32_t  func_2(int8_t  p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_8
 * writes: g_8
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    int32_t l_12 = 1L;
    l_12 = func_2((safe_rshift_func_uint8_t_u_s(g_6[1][2][0], 5)));
    return g_8[7];
}


/* ------------------------------------------ */
/* 
 * reads : g_8
 * writes: g_8
 */
static int32_t  func_2(int8_t  p_3)
{ /* block id: 1 */
    uint32_t l_11 = 0UL;
    g_8[7]++;
    return l_11;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
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
   depth: 1, occurrence: 5
   depth: 3, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 1
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 60

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 83.3
XXX percentage an existing variable is used: 16.7
********************* end of statistics **********************/

