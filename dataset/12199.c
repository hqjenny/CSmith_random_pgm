/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 12199.c
 * Seed:      2480022225
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2[2][8] = {{(-1L),0x90AC204EL,(-1L),(-1L),0x90AC204EL,(-1L),(-1L),0x90AC204EL},{0x90AC204EL,(-1L),(-1L),0x90AC204EL,(-1L),(-1L),0x90AC204EL,(-1L)}};
static uint16_t g_10 = 0x0815L;
static int32_t g_12 = (-1L);


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static int8_t  func_5(int32_t  p_6, int8_t  p_7, int32_t  p_8);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_10
 * writes: g_2 g_10 g_12
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int16_t l_9[8] = {(-1L),(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L)};
    int i;
    for (g_2[1][6] = 0; (g_2[1][6] < (-27)); g_2[1][6]--)
    { /* block id: 3 */
        const uint8_t l_11 = 0xA3L;
        g_10 = (func_5(g_2[0][4], g_2[0][3], l_9[1]) < 0x17L);
        g_12 = l_11;
    }
    for (g_10 = (-27); (g_10 < 56); ++g_10)
    { /* block id: 11 */
        if (g_2[1][5])
            break;
    }
    return l_9[1];
}


/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes:
 */
static int8_t  func_5(int32_t  p_6, int8_t  p_7, int32_t  p_8)
{ /* block id: 4 */
    return g_2[1][6];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
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

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 6
   depth: 2, occurrence: 2
   depth: 5, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 9
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 3

XXX percentage a fresh-made variable is used: 44.4
XXX percentage an existing variable is used: 55.6
********************* end of statistics **********************/

