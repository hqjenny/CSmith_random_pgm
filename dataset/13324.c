/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 13324.c
 * Seed:      1963481887
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_2[9][6][4] = {{{(-8L),0L,9L,0x2189L},{0L,0L,0x9A27L,9L},{0xEB2FL,0xAD7DL,0xAD7DL,0xEB2FL},{(-8L),(-6L),0xAD7DL,0x2189L},{0xEB2FL,0x75DCL,0x9A27L,0L},{0L,0xAD7DL,9L,0L}},{{(-8L),0x75DCL,1L,0x2189L},{9L,(-6L),0x9A27L,0xEB2FL},{9L,0xAD7DL,1L,9L},{(-8L),0L,9L,0x2189L},{0L,0L,0x9A27L,9L},{0xEB2FL,0xAD7DL,0x9A27L,1L}},{{(-1L),9L,0x9A27L,0x09F5L},{1L,1L,(-6L),0x2189L},{0x2189L,0x9A27L,0x087AL,0x2189L},{(-1L),1L,0L,0x09F5L},{(-8L),9L,(-6L),1L},{(-8L),0x9A27L,0L,(-8L)}},{{(-1L),0xAD7DL,0x087AL,0x09F5L},{0x2189L,0xAD7DL,(-6L),(-8L)},{1L,0x9A27L,0x9A27L,1L},{(-1L),9L,0x9A27L,0x09F5L},{1L,1L,(-6L),0x2189L},{0x2189L,0x9A27L,0x087AL,0x2189L}},{{(-1L),1L,0L,0x09F5L},{(-8L),9L,(-6L),1L},{(-8L),0x9A27L,0L,(-8L)},{(-1L),0xAD7DL,0x087AL,0x09F5L},{0x2189L,0xAD7DL,(-6L),(-8L)},{1L,0x9A27L,0x9A27L,1L}},{{(-1L),9L,0x9A27L,0x09F5L},{1L,1L,(-6L),0x2189L},{0x2189L,0x9A27L,0x087AL,0x2189L},{(-1L),1L,0L,0x09F5L},{(-8L),9L,(-6L),1L},{(-8L),0x9A27L,0L,(-8L)}},{{(-1L),0xAD7DL,0x087AL,0x09F5L},{0x2189L,0xAD7DL,(-6L),(-8L)},{1L,0x9A27L,0x9A27L,1L},{(-1L),9L,0x9A27L,0x09F5L},{1L,1L,(-6L),0x2189L},{0x2189L,0x9A27L,0x087AL,0x2189L}},{{(-1L),1L,0L,0x09F5L},{(-8L),9L,(-6L),1L},{(-8L),0x9A27L,0L,(-8L)},{(-1L),0xAD7DL,0x087AL,0x09F5L},{0x2189L,0xAD7DL,(-6L),(-8L)},{1L,0x9A27L,0x9A27L,1L}},{{(-1L),9L,0x9A27L,0x09F5L},{1L,1L,(-6L),0x2189L},{0x2189L,0x9A27L,0x087AL,0x2189L},{(-1L),1L,0L,0x09F5L},{(-8L),9L,(-6L),1L},{(-8L),0x9A27L,0L,(-8L)}}};
static volatile int32_t g_3[3][5] = {{0x764939E6L,(-1L),0xEC415051L,(-1L),0x764939E6L},{1L,(-1L),0x89C089CEL,0x764939E6L,0x89C089CEL},{0x89C089CEL,0x89C089CEL,0xEC415051L,0x764939E6L,0L}};
static volatile int32_t g_4 = 0xDC64F6B9L;/* VOLATILE GLOBAL g_4 */
static volatile int32_t g_5 = 0xFCB8F1FEL;/* VOLATILE GLOBAL g_5 */


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_3 g_4 g_5 g_2
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    int32_t l_6 = 0L;
    for (g_3[2][2] = 0; g_3[2][2] < 9; g_3[2][2] += 1)
    {
        for (g_4 = 0; g_4 < 6; g_4 += 1)
        {
            for (g_5 = 0; g_5 < 4; g_5 += 1)
            {
                g_2[g_3[2][2]][g_4][g_5] = 0x2F55L;
            }
        }
    }
    return l_6;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
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
   depth: 1, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
********************* end of statistics **********************/

