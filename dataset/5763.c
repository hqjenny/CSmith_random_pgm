/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 5763.c
 * Seed:      1253499758
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static const volatile uint8_t g_5[8][8] = {{1UL,0x99L,0x63L,0xB2L,0xB8L,254UL,3UL,254UL},{0x15L,0xB8L,0UL,0xB8L,0x15L,252UL,0xB0L,0xC0L},{0xB0L,254UL,0x0BL,1UL,0xC0L,0xDAL,0x8EL,0xB8L},{0UL,0x63L,0x0BL,0x99L,255UL,0xB0L,0xB0L,255UL},{0xC0L,0UL,0UL,0xC0L,0xB2L,0xCDL,3UL,0x8EL},{0x99L,0x0BL,0x63L,0UL,0xCDL,251UL,0x63L,0xF3L},{0xF3L,0x99L,0xDAL,1UL,0x8EL,0xB2L,0x8EL,1UL},{255UL,0UL,255UL,254UL,251UL,1UL,0UL,0x8EL}};
static uint16_t g_6 = 0UL;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5
 * writes: g_6
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_4 = 9UL;
    g_6 = (safe_mod_func_uint16_t_u_u(l_4, g_5[6][2]));
    return g_5[6][1];
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
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_6, "g_6", print_hash_value);
    int checksum = platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return checksum;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
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
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 50

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 75
XXX percentage an existing variable is used: 25
********************* end of statistics **********************/

