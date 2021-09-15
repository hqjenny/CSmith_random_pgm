/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 1053.c
 * Seed:      1281287986
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int16_t g_3 = 1L;/* VOLATILE GLOBAL g_3 */
static volatile int32_t g_4[9][2] = {{(-7L),(-1L)},{(-7L),(-7L)},{(-7L),(-1L)},{(-7L),(-7L)},{(-7L),(-1L)},{(-7L),(-7L)},{(-7L),(-1L)},{(-7L),(-7L)},{(-7L),(-1L)}};
static int32_t g_5 = 0x68BE135EL;


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_5
 * writes: g_5 g_4
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_2[6][3] = {{0x66FE7D8AL,0x05BA7723L,0x66FE7D8AL},{0x4B25B3B9L,0UL,0x7013DCE9L},{0x4B25B3B9L,0x4B25B3B9L,0UL},{0x66FE7D8AL,0UL,0UL},{0UL,0x05BA7723L,0x7013DCE9L},{0x66FE7D8AL,0x05BA7723L,0x66FE7D8AL}};
    uint32_t l_8 = 0x69161D59L;
    int i, j;
    if (l_2[5][2])
    { /* block id: 1 */
        int32_t l_11 = 0x184E5A94L;
        if (g_3)
        { /* block id: 2 */
            for (g_5 = (-19); (g_5 >= 16); g_5++)
            { /* block id: 5 */
                l_8 |= 0xC2132456L;
                if (g_5)
                    break;
            }
        }
        else
        { /* block id: 9 */
            int32_t l_12 = 0x84902314L;
            l_12 = (safe_rshift_func_uint8_t_u_s((l_11 ^= (g_5 | g_5)), g_3));
            l_12 |= 0xA83A0F0FL;
            g_5 &= (l_12 = 0x2C593C86L);
        }
    }
    else
    { /* block id: 16 */
        g_4[7][1] = 1L;
    }
    return l_2[5][2];
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
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 12
   depth: 2, occurrence: 2
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 7
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 9
XXX percentage of non-volatile access: 81.2

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 10
XXX max block depth: 3
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 2
   depth: 2, occurrence: 4
   depth: 3, occurrence: 2

XXX percentage a fresh-made variable is used: 35.7
XXX percentage an existing variable is used: 64.3
********************* end of statistics **********************/

