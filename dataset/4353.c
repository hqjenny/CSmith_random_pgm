/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 4353.c
 * Seed:      476536288
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_6[4][7] = {{4L,4L,4L,4L,4L,4L,4L},{0xA6L,0xA6L,0xA6L,0xA6L,0xA6L,0xA6L,0xA6L},{4L,4L,4L,4L,4L,4L,4L},{0xA6L,0xA6L,0xA6L,0xA6L,0xA6L,0xA6L,0xA6L}};
static int32_t g_7 = 0xDB8FAAAEL;
static uint16_t g_9 = 7UL;


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);
static int8_t  func_3(uint32_t  p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_7 g_6 g_9
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    int32_t l_5 = 0xBEB0647DL;
    g_9 = (~func_3(l_5));
    for (l_5 = 0; l_5 < 4; l_5 += 1)
    {
        for (g_7 = 0; g_7 < 7; g_7 += 1)
        {
            g_6[l_5][g_7] = 0L;
        }
    }
    return l_5;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_7 g_6
 */
static int8_t  func_3(uint32_t  p_4)
{ /* block id: 1 */
    uint8_t l_8 = 0x92L;
    for (p_4 = 0; p_4 < 4; p_4 += 1)
    {
        for (g_7 = 0; g_7 < 7; g_7 += 1)
        {
            g_6[p_4][g_7] = 4L;
        }
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
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
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
   depth: 1, occurrence: 5
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 60
XXX percentage an existing variable is used: 40
********************* end of statistics **********************/

