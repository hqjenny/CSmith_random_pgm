/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 9658.c
 * Seed:      199810958
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint8_t g_6[3][6][3] = {{{0x7CL,253UL,0x7CL},{0UL,0UL,0xE8L},{0x7CL,0x0DL,2UL},{0UL,250UL,0UL},{0x7CL,0xD9L,0UL},{0UL,1UL,0UL}},{{0x7CL,253UL,0x7CL},{0UL,0UL,0xE8L},{0x7CL,0x0DL,2UL},{0UL,250UL,0UL},{0x7CL,0xD9L,0UL},{0UL,1UL,0UL}},{{0x7CL,253UL,0x7CL},{0UL,0UL,0xE8L},{0x7CL,0x0DL,2UL},{0UL,0xE8L,5UL},{0x9BL,0x7CL,252UL},{5UL,0UL,0x81L}}};
static uint8_t g_13 = 0x88L;
static uint32_t g_17 = 0x28C7FFFAL;
static int32_t g_19 = 0x920B2455L;
static uint32_t g_20 = 0xB756FD8CL;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static const uint16_t  func_9(uint32_t  p_10, int32_t  p_11, uint16_t  p_12);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_13 g_17 g_19 g_20
 * writes: g_13 g_17 g_20
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_2[5];
    int32_t l_3 = (-3L);
    int i;
    for (i = 0; i < 5; i++)
        l_2[i] = 1UL;
    g_20 ^= ((l_3 ^= l_2[3]) || ((((safe_add_func_uint16_t_u_u((g_6[0][0][2] , ((g_6[2][3][1] != (l_2[3] > 4294967295UL)) >= (l_3 = (l_2[0] ^ (l_3 & func_9((g_13 || (g_13 ^ l_2[3])), l_2[1], g_13)))))), (-6L))) , g_13) || g_17) <= g_19));
    return g_19;
}


/* ------------------------------------------ */
/* 
 * reads : g_13 g_17
 * writes: g_13 g_17
 */
static const uint16_t  func_9(uint32_t  p_10, int32_t  p_11, uint16_t  p_12)
{ /* block id: 2 */
    int32_t l_16 = (-1L);
lbl_18:
    for (g_13 = 21; (g_13 >= 13); --g_13)
    { /* block id: 5 */
        l_16 ^= 1L;
        if (g_13)
            goto lbl_18;
        g_17 = l_16;
    }
    return g_17;
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
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 8
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

XXX max expression depth: 19
breakdown:
   depth: 1, occurrence: 8
   depth: 2, occurrence: 1
   depth: 19, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 16
XXX times a non-volatile is write: 6
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 91.7

XXX forward jumps: 1
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 3

XXX percentage a fresh-made variable is used: 36.4
XXX percentage an existing variable is used: 63.6
********************* end of statistics **********************/

