/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 14520.c
 * Seed:      3346751056
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint8_t g_2[3][2] = {{0xECL,247UL},{247UL,0xECL},{247UL,247UL}};
static int32_t g_3 = 0x69AED23BL;
static int16_t g_11 = 0x0A70L;
static int8_t g_14 = (-6L);
static uint8_t g_15[2][2] = {{0x6BL,0x6BL},{0x6BL,0x6BL}};


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);
static int32_t  func_6(uint16_t  p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_2 g_14
 * writes: g_2 g_3 g_11 g_14 g_15
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    g_2[2][1] = 0x03342EB9L;
    for (g_3 = 7; (g_3 > (-18)); --g_3)
    { /* block id: 4 */
        g_11 = func_6(g_2[0][0]);
        g_15[0][1] = (g_14 |= (safe_sub_func_int8_t_s_s(func_6(g_3), (g_2[2][0] == (-1L)))));
        if (g_14)
            continue;
    }
    return g_2[2][1];
}


/* ------------------------------------------ */
/* 
 * reads : g_3
 * writes:
 */
static int32_t  func_6(uint16_t  p_7)
{ /* block id: 5 */
    for (p_7 = 0; (p_7 != 1); p_7 = safe_add_func_int16_t_s_s(p_7, 7))
    { /* block id: 8 */
        uint32_t l_10[4] = {0x352F76ECL,0x352F76ECL,0x352F76ECL,0x352F76ECL};
        int i;
        return l_10[2];
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
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_15[i][j], "g_15[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
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

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 8
   depth: 2, occurrence: 3
   depth: 5, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 5
XXX times a volatile is read: 3
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 8
XXX percentage of non-volatile access: 73.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 9
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 4

XXX percentage a fresh-made variable is used: 45.5
XXX percentage an existing variable is used: 54.5
********************* end of statistics **********************/

