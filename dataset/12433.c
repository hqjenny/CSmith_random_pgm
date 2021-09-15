/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 12433.c
 * Seed:      4054311352
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint32_t g_2[5][6] = {{0UL,4294967291UL,0UL,1UL,4294967291UL,0x7FA5C62EL},{0UL,6UL,1UL,1UL,6UL,0UL},{0UL,3UL,0x7FA5C62EL,1UL,3UL,1UL},{0UL,4294967291UL,0UL,1UL,4294967291UL,0x7FA5C62EL},{0UL,6UL,1UL,1UL,6UL,0UL}};
static volatile int16_t g_3 = 1L;/* VOLATILE GLOBAL g_3 */
static volatile int32_t g_4 = 0xA924C000L;/* VOLATILE GLOBAL g_4 */
static volatile int32_t g_5 = 0x51C3C39BL;/* VOLATILE GLOBAL g_5 */
static int32_t g_6 = 0x5A97963BL;
static uint16_t g_12[1][9] = {{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}};
static int16_t g_16 = 0x6FEBL;


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_6 g_12 g_3 g_16
 * writes: g_3 g_6 g_12 g_16 g_4
 */
static int16_t  func_1(void)
{ /* block id: 0 */
lbl_9:
    g_3 = g_2[1][3];
    for (g_6 = 0; (g_6 > 12); g_6 = safe_add_func_int32_t_s_s(g_6, 1))
    { /* block id: 4 */
        int8_t l_15 = 0xF8L;
        if (g_6)
            goto lbl_9;
        g_4 = (g_16 |= (safe_mul_func_uint8_t_u_u((g_12[0][4] |= 1UL), (safe_sub_func_uint32_t_u_u(l_15, g_3)))));
    }
    return g_3;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_12[i][j], "g_12[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_16, "g_16", print_hash_value);
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
   depth: 1, occurrence: 5
   depth: 2, occurrence: 1
   depth: 5, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 3
XXX times a volatile is read: 3
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 7
XXX percentage of non-volatile access: 50

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 5
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 62.5
XXX percentage an existing variable is used: 37.5
********************* end of statistics **********************/

