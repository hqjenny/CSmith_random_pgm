/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 5069.c
 * Seed:      524412222
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_4 = 0x3606DE71L;
static int8_t g_6[10][10] = {{9L,0x44L,0x8DL,(-2L),0x8DL,0x44L,9L,0L,0x11L,0x85L},{0L,0xEBL,0x52L,0x68L,9L,9L,0x68L,0x52L,0xEBL,0L},{0xD2L,0xEBL,0x11L,(-7L),(-2L),0x85L,9L,0x85L,(-2L),(-7L)},{(-7L),0x44L,(-7L),0xEBL,(-2L),(-1L),0L,0x8DL,0x8DL,0L},{(-2L),9L,(-1L),(-1L),9L,(-2L),0xEBL,0L,(-2L),0x11L},{0xD2L,0x11L,(-1L),0x44L,0L,0x44L,(-1L),0x11L,0xD2L,0x52L},{0xD2L,9L,0x8DL,0xEBL,0x44L,0x52L,0x52L,0x44L,0xEBL,0x8DL},{0x52L,0x52L,0x44L,0xEBL,0x8DL,9L,0xD2L,(-7L),0xD2L,9L},{(-1L),0x44L,0L,0x44L,(-1L),0x11L,0xD2L,0x52L,(-2L),(-2L)},{0xEBL,0x52L,0x68L,9L,9L,0x68L,0x52L,0xEBL,0L,(-2L)}};


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);
static int32_t  func_2(uint16_t  p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_6
 * writes: g_6
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    int16_t l_5 = 0x5D09L;
    int32_t l_7[3];
    int i;
    for (i = 0; i < 3; i++)
        l_7[i] = 0xE4562513L;
    l_7[2] ^= (g_6[8][2] |= (l_5 = func_2(g_4)));
    return l_7[2];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t  func_2(uint16_t  p_3)
{ /* block id: 1 */
    return p_3;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 3
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
********************* end of statistics **********************/

