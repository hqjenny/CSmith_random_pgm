/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 5360.c
 * Seed:      1896245520
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint16_t g_7[3][2][5] = {{{1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL}}};
static int32_t g_10 = (-1L);
static uint32_t g_11[1][8] = {{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}};
static int8_t g_13 = (-5L);
static volatile uint8_t g_14 = 254UL;/* VOLATILE GLOBAL g_14 */


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_10 g_14 g_11
 * writes: g_11 g_14
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_6 = 0x23L;
    int32_t l_12 = 0x7084BC9CL;
    l_12 = (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(l_6, g_7[0][0][3])) && 0x6FF2L), (safe_div_func_int16_t_s_s(l_6, (g_11[0][7] = g_10)))));
    g_14--;
    return g_11[0][7];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_7[i][j][k], "g_7[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_11[i][j], "g_11[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
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

XXX max expression depth: 6
breakdown:
   depth: 1, occurrence: 4
   depth: 6, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 2
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 3
XXX percentage of non-volatile access: 75

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 77.8
XXX percentage an existing variable is used: 22.2
********************* end of statistics **********************/

