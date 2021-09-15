/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 2363.c
 * Seed:      3378796224
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_2[5][8] = {{0xADA4L,0x8BBCL,0xADA4L,0xADA4L,0x8BBCL,0xADA4L,0xADA4L,0x8BBCL},{0x8BBCL,0xADA4L,0xADA4L,0x8BBCL,0xADA4L,0xADA4L,0x8BBCL,0xADA4L},{0x8BBCL,0x8BBCL,0xB064L,0x8BBCL,0x8BBCL,0xB064L,0x8BBCL,0x8BBCL},{0xADA4L,0x8BBCL,0xADA4L,0xADA4L,0x8BBCL,0xADA4L,0xADA4L,0x8BBCL},{0x8BBCL,0xADA4L,0xADA4L,0x8BBCL,0xADA4L,0xADA4L,0x8BBCL,0xADA4L}};
static int32_t g_3[7] = {0L,0L,0L,0L,0L,0L,0L};
static volatile int32_t g_4 = 0L;/* VOLATILE GLOBAL g_4 */
static int32_t g_5 = 1L;


/* --- FORWARD DECLARATIONS --- */
static const int8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5
 * writes: g_3 g_4 g_2 g_5
 */
static const int8_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_8 = 9UL;
    for (g_3[1] = 0; g_3[1] < 5; g_3[1] += 1)
    {
        for (g_4 = 0; g_4 < 8; g_4 += 1)
        {
            g_2[g_3[1]][g_4] = 7UL;
        }
    }
    for (g_5 = 0; (g_5 < (-9)); g_5 = safe_sub_func_int8_t_s_s(g_5, 3))
    { /* block id: 4 */
        l_8--;
    }
    return l_8;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 25
XXX percentage an existing variable is used: 75
********************* end of statistics **********************/

