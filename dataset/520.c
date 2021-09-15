/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 520.c
 * Seed:      1273049868
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint8_t g_3 = 1UL;
static volatile uint16_t g_5 = 0x811FL;/* VOLATILE GLOBAL g_5 */
static int16_t g_8 = 1L;
static uint8_t g_9[10][3] = {{0xDCL,0xEFL,0xEFL},{8UL,0x12L,255UL},{0x21L,0xDCL,0xFEL},{8UL,8UL,0x7DL},{0xDCL,0x21L,249UL},{0x12L,8UL,0x12L},{0xEFL,0xDCL,0xECL},{1UL,0x12L,0x12L},{0xECL,0xEFL,249UL},{255UL,1UL,0x7DL}};


/* --- FORWARD DECLARATIONS --- */
static const int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_5
 * writes: g_3 g_5 g_8 g_9
 */
static const int32_t  func_1(void)
{ /* block id: 0 */
    const int16_t l_2 = (-1L);
    int32_t l_4[9] = {(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L),1L,(-1L)};
    int i;
    g_3 ^= ((l_2 < 1L) , l_2);
    ++g_5;
    g_8 = (l_4[3] |= g_5);
    g_9[5][0] = (l_2 | (l_4[3] <= l_4[6]));
    return l_4[0];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_9[i][j], "g_9[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 6
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

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 6
   depth: 2, occurrence: 1
   depth: 3, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 4
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 3
XXX percentage of non-volatile access: 83.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 46.2
XXX percentage an existing variable is used: 53.8
********************* end of statistics **********************/

