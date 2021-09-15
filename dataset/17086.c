/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 17086.c
 * Seed:      3428327473
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_8 = (-2L);/* VOLATILE GLOBAL g_8 */
static uint16_t g_12 = 0x43E9L;
static uint16_t g_13[2][4] = {{0x0DE9L,0x0DE9L,0x0DE9L,0x0DE9L},{0x0DE9L,0x0DE9L,0x0DE9L,0x0DE9L}};


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);
static int16_t  func_2(uint32_t  p_3, int32_t  p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8 g_12 g_13
 * writes: g_13 g_8
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    int16_t l_11 = (-1L);
    int32_t l_15 = 9L;
    l_15 = ((func_2((safe_add_func_int8_t_s_s((~g_8), (safe_mod_func_uint32_t_u_u(0x985A9576L, l_11)))), (g_13[1][1] |= g_12)) & (-1L)) , g_13[1][1]);
    g_8 = 2L;
    return l_15;
}


/* ------------------------------------------ */
/* 
 * reads : g_13 g_12
 * writes:
 */
static int16_t  func_2(uint32_t  p_3, int32_t  p_4)
{ /* block id: 2 */
    uint32_t l_14 = 4294967290UL;
    l_14 = g_13[0][2];
    return g_12;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_13[i][j], "g_13[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
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

XXX max expression depth: 8
breakdown:
   depth: 1, occurrence: 7
   depth: 8, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 3
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 81.8

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 54.5
XXX percentage an existing variable is used: 45.5
********************* end of statistics **********************/

