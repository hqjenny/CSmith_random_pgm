/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 5416.c
 * Seed:      1072337758
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_6[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
static uint8_t g_12 = 0x30L;
static int16_t g_17 = 0x7AB6L;


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);
static int32_t  func_2(int32_t  p_3, uint32_t  p_4, int16_t  p_5);
static int8_t  func_10(uint16_t  p_11);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_12 g_17
 * writes: g_12 g_17
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_7 = 0x1173L;
    int32_t l_16 = 0x746A1C17L;
    g_17 ^= (l_16 = func_2(g_6[0], l_7, l_7));
    return l_16;
}


/* ------------------------------------------ */
/* 
 * reads : g_12 g_6
 * writes: g_12
 */
static int32_t  func_2(int32_t  p_3, uint32_t  p_4, int16_t  p_5)
{ /* block id: 1 */
    p_3 = (safe_rshift_func_int8_t_s_s(func_10(p_5), ((g_6[0] || ((-1L) == (+g_6[0]))) , p_4)));
    return p_3;
}


/* ------------------------------------------ */
/* 
 * reads : g_12 g_6
 * writes: g_12
 */
static int8_t  func_10(uint16_t  p_11)
{ /* block id: 2 */
    --g_12;
    return g_6[0];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
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

XXX max expression depth: 6
breakdown:
   depth: 1, occurrence: 7
   depth: 5, occurrence: 1
   depth: 6, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 10
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 6

XXX percentage a fresh-made variable is used: 35.7
XXX percentage an existing variable is used: 64.3
********************* end of statistics **********************/

