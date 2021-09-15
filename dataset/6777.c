/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 6777.c
 * Seed:      4125159601
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_2 = 6L;
static int32_t g_3 = 0x9E57AD95L;
static volatile int16_t g_8[10][6] = {{0xD853L,0x028EL,0L,7L,0L,0x028EL},{(-1L),0xD853L,0L,(-4L),(-1L),7L},{0x898FL,(-4L),0x028EL,0x028EL,(-4L),0x898FL},{0x028EL,(-4L),0x898FL,(-7L),(-1L),0L},{0L,0xD853L,(-1L),0xD853L,0L,(-4L)},{0L,0x028EL,0xD853L,(-7L),0xBF9FL,0xBF9FL},{0x028EL,(-1L),(-1L),0x028EL,(-1L),0xBF9FL},{0x898FL,0xBF9FL,0xD853L,(-4L),0xBF9FL,0x028EL},{(-4L),(-7L),(-4L),0xD853L,0xBF9FL,0x898FL},{(-7L),0L,(-1L),(-4L),(-4L),(-1L)}};
static volatile uint16_t g_9 = 1UL;/* VOLATILE GLOBAL g_9 */


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3 g_9
 * writes: g_3 g_9
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    int32_t l_4 = 0x29BF3901L;
    int32_t l_7 = 1L;
    l_4 = (g_3 |= g_2);
    if ((safe_rshift_func_int8_t_s_u((-7L), 2)))
    { /* block id: 3 */
        return g_3;
    }
    else
    { /* block id: 5 */
        ++g_9;
    }
    return l_7;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_9, "g_9", print_hash_value);
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 5
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 83.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 60
XXX percentage an existing variable is used: 40
********************* end of statistics **********************/

