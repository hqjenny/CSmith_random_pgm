/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 15288.c
 * Seed:      1557881194
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_4 = 0UL;
static uint16_t g_8[2][6] = {{65528UL,0x90A2L,65528UL,65528UL,0x90A2L,65528UL},{65528UL,0x90A2L,65528UL,65528UL,0x90A2L,65528UL}};
static int32_t g_12[4] = {0x1509CF13L,0x1509CF13L,0x1509CF13L,0x1509CF13L};


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_8 g_12
 * writes: g_4 g_8 g_12
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int16_t l_2 = 8L;
    int32_t l_3 = 0x394643CDL;
    int32_t l_7[5][3] = {{(-7L),(-7L),0xA149CEC7L},{0x1551DA62L,0x1551DA62L,(-1L)},{(-7L),(-7L),0xA149CEC7L},{0x1551DA62L,0x1551DA62L,(-1L)},{(-7L),(-7L),0xA149CEC7L}};
    int i, j;
    g_4--;
lbl_15:
    ++g_8[1][2];
    g_12[0] ^= (l_7[0][1] |= (~g_8[1][2]));
    for (g_4 = 12; (g_4 == 57); g_4 = safe_add_func_int16_t_s_s(g_4, 1))
    { /* block id: 7 */
        if (g_4)
            goto lbl_15;
        return g_12[0];
    }
    return g_12[0];
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
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_12[i], "g_12[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 8
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 5
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 7
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 54.5
XXX percentage an existing variable is used: 45.5
********************* end of statistics **********************/

