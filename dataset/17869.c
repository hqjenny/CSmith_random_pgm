/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 17869.c
 * Seed:      1010174144
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_5[7][2] = {{0xBEB0L,0xAB3EL},{1UL,0xBEB0L},{1UL,1UL},{1UL,0xBEB0L},{1UL,0xAB3EL},{0xBEB0L,0xAB3EL},{1UL,0xBEB0L}};
static uint32_t g_11[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static uint32_t g_12 = 1UL;
static uint16_t g_13 = 65528UL;


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);
static int32_t  func_2(int32_t  p_3, int32_t  p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_11 g_13
 * writes: g_11 g_12 g_13
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_6 = 0UL;
    g_13 ^= func_2((l_6 |= g_5[1][0]), g_5[1][0]);
    return l_6;
}


/* ------------------------------------------ */
/* 
 * reads : g_11
 * writes: g_11 g_12
 */
static int32_t  func_2(int32_t  p_3, int32_t  p_4)
{ /* block id: 2 */
    int32_t l_10 = 0xEDBDA7FEL;
    g_11[1] = (safe_unary_minus_func_int16_t_s((l_10 = (safe_mod_func_uint16_t_u_u(p_4, p_3)))));
    g_12 = g_11[3];
    return g_11[1];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 6
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
   depth: 3, occurrence: 1
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 5
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

