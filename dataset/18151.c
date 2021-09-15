/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 18151.c
 * Seed:      2260157816
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_3[2][9][3] = {{{0xD461L,0x0398L,0x924CL},{1L,0L,1L},{0xD461L,1L,0x924CL},{(-2L),0L,(-2L)},{0xD461L,0x0398L,0x924CL},{1L,0L,1L},{0xD461L,1L,0x924CL},{(-2L),0L,(-2L)},{0xD461L,0x0398L,0x924CL}},{{1L,0L,1L},{0xD461L,1L,0x924CL},{(-2L),0L,(-2L)},{0xD461L,0x0398L,0x924CL},{1L,0L,1L},{0xD461L,1L,0x924CL},{(-2L),(-4L),0x6D4AL},{0x4B66L,0x924CL,(-1L)},{0x5ED9L,(-4L),0x5ED9L}}};
static uint16_t g_4 = 0x38DCL;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_4
 * writes: g_4
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_8 = 251UL;
lbl_7:
    g_4 = ((safe_unary_minus_func_uint16_t_u(0x6960L)) ^ g_3[1][4][1]);
    for (g_4 = 0; (g_4 > 36); ++g_4)
    { /* block id: 4 */
        if (g_4)
            goto lbl_7;
    }
    return l_8;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
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
   depth: 1, occurrence: 3
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
********************* end of statistics **********************/

