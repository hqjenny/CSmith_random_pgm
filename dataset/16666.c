/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 16666.c
 * Seed:      2358936853
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint16_t g_9 = 0UL;/* VOLATILE GLOBAL g_9 */
static int16_t g_10 = 0xAF5AL;
static int32_t g_14[6][6][1] = {{{(-7L)},{2L},{1L},{(-7L)},{1L},{2L}},{{(-7L)},{0xE3B372BAL},{0xE3B372BAL},{(-7L)},{2L},{1L}},{{(-7L)},{1L},{2L},{(-7L)},{0xE3B372BAL},{0xE3B372BAL}},{{(-7L)},{2L},{1L},{(-7L)},{1L},{2L}},{{(-7L)},{0xE3B372BAL},{0xE3B372BAL},{(-7L)},{2L},{1L}},{{(-7L)},{1L},{2L},{(-7L)},{0xE3B372BAL},{0xE3B372BAL}}};
static uint32_t g_18 = 4294967290UL;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static uint8_t  func_12(uint32_t  p_13);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_9 g_10 g_14 g_18
 * writes: g_18 g_14
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_2 = 5UL;
    int32_t l_11 = 0x31D8B9DBL;
    int32_t l_19 = 1L;
    l_2--;
    g_14[0][2][0] = ((safe_sub_func_int8_t_s_s((4294967295UL > (l_11 = ((safe_rshift_func_uint8_t_u_u((l_2 != g_9), 6)) != g_10))), (l_19 = (g_18 ^= func_12(l_2))))) != 0x74L);
    return l_19;
}


/* ------------------------------------------ */
/* 
 * reads : g_14
 * writes:
 */
static uint8_t  func_12(uint32_t  p_13)
{ /* block id: 3 */
    uint32_t l_15 = 18446744073709551611UL;
    ++l_15;
    return g_14[0][2][0];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_14[i][j][k], "g_14[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_18, "g_18", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 8
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

XXX max expression depth: 11
breakdown:
   depth: 1, occurrence: 7
   depth: 11, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 6
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 91.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 53.3
XXX percentage an existing variable is used: 46.7
********************* end of statistics **********************/

