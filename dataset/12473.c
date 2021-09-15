/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 12473.c
 * Seed:      4154087609
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2[3][5][5] = {{{0x7E4FC228L,0x0E446DF3L,0x0E446DF3L,0x7E4FC228L,(-10L)},{0xDC345FE4L,1L,0x2DB8E964L,2L,0x9BE1D925L},{(-10L),0x0E446DF3L,0x12DF3D37L,0L,0L},{(-1L),1L,(-1L),2L,0xD9EE1C97L},{2L,0x7E4FC228L,0L,0x7E4FC228L,2L}},{{(-1L),0xD45DB34EL,0L,1L,0L},{(-10L),(-10L),0L,2L,0xC2E7CCC8L},{0xDC345FE4L,0L,(-1L),0xD45DB34EL,0L},{0x7E4FC228L,2L,0x12DF3D37L,0x12DF3D37L,2L},{0L,1L,0xD9EE1C97L,1L,0L}},{{2L,0xC2E7CCC8L,2L,0L,(-10L)},{0x2DB8E964L,0L,0L,0L,0x2DB8E964L},{2L,0x0E446DF3L,0xC2E7CCC8L,0x12DF3D37L,0xC2E7CCC8L},{(-1L),8L,0L,2L,0xDC345FE4L},{0x0E446DF3L,2L,2L,0x0E446DF3L,0xC2E7CCC8L}}};
static int32_t g_3 = 1L;


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_2
 * writes: g_3
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    volatile uint8_t l_6 = 0x6EL;/* VOLATILE GLOBAL l_6 */
    int32_t l_7 = (-10L);
    for (g_3 = 25; (g_3 != 15); g_3--)
    { /* block id: 3 */
        l_6 = g_2[1][1][2];
        l_7 |= l_6;
        if (l_7)
            break;
    }
    g_3 = (safe_rshift_func_uint8_t_u_u(l_6, l_7));
    return g_2[2][4][2];
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
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
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
   depth: 1, occurrence: 7
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 3
XXX times a volatile is read: 4
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 6
XXX percentage of non-volatile access: 54.5

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 3

XXX percentage a fresh-made variable is used: 22.2
XXX percentage an existing variable is used: 77.8
********************* end of statistics **********************/

