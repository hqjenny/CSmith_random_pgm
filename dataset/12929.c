/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 12929.c
 * Seed:      682161972
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint8_t g_2 = 0x05L;/* VOLATILE GLOBAL g_2 */
static volatile uint16_t g_3[8][2][4] = {{{0xD7C1L,1UL,65535UL,0x97EEL},{0x5432L,65535UL,0xA6E6L,1UL}},{{0UL,0xA9C4L,2UL,0UL},{2UL,0UL,0UL,2UL}},{{0UL,65530UL,1UL,0xA6E6L},{0xD7C1L,0x844AL,0x97EEL,65535UL}},{{0UL,65535UL,0x7C7CL,65535UL},{0x7FBFL,0x844AL,2UL,0xA6E6L}},{{65535UL,65530UL,0xD7C1L,2UL},{65535UL,0UL,0x121FL,0UL}},{{0xD7C1L,0xA9C4L,65535UL,1UL},{0x74DDL,65535UL,0UL,0xE0B4L}},{{65535UL,0UL,65535UL,65535UL},{65535UL,0x7FBFL,0UL,65535UL}},{{0UL,65535UL,0x844AL,1UL},{1UL,65535UL,1UL,1UL}}};


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3
 * writes: g_3
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    g_3[0][0][3] = g_2;
    return g_3[0][0][3];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 0

XXX times a non-volatile is read: 0
XXX times a non-volatile is write: 0
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 0

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
********************* end of statistics **********************/

