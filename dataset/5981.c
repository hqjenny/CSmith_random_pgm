/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 5981.c
 * Seed:      2897459413
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_7[7][2] = {{65535UL,65526UL},{65526UL,65535UL},{65526UL,65526UL},{65535UL,65526UL},{65526UL,65535UL},{65526UL,65526UL},{65535UL,65526UL}};
static const int32_t g_10 = 0x6D0374C7L;


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);
static const int8_t  func_2(uint32_t  p_3, const int8_t  p_4, int8_t  p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_10
 * writes: g_7
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    int32_t l_6 = 0xD9532BB1L;
    l_6 = (func_2((g_7[3][0]++), g_10, l_6) != 3L);
    for (l_6 = (-7); (l_6 < 12); l_6 = safe_add_func_int16_t_s_s(l_6, 1))
    { /* block id: 7 */
        return g_7[5][0];
    }
    return g_7[3][0];
}


/* ------------------------------------------ */
/* 
 * reads : g_10
 * writes:
 */
static const int8_t  func_2(uint32_t  p_3, const int8_t  p_4, int8_t  p_5)
{ /* block id: 2 */
    return g_10;
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
            transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_10, "g_10", print_hash_value);
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

XXX max expression depth: 6
breakdown:
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1
   depth: 6, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 37.5
XXX percentage an existing variable is used: 62.5
********************* end of statistics **********************/

