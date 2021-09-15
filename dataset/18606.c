/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 18606.c
 * Seed:      3801885100
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 1L;
static int32_t g_5 = 0xC70C3099L;
static int16_t g_8 = 0x2A2BL;
static int32_t g_15[5][6] = {{0L,0x6A927213L,0L,0L,0x6A927213L,0L},{0L,0x6A927213L,0L,0L,0x6A927213L,0L},{0L,0x6A927213L,0L,0L,0x6A927213L,0L},{0L,0x6A927213L,0L,0L,0x6A927213L,0L},{0L,0x6A927213L,0L,0L,0x6A927213L,0L}};


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_5
 * writes: g_2 g_5 g_15
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_9 = 3UL;
    for (g_2 = 8; (g_2 > 2); --g_2)
    { /* block id: 3 */
        uint32_t l_14 = 5UL;
        g_5 = g_2;
        if ((safe_mul_func_int16_t_s_s(g_2, 1L)))
        { /* block id: 5 */
            if (g_5)
                break;
        }
        else
        { /* block id: 7 */
            --l_9;
        }
        g_15[2][3] = (g_5 = (safe_mod_func_int8_t_s_s(l_14, 0xB0L)));
    }
    return l_9;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
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

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 7
   depth: 2, occurrence: 2
   depth: 3, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 5
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 3
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 45.5
XXX percentage an existing variable is used: 54.5
********************* end of statistics **********************/

