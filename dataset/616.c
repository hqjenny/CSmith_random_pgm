/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 616.c
 * Seed:      3882326128
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = (-4L);
static uint32_t g_3[2][5][4] = {{{18446744073709551615UL,1UL,1UL,18446744073709551615UL},{1UL,18446744073709551615UL,18446744073709551615UL,0xD23B6182L},{1UL,18446744073709551615UL,1UL,0x54C3C69AL},{18446744073709551615UL,0xD23B6182L,0x54C3C69AL,0x54C3C69AL},{18446744073709551615UL,18446744073709551615UL,0xB13638ECL,0xD23B6182L}},{{0xD23B6182L,18446744073709551615UL,0xB13638ECL,18446744073709551615UL},{18446744073709551615UL,1UL,0x54C3C69AL,0xB13638ECL},{18446744073709551615UL,1UL,1UL,18446744073709551615UL},{1UL,18446744073709551615UL,18446744073709551615UL,0xD23B6182L},{1UL,18446744073709551615UL,1UL,0x54C3C69AL}}};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3
 * writes: g_3 g_2
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    const uint16_t l_4 = 0xD1D8L;
    g_3[0][2][2] ^= g_2;
    g_2 = (l_4 | (g_2 && (safe_lshift_func_uint8_t_u_u(g_3[0][2][2], 2))));
    return g_3[1][2][2];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 4
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 2
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

XXX percentage a fresh-made variable is used: 42.9
XXX percentage an existing variable is used: 57.1
********************* end of statistics **********************/

