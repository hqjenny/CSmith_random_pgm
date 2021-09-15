/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 16632.c
 * Seed:      3194689782
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_11[9] = {0x01L,0x01L,0x01L,0x01L,0x01L,0x01L,0x01L,0x01L,0x01L};
static volatile uint8_t g_16[2][1][10] = {{{0UL,0UL,1UL,0UL,1UL,0UL,0UL,1UL,0UL,1UL}},{{0UL,0UL,1UL,0UL,1UL,0UL,0UL,1UL,0UL,1UL}}};
static int16_t g_17 = 0xE607L;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static uint16_t  func_5(int16_t  p_6, int8_t  p_7, int16_t  p_8, int16_t  p_9);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_11 g_16 g_17
 * writes: g_17
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_10 = 0x800FA72CL;
    int32_t l_18[10];
    int i;
    for (i = 0; i < 10; i++)
        l_18[i] = 3L;
    l_18[8] = (g_17 &= ((+((safe_div_func_uint16_t_u_u((((func_5(l_10, l_10, g_11[8], g_11[8]) , ((((g_11[5] || 3UL) ^ (safe_div_func_int32_t_s_s(g_11[8], (safe_sub_func_uint32_t_u_u(4294967292UL, 0xE665969AL))))) , g_16[0][0][3]) & g_11[3])) > g_11[1]) == g_11[6]), 0x6A0BL)) < l_10)) && 0xE8L));
    return l_18[0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static uint16_t  func_5(int16_t  p_6, int8_t  p_7, int16_t  p_8, int16_t  p_9)
{ /* block id: 1 */
    return p_7;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_16[i][j][k], "g_16[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_17, "g_17", print_hash_value);
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

XXX max expression depth: 18
breakdown:
   depth: 1, occurrence: 3
   depth: 18, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 12
XXX times a non-volatile is write: 2
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

XXX percentage a fresh-made variable is used: 33.3
XXX percentage an existing variable is used: 66.7
********************* end of statistics **********************/

