/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 1787.c
 * Seed:      4113552976
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_2[10] = {0x03342EB9L,0x03342EB9L,0x03342EB9L,0x03342EB9L,0x03342EB9L,0x03342EB9L,0x03342EB9L,0x03342EB9L,0x03342EB9L,0x03342EB9L};
static int32_t g_3 = 0L;
static int32_t g_5 = 0L;


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_2 g_5
 * writes: g_3 g_5
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    int32_t l_4 = 4L;
    for (g_3 = 2; (g_3 <= 9); g_3 += 1)
    { /* block id: 3 */
        int i;
        l_4 = g_2[g_3];
        for (l_4 = 0; (l_4 <= 9); l_4 += 1)
        { /* block id: 7 */
            g_5 = ((g_2[g_3] | l_4) | g_2[2]);
            return g_3;
        }
        if (g_3)
            continue;
    }
    g_3 = (safe_div_func_int8_t_s_s((g_2[9] ^ g_5), (safe_rshift_func_int8_t_s_u((~(+g_3)), 3))));
    return g_5;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 7
   depth: 2, occurrence: 2
   depth: 3, occurrence: 1
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 12
XXX times a non-volatile is write: 5
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 8
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 3
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 16.7
XXX percentage an existing variable is used: 83.3
********************* end of statistics **********************/

