/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 3346.c
 * Seed:      4241090146
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_6 = 0xB3152C58L;
static uint8_t g_10[2][4][5] = {{{5UL,7UL,7UL,5UL,0x8CL},{5UL,0UL,0xDEL,0xDEL,0UL},{0x8CL,7UL,0xDEL,1UL,1UL},{7UL,0x8CL,7UL,0xDEL,1UL}},{{0UL,5UL,1UL,5UL,0UL},{7UL,5UL,0x8CL,0UL,0x8CL},{0x8CL,0x8CL,1UL,0UL,0x78L},{5UL,7UL,7UL,5UL,0x8CL}}};


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_10
 * writes: g_6 g_10
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    int32_t l_2 = 4L;
    int32_t l_3 = (-1L);
    uint16_t l_9[6];
    int i;
    for (i = 0; i < 6; i++)
        l_9[i] = 0x8AFAL;
lbl_13:
    l_3 = l_2;
    for (l_2 = 0; (l_2 <= (-14)); l_2 = safe_sub_func_int8_t_s_s(l_2, 5))
    { /* block id: 4 */
        g_6++;
        for (l_3 = 5; (l_3 >= 0); l_3 -= 1)
        { /* block id: 8 */
            ++g_10[0][0][0];
        }
    }
    if (l_3)
        goto lbl_13;
    return g_10[0][0][0];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_10[i][j][k], "g_10[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
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
   depth: 1, occurrence: 8
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 5
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 7
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
********************* end of statistics **********************/

