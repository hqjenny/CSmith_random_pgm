/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 10312.c
 * Seed:      198412807
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_4[2][7][5] = {{{1UL,65533UL,0x000DL,0x000DL,65533UL},{1UL,65533UL,0x000DL,0x000DL,65533UL},{1UL,65533UL,0x000DL,0x000DL,65533UL},{1UL,65533UL,0x000DL,0x000DL,65533UL},{1UL,65533UL,0x000DL,0x000DL,65533UL},{1UL,65533UL,0x000DL,0x000DL,65533UL},{1UL,65533UL,0x000DL,0x000DL,65533UL}},{{1UL,65533UL,0x000DL,0x000DL,65533UL},{1UL,65533UL,0x000DL,0x000DL,65533UL},{1UL,0x37D8L,65533UL,65533UL,0x37D8L},{65535UL,0x37D8L,65533UL,65533UL,0x37D8L},{65535UL,0x37D8L,65533UL,65533UL,0x37D8L},{65535UL,0x37D8L,65533UL,65533UL,0x37D8L},{65535UL,0x37D8L,65533UL,65533UL,0x37D8L}}};
static volatile int32_t g_5 = 0x751C76D7L;/* VOLATILE GLOBAL g_5 */
static volatile int32_t g_6 = 0xE55059B8L;/* VOLATILE GLOBAL g_6 */
static uint32_t g_7 = 0UL;


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);
static const int32_t  func_2(int8_t  p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_7
 * writes: g_5 g_6 g_4 g_7
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    g_7 |= func_2(g_4[0][0][4]);
    return g_4[1][4][0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_5 g_6 g_4
 */
static const int32_t  func_2(int8_t  p_3)
{ /* block id: 1 */
    for (p_3 = 0; p_3 < 2; p_3 += 1)
    {
        for (g_5 = 0; g_5 < 7; g_5 += 1)
        {
            for (g_6 = 0; g_6 < 5; g_6 += 1)
            {
                g_4[p_3][g_5][g_6] = 65530UL;
            }
        }
    }
    return p_3;
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
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
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
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

