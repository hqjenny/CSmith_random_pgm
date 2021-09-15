/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 18017.c
 * Seed:      493086900
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2[8][2] = {{0xDE0B4074L,0xD6C05BAFL},{0xDE0B4074L,0xDE0B4074L},{0xDE0B4074L,0xD6C05BAFL},{0xDE0B4074L,0xDE0B4074L},{0xDE0B4074L,0xD6C05BAFL},{0xDE0B4074L,0xDE0B4074L},{0xDE0B4074L,0xD6C05BAFL},{0xDE0B4074L,0xDE0B4074L}};
static int32_t g_3 = 0xC891C553L;
static volatile int32_t g_6 = 0x7D7C1188L;/* VOLATILE GLOBAL g_6 */
static int32_t g_7 = 0L;


/* --- FORWARD DECLARATIONS --- */
static const uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_7 g_6
 * writes: g_3 g_7 g_2
 */
static const uint8_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_11 = 0xBDL;
    for (g_3 = 0; (g_3 != (-7)); g_3 = safe_sub_func_uint32_t_u_u(g_3, 7))
    { /* block id: 3 */
        uint16_t l_8 = 0xFE23L;
        for (g_7 = 0; (g_7 <= 1); g_7 += 1)
        { /* block id: 6 */
            int i, j;
            g_2[(g_7 + 3)][g_7] = 0xED6B6572L;
        }
        l_8--;
    }
    l_11 |= g_6;
    for (g_3 = 0; (g_3 <= 1); g_3 += 1)
    { /* block id: 14 */
        return g_3;
    }
    return l_11;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
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
   depth: 1, occurrence: 8
   depth: 2, occurrence: 3

XXX total number of pointers: 0

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 5
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 83.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 8
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 40
XXX percentage an existing variable is used: 60
********************* end of statistics **********************/

