/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 3470.c
 * Seed:      1351637292
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint8_t g_2[3][8] = {{0x38L,1UL,0x38L,0x70L,1UL,4UL,4UL,1UL},{1UL,4UL,4UL,1UL,0x70L,0x38L,1UL,0x38L},{1UL,255UL,0x49L,255UL,1UL,0x49L,255UL,255UL}};
static int8_t g_3 = (-6L);
static int32_t g_13 = 0xD50F82BAL;
static volatile uint8_t g_14[4] = {4UL,4UL,4UL,4UL};


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3 g_14 g_13
 * writes: g_3 g_14 g_13
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_7 = 4294967289UL;
    int32_t l_10 = 0L;
    uint32_t l_21 = 0UL;
lbl_6:
    g_3 &= g_2[0][3];
    for (g_3 = 20; (g_3 <= (-19)); --g_3)
    { /* block id: 4 */
        if (g_3)
            goto lbl_6;
    }
    l_10 = ((-7L) & (l_7--));
    if ((safe_add_func_uint32_t_u_u((l_10 <= l_7), l_7)))
    { /* block id: 9 */
        return g_2[0][3];
    }
    else
    { /* block id: 11 */
        g_14[0]++;
        for (g_3 = 2; (g_3 >= 0); g_3 -= 1)
        { /* block id: 15 */
            uint8_t l_18 = 0UL;
            for (l_7 = 0; (l_7 <= 2); l_7 += 1)
            { /* block id: 18 */
                volatile int32_t l_17 = 8L;/* VOLATILE GLOBAL l_17 */
                for (l_10 = 0; (l_10 <= 2); l_10 += 1)
                { /* block id: 21 */
                    for (g_13 = 0; (g_13 <= 2); g_13 += 1)
                    { /* block id: 24 */
                        int i, j;
                        return g_2[g_13][(g_3 + 4)];
                    }
                    l_17 = g_14[0];
                }
                g_13 = (-6L);
            }
            --l_18;
        }
        l_21 = l_10;
    }
    return l_21;
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
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_14[i], "g_14[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 9
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
   depth: 1, occurrence: 17
   depth: 2, occurrence: 5
   depth: 3, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 10
XXX times a non-volatile is write: 11
XXX times a volatile is read: 4
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 6
XXX percentage of non-volatile access: 77.8

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 17
XXX max block depth: 5
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 5
   depth: 2, occurrence: 2
   depth: 3, occurrence: 2
   depth: 4, occurrence: 2
   depth: 5, occurrence: 1

XXX percentage a fresh-made variable is used: 47.4
XXX percentage an existing variable is used: 52.6
********************* end of statistics **********************/

