/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 5176.c
 * Seed:      1936571862
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2[3][3] = {{(-3L),(-3L),(-3L)},{4L,4L,4L},{(-3L),(-3L),(-3L)}};
static volatile int32_t g_3 = 0xDF603FA7L;/* VOLATILE GLOBAL g_3 */
static volatile int32_t g_4 = 0L;/* VOLATILE GLOBAL g_4 */
static int32_t g_5 = 0x54FDDD3FL;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_2 g_4
 * writes: g_5 g_2
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_8 = 0xB37BL;
    for (g_5 = 0; (g_5 != 28); ++g_5)
    { /* block id: 3 */
        if (l_8)
            break;
        g_2[2][1] = (g_2[0][0] & (safe_lshift_func_uint8_t_u_s(g_5, 7)));
        for (l_8 = 4; (l_8 < 23); ++l_8)
        { /* block id: 8 */
            return g_2[2][0];
        }
    }
    return g_4;
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
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
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
   depth: 2, occurrence: 2
   depth: 3, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 2
XXX times a volatile is read: 3
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 9
XXX percentage of non-volatile access: 60

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 16.7
XXX percentage an existing variable is used: 83.3
********************* end of statistics **********************/

