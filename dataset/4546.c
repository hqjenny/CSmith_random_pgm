/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-structs --no-pointers --no-math64 --max-funcs 4 --no-unions --output 4546.c
 * Seed:      395343210
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_5[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int32_t g_8 = 0L;


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_8
 * writes: g_5 g_8
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_4 = 4UL;
lbl_10:
    g_5[0] = (0xA3L == (l_4 = (safe_rshift_func_uint8_t_u_s(255UL, 5))));
    for (l_4 = (-28); (l_4 <= 35); l_4 = safe_add_func_int32_t_s_s(l_4, 1))
    { /* block id: 5 */
        int8_t l_9[5][7] = {{(-2L),1L,1L,(-2L),1L,1L,(-2L)},{1L,(-2L),1L,1L,(-2L),1L,1L},{(-2L),(-2L),0L,(-2L),(-2L),0L,(-2L)},{(-2L),1L,1L,(-2L),1L,1L,(-2L)},{1L,(-2L),1L,1L,(-2L),1L,1L}};
        int i, j;
        if (g_5[4])
            break;
        for (g_8 = 0; (g_8 <= 7); g_8 += 1)
        { /* block id: 9 */
            int i;
            if (g_5[g_8])
                break;
            return l_9[4][1];
        }
        if (l_4)
            goto lbl_10;
    }
    return g_5[5];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_8, "g_8", print_hash_value);
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 6
   depth: 2, occurrence: 2
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 8
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 3
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 60
XXX percentage an existing variable is used: 40
********************* end of statistics **********************/

