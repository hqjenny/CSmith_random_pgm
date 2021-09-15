/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 17607.c
 * Seed:      1335927064
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint16_t g_2[5] = {65535UL,65535UL,65535UL,65535UL,65535UL};
static int32_t g_8 = (-8L);
static uint16_t g_12 = 65535UL;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static uint32_t  func_3(int8_t  p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_12 g_8
 * writes: g_8 g_12
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_7 = 0UL;
    int32_t l_11[7] = {1L,1L,1L,1L,1L,1L,1L};
    int i;
    g_8 = (g_2[2] && func_3((safe_sub_func_uint16_t_u_u(l_7, l_7))));
    g_8 |= ((safe_sub_func_uint16_t_u_u((l_11[2] ^ 0UL), (g_12--))) || 1L);
    return g_12;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static uint32_t  func_3(int8_t  p_4)
{ /* block id: 1 */
    return p_4;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
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

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 4
   depth: 4, occurrence: 1
   depth: 5, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 3
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 3
XXX percentage of non-volatile access: 88.9

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 55.6
XXX percentage an existing variable is used: 44.4
********************* end of statistics **********************/

