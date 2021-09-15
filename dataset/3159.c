/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 3159.c
 * Seed:      64171266
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_4 = 0xC5L;
static int32_t g_8[10][3] = {{0x780CA9F8L,9L,9L},{4L,(-1L),4L},{0x780CA9F8L,0x780CA9F8L,9L},{0x369BD697L,(-1L),0x369BD697L},{0x780CA9F8L,9L,9L},{4L,(-1L),4L},{0x780CA9F8L,0x780CA9F8L,9L},{0x369BD697L,(-1L),0x369BD697L},{0x780CA9F8L,9L,9L},{4L,(-1L),4L}};


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8
 * writes: g_4 g_8
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_2 = 0x2EE7L;
    int32_t l_3 = 0xAB8C3AD3L;
    uint32_t l_5 = 9UL;
    l_5 = (l_2 , (g_4 = (l_3 = 0x89B54615L)));
    for (l_5 = 0; (l_5 == 29); l_5 = safe_add_func_int16_t_s_s(l_5, 2))
    { /* block id: 6 */
        uint8_t l_9 = 0x84L;
        int32_t l_12 = 0xD1C58BDFL;
        g_8[8][2] = ((l_9--) & l_12);
        g_8[5][1] = (safe_div_func_uint8_t_u_u(g_8[5][1], (safe_rshift_func_uint16_t_u_u(65535UL, 10))));
    }
    return l_3;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1
   depth: 3, occurrence: 2
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 7
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 63.6
XXX percentage an existing variable is used: 36.4
********************* end of statistics **********************/

