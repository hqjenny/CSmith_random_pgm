/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 11166.c
 * Seed:      2525125436
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_6[8][4] = {{0x2124F84BL,0x0C170CD5L,0x0AA39ED0L,0x0AA39ED0L},{0x9978F3C3L,0x9978F3C3L,0x2124F84BL,0x0AA39ED0L},{2L,0x0C170CD5L,2L,0x2124F84BL},{2L,0x2124F84BL,0x2124F84BL,2L},{0x9978F3C3L,0x2124F84BL,0x0AA39ED0L,0x2124F84BL},{0x2124F84BL,0x0C170CD5L,0x0AA39ED0L,0x0AA39ED0L},{0x9978F3C3L,0x9978F3C3L,0x2124F84BL,0x0AA39ED0L},{2L,0x0C170CD5L,2L,0x2124F84BL}};
static int16_t g_7 = 4L;
static uint32_t g_8 = 9UL;
static volatile uint16_t g_11 = 1UL;/* VOLATILE GLOBAL g_11 */


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_7 g_8 g_11
 * writes: g_7 g_11
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int8_t l_9 = 0x55L;
    int32_t l_10 = 0xFC88EB98L;
    l_10 &= (l_9 = (safe_mul_func_uint8_t_u_u((g_7 |= (safe_lshift_func_uint8_t_u_s(g_6[4][2], 2))), g_8)));
    g_11++;
    l_10 ^= 0L;
    l_10 = g_6[4][2];
    return l_9;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
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

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 8
   depth: 5, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 5
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 70

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 60
XXX percentage an existing variable is used: 40
********************* end of statistics **********************/

