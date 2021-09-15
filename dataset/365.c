/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 365.c
 * Seed:      994014865
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_5[4] = {0xF390L,0xF390L,0xF390L,0xF390L};
static int8_t g_13 = (-9L);


/* --- FORWARD DECLARATIONS --- */
static const uint8_t  func_1(void);
static uint16_t  func_8(uint32_t  p_9, int8_t  p_10);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5
 * writes: g_5 g_13
 */
static const uint8_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_2 = 0xDB58L;
    int32_t l_14 = 1L;
    ++l_2;
lbl_15:
    l_14 = (g_13 = (g_5[0] && (safe_lshift_func_uint16_t_u_u(func_8(g_5[2], (((safe_mod_func_int8_t_s_s(0x9BL, 0xF3L)) & g_5[0]) & g_5[3])), 10))));
    for (l_2 = 0; (l_2 <= 3); l_2 += 1)
    { /* block id: 13 */
        int i;
        return g_5[l_2];
    }
    if (l_2)
        goto lbl_15;
    return l_14;
}


/* ------------------------------------------ */
/* 
 * reads : g_5
 * writes: g_5
 */
static uint16_t  func_8(uint32_t  p_9, int8_t  p_10)
{ /* block id: 2 */
    for (p_10 = 3; (p_10 >= 0); p_10 -= 1)
    { /* block id: 5 */
        for (p_9 = 0; p_9 < 4; p_9 += 1)
        {
            g_5[p_9] = 0x5FDCL;
        }
    }
    return g_5[0];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_13, "g_13", print_hash_value);
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

XXX max expression depth: 9
breakdown:
   depth: 1, occurrence: 8
   depth: 2, occurrence: 2
   depth: 9, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 9
XXX times a non-volatile is write: 5
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 9
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 7
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 44.4
XXX percentage an existing variable is used: 55.6
********************* end of statistics **********************/

