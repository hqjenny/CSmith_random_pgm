/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 15760.c
 * Seed:      2124740984
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2[2][2][2] = {{{1L,(-1L)},{(-1L),1L}},{{(-1L),(-1L)},{1L,(-1L)}}};
static int8_t g_4[7][9] = {{2L,1L,0x39L,0xC3L,0xC3L,0x39L,1L,2L,0L},{0xA0L,0xF5L,2L,0xC3L,(-1L),0L,0x95L,(-1L),0x79L},{0L,0xC0L,0x79L,0x36L,0xA0L,0x36L,0x79L,0xC0L,0L},{0L,0x36L,(-1L),0x01L,0xA0L,0x95L,0xF5L,0x39L,0x9FL},{(-1L),0x39L,2L,0x79L,1L,1L,0x79L,2L,0x9FL},{0xC3L,0L,0xA0L,(-1L),4L,1L,0x15L,0x92L,0xF5L},{0x15L,0x79L,0L,0x01L,2L,0x92L,2L,0x01L,0L}};


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_4
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_3 = 0x7FA5C62EL;
    g_4[6][1] = (g_2[1][0][0] , l_3);
    for (l_3 = (-25); (l_3 > 41); l_3++)
    { /* block id: 4 */
        uint32_t l_7 = 1UL;
        return l_7;
    }
    return g_2[1][1][1];
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
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 3
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 80
XXX percentage an existing variable is used: 20
********************* end of statistics **********************/
