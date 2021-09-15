/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 4659.c
 * Seed:      1544024158
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_5[2] = {0xB905D09EL,0xB905D09EL};
static uint8_t g_6 = 0x59L;
static int8_t g_13[6][2] = {{0x44L,0x44L},{0x44L,0x44L},{0x44L,0x44L},{0x44L,0x44L},{0x44L,0x44L},{0x44L,0x44L}};
static int32_t g_14 = (-1L);


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static uint16_t  func_2(uint8_t  p_3, uint16_t  p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_6 g_13 g_14
 * writes: g_6 g_14
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_9 = (-10L);
    uint16_t l_11[9];
    int i;
    for (i = 0; i < 9; i++)
        l_11[i] = 65532UL;
    g_14 ^= ((l_11[6] = func_2((g_5[1] , (--g_6)), l_9)) | (+g_13[5][0]));
    return g_5[1];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static uint16_t  func_2(uint8_t  p_3, uint16_t  p_4)
{ /* block id: 2 */
    int32_t l_10 = (-3L);
    return l_10;
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
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_13[i][j], "g_13[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_14, "g_14", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 7
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

XXX max expression depth: 7
breakdown:
   depth: 1, occurrence: 3
   depth: 7, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 3
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 75

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 87.5
XXX percentage an existing variable is used: 12.5
********************* end of statistics **********************/

