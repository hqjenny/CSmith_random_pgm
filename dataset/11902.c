/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 11902.c
 * Seed:      3100375699
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_7 = 0UL;
static int8_t g_8 = 0xB7L;
static int32_t g_9[3][2][8] = {{{0xE9378F1EL,0L,0x8A11015AL,0xE9378F1EL,0xC619A80BL,0x8A11015AL,0x8A11015AL,0xC619A80BL},{0xC619A80BL,0x8A11015AL,0x8A11015AL,0xC619A80BL,0xE9378F1EL,0x8A11015AL,0L,0xE9378F1EL}},{{0xC619A80BL,0L,1L,0xC619A80BL,0xC619A80BL,1L,0L,0xC619A80BL},{0xE9378F1EL,0L,0x8A11015AL,0xE9378F1EL,0xC619A80BL,0x8A11015AL,0x8A11015AL,0xC619A80BL}},{{0xC619A80BL,0x8A11015AL,0x8A11015AL,0xC619A80BL,0xE9378F1EL,0x8A11015AL,0L,0xE9378F1EL},{0xC619A80BL,0L,1L,0xC619A80BL,0xC619A80BL,1L,0x8A11015AL,0xE9378F1EL}}};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static uint32_t  func_4(int8_t  p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_8 g_9
 * writes: g_9
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int16_t l_6 = 0x4469L;
    g_9[0][0][2] = ((safe_div_func_uint32_t_u_u(func_4(l_6), g_8)) ^ 0L);
    return g_9[1][1][7];
}


/* ------------------------------------------ */
/* 
 * reads : g_7
 * writes:
 */
static uint32_t  func_4(int8_t  p_5)
{ /* block id: 1 */
    return g_7;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_9[i][j][k], "g_9[i][j][k]", print_hash_value);
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 3
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 80
XXX percentage an existing variable is used: 20
********************* end of statistics **********************/

