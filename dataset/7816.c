/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 7816.c
 * Seed:      2013090688
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_2[3][4][6] = {{{5L,1L,(-8L),0x299DL,0xDA43L,0xAAEBL},{(-9L),0x8BBCL,(-1L),0x8BBCL,(-9L),1L},{0xE4D9L,0x707DL,(-9L),(-1L),0xAE77L,0L},{0xDA43L,(-9L),0xC4B4L,0x707DL,0x21DEL,0L}},{{0x8BBCL,0xE64FL,(-9L),0xAAEBL,0xC4B4L,1L},{0x21DEL,(-6L),(-1L),0xE4D9L,0xAAEBL,0xAAEBL},{(-5L),(-8L),(-8L),(-5L),1L,0xC4B4L},{(-8L),(-1L),0x9E2AL,(-1L),0xAAEBL,(-6L)}},{{(-1L),1L,1L,(-1L),0xAAEBL,0x1265L},{0x1265L,0x707DL,(-1L),(-2L),0x8BBCL,0xE4D9L},{0L,0xDA43L,5L,0xE64FL,0xC4B4L,0xE64FL},{0x707DL,0x299DL,0x707DL,0L,(-1L),0x21DEL}}};
static volatile int32_t g_3 = 0x2733582FL;/* VOLATILE GLOBAL g_3 */
static volatile int32_t g_4 = 0x3414B58EL;/* VOLATILE GLOBAL g_4 */
static volatile int32_t g_5 = (-10L);/* VOLATILE GLOBAL g_5 */


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3
 * writes: g_3 g_4 g_5 g_2
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    int32_t l_6 = (-4L);
    for (g_3 = 0; g_3 < 3; g_3 += 1)
    {
        for (g_4 = 0; g_4 < 4; g_4 += 1)
        {
            for (g_5 = 0; g_5 < 6; g_5 += 1)
            {
                g_2[g_3][g_4][g_5] = 1L;
            }
        }
    }
    l_6 = g_2[0][0][2];
    return g_3;
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
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 4

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 33.3
XXX percentage an existing variable is used: 66.7
********************* end of statistics **********************/

