/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 4147.c
 * Seed:      3434233634
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2[7] = {0x7DDC85F7L,0x7DDC85F7L,0x7DDC85F7L,0x7DDC85F7L,0x7DDC85F7L,0x7DDC85F7L,0x7DDC85F7L};
static volatile uint32_t g_9 = 4UL;/* VOLATILE GLOBAL g_9 */
static uint32_t g_13 = 0x0369BD69L;
static uint32_t g_15 = 1UL;


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);
static int32_t  func_5(int8_t  p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_9 g_15
 * writes: g_2 g_9 g_13 g_15
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_16 = 1UL;
    for (g_2[6] = 0; (g_2[6] > 8); g_2[6]++)
    { /* block id: 3 */
        g_15 = func_5(g_2[6]);
        if (g_15)
            break;
    }
    l_16--;
    for (l_16 = 0; (l_16 > 7); ++l_16)
    { /* block id: 20 */
        for (g_15 = 0; (g_15 <= 6); g_15 += 1)
        { /* block id: 23 */
            g_2[5] = 0x09642E40L;
        }
        if (g_9)
            continue;
    }
    return l_16;
}


/* ------------------------------------------ */
/* 
 * reads : g_9
 * writes: g_9 g_13
 */
static int32_t  func_5(int8_t  p_6)
{ /* block id: 4 */
    int8_t l_12[7] = {0x3EL,0x3EL,0xC7L,0x3EL,0x3EL,0xC7L,0x3EL};
    int32_t l_14 = 0xCA9F8D19L;
    int i;
    for (p_6 = 0; (p_6 >= 5); p_6 = safe_add_func_uint8_t_u_u(p_6, 3))
    { /* block id: 7 */
        return p_6;
    }
    g_9++;
    l_14 &= (g_13 = l_12[4]);
    return l_14;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
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
   depth: 1, occurrence: 13
   depth: 2, occurrence: 6

XXX total number of pointers: 0

XXX times a non-volatile is read: 10
XXX times a non-volatile is write: 9
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 11
XXX percentage of non-volatile access: 90.5

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 14
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 8
   depth: 1, occurrence: 5
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 33.3
XXX percentage an existing variable is used: 66.7
********************* end of statistics **********************/

