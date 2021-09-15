/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 17308.c
 * Seed:      871146198
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_2[8][4][3] = {{{3UL,0xC5A6L,1UL},{0x0480L,0xC5A6L,65535UL},{0UL,65535UL,0x0480L},{65527UL,0xE1DFL,65527UL}},{{0x25FCL,0x01F2L,65535UL},{0xFA72L,0x1591L,65527UL},{0x1591L,4UL,0x7030L},{0xC3D4L,9UL,0x01F2L}},{{0x1591L,0xC3D4L,65535UL},{0xFA72L,65527UL,3UL},{0x25FCL,3UL,0x491EL},{65527UL,65528UL,0x82D8L}},{{0UL,0x82D8L,0xC3D4L},{0x0480L,1UL,0xC3D4L},{3UL,0x7F6AL,0x82D8L},{0UL,3UL,3UL}},{{65535UL,0UL,0x3DF6L},{65528UL,0x312FL,4UL},{0x1591L,65527UL,65535UL},{0xE1DFL,0xC5A6L,0xF467L}},{{3UL,65527UL,0x6D8DL},{0x82D8L,0x312FL,1UL},{9UL,0UL,0xD783L},{0UL,3UL,0UL}},{{65535UL,0x491EL,3UL},{65527UL,65528UL,0x0480L},{65527UL,0x01F2L,0UL},{65535UL,1UL,65527UL}},{{0UL,0UL,0x25FCL},{9UL,0xD783L,0xFA72L},{0x82D8L,65535UL,0x1591L},{3UL,65530UL,0xC3D4L}}};
static int32_t g_3[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
static int32_t g_4 = (-1L);
static int32_t g_5 = 1L;


/* --- FORWARD DECLARATIONS --- */
static const uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3
 * writes: g_3 g_4 g_5 g_2
 */
static const uint32_t  func_1(void)
{ /* block id: 0 */
    for (g_3[1] = 0; g_3[1] < 8; g_3[1] += 1)
    {
        for (g_4 = 0; g_4 < 4; g_4 += 1)
        {
            for (g_5 = 0; g_5 < 3; g_5 += 1)
            {
                g_2[g_3[1]][g_4][g_5] = 0xDB78L;
            }
        }
    }
    return g_3[1];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
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

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 0
XXX percentage an existing variable is used: 100
********************* end of statistics **********************/

