/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 17119.c
 * Seed:      3208116598
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint8_t g_2 = 2UL;/* VOLATILE GLOBAL g_2 */
static uint32_t g_3[8][8] = {{6UL,0x012E1DFEL,3UL,0xA654FDDDL,0x29A3DF60L,0UL,0xC25FCC58L,18446744073709551609UL},{0xC25FCC58L,1UL,3UL,18446744073709551615UL,18446744073709551615UL,3UL,1UL,0xC25FCC58L},{0x29A3DF60L,18446744073709551615UL,6UL,1UL,0x49C9FB37L,0x012E1DFEL,6UL,3UL},{0UL,0xA654FDDDL,0x49C9FB37L,1UL,1UL,0x012E1DFEL,1UL,1UL},{1UL,18446744073709551615UL,1UL,6UL,0x012E1DFEL,3UL,0xA654FDDDL,0x29A3DF60L},{1UL,1UL,1UL,6UL,0UL,0UL,0xA654FDDDL,0xA654FDDDL},{1UL,0xA654FDDDL,6UL,6UL,0xA654FDDDL,1UL,3UL,18446744073709551609UL},{0x29A3DF60L,6UL,0xF4672159L,3UL,0xC25FCC58L,18446744073709551615UL,18446744073709551615UL,0UL}};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3
 * writes: g_3
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    g_3[0][2] ^= g_2;
    return g_3[3][5];
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
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

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

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
********************* end of statistics **********************/

