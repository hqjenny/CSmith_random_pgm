/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 10648.c
 * Seed:      1344621066
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_3 = 0x643CDF98L;
static volatile int8_t g_17[9][3] = {{0L,(-1L),(-1L)},{0L,(-1L),0L},{0L,0L,(-1L)},{0L,0L,0L},{0L,0L,0L},{0L,(-1L),(-1L)},{0L,(-1L),0L},{0L,0L,(-1L)},{0L,0L,0L}};
static volatile uint16_t g_19 = 0xFBCEL;/* VOLATILE GLOBAL g_19 */


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_19
 * writes: g_3 g_19
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_2 = 0UL;
    int32_t l_12 = 0x3371247AL;
    int32_t l_18 = (-1L);
    g_3 &= l_2;
lbl_16:
    for (l_2 = 0; (l_2 <= 53); l_2 = safe_add_func_int32_t_s_s(l_2, 6))
    { /* block id: 4 */
        uint8_t l_13 = 0x0EL;
        l_12 = (safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(l_2, g_3)), g_3)) & l_2), 1UL));
        if (g_3)
            goto lbl_16;
        l_13--;
    }
    g_19--;
    return l_2;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_17[i][j], "g_17[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_19, "g_19", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 7
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
   depth: 1, occurrence: 9
   depth: 2, occurrence: 1
   depth: 5, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 91.7

XXX forward jumps: 1
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 3

XXX percentage a fresh-made variable is used: 53.8
XXX percentage an existing variable is used: 46.2
********************* end of statistics **********************/

