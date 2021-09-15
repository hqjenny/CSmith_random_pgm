/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 14621.c
 * Seed:      3629072871
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_4 = (-1L);/* VOLATILE GLOBAL g_4 */
static uint16_t g_10[3] = {1UL,1UL,1UL};
static uint32_t g_15 = 0xF33880E0L;
static int8_t g_21[3][1] = {{0x60L},{0x60L},{0x60L}};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static uint8_t  func_11(int8_t  p_12, uint32_t  p_13, int16_t  p_14);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_10 g_21
 * writes: g_15 g_21
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int16_t l_5 = 1L;
    int16_t l_20 = 1L;
    int32_t l_22 = 5L;
    l_22 &= (safe_div_func_uint16_t_u_u((g_4 | l_5), ((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(g_10[2], 3)), 2)) , (((g_15 = func_11(g_10[2], l_5, l_5)) & (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(l_5, 6)), (g_21[1][0] = l_20)))) || 0x03L)) , g_21[1][0]) ^ l_20)));
    return l_20;
}


/* ------------------------------------------ */
/* 
 * reads : g_10
 * writes:
 */
static uint8_t  func_11(int8_t  p_12, uint32_t  p_13, int16_t  p_14)
{ /* block id: 1 */
    return g_10[2];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_15, "g_15", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_21[i][j], "g_21[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
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

XXX max expression depth: 17
breakdown:
   depth: 1, occurrence: 3
   depth: 17, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 11
XXX times a non-volatile is write: 3
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 93.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 46.7
XXX percentage an existing variable is used: 53.3
********************* end of statistics **********************/

