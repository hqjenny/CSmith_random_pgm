/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 12203.c
 * Seed:      3508628451
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 0xE1757117L;
static int32_t g_7[7][5][2] = {{{0L,0L},{0x2C57E71FL,0x4D63A88EL},{0L,9L},{0x8F6EFBA1L,0x147909B7L},{3L,9L}},{{9L,0L},{(-8L),0L},{1L,0L},{(-1L),0x21E9C96CL},{0x147909B7L,0L}},{{0L,0xB3895196L},{0x21E9C96CL,0xB3895196L},{0L,0L},{0x147909B7L,0x21E9C96CL},{(-1L),0L}},{{1L,0L},{(-8L),0L},{9L,9L},{3L,0x147909B7L},{0x8F6EFBA1L,9L}},{{0L,0x4D63A88EL},{0x2C57E71FL,0L},{0L,0x91208373L},{3L,(-1L)},{0x9A2B441AL,0L}},{{(-1L),0xB3895196L},{0x4D63A88EL,0L},{0x21E9C96CL,0x694A61BFL},{0x694A61BFL,4L},{0x6950A4BAL,0x91208373L}},{{9L,3L},{0L,9L},{0L,1L},{4L,0L},{9L,0L}}};
static int16_t g_8[3][10][6] = {{{0x8951L,0x8951L,0L,(-1L),6L,7L},{0x8951L,(-1L),(-3L),0x8951L,6L,0L},{6L,0x8951L,(-3L),(-1L),0x8951L,7L},{6L,(-1L),0L,0x8951L,0x8951L,0L},{0x8951L,0x8951L,0L,(-1L),6L,7L},{0x8951L,(-1L),(-3L),0x8951L,6L,0L},{6L,0x8951L,(-3L),(-1L),0x8951L,7L},{6L,(-1L),0L,0x8951L,0x8951L,0L},{0x8951L,0x8951L,0L,(-1L),6L,7L},{0x8951L,(-1L),(-3L),0x8951L,6L,0L}},{{6L,0x8951L,(-3L),(-1L),0x8951L,7L},{6L,(-1L),0L,0x8951L,0x8951L,0L},{0x8951L,0x8951L,0L,(-1L),6L,7L},{0x8951L,(-1L),(-3L),0x8951L,6L,0L},{6L,0x8951L,(-3L),(-1L),0x8951L,7L},{6L,(-1L),0L,0x8951L,0x8951L,0L},{0x8951L,0x8951L,0L,(-1L),6L,7L},{0x8951L,(-1L),(-3L),0x8951L,6L,0L},{6L,0x8951L,(-3L),(-1L),0x8951L,7L},{6L,(-1L),0L,0x8951L,0x8951L,0L}},{{0x8951L,0x8951L,0L,(-1L),6L,7L},{0x8951L,(-1L),(-3L),0x8951L,6L,0L},{6L,0x8951L,(-3L),(-1L),0x8951L,7L},{6L,(-1L),0L,0x8951L,0x8951L,0L},{0x8951L,0x8951L,0L,(-1L),6L,7L},{0x8951L,(-1L),(-3L),0x8951L,6L,0L},{6L,0x8951L,(-3L),(-1L),0x8951L,7L},{6L,(-1L),0L,0x8951L,0x8951L,0x7F08L},{9L,9L,0x7F08L,2L,(-4L),6L},{9L,2L,(-1L),9L,(-4L),0x7F08L}}};
static uint32_t g_9 = 18446744073709551615UL;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_7 g_8 g_9
 * writes: g_2 g_7 g_8 g_9
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_6 = 1UL;
    for (g_2 = 0; (g_2 > (-4)); g_2 = safe_sub_func_uint32_t_u_u(g_2, 9))
    { /* block id: 3 */
        int32_t l_5 = 1L;
        l_6 = l_5;
        if (g_2)
            continue;
        g_9 = (l_5 = (g_8[1][1][1] &= (g_7[5][2][1] |= 1L)));
        return g_9;
    }
    return l_6;
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
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_7[i][j][k], "g_7[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_8[i][j][k], "g_8[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_9, "g_9", print_hash_value);
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 6
   depth: 2, occurrence: 1
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 6
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 4

XXX percentage a fresh-made variable is used: 55.6
XXX percentage an existing variable is used: 44.4
********************* end of statistics **********************/

