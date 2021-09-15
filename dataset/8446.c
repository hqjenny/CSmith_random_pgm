/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 8446.c
 * Seed:      4134631880
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2[6][8] = {{3L,0xAC488899L,(-8L),0xAC488899L,3L,(-5L),0x2BBEF7D6L,0xA75C96DDL},{(-5L),3L,3L,0xF72D4EA6L,(-1L),0xB4B13281L,0xAC488899L,0xAC488899L},{5L,1L,3L,3L,1L,5L,0x2BBEF7D6L,(-1L)},{(-1L),0xF2F4A8B1L,(-8L),0xA75C96DDL,0xAC488899L,0xF72D4EA6L,5L,(-5L)},{(-8L),0x8F8256A9L,(-5L),0xA75C96DDL,(-5L),0x8F8256A9L,(-8L),(-1L)},{1L,(-5L),3L,3L,0xF72D4EA6L,(-1L),0xF2F4A8B1L,(-5L)}};
static volatile int32_t g_3[5] = {0xE5C285CEL,0xE5C285CEL,0xE5C285CEL,0xE5C285CEL,0xE5C285CEL};
static volatile int32_t g_4 = 6L;/* VOLATILE GLOBAL g_4 */
static int32_t g_5 = 0L;


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_2
 * writes: g_5 g_2
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_8 = 4UL;
    for (g_5 = 0; (g_5 < (-6)); g_5 = safe_sub_func_int32_t_s_s(g_5, 9))
    { /* block id: 3 */
        l_8++;
    }
    for (l_8 = 0; l_8 < 6; l_8 += 1)
    {
        for (g_5 = 0; g_5 < 8; g_5 += 1)
        {
            g_2[l_8][g_5] = 0x7C70AB22L;
        }
    }
    return g_2[4][6];
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
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 2
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 75

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

