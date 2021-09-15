/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 12561.c
 * Seed:      2410501470
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2[3][3][2] = {{{3L,1L},{1L,3L},{1L,1L}},{{3L,1L},{1L,3L},{1L,1L}},{{3L,1L},{1L,3L},{1L,1L}}};
static int32_t g_3 = 0x713A473EL;
static int32_t g_6 = 0xAB659D56L;


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_6 g_2
 * writes: g_3 g_6
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    int16_t l_9 = 0x443EL;
    int32_t l_18 = 0x7BB7AB61L;
    for (g_3 = 0; (g_3 == 23); g_3 = safe_add_func_int16_t_s_s(g_3, 7))
    { /* block id: 3 */
        uint16_t l_10 = 4UL;
        for (g_6 = (-13); (g_6 < 11); ++g_6)
        { /* block id: 6 */
            l_10--;
        }
        for (g_6 = (-25); (g_6 >= 3); ++g_6)
        { /* block id: 11 */
            uint32_t l_17 = 1UL;
            int32_t l_19 = 0x7631615EL;
            l_19 ^= (safe_sub_func_int32_t_s_s(l_17, (l_18 = g_2[1][1][0])));
        }
    }
    return l_9;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
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

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 4
   depth: 2, occurrence: 3
   depth: 3, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 6
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 91.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 2
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 62.5
XXX percentage an existing variable is used: 37.5
********************* end of statistics **********************/

