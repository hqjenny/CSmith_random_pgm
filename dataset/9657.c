/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 9657.c
 * Seed:      22646054
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint16_t g_4[6] = {0x97A4L,0x97A4L,0x97A4L,0x97A4L,0x97A4L,0x97A4L};
static uint8_t g_5 = 4UL;
static uint32_t g_15[6][1] = {{4294967295UL},{0x272BA75AL},{0x272BA75AL},{4294967295UL},{0x272BA75AL},{0x272BA75AL}};


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_5 g_15
 * writes: g_5 g_15
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int8_t l_8 = 0x2CL;
    int32_t l_9 = (-1L);
    int32_t l_10 = 1L;
    uint8_t l_14[2];
    int i;
    for (i = 0; i < 2; i++)
        l_14[i] = 253UL;
    g_5 ^= (safe_add_func_uint16_t_u_u(0UL, g_4[1]));
    l_10 = ((safe_mul_func_int16_t_s_s(l_8, (l_9 = g_5))) < l_8);
    for (l_8 = 0; (l_8 < 20); l_8++)
    { /* block id: 6 */
        uint16_t l_13 = 0x5C6FL;
        for (l_10 = 0; (l_10 <= 5); l_10 += 1)
        { /* block id: 9 */
            int i;
            return g_4[l_10];
        }
        l_14[0] = l_13;
    }
    ++g_15[3][0];
    return g_4[1];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_15[i][j], "g_15[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 8
   depth: 2, occurrence: 3
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 7
XXX times a volatile is read: 3
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 3
XXX percentage of non-volatile access: 81.2

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 8
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
********************* end of statistics **********************/

