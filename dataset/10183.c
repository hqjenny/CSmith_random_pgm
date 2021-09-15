/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 10183.c
 * Seed:      2969102738
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint32_t g_2 = 0xD7F825E7L;/* VOLATILE GLOBAL g_2 */
static int16_t g_8 = 0xF82FL;
static volatile uint32_t g_9[1][8][2] = {{{4294967292UL,4294967292UL},{4294967292UL,4294967292UL},{4294967292UL,4294967292UL},{4294967292UL,4294967292UL},{4294967292UL,4294967292UL},{4294967292UL,4294967292UL},{4294967292UL,4294967292UL},{4294967292UL,4294967292UL}}};


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_8 g_9
 * writes: g_2 g_8
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_5 = 1L;
    int32_t l_10[9] = {0x020BD2ABL,0x020BD2ABL,0x04F3D4E6L,0x020BD2ABL,0x020BD2ABL,0x04F3D4E6L,0x020BD2ABL,0x020BD2ABL,0x04F3D4E6L};
    int i;
    g_2++;
    l_10[7] ^= (l_5 || (safe_sub_func_int32_t_s_s((g_8 ^= (-4L)), g_9[0][2][0])));
    return l_10[7];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_9[i][j][k], "g_9[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 4
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 2
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 83.3
XXX percentage an existing variable is used: 16.7
********************* end of statistics **********************/

