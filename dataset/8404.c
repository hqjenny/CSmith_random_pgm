/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 8404.c
 * Seed:      1333885040
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint16_t g_2 = 0UL;/* VOLATILE GLOBAL g_2 */
static volatile int32_t g_5 = 0L;/* VOLATILE GLOBAL g_5 */
static int32_t g_6 = 1L;
static int32_t g_10 = 1L;
static int32_t g_17[4] = {0x9C3D069FL,0x9C3D069FL,0x9C3D069FL,0x9C3D069FL};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_6 g_10 g_5 g_17
 * writes: g_2 g_6 g_10 g_5
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_11 = 1UL;
    --g_2;
    for (g_6 = (-15); (g_6 != 28); g_6 = safe_add_func_int16_t_s_s(g_6, 8))
    { /* block id: 4 */
        uint32_t l_9[4];
        int i;
        for (i = 0; i < 4; i++)
            l_9[i] = 0x82EAC453L;
        for (g_10 = 0; (g_10 <= 3); g_10 += 1)
        { /* block id: 7 */
            int i;
            l_11++;
            g_5 ^= (safe_div_func_int32_t_s_s((!l_9[g_10]), l_9[g_10]));
        }
        g_10 = l_9[2];
        if (l_11)
            break;
    }
    return g_17[1];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_17[i], "g_17[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 9
   depth: 2, occurrence: 3

XXX total number of pointers: 0

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 9
XXX percentage of non-volatile access: 84.6

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 8
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 3
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 37.5
XXX percentage an existing variable is used: 62.5
********************* end of statistics **********************/

